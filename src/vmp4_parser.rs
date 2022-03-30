use std::cmp::Ordering;
use std::io::{Read, Seek};

use byteorder::{BigEndian, LittleEndian, ReadBytesExt};
use crate::types::{parse_section_type, Vmp4SectionType};

#[inline]
fn read_vec<R>(file: &mut R, len: usize) -> Result<Vec<u8>, std::io::Error>
    where R: std::io::Read,
{
    let mut buf = [0u8].repeat(len);

    file.read(&mut *buf)?;

    Ok(buf)
}

#[inline]
fn read_str<R>(file: &mut R, len: usize) -> Result<String, std::io::Error>
    where R: std::io::Read,
{
    Ok(
        String::from_utf8(
            read_vec(file, 4)?
                .to_vec()
        )
            .unwrap_or(String::new())
    )
}

#[inline]
fn cmp_str(buf: &Vec<u8>, sstr: &[u8]) -> bool {
    buf.cmp(&sstr.to_vec()) == Ordering::Equal
}

#[derive(Debug)]
pub struct Vmp4Data {
    pub compressed: bool,
    pub size: u32,
    pub buf: Vec<u8>,
}

impl Vmp4Data {
    pub fn new(compressed: bool, size: u32, buf: Vec<u8>) -> Vmp4Data {
        Vmp4Data {
            compressed,
            size,
            buf,
        }
    }

    // static method that parses a &[u8] into a Vmp4Data struct
    // which contains a 1 bytes gzip flag, 4 byte size, and all other bytes the data.

    pub fn parse(buf: &[u8]) -> Result<Vmp4Data, std::io::Error> {
        let mut file = std::io::Cursor::new(buf);

        let compressed = file.read_u8()? != 0;
        read_vec(&mut file, 4)?;

        let pos = file.position();

        let data =
            read_vec(
                &mut file,
                buf.len() - pos as usize,
            )?;

        let data =
            if compressed {
                let mut decoder =
                    flate2::read::ZlibDecoder::new(
                        &data[..],
                    );

                let mut buf = Vec::new();

                decoder
                    .read_to_end(
                        &mut buf,
                    )?;

                buf
            } else {
                data
            };

        Ok(
            Vmp4Data::new(
                compressed,
                0,
                data,
            )
        )
    }
}

#[derive(Debug)]
pub struct Vmp4Section {
    pub section_type: Vmp4SectionType,
    pub type_id: u16,
    pub offset: u32,
    pub size: u32,
    pub data: Option<Vec<u8>>
}

impl Vmp4Section {
    pub fn parse(buf: &[u8]) -> Result<Vmp4Section, std::io::Error> {
        let mut file = std::io::Cursor::new(buf);

        let type_id = file.read_u16::<LittleEndian>()?;
        let offset = file.read_u32::<LittleEndian>()?;
        let size = file.read_u32::<LittleEndian>()?;

        Ok(
            Vmp4Section {
                section_type: parse_section_type(type_id),
                type_id,
                offset,
                size,
                data: None,
            }
        )
    }
}

#[derive(Debug)]
pub struct Vmp4 {
    pub tag: String,
    pub sections: Vec<Vmp4Section>,
}

pub fn parse_vmp4<R>(src: &mut R) -> std::io::Result<Vmp4>
    where R: std::io::Read + std::io::Seek,
{
    let tag = read_str(src, 4)?;

    if !cmp_str(&tag.as_bytes().to_vec(), b"VMP4") {
        return Err(
            std::io::Error::new(
                std::io::ErrorKind::Other,
                "Could not find VPM4 tag",
            )
        );
    }

    let mut offset = 4usize;

    src.read_u16::<BigEndian>()?;
    offset += 2;

    let num_sections = src.read_u16::<LittleEndian>()?;
    offset += 2;

    // Each section's information (10 bytes) which contains a 2 bytes type field, 4 byte offset location, and 4 byte size.
    let mut sections = Vec::new();

    for _ in 0..num_sections {
        let section =
            Vmp4Section::parse(
                &read_vec(src, 10)?[..],
            )?;

        sections.push(
            section,
        );

        offset += 10;
    }

    for section in sections.iter_mut() {
        src.seek(std::io::SeekFrom::Start(section.offset as u64))?;

        let data =
            read_vec(
                src,
                section.size as usize,
            )?;

        let vmp4_data =
            Vmp4Data::parse(
                &data,
            )?;

        section.data = Some(
            vmp4_data.buf,
        );
    }

    let vmp4 = Vmp4 {
        tag,
        sections,
    };

    Ok(vmp4)
}
