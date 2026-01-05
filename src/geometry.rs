//! Geometry types and vertex decoding for VMP4 tiles.
//!
//! Derived from GeoServices.framework decompilation:
//! - `geo::codec::decodeVertices`
//! - `GeoCodecsVertexPool`, `GeoCodecsCurveVertexPool`
//! - Coordinate dequantization

use crate::codec::{BitStream, Chapter, CodecError, CodecResult};

/// A 2D point in tile coordinates (normalized 0.0-1.0)
#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct Point2D {
    pub x: f32,
    pub y: f32,
}

impl Point2D {
    pub fn new(x: f32, y: f32) -> Self {
        Self { x, y }
    }
}

/// A 2D point with curve information (for bezier curves)
#[derive(Debug, Clone, Copy, Default)]
pub struct CurveVertex {
    pub x: f32,
    pub y: f32,
    /// Curve flag: 0 = line segment, 1 = curve control point
    pub is_curve: bool,
}

impl CurveVertex {
    pub fn new(x: f32, y: f32, is_curve: bool) -> Self {
        Self { x, y, is_curve }
    }
}

/// Bounding box for a set of vertices
#[derive(Debug, Clone, Copy, Default)]
pub struct BoundingBox {
    pub min_x: f32,
    pub min_y: f32,
    pub max_x: f32,
    pub max_y: f32,
}

impl BoundingBox {
    pub fn new() -> Self {
        Self {
            min_x: f32::MAX,
            min_y: f32::MAX,
            max_x: f32::MIN,
            max_y: f32::MIN,
        }
    }

    pub fn extend(&mut self, x: f32, y: f32) {
        self.min_x = self.min_x.min(x);
        self.min_y = self.min_y.min(y);
        self.max_x = self.max_x.max(x);
        self.max_y = self.max_y.max(y);
    }
}

/// Simple vertex pool (for points and lines without curve data)
#[derive(Debug, Clone, Default)]
pub struct VertexPool {
    /// Coordinate precision bits
    pub precision_bits: u8,
    /// All vertices
    pub vertices: Vec<Point2D>,
    /// Bounding boxes for each polyline/polygon
    pub bounds: Vec<BoundingBox>,
}

/// Curve vertex pool (for bezier curves)
#[derive(Debug, Clone, Default)]
pub struct CurveVertexPool {
    /// Coordinate precision bits
    pub precision_bits: u8,
    /// All curve vertices
    pub vertices: Vec<CurveVertex>,
    /// Bounding boxes for each curve
    pub bounds: Vec<BoundingBox>,
}

/// Vertex encoding parameters read from the bitstream header
#[derive(Debug, Clone, Copy)]
struct VertexEncodingParams {
    /// Number of polylines/shapes
    pub shape_count: u32,
    /// Total number of vertices
    pub vertex_count: u32,
    /// Coordinate precision (bits)
    pub coord_bits: u8,
    /// Delta encoding bits for X/Y
    pub delta_bits: u8,
    /// Run length bits
    pub run_bits: u8,
    /// Has curve data
    pub has_curves: bool,
}

/// Decode vertices from a chapter.
///
/// Based on `geo::codec::decodeVertices`:
/// 1. Read header: shape_count, vertex_count (varints)
/// 2. Read encoding params from bitstream: coord_bits, delta_bits, run_bits, has_curves
/// 3. Decode vertices using delta encoding
///
/// Returns either a simple VertexPool or CurveVertexPool depending on has_curves flag.
pub fn decode_vertices(chapter: &mut Chapter<'_>) -> CodecResult<VertexDecodeResult> {
    // Read header varints
    let shape_count = chapter.read_var_uint32()?;
    let vertex_count = chapter.read_var_uint32()?;

    if shape_count == 0 || vertex_count == 0 {
        return Ok(VertexDecodeResult::Empty);
    }

    // Safety check for reasonable limits
    if shape_count > 0x100000 || vertex_count > 0x100000 {
        return Err(CodecError::BufferOverflow);
    }

    // Create bitstream from remaining data
    let mut bs = chapter.to_bitstream();

    // Read encoding parameters (6 bits each for coord_bits and delta_bits)
    let coord_bits = bs.read_bits(6)? as u8;
    let delta_bits = bs.read_bits(6)? as u8;
    let run_bits = bs.read_bits(4)? as u8;
    let has_curves = bs.read_bit()?;

    let params = VertexEncodingParams {
        shape_count,
        vertex_count,
        coord_bits,
        delta_bits,
        run_bits,
        has_curves,
    };

    if has_curves {
        decode_curve_vertices(&mut bs, params)
    } else {
        decode_simple_vertices(&mut bs, params)
    }
}

/// Result of vertex decoding
#[derive(Debug)]
pub enum VertexDecodeResult {
    Empty,
    Simple(VertexPool),
    Curves(CurveVertexPool),
}

/// Decode simple (non-curve) vertices
fn decode_simple_vertices(
    bs: &mut BitStream<'_>,
    params: VertexEncodingParams,
) -> CodecResult<VertexDecodeResult> {
    let scale = 1.0 / ((1u32 << params.coord_bits) - 1) as f32;
    let mut vertices = Vec::with_capacity(params.vertex_count as usize);
    let mut bounds = Vec::with_capacity(params.shape_count as usize);

    let mut remaining_vertices = params.vertex_count;
    let mut current_x: i32 = 0;
    let mut current_y: i32 = 0;

    for _ in 0..params.shape_count {
        // Read run length for this shape
        let run_length = if remaining_vertices > 0 {
            if params.run_bits > 0 {
                bs.read_bits(params.run_bits as usize)?
            } else {
                remaining_vertices
            }
        } else {
            0
        };

        let mut shape_bounds = BoundingBox::new();
        let _shape_start = vertices.len();

        for vertex_idx in 0..run_length {
            if vertex_idx == 0 {
                // First vertex in shape: absolute coordinates
                current_x = bs.read_bits(params.coord_bits as usize)? as i32;
                current_y = bs.read_bits(params.coord_bits as usize)? as i32;
            } else {
                // Subsequent vertices: delta encoding
                let dx = bs.read_bits_signed(params.delta_bits as usize)?;
                let dy = bs.read_bits_signed(params.delta_bits as usize)?;
                current_x += dx;
                current_y += dy;
            }

            let x = current_x as f32 * scale;
            let y = current_y as f32 * scale;
            vertices.push(Point2D::new(x, y));
            shape_bounds.extend(x, y);
        }

        if run_length > 0 {
            bounds.push(shape_bounds);
        }

        remaining_vertices = remaining_vertices.saturating_sub(run_length);
    }

    Ok(VertexDecodeResult::Simple(VertexPool {
        precision_bits: params.coord_bits,
        vertices,
        bounds,
    }))
}

/// Decode curve vertices (with bezier control point flags)
fn decode_curve_vertices(
    bs: &mut BitStream<'_>,
    params: VertexEncodingParams,
) -> CodecResult<VertexDecodeResult> {
    let scale = 1.0 / ((1u32 << params.coord_bits) - 1) as f32;
    let mut vertices = Vec::with_capacity(params.vertex_count as usize);
    let mut bounds = Vec::with_capacity(params.shape_count as usize);

    let mut remaining_vertices = params.vertex_count;
    let mut current_x: i32 = 0;
    let mut current_y: i32 = 0;

    for _ in 0..params.shape_count {
        // Read run length for this shape
        let run_length = if remaining_vertices > 0 {
            if params.run_bits > 0 {
                bs.read_bits(params.run_bits as usize)?
            } else {
                remaining_vertices
            }
        } else {
            0
        };

        let mut shape_bounds = BoundingBox::new();

        for vertex_idx in 0..run_length {
            if vertex_idx == 0 {
                // First vertex in shape: absolute coordinates
                current_x = bs.read_bits(params.coord_bits as usize)? as i32;
                current_y = bs.read_bits(params.coord_bits as usize)? as i32;
            } else {
                // Subsequent vertices: delta encoding
                let dx = bs.read_bits_signed(params.delta_bits as usize)?;
                let dy = bs.read_bits_signed(params.delta_bits as usize)?;
                current_x += dx;
                current_y += dy;
            }

            // Read curve flag (1 bit)
            let is_curve = bs.read_bit()?;

            let x = current_x as f32 * scale;
            let y = current_y as f32 * scale;
            vertices.push(CurveVertex::new(x, y, is_curve));
            shape_bounds.extend(x, y);
        }

        if run_length > 0 {
            bounds.push(shape_bounds);
        }

        remaining_vertices = remaining_vertices.saturating_sub(run_length);
    }

    Ok(VertexDecodeResult::Curves(CurveVertexPool {
        precision_bits: params.coord_bits,
        vertices,
        bounds,
    }))
}

/// Characteristic point on a line/polygon (for styling)
#[derive(Debug, Clone, Copy, Default)]
pub struct CharacteristicPoint {
    /// Feature index this point belongs to
    pub feature_index: u32,
    /// Position along the line (normalized 0.0-1.0)
    pub position: f32,
    /// Style attribute index
    pub style_index: u16,
    /// Point type (junction, endpoint, etc.)
    pub point_type: u8,
}

/// Stroke specification for line rendering
#[derive(Debug, Clone, Copy, Default)]
pub struct StrokeSpecification {
    /// Start position (normalized)
    pub start: f32,
    /// End position (normalized)
    pub end: f32,
    /// Stroke style index
    pub style_index: u16,
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_point2d() {
        let p = Point2D::new(0.5, 0.75);
        assert_eq!(p.x, 0.5);
        assert_eq!(p.y, 0.75);
    }

    #[test]
    fn test_bounding_box() {
        let mut bb = BoundingBox::new();
        bb.extend(0.1, 0.2);
        bb.extend(0.5, 0.3);
        bb.extend(0.2, 0.8);

        assert_eq!(bb.min_x, 0.1);
        assert_eq!(bb.min_y, 0.2);
        assert_eq!(bb.max_x, 0.5);
        assert_eq!(bb.max_y, 0.8);
    }
}
