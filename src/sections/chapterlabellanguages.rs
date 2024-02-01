use std::io::{BufRead, Read};

use byteorder::{LittleEndian, ReadBytesExt};

use crate::{sections::section::SectionParser, vmp4_parser::Vmp4Data};

#[derive(Debug, Clone)]
pub struct ChapterLabelLanguages {
    pub languages: Vec<String>,
}

impl SectionParser<ChapterLabelLanguages> for ChapterLabelLanguages {
    fn parse(
        section_data: &Vmp4Data,
    ) -> Option<ChapterLabelLanguages> {
        let mut cursor =
            std::io::Cursor::new(
                &section_data.buf,
            );

        let count = cursor.read_u16::<LittleEndian>().ok()?;

        let languages =
            (0..count)
                .map(|_| {
                    let mut buf = [0u8].repeat(3);

                    cursor.read(&mut *buf).unwrap();

                    String::from_utf8(buf).unwrap()
                })
                .collect::<Vec<String>>();

        Some(
            ChapterLabelLanguages {
                languages,
            },
        )
    }

    fn print(&self) {
        println!("languages: ({})", self.languages.len());

        for entry in self.languages.iter() {
            println!("  - {}", entry);
        }
    }
}
