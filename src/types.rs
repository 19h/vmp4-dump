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
