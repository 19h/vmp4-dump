use std::io::BufRead;

use crate::{sections::section::SectionParser, vmp4_parser::Vmp4Data};

#[derive(Debug, Clone)]
pub struct ChapterLabels {
    pub labels: Vec<String>,
}

impl SectionParser<ChapterLabels> for ChapterLabels {
    fn parse(
        section_data: &Vmp4Data,
    ) -> Option<ChapterLabels> {
        let labels =
            section_data
                .buf
                .as_slice()[0..(section_data.size - 1) as usize]
                .split(|v| v == &0u8)
                .map(|word| String::from_utf8(word.to_vec()).unwrap())
                .collect::<Vec<String>>();

        Some(
            ChapterLabels {
                labels,
            },
        )
    }

    fn print(&self) {
        println!("labels: ({})", self.labels.len());

        for entry in self.labels.iter() {
            println!("  - {}", entry);
        }
    }
}
