#![allow(unused_imports)]
#![allow(dead_code)]

extern crate clap;

use std::path::Path;

use clap::{App, Arg};

mod vmp4_parser;
mod vmp4_section;
mod vmp4_section_print;
mod types;
mod sections;

fn main() -> std::io::Result<()> {
    let matches = App::new("ftab-dump")
        .version(
            std::env::var("VMP4_DUMP_VERSION")
                .unwrap_or("1.0.0".to_string()).as_str()
        )
        .author("Kenan Sulayman <kenan@sig.dev>")
        .about("The best vmp4 dumper in town!")
        .arg(Arg::with_name("dump")
            .short('d')
            .long("dump")
            .help("Dump vmp4 sections to file (<vmp4-file>-offset.bin)"))
        .arg(Arg::with_name("verbose")
            .short('v')
            .long("verbose")
            .help("Don't truncate section data"))
        .arg(Arg::with_name("VMP4_FILE")
            .help("Path of the ftab file to process")
            .required(true)
            .index(1))
        .get_matches();

    let fw_path = matches.value_of("VMP4_FILE").unwrap();

    let dump = matches.is_present("dump");
    let verbose = matches.is_present("verbose");

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
        let section_data = match section.data {
            Some(data) => data,
            None => continue,
        };

        // print section type, offset and size
        println!("type: {:?} ({:x} / {:?})", section.section_type, section.type_id, section.type_id);
        println!("offset: {:?}", section.offset);
        println!("size: {:?}", section.size);
        println!();

        vmp4_section_print::print_section_data(
            &section_data,
            &section.envelope,
            verbose,
        );

        if dump {
            std::fs::write(
                Path::new(&format!("{}-{}.bin", fw_path, section.offset)),
                &section_data,
            )?;
        }

        println!();
    }

    return Ok(());
}
