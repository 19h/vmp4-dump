//! Coastline features for VMP4 tiles.
//!
//! Derived from GeoServices.framework decompilation.
//! Handles coastline polygons that may wrap across tile boundaries.
//!
//! Key insights from decompilation:
//! - Coastline features have 104-byte record size
//! - Section types: 0x22 (coastline), 0x26 (wrapping coastline)
//! - Wrapping coastlines handle features crossing tile edges

use crate::codec::{Chapter, CodecError, CodecResult};

/// A coastline feature (land/water boundary)
#[derive(Debug, Clone, Default)]
pub struct CoastlineFeature {
    /// Feature identifier
    pub id: u32,
    /// Vertex pool section index
    pub vertex_section: u32,
    /// Start vertex index
    pub vertex_start: u32,
    /// Number of vertices
    pub vertex_count: u32,
    /// Whether this is land (true) or water (false)
    pub is_land: bool,
    /// Style/material index
    pub style_index: u16,
    /// Z-order for rendering
    pub z_order: i8,
    /// Flags for special handling
    pub flags: u8,
}

/// A wrapping coastline feature that crosses tile boundaries
#[derive(Debug, Clone, Default)]
pub struct WrappingCoastlineFeature {
    /// Base coastline data
    pub coastline: CoastlineFeature,
    /// Entry edge (0=left, 1=top, 2=right, 3=bottom)
    pub entry_edge: u8,
    /// Entry position along edge (0-1)
    pub entry_position: f32,
    /// Exit edge
    pub exit_edge: u8,
    /// Exit position along edge (0-1)
    pub exit_position: f32,
    /// Connected tile direction (for tile stitching)
    pub connected_direction: u8,
}

/// Decoded coastline features section (ChapterCoastlineFeatures 0x22)
#[derive(Debug, Clone, Default)]
pub struct ChapterCoastlineFeatures {
    pub features: Vec<CoastlineFeature>,
}

impl ChapterCoastlineFeatures {
    /// Parse coastline features from section data.
    ///
    /// Format (104 bytes per feature based on decompilation):
    /// - Feature ID and indices
    /// - Vertex references
    /// - Style and flags
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        if data.is_empty() {
            return Ok(Self::default());
        }

        let mut chapter = Chapter::new(data);
        let mut features = Vec::new();

        // Read feature count
        let count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if count > 100000 {
            return Err(CodecError::BufferOverflow);
        }

        for i in 0..count {
            // Read feature data
            let vertex_section = chapter.read_var_uint32().unwrap_or(0);
            let vertex_start = chapter.read_var_uint32().unwrap_or(0);
            let vertex_count = chapter.read_var_uint32().unwrap_or(0);

            // Flags and style
            let flags = chapter.read_var_uint32().unwrap_or(0) as u8;
            let is_land = (flags & 0x01) != 0;

            let style_index = chapter.read_var_uint32().unwrap_or(0) as u16;
            let z_order = chapter.read_var_uint32().unwrap_or(0) as i8;

            features.push(CoastlineFeature {
                id: i as u32,
                vertex_section,
                vertex_start,
                vertex_count,
                is_land,
                style_index,
                z_order,
                flags,
            });
        }

        Ok(ChapterCoastlineFeatures { features })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Coastline Features ({}):", self.features.len());
        for (i, f) in self.features.iter().take(10).enumerate() {
            println!(
                "    [{:3}] sect={} vtx={}+{} {} style={} z={}",
                i,
                f.vertex_section,
                f.vertex_start,
                f.vertex_count,
                if f.is_land { "LAND" } else { "WATER" },
                f.style_index,
                f.z_order
            );
        }
        if self.features.len() > 10 {
            println!("    ... and {} more coastlines", self.features.len() - 10);
        }
    }
}

/// Decoded wrapping coastline features section (ChapterWrappingCoastlineFeatures 0x26)
#[derive(Debug, Clone, Default)]
pub struct ChapterWrappingCoastlineFeatures {
    pub features: Vec<WrappingCoastlineFeature>,
}

impl ChapterWrappingCoastlineFeatures {
    /// Parse wrapping coastline features from section data.
    ///
    /// Additional fields for tile boundary crossings.
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        if data.is_empty() {
            return Ok(Self::default());
        }

        let mut chapter = Chapter::new(data);
        let mut features = Vec::new();

        // Read feature count
        let count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if count > 100000 {
            return Err(CodecError::BufferOverflow);
        }

        for i in 0..count {
            // Base coastline data
            let vertex_section = chapter.read_var_uint32().unwrap_or(0);
            let vertex_start = chapter.read_var_uint32().unwrap_or(0);
            let vertex_count = chapter.read_var_uint32().unwrap_or(0);

            let flags = chapter.read_var_uint32().unwrap_or(0) as u8;
            let is_land = (flags & 0x01) != 0;

            let style_index = chapter.read_var_uint32().unwrap_or(0) as u16;
            let z_order = chapter.read_var_uint32().unwrap_or(0) as i8;

            // Wrapping data
            let entry_edge = chapter.read_var_uint32().unwrap_or(0) as u8;
            let entry_raw = chapter.read_var_uint32().unwrap_or(0);
            let entry_position = entry_raw as f32 / 65535.0;

            let exit_edge = chapter.read_var_uint32().unwrap_or(0) as u8;
            let exit_raw = chapter.read_var_uint32().unwrap_or(0);
            let exit_position = exit_raw as f32 / 65535.0;

            let connected_direction = chapter.read_var_uint32().unwrap_or(0) as u8;

            features.push(WrappingCoastlineFeature {
                coastline: CoastlineFeature {
                    id: i as u32,
                    vertex_section,
                    vertex_start,
                    vertex_count,
                    is_land,
                    style_index,
                    z_order,
                    flags,
                },
                entry_edge,
                entry_position,
                exit_edge,
                exit_position,
                connected_direction,
            });
        }

        Ok(ChapterWrappingCoastlineFeatures { features })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Wrapping Coastline Features ({}):", self.features.len());
        for (i, f) in self.features.iter().take(10).enumerate() {
            let edge_name = |e: u8| match e {
                0 => "L",
                1 => "T",
                2 => "R",
                3 => "B",
                _ => "?",
            };
            println!(
                "    [{:3}] vtx={}+{} {} entry={}@{:.2} exit={}@{:.2}",
                i,
                f.coastline.vertex_start,
                f.coastline.vertex_count,
                if f.coastline.is_land { "LAND" } else { "WATER" },
                edge_name(f.entry_edge),
                f.entry_position,
                edge_name(f.exit_edge),
                f.exit_position
            );
        }
        if self.features.len() > 10 {
            println!(
                "    ... and {} more wrapping coastlines",
                self.features.len() - 10
            );
        }
    }
}

/// Tile edge enumeration
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum TileEdge {
    Left = 0,
    Top = 1,
    Right = 2,
    Bottom = 3,
}

impl From<u8> for TileEdge {
    fn from(value: u8) -> Self {
        match value & 0x03 {
            0 => TileEdge::Left,
            1 => TileEdge::Top,
            2 => TileEdge::Right,
            3 => TileEdge::Bottom,
            _ => unreachable!(),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_empty_coastline() {
        let result = ChapterCoastlineFeatures::parse(&[]).unwrap();
        assert!(result.features.is_empty());
    }

    #[test]
    fn test_empty_wrapping_coastline() {
        let result = ChapterWrappingCoastlineFeatures::parse(&[]).unwrap();
        assert!(result.features.is_empty());
    }

    #[test]
    fn test_tile_edge() {
        assert_eq!(TileEdge::from(0), TileEdge::Left);
        assert_eq!(TileEdge::from(3), TileEdge::Bottom);
        assert_eq!(TileEdge::from(4), TileEdge::Left); // wraps
    }
}
