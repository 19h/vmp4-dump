use std::cmp::Ordering;
use std::io::{Read, Seek};

use byteorder::{BigEndian, LittleEndian, ReadBytesExt};

use crate::types::{parse_section_type, Vmp4SectionType};
use crate::vmp4_section::Vmp4Section;

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
            read_vec(file, len)?
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
    pub original_size: u32,
    pub size: u32,
    pub buf: Vec<u8>,
}

impl Vmp4Data {
    // static method that parses a &[u8] into a Vmp4Data struct
    // which contains a 1 bytes gzip flag, 4 byte size, and all other bytes the data.

    pub fn parse(
        buf: &[u8],
    ) -> Result<Vmp4Data, std::io::Error> {
        let mut file = std::io::Cursor::new(buf);

        let original_size = buf.len();

        let compressed = file.read_u8()? != 0;
        
        let decompressed_size =
            if compressed {
                //dbg!(read_vec(&mut file, 4)?);
                file.read_u32::<LittleEndian>()?
            } else {
                0
            };

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

        if decompressed_size != 0 && decompressed_size != data.len() as u32 {
            return Err(
                std::io::Error::new(
                    std::io::ErrorKind::Other,
                    "Decompressed size does not match data size",
                )
            );
        }

        Ok(
            Vmp4Data {
                compressed,
                original_size: original_size as u32,
                size: data.len() as u32,
                buf: data,
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

    // Each section header (10 bytes) which contains a 2 bytes type field, 4 byte offset location, and 4 byte size.
    let mut sections = Vec::new();

    for _ in 0..num_sections {
        let section_header =
            &read_vec(
                src,
                10,
            )?[..];

        let section =
            Vmp4Section::parse(
                src,
                section_header,
            )?;

        offset += 10;

        src.seek(
            std::io::SeekFrom::Start(
                offset as u64,
            ),
        )?;

        sections.push(
            section,
        );
    }

    let vmp4 = Vmp4 {
        tag,
        sections,
    };

    Ok(vmp4)
}
