//! Venue data for VMP4 tiles.
//!
//! Venues represent indoor mapping locations like airports, malls, etc.
//! The actual venue details come via protobuf, but this section contains
//! feature IDs and basic metadata linking to the main features.

use crate::codec::{Chapter, CodecError, CodecResult};

/// A venue entry in VMP4 tiles
#[derive(Debug, Clone, Default)]
pub struct VenueEntry {
    /// Venue identifier
    pub venue_id: u64,
    /// Feature IDs that belong to this venue
    pub feature_ids: Vec<u32>,
    /// Venue category
    pub category: u8,
    /// Floor count (if indoor)
    pub floor_count: u8,
    /// Has indoor mapping data
    pub has_indoor: bool,
}

/// Decoded venues section (ChapterVenues 0x89)
#[derive(Debug, Clone, Default)]
pub struct ChapterVenues {
    pub venues: Vec<VenueEntry>,
}

impl ChapterVenues {
    /// Parse venues from section data.
    ///
    /// Format appears to be bit-packed venue entries with
    /// feature ID references.
    pub fn parse(data: &[u8]) -> CodecResult<Self> {
        if data.is_empty() {
            return Ok(Self::default());
        }

        let mut chapter = Chapter::new(data);
        let mut venues = Vec::new();

        // Read venue count
        let count = chapter.read_var_uint32().unwrap_or(0) as usize;
        if count > 10000 {
            return Err(CodecError::BufferOverflow);
        }

        for _ in 0..count {
            // Venue ID (64-bit)
            let venue_id = chapter.read_var_uint64().unwrap_or(0);

            // Feature count
            let feature_count = chapter.read_var_uint32().unwrap_or(0) as usize;
            if feature_count > 10000 {
                break;
            }

            // Feature IDs
            let mut feature_ids = Vec::with_capacity(feature_count);
            for _ in 0..feature_count {
                let fid = chapter.read_var_uint32().unwrap_or(0);
                feature_ids.push(fid);
            }

            // Category
            let category = chapter.read_var_uint32().unwrap_or(0) as u8;

            // Floor info
            let floor_info = chapter.read_var_uint32().unwrap_or(0);
            let floor_count = (floor_info & 0xFF) as u8;
            let has_indoor = (floor_info & 0x100) != 0;

            venues.push(VenueEntry {
                venue_id,
                feature_ids,
                category,
                floor_count,
                has_indoor,
            });
        }

        Ok(ChapterVenues { venues })
    }

    /// Print summary
    pub fn print(&self) {
        println!("  Venues ({}):", self.venues.len());
        for (i, v) in self.venues.iter().take(10).enumerate() {
            println!(
                "    [{:3}] id={} cat={} floors={} indoor={} features={}",
                i,
                v.venue_id,
                v.category,
                v.floor_count,
                v.has_indoor,
                v.feature_ids.len()
            );
        }
        if self.venues.len() > 10 {
            println!("    ... and {} more venues", self.venues.len() - 10);
        }
    }
}

/// Venue categories
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum VenueCategory {
    Unknown = 0,
    Airport = 1,
    ShoppingMall = 2,
    TrainStation = 3,
    TransitStation = 4,
    Museum = 5,
    University = 6,
    Hospital = 7,
    Stadium = 8,
    ConventionCenter = 9,
    Office = 10,
    Hotel = 11,
    Parking = 12,
}

impl From<u8> for VenueCategory {
    fn from(value: u8) -> Self {
        match value {
            1 => VenueCategory::Airport,
            2 => VenueCategory::ShoppingMall,
            3 => VenueCategory::TrainStation,
            4 => VenueCategory::TransitStation,
            5 => VenueCategory::Museum,
            6 => VenueCategory::University,
            7 => VenueCategory::Hospital,
            8 => VenueCategory::Stadium,
            9 => VenueCategory::ConventionCenter,
            10 => VenueCategory::Office,
            11 => VenueCategory::Hotel,
            12 => VenueCategory::Parking,
            _ => VenueCategory::Unknown,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_empty_venues() {
        let result = ChapterVenues::parse(&[]).unwrap();
        assert!(result.venues.is_empty());
    }

    #[test]
    fn test_venue_category() {
        assert_eq!(VenueCategory::from(1), VenueCategory::Airport);
        assert_eq!(VenueCategory::from(255), VenueCategory::Unknown);
    }
}
