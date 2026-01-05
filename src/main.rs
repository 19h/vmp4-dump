#![allow(unused_imports)]
#![allow(dead_code)]

extern crate clap;

use std::path::Path;

use clap::{Arg, ArgAction, Command};

mod buildings;
mod characteristics;
mod codec;
mod connectivity;
mod elevation;
mod geometry;
mod sections;
mod transit;
mod types;
mod vmp4_parser;
mod vmp4_section;
mod vmp4_section_print;

const MOTD: &str = r#"
┬  ┬┌┬┐┌─┐ 4
└┐┌┘│││├─┘
 └┘ ┴ ┴┴   dump
"#;

fn main() -> std::io::Result<()> {
    let matches = Command::new("ftab-dump")
        .version(env!("CARGO_PKG_VERSION"))
        .author("Kenan Sulayman <kenan@sig.dev>")
        .about("The best vmp4 dumper in town!")
        .arg(
            Arg::new("dump")
                .short('d')
                .long("dump")
                .required(false)
                .action(ArgAction::SetTrue)
                .help("Dump vmp4 sections to file (<vmp4-file>-offset.bin)"),
        )
        .arg(
            Arg::new("verbose")
                .short('v')
                .long("verbose")
                .required(false)
                .action(ArgAction::SetTrue)
                .help("Don't truncate section data"),
        )
        .arg(
            Arg::new("VMP4_FILE")
                .help("Path of the ftab file to process")
                .required(true)
                .index(1),
        )
        .get_matches();

    println!("{}", MOTD);

    let fw_path = matches.get_one::<String>("VMP4_FILE").unwrap();

    let dump = *matches.get_one::<bool>("dump").unwrap();
    let verbose = *matches.get_one::<bool>("verbose").unwrap();

    let mut fw_buf = match std::fs::File::open(fw_path) {
        Ok(buf) => buf,
        Err(err) => {
            println!("Error: {}.", err);

            return Ok(());
        }
    };

    let vmp4 = vmp4_parser::parse_vmp4(&mut fw_buf)?;

    println!("file size: {:?}", &fw_buf.metadata().unwrap().len());
    println!("sections: {:?}", vmp4.sections.len());
    println!();

    // for each section in vmp4, convert data to string and print it
    for section in vmp4.sections {
        // print section type, offset and size
        println!(
            "type: {:?} (0x{:x} / {:?})",
            section.section_type, section.type_id, section.type_id
        );
        println!("compressed: {:?}", section.data.compressed);
        println!("offset: 0x{:x}", section.offset);
        println!("size: {:?}", section.data.size);

        if section.data.compressed {
            println!("original size: {:?}", section.data.original_size);
        }

        if verbose {
            println!();

            vmp4_section_print::print_section_data(&section.data.buf, &section.envelope, verbose);
        }

        if dump {
            let out_file = format!(
                "{}-{:#08x}-{:?}.bin",
                fw_path, section.offset, section.section_type,
            );

            println!();
            println!("dumping section to file: {} ..", &out_file,);

            std::fs::write(Path::new(&out_file), &section.data.buf)?;
        }

        println!();
    }

    return Ok(());
}
