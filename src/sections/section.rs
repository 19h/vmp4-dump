pub trait SectionParser<T> {
    fn parse(section: &[u8]) -> Option<T>;
}
