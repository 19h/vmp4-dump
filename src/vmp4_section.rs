use byteorder::{LittleEndian, ReadBytesExt};

use crate::sections::chapterlabel::ChapterLabel;
use crate::sections::section::SectionParser;
use crate::types::{parse_section_type, Vmp4SectionType};

#[derive(Debug)]
pub enum Vmp4SectionData {
    ChapterLabels(ChapterLabel)
}

fn parse_section_data(
    section_type: Vmp4SectionType,
    data: &[u8],
) -> Option<Vmp4SectionData> {
    match section_type {
        Vmp4SectionType::ChapterLabels =>
            ChapterLabel::parse(data)
                .map(|val|
                    Vmp4SectionData::ChapterLabels(val),
                ),
        _ => None
    }
}

#[derive(Debug)]
pub struct Vmp4Section {
    pub section_type: Vmp4SectionType,
    pub type_id: u16,
    pub offset: u32,
    pub size: u32,
    pub data: Option<Vec<u8>>,
    pub envelope: Option<Vmp4SectionData>,
}

impl Vmp4Section {
    pub fn parse(buf: &[u8]) -> Result<Vmp4Section, std::io::Error> {
        let mut file = std::io::Cursor::new(buf);

        let type_id = file.read_u16::<LittleEndian>()?;
        let offset = file.read_u32::<LittleEndian>()?;
        let size = file.read_u32::<LittleEndian>()?;

        let section_type = parse_section_type(type_id);

        Ok(
            Vmp4Section {
                section_type,
                type_id,
                offset,
                size,
                data: None,
                envelope: None,
            }
        )
    }

    pub fn parse_data(&mut self) {
        self.envelope =
            parse_section_data(
                self.section_type,
                &self.data.as_ref().unwrap(),
            );
    }
}
