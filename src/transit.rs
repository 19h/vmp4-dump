//! Transit system and network data for VMP4 tiles.
//!
//! Derived from `geo::codec::_readTransitSystems` and `geo::codec::_readTransitNetwork`
//! in GeoServices.framework decompilation.
//!
//! VectorTile structure offsets:
//! - 1288: Transit Lines array (104 bytes per entry)
//! - 1320: Transit System Info array (72 bytes per entry)
//! - 1416: Transit Links data (344 bytes per entry)
//! - 1544: Travel time array (4-byte floats)
//! - 1568: Transit node features (248 bytes per entry)

use crate::codec::{Chapter, CodecError, CodecResult};

/// A transit system (e.g., NYC Subway, London Underground)
#[derive(Debug, Clone, Default)]
pub struct TransitSystem {
    /// System identifier
    pub id: u64,
    /// System name
    pub name: String,
    /// System type (bus, subway, rail, etc.)
    pub system_type: u8,
    /// Active flag
    pub is_active: bool,
}

/// A transit line within a system (e.g., "A Train", "District Line")
#[derive(Debug, Clone, Default)]
pub struct TransitLine {
    /// Line identifier (MUID - Map Unique ID)
    pub muid: u64,
    /// Line name/number
    pub name: String,
    /// Short name/code
    pub short_name: String,
    /// Line color (RGB)
    pub color: u32,
    /// Text color for contrast
    pub text_color: u32,
    /// Parent system index
    pub system_index: u32,
    /// Line type (subway, bus, tram, etc.)
    pub line_type: u8,
}

/// A transit stop/station
#[derive(Debug, Clone, Default)]
pub struct TransitStop {
    /// Stop identifier
    pub id: u64,
    /// Stop name
    pub name: String,
    /// Position (quantized tile coordinates)
    pub x: u32,
    pub y: u32,
    /// Accessibility flag
    pub is_accessible: bool,
    /// Platform count
    pub platform_count: u8,
}

/// A transit link (connection between stops)
#[derive(Debug, Clone, Default)]
pub struct TransitLink {
    /// From node ID
    pub from_node_id: u32,
    /// To node ID
    pub to_node_id: u32,
    /// Line index this link belongs to
    pub line_index: u32,
    /// Travel time in seconds (default 100.0)
    pub travel_time: f32,
    /// Distance in meters
    pub distance: f32,
    /// Geometry point indices (into vertex pool)
    pub point_start: u32,
    pub point_count: u32,
}

/// A transit node feature (stop with additional data)
#[derive(Debug, Clone, Default)]
pub struct TransitNodeFeature {
    /// Node identifier
    pub node_id: u32,
    /// System index
    pub system_index: u32,
    /// Feature position
    pub x: f32,
    pub y: f32,
    /// Elevation if available
    pub elevation: f32,
    /// Platform level (underground = negative)
    pub level: i8,
}

/// Decoded transit systems section (ChapterTransitSystems 0x80)
#[derive(Debug, Clone, Default)]
pub struct TransitSystems {
    pub systems: Vec<TransitSystem>,
    pub lines: Vec<TransitLine>,
}

impl TransitSystems {
    /// Parse transit systems from section data.
    ///
    /// Based on `geo::codec::_readTransitSystems`:
    /// - Lambda $_3: System info (72 bytes per entry)
    /// - Lambda $_2: Line MUID
    /// - Lambda $_1: Line name/type
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        if data.is_empty() {
            return Ok(Self::default());
        }

        let mut chapter = Chapter::new(data);
        let mut systems = Vec::new();
        let mut lines = Vec::new();

        // Read system count
        let system_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if system_count > 1000 {
            return Err(CodecError::BufferOverflow);
        }

        // Read systems
        for i in 0..system_count {
            // System ID
            let id = chapter.read_var_uint64().unwrap_or(i as u64);

            // Name length and string
            let name_len = chapter.read_var_uint32().unwrap_or(0) as usize;
            let name = if name_len > 0 && name_len < 1000 {
                let bytes = chapter.read_bytes(name_len).unwrap_or(&[]);
                String::from_utf8_lossy(bytes).to_string()
            } else {
                String::new()
            };

            // System type
            let system_type = chapter.read_var_uint32().unwrap_or(0) as u8;

            systems.push(TransitSystem {
                id,
                name,
                system_type,
                is_active: true,
            });
        }

        // Read line count
        let line_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if line_count > 10000 {
            return Err(CodecError::BufferOverflow);
        }

        // Read lines
        for i in 0..line_count {
            // MUID (64-bit identifier)
            let muid = chapter.read_var_uint64().unwrap_or(i as u64);

            // Name
            let name_len = chapter.read_var_uint32().unwrap_or(0) as usize;
            let name = if name_len > 0 && name_len < 1000 {
                let bytes = chapter.read_bytes(name_len).unwrap_or(&[]);
                String::from_utf8_lossy(bytes).to_string()
            } else {
                String::new()
            };

            // Short name
            let short_len = chapter.read_var_uint32().unwrap_or(0) as usize;
            let short_name = if short_len > 0 && short_len < 100 {
                let bytes = chapter.read_bytes(short_len).unwrap_or(&[]);
                String::from_utf8_lossy(bytes).to_string()
            } else {
                String::new()
            };

            // Colors (may be packed RGB)
            let color = chapter.read_var_uint32().unwrap_or(0x808080);
            let text_color = chapter.read_var_uint32().unwrap_or(0xFFFFFF);

            // System index
            let system_index = chapter.read_var_uint32().unwrap_or(0);

            // Line type
            let line_type = chapter.read_var_uint32().unwrap_or(0) as u8;

            lines.push(TransitLine {
                muid,
                name,
                short_name,
                color,
                text_color,
                system_index,
                line_type,
            });
        }

        Ok(TransitSystems { systems, lines })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Transit Systems ({}):", self.systems.len());
        for (i, sys) in self.systems.iter().take(5).enumerate() {
            println!(
                "    [{:2}] id={} type={} name=\"{}\"",
                i, sys.id, sys.system_type, sys.name
            );
        }
        if self.systems.len() > 5 {
            println!("    ... and {} more systems", self.systems.len() - 5);
        }

        println!("  Transit Lines ({}):", self.lines.len());
        for (i, line) in self.lines.iter().take(10).enumerate() {
            println!(
                "    [{:2}] muid={} sys={} type={} name=\"{}\" ({}) color=#{:06X}",
                i,
                line.muid,
                line.system_index,
                line.line_type,
                line.name,
                line.short_name,
                line.color
            );
        }
        if self.lines.len() > 10 {
            println!("    ... and {} more lines", self.lines.len() - 10);
        }
    }
}

/// Decoded transit network section (ChapterTransitNetwork 0x81)
#[derive(Debug, Clone, Default)]
pub struct TransitNetwork {
    pub nodes: Vec<TransitNodeFeature>,
    pub links: Vec<TransitLink>,
    pub stops: Vec<TransitStop>,
}

impl TransitNetwork {
    /// Parse transit network from section data.
    ///
    /// Based on `geo::codec::_readTransitNetwork`:
    /// - Lambda $_6: Travel time data
    /// - Lambda $_5: Transit node features (248 bytes)
    /// - Lambda $_0: Transit link data (344 bytes)
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        if data.is_empty() {
            return Ok(Self::default());
        }

        let mut chapter = Chapter::new(data);
        let mut nodes = Vec::new();
        let mut links = Vec::new();
        let mut stops = Vec::new();

        // Read node count
        let node_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if node_count > 50000 {
            return Err(CodecError::BufferOverflow);
        }

        // Read nodes
        for _ in 0..node_count {
            let node_id = chapter.read_var_uint32().unwrap_or(0);
            let system_index = chapter.read_var_uint32().unwrap_or(0);

            // Position (quantized)
            let x_raw = chapter.read_var_uint32().unwrap_or(0);
            let y_raw = chapter.read_var_uint32().unwrap_or(0);
            let x = x_raw as f32 / 65535.0;
            let y = y_raw as f32 / 65535.0;

            // Elevation and level
            let elevation_raw = chapter.read_var_uint32().unwrap_or(0);
            let elevation = elevation_raw as f32 * 0.1; // decimeters to meters

            let level = chapter.read_var_uint32().unwrap_or(0) as i8;

            nodes.push(TransitNodeFeature {
                node_id,
                system_index,
                x,
                y,
                elevation,
                level,
            });
        }

        // Read link count
        let link_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if link_count > 100000 {
            return Err(CodecError::BufferOverflow);
        }

        // Read links
        for _ in 0..link_count {
            let from_node_id = chapter.read_var_uint32().unwrap_or(0);
            let to_node_id = chapter.read_var_uint32().unwrap_or(0);
            let line_index = chapter.read_var_uint32().unwrap_or(0);

            // Travel time (default 100.0)
            let travel_time_raw = chapter.read_var_uint32().unwrap_or(1000);
            let travel_time = if travel_time_raw == 0 {
                100.0
            } else {
                travel_time_raw as f32 * 0.1
            };

            // Distance
            let distance_raw = chapter.read_var_uint32().unwrap_or(0);
            let distance = distance_raw as f32;

            // Geometry indices
            let point_start = chapter.read_var_uint32().unwrap_or(0);
            let point_count = chapter.read_var_uint32().unwrap_or(0);

            links.push(TransitLink {
                from_node_id,
                to_node_id,
                line_index,
                travel_time,
                distance,
                point_start,
                point_count,
            });
        }

        // Read stops
        let stop_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if stop_count > 50000 {
            return Err(CodecError::BufferOverflow);
        }

        for _ in 0..stop_count {
            let id = chapter.read_var_uint64().unwrap_or(0);

            let name_len = chapter.read_var_uint32().unwrap_or(0) as usize;
            let name = if name_len > 0 && name_len < 1000 {
                let bytes = chapter.read_bytes(name_len).unwrap_or(&[]);
                String::from_utf8_lossy(bytes).to_string()
            } else {
                String::new()
            };

            let x = chapter.read_var_uint32().unwrap_or(0);
            let y = chapter.read_var_uint32().unwrap_or(0);

            let flags = chapter.read_var_uint32().unwrap_or(0) as u8;
            let is_accessible = (flags & 1) != 0;
            let platform_count = chapter.read_var_uint32().unwrap_or(1) as u8;

            stops.push(TransitStop {
                id,
                name,
                x,
                y,
                is_accessible,
                platform_count,
            });
        }

        Ok(TransitNetwork {
            nodes,
            links,
            stops,
        })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Transit Network:");
        println!("    Nodes: {}", self.nodes.len());
        for (i, node) in self.nodes.iter().take(5).enumerate() {
            println!(
                "      [{:3}] id={} sys={} pos=({:.4},{:.4}) level={}",
                i, node.node_id, node.system_index, node.x, node.y, node.level
            );
        }

        println!("    Links: {}", self.links.len());
        for (i, link) in self.links.iter().take(5).enumerate() {
            println!(
                "      [{:3}] {}->{}  line={} time={:.1}s dist={:.0}m pts={}+{}",
                i,
                link.from_node_id,
                link.to_node_id,
                link.line_index,
                link.travel_time,
                link.distance,
                link.point_start,
                link.point_count
            );
        }

        println!("    Stops: {}", self.stops.len());
        for (i, stop) in self.stops.iter().take(5).enumerate() {
            println!(
                "      [{:3}] id={} \"{}\" accessible={}",
                i, stop.id, stop.name, stop.is_accessible
            );
        }
    }
}

/// Transit line types
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum TransitLineType {
    Unknown = 0,
    Subway = 1,
    LightRail = 2,
    CommuterRail = 3,
    Bus = 4,
    Ferry = 5,
    CableCar = 6,
    Gondola = 7,
    Funicular = 8,
    Tram = 9,
    Monorail = 10,
}

impl From<u8> for TransitLineType {
    fn from(value: u8) -> Self {
        match value {
            1 => TransitLineType::Subway,
            2 => TransitLineType::LightRail,
            3 => TransitLineType::CommuterRail,
            4 => TransitLineType::Bus,
            5 => TransitLineType::Ferry,
            6 => TransitLineType::CableCar,
            7 => TransitLineType::Gondola,
            8 => TransitLineType::Funicular,
            9 => TransitLineType::Tram,
            10 => TransitLineType::Monorail,
            _ => TransitLineType::Unknown,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_empty_transit_systems() {
        let result = TransitSystems::parse(&[]).unwrap();
        assert!(result.systems.is_empty());
        assert!(result.lines.is_empty());
    }

    #[test]
    fn test_empty_transit_network() {
        let result = TransitNetwork::parse(&[]).unwrap();
        assert!(result.nodes.is_empty());
        assert!(result.links.is_empty());
        assert!(result.stops.is_empty());
    }

    #[test]
    fn test_transit_line_type_conversion() {
        assert_eq!(TransitLineType::from(1), TransitLineType::Subway);
        assert_eq!(TransitLineType::from(4), TransitLineType::Bus);
        assert_eq!(TransitLineType::from(255), TransitLineType::Unknown);
    }
}
