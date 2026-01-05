use byteorder::{LittleEndian, ReadBytesExt};

use crate::buildings::{BuildingFeatures, BuildingMeshSection, DaVinciMetadata};
use crate::characteristics::{LinePointCharacteristics, PolygonPointCharacteristics};
use crate::elevation::{decode_elevation_raster, ElevationRaster};
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
            _ => None,
        }
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

        let envelope = Vmp4Section::parse_section(section_type, &data);

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
