//! Elevation and Z-coordinate decoding for VMP4 tiles.
//!
//! Derived from `geo::codec::decodeSectionZEncoding` in GeoServices.framework.
//! Provides elevation data for 3D terrain rendering and building heights.

use crate::codec::{BitStream, CodecError, CodecResult};

/// Decoded elevation data for a vertex pool
#[derive(Debug, Clone, Default)]
pub struct ElevationData {
    /// Elevation values in meters for each vertex
    pub elevations: Vec<f32>,
    /// Scale factor used for decoding
    pub scale: f64,
    /// Base elevation offset
    pub base_offset: i64,
    /// Whether elevation data is present
    pub has_data: bool,
}

impl ElevationData {
    /// Check if elevation is valid for a given vertex
    pub fn is_valid(&self, index: usize) -> bool {
        if index >= self.elevations.len() {
            return false;
        }
        // NaN values indicate missing elevation
        !self.elevations[index].is_nan()
    }

    /// Get elevation for a vertex, or None if invalid
    pub fn get(&self, index: usize) -> Option<f32> {
        self.elevations.get(index).filter(|v| !v.is_nan()).copied()
    }
}

/// Elevation encoding parameters
#[derive(Debug, Clone, Copy)]
struct ElevationParams {
    /// Scale factor (multiplied by 0.001 for mm to meters)
    scale_bits: u8,
    scale_value: u32,
    /// Base offset parameters
    offset_bits: u8,
    offset_value: i64,
    /// Delta encoding bits for elevation values
    abs_bits: u8,
    delta_bits: u8,
}

/// Decode elevation data from a bitstream.
///
/// Based on `geo::codec::decodeSectionZEncoding`:
/// 1. Read presence flag (1 bit)
/// 2. Read scale factor (5 bits for bit count, then value)
/// 3. Read base offset (6 bits for bit count, then value, then sign)
/// 4. Read abs/delta bit counts
/// 5. Decode per-section elevation data
pub fn decode_elevation(
    bs: &mut BitStream<'_>,
    vertex_count: usize,
    sections: &[(usize, usize)], // (start_index, count) per section
) -> CodecResult<ElevationData> {
    // Check presence flag
    let has_elevation = bs.read_bit()?;

    if !has_elevation {
        // No elevation data - return empty with default values
        return Ok(ElevationData {
            elevations: vec![f32::NAN; vertex_count],
            scale: 1.0,
            base_offset: 0,
            has_data: false,
        });
    }

    // Read scale factor
    let scale_bits = bs.read_bits(5)? as u8 + 1;
    let scale_value = if scale_bits > 0 {
        bs.read_bits(scale_bits as usize)?
    } else {
        0
    };
    let scale = scale_value as f64 * 0.001; // Convert to meters

    // Read base offset bit count
    let offset_bits = bs.read_bits(6)? as u8 + 1;

    // Read offset value
    let offset_raw = if offset_bits > 0 {
        bs.read_bits_u64(offset_bits as usize)?
    } else {
        0
    };

    // Read offset sign if we have an offset
    let base_offset = if offset_raw > 0 {
        let is_negative = bs.read_bit()?;
        if is_negative {
            -(offset_raw as i64)
        } else {
            offset_raw as i64
        }
    } else {
        0
    };

    // Read delta encoding parameters
    let abs_bits = bs.read_bits(6)? as u8 + 1;
    let delta_bits = bs.read_bits(6)? as u8 + 1;

    // Initialize elevation array
    let mut elevations = vec![f32::NAN; vertex_count];

    // Decode elevations for each section
    for (section_start, section_count) in sections {
        if *section_count == 0 {
            continue;
        }

        // Read section presence flag
        let section_has_elevation = bs.read_bit()?;

        if !section_has_elevation {
            // Mark all vertices in this section as having no elevation (NaN)
            continue;
        }

        // Read first vertex elevation (absolute)
        let first_abs = bs.read_bits(abs_bits as usize)? as i32;
        let mut current_elevation = first_abs;

        let first_elevation = scale * (base_offset + current_elevation as i64) as f64;
        elevations[*section_start] = first_elevation as f32;

        // Read remaining vertices using delta encoding
        for i in 1..*section_count {
            let vertex_idx = section_start + i;
            if vertex_idx >= vertex_count {
                break;
            }

            let delta = bs.read_bits_signed(delta_bits as usize)?;
            current_elevation += delta;

            let elevation = scale * (base_offset + current_elevation as i64) as f64;
            elevations[vertex_idx] = elevation as f32;
        }
    }

    Ok(ElevationData {
        elevations,
        scale,
        base_offset,
        has_data: true,
    })
}

/// Elevation raster data (gridded elevation)
#[derive(Debug, Clone)]
pub struct ElevationRaster {
    /// Width in pixels
    pub width: u32,
    /// Height in pixels
    pub height: u32,
    /// Elevation values in row-major order
    pub data: Vec<f32>,
    /// Minimum elevation value
    pub min_elevation: f32,
    /// Maximum elevation value
    pub max_elevation: f32,
    /// Scale factor
    pub scale: f32,
    /// Offset
    pub offset: f32,
}

impl ElevationRaster {
    /// Get elevation at a specific pixel coordinate
    pub fn get(&self, x: u32, y: u32) -> Option<f32> {
        if x >= self.width || y >= self.height {
            return None;
        }
        let idx = (y * self.width + x) as usize;
        self.data.get(idx).copied()
    }

    /// Interpolate elevation at normalized coordinates (0.0-1.0)
    pub fn interpolate(&self, u: f32, v: f32) -> Option<f32> {
        if u < 0.0 || u > 1.0 || v < 0.0 || v > 1.0 {
            return None;
        }

        let x = (u * (self.width - 1) as f32).max(0.0);
        let y = (v * (self.height - 1) as f32).max(0.0);

        let x0 = x.floor() as u32;
        let y0 = y.floor() as u32;
        let x1 = (x0 + 1).min(self.width - 1);
        let y1 = (y0 + 1).min(self.height - 1);

        let fx = x - x0 as f32;
        let fy = y - y0 as f32;

        let e00 = self.get(x0, y0)?;
        let e10 = self.get(x1, y0)?;
        let e01 = self.get(x0, y1)?;
        let e11 = self.get(x1, y1)?;

        // Bilinear interpolation
        let e0 = e00 * (1.0 - fx) + e10 * fx;
        let e1 = e01 * (1.0 - fx) + e11 * fx;
        Some(e0 * (1.0 - fy) + e1 * fy)
    }
}

/// Decode elevation raster from raw section data
pub fn decode_elevation_raster(data: &[u8]) -> CodecResult<ElevationRaster> {
    if data.len() < 16 {
        return Err(CodecError::UnexpectedEof);
    }

    // Raster header format (based on analysis):
    // u16 width
    // u16 height
    // f32 scale
    // f32 offset
    // Followed by packed elevation data

    let width = u16::from_le_bytes([data[0], data[1]]) as u32;
    let height = u16::from_le_bytes([data[2], data[3]]) as u32;
    let scale = f32::from_le_bytes([data[4], data[5], data[6], data[7]]);
    let offset = f32::from_le_bytes([data[8], data[9], data[10], data[11]]);

    let pixel_count = (width * height) as usize;
    let header_size = 12;

    // Try to decode packed elevation data
    // Format may be: u16 values scaled by scale + offset
    let mut elevations = Vec::with_capacity(pixel_count);
    let mut min_elev = f32::MAX;
    let mut max_elev = f32::MIN;

    let data_start = header_size;
    let bytes_per_pixel = 2; // Assuming 16-bit packed values

    for i in 0..pixel_count {
        let byte_offset = data_start + i * bytes_per_pixel;
        if byte_offset + bytes_per_pixel > data.len() {
            // Pad with NaN if we run out of data
            elevations.push(f32::NAN);
            continue;
        }

        let raw_value = u16::from_le_bytes([data[byte_offset], data[byte_offset + 1]]);

        // Special value for no-data
        let elevation = if raw_value == 0xFFFF {
            f32::NAN
        } else {
            let e = raw_value as f32 * scale + offset;
            min_elev = min_elev.min(e);
            max_elev = max_elev.max(e);
            e
        };

        elevations.push(elevation);
    }

    Ok(ElevationRaster {
        width,
        height,
        data: elevations,
        min_elevation: if min_elev == f32::MAX { 0.0 } else { min_elev },
        max_elevation: if max_elev == f32::MIN { 0.0 } else { max_elev },
        scale,
        offset,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_elevation_data_validity() {
        let data = ElevationData {
            elevations: vec![10.0, f32::NAN, 20.0],
            scale: 1.0,
            base_offset: 0,
            has_data: true,
        };

        assert!(data.is_valid(0));
        assert!(!data.is_valid(1));
        assert!(data.is_valid(2));
        assert!(!data.is_valid(3));

        assert_eq!(data.get(0), Some(10.0));
        assert_eq!(data.get(1), None);
        assert_eq!(data.get(2), Some(20.0));
    }

    #[test]
    fn test_raster_interpolation() {
        let raster = ElevationRaster {
            width: 2,
            height: 2,
            data: vec![0.0, 10.0, 10.0, 20.0],
            min_elevation: 0.0,
            max_elevation: 20.0,
            scale: 1.0,
            offset: 0.0,
        };

        // Corners
        assert_eq!(raster.get(0, 0), Some(0.0));
        assert_eq!(raster.get(1, 0), Some(10.0));
        assert_eq!(raster.get(0, 1), Some(10.0));
        assert_eq!(raster.get(1, 1), Some(20.0));

        // Center interpolation
        let center = raster.interpolate(0.5, 0.5).unwrap();
        assert!((center - 10.0).abs() < 0.001);
    }
}
