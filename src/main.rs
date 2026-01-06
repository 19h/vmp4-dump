#![allow(unused_imports)]
#![allow(dead_code)]

extern crate clap;

use std::path::Path;

use clap::{Arg, ArgAction, Command};

mod bounds;
mod buildings;
mod characteristics;
mod coastline;
mod codec;
mod connectivity;
mod elevation;
mod geojson;
mod geometry;
mod labels;
mod poi;
mod proto;
mod sections;
#[cfg(feature = "sqlite")]
mod sqlite;
mod tilekey;
mod transit;
mod types;
mod venues;
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
            Arg::new("geojson")
                .short('g')
                .long("geojson")
                .required(false)
                .action(ArgAction::SetTrue)
                .help("Export labels and features to GeoJSON file"),
        )
        .arg(
            Arg::new("tile-keys")
                .short('k')
                .long("tile-keys")
                .required(false)
                .num_args(4)
                .value_names(["KEY_A", "KEY_B", "KEY_C", "KEY_D"])
                .help("Apple tile database keys (key_a key_b key_c key_d) for coordinate decoding"),
        )
        .arg(
            Arg::new("tile")
                .short('t')
                .long("tile")
                .required(false)
                .num_args(3)
                .value_names(["X", "Y", "ZOOM"])
                .help("Tile coordinates (x y zoom) for coordinate decoding"),
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
    let export_geojson = *matches.get_one::<bool>("geojson").unwrap();

    // Parse tile keys if provided
    let tile_location = if let Some(keys) = matches.get_many::<String>("tile-keys") {
        let keys: Vec<u32> = keys.filter_map(|s| s.parse().ok()).collect();
        if keys.len() == 4 {
            let loc = tilekey::decode_apple_tile_key(keys[0], keys[1], keys[2], keys[3]);
            if let Some(ref l) = loc {
                println!("Decoded tile location:");
                println!("  lat: {:.6}, lon: {:.6}", l.lat, l.lon);
                println!("  zoom: {}, tileset: {}", l.zoom, l.tileset);
                println!("  accuracy: {}", l.accuracy.as_str());
                if let Some(ref b) = l.bounds {
                    println!(
                        "  bounds: [{:.4}, {:.4}] to [{:.4}, {:.4}]",
                        b.south, b.west, b.north, b.east
                    );
                }
                println!();
            }
            loc
        } else {
            None
        }
    } else {
        None
    };

    // Parse explicit tile coordinates if provided
    let tile_coords = if let Some(coords) = matches.get_many::<String>("tile") {
        let coords: Vec<u32> = coords.filter_map(|s| s.parse().ok()).collect();
        if coords.len() == 3 {
            Some((coords[0], coords[1], coords[2] as u8))
        } else {
            None
        }
    } else {
        None
    };

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

    // Collect labels and features for GeoJSON export
    let mut geojson_builder = geojson::GeoJsonBuilder::new();

    // Configure coordinate converter based on available info
    if let Some(ref loc) = tile_location {
        geojson_builder = geojson_builder.with_tile_location(loc);
        println!("Using tile key coordinates for GeoJSON export");
    } else if let Some((x, y, z)) = tile_coords {
        geojson_builder = geojson_builder.with_tile(x, y, z);
        println!(
            "Using tile coordinates ({}, {}, {}) for GeoJSON export",
            x, y, z
        );
    }

    let mut labels_collected: Vec<String> = Vec::new();
    let mut tile_bounds: Option<bounds::CoordinateBounds> = None;

    // for each section in vmp4, convert data to string and print it
    for section in &vmp4.sections {
        // print section type, offset and size with description
        println!(
            "type: {:?} (0x{:x} / {:?}) - {}",
            section.section_type,
            section.type_id,
            section.type_id,
            section.section_type.description()
        );
        println!(
            "  category: {} | compressed: {:?}",
            section.section_type.category(),
            section.data.compressed
        );
        println!(
            "  offset: 0x{:x} | size: {:?}",
            section.offset, section.data.size
        );

        if section.data.compressed {
            println!("  original size: {:?}", section.data.original_size);
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

        // Collect data for GeoJSON export
        if export_geojson {
            if let Some(ref envelope) = section.envelope {
                match envelope {
                    vmp4_section::Vmp4SectionData::ChapterLabels(labels) => {
                        labels_collected.extend(labels.labels.iter().cloned());
                    }
                    _ => {}
                }
            }

            // Try to extract coordinate bounds from relevant sections
            if tile_bounds.is_none() && (section.type_id == 0x1E || section.type_id == 0x02) {
                if let Some(b) = bounds::parse_coordinate_bounds(&section.data.buf, section.type_id)
                {
                    println!(
                        "  Found coordinate bounds: [{:.4}, {:.4}] to [{:.4}, {:.4}]",
                        b.lat_min, b.lon_min, b.lat_max, b.lon_max
                    );
                    tile_bounds = Some(b);
                }
            }
        }

        println!();
    }

    // Export GeoJSON if requested
    if export_geojson {
        // If we have bounds from the tile and no other coordinate source, use them
        if !geojson_builder.has_converter() {
            if let Some(ref b) = tile_bounds {
                geojson_builder = geojson_builder.with_bounds(b);
                println!("Using extracted tile bounds for GeoJSON coordinates");
            } else {
                println!(
                    "Warning: No coordinate source available. Using normalized 0-1 coordinates."
                );
                println!("  Provide --tile-keys or --tile for proper geographic coordinates.");
            }
        }

        // Add labels as point features
        let num_labels = labels_collected.len();
        let grid_size = ((num_labels as f64).sqrt().ceil() as usize).max(1);

        for (i, label) in labels_collected.iter().enumerate() {
            let mut props = std::collections::HashMap::new();
            props.insert("text".to_string(), serde_json::Value::String(label.clone()));
            props.insert("index".to_string(), serde_json::Value::Number(i.into()));
            props.insert(
                "type".to_string(),
                serde_json::Value::String("label".to_string()),
            );

            // Distribute labels in a grid pattern within the tile
            let col = i % grid_size;
            let row = i / grid_size;
            let x = (col as f64 + 0.5) / grid_size as f64;
            let y = (row as f64 + 0.5) / grid_size as f64;

            geojson_builder.add_point(x, y, props);
        }

        let collection = geojson_builder.build();

        let geojson_path = format!("{}.geojson", fw_path);
        let json = collection.to_json_pretty().map_err(|e| {
            std::io::Error::new(std::io::ErrorKind::Other, format!("JSON error: {}", e))
        })?;

        std::fs::write(&geojson_path, &json)?;

        println!();
        println!(
            "Exported {} features to {}",
            collection.features.len(),
            geojson_path
        );

        if let Some(bbox) = collection.bbox {
            println!(
                "Bounding box: [{:.4}, {:.4}] to [{:.4}, {:.4}]",
                bbox[0], bbox[1], bbox[2], bbox[3]
            );
        }
    }

    return Ok(());
}
