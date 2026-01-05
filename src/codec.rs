//! VMP4 Codec primitives derived from GeoServices.framework decompilation.
//!
//! This module provides low-level reading primitives for the VMP4 format:
//! - Variable-length integer encoding (similar to LEB128/protobuf varints)
//! - Bitstream reading for packed bit data
//! - Chapter reading abstraction

use std::io::{self, ErrorKind};

/// Error type for codec operations
#[derive(Debug)]
pub enum CodecError {
    /// Unexpected end of data
    UnexpectedEof,
    /// Invalid varint encoding (too many continuation bytes)
    InvalidVarint,
    /// Buffer overflow
    BufferOverflow,
    /// Decompression error
    DecompressionError(String),
    /// Generic IO error
    Io(io::Error),
}

impl From<io::Error> for CodecError {
    fn from(err: io::Error) -> Self {
        CodecError::Io(err)
    }
}

impl std::fmt::Display for CodecError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            CodecError::UnexpectedEof => write!(f, "Unexpected end of data"),
            CodecError::InvalidVarint => write!(f, "Invalid varint encoding"),
            CodecError::BufferOverflow => write!(f, "Buffer overflow"),
            CodecError::DecompressionError(msg) => write!(f, "Decompression error: {}", msg),
            CodecError::Io(err) => write!(f, "IO error: {}", err),
        }
    }
}

impl std::error::Error for CodecError {}

pub type CodecResult<T> = Result<T, CodecError>;

/// VMP4 Chapter reader - represents a section of data within a VMP4 tile.
///
/// Based on decompilation of geo::codec functions:
/// - Offset 0x28 (40): data pointer
/// - Offset 0x30 (48): current position
/// - Offset 0x38 (56): total length
/// - Offset 0x40 (64): scale factor
#[derive(Debug, Clone)]
pub struct Chapter<'a> {
    /// Raw data buffer
    data: &'a [u8],
    /// Current byte position
    pos: usize,
    /// Scale factor for coordinate dequantization (from section header)
    pub scale: u32,
}

impl<'a> Chapter<'a> {
    /// Create a new chapter reader from a data slice
    pub fn new(data: &'a [u8]) -> Self {
        Self {
            data,
            pos: 0,
            scale: 0xFFFFFFFF, // Default scale, overridden from section header
        }
    }

    /// Create a new chapter reader with a specific scale
    pub fn with_scale(data: &'a [u8], scale: u32) -> Self {
        Self {
            data,
            pos: 0,
            scale,
        }
    }

    /// Get current position
    #[inline]
    pub fn position(&self) -> usize {
        self.pos
    }

    /// Get remaining bytes
    #[inline]
    pub fn remaining(&self) -> usize {
        self.data.len().saturating_sub(self.pos)
    }

    /// Check if we've reached the end
    #[inline]
    pub fn is_empty(&self) -> bool {
        self.pos >= self.data.len()
    }

    /// Get the underlying data slice
    pub fn data(&self) -> &'a [u8] {
        self.data
    }

    /// Read a single byte
    #[inline]
    pub fn read_u8(&mut self) -> CodecResult<u8> {
        if self.pos >= self.data.len() {
            return Err(CodecError::UnexpectedEof);
        }
        let val = self.data[self.pos];
        self.pos += 1;
        Ok(val)
    }

    /// Read a u16 in little-endian format
    #[inline]
    pub fn read_u16_le(&mut self) -> CodecResult<u16> {
        if self.pos + 2 > self.data.len() {
            return Err(CodecError::UnexpectedEof);
        }
        let val = u16::from_le_bytes([self.data[self.pos], self.data[self.pos + 1]]);
        self.pos += 2;
        Ok(val)
    }

    /// Read a u32 in little-endian format
    #[inline]
    pub fn read_u32_le(&mut self) -> CodecResult<u32> {
        if self.pos + 4 > self.data.len() {
            return Err(CodecError::UnexpectedEof);
        }
        let val = u32::from_le_bytes([
            self.data[self.pos],
            self.data[self.pos + 1],
            self.data[self.pos + 2],
            self.data[self.pos + 3],
        ]);
        self.pos += 4;
        Ok(val)
    }

    /// Read a f32 in little-endian format
    #[inline]
    pub fn read_f32_le(&mut self) -> CodecResult<f32> {
        Ok(f32::from_bits(self.read_u32_le()?))
    }

    /// Read a variable-length unsigned 32-bit integer.
    ///
    /// Derived from `geo::codec::chapterReadVarUint32`:
    /// - 7 bits of data per byte
    /// - High bit (0x80) indicates continuation
    /// - Max 5 bytes for 32-bit value (but continues reading for validation)
    #[inline]
    pub fn read_var_uint32(&mut self) -> CodecResult<u32> {
        let mut result: u32 = 0;
        let mut shift: u32 = 0;

        loop {
            if self.pos >= self.data.len() {
                return Err(CodecError::UnexpectedEof);
            }

            let byte = self.data[self.pos];
            self.pos += 1;

            // Extract 7 bits and add to result
            result |= ((byte & 0x7F) as u32) << shift;
            shift += 7;

            // Check continuation bit
            if (byte & 0x80) == 0 {
                return Ok(result);
            }

            // Prevent infinite loops on malformed data
            // VarUint32 should take at most 5 bytes, but Apple's impl reads up to 10
            if shift >= 35 {
                // Continue reading to consume the bytes but don't shift anymore
                if shift >= 70 {
                    return Err(CodecError::InvalidVarint);
                }
            }
        }
    }

    /// Read a variable-length signed 64-bit integer.
    ///
    /// Derived from `geo::codec::chapterReadVarInt64`:
    /// - 7 bits of data per byte
    /// - High bit (0x80) indicates continuation
    /// - Max 10 bytes for 64-bit value
    #[inline]
    pub fn read_var_int64(&mut self) -> CodecResult<i64> {
        let mut result: u64 = 0;
        let mut shift: u32 = 0;

        loop {
            if self.pos >= self.data.len() {
                return Err(CodecError::UnexpectedEof);
            }

            let byte = self.data[self.pos];
            self.pos += 1;

            if shift < 63 {
                result |= ((byte & 0x7F) as u64) << shift;
            } else if shift == 63 {
                // Last byte - only use the sign bit
                result |= ((byte & 0x01) as u64) << 63;
            }

            shift += 7;

            // Check continuation bit
            if (byte & 0x80) == 0 {
                return Ok(result as i64);
            }

            // Max 10 bytes for 64-bit value
            if shift >= 70 {
                return Err(CodecError::InvalidVarint);
            }
        }
    }

    /// Read a variable-length unsigned 64-bit integer (zigzag decoded for signed)
    #[inline]
    pub fn read_var_uint64(&mut self) -> CodecResult<u64> {
        let mut result: u64 = 0;
        let mut shift: u32 = 0;

        loop {
            if self.pos >= self.data.len() {
                return Err(CodecError::UnexpectedEof);
            }

            let byte = self.data[self.pos];
            self.pos += 1;

            result |= ((byte & 0x7F) as u64) << shift;
            shift += 7;

            if (byte & 0x80) == 0 {
                return Ok(result);
            }

            if shift >= 70 {
                return Err(CodecError::InvalidVarint);
            }
        }
    }

    /// Read N bytes as a slice
    pub fn read_bytes(&mut self, len: usize) -> CodecResult<&'a [u8]> {
        if self.pos + len > self.data.len() {
            return Err(CodecError::UnexpectedEof);
        }
        let slice = &self.data[self.pos..self.pos + len];
        self.pos += len;
        Ok(slice)
    }

    /// Skip N bytes
    pub fn skip(&mut self, len: usize) -> CodecResult<()> {
        if self.pos + len > self.data.len() {
            return Err(CodecError::UnexpectedEof);
        }
        self.pos += len;
        Ok(())
    }

    /// Seek to an absolute position
    pub fn seek(&mut self, pos: usize) -> CodecResult<()> {
        if pos > self.data.len() {
            return Err(CodecError::BufferOverflow);
        }
        self.pos = pos;
        Ok(())
    }

    /// Create a bitstream reader starting from current position
    pub fn to_bitstream(&self) -> BitStream<'a> {
        BitStream::new(&self.data[self.pos..])
    }
}

/// Bitstream reader for packed bit data.
///
/// Derived from `geo::codec::decodeVertices` and similar functions:
/// - Reads arbitrary bit counts from a byte buffer
/// - Bit position tracked separately from byte position
/// - MSB-first bit ordering
#[derive(Debug, Clone)]
pub struct BitStream<'a> {
    /// Raw data buffer
    data: &'a [u8],
    /// Current bit position (0-based from start of data)
    bit_pos: usize,
}

impl<'a> BitStream<'a> {
    /// Create a new bitstream from a byte slice
    pub fn new(data: &'a [u8]) -> Self {
        Self { data, bit_pos: 0 }
    }

    /// Get current bit position
    #[inline]
    pub fn bit_position(&self) -> usize {
        self.bit_pos
    }

    /// Get total bits available
    #[inline]
    pub fn total_bits(&self) -> usize {
        self.data.len() * 8
    }

    /// Get remaining bits
    #[inline]
    pub fn remaining_bits(&self) -> usize {
        self.total_bits().saturating_sub(self.bit_pos)
    }

    /// Read N bits as u32 (max 32 bits).
    ///
    /// Derived from decodeVertices bitstream reading pattern:
    /// ```c
    /// v57 = 8 - (v52 & 7);
    /// if ( v56 < v57 ) v57 = v56;
    /// v54 = (*(unsigned __int8 *)(v55 + (v52 >> 3)) >> (8 - (v52 & 7) - v57)) & ~(-1 << v57) | (v54 << v57);
    /// ```
    #[inline]
    pub fn read_bits(&mut self, num_bits: usize) -> CodecResult<u32> {
        if num_bits == 0 {
            return Ok(0);
        }

        if num_bits > 32 {
            return Err(CodecError::BufferOverflow);
        }

        let total_bits = self.data.len() * 8;
        if self.bit_pos + num_bits > total_bits {
            return Err(CodecError::UnexpectedEof);
        }

        let mut result: u32 = 0;
        let mut bits_remaining = num_bits;

        while bits_remaining > 0 {
            let byte_offset = self.bit_pos >> 3; // self.bit_pos / 8
            let bit_offset_in_byte = self.bit_pos & 7; // self.bit_pos % 8
            let bits_available_in_byte = 8 - bit_offset_in_byte;
            let bits_to_read = bits_remaining.min(bits_available_in_byte);

            // Read from MSB side: shift right to align, then mask
            let shift = 8 - bit_offset_in_byte - bits_to_read;
            let mask = (1u32 << bits_to_read) - 1;
            let bits = ((self.data[byte_offset] >> shift) as u32) & mask;

            result = (result << bits_to_read) | bits;
            self.bit_pos += bits_to_read;
            bits_remaining -= bits_to_read;
        }

        Ok(result)
    }

    /// Read N bits as u64 (max 64 bits)
    #[inline]
    pub fn read_bits_u64(&mut self, num_bits: usize) -> CodecResult<u64> {
        if num_bits == 0 {
            return Ok(0);
        }

        if num_bits > 64 {
            return Err(CodecError::BufferOverflow);
        }

        let total_bits = self.data.len() * 8;
        if self.bit_pos + num_bits > total_bits {
            return Err(CodecError::UnexpectedEof);
        }

        let mut result: u64 = 0;
        let mut bits_remaining = num_bits;

        while bits_remaining > 0 {
            let byte_offset = self.bit_pos >> 3;
            let bit_offset_in_byte = self.bit_pos & 7;
            let bits_available_in_byte = 8 - bit_offset_in_byte;
            let bits_to_read = bits_remaining.min(bits_available_in_byte);

            let shift = 8 - bit_offset_in_byte - bits_to_read;
            let mask = (1u64 << bits_to_read) - 1;
            let bits = ((self.data[byte_offset] >> shift) as u64) & mask;

            result = (result << bits_to_read) | bits;
            self.bit_pos += bits_to_read;
            bits_remaining -= bits_to_read;
        }

        Ok(result)
    }

    /// Read a single bit
    #[inline]
    pub fn read_bit(&mut self) -> CodecResult<bool> {
        Ok(self.read_bits(1)? != 0)
    }

    /// Read bits as signed integer (sign-extended)
    #[inline]
    pub fn read_bits_signed(&mut self, num_bits: usize) -> CodecResult<i32> {
        if num_bits == 0 {
            return Ok(0);
        }
        let value = self.read_bits(num_bits)?;
        // Sign extend from num_bits to 32 bits
        let sign_bit = 1u32 << (num_bits - 1);
        if value & sign_bit != 0 {
            // Negative: extend with 1s
            Ok((value | !((1u32 << num_bits) - 1)) as i32)
        } else {
            Ok(value as i32)
        }
    }

    /// Align to byte boundary
    #[inline]
    pub fn align(&mut self) {
        if self.bit_pos & 7 != 0 {
            self.bit_pos = (self.bit_pos + 7) & !7;
        }
    }

    /// Skip N bits
    #[inline]
    pub fn skip_bits(&mut self, num_bits: usize) -> CodecResult<()> {
        if self.bit_pos + num_bits > self.total_bits() {
            return Err(CodecError::UnexpectedEof);
        }
        self.bit_pos += num_bits;
        Ok(())
    }

    /// Read an Elias Gamma encoded value
    /// (Used in traffic skeleton decoding)
    pub fn read_elias_gamma(&mut self) -> CodecResult<u32> {
        // Count leading zeros
        let mut zeros = 0usize;
        while !self.read_bit()? {
            zeros += 1;
            if zeros > 31 {
                return Err(CodecError::InvalidVarint);
            }
        }

        if zeros == 0 {
            return Ok(1);
        }

        // Read zeros more bits
        let remainder = self.read_bits(zeros)?;
        Ok((1 << zeros) | remainder)
    }

    /// Read a Rice-encoded value with parameter k
    pub fn read_rice(&mut self, k: u32) -> CodecResult<u32> {
        // Unary part: count ones until zero
        let mut quotient = 0u32;
        while self.read_bit()? {
            quotient += 1;
            if quotient > 30 {
                return Err(CodecError::InvalidVarint);
            }
        }

        // Binary part: read k bits
        let remainder = if k > 0 {
            self.read_bits(k as usize)?
        } else {
            0
        };

        Ok((quotient << k) | remainder)
    }
}

/// Coordinate dequantization info.
///
/// Derived from `geo::codec::MercatorDequantizer::readInfo`:
/// - Reads tile coordinate bounds and scale factors
/// - Used to convert quantized integer coords back to floating point
#[derive(Debug, Clone, Default)]
pub struct MercatorDequantizer {
    /// X coordinate bits
    pub x_bits: u16,
    /// Y coordinate bits
    pub y_bits: u16,
    /// Unknown field at offset 4
    pub field_4: u32,
    /// Tile X coordinate
    pub tile_x: u16,
    /// Tile Y coordinate
    pub tile_y: u16,
    /// Scale factor
    pub scale: f32,
    /// Inverse scale (1.0 / scale)
    pub inv_scale: f64,
    /// Y inverse scale
    pub inv_scale_y: f64,
    /// Additional X value at offset 40
    pub extra_x: u16,
    /// Additional Y value at offset 42
    pub extra_y: u16,
    /// Additional field at offset 44
    pub extra_field: u32,
    /// Extra inverse scale
    pub extra_inv_scale: f64,
    /// Initialization flag
    pub initialized: bool,
}

impl MercatorDequantizer {
    /// Read dequantizer info from a chapter.
    ///
    /// Based on `geo::codec::MercatorDequantizer::readInfo`:
    /// - u16 x_bits
    /// - u16 y_bits
    /// - u32 field_4
    /// - u16 tile_x
    /// - u16 tile_y
    /// - f32 scale
    /// - u16 extra_x
    /// - u16 extra_y
    /// - u32 extra_field
    pub fn read_from_chapter(chapter: &mut Chapter<'_>) -> CodecResult<Self> {
        let x_bits = chapter.read_u16_le()?;
        let y_bits = chapter.read_u16_le()?;
        let field_4 = chapter.read_u32_le()?;
        let tile_x = chapter.read_u16_le()?;
        let tile_y = chapter.read_u16_le()?;
        let scale = chapter.read_f32_le()?;

        let inv_scale = 1.0 / scale as f64;
        let inv_scale_y = 1.0 / (1u64 << (y_bits.saturating_sub(1))) as f64;

        let extra_x = chapter.read_u16_le()?;
        let extra_y = chapter.read_u16_le()?;
        let extra_field = chapter.read_u32_le()?;

        let extra_inv_scale = 1.0 / (1u64 << (extra_y.saturating_sub(1))) as f64;

        Ok(Self {
            x_bits,
            y_bits,
            field_4,
            tile_x,
            tile_y,
            scale,
            inv_scale,
            inv_scale_y,
            extra_x,
            extra_y,
            extra_field,
            extra_inv_scale,
            initialized: true,
        })
    }

    /// Dequantize an X coordinate
    #[inline]
    pub fn dequantize_x(&self, quantized: i32) -> f32 {
        quantized as f32 * self.inv_scale as f32
    }

    /// Dequantize a Y coordinate
    #[inline]
    pub fn dequantize_y(&self, quantized: i32) -> f32 {
        quantized as f32 * self.inv_scale as f32
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_read_var_uint32_single_byte() {
        let data = [0x05]; // 5, no continuation
        let mut chapter = Chapter::new(&data);
        assert_eq!(chapter.read_var_uint32().unwrap(), 5);
    }

    #[test]
    fn test_read_var_uint32_multi_byte() {
        let data = [0x80, 0x01]; // 128 = 0 + (1 << 7)
        let mut chapter = Chapter::new(&data);
        assert_eq!(chapter.read_var_uint32().unwrap(), 128);
    }

    #[test]
    fn test_read_var_uint32_larger() {
        let data = [0xAC, 0x02]; // 300 = 0x2C + (0x02 << 7) = 44 + 256
        let mut chapter = Chapter::new(&data);
        assert_eq!(chapter.read_var_uint32().unwrap(), 300);
    }

    #[test]
    fn test_bitstream_basic() {
        let data = [0b10110100]; // 180 = 0xB4
        let mut bs = BitStream::new(&data);

        // Read 4 bits: should be 1011 = 11
        assert_eq!(bs.read_bits(4).unwrap(), 11);
        // Read 4 bits: should be 0100 = 4
        assert_eq!(bs.read_bits(4).unwrap(), 4);
    }

    #[test]
    fn test_bitstream_cross_byte() {
        let data = [0b10110100, 0b11001010];
        let mut bs = BitStream::new(&data);

        // Read 6 bits: 101101 = 45
        assert_eq!(bs.read_bits(6).unwrap(), 45);
        // Read 6 bits: 001100 = 12
        assert_eq!(bs.read_bits(6).unwrap(), 12);
    }

    #[test]
    fn test_bitstream_signed() {
        let data = [0b11110000];
        let mut bs = BitStream::new(&data);

        // Read 4 bits signed: 1111 = -1
        assert_eq!(bs.read_bits_signed(4).unwrap(), -1);
    }
}
