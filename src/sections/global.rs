//! ChapterGlobal section decoder
//!
//! The global section contains tile-level metadata including:
//! - Tile coordinate information (X, Y, Z zoom level)
//! - Scale factors for coordinate dequantization
//! - Version information

use crate::codec::Chapter;
use crate::sections::section::SectionParser;
use crate::vmp4_parser::Vmp4Data;

/// Global tile metadata
#[derive(Debug, Clone)]
pub struct ChapterGlobal {
    /// Tile X coordinate (in tile grid)
    pub tile_x: u16,
    /// Tile Y coordinate (in tile grid)
    pub tile_y: u16,
    /// Zoom level
    pub zoom: u8,
    /// Tile scale factor
    pub scale: u32,
    /// Additional flags/version info
    pub flags: u8,
    /// Raw data for inspection
    raw_data: Vec<u8>,
}

impl ChapterGlobal {
    /// Get the tile key as a string
    pub fn tile_key(&self) -> String {
        format!("{}/{}/{}", self.zoom, self.tile_x, self.tile_y)
    }
}

impl SectionParser<ChapterGlobal> for ChapterGlobal {
    fn parse(section_data: &Vmp4Data) -> Option<ChapterGlobal> {
        let mut chapter = Chapter::new(&section_data.buf);

        // Global section format (based on hex dump analysis):
        // The format varies but typically includes:
        // - Zoom level / version info
        // - Tile coordinates
        // - Scale factors

        // Try to read the basic fields
        // Format appears to be: flags(1) + zoom(1) + ... varies
        let flags = chapter.read_u8().ok()?;
        let zoom = chapter.read_u8().ok()?;

        // Read tile coordinates - format may vary
        let tile_x = chapter.read_u16_le().unwrap_or(0);
        let tile_y = chapter.read_u16_le().unwrap_or(0);

        // Try to read scale
        let scale = chapter.read_u32_le().unwrap_or(0);

        Some(ChapterGlobal {
            tile_x,
            tile_y,
            zoom,
            scale,
            flags,
            raw_data: section_data.buf.clone(),
        })
    }

    fn print(&self) {
        println!("  Global Section:");
        println!("    tile key: {}", self.tile_key());
        println!("    flags: 0x{:02x}", self.flags);
        println!("    zoom: {}", self.zoom);
        println!("    tile_x: {}", self.tile_x);
        println!("    tile_y: {}", self.tile_y);
        println!("    scale: {}", self.scale);

        // Also show raw hex for inspection
        println!(
            "    raw ({} bytes): {:02x?}",
            self.raw_data.len(),
            &self.raw_data
        );
    }
}
