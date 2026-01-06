/*
 This file was inferred from the decompilation by Ghidra
 of the private framework GeoServices.framework extracted
 from the arm64e dyld cache of MacOS 12.3 (21E230).

 If you think this is a copyright violation, go ahead
 and sue me. If you do, I'll sue you right back because
 it isn't. Get fucked.
*/

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum Vmp4SectionType {
    ChapterGlobal,
    ChapterLabels,
    ChapterLabelLanguages,
    ChapterLabelLocalizations2,
    ChapterVertices,
    ChapterPointFeatures,
    ChapterLineFeatures,
    ChapterPolygonFeatures,
    ChapterBuildingFeatures,
    ChapterCoastlineFeatures,
    ChapterWrappingCoastlineFeatures,
    ChapterBuildingMeshes,
    ChapterLinePointCharacteristics,
    ChapterPolygonPointCharacteristics,
    ChapterPolygonPointLabelPositions,
    ChapterConnectivity,
    ChapterGeoIDSegments,
    ChapterAddressRanges,
    ChapterTileReferences,
    ChapterHighResBuildings,
    ChapterDebugBlob,
    ChapterElevationRaster,
    ChapterStyleAttributeRaster,
    ChapterDaVinciMetadata,
    ChapterLowResBuildings,
    ChapterTransitMZROverride,
    ChapterCoverage,
    ChapterTransitSystems,
    ChapterTransitNetwork,
    ChapterRoadNetwork,
    ChapterVenueMZROverride,
    ChapterVenues,
    ChapterStorefronts,
    ChapterLowResBorderBuildings,
    ChapterBorderBuildingMeshes,
    ChapterLabelPlacementMetadata,
    ChapterDaVinciBuildings,
    ChapterPointFeaturesAddendum,
    ChapterLinesExtended,
    ChapterTrafficSkeleton1,
    ChapterDaVinciLandmarks,
    ChapterLineWidths1,
    ChapterPointLabelAnnotations,
    ChapterPOIMzrOverrides,
    ChapterTrafficSkeleton2,
    ChapterLineWidths2,
    ChapterStyleAttributeRaster2,
    ChapterMaterialRaster,
    ChapterDaVinciAssetMetadata,
    ChapterRunningTracks,
    ChapterHikingHillShadeRaster,
    ChapterLiveFeatures,
    ChapterAnnotationLabels,
    ChapterContourLinesFeet,
    ChapterSupplementalFeatureIDs,
    ChapterContourLinesMeters,
    ChapterLiveFeaturesMetadatas,
    ChapterRegionMetadata,
    ChapterCompressedPolygons,
    Unknown,
}

impl Vmp4SectionType {
    /// Returns a human-readable description of the section type
    pub fn description(&self) -> &'static str {
        match self {
            Vmp4SectionType::ChapterGlobal => "Header/Metadata",
            Vmp4SectionType::ChapterLabels => "Place Names",
            Vmp4SectionType::ChapterLabelLanguages => "Language/Localization",
            Vmp4SectionType::ChapterLabelLocalizations2 => "Extended Localization",
            Vmp4SectionType::ChapterVertices => "Geometry Data",
            Vmp4SectionType::ChapterPointFeatures => "Point Features",
            Vmp4SectionType::ChapterLineFeatures => "Line Features (Roads/Paths)",
            Vmp4SectionType::ChapterPolygonFeatures => "Polygon Features (Areas)",
            Vmp4SectionType::ChapterBuildingFeatures => "Building Data",
            Vmp4SectionType::ChapterCoastlineFeatures => "Coastline Data",
            Vmp4SectionType::ChapterWrappingCoastlineFeatures => "Wrapping Coastline Data",
            Vmp4SectionType::ChapterBuildingMeshes => "Building 3D Meshes",
            Vmp4SectionType::ChapterLinePointCharacteristics => "Line Point Characteristics",
            Vmp4SectionType::ChapterPolygonPointCharacteristics => "Polygon Point Characteristics",
            Vmp4SectionType::ChapterPolygonPointLabelPositions => "Polygon Label Positions",
            Vmp4SectionType::ChapterConnectivity => "Road Network Connectivity",
            Vmp4SectionType::ChapterGeoIDSegments => "Geographic ID Segments",
            Vmp4SectionType::ChapterAddressRanges => "Address Range Data",
            Vmp4SectionType::ChapterTileReferences => "Tile References",
            Vmp4SectionType::ChapterHighResBuildings => "High-Res Building Data",
            Vmp4SectionType::ChapterDebugBlob => "Debug Information",
            Vmp4SectionType::ChapterElevationRaster => "Elevation Data",
            Vmp4SectionType::ChapterStyleAttributeRaster => "Style Attributes",
            Vmp4SectionType::ChapterDaVinciMetadata => "DaVinci Metadata",
            Vmp4SectionType::ChapterLowResBuildings => "Low-Res Building Data",
            Vmp4SectionType::ChapterTransitMZROverride => "Transit MZR Override",
            Vmp4SectionType::ChapterCoverage => "Coverage Data",
            Vmp4SectionType::ChapterTransitSystems => "Transit Systems",
            Vmp4SectionType::ChapterTransitNetwork => "Transit Network",
            Vmp4SectionType::ChapterRoadNetwork => "Road Network Data",
            Vmp4SectionType::ChapterVenueMZROverride => "Venue MZR Override",
            Vmp4SectionType::ChapterVenues => "Venue/POI Data",
            Vmp4SectionType::ChapterStorefronts => "Storefront Data",
            Vmp4SectionType::ChapterLowResBorderBuildings => "Low-Res Border Buildings",
            Vmp4SectionType::ChapterBorderBuildingMeshes => "Border Building Meshes",
            Vmp4SectionType::ChapterLabelPlacementMetadata => "Label Placement Metadata",
            Vmp4SectionType::ChapterDaVinciBuildings => "DaVinci Buildings",
            Vmp4SectionType::ChapterPointFeaturesAddendum => "Point Features Addendum",
            Vmp4SectionType::ChapterLinesExtended => "Extended Line Data",
            Vmp4SectionType::ChapterTrafficSkeleton1 => "Traffic Skeleton (Primary)",
            Vmp4SectionType::ChapterDaVinciLandmarks => "DaVinci Landmarks",
            Vmp4SectionType::ChapterLineWidths1 => "Line Widths (Primary)",
            Vmp4SectionType::ChapterPointLabelAnnotations => "Point Label Annotations",
            Vmp4SectionType::ChapterPOIMzrOverrides => "POI MZR Overrides",
            Vmp4SectionType::ChapterTrafficSkeleton2 => "Traffic Skeleton (Secondary)",
            Vmp4SectionType::ChapterLineWidths2 => "Line Widths (Secondary)",
            Vmp4SectionType::ChapterStyleAttributeRaster2 => "Style Attributes (Secondary)",
            Vmp4SectionType::ChapterMaterialRaster => "Material Raster Data",
            Vmp4SectionType::ChapterDaVinciAssetMetadata => "DaVinci Asset Metadata",
            Vmp4SectionType::ChapterRunningTracks => "Running Track Data",
            Vmp4SectionType::ChapterHikingHillShadeRaster => "Hiking/Hillshade Raster",
            Vmp4SectionType::ChapterLiveFeatures => "Live Features",
            Vmp4SectionType::ChapterAnnotationLabels => "Annotation Labels",
            Vmp4SectionType::ChapterContourLinesFeet => "Contour Lines (Feet)",
            Vmp4SectionType::ChapterSupplementalFeatureIDs => "Supplemental Feature IDs",
            Vmp4SectionType::ChapterContourLinesMeters => "Contour Lines (Meters)",
            Vmp4SectionType::ChapterLiveFeaturesMetadatas => "Live Features Metadata",
            Vmp4SectionType::ChapterRegionMetadata => "Region Metadata",
            Vmp4SectionType::ChapterCompressedPolygons => "Compressed Polygon Data",
            Vmp4SectionType::Unknown => "Unknown Section",
        }
    }

    /// Returns a short category for grouping section types
    pub fn category(&self) -> &'static str {
        match self {
            Vmp4SectionType::ChapterGlobal => "metadata",
            Vmp4SectionType::ChapterLabels
            | Vmp4SectionType::ChapterLabelLanguages
            | Vmp4SectionType::ChapterLabelLocalizations2
            | Vmp4SectionType::ChapterLabelPlacementMetadata
            | Vmp4SectionType::ChapterPointLabelAnnotations
            | Vmp4SectionType::ChapterAnnotationLabels => "labels",
            Vmp4SectionType::ChapterVertices
            | Vmp4SectionType::ChapterPointFeatures
            | Vmp4SectionType::ChapterLineFeatures
            | Vmp4SectionType::ChapterPolygonFeatures
            | Vmp4SectionType::ChapterPointFeaturesAddendum
            | Vmp4SectionType::ChapterLinesExtended
            | Vmp4SectionType::ChapterCompressedPolygons => "geometry",
            Vmp4SectionType::ChapterBuildingFeatures
            | Vmp4SectionType::ChapterBuildingMeshes
            | Vmp4SectionType::ChapterHighResBuildings
            | Vmp4SectionType::ChapterLowResBuildings
            | Vmp4SectionType::ChapterLowResBorderBuildings
            | Vmp4SectionType::ChapterBorderBuildingMeshes
            | Vmp4SectionType::ChapterDaVinciBuildings => "buildings",
            Vmp4SectionType::ChapterCoastlineFeatures
            | Vmp4SectionType::ChapterWrappingCoastlineFeatures => "coastline",
            Vmp4SectionType::ChapterLinePointCharacteristics
            | Vmp4SectionType::ChapterPolygonPointCharacteristics
            | Vmp4SectionType::ChapterPolygonPointLabelPositions
            | Vmp4SectionType::ChapterLineWidths1
            | Vmp4SectionType::ChapterLineWidths2 => "characteristics",
            Vmp4SectionType::ChapterConnectivity
            | Vmp4SectionType::ChapterRoadNetwork
            | Vmp4SectionType::ChapterTrafficSkeleton1
            | Vmp4SectionType::ChapterTrafficSkeleton2 => "roads",
            Vmp4SectionType::ChapterTransitSystems
            | Vmp4SectionType::ChapterTransitNetwork
            | Vmp4SectionType::ChapterTransitMZROverride => "transit",
            Vmp4SectionType::ChapterVenues
            | Vmp4SectionType::ChapterStorefronts
            | Vmp4SectionType::ChapterVenueMZROverride
            | Vmp4SectionType::ChapterPOIMzrOverrides => "poi",
            Vmp4SectionType::ChapterElevationRaster
            | Vmp4SectionType::ChapterStyleAttributeRaster
            | Vmp4SectionType::ChapterStyleAttributeRaster2
            | Vmp4SectionType::ChapterMaterialRaster
            | Vmp4SectionType::ChapterHikingHillShadeRaster => "raster",
            Vmp4SectionType::ChapterDaVinciMetadata
            | Vmp4SectionType::ChapterDaVinciLandmarks
            | Vmp4SectionType::ChapterDaVinciAssetMetadata => "davinci",
            Vmp4SectionType::ChapterContourLinesFeet
            | Vmp4SectionType::ChapterContourLinesMeters => "contours",
            _ => "other",
        }
    }
}

/// Get a human-readable description for a raw section type ID
pub fn section_type_description(type_id: u16) -> &'static str {
    // Map raw type IDs to descriptions (before the -1 transformation in parse_section_type)
    match type_id {
        0x01 => "Header/Metadata",
        0x0A => "Place Names",
        0x0B => "Language Info",
        0x0D => "Extended Localization",
        0x14 => "Geometry Vertices",
        0x1E => "Coordinate Bounds",
        0x1F => "Additional Geometry",
        0x20 => "Map Layer Data",
        0x21 => "Building Features",
        0x22 => "Coastline Features",
        0x26 => "Wrapping Coastline",
        0x27 => "Building Meshes",
        0x28 => "POI Data (Type A)",
        0x32 => "POI Data (Type B)",
        0x33 => "Line Characteristics",
        0x34 => "Polygon Characteristics",
        0x46 => "POI Data (Type C)",
        0x50 => "POI Data (Type D)",
        0x64 => "Tile Metadata",
        0x65 => "Elevation Data",
        0x67 => "Large Tile Data",
        0x70 => "Transit Data",
        0x80 => "Transit Systems",
        0x81 => "Transit Network",
        0x83 => "Attribution",
        0x87 => "Road Network",
        0x89 => "Venues",
        0x8D => "Label Placement",
        0x8E => "DaVinci Buildings",
        0x90 => "Extended Lines",
        0x91 => "Traffic Data",
        0x95 => "Transit Override",
        0x97 => "Environmental Data",
        0x98 => "Traffic Skeleton",
        0x9A => "Vector Tile Data",
        0x9B => "Raster Tile Data",
        0xA0 => "Contour Lines (ft)",
        0xA4 => "Contour Lines (m)",
        0xA7 => "Route Data",
        _ => "Unknown Section",
    }
}

pub fn parse_section_type(tag: u16) -> Vmp4SectionType {
    match tag.max(1u16) - 1u16 {
        0x09 => Vmp4SectionType::ChapterLabels,
        0x0a => Vmp4SectionType::ChapterLabelLanguages,
        0x0c => Vmp4SectionType::ChapterLabelLocalizations2,
        0x13 => Vmp4SectionType::ChapterVertices,
        0x1d => Vmp4SectionType::ChapterPointFeatures,
        0x1e => Vmp4SectionType::ChapterLineFeatures,
        0x1f => Vmp4SectionType::ChapterPolygonFeatures,
        0x20 => Vmp4SectionType::ChapterBuildingFeatures,
        0x21 => Vmp4SectionType::ChapterCoastlineFeatures,
        0x25 => Vmp4SectionType::ChapterWrappingCoastlineFeatures,
        0x26 => Vmp4SectionType::ChapterBuildingMeshes,
        0x32 => Vmp4SectionType::ChapterLinePointCharacteristics,
        0x33 => Vmp4SectionType::ChapterPolygonPointCharacteristics,
        0x36 => Vmp4SectionType::ChapterPolygonPointLabelPositions,
        0x3b => Vmp4SectionType::ChapterConnectivity,
        0x4f => Vmp4SectionType::ChapterGeoIDSegments,
        0x59 => Vmp4SectionType::ChapterAddressRanges,
        0x5c => Vmp4SectionType::ChapterTileReferences,
        0x5f => Vmp4SectionType::ChapterHighResBuildings,
        0x63 => Vmp4SectionType::ChapterDebugBlob,
        0x64 => Vmp4SectionType::ChapterElevationRaster,
        0x65 => Vmp4SectionType::ChapterStyleAttributeRaster,
        0x66 => Vmp4SectionType::ChapterDaVinciMetadata,
        0x67 => Vmp4SectionType::ChapterLowResBuildings,
        0x6f => Vmp4SectionType::ChapterTransitMZROverride,
        0x76 => Vmp4SectionType::ChapterCoverage,
        0x7f => Vmp4SectionType::ChapterTransitSystems,
        0x80 => Vmp4SectionType::ChapterTransitNetwork,
        0x86 => Vmp4SectionType::ChapterRoadNetwork,
        0x87 => Vmp4SectionType::ChapterVenueMZROverride,
        0x88 => Vmp4SectionType::ChapterVenues,
        0x89 => Vmp4SectionType::ChapterStorefronts,
        0x8a => Vmp4SectionType::ChapterLowResBorderBuildings,
        0x8b => Vmp4SectionType::ChapterBorderBuildingMeshes,
        0x8c => Vmp4SectionType::ChapterLabelPlacementMetadata,
        0x8d => Vmp4SectionType::ChapterDaVinciBuildings,
        0x8f => Vmp4SectionType::ChapterPointFeaturesAddendum,
        0x90 => Vmp4SectionType::ChapterLinesExtended,
        0x91 => Vmp4SectionType::ChapterTrafficSkeleton1,
        0x92 => Vmp4SectionType::ChapterDaVinciLandmarks,
        0x93 => Vmp4SectionType::ChapterLineWidths1,
        0x94 => Vmp4SectionType::ChapterPointLabelAnnotations,
        0x96 => Vmp4SectionType::ChapterPOIMzrOverrides,
        0x97 => Vmp4SectionType::ChapterTrafficSkeleton2,
        0x98 => Vmp4SectionType::ChapterLineWidths2,
        0x99 => Vmp4SectionType::ChapterStyleAttributeRaster2,
        0x9a => Vmp4SectionType::ChapterMaterialRaster,
        0x9b => Vmp4SectionType::ChapterDaVinciAssetMetadata,
        0x9c => Vmp4SectionType::ChapterRunningTracks,
        0x9d => Vmp4SectionType::ChapterHikingHillShadeRaster,
        0x9e => Vmp4SectionType::ChapterLiveFeatures,
        0x9f => Vmp4SectionType::ChapterAnnotationLabels,
        0xa0 => Vmp4SectionType::ChapterContourLinesFeet,
        0xa1 => Vmp4SectionType::ChapterSupplementalFeatureIDs,
        0xa3 => Vmp4SectionType::ChapterContourLinesMeters,
        0xa4 => Vmp4SectionType::ChapterLiveFeaturesMetadatas,
        0xa7 => Vmp4SectionType::ChapterRegionMetadata,
        0xa8 => Vmp4SectionType::ChapterCompressedPolygons,

        0x01 | 0x02 | 0x03 | 0x04 | 0x05 | 0x06 | 0x07 | 0x08 | 0x0b | 0x0d | 0x0e | 0x0f
        | 0x10 | 0x11 | 0x12 | 0x14 | 0x15 | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c
        | 0x22 | 0x23 | 0x24 | 0x27 | 0x28 | 0x29 | 0x2a | 0x2b | 0x2c | 0x2d | 0x2e | 0x2f
        | 0x30 | 0x31 | 0x34 | 0x35 | 0x37 | 0x38 | 0x39 | 0x3a | 0x3c | 0x3d | 0x3e | 0x3f
        | 0x40 | 0x41 | 0x42 | 0x43 | 0x44 | 0x45 | 0x46 | 0x47 | 0x48 | 0x49 | 0x4a | 0x4b
        | 0x4c | 0x4d | 0x4e | 0x50 | 0x51 | 0x52 | 0x53 | 0x54 | 0x55 | 0x56 | 0x57 | 0x58
        | 0x5a | 0x5b | 0x5d | 0x5e | 0x60 | 0x61 | 0x62 | 0x68 | 0x69 | 0x6a | 0x6b | 0x6c
        | 0x6d | 0x6e | 0x70 | 0x71 | 0x72 | 0x73 | 0x74 | 0x75 | 0x77 | 0x78 | 0x79 | 0x7a
        | 0x7b | 0x7c | 0x7d | 0x7e | 0x81 | 0x82 | 0x83 | 0x84 | 0x85 | 0x8e | 0x95 | 0xa2
        | 0xa5 | 0xa6 => Vmp4SectionType::Unknown,

        _ => Vmp4SectionType::ChapterGlobal,
    }
}
