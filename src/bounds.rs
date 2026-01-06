//! Coordinate bounds extraction for VMP4 tiles.
//!
//! Extracts precise geographic bounds from tile sections 0x1E and 0x02.
//! These sections store coordinate ranges as either floats or doubles.

use std::io::{Cursor, Read};

/// Geographic bounding box for a tile
#[derive(Debug, Clone, Copy)]
pub struct CoordinateBounds {
    /// Minimum latitude (southern edge)
    pub lat_min: f64,
    /// Maximum latitude (northern edge)
    pub lat_max: f64,
    /// Minimum longitude (western edge)
    pub lon_min: f64,
    /// Maximum longitude (eastern edge)
    pub lon_max: f64,
    /// Source section type ID
    pub source_section: u16,
    /// Encoding used (floats or doubles)
    pub encoding: BoundsEncoding,
}

/// Encoding type for bounds data
#[derive(Debug, Clone, Copy, PartialEq)]
pub enum BoundsEncoding {
    /// 4 x f32 (16 bytes total)
    Float32,
    /// 4 x f64 (32 bytes total)
    Float64,
}

impl CoordinateBounds {
    /// Get the center point of the bounding box
    pub fn center(&self) -> (f64, f64) {
        (
            (self.lat_min + self.lat_max) / 2.0,
            (self.lon_min + self.lon_max) / 2.0,
        )
    }

    /// Get width in degrees
    pub fn width(&self) -> f64 {
        self.lon_max - self.lon_min
    }

    /// Get height in degrees
    pub fn height(&self) -> f64 {
        self.lat_max - self.lat_min
    }

    /// Get approximate coverage in square kilometers
    pub fn coverage_km2(&self) -> f64 {
        let lat_km = self.height() * 111.0; // ~111 km per degree latitude
        let center_lat = (self.lat_min + self.lat_max) / 2.0;
        let lon_km = self.width() * 111.0 * center_lat.to_radians().cos();
        lat_km * lon_km
    }

    /// Check if a point is within the bounds
    pub fn contains(&self, lat: f64, lon: f64) -> bool {
        lat >= self.lat_min && lat <= self.lat_max && lon >= self.lon_min && lon <= self.lon_max
    }

    /// Check if bounds are valid (within earth coordinate ranges)
    pub fn is_valid(&self) -> bool {
        self.lat_min >= -90.0
            && self.lat_max <= 90.0
            && self.lon_min >= -180.0
            && self.lon_max <= 180.0
            && self.lat_min < self.lat_max
            && self.lon_min < self.lon_max
    }
}

/// Parse coordinate bounds from section data.
///
/// Tries both f64 (doubles) and f32 (floats) encodings.
/// Returns the first valid bounds found.
///
/// # Arguments
/// * `data` - Raw decompressed section data
/// * `section_type` - The section type ID (for metadata)
pub fn parse_coordinate_bounds(data: &[u8], section_type: u16) -> Option<CoordinateBounds> {
    // Try as doubles first (more precise)
    if let Some(bounds) = try_parse_as_doubles(data, section_type) {
        return Some(bounds);
    }

    // Try as floats
    if let Some(bounds) = try_parse_as_floats(data, section_type) {
        return Some(bounds);
    }

    None
}

/// Try to parse bounds as 4 doubles (32 bytes)
fn try_parse_as_doubles(data: &[u8], section_type: u16) -> Option<CoordinateBounds> {
    if data.len() < 32 {
        return None;
    }

    let mut cursor = Cursor::new(data);
    let mut buf = [0u8; 8];

    let values: Vec<f64> = (0..4)
        .filter_map(|_| {
            cursor.read_exact(&mut buf).ok()?;
            Some(f64::from_le_bytes(buf))
        })
        .collect();

    if values.len() != 4 {
        return None;
    }

    // Check if values are in valid coordinate ranges
    if !values.iter().all(|v| *v >= -180.0 && *v <= 180.0) {
        return None;
    }

    let bounds = CoordinateBounds {
        lat_min: values[0],
        lat_max: values[1],
        lon_min: values[2],
        lon_max: values[3],
        source_section: section_type,
        encoding: BoundsEncoding::Float64,
    };

    if bounds.is_valid() {
        Some(bounds)
    } else {
        // Try alternate ordering (lon, lat)
        let alt_bounds = CoordinateBounds {
            lon_min: values[0],
            lon_max: values[1],
            lat_min: values[2],
            lat_max: values[3],
            source_section: section_type,
            encoding: BoundsEncoding::Float64,
        };
        if alt_bounds.is_valid() {
            Some(alt_bounds)
        } else {
            None
        }
    }
}

/// Try to parse bounds as 4 floats (16 bytes)
fn try_parse_as_floats(data: &[u8], section_type: u16) -> Option<CoordinateBounds> {
    if data.len() < 16 {
        return None;
    }

    let mut cursor = Cursor::new(data);
    let mut buf = [0u8; 4];

    let values: Vec<f32> = (0..4)
        .filter_map(|_| {
            cursor.read_exact(&mut buf).ok()?;
            Some(f32::from_le_bytes(buf))
        })
        .collect();

    if values.len() != 4 {
        return None;
    }

    // Check if values are in valid coordinate ranges
    if !values.iter().all(|v| *v >= -180.0 && *v <= 180.0) {
        return None;
    }

    let bounds = CoordinateBounds {
        lat_min: values[0] as f64,
        lat_max: values[1] as f64,
        lon_min: values[2] as f64,
        lon_max: values[3] as f64,
        source_section: section_type,
        encoding: BoundsEncoding::Float32,
    };

    if bounds.is_valid() {
        Some(bounds)
    } else {
        // Try alternate ordering (lon, lat)
        let alt_bounds = CoordinateBounds {
            lon_min: values[0] as f64,
            lon_max: values[1] as f64,
            lat_min: values[2] as f64,
            lat_max: values[3] as f64,
            source_section: section_type,
            encoding: BoundsEncoding::Float32,
        };
        if alt_bounds.is_valid() {
            Some(alt_bounds)
        } else {
            None
        }
    }
}

/// Try to find and parse bounds from multiple section types.
///
/// Searches through common sections that contain coordinate bounds:
/// - 0x1E: Primary coordinates section
/// - 0x02: Secondary coordinates section
pub fn find_coordinate_bounds(sections: &[(u16, Vec<u8>)]) -> Option<CoordinateBounds> {
    // Priority order for bound sections
    const BOUND_SECTIONS: [u16; 2] = [0x1E, 0x02];

    for &section_type in &BOUND_SECTIONS {
        for (type_id, data) in sections {
            if *type_id == section_type {
                if let Some(bounds) = parse_coordinate_bounds(data, section_type) {
                    return Some(bounds);
                }
            }
        }
    }

    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_bounds_center() {
        let bounds = CoordinateBounds {
            lat_min: 37.0,
            lat_max: 38.0,
            lon_min: -123.0,
            lon_max: -122.0,
            source_section: 0x1E,
            encoding: BoundsEncoding::Float64,
        };
        let (lat, lon) = bounds.center();
        assert!((lat - 37.5).abs() < 0.001);
        assert!((lon - (-122.5)).abs() < 0.001);
    }

    #[test]
    fn test_bounds_contains() {
        let bounds = CoordinateBounds {
            lat_min: 37.0,
            lat_max: 38.0,
            lon_min: -123.0,
            lon_max: -122.0,
            source_section: 0x1E,
            encoding: BoundsEncoding::Float64,
        };
        assert!(bounds.contains(37.5, -122.5));
        assert!(!bounds.contains(39.0, -122.5));
        assert!(!bounds.contains(37.5, -121.0));
    }

    #[test]
    fn test_bounds_validity() {
        let valid = CoordinateBounds {
            lat_min: 37.0,
            lat_max: 38.0,
            lon_min: -123.0,
            lon_max: -122.0,
            source_section: 0x1E,
            encoding: BoundsEncoding::Float64,
        };
        assert!(valid.is_valid());

        let invalid = CoordinateBounds {
            lat_min: 38.0,
            lat_max: 37.0, // Swapped
            lon_min: -123.0,
            lon_max: -122.0,
            source_section: 0x1E,
            encoding: BoundsEncoding::Float64,
        };
        assert!(!invalid.is_valid());
    }

    #[test]
    fn test_parse_doubles() {
        // Create test data: SF area bounds as doubles
        let mut data = Vec::new();
        data.extend_from_slice(&37.7f64.to_le_bytes());
        data.extend_from_slice(&37.8f64.to_le_bytes());
        data.extend_from_slice(&(-122.5f64).to_le_bytes());
        data.extend_from_slice(&(-122.4f64).to_le_bytes());

        let bounds = parse_coordinate_bounds(&data, 0x1E).unwrap();
        assert!((bounds.lat_min - 37.7).abs() < 0.001);
        assert!(bounds.encoding == BoundsEncoding::Float64);
    }

    #[test]
    fn test_parse_floats() {
        // Create test data: SF area bounds as floats
        let mut data = Vec::new();
        data.extend_from_slice(&37.7f32.to_le_bytes());
        data.extend_from_slice(&37.8f32.to_le_bytes());
        data.extend_from_slice(&(-122.5f32).to_le_bytes());
        data.extend_from_slice(&(-122.4f32).to_le_bytes());

        let bounds = parse_coordinate_bounds(&data, 0x1E).unwrap();
        assert!((bounds.lat_min - 37.7).abs() < 0.01);
        assert!(bounds.encoding == BoundsEncoding::Float32);
    }

    #[test]
    fn test_coverage_km2() {
        // 1 degree by 1 degree at equator
        let bounds = CoordinateBounds {
            lat_min: 0.0,
            lat_max: 1.0,
            lon_min: 0.0,
            lon_max: 1.0,
            source_section: 0x1E,
            encoding: BoundsEncoding::Float64,
        };
        let km2 = bounds.coverage_km2();
        // Should be roughly 12,000 km² (111 * 111)
        assert!(km2 > 10000.0 && km2 < 15000.0);
    }
}
