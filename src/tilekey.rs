//! Apple Maps tile key decoding.
//!
//! Decodes tile database keys (key_a, key_b, key_c, key_d) to geographic coordinates.
//! Based on reverse engineering of Apple Maps tile cache format.
//!
//! The tile keys use multiple encoding schemes based on key magnitudes:
//! - Web Mercator projection for high key_c values
//! - Tile index system for lower key_c values

use std::f64::consts::PI;

/// Decoded tile location with coordinates and metadata
#[derive(Debug, Clone)]
pub struct TileLocation {
    /// Latitude in degrees (-90 to 90)
    pub lat: f64,
    /// Longitude in degrees (-180 to 180)
    pub lon: f64,
    /// Zoom level (0-20+)
    pub zoom: u8,
    /// Tileset identifier
    pub tileset: u32,
    /// Accuracy description
    pub accuracy: TileAccuracy,
    /// Bounding box if calculable
    pub bounds: Option<TileBounds>,
}

/// Tile bounding box
#[derive(Debug, Clone, Copy)]
pub struct TileBounds {
    pub north: f64,
    pub south: f64,
    pub east: f64,
    pub west: f64,
}

impl TileBounds {
    /// Get center point
    pub fn center(&self) -> (f64, f64) {
        (
            (self.north + self.south) / 2.0,
            (self.east + self.west) / 2.0,
        )
    }

    /// Get approximate coverage in kilometers
    pub fn coverage_km(&self) -> f64 {
        (self.north - self.south) * 111.0 // Rough km per degree
    }
}

/// Accuracy level of decoded coordinates
#[derive(Debug, Clone, Copy, PartialEq)]
pub enum TileAccuracy {
    /// High accuracy (±0.1-0.2°)
    High,
    /// Medium accuracy (±1-4°)
    Medium,
    /// Low accuracy or unknown
    Low,
    /// Cannot decode - world/continent tile
    WorldTile,
    /// Cannot decode - composite index
    CompositeIndex,
}

impl TileAccuracy {
    pub fn as_str(&self) -> &'static str {
        match self {
            TileAccuracy::High => "High (±0.1°)",
            TileAccuracy::Medium => "Medium (±2-4°)",
            TileAccuracy::Low => "Low (±5°+)",
            TileAccuracy::WorldTile => "World/Continent tile",
            TileAccuracy::CompositeIndex => "Composite index encoding",
        }
    }
}

/// Calculate tile bounding box from center point and zoom level
pub fn calculate_tile_bounds(lat: f64, lon: f64, zoom: u8) -> TileBounds {
    let n = 2f64.powi(zoom as i32);

    // Tile size in degrees (simplified)
    let tile_size_lon = 360.0 / n;

    // Latitude adjusted for Mercator projection
    let lat_rad = lat.to_radians();
    let tile_size_lat = (360.0 / n) * lat_rad.cos();

    let half_lon = tile_size_lon / 2.0;
    let half_lat = tile_size_lat / 2.0;

    TileBounds {
        north: (lat + half_lat).min(90.0),
        south: (lat - half_lat).max(-90.0),
        east: (lon + half_lon).min(180.0),
        west: (lon - half_lon).max(-180.0),
    }
}

/// Decode Apple tile keys to geographic coordinates.
///
/// Apple uses multiple encoding schemes based on key magnitudes:
/// - ENCODING TYPE 1: High key_c (>100M) - Web Mercator projection
/// - ENCODING TYPE 2: Low key_c (<100M) - Tile Index system
///
/// # Arguments
/// * `key_a` - Tileset identifier
/// * `key_b` - X coordinate component (signed interpretation)
/// * `key_c` - Y coordinate component (signed interpretation)
/// * `key_d` - Contains zoom level in byte 1
///
/// # Returns
/// `Some(TileLocation)` if coordinates can be decoded, `None` otherwise
pub fn decode_apple_tile_key(
    key_a: u32,
    key_b: u32,
    key_c: u32,
    key_d: u32,
) -> Option<TileLocation> {
    // Extract zoom from byte 1 of key_d
    let key_d_bytes = key_d.to_le_bytes();
    let mut zoom = key_d_bytes[1];

    if zoom == 0 {
        return None;
    }

    // Clamp very high zoom values
    if zoom > 100 {
        zoom = 12;
    }

    // Convert to signed integers
    let key_b_signed = key_b as i32;
    let key_c_signed = key_c as i32;

    // Calculate ratio as discriminator
    let ratio = if key_c_signed.abs() > 0 {
        (key_b_signed.abs() as f64) / (key_c_signed.abs() as f64)
    } else {
        999.0
    };

    // Very small key_c indicates world/continent tile
    if key_c_signed.abs() < 1_000_000 {
        return None; // Can't reliably decode world tiles
    }

    let (lat, lon, accuracy) = if ratio >= 0.5 && ratio <= 2.0 && key_c_signed.abs() > 20_000_000 {
        // ENCODING: Ratio ~1 with moderate-to-high key_c
        decode_ratio_encoding(key_b_signed, key_c_signed)?
    } else if key_c_signed.abs() < 150_000_000 {
        // ENCODING TYPE 2: Low key_c - multiple variants
        decode_low_key_c(key_b_signed, key_c_signed, zoom)?
    } else {
        // ENCODING TYPE 1: High key_c - Web Mercator
        decode_web_mercator(key_b_signed, key_c_signed, ratio)?
    };

    // Validate coordinates
    if lat.abs() > 90.0 || lon.abs() > 180.0 {
        return None;
    }

    // Skip extreme polar regions (likely false positives)
    if lat.abs() > 85.0 {
        return None;
    }

    let bounds = calculate_tile_bounds(lat, lon, zoom);

    Some(TileLocation {
        lat,
        lon,
        zoom,
        tileset: key_a,
        accuracy,
        bounds: Some(bounds),
    })
}

/// Decode using ratio-based encoding (key_b ≈ key_c)
fn decode_ratio_encoding(key_b: i32, key_c: i32) -> Option<(f64, f64, TileAccuracy)> {
    let n = 2f64.powi(12);
    let x_scale = 176.36;
    let y_scale = 256.0;

    let x_norm = (key_b as f64) / (if key_b >= 0 { x_scale } else { -x_scale }) / (256.0 * n);
    let lon = x_norm * 360.0 - 180.0;

    let y_norm = (key_c as f64) / y_scale / (256.0 * n);

    if y_norm < 0.0 || y_norm > 1.0 {
        return None;
    }

    let lat_rad = (PI * (1.0 - 2.0 * y_norm)).sinh().atan();
    let lat = lat_rad.to_degrees();

    Some((lat, lon, TileAccuracy::Medium))
}

/// Decode low key_c values using multiple variant formulas
fn decode_low_key_c(key_b: i32, key_c: i32, zoom: u8) -> Option<(f64, f64, TileAccuracy)> {
    let key_b_abs = key_b.abs();
    let key_c_abs = key_c.abs();

    // Try various encoding variants based on key magnitudes
    let (n, x_scale, y_scale, hemisphere_correct) = if key_b_abs > 1_300_000_000 {
        // VARIANT A: Very high key_b
        if key_c_abs > 100_000_000 {
            (2f64.powi(16), 556.05, 16.0, key_b_abs < 2_000_000_000)
        } else if key_c_abs > 50_000_000 {
            (2f64.powi(16), 516.70, 8.0, key_b_abs < 2_000_000_000)
        } else if key_c_abs > 20_000_000 {
            (2f64.powi(12), 2066.80, 64.0, false)
        } else {
            (2f64.powi(12), 1033.40, 16.0, false)
        }
    } else if key_b_abs > 700_000_000 && key_c_abs < 10_000_000 {
        // VARIANT B: High key_b with low key_c
        (2f64.powi(12), 1033.40, 16.0, false)
    } else if key_b_abs > 500_000_000 && key_c_abs < 10_000_000 {
        // VARIANT C: Medium key_b with low key_c
        (2f64.powi(12), 516.70, 8.0, false)
    } else if key_b_abs > 700_000_000 && key_c_abs > 50_000_000 && key_c_abs < 150_000_000 {
        // VARIANT D: Medium-high key_b with medium-high key_c
        (2f64.powi(16), 152.40, 16.0, false)
    } else {
        // VARIANT E: Default Web Mercator with y_scale=4.0
        (2f64.powi(16), 258.35, 4.0, false)
    };

    let signed_x_scale = if key_b >= 0 { x_scale } else { -x_scale };
    let x_norm = (key_b as f64) / signed_x_scale / (256.0 * n);
    let mut lon = x_norm * 360.0 - 180.0;

    if hemisphere_correct {
        lon += 180.0;
    }

    let y_norm = (key_c as f64) / y_scale / (256.0 * n);

    if y_norm >= 0.0 && y_norm <= 1.0 {
        let lat_rad = (PI * (1.0 - 2.0 * y_norm)).sinh().atan();
        let lat = lat_rad.to_degrees();

        // Check for polar false positives
        if lat.abs() > 80.0 && key_c_abs < 10_000_000 {
            // Fallback to tile index method
            return decode_tile_index(key_b, key_c, zoom);
        }

        return Some((lat, lon, TileAccuracy::Medium));
    }

    // Fallback to tile index
    decode_tile_index(key_b, key_c, zoom)
}

/// Decode using tile index method
fn decode_tile_index(key_b: i32, key_c: i32, zoom: u8) -> Option<(f64, f64, TileAccuracy)> {
    let is_low_key_b = key_b.abs() < 500_000_000;
    let n_zoom = 2f64.powi(zoom as i32);

    let (div_x, div_y) = if is_low_key_b {
        (65536i32, 1024i32)
    } else {
        (4096i32, 16384i32)
    };

    let x_tile = ((key_b / div_x) % (n_zoom as i32)) as f64;
    let y_tile = ((key_c / div_y) % (n_zoom as i32)) as f64;

    let lon = (x_tile / n_zoom) * 360.0 - 180.0;
    let lat_rad = (PI * (1.0 - 2.0 * y_tile / n_zoom)).sinh().atan();
    let lat = lat_rad.to_degrees();

    Some((lat, lon, TileAccuracy::Medium))
}

/// Decode high key_c using Web Mercator projection
fn decode_web_mercator(key_b: i32, key_c: i32, ratio: f64) -> Option<(f64, f64, TileAccuracy)> {
    let key_c_abs = key_c.abs();
    let key_b_abs = key_b.abs();

    // Special cases based on ratio and key magnitudes
    let (n, x_scale, y_scale, hemisphere_correct) = if key_c_abs > 900_000_000
        && ratio >= 0.3
        && ratio <= 0.5
    {
        (2f64.powi(16), 131.30, 128.0, key_b_abs < 2_000_000_000)
    } else if key_c_abs >= 800_000_000 && key_c_abs <= 820_000_000 && ratio >= 2.0 && ratio <= 2.3 {
        (2f64.powi(16), 354.0, 128.0, false)
    } else if key_c_abs > 800_000_000 && ratio < 0.1 {
        // Composite index - can't decode
        return None;
    } else {
        // Standard Web Mercator
        (2f64.powi(16), 258.35, 64.0, false)
    };

    let signed_x_scale = if key_b >= 0 { x_scale } else { -x_scale };
    let x_norm = (key_b as f64) / signed_x_scale / (256.0 * n);
    let mut lon = x_norm * 360.0 - 180.0;

    if hemisphere_correct {
        lon += 180.0;
    }

    let y_norm = (key_c as f64) / y_scale / (256.0 * n);

    if y_norm >= 0.0 && y_norm <= 1.0 {
        let lat_rad = (PI * (1.0 - 2.0 * y_norm)).sinh().atan();
        let lat = lat_rad.to_degrees();
        return Some((lat, lon, TileAccuracy::High));
    }

    // Try zoom 12 fallback
    let n = 2f64.powi(12);
    let x_scale = 4095.10;
    let y_scale = 63.99;

    let x_norm = (key_b as f64) / x_scale / (256.0 * n);
    let lon = x_norm * 360.0 - 180.0;

    let y_norm = (key_c as f64) / y_scale / (256.0 * n);

    if y_norm >= 0.0 && y_norm <= 1.0 {
        let lat_rad = (PI * (1.0 - 2.0 * y_norm)).sinh().atan();
        let lat = lat_rad.to_degrees();
        return Some((lat, lon, TileAccuracy::High));
    }

    None
}

/// Convert tile coordinates (x, y, zoom) to lat/lon
pub fn tile_to_latlng(x: u32, y: u32, zoom: u8) -> (f64, f64) {
    let n = 2f64.powi(zoom as i32);
    let lon = (x as f64) / n * 360.0 - 180.0;
    let lat_rad = (PI * (1.0 - 2.0 * (y as f64) / n)).sinh().atan();
    (lat_rad.to_degrees(), lon)
}

/// Convert lat/lon to tile coordinates at given zoom
pub fn latlng_to_tile(lat: f64, lon: f64, zoom: u8) -> (u32, u32) {
    let n = 2f64.powi(zoom as i32);
    let x = ((lon + 180.0) / 360.0 * n).floor() as u32;
    let lat_rad = lat.to_radians();
    let y = ((1.0 - lat_rad.tan().asinh() / PI) / 2.0 * n).floor() as u32;
    (x, y)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_tile_to_latlng() {
        // Tile 0/0/0 center should be roughly (0, -180) corner
        let (lat, lon) = tile_to_latlng(0, 0, 0);
        assert!(lat > 80.0); // North corner
        assert!((lon - (-180.0)).abs() < 0.01);
    }

    #[test]
    fn test_latlng_to_tile() {
        // London approximate
        let (x, y) = latlng_to_tile(51.5, -0.1, 10);
        assert!(x > 500 && x < 520);
        assert!(y > 330 && y < 350);
    }

    #[test]
    fn test_calculate_bounds() {
        let bounds = calculate_tile_bounds(0.0, 0.0, 10);
        assert!(bounds.north > bounds.south);
        assert!(bounds.east > bounds.west);
    }
}
