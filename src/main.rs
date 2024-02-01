#![allow(unused_imports)]
#![allow(dead_code)]

extern crate clap;

use std::path::Path;

use clap::{Arg, ArgAction, Command};

mod vmp4_parser;
mod vmp4_section;
mod vmp4_section_print;
mod types;
mod sections;

fn main() -> std::io::Result<()> {
    let matches = Command::new("ftab-dump")
        .version(env!("CARGO_PKG_VERSION"))
        .author("Kenan Sulayman <kenan@sig.dev>")
        .about("The best vmp4 dumper in town!")
        .arg(Arg::new("dump")
            .short('d')
            .long("dump")
            .action(ArgAction::SetTrue)
            .help("Dump vmp4 sections to file (<vmp4-file>-offset.bin)"))
        .arg(Arg::new("verbose")
            .short('v')
            .long("verbose")
            .action(ArgAction::SetTrue)
            .help("Don't truncate section data"))
        .arg(Arg::new("VMP4_FILE")
            .help("Path of the ftab file to process")
            .required(true)
            .index(1))
        .get_matches();

    let fw_path = matches.get_one::<String>("VMP4_FILE").unwrap();

    let dump = matches.get_flag("dump");
    let verbose = matches.get_flag("verbose");

    let mut fw_buf = match std::fs::File::open(fw_path) {
        Ok(buf) => buf,
        Err(err) => {
            println!("Error: {}.", err);

            return Ok(());
        }
    };

    let vmp4 = vmp4_parser::parse_vmp4(
        &mut fw_buf,
    )?;

    println!("file size: {:?}", &fw_buf.metadata().unwrap().len());
    println!("sections: {:?}", vmp4.sections.len());
    println!();

    // for each section in vmp4, convert data to string and print it
    for section in vmp4.sections {
        // print section type, offset and size
        println!("type: {:?} (0x{:x} / {:?})", section.section_type, section.type_id, section.type_id);
        println!("compressed: {:?}", section.data.compressed);
        println!("offset: 0x{:x}", section.offset);
        println!("size: {:?}", section.data.size);

        if section.data.compressed {
            println!("original size: {:?}", section.data.original_size);
        }

        println!();

        vmp4_section_print::print_section_data(
            &section.data.buf,
            &section.envelope,
            verbose,
        );

        if dump {
            std::fs::write(
                Path::new(&format!("{}-{}.bin", fw_path, section.offset)),
                &section.data.buf,
            )?;
        }

        println!();
    }

    return Ok(());
}
