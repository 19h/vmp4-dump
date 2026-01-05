//! Feature section decoders (Point, Line, Polygon)
//!
//! Derived from GeoServices.framework decompilation.
//! Features reference vertices from ChapterVertices and contain
//! styling/attribute information.

use crate::codec::{Chapter, CodecError, CodecResult};
use crate::sections::section::SectionParser;
use crate::vmp4_parser::Vmp4Data;

/// A point feature (POI, label anchor, etc.)
#[derive(Debug, Clone)]
pub struct PointFeature {
    /// Vertex index in the vertex pool
    pub vertex_index: u32,
    /// Feature type/class
    pub feature_type: u8,
    /// Style attribute index
    pub style_index: u16,
    /// Label index (in ChapterLabels)
    pub label_index: Option<u32>,
    /// Zoom range (min/max)
    pub zoom_min: u8,
    pub zoom_max: u8,
}

/// A line feature (road, path, boundary, etc.)
#[derive(Debug, Clone)]
pub struct LineFeature {
    /// Starting vertex index
    pub vertex_start: u32,
    /// Number of vertices
    pub vertex_count: u32,
    /// Feature type/class (road type, etc.)
    pub feature_type: u8,
    /// Style attribute index
    pub style_index: u16,
    /// Label index for road name
    pub label_index: Option<u32>,
    /// Zoom range
    pub zoom_min: u8,
    pub zoom_max: u8,
}

/// A polygon feature (building, park, water, etc.)
#[derive(Debug, Clone)]
pub struct PolygonFeature {
    /// Starting vertex index
    pub vertex_start: u32,
    /// Number of vertices in outer ring
    pub outer_count: u32,
    /// Number of interior rings (holes)
    pub hole_count: u32,
    /// Feature type/class
    pub feature_type: u8,
    /// Style attribute index
    pub style_index: u16,
    /// Label index
    pub label_index: Option<u32>,
    /// Zoom range
    pub zoom_min: u8,
    pub zoom_max: u8,
}

/// Chapter containing point features
#[derive(Debug)]
pub struct ChapterPointFeatures {
    pub features: Vec<PointFeature>,
    /// Total data size
    pub data_size: usize,
}

impl SectionParser<ChapterPointFeatures> for ChapterPointFeatures {
    fn parse(section_data: &Vmp4Data) -> Option<ChapterPointFeatures> {
        let mut chapter = Chapter::new(&section_data.buf);
        let mut features = Vec::new();

        // Try to read feature count
        let count = chapter.read_var_uint32().ok()?;

        // Safety check
        if count > 100000 {
            return None;
        }

        for _ in 0..count {
            // Try to read basic feature data
            // Format varies, but typically:
            // - vertex_index (varint)
            // - feature_type (u8 or varint)
            // - style_index (varint)
            // - optional label_index (varint)

            let vertex_index = match chapter.read_var_uint32() {
                Ok(v) => v,
                Err(_) => break,
            };

            let feature_type = match chapter.read_var_uint32() {
                Ok(v) => v as u8,
                Err(_) => break,
            };

            let style_index = match chapter.read_var_uint32() {
                Ok(v) => v as u16,
                Err(_) => 0,
            };

            features.push(PointFeature {
                vertex_index,
                feature_type,
                style_index,
                label_index: None, // Would need more parsing
                zoom_min: 0,
                zoom_max: 22,
            });
        }

        Some(ChapterPointFeatures {
            features,
            data_size: section_data.buf.len(),
        })
    }

    fn print(&self) {
        println!("  Point Features ({}):", self.features.len());
        for (i, f) in self.features.iter().take(20).enumerate() {
            println!(
                "    [{:3}] vertex={} type={} style={}",
                i, f.vertex_index, f.feature_type, f.style_index
            );
        }
        if self.features.len() > 20 {
            println!("    ... and {} more features", self.features.len() - 20);
        }
    }
}

/// Chapter containing line features
#[derive(Debug)]
pub struct ChapterLineFeatures {
    pub features: Vec<LineFeature>,
    pub data_size: usize,
}

impl SectionParser<ChapterLineFeatures> for ChapterLineFeatures {
    fn parse(section_data: &Vmp4Data) -> Option<ChapterLineFeatures> {
        let mut chapter = Chapter::new(&section_data.buf);
        let mut features = Vec::new();

        // Read feature count
        let count = chapter.read_var_uint32().ok()?;

        if count > 100000 {
            return None;
        }

        for _ in 0..count {
            let vertex_start = match chapter.read_var_uint32() {
                Ok(v) => v,
                Err(_) => break,
            };

            let vertex_count = match chapter.read_var_uint32() {
                Ok(v) => v,
                Err(_) => break,
            };

            let feature_type = match chapter.read_var_uint32() {
                Ok(v) => v as u8,
                Err(_) => break,
            };

            let style_index = match chapter.read_var_uint32() {
                Ok(v) => v as u16,
                Err(_) => 0,
            };

            features.push(LineFeature {
                vertex_start,
                vertex_count,
                feature_type,
                style_index,
                label_index: None,
                zoom_min: 0,
                zoom_max: 22,
            });
        }

        Some(ChapterLineFeatures {
            features,
            data_size: section_data.buf.len(),
        })
    }

    fn print(&self) {
        println!("  Line Features ({}):", self.features.len());
        for (i, f) in self.features.iter().take(20).enumerate() {
            println!(
                "    [{:3}] start={} count={} type={} style={}",
                i, f.vertex_start, f.vertex_count, f.feature_type, f.style_index
            );
        }
        if self.features.len() > 20 {
            println!("    ... and {} more features", self.features.len() - 20);
        }
    }
}

/// Chapter containing polygon features
#[derive(Debug)]
pub struct ChapterPolygonFeatures {
    pub features: Vec<PolygonFeature>,
    pub data_size: usize,
}

impl SectionParser<ChapterPolygonFeatures> for ChapterPolygonFeatures {
    fn parse(section_data: &Vmp4Data) -> Option<ChapterPolygonFeatures> {
        let mut chapter = Chapter::new(&section_data.buf);
        let mut features = Vec::new();

        // Read feature count
        let count = chapter.read_var_uint32().ok()?;

        if count > 100000 {
            return None;
        }

        for _ in 0..count {
            let vertex_start = match chapter.read_var_uint32() {
                Ok(v) => v,
                Err(_) => break,
            };

            let outer_count = match chapter.read_var_uint32() {
                Ok(v) => v,
                Err(_) => break,
            };

            let hole_count = match chapter.read_var_uint32() {
                Ok(v) => v,
                Err(_) => 0,
            };

            let feature_type = match chapter.read_var_uint32() {
                Ok(v) => v as u8,
                Err(_) => break,
            };

            let style_index = match chapter.read_var_uint32() {
                Ok(v) => v as u16,
                Err(_) => 0,
            };

            features.push(PolygonFeature {
                vertex_start,
                outer_count,
                hole_count,
                feature_type,
                style_index,
                label_index: None,
                zoom_min: 0,
                zoom_max: 22,
            });
        }

        Some(ChapterPolygonFeatures {
            features,
            data_size: section_data.buf.len(),
        })
    }

    fn print(&self) {
        println!("  Polygon Features ({}):", self.features.len());
        for (i, f) in self.features.iter().take(20).enumerate() {
            println!(
                "    [{:3}] start={} outer={} holes={} type={} style={}",
                i, f.vertex_start, f.outer_count, f.hole_count, f.feature_type, f.style_index
            );
        }
        if self.features.len() > 20 {
            println!("    ... and {} more features", self.features.len() - 20);
        }
    }
}
