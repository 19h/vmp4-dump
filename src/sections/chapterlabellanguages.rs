use std::io::{BufRead, Read};

use byteorder::{LittleEndian, ReadBytesExt};

use crate::{sections::section::SectionParser, vmp4_parser::Vmp4Data};

#[derive(Debug, Clone)]
pub struct ChapterLabelLanguages {
    pub languages: Vec<String>,
}

impl SectionParser<ChapterLabelLanguages> for ChapterLabelLanguages {
    fn parse(section_data: &Vmp4Data) -> Option<ChapterLabelLanguages> {
        let mut cursor = std::io::Cursor::new(&section_data.buf);

        let count = cursor.read_u16::<LittleEndian>().ok()?;

        let languages = (0..count)
            .filter_map(|_| {
                let mut buf = [0u8; 3];
                if cursor.read_exact(&mut buf).is_err() {
                    return None;
                }
                // Try to parse as UTF-8, falling back to lossy conversion
                String::from_utf8(buf.to_vec())
                    .ok()
                    .or_else(|| Some(String::from_utf8_lossy(&buf).to_string()))
            })
            .collect::<Vec<String>>();

        Some(ChapterLabelLanguages { languages })
    }

    fn print(&self) {
        println!("languages: ({})", self.languages.len());

        for entry in self.languages.iter() {
            println!("  - {}", entry);
        }
    }
}
