use std::io::BufRead;

use crate::sections::section::SectionParser;

#[derive(Debug, Clone)]
pub struct ChapterLabel {
    pub labels: Vec<String>,
}

impl SectionParser<ChapterLabel> for ChapterLabel {
    fn parse(data: &[u8]) -> Option<ChapterLabel> {
        let mut labels: Vec<String> =
            data
                .split(|mut v| v == &0u8)
                .map(|word| String::from_utf8(word.to_vec()).unwrap())
                .collect();

        labels.pop();

        Some(
            ChapterLabel {
                labels,
            },
        )
    }
}
