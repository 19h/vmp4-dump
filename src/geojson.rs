//! GeoJSON export functionality for VMP4 tiles.
//!
//! Converts parsed VMP4 data into GeoJSON format for visualization
//! and interoperability with standard mapping tools.

use crate::bounds::CoordinateBounds;
use crate::tilekey::{self, TileLocation};
use serde::{Deserialize, Serialize};
use std::collections::HashMap;

/// GeoJSON Feature
#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct Feature {
    #[serde(rename = "type")]
    pub feature_type: String,
    pub geometry: Geometry,
    pub properties: HashMap<String, serde_json::Value>,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub id: Option<serde_json::Value>,
}

impl Feature {
    pub fn new(geometry: Geometry) -> Self {
        Feature {
            feature_type: "Feature".to_string(),
            geometry,
            properties: HashMap::new(),
            id: None,
        }
    }

    pub fn with_property(mut self, key: &str, value: impl Into<serde_json::Value>) -> Self {
        self.properties.insert(key.to_string(), value.into());
        self
    }

    pub fn with_id(mut self, id: impl Into<serde_json::Value>) -> Self {
        self.id = Some(id.into());
        self
    }
}

/// GeoJSON Geometry
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(tag = "type")]
pub enum Geometry {
    Point {
        coordinates: [f64; 2],
    },
    LineString {
        coordinates: Vec<[f64; 2]>,
    },
    Polygon {
        coordinates: Vec<Vec<[f64; 2]>>,
    },
    MultiPoint {
        coordinates: Vec<[f64; 2]>,
    },
    MultiLineString {
        coordinates: Vec<Vec<[f64; 2]>>,
    },
    MultiPolygon {
        coordinates: Vec<Vec<Vec<[f64; 2]>>>,
    },
    GeometryCollection {
        geometries: Vec<Geometry>,
    },
}

/// GeoJSON FeatureCollection
#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct FeatureCollection {
    #[serde(rename = "type")]
    pub collection_type: String,
    pub features: Vec<Feature>,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub bbox: Option<[f64; 4]>,
}

impl FeatureCollection {
    pub fn new() -> Self {
        FeatureCollection {
            collection_type: "FeatureCollection".to_string(),
            features: Vec::new(),
            bbox: None,
        }
    }

    pub fn add_feature(&mut self, feature: Feature) {
        self.features.push(feature);
    }

    pub fn with_bbox(mut self, min_x: f64, min_y: f64, max_x: f64, max_y: f64) -> Self {
        self.bbox = Some([min_x, min_y, max_x, max_y]);
        self
    }

    /// Convert to JSON string
    pub fn to_json(&self) -> Result<String, serde_json::Error> {
        serde_json::to_string(self)
    }

    /// Convert to pretty-printed JSON string
    pub fn to_json_pretty(&self) -> Result<String, serde_json::Error> {
        serde_json::to_string_pretty(self)
    }
}

impl Default for FeatureCollection {
    fn default() -> Self {
        Self::new()
    }
}

/// Tile coordinate converter
///
/// Converts tile-local quantized coordinates to WGS84 lat/lon.
/// Supports multiple initialization methods:
/// - From tile indices (x, y, zoom)
/// - From Apple tile keys (via tilekey module)
/// - From coordinate bounds
#[derive(Debug, Clone)]
pub struct TileCoordinateConverter {
    /// Tile X index
    pub tile_x: u32,
    /// Tile Y index
    pub tile_y: u32,
    /// Tile zoom level
    pub zoom: u8,
    /// Coordinate scale factor
    pub scale: f64,
    /// Optional explicit bounds (overrides tile-based calculation)
    bounds: Option<CoordinateBounds>,
}

impl TileCoordinateConverter {
    /// Create a new converter for a given tile
    pub fn new(tile_x: u32, tile_y: u32, zoom: u8) -> Self {
        let n = 2u32.pow(zoom as u32) as f64;
        let scale = 1.0 / n;
        TileCoordinateConverter {
            tile_x,
            tile_y,
            zoom,
            scale,
            bounds: None,
        }
    }

    /// Create a converter from Apple tile database keys
    ///
    /// Uses the tilekey module to decode the keys to coordinates.
    pub fn from_tile_keys(key_a: u32, key_b: u32, key_c: u32, key_d: u32) -> Option<Self> {
        let location = tilekey::decode_apple_tile_key(key_a, key_b, key_c, key_d)?;
        Some(Self::from_tile_location(&location))
    }

    /// Create a converter from a decoded TileLocation
    pub fn from_tile_location(location: &TileLocation) -> Self {
        let (tile_x, tile_y) = tilekey::latlng_to_tile(location.lat, location.lon, location.zoom);
        let mut conv = Self::new(tile_x, tile_y, location.zoom);

        // If we have bounds from tilekey, use them
        if let Some(ref tile_bounds) = location.bounds {
            conv.bounds = Some(CoordinateBounds {
                lat_min: tile_bounds.south,
                lat_max: tile_bounds.north,
                lon_min: tile_bounds.west,
                lon_max: tile_bounds.east,
                source_section: 0,
                encoding: crate::bounds::BoundsEncoding::Float64,
            });
        }

        conv
    }

    /// Create a converter from explicit coordinate bounds
    pub fn from_bounds(bounds: &CoordinateBounds) -> Self {
        // Estimate zoom from bounds width
        let width = bounds.width();
        let zoom = if width > 90.0 {
            0
        } else if width > 45.0 {
            1
        } else if width > 22.0 {
            2
        } else if width > 11.0 {
            3
        } else if width > 5.5 {
            4
        } else if width > 2.7 {
            5
        } else if width > 1.4 {
            6
        } else if width > 0.7 {
            7
        } else if width > 0.35 {
            8
        } else if width > 0.17 {
            9
        } else if width > 0.08 {
            10
        } else if width > 0.04 {
            11
        } else if width > 0.02 {
            12
        } else if width > 0.01 {
            13
        } else if width > 0.005 {
            14
        } else {
            15
        };

        let (center_lat, center_lon) = bounds.center();
        let (tile_x, tile_y) = tilekey::latlng_to_tile(center_lat, center_lon, zoom);

        TileCoordinateConverter {
            tile_x,
            tile_y,
            zoom,
            scale: 1.0 / 2f64.powi(zoom as i32),
            bounds: Some(bounds.clone()),
        }
    }

    /// Convert tile-local coordinates (0-1 range) to WGS84 longitude
    pub fn to_longitude(&self, x: f64) -> f64 {
        if let Some(ref bounds) = self.bounds {
            // Linear interpolation within bounds
            bounds.lon_min + x * (bounds.lon_max - bounds.lon_min)
        } else {
            let n = 2u32.pow(self.zoom as u32) as f64;
            (self.tile_x as f64 + x) / n * 360.0 - 180.0
        }
    }

    /// Convert tile-local coordinates (0-1 range) to WGS84 latitude
    pub fn to_latitude(&self, y: f64) -> f64 {
        if let Some(ref bounds) = self.bounds {
            // Linear interpolation within bounds (note: y=0 is typically north)
            bounds.lat_max - y * (bounds.lat_max - bounds.lat_min)
        } else {
            let n = 2u32.pow(self.zoom as u32) as f64;
            let lat_rad = ((1.0 - 2.0 * (self.tile_y as f64 + y) / n) * std::f64::consts::PI)
                .sinh()
                .atan();
            lat_rad.to_degrees()
        }
    }

    /// Convert quantized coordinates to WGS84 [lon, lat]
    pub fn to_wgs84(&self, x: u32, y: u32, max_val: u32) -> [f64; 2] {
        let x_norm = x as f64 / max_val as f64;
        let y_norm = y as f64 / max_val as f64;
        [self.to_longitude(x_norm), self.to_latitude(y_norm)]
    }

    /// Convert normalized coordinates (0-1) to WGS84 [lon, lat]
    pub fn normalized_to_wgs84(&self, x: f64, y: f64) -> [f64; 2] {
        [self.to_longitude(x), self.to_latitude(y)]
    }

    /// Get the bounding box as [west, south, east, north]
    pub fn get_bbox(&self) -> [f64; 4] {
        if let Some(ref bounds) = self.bounds {
            [
                bounds.lon_min,
                bounds.lat_min,
                bounds.lon_max,
                bounds.lat_max,
            ]
        } else {
            let sw = self.normalized_to_wgs84(0.0, 1.0);
            let ne = self.normalized_to_wgs84(1.0, 0.0);
            [sw[0], sw[1], ne[0], ne[1]]
        }
    }

    /// Get center point as [lon, lat]
    pub fn get_center(&self) -> [f64; 2] {
        self.normalized_to_wgs84(0.5, 0.5)
    }
}

/// Builder for creating GeoJSON from VMP4 data
pub struct GeoJsonBuilder {
    collection: FeatureCollection,
    converter: Option<TileCoordinateConverter>,
}

impl GeoJsonBuilder {
    pub fn new() -> Self {
        GeoJsonBuilder {
            collection: FeatureCollection::new(),
            converter: None,
        }
    }

    /// Set the tile coordinate converter from tile indices
    pub fn with_tile(mut self, tile_x: u32, tile_y: u32, zoom: u8) -> Self {
        self.converter = Some(TileCoordinateConverter::new(tile_x, tile_y, zoom));
        self
    }

    /// Set the tile coordinate converter from Apple tile keys
    pub fn with_tile_keys(mut self, key_a: u32, key_b: u32, key_c: u32, key_d: u32) -> Self {
        if let Some(conv) = TileCoordinateConverter::from_tile_keys(key_a, key_b, key_c, key_d) {
            self.converter = Some(conv);
        }
        self
    }

    /// Set the tile coordinate converter from decoded tile location
    pub fn with_tile_location(mut self, location: &TileLocation) -> Self {
        self.converter = Some(TileCoordinateConverter::from_tile_location(location));
        self
    }

    /// Set the tile coordinate converter from coordinate bounds
    pub fn with_bounds(mut self, bounds: &CoordinateBounds) -> Self {
        self.converter = Some(TileCoordinateConverter::from_bounds(bounds));
        self
    }

    /// Set the converter directly
    pub fn with_converter(mut self, converter: TileCoordinateConverter) -> Self {
        self.converter = Some(converter);
        self
    }

    /// Check if converter is set
    pub fn has_converter(&self) -> bool {
        self.converter.is_some()
    }

    /// Get the current converter
    pub fn converter(&self) -> Option<&TileCoordinateConverter> {
        self.converter.as_ref()
    }

    /// Add a point feature
    pub fn add_point(&mut self, x: f64, y: f64, properties: HashMap<String, serde_json::Value>) {
        let coords = if let Some(ref conv) = self.converter {
            conv.normalized_to_wgs84(x, y)
        } else {
            [x, y]
        };

        let mut feature = Feature::new(Geometry::Point {
            coordinates: coords,
        });
        feature.properties = properties;
        self.collection.add_feature(feature);
    }

    /// Add a line feature
    pub fn add_line(
        &mut self,
        coords: &[[f64; 2]],
        properties: HashMap<String, serde_json::Value>,
    ) {
        let converted_coords: Vec<[f64; 2]> = if let Some(ref conv) = self.converter {
            coords
                .iter()
                .map(|[x, y]| conv.normalized_to_wgs84(*x, *y))
                .collect()
        } else {
            coords.to_vec()
        };

        let mut feature = Feature::new(Geometry::LineString {
            coordinates: converted_coords,
        });
        feature.properties = properties;
        self.collection.add_feature(feature);
    }

    /// Add a polygon feature
    pub fn add_polygon(
        &mut self,
        rings: &[Vec<[f64; 2]>],
        properties: HashMap<String, serde_json::Value>,
    ) {
        let converted_rings: Vec<Vec<[f64; 2]>> = if let Some(ref conv) = self.converter {
            rings
                .iter()
                .map(|ring| {
                    ring.iter()
                        .map(|[x, y]| conv.normalized_to_wgs84(*x, *y))
                        .collect()
                })
                .collect()
        } else {
            rings.to_vec()
        };

        let mut feature = Feature::new(Geometry::Polygon {
            coordinates: converted_rings,
        });
        feature.properties = properties;
        self.collection.add_feature(feature);
    }

    /// Add a label feature (point with text property)
    pub fn add_label(&mut self, x: f64, y: f64, text: &str, language: Option<&str>) {
        let coords = if let Some(ref conv) = self.converter {
            conv.normalized_to_wgs84(x, y)
        } else {
            [x, y]
        };

        let mut feature = Feature::new(Geometry::Point {
            coordinates: coords,
        });
        feature.properties.insert("text".to_string(), text.into());
        feature
            .properties
            .insert("type".to_string(), "label".into());
        if let Some(lang) = language {
            feature
                .properties
                .insert("language".to_string(), lang.into());
        }
        self.collection.add_feature(feature);
    }

    /// Build the final FeatureCollection
    pub fn build(self) -> FeatureCollection {
        let mut collection = self.collection;

        // Add bbox if we have a converter
        if let Some(ref conv) = self.converter {
            let bbox = conv.get_bbox();
            collection.bbox = Some(bbox);
        }

        collection
    }

    /// Build with explicit bbox override
    pub fn build_with_bbox(self, bbox: [f64; 4]) -> FeatureCollection {
        let mut collection = self.collection;
        collection.bbox = Some(bbox);
        collection
    }

    /// Get the number of features
    pub fn feature_count(&self) -> usize {
        self.collection.features.len()
    }
}

impl Default for GeoJsonBuilder {
    fn default() -> Self {
        Self::new()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_feature_collection() {
        let mut collection = FeatureCollection::new();
        let feature = Feature::new(Geometry::Point {
            coordinates: [0.0, 0.0],
        })
        .with_property("name", "test");

        collection.add_feature(feature);
        assert_eq!(collection.features.len(), 1);
    }

    #[test]
    fn test_coordinate_converter() {
        // Tile 0/0/0 should cover the whole world
        let conv = TileCoordinateConverter::new(0, 0, 0);
        let [lon, lat] = conv.normalized_to_wgs84(0.5, 0.5);
        assert!((lon - 0.0).abs() < 0.01);
        assert!((lat - 0.0).abs() < 0.01);
    }

    #[test]
    fn test_geojson_builder() {
        let mut builder = GeoJsonBuilder::new();
        builder.add_point(0.5, 0.5, HashMap::new());
        let collection = builder.build();
        assert_eq!(collection.features.len(), 1);
    }

    #[test]
    fn test_geojson_serialization() {
        let feature = Feature::new(Geometry::Point {
            coordinates: [1.0, 2.0],
        })
        .with_property("name", "test point");

        let mut collection = FeatureCollection::new();
        collection.add_feature(feature);

        let json = collection.to_json().unwrap();
        assert!(json.contains("FeatureCollection"));
        assert!(json.contains("test point"));
    }

    #[test]
    fn test_converter_from_bounds() {
        use crate::bounds::{BoundsEncoding, CoordinateBounds};

        let bounds = CoordinateBounds {
            lat_min: 37.7,
            lat_max: 37.8,
            lon_min: -122.5,
            lon_max: -122.4,
            source_section: 0x1E,
            encoding: BoundsEncoding::Float64,
        };

        let conv = TileCoordinateConverter::from_bounds(&bounds);

        // Check corners
        let sw = conv.normalized_to_wgs84(0.0, 1.0);
        let ne = conv.normalized_to_wgs84(1.0, 0.0);

        assert!((sw[0] - (-122.5)).abs() < 0.01); // lon_min
        assert!((sw[1] - 37.7).abs() < 0.01); // lat_min
        assert!((ne[0] - (-122.4)).abs() < 0.01); // lon_max
        assert!((ne[1] - 37.8).abs() < 0.01); // lat_max
    }

    #[test]
    fn test_builder_with_bounds() {
        use crate::bounds::{BoundsEncoding, CoordinateBounds};

        let bounds = CoordinateBounds {
            lat_min: 40.0,
            lat_max: 41.0,
            lon_min: -74.0,
            lon_max: -73.0,
            source_section: 0x1E,
            encoding: BoundsEncoding::Float64,
        };

        let mut builder = GeoJsonBuilder::new().with_bounds(&bounds);
        builder.add_point(0.5, 0.5, HashMap::new());
        let collection = builder.build();

        assert!(collection.bbox.is_some());
        let bbox = collection.bbox.unwrap();
        assert!((bbox[0] - (-74.0)).abs() < 0.01); // west
        assert!((bbox[1] - 40.0).abs() < 0.01); // south
    }

    #[test]
    fn test_get_center() {
        let conv = TileCoordinateConverter::new(0, 0, 1);
        let center = conv.get_center();
        // Tile 0/0 at zoom 1 should have center roughly at (-90, 66) - northwest quadrant
        assert!(center[0] < 0.0); // Western hemisphere
    }
}
