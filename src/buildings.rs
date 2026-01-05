//! Building features and 3D mesh data for VMP4 tiles.
//!
//! Derived from GeoServices.framework decompilation.
//! Handles building footprints, extrusion heights, and 3D mesh data.

use crate::codec::{Chapter, CodecError, CodecResult};
use crate::geometry::Point2D;

/// A building footprint feature
#[derive(Debug, Clone)]
pub struct BuildingFootprint {
    /// Vertex indices for the footprint polygon
    pub vertex_start: u32,
    pub vertex_count: u32,
    /// Base height (ground level) in meters
    pub base_height: f32,
    /// Extrusion height (building height) in meters
    pub extrusion_height: f32,
    /// Building type/class
    pub building_type: u8,
    /// Style index
    pub style_index: u16,
    /// Roof type (flat, gabled, etc.)
    pub roof_type: u8,
    /// Feature flags
    pub flags: u8,
}

/// A 3D building mesh
#[derive(Debug, Clone)]
pub struct BuildingMesh {
    /// Vertices (x, y, z)
    pub vertices: Vec<[f32; 3]>,
    /// Triangle indices
    pub indices: Vec<u32>,
    /// Normal vectors per vertex
    pub normals: Vec<[f32; 3]>,
    /// UV texture coordinates
    pub uvs: Vec<[f32; 2]>,
    /// Material index
    pub material_index: u16,
}

/// DaVinci building data (high-quality 3D buildings)
#[derive(Debug, Clone)]
pub struct DaVinciBuilding {
    /// Building identifier
    pub id: u64,
    /// Position (center point)
    pub position: Point2D,
    /// Rotation angle in degrees
    pub rotation: f32,
    /// Scale factor
    pub scale: f32,
    /// Meshes making up this building
    pub meshes: Vec<BuildingMesh>,
    /// LOD level
    pub lod_level: u8,
}

/// Decoded building features section
#[derive(Debug, Clone)]
pub struct BuildingFeatures {
    pub footprints: Vec<BuildingFootprint>,
}

impl BuildingFeatures {
    /// Parse building features from section data
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        let mut chapter = Chapter::new(data);
        let mut footprints = Vec::new();

        // Read count
        let count = chapter.read_var_uint32()?;

        if count > 100000 {
            return Err(CodecError::BufferOverflow);
        }

        for _ in 0..count {
            let vertex_start = chapter.read_var_uint32()?;
            let vertex_count = chapter.read_var_uint32()?;

            // Read heights (may be encoded as varints or fixed)
            let base_raw = chapter.read_var_uint32().unwrap_or(0);
            let extrusion_raw = chapter.read_var_uint32().unwrap_or(0);

            // Convert to meters (assuming millimeter encoding)
            let base_height = base_raw as f32 * 0.001;
            let extrusion_height = extrusion_raw as f32 * 0.001;

            let building_type = chapter.read_var_uint32().unwrap_or(0) as u8;
            let style_index = chapter.read_var_uint32().unwrap_or(0) as u16;

            footprints.push(BuildingFootprint {
                vertex_start,
                vertex_count,
                base_height,
                extrusion_height,
                building_type,
                style_index,
                roof_type: 0,
                flags: 0,
            });
        }

        Ok(BuildingFeatures { footprints })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Building Features ({}):", self.footprints.len());
        for (i, b) in self.footprints.iter().take(10).enumerate() {
            println!(
                "    [{:3}] vertices={}+{} base={:.1}m height={:.1}m type={}",
                i,
                b.vertex_start,
                b.vertex_count,
                b.base_height,
                b.extrusion_height,
                b.building_type
            );
        }
        if self.footprints.len() > 10 {
            println!("    ... and {} more buildings", self.footprints.len() - 10);
        }
    }
}

/// High-resolution building mesh data
#[derive(Debug, Clone)]
pub struct BuildingMeshSection {
    pub meshes: Vec<BuildingMesh>,
}

impl BuildingMeshSection {
    /// Parse building meshes from section data
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        let mut chapter = Chapter::new(data);
        let mut meshes = Vec::new();

        // Read mesh count
        let count = chapter.read_var_uint32()?;

        if count > 10000 {
            return Err(CodecError::BufferOverflow);
        }

        for _ in 0..count {
            // Read vertex count
            let vertex_count = chapter.read_var_uint32()? as usize;
            if vertex_count > 100000 {
                break;
            }

            // Read vertices (3 floats each)
            let mut vertices = Vec::with_capacity(vertex_count);
            for _ in 0..vertex_count {
                // Vertices may be quantized integers
                let x = chapter.read_var_uint32().unwrap_or(0) as f32 / 65535.0;
                let y = chapter.read_var_uint32().unwrap_or(0) as f32 / 65535.0;
                let z = chapter.read_var_uint32().unwrap_or(0) as f32 / 65535.0;
                vertices.push([x, y, z]);
            }

            // Read index count
            let index_count = chapter.read_var_uint32()? as usize;
            if index_count > 300000 {
                break;
            }

            // Read indices
            let mut indices = Vec::with_capacity(index_count);
            for _ in 0..index_count {
                indices.push(chapter.read_var_uint32().unwrap_or(0));
            }

            // Material index
            let material_index = chapter.read_var_uint32().unwrap_or(0) as u16;

            meshes.push(BuildingMesh {
                vertices,
                indices,
                normals: Vec::new(), // Would need additional parsing
                uvs: Vec::new(),
                material_index,
            });
        }

        Ok(BuildingMeshSection { meshes })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Building Meshes ({}):", self.meshes.len());
        for (i, m) in self.meshes.iter().take(5).enumerate() {
            println!(
                "    [{:3}] vertices={} triangles={} material={}",
                i,
                m.vertices.len(),
                m.indices.len() / 3,
                m.material_index
            );
        }
        if self.meshes.len() > 5 {
            println!("    ... and {} more meshes", self.meshes.len() - 5);
        }
    }
}

/// DaVinci metadata for landmark buildings
#[derive(Debug, Clone)]
pub struct DaVinciMetadata {
    /// Asset identifiers
    pub asset_ids: Vec<u64>,
    /// Building positions
    pub positions: Vec<Point2D>,
    /// Rotations (degrees)
    pub rotations: Vec<f32>,
    /// Scale factors
    pub scales: Vec<f32>,
}

impl DaVinciMetadata {
    /// Parse DaVinci metadata
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        let mut chapter = Chapter::new(data);

        // Read count
        let count = chapter.read_var_uint32()? as usize;

        if count > 10000 {
            return Err(CodecError::BufferOverflow);
        }

        let mut asset_ids = Vec::with_capacity(count);
        let mut positions = Vec::with_capacity(count);
        let mut rotations = Vec::with_capacity(count);
        let mut scales = Vec::with_capacity(count);

        for _ in 0..count {
            // Asset ID (64-bit)
            let id = chapter.read_var_uint64().unwrap_or(0);
            asset_ids.push(id);

            // Position
            let x = chapter.read_var_uint32().unwrap_or(0) as f32 / 65535.0;
            let y = chapter.read_var_uint32().unwrap_or(0) as f32 / 65535.0;
            positions.push(Point2D::new(x, y));

            // Rotation (may be 16-bit angle)
            let rot_raw = chapter.read_var_uint32().unwrap_or(0);
            let rotation = rot_raw as f32 * 360.0 / 65535.0;
            rotations.push(rotation);

            // Scale
            let scale_raw = chapter.read_var_uint32().unwrap_or(4096);
            let scale = scale_raw as f32 / 4096.0;
            scales.push(scale);
        }

        Ok(DaVinciMetadata {
            asset_ids,
            positions,
            rotations,
            scales,
        })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  DaVinci Buildings ({}):", self.asset_ids.len());
        for i in 0..self.asset_ids.len().min(5) {
            println!(
                "    [{:3}] id={} pos=({:.3},{:.3}) rot={:.1}° scale={:.2}",
                i,
                self.asset_ids[i],
                self.positions[i].x,
                self.positions[i].y,
                self.rotations[i],
                self.scales[i]
            );
        }
        if self.asset_ids.len() > 5 {
            println!("    ... and {} more landmarks", self.asset_ids.len() - 5);
        }
    }
}
