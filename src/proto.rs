//! Protobuf message definitions for VMP4 tiles.
//!
//! Based on dumped .proto files from Apple binaries.
//! Uses prost for protobuf encoding/decoding.

use prost::Message;

/// Venue field types from VenueInfoProto
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, prost::Enumeration)]
#[repr(i32)]
pub enum VenueField {
    LongName = 0,
    ShortName = 1,
    Building = 2,
    LongLevel = 3,
    ShortLevel = 4,
    LongUpperLevel = 5,
    ShortUpperLevel = 6,
}

/// Venue decorator for formatting
#[derive(Clone, PartialEq, Message)]
pub struct VenueDecorator {
    #[prost(string, optional, tag = "1")]
    pub pre_separator: Option<String>,
    #[prost(string, optional, tag = "2")]
    pub prefix: Option<String>,
    #[prost(string, optional, tag = "3")]
    pub postfix: Option<String>,
    #[prost(string, optional, tag = "4")]
    pub post_separator: Option<String>,
}

/// Venue field with optional decorator
#[derive(Clone, PartialEq, Message)]
pub struct VenueFieldProto {
    #[prost(enumeration = "VenueField", optional, tag = "1")]
    pub field_id: Option<i32>,
    #[prost(uint32, optional, tag = "5")]
    pub decorator_index: Option<u32>,
}

/// Venue template for formatting
#[derive(Clone, PartialEq, Message)]
pub struct VenueTemplate {
    #[prost(enumeration = "VenueField", repeated, tag = "1")]
    pub required: Vec<i32>,
    #[prost(enumeration = "VenueField", repeated, tag = "2")]
    pub excluded: Vec<i32>,
    #[prost(message, repeated, tag = "3")]
    pub order: Vec<VenueFieldProto>,
    #[prost(message, repeated, tag = "4")]
    pub decorators: Vec<VenueDecorator>,
}

/// Venue formatter with templates
#[derive(Clone, PartialEq, Message)]
pub struct VenueFormatter {
    #[prost(message, repeated, tag = "1")]
    pub templates: Vec<VenueTemplate>,
}

/// Venue information protobuf
#[derive(Clone, PartialEq, Message)]
pub struct VenueInfo {
    #[prost(string, repeated, tag = "1")]
    pub field: Vec<String>,
    #[prost(message, repeated, tag = "2")]
    pub formatters: Vec<VenueFormatter>,
}

/// Rice-encoded integers for compressed paths
#[derive(Clone, PartialEq, Message)]
pub struct RiceEncodedIntegers {
    #[prost(sint32, optional, tag = "1")]
    pub first_value: Option<i32>,
    #[prost(bytes = "vec", optional, tag = "2")]
    pub delta_values: Option<Vec<u8>>,
    #[prost(uint32, repeated, tag = "3")]
    pub delta_sign_change: Vec<u32>,
    #[prost(enumeration = "SignEncodingMode", optional, tag = "4")]
    pub sign_encoding_mode: Option<i32>,
}

/// Sign encoding mode for Rice encoding
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, prost::Enumeration)]
#[repr(i32)]
pub enum SignEncodingMode {
    Unknown = 0,
    Inplace = 1,
    Separate = 2,
}

/// Common point data (lat/lng/elevation)
#[derive(Clone, PartialEq, Message)]
pub struct CommonPointData {
    #[prost(message, optional, tag = "1")]
    pub lat_e7: Option<RiceEncodedIntegers>,
    #[prost(message, optional, tag = "2")]
    pub lng_e7: Option<RiceEncodedIntegers>,
    #[prost(message, optional, tag = "3")]
    pub elevation_cm: Option<RiceEncodedIntegers>,
}

/// UUID for unique identifiers
#[derive(Clone, PartialEq, Message)]
pub struct Uuid {
    #[prost(uint64, optional, tag = "1")]
    pub high: Option<u64>,
    #[prost(uint64, optional, tag = "2")]
    pub low: Option<u64>,
}

/// Support point data for routing
#[derive(Clone, PartialEq, Message)]
pub struct SupportPointData {
    #[prost(uint32, repeated, tag = "1")]
    pub index: Vec<u32>,
    #[prost(sint64, repeated, tag = "2")]
    pub delta_road_id: Vec<i64>,
    #[prost(uint32, repeated, tag = "3")]
    pub heading: Vec<u32>,
    #[prost(uint32, repeated, tag = "4")]
    pub legacy_frc: Vec<u32>,
    #[prost(uint32, repeated, tag = "5")]
    pub legacy_fow: Vec<u32>,
    #[prost(uint32, repeated, tag = "6")]
    pub delta_distance: Vec<u32>,
    #[prost(sint32, repeated, tag = "9")]
    pub road_name_index: Vec<i32>,
    #[prost(uint32, repeated, tag = "7")]
    pub is_u_turn_index: Vec<u32>,
    #[prost(string, repeated, tag = "8")]
    pub road_names: Vec<String>,
}

/// Anchor data for routing
#[derive(Clone, PartialEq, Message)]
pub struct AnchorData {
    #[prost(uint32, repeated, tag = "1")]
    pub index: Vec<u32>,
    #[prost(message, repeated, tag = "2")]
    pub unique_anchor_id: Vec<Uuid>,
}

/// Compressed path message
#[derive(Clone, PartialEq, Message)]
pub struct CompressedPath {
    #[prost(uint32, optional, tag = "1")]
    pub num_points: Option<u32>,
    #[prost(message, optional, tag = "2")]
    pub common_point_data: Option<CommonPointData>,
    #[prost(message, optional, tag = "3")]
    pub support_point_data: Option<SupportPointData>,
    #[prost(message, optional, tag = "4")]
    pub anchor_data: Option<AnchorData>,
}

/// Lat/Lng in E7 format (degrees * 10^7)
#[derive(Clone, PartialEq, Message)]
pub struct LatLngE7 {
    #[prost(sfixed32, required, tag = "1")]
    pub lat_e7: i32,
    #[prost(sfixed32, required, tag = "2")]
    pub lng_e7: i32,
}

/// Structured address from geo3
#[derive(Clone, PartialEq, Message)]
pub struct StructuredAddress {
    #[prost(string, optional, tag = "1")]
    pub country: Option<String>,
    #[prost(string, optional, tag = "2")]
    pub country_code: Option<String>,
    #[prost(string, optional, tag = "3")]
    pub administrative_area: Option<String>,
    #[prost(string, optional, tag = "4")]
    pub administrative_area_code: Option<String>,
    #[prost(string, optional, tag = "5")]
    pub sub_administrative_area: Option<String>,
    #[prost(string, optional, tag = "6")]
    pub locality: Option<String>,
    #[prost(string, optional, tag = "7")]
    pub post_code: Option<String>,
    #[prost(string, optional, tag = "8")]
    pub sub_locality: Option<String>,
    #[prost(string, optional, tag = "9")]
    pub premises: Option<String>,
    #[prost(string, optional, tag = "10")]
    pub thoroughfare: Option<String>,
    #[prost(string, optional, tag = "11")]
    pub sub_thoroughfare: Option<String>,
    #[prost(string, optional, tag = "12")]
    pub full_thoroughfare: Option<String>,
    #[prost(string, optional, tag = "13")]
    pub post_code_extension: Option<String>,
    #[prost(string, repeated, tag = "14")]
    pub area_of_interest: Vec<String>,
    #[prost(int64, repeated, tag = "100")]
    pub geo_id: Vec<i64>,
}

/// Decode Rice-encoded integers
pub fn decode_rice_integers(rice: &RiceEncodedIntegers) -> Vec<i32> {
    let mut result = Vec::new();

    if let Some(first) = rice.first_value {
        result.push(first);
    }

    if let Some(ref delta_bytes) = rice.delta_values {
        // Rice decoding - k parameter is typically embedded or fixed
        // For now, use simple delta decoding
        let mut current = rice.first_value.unwrap_or(0);
        let mut sign_idx = 0;

        for &byte in delta_bytes {
            let delta = byte as i32;
            // Check if we need to flip sign
            let signed_delta = if sign_idx < rice.delta_sign_change.len()
                && rice.delta_sign_change[sign_idx] as usize == result.len()
            {
                sign_idx += 1;
                -delta
            } else {
                delta
            };
            current += signed_delta;
            result.push(current);
        }
    }

    result
}

/// Try to decode venue data from raw bytes
pub fn try_decode_venue(data: &[u8]) -> Option<VenueInfo> {
    VenueInfo::decode(data).ok()
}

/// Try to decode compressed path from raw bytes
pub fn try_decode_compressed_path(data: &[u8]) -> Option<CompressedPath> {
    CompressedPath::decode(data).ok()
}

/// Try to decode structured address from raw bytes
pub fn try_decode_address(data: &[u8]) -> Option<StructuredAddress> {
    StructuredAddress::decode(data).ok()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_venue_field_enum() {
        assert_eq!(VenueField::LongName as i32, 0);
        assert_eq!(VenueField::Building as i32, 2);
    }

    #[test]
    fn test_rice_decode_simple() {
        let rice = RiceEncodedIntegers {
            first_value: Some(100),
            delta_values: Some(vec![1, 2, 3]),
            delta_sign_change: vec![],
            sign_encoding_mode: None,
        };

        let decoded = decode_rice_integers(&rice);
        assert_eq!(decoded[0], 100);
        assert_eq!(decoded.len(), 4); // first + 3 deltas
    }
}
