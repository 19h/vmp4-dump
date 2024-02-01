use crate::vmp4_parser::Vmp4Data;

pub trait SectionParser<T> {
    fn parse(section_data: &Vmp4Data) -> Option<T>;
    fn print(&self);
}
