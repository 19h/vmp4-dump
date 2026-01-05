use byteorder::{LittleEndian, ReadBytesExt};

use crate::sections::chapterlabel::ChapterLabels;
use crate::sections::chapterlabellanguages::ChapterLabelLanguages;
use crate::sections::features::{
    ChapterLineFeatures, ChapterPointFeatures, ChapterPolygonFeatures,
};
use crate::sections::global::ChapterGlobal;
use crate::sections::section::SectionParser;
use crate::sections::vertices::ChapterVertices;
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
