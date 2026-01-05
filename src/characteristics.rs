//! Characteristic points and stroke specifications for VMP4 tiles.
//!
//! Derived from `geo::codec::decodePointCharacteristics` in GeoServices.framework.
//! Characteristic points define styling at specific positions along lines/polygons.
//!
//! Structure sizes (from decompilation):
//! - GeoCodecsCharacteristicPoint: 100 bytes (0x64)
//! - GeoCodecsStrokeSpecification: 16 bytes

use crate::codec::{Chapter, CodecError, CodecResult};

/// A characteristic point defines styling at a specific vertex on a line/polygon.
///
/// Structure (100 bytes):
/// - +4:  u32 group_id
/// - +8:  u32 feature_index
/// - +12: u32 vertex_index
/// - +16: u32 type
/// - +20: u32 material_index
/// - +24: f32 distance
/// - +28: u8 has_material_override
/// - +29: u8 has_explicit_material
/// - +30: u8 flag1
/// - +31: u8 flag2
/// - +32: u8 flag3
/// - +34: u8[16] rle_byte_data
/// - +50: u16[16] rle_short_data
#[derive(Debug, Clone, Default)]
pub struct CharacteristicPoint {
    /// Group ID for this point
    pub group_id: u32,
    /// Index of the feature (line/polygon) this point belongs to
    pub feature_index: u32,
    /// Vertex index within the feature
    pub vertex_index: u32,
    /// Point type (turn arrow, cap, join, etc.)
    pub point_type: u32,
    /// Material/style index
    pub material_index: u32,
    /// Distance along the line (normalized 0-1 or absolute)
    pub distance: f32,
    /// Whether material is overridden
    pub has_material_override: bool,
    /// Whether material is explicit
    pub has_explicit_material: bool,
    /// Additional styling flags
    pub flags: u8,
}

/// Stroke specification for dashed/patterned lines.
///
/// Structure (16 bytes):
/// - +0:  u32 feature_index
/// - +4:  u32 vertex_index  
/// - +8:  u32 start_distance
/// - +12: u32 end_distance
#[derive(Debug, Clone, Default)]
pub struct StrokeSpecification {
    /// Feature index
    pub feature_index: u32,
    /// Starting vertex index
    pub vertex_index: u32,
    /// Start distance (scaled)
    pub start_distance: u32,
    /// End distance (scaled)
    pub end_distance: u32,
}

/// Decoded line point characteristics section (ChapterLinePointCharacteristics 0x33)
#[derive(Debug, Clone, Default)]
pub struct LinePointCharacteristics {
    pub points: Vec<CharacteristicPoint>,
    pub stroke_specs: Vec<StrokeSpecification>,
}

impl LinePointCharacteristics {
    /// Parse line point characteristics from section data.
    ///
    /// Based on `geo::codec::decodePointCharacteristics`:
    /// 1. Read header (group count, point count)
    /// 2. Read packed bit flags per point
    /// 3. Decode fields based on flags
    /// 4. Optionally decode stroke specifications
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        if data.is_empty() {
            return Ok(Self::default());
        }

        let mut chapter = Chapter::new(data);
        let mut points = Vec::new();

        // Read header
        let group_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        let point_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        let _version_field = chapter.read_var_uint32().unwrap_or(0);

        if point_count > 100000 || group_count > 10000 {
            return Err(CodecError::BufferOverflow);
        }

        // Track previous feature_index for delta encoding
        let mut prev_feature_index: i32 = 0;

        for _group in 0..group_count {
            // Read group header
            let group_id = chapter.read_var_uint32().unwrap_or(0);
            let group_point_count = chapter.read_var_uint32().unwrap_or(0) as usize;

            if group_point_count > 50000 {
                break;
            }

            for _ in 0..group_point_count {
                // Read packed flags byte(s)
                let flags = chapter.read_u8().unwrap_or(0);

                let has_delta_feature = (flags & 0x80) != 0;
                let has_explicit_type = (flags & 0x40) != 0;
                let has_distance = (flags & 0x20) != 0;
                let has_explicit_material = (flags & 0x10) != 0;
                let has_rle = (flags & 0x08) != 0;
                let has_material_override = (flags & 0x02) != 0;
                let flag1 = (flags & 0x01) != 0;

                // Feature index (delta encoded if bit 7 set)
                let feature_index = if has_delta_feature {
                    let delta = chapter.read_var_uint32().unwrap_or(0) as i32;
                    prev_feature_index += delta;
                    prev_feature_index as u32
                } else {
                    let idx = chapter.read_var_uint32().unwrap_or(0);
                    prev_feature_index = idx as i32;
                    idx
                };

                // Vertex index
                let vertex_index = chapter.read_var_uint32().unwrap_or(0);

                // Point type
                let point_type = if has_explicit_type {
                    chapter.read_var_uint32().unwrap_or(0)
                } else {
                    0
                };

                // Distance
                let distance = if has_distance {
                    let raw = chapter.read_var_uint32().unwrap_or(0);
                    raw as f32 / 65535.0
                } else {
                    0.0
                };

                // Material index
                let material_index = if has_explicit_material {
                    chapter.read_var_uint32().unwrap_or(0)
                } else {
                    0
                };

                // Skip RLE data if present
                if has_rle {
                    let byte_count = chapter.read_var_uint32().unwrap_or(0) as usize;
                    let short_count = chapter.read_var_uint32().unwrap_or(0) as usize;

                    // Skip byte RLE entries
                    for _ in 0..byte_count {
                        let _ = chapter.read_var_uint32(); // value
                        let _ = chapter.read_var_uint32(); // mask
                    }

                    // Skip short RLE entries
                    for _ in 0..short_count {
                        let _ = chapter.read_var_uint32(); // value
                        let _ = chapter.read_var_uint32(); // mask
                    }
                }

                points.push(CharacteristicPoint {
                    group_id,
                    feature_index,
                    vertex_index,
                    point_type,
                    material_index,
                    distance,
                    has_material_override,
                    has_explicit_material,
                    flags: if flag1 { 1 } else { 0 },
                });
            }
        }

        // TODO: Parse stroke specifications (bit-packed after points)
        // For now, return empty stroke_specs
        let stroke_specs = Vec::new();

        Ok(LinePointCharacteristics {
            points,
            stroke_specs,
        })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Line Point Characteristics ({}):", self.points.len());
        for (i, p) in self.points.iter().take(10).enumerate() {
            println!(
                "    [{:3}] feat={} vtx={} type={} grp={} dist={:.3} mat={}",
                i,
                p.feature_index,
                p.vertex_index,
                p.point_type,
                p.group_id,
                p.distance,
                p.material_index
            );
        }
        if self.points.len() > 10 {
            println!("    ... and {} more points", self.points.len() - 10);
        }

        if !self.stroke_specs.is_empty() {
            println!("  Stroke Specifications ({}):", self.stroke_specs.len());
            for (i, s) in self.stroke_specs.iter().take(5).enumerate() {
                println!(
                    "    [{:3}] feat={} vtx={} range={}..{}",
                    i, s.feature_index, s.vertex_index, s.start_distance, s.end_distance
                );
            }
        }
    }
}

/// Decoded polygon point characteristics section (ChapterPolygonPointCharacteristics 0x34)
#[derive(Debug, Clone, Default)]
pub struct PolygonPointCharacteristics {
    pub points: Vec<CharacteristicPoint>,
    pub stroke_specs: Vec<StrokeSpecification>,
}

impl PolygonPointCharacteristics {
    /// Parse polygon point characteristics (same format as line)
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        let line_chars = LinePointCharacteristics::parse(data)?;
        Ok(PolygonPointCharacteristics {
            points: line_chars.points,
            stroke_specs: line_chars.stroke_specs,
        })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Polygon Point Characteristics ({}):", self.points.len());
        for (i, p) in self.points.iter().take(10).enumerate() {
            println!(
                "    [{:3}] feat={} vtx={} type={} grp={} dist={:.3}",
                i, p.feature_index, p.vertex_index, p.point_type, p.group_id, p.distance
            );
        }
        if self.points.len() > 10 {
            println!("    ... and {} more points", self.points.len() - 10);
        }
    }
}

/// Characteristic point types (from decompilation patterns)
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u32)]
pub enum CharacteristicPointType {
    /// Default/unknown type
    Unknown = 0,
    /// Line cap (start/end)
    Cap = 1,
    /// Line join point
    Join = 2,
    /// Turn arrow
    TurnArrow = 3,
    /// Shield/marker placement
    ShieldPlacement = 4,
    /// Label anchor point
    LabelAnchor = 5,
    /// Dash/gap boundary
    DashBoundary = 6,
    /// Intersection marker
    Intersection = 7,
    /// Bridge start/end
    BridgeMarker = 8,
    /// Tunnel start/end
    TunnelMarker = 9,
}

impl From<u32> for CharacteristicPointType {
    fn from(value: u32) -> Self {
        match value {
            1 => CharacteristicPointType::Cap,
            2 => CharacteristicPointType::Join,
            3 => CharacteristicPointType::TurnArrow,
            4 => CharacteristicPointType::ShieldPlacement,
            5 => CharacteristicPointType::LabelAnchor,
            6 => CharacteristicPointType::DashBoundary,
            7 => CharacteristicPointType::Intersection,
            8 => CharacteristicPointType::BridgeMarker,
            9 => CharacteristicPointType::TunnelMarker,
            _ => CharacteristicPointType::Unknown,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_empty_line_characteristics() {
        let result = LinePointCharacteristics::parse(&[]).unwrap();
        assert!(result.points.is_empty());
        assert!(result.stroke_specs.is_empty());
    }

    #[test]
    fn test_empty_polygon_characteristics() {
        let result = PolygonPointCharacteristics::parse(&[]).unwrap();
        assert!(result.points.is_empty());
    }

    #[test]
    fn test_characteristic_point_type() {
        assert_eq!(
            CharacteristicPointType::from(3),
            CharacteristicPointType::TurnArrow
        );
        assert_eq!(
            CharacteristicPointType::from(255),
            CharacteristicPointType::Unknown
        );
    }
}
