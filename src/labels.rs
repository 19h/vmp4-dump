//! Label placement metadata for VMP4 tiles.
//!
//! Derived from GeoServices.framework decompilation.
//! Provides hints for optimal label positioning on the map.

use crate::codec::{BitStream, Chapter, CodecError, CodecResult};

/// Label placement entry with positioning hints
#[derive(Debug, Clone, Default)]
pub struct LabelPlacement {
    /// Feature index this label belongs to
    pub feature_index: u32,
    /// Label index within the feature
    pub label_index: u32,
    /// Preferred X position (normalized 0-1 within tile)
    pub preferred_x: f32,
    /// Preferred Y position (normalized 0-1 within tile)
    pub preferred_y: f32,
    /// Anchor point type (center, left, right, etc.)
    pub anchor_type: u8,
    /// Rotation angle in degrees
    pub rotation: f32,
    /// Priority/importance score
    pub priority: u16,
    /// Collision flags
    pub collision_flags: u8,
}

/// Label line range for curved/multi-line labels
#[derive(Debug, Clone, Default)]
pub struct LabelLineRange {
    /// Feature index
    pub feature_index: u32,
    /// Start vertex index
    pub start_vertex: u32,
    /// End vertex index
    pub end_vertex: u32,
    /// Start distance (normalized)
    pub start_distance: f32,
    /// End distance (normalized)
    pub end_distance: f32,
}

/// Decoded label placement metadata section (ChapterLabelPlacementMetadata 0x8D)
#[derive(Debug, Clone, Default)]
pub struct LabelPlacementMetadata {
    pub placements: Vec<LabelPlacement>,
    pub line_ranges: Vec<LabelLineRange>,
}

impl LabelPlacementMetadata {
    /// Parse label placement metadata from section data.
    ///
    /// Format is bit-packed with:
    /// - Header with counts and bit widths
    /// - Per-placement encoded positions and flags
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        if data.len() < 4 {
            return Ok(Self::default());
        }

        let mut chapter = Chapter::new(data);
        let mut placements = Vec::new();
        let mut line_ranges = Vec::new();

        // Read header - typically contains counts and encoding parameters
        let placement_count = chapter.read_var_uint32().unwrap_or(0) as usize;
        let line_range_count = chapter.read_var_uint32().unwrap_or(0) as usize;

        if placement_count > 100000 || line_range_count > 100000 {
            return Err(CodecError::BufferOverflow);
        }

        // Read bit width parameters
        let x_bits = chapter.read_var_uint32().unwrap_or(16).min(32) as usize;
        let y_bits = chapter.read_var_uint32().unwrap_or(16).min(32) as usize;

        // Create bitstream for packed data
        let mut bs = chapter.to_bitstream();

        // Track previous values for delta encoding
        let mut prev_feature: u32 = 0;

        // Read placements
        for _ in 0..placement_count {
            if bs.remaining_bits() < 8 {
                break;
            }

            // Feature index (delta encoded)
            let feature_delta = bs.read_bits(8).unwrap_or(0);
            let feature_index = if feature_delta == 0 {
                prev_feature
            } else {
                prev_feature + feature_delta
            };
            prev_feature = feature_index;

            // Label index
            let label_index = bs.read_bits(8).unwrap_or(0);

            // Position
            let x_raw = bs.read_bits(x_bits).unwrap_or(0);
            let y_raw = bs.read_bits(y_bits).unwrap_or(0);
            let preferred_x = x_raw as f32 / ((1u32 << x_bits) - 1) as f32;
            let preferred_y = y_raw as f32 / ((1u32 << y_bits) - 1) as f32;

            // Anchor and rotation
            let anchor_type = bs.read_bits(4).unwrap_or(0) as u8;
            let rotation_raw = bs.read_bits(8).unwrap_or(0);
            let rotation = rotation_raw as f32 * 360.0 / 255.0;

            // Priority
            let priority = bs.read_bits(8).unwrap_or(128) as u16;

            // Collision flags
            let collision_flags = bs.read_bits(4).unwrap_or(0) as u8;

            placements.push(LabelPlacement {
                feature_index,
                label_index,
                preferred_x,
                preferred_y,
                anchor_type,
                rotation,
                priority,
                collision_flags,
            });
        }

        // Read line ranges
        for _ in 0..line_range_count {
            if bs.remaining_bits() < 16 {
                break;
            }

            let feature_index = bs.read_bits(16).unwrap_or(0);
            let start_vertex = bs.read_bits(16).unwrap_or(0);
            let end_vertex = bs.read_bits(16).unwrap_or(0);

            let start_raw = bs.read_bits(16).unwrap_or(0);
            let end_raw = bs.read_bits(16).unwrap_or(0);

            line_ranges.push(LabelLineRange {
                feature_index,
                start_vertex,
                end_vertex,
                start_distance: start_raw as f32 / 65535.0,
                end_distance: end_raw as f32 / 65535.0,
            });
        }

        Ok(LabelPlacementMetadata {
            placements,
            line_ranges,
        })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Label Placement Metadata:");
        println!("    Placements: {}", self.placements.len());
        for (i, p) in self.placements.iter().take(5).enumerate() {
            println!(
                "      [{:3}] feat={} lbl={} pos=({:.3},{:.3}) rot={:.1}° pri={}",
                i,
                p.feature_index,
                p.label_index,
                p.preferred_x,
                p.preferred_y,
                p.rotation,
                p.priority
            );
        }
        if self.placements.len() > 5 {
            println!(
                "      ... and {} more placements",
                self.placements.len() - 5
            );
        }

        if !self.line_ranges.is_empty() {
            println!("    Line Ranges: {}", self.line_ranges.len());
            for (i, r) in self.line_ranges.iter().take(3).enumerate() {
                println!(
                    "      [{:3}] feat={} vtx={}..{} dist={:.3}..{:.3}",
                    i,
                    r.feature_index,
                    r.start_vertex,
                    r.end_vertex,
                    r.start_distance,
                    r.end_distance
                );
            }
        }
    }
}

/// Label anchor types
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum LabelAnchor {
    Center = 0,
    TopLeft = 1,
    TopCenter = 2,
    TopRight = 3,
    MiddleLeft = 4,
    MiddleRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
    CurveStart = 9,
    CurveMid = 10,
    CurveEnd = 11,
}

impl From<u8> for LabelAnchor {
    fn from(value: u8) -> Self {
        match value {
            0 => LabelAnchor::Center,
            1 => LabelAnchor::TopLeft,
            2 => LabelAnchor::TopCenter,
            3 => LabelAnchor::TopRight,
            4 => LabelAnchor::MiddleLeft,
            5 => LabelAnchor::MiddleRight,
            6 => LabelAnchor::BottomLeft,
            7 => LabelAnchor::BottomCenter,
            8 => LabelAnchor::BottomRight,
            9 => LabelAnchor::CurveStart,
            10 => LabelAnchor::CurveMid,
            11 => LabelAnchor::CurveEnd,
            _ => LabelAnchor::Center,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_empty_label_placement() {
        let result = LabelPlacementMetadata::parse(&[]).unwrap();
        assert!(result.placements.is_empty());
        assert!(result.line_ranges.is_empty());
    }

    #[test]
    fn test_label_anchor() {
        assert_eq!(LabelAnchor::from(0), LabelAnchor::Center);
        assert_eq!(LabelAnchor::from(5), LabelAnchor::MiddleRight);
        assert_eq!(LabelAnchor::from(255), LabelAnchor::Center);
    }
}
