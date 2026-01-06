//! Point of Interest (POI) extraction for VMP4 tiles.
//!
//! Extracts business names, addresses, phone numbers, and other POI data
//! from various section types (0x28, 0x32, 0x46, 0x50).

/// Extracted POI data from a tile
#[derive(Debug, Clone, Default)]
pub struct PoiData {
    /// Business/location names
    pub names: Vec<String>,
    /// Street addresses
    pub addresses: Vec<String>,
    /// Phone numbers
    pub phone_numbers: Vec<String>,
    /// URLs/websites
    pub urls: Vec<String>,
    /// Category tags (e.g., "restaurant", "cafe")
    pub categories: Vec<String>,
    /// Source section type ID
    pub source_section: u16,
}

impl PoiData {
    /// Check if any POI data was extracted
    pub fn is_empty(&self) -> bool {
        self.names.is_empty()
            && self.addresses.is_empty()
            && self.phone_numbers.is_empty()
            && self.urls.is_empty()
            && self.categories.is_empty()
    }

    /// Get total count of all extracted items
    pub fn total_items(&self) -> usize {
        self.names.len()
            + self.addresses.len()
            + self.phone_numbers.len()
            + self.urls.len()
            + self.categories.len()
    }
}

/// Section types that may contain POI data
pub const POI_SECTIONS: [u16; 4] = [0x32, 0x28, 0x46, 0x50];

/// Common address indicators for classification
const ADDRESS_INDICATORS: [&str; 15] = [
    "st",
    "ave",
    "rd",
    "blvd",
    "street",
    "road",
    "drive",
    "lane",
    "way",
    "court",
    "plaza",
    "dr",
    "ct",
    "ln",
    "boulevard",
];

/// Common category keywords
const CATEGORY_KEYWORDS: [&str; 20] = [
    "restaurant",
    "cafe",
    "coffee",
    "hotel",
    "bank",
    "store",
    "shop",
    "market",
    "gas",
    "station",
    "pharmacy",
    "hospital",
    "school",
    "park",
    "museum",
    "bar",
    "pub",
    "gym",
    "theater",
    "cinema",
];

/// Extract POI data from raw section data.
///
/// The data is typically null-terminated strings that can be classified
/// into names, addresses, phone numbers, and URLs.
///
/// # Arguments
/// * `data` - Raw decompressed section data
/// * `section_type` - The section type ID (for metadata)
pub fn extract_poi_data(data: &[u8], section_type: u16) -> PoiData {
    let mut poi = PoiData {
        source_section: section_type,
        ..Default::default()
    };

    // Try to decode as UTF-8 with lossy conversion
    let text = String::from_utf8_lossy(data);

    // Split on null bytes and filter meaningful strings
    let strings: Vec<&str> = text
        .split('\0')
        .map(|s| s.trim())
        .filter(|s| s.len() > 2 && is_printable_string(s))
        .collect();

    for s in strings {
        classify_and_add(&mut poi, s);
    }

    // Deduplicate all vectors
    poi.names.sort();
    poi.names.dedup();
    poi.addresses.sort();
    poi.addresses.dedup();
    poi.phone_numbers.sort();
    poi.phone_numbers.dedup();
    poi.urls.sort();
    poi.urls.dedup();
    poi.categories.sort();
    poi.categories.dedup();

    // Limit results
    poi.names.truncate(50);
    poi.addresses.truncate(20);
    poi.phone_numbers.truncate(10);
    poi.urls.truncate(10);
    poi.categories.truncate(20);

    poi
}

/// Check if a string is primarily printable ASCII/UTF-8
fn is_printable_string(s: &str) -> bool {
    let printable_count = s.chars().filter(|c| !c.is_control()).count();
    let total = s.chars().count();
    if total == 0 {
        return false;
    }
    (printable_count as f64 / total as f64) > 0.8
}

/// Classify a string and add it to the appropriate POI category
fn classify_and_add(poi: &mut PoiData, s: &str) {
    let lower = s.to_lowercase();

    // Check for URLs
    if s.starts_with("http://") || s.starts_with("https://") || s.contains("www.") {
        poi.urls.push(s.to_string());
        return;
    }

    // Check for phone numbers (contains digits and common phone chars)
    if looks_like_phone(s) {
        poi.phone_numbers.push(s.to_string());
        return;
    }

    // Check for addresses
    if looks_like_address(&lower) {
        poi.addresses.push(s.to_string());
        return;
    }

    // Check for category keywords
    if looks_like_category(&lower) {
        poi.categories.push(s.to_string());
        return;
    }

    // Default: treat as name if it looks like a business name
    if looks_like_name(s) {
        poi.names.push(s.to_string());
    }
}

/// Check if string looks like a phone number
fn looks_like_phone(s: &str) -> bool {
    let digit_count = s.chars().filter(|c| c.is_ascii_digit()).count();
    let has_phone_chars = s.contains('-') || s.contains('(') || s.contains(')') || s.contains('+');

    // At least 7 digits and contains phone formatting chars
    digit_count >= 7 && digit_count <= 15 && has_phone_chars
}

/// Check if string looks like an address
fn looks_like_address(lower: &str) -> bool {
    // Contains a number followed by an address indicator
    let has_number = lower.chars().any(|c| c.is_ascii_digit());

    if !has_number {
        return false;
    }

    ADDRESS_INDICATORS
        .iter()
        .any(|ind| lower.contains(&format!(" {}", ind)) || lower.ends_with(ind))
}

/// Check if string looks like a category
fn looks_like_category(lower: &str) -> bool {
    CATEGORY_KEYWORDS.iter().any(|kw| lower.contains(kw))
}

/// Check if string looks like a business name
fn looks_like_name(s: &str) -> bool {
    // Should be mostly alphanumeric with spaces
    let valid_chars = s
        .chars()
        .filter(|c| c.is_alphanumeric() || c.is_whitespace() || *c == '-' || *c == '\'')
        .count();

    let total = s.chars().count();
    if total < 3 || total > 100 {
        return false;
    }

    // At least 80% valid characters
    (valid_chars as f64 / total as f64) > 0.8
}

/// Try to find and parse POI data from multiple section types.
///
/// Searches through sections that commonly contain POI data:
/// - 0x32: Primary POI section
/// - 0x28: Secondary POI section
/// - 0x46: Additional POI data
/// - 0x50: Extended POI data
pub fn find_poi_data(sections: &[(u16, Vec<u8>)]) -> Option<PoiData> {
    let mut combined = PoiData::default();

    for &section_type in &POI_SECTIONS {
        for (type_id, data) in sections {
            if *type_id == section_type {
                let poi = extract_poi_data(data, section_type);
                if !poi.is_empty() {
                    // Merge into combined
                    combined.names.extend(poi.names);
                    combined.addresses.extend(poi.addresses);
                    combined.phone_numbers.extend(poi.phone_numbers);
                    combined.urls.extend(poi.urls);
                    combined.categories.extend(poi.categories);
                    if combined.source_section == 0 {
                        combined.source_section = section_type;
                    }
                }
            }
        }
    }

    if combined.is_empty() {
        None
    } else {
        // Deduplicate combined results
        combined.names.sort();
        combined.names.dedup();
        combined.addresses.sort();
        combined.addresses.dedup();
        combined.phone_numbers.sort();
        combined.phone_numbers.dedup();
        combined.urls.sort();
        combined.urls.dedup();
        combined.categories.sort();
        combined.categories.dedup();

        Some(combined)
    }
}

/// Extract strings from binary data with various encoding attempts
pub fn extract_strings_from_data(data: &[u8]) -> Vec<String> {
    let mut strings = Vec::new();

    // Try UTF-8
    if let Ok(text) = std::str::from_utf8(data) {
        for s in text.split('\0') {
            let trimmed = s.trim();
            if trimmed.len() > 2 && is_printable_string(trimmed) {
                strings.push(trimmed.to_string());
            }
        }
    } else {
        // Lossy conversion
        let text = String::from_utf8_lossy(data);
        for s in text.split('\0') {
            let trimmed = s.trim();
            if trimmed.len() > 2 && is_printable_string(trimmed) {
                strings.push(trimmed.to_string());
            }
        }
    }

    // Also try to find ASCII strings in binary data
    let mut current = String::new();
    for &byte in data {
        if byte >= 0x20 && byte < 0x7F {
            current.push(byte as char);
        } else if !current.is_empty() {
            if current.len() > 3 && is_printable_string(&current) {
                strings.push(current.clone());
            }
            current.clear();
        }
    }
    if current.len() > 3 && is_printable_string(&current) {
        strings.push(current);
    }

    // Deduplicate
    strings.sort();
    strings.dedup();
    strings
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_phone_detection() {
        assert!(looks_like_phone("(555) 123-4567"));
        assert!(looks_like_phone("+1-800-555-1234"));
        assert!(looks_like_phone("555-123-4567"));
        assert!(!looks_like_phone("Hello World"));
        assert!(!looks_like_phone("123")); // Too short
    }

    #[test]
    fn test_address_detection() {
        assert!(looks_like_address("123 main street"));
        assert!(looks_like_address("456 oak ave"));
        assert!(looks_like_address("789 park rd"));
        assert!(!looks_like_address("coffee shop"));
        assert!(!looks_like_address("main street")); // No number
    }

    #[test]
    fn test_category_detection() {
        assert!(looks_like_category("italian restaurant"));
        assert!(looks_like_category("coffee shop"));
        assert!(looks_like_category("gas station"));
        assert!(!looks_like_category("acme corp"));
    }

    #[test]
    fn test_name_detection() {
        assert!(looks_like_name("Starbucks"));
        assert!(looks_like_name("Joe's Coffee"));
        assert!(looks_like_name("McDonald's"));
        assert!(!looks_like_name("ab")); // Too short
    }

    #[test]
    fn test_extract_poi_data() {
        let test_data =
            b"Starbucks\0123 Main St\0(555) 123-4567\0coffee shop\0https://starbucks.com\0";
        let poi = extract_poi_data(test_data, 0x32);

        assert!(!poi.is_empty());
        assert!(poi.names.contains(&"Starbucks".to_string()));
        assert!(poi.addresses.iter().any(|a| a.contains("Main")));
        assert!(poi.phone_numbers.iter().any(|p| p.contains("555")));
        assert!(poi.urls.iter().any(|u| u.contains("starbucks")));
    }

    #[test]
    fn test_extract_strings() {
        let data = b"Hello\0World\0Test String\0";
        let strings = extract_strings_from_data(data);
        assert!(strings.contains(&"Hello".to_string()));
        assert!(strings.contains(&"World".to_string()));
        assert!(strings.contains(&"Test String".to_string()));
    }

    #[test]
    fn test_empty_poi() {
        let poi = PoiData::default();
        assert!(poi.is_empty());
        assert_eq!(poi.total_items(), 0);
    }
}
