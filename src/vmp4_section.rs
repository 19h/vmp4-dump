use byteorder::{LittleEndian, ReadBytesExt};

use crate::bounds::CoordinateBounds;
use crate::buildings::{BuildingFeatures, BuildingMeshSection, DaVinciMetadata};
use crate::characteristics::{LinePointCharacteristics, PolygonPointCharacteristics};
use crate::coastline::{ChapterCoastlineFeatures, ChapterWrappingCoastlineFeatures};
use crate::connectivity::ChapterConnectivity;
use crate::elevation::{decode_elevation_raster, ElevationRaster};
use crate::labels::LabelPlacementMetadata;
use crate::poi::PoiData;
use crate::sections::chapterlabel::ChapterLabels;
use crate::sections::chapterlabellanguages::ChapterLabelLanguages;
use crate::sections::features::{
    ChapterLineFeatures, ChapterPointFeatures, ChapterPolygonFeatures,
};
use crate::sections::global::ChapterGlobal;
use crate::sections::section::SectionParser;
use crate::sections::vertices::ChapterVertices;
use crate::transit::{TransitNetwork, TransitSystems};
use crate::types::{parse_section_type, Vmp4SectionType};
use crate::venues::ChapterVenues;
use crate::vmp4_parser::Vmp4Data;

#[derive(Debug)]
pub enum Vmp4SectionData {
    ChapterGlobal(ChapterGlobal),
    ChapterLabels(ChapterLabels),
    ChapterLabelLanguages(ChapterLabelLanguages),
    ChapterVertices(ChapterVertices),
    ChapterPointFeatures(ChapterPointFeatures),
    ChapterLineFeatures(ChapterLineFeatures),
    ChapterPolygonFeatures(ChapterPolygonFeatures),
    ChapterBuildingFeatures(BuildingFeatures),
    ChapterBuildingMeshes(BuildingMeshSection),
    ChapterElevationRaster(ElevationRaster),
    ChapterDaVinciMetadata(DaVinciMetadata),
    ChapterTransitSystems(TransitSystems),
    ChapterTransitNetwork(TransitNetwork),
    ChapterLinePointCharacteristics(LinePointCharacteristics),
    ChapterPolygonPointCharacteristics(PolygonPointCharacteristics),
    ChapterConnectivity(ChapterConnectivity),
    ChapterCoastlineFeatures(ChapterCoastlineFeatures),
    ChapterWrappingCoastlineFeatures(ChapterWrappingCoastlineFeatures),
    ChapterLabelPlacementMetadata(LabelPlacementMetadata),
    ChapterVenues(ChapterVenues),
    /// Coordinate bounds from sections 0x1E/0x02
    CoordinateBounds(CoordinateBounds),
    /// POI data from sections 0x28/0x32/0x46/0x50
    PoiData(PoiData),
}

impl Vmp4SectionData {
    pub fn print(&self) {
        match self {
            Vmp4SectionData::ChapterGlobal(data) => data.print(),
            Vmp4SectionData::ChapterLabels(data) => data.print(),
            Vmp4SectionData::ChapterLabelLanguages(data) => data.print(),
            Vmp4SectionData::ChapterVertices(data) => data.print(),
            Vmp4SectionData::ChapterPointFeatures(data) => data.print(),
            Vmp4SectionData::ChapterLineFeatures(data) => data.print(),
            Vmp4SectionData::ChapterPolygonFeatures(data) => data.print(),
            Vmp4SectionData::ChapterBuildingFeatures(data) => data.print(),
            Vmp4SectionData::ChapterBuildingMeshes(data) => data.print(),
            Vmp4SectionData::ChapterElevationRaster(data) => {
                println!("  Elevation Raster: {}x{}", data.width, data.height);
                println!(
                    "    Range: {:.1}m - {:.1}m",
                    data.min_elevation, data.max_elevation
                );
            }
            Vmp4SectionData::ChapterDaVinciMetadata(data) => data.print(),
            Vmp4SectionData::ChapterTransitSystems(data) => data.print(),
            Vmp4SectionData::ChapterTransitNetwork(data) => data.print(),
            Vmp4SectionData::ChapterLinePointCharacteristics(data) => data.print(),
            Vmp4SectionData::ChapterPolygonPointCharacteristics(data) => data.print(),
            Vmp4SectionData::ChapterConnectivity(data) => data.print(),
            Vmp4SectionData::ChapterCoastlineFeatures(data) => data.print(),
            Vmp4SectionData::ChapterWrappingCoastlineFeatures(data) => data.print(),
            Vmp4SectionData::ChapterLabelPlacementMetadata(data) => data.print(),
            Vmp4SectionData::ChapterVenues(data) => data.print(),
            Vmp4SectionData::CoordinateBounds(data) => {
                let (center_lat, center_lon) = data.center();
                println!("  Coordinate Bounds:");
                println!("    Lat: {:.6} to {:.6}", data.lat_min, data.lat_max);
                println!("    Lon: {:.6} to {:.6}", data.lon_min, data.lon_max);
                println!("    Center: ({:.6}, {:.6})", center_lat, center_lon);
                println!("    Coverage: {:.2} km²", data.coverage_km2());
            }
            Vmp4SectionData::PoiData(data) => {
                println!("  POI Data (section 0x{:02X}):", data.source_section);
                if !data.names.is_empty() {
                    println!("    Names ({}):", data.names.len());
                    for name in data.names.iter().take(5) {
                        println!("      - {}", name);
                    }
                    if data.names.len() > 5 {
                        println!("      ... and {} more", data.names.len() - 5);
                    }
                }
                if !data.addresses.is_empty() {
                    println!("    Addresses ({}):", data.addresses.len());
                    for addr in data.addresses.iter().take(3) {
                        println!("      - {}", addr);
                    }
                }
                if !data.phone_numbers.is_empty() {
                    println!("    Phone numbers: {}", data.phone_numbers.len());
                }
                if !data.urls.is_empty() {
                    println!("    URLs: {}", data.urls.len());
                }
            }
        }
    }
}

#[derive(Debug)]
pub struct Vmp4Section {
    pub section_type: Vmp4SectionType,
    pub type_id: u16,
    pub offset: u32,
    pub size: u32,
    pub data: Vmp4Data,
    pub envelope: Option<Vmp4SectionData>,
}

impl Vmp4Section {
    /// Try to parse a section based on its raw type_id
    /// This handles sections that don't have a named Vmp4SectionType
    pub fn parse_by_type_id(type_id: u16, section_data: &Vmp4Data) -> Option<Vmp4SectionData> {
        // Coordinate bounds sections
        if type_id == 0x1E || type_id == 0x02 {
            if let Some(bounds) = crate::bounds::parse_coordinate_bounds(&section_data.buf, type_id)
            {
                return Some(Vmp4SectionData::CoordinateBounds(bounds));
            }
        }

        // POI sections
        if crate::poi::POI_SECTIONS.contains(&type_id) {
            let poi = crate::poi::extract_poi_data(&section_data.buf, type_id);
            if !poi.is_empty() {
                return Some(Vmp4SectionData::PoiData(poi));
            }
        }

        None
    }

    pub fn parse_section(
        section_type: Vmp4SectionType,
        section_data: &Vmp4Data,
    ) -> Option<Vmp4SectionData> {
        match section_type {
            Vmp4SectionType::ChapterGlobal => {
                ChapterGlobal::parse(section_data).map(Vmp4SectionData::ChapterGlobal)
            }
            Vmp4SectionType::ChapterLabels => {
                ChapterLabels::parse(section_data).map(Vmp4SectionData::ChapterLabels)
            }
            Vmp4SectionType::ChapterLabelLanguages => ChapterLabelLanguages::parse(section_data)
                .map(Vmp4SectionData::ChapterLabelLanguages),
            Vmp4SectionType::ChapterVertices => {
                ChapterVertices::parse(section_data).map(Vmp4SectionData::ChapterVertices)
            }
            Vmp4SectionType::ChapterPointFeatures => {
                ChapterPointFeatures::parse(section_data).map(Vmp4SectionData::ChapterPointFeatures)
            }
            Vmp4SectionType::ChapterLineFeatures => {
                ChapterLineFeatures::parse(section_data).map(Vmp4SectionData::ChapterLineFeatures)
            }
            Vmp4SectionType::ChapterPolygonFeatures => ChapterPolygonFeatures::parse(section_data)
                .map(Vmp4SectionData::ChapterPolygonFeatures),
            Vmp4SectionType::ChapterBuildingFeatures => BuildingFeatures::parse(&section_data.buf)
                .ok()
                .map(Vmp4SectionData::ChapterBuildingFeatures),
            Vmp4SectionType::ChapterBuildingMeshes => BuildingMeshSection::parse(&section_data.buf)
                .ok()
                .map(Vmp4SectionData::ChapterBuildingMeshes),
            Vmp4SectionType::ChapterElevationRaster => decode_elevation_raster(&section_data.buf)
                .ok()
                .map(Vmp4SectionData::ChapterElevationRaster),
            Vmp4SectionType::ChapterDaVinciMetadata => DaVinciMetadata::parse(&section_data.buf)
                .ok()
                .map(Vmp4SectionData::ChapterDaVinciMetadata),
            Vmp4SectionType::ChapterTransitSystems => TransitSystems::parse(&section_data.buf)
                .ok()
                .map(Vmp4SectionData::ChapterTransitSystems),
            Vmp4SectionType::ChapterTransitNetwork => TransitNetwork::parse(&section_data.buf)
                .ok()
                .map(Vmp4SectionData::ChapterTransitNetwork),
            Vmp4SectionType::ChapterLinePointCharacteristics => {
                LinePointCharacteristics::parse(&section_data.buf)
                    .ok()
                    .map(Vmp4SectionData::ChapterLinePointCharacteristics)
            }
            Vmp4SectionType::ChapterPolygonPointCharacteristics => {
                PolygonPointCharacteristics::parse(&section_data.buf)
                    .ok()
                    .map(Vmp4SectionData::ChapterPolygonPointCharacteristics)
            }
            Vmp4SectionType::ChapterConnectivity => ChapterConnectivity::parse(&section_data.buf)
                .ok()
                .map(Vmp4SectionData::ChapterConnectivity),
            Vmp4SectionType::ChapterCoastlineFeatures => {
                ChapterCoastlineFeatures::parse(&section_data.buf)
                    .ok()
                    .map(Vmp4SectionData::ChapterCoastlineFeatures)
            }
            Vmp4SectionType::ChapterWrappingCoastlineFeatures => {
                ChapterWrappingCoastlineFeatures::parse(&section_data.buf)
                    .ok()
                    .map(Vmp4SectionData::ChapterWrappingCoastlineFeatures)
            }
            Vmp4SectionType::ChapterLabelPlacementMetadata => {
                LabelPlacementMetadata::parse(&section_data.buf)
                    .ok()
                    .map(Vmp4SectionData::ChapterLabelPlacementMetadata)
            }
            Vmp4SectionType::ChapterVenues => ChapterVenues::parse(&section_data.buf)
                .ok()
                .map(Vmp4SectionData::ChapterVenues),
            _ => None,
        }
    }

    /// Parse section, trying both named types and raw type_id
    pub fn parse_section_full(
        section_type: Vmp4SectionType,
        type_id: u16,
        section_data: &Vmp4Data,
    ) -> Option<Vmp4SectionData> {
        // First try parsing by known section type
        if let Some(data) = Self::parse_section(section_type, section_data) {
            return Some(data);
        }

        // For unknown sections or fallback, try parsing by raw type_id
        Self::parse_by_type_id(type_id, section_data)
    }

    pub fn parse<R: std::io::Read + std::io::Seek>(
        src: &mut R,
        section_header: &[u8],
    ) -> Result<Vmp4Section, std::io::Error> {
        let mut section_header_cur = std::io::Cursor::new(section_header);

        let type_id = section_header_cur.read_u16::<LittleEndian>()?;
        let offset = section_header_cur.read_u32::<LittleEndian>()?;
        let size = section_header_cur.read_u32::<LittleEndian>()?;

        let section_type = parse_section_type(type_id);

        let data: Vmp4Data = {
            let mut data = vec![0u8].repeat(size as usize);

            src.seek(std::io::SeekFrom::Start(offset as u64))?;
            src.read(&mut *data)?;

            Vmp4Data::parse(&data)?
        };

        let envelope = Vmp4Section::parse_section_full(section_type, type_id, &data);

        Ok(Vmp4Section {
            section_type,
            type_id,
            offset,
            size,
            data,
            envelope,
        })
    }
}
