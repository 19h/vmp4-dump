use crate::sections::chapterlabel::ChapterLabels;
use crate::types::Vmp4SectionType;
use crate::vmp4_section;
use crate::vmp4_section::Vmp4SectionData;

pub fn print_section_data(
    section_data: &Vec<u8>,
    section_envelope: &Option<Vmp4SectionData>,
    verbose: bool,
) {
    if section_envelope.is_none() {
        let mut dumper = Vec::new();

        hxdmp::hexdump(
            if verbose {
                &section_data
            } else {
                &section_data[..200.min(section_data.len())]
            },
            &mut dumper,
        );

        println!("{}", String::from_utf8(dumper).unwrap());

        if !verbose && section_data.len() > 200 {
            println!("..... {} more bytes .....", section_data.len() - 200);
            println!();
        }

        return;
    }

    section_envelope
        .as_ref()
        .map(|envelope|
            envelope.print(),
        );

    return;
}
