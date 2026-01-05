//! Connectivity data for VMP4 tiles - road junctions and edges.
//!
//! Derived from GeoServices.framework decompilation.
//! Handles road network connectivity for routing/navigation.
//!
//! Key structures:
//! - GeoCodecsConnectivityJunction: 32 bytes
//! - GeoCodecsConnectivityPointOnRoad: 16 bytes
//! - Connectivity entries: 16 bytes each

use crate::codec::{Chapter, CodecError, CodecResult};

/// A road junction (intersection) where roads connect
#[derive(Debug, Clone, Default)]
pub struct ConnectivityJunction {
    /// Junction index
    pub index: u32,
    /// Position X (quantized)
    pub x: u32,
    /// Position Y (quantized)
    pub y: u32,
    /// Number of connected edges
    pub edge_count: u32,
    /// Starting edge index
    pub edge_start: u32,
    /// Junction flags (signalized, etc.)
    pub flags: u8,
}

/// A connectivity entry linking roads at junctions
///
/// Structure (16 bytes):
/// - +0:  u32 edge count / flags
/// - +4:  u32 road/edge index
/// - +8:  u32 vertex pool section
/// - +12: u32 point offset
#[derive(Debug, Clone, Default)]
pub struct ConnectivityEntry {
    /// Edge count or flags
    pub edge_count: u32,
    /// Road index this entry references
    pub road_index: u32,
    /// Vertex pool section index
    pub section_index: u32,
    /// Point offset within the section
    pub point_offset: u32,
}

/// A point on a road for connectivity/routing
#[derive(Debug, Clone, Default)]
pub struct PointOnRoad {
    /// Road feature index
    pub road_index: u32,
    /// Point index within the road
    pub point_index: u32,
    /// Distance along road (normalized 0-1)
    pub distance: f32,
    /// Junction ID this point connects to
    pub junction_id: u32,
}

/// Decoded connectivity section (ChapterConnectivity 0x3c)
#[derive(Debug, Clone, Default)]
pub struct ChapterConnectivity {
    pub junctions: Vec<ConnectivityJunction>,
    pub entries: Vec<ConnectivityEntry>,
    pub points_on_road: Vec<PointOnRoad>,
}

impl ChapterConnectivity {
    /// Parse connectivity from section data.
    ///
    /// Format (inferred from decompilation):
    /// 1. Junction count (varuint32)
    /// 2. Junction data (variable size per junction)
    /// 3. Edge/entry count (varuint32)
    /// 4. Entry data (16 bytes each)
    /// 5. Points on road (optional)
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        if data.is_empty() {
            return Ok(Self::default());
        }

        let mut chapter = Chapter::new(data);
        let mut junctions = Vec::new();
        let mut entries = Vec::new();
        let mut points_on_road = Vec::new();

        // Read junction count
        let junction_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if junction_count > 100000 {
            return Err(CodecError::BufferOverflow);
        }

        // Parse junctions
        for i in 0..junction_count {
            let x = chapter.read_var_uint32().unwrap_or(0);
            let y = chapter.read_var_uint32().unwrap_or(0);
            let edge_count = chapter.read_var_uint32().unwrap_or(0);
            let edge_start = chapter.read_var_uint32().unwrap_or(0);
            let flags = chapter.read_var_uint32().unwrap_or(0) as u8;

            junctions.push(ConnectivityJunction {
                index: i as u32,
                x,
                y,
                edge_count,
                edge_start,
                flags,
            });
        }

        // Read entry count
        let entry_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if entry_count > 500000 {
            return Err(CodecError::BufferOverflow);
        }

        // Parse entries (16 bytes each when fixed, varuint when compressed)
        for _ in 0..entry_count {
            let edge_count = chapter.read_var_uint32().unwrap_or(0);
            let road_index = chapter.read_var_uint32().unwrap_or(0);
            let section_index = chapter.read_var_uint32().unwrap_or(0);
            let point_offset = chapter.read_var_uint32().unwrap_or(0);

            entries.push(ConnectivityEntry {
                edge_count,
                road_index,
                section_index,
                point_offset,
            });
        }

        // Read points on road (if remaining data)
        let points_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if points_count > 500000 {
            // Skip if too many
        } else {
            for _ in 0..points_count {
                let road_index = chapter.read_var_uint32().unwrap_or(0);
                let point_index = chapter.read_var_uint32().unwrap_or(0);
                let distance_raw = chapter.read_var_uint32().unwrap_or(0);
                let junction_id = chapter.read_var_uint32().unwrap_or(0);

                points_on_road.push(PointOnRoad {
                    road_index,
                    point_index,
                    distance: distance_raw as f32 / 65535.0,
                    junction_id,
                });
            }
        }

        Ok(ChapterConnectivity {
            junctions,
            entries,
            points_on_road,
        })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Connectivity:");
        println!("    Junctions: {}", self.junctions.len());
        for (i, j) in self.junctions.iter().take(5).enumerate() {
            println!(
                "      [{:3}] pos=({},{}) edges={} start={} flags=0x{:02X}",
                i, j.x, j.y, j.edge_count, j.edge_start, j.flags
            );
        }
        if self.junctions.len() > 5 {
            println!("      ... and {} more junctions", self.junctions.len() - 5);
        }

        println!("    Connectivity Entries: {}", self.entries.len());
        for (i, e) in self.entries.iter().take(5).enumerate() {
            println!(
                "      [{:3}] road={} sect={} off={} edges={}",
                i, e.road_index, e.section_index, e.point_offset, e.edge_count
            );
        }
        if self.entries.len() > 5 {
            println!("      ... and {} more entries", self.entries.len() - 5);
        }

        if !self.points_on_road.is_empty() {
            println!("    Points on Road: {}", self.points_on_road.len());
            for (i, p) in self.points_on_road.iter().take(5).enumerate() {
                println!(
                    "      [{:3}] road={} pt={} dist={:.3} jct={}",
                    i, p.road_index, p.point_index, p.distance, p.junction_id
                );
            }
        }
    }
}

/// Junction type flags
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct JunctionFlags(pub u8);

impl JunctionFlags {
    /// Traffic signal present
    pub fn has_signal(&self) -> bool {
        (self.0 & 0x01) != 0
    }

    /// Stop sign present
    pub fn has_stop_sign(&self) -> bool {
        (self.0 & 0x02) != 0
    }

    /// Yield sign present
    pub fn has_yield(&self) -> bool {
        (self.0 & 0x04) != 0
    }

    /// Roundabout
    pub fn is_roundabout(&self) -> bool {
        (self.0 & 0x08) != 0
    }

    /// Grade separated (overpass/underpass)
    pub fn is_grade_separated(&self) -> bool {
        (self.0 & 0x10) != 0
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_empty_connectivity() {
        let result = ChapterConnectivity::parse(&[]).unwrap();
        assert!(result.junctions.is_empty());
        assert!(result.entries.is_empty());
    }

    #[test]
    fn test_junction_flags() {
        let flags = JunctionFlags(0x09);
        assert!(flags.has_signal());
        assert!(!flags.has_stop_sign());
        assert!(flags.is_roundabout());
    }
}
