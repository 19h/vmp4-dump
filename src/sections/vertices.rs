//! ChapterVertices section decoder
//!
//! Derived from `geo::codec::decodeVertices` in GeoServices.framework.
//! This section contains tile geometry data (points, lines, polygons).

use crate::codec::{Chapter, CodecResult};
use crate::geometry::{decode_vertices, CurveVertexPool, VertexDecodeResult, VertexPool};
use crate::sections::section::SectionParser;
use crate::vmp4_parser::Vmp4Data;

/// Decoded vertices section
#[derive(Debug)]
pub struct ChapterVertices {
    /// Result of vertex decoding
    pub result: VertexDecodeResult,
}

impl ChapterVertices {
    /// Get simple vertex pool if present
    pub fn simple_vertices(&self) -> Option<&VertexPool> {
        match &self.result {
            VertexDecodeResult::Simple(pool) => Some(pool),
            _ => None,
        }
    }

    /// Get curve vertex pool if present
    pub fn curve_vertices(&self) -> Option<&CurveVertexPool> {
        match &self.result {
            VertexDecodeResult::Curves(pool) => Some(pool),
            _ => None,
        }
    }

    /// Check if empty
    pub fn is_empty(&self) -> bool {
        matches!(self.result, VertexDecodeResult::Empty)
    }
}

impl SectionParser<ChapterVertices> for ChapterVertices {
    fn parse(section_data: &Vmp4Data) -> Option<ChapterVertices> {
        let mut chapter = Chapter::new(&section_data.buf);

        match decode_vertices(&mut chapter) {
            Ok(result) => Some(ChapterVertices { result }),
            Err(e) => {
                eprintln!("Failed to decode vertices: {}", e);
                None
            }
        }
    }

    fn print(&self) {
        match &self.result {
            VertexDecodeResult::Empty => {
                println!("  (empty vertex pool)");
            }
            VertexDecodeResult::Simple(pool) => {
                println!("  Simple Vertex Pool:");
                println!("    precision: {} bits", pool.precision_bits);
                println!("    vertices: {}", pool.vertices.len());
                println!("    shapes: {}", pool.bounds.len());

                // Print first few vertices
                for (i, v) in pool.vertices.iter().take(10).enumerate() {
                    println!("    [{:4}] ({:.6}, {:.6})", i, v.x, v.y);
                }
                if pool.vertices.len() > 10 {
                    println!("    ... and {} more vertices", pool.vertices.len() - 10);
                }
            }
            VertexDecodeResult::Curves(pool) => {
                println!("  Curve Vertex Pool:");
                println!("    precision: {} bits", pool.precision_bits);
                println!("    vertices: {}", pool.vertices.len());
                println!("    shapes: {}", pool.bounds.len());

                // Print first few vertices
                for (i, v) in pool.vertices.iter().take(10).enumerate() {
                    let curve_marker = if v.is_curve { " [curve]" } else { "" };
                    println!("    [{:4}] ({:.6}, {:.6}){}", i, v.x, v.y, curve_marker);
                }
                if pool.vertices.len() > 10 {
                    println!("    ... and {} more vertices", pool.vertices.len() - 10);
                }
            }
        }
    }
}
