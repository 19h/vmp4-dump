//! SQLite tile cache reader for Apple Maps.
//!
//! Reads tiles directly from Apple Maps SQLite cache files.
//! The cache is typically located at:
//! - macOS: ~/Library/Caches/GeoServices/
//! - iOS: /var/mobile/Library/Caches/GeoServices/
//!
//! This module requires the `sqlite` feature to be enabled:
//! ```toml
//! vmp4-dump = { version = "1.1", features = ["sqlite"] }
//! ```

use rusqlite::{Connection, Result as SqliteResult};
use std::path::Path;

use crate::tilekey;
use crate::vmp4_parser;

/// A tile record from the cache database
#[derive(Debug, Clone)]
pub struct TileRecord {
    /// Row ID in database
    pub rowid: i64,
    /// Raw tile data (VMP4 or JPEG)
    pub data: Vec<u8>,
    /// Size field from database
    pub size: i64,
    /// Tile key A (tileset identifier)
    pub key_a: u32,
    /// Tile key B (X coordinate component)
    pub key_b: u32,
    /// Tile key C (Y coordinate component)
    pub key_c: u32,
    /// Tile key D (contains zoom level)
    pub key_d: u32,
    /// Tileset identifier
    pub tileset: i64,
    /// Insert timestamp
    pub insert_timestamp: Option<i64>,
    /// Access timestamp
    pub access_timestamp: Option<i64>,
    /// Decoded tile location (if decodable)
    pub location: Option<tilekey::TileLocation>,
}

impl TileRecord {
    /// Check if this is a VMP4 tile
    pub fn is_vmp4(&self) -> bool {
        self.data.len() >= 4 && &self.data[0..4] == b"vmp4"
    }

    /// Check if this is a JPEG tile
    pub fn is_jpeg(&self) -> bool {
        self.data.len() >= 3 && &self.data[0..3] == b"\xff\xd8\xff"
    }

    /// Get tile format description
    pub fn format(&self) -> &'static str {
        if self.is_vmp4() {
            "VMP4"
        } else if self.is_jpeg() {
            "JPEG"
        } else {
            "Unknown"
        }
    }
}

/// Apple Maps tile cache reader
pub struct TileCache {
    conn: Connection,
}

impl TileCache {
    /// Open a tile cache database
    pub fn open<P: AsRef<Path>>(path: P) -> SqliteResult<Self> {
        let conn = Connection::open(path)?;
        Ok(TileCache { conn })
    }

    /// Get total number of tiles in the cache
    pub fn tile_count(&self) -> SqliteResult<i64> {
        self.conn
            .query_row("SELECT COUNT(*) FROM data", [], |row| row.get(0))
    }

    /// Get a single tile by rowid
    pub fn get_tile(&self, rowid: i64) -> SqliteResult<Option<TileRecord>> {
        let mut stmt = self.conn.prepare(
            "SELECT rowid, data, size, key_a, key_b, key_c, key_d, tileset, insert_timestamp, access_timestamp 
             FROM data WHERE rowid = ?",
        )?;

        let result = stmt.query_row([rowid], |row| {
            let key_a: i64 = row.get(3)?;
            let key_b: i64 = row.get(4)?;
            let key_c: i64 = row.get(5)?;
            let key_d: i64 = row.get(6)?;

            let key_a = key_a as u32;
            let key_b = key_b as u32;
            let key_c = key_c as u32;
            let key_d = key_d as u32;

            let location = tilekey::decode_apple_tile_key(key_a, key_b, key_c, key_d);

            Ok(TileRecord {
                rowid: row.get(0)?,
                data: row.get(1)?,
                size: row.get(2)?,
                key_a,
                key_b,
                key_c,
                key_d,
                tileset: row.get(7)?,
                insert_timestamp: row.get(8).ok(),
                access_timestamp: row.get(9).ok(),
                location,
            })
        });

        match result {
            Ok(record) => Ok(Some(record)),
            Err(rusqlite::Error::QueryReturnedNoRows) => Ok(None),
            Err(e) => Err(e),
        }
    }

    /// Iterate over all tiles
    pub fn iterate_tiles(&self) -> SqliteResult<TileIterator<'_>> {
        let stmt = self.conn.prepare(
            "SELECT rowid, data, size, key_a, key_b, key_c, key_d, tileset, insert_timestamp, access_timestamp 
             FROM data ORDER BY rowid",
        )?;

        Ok(TileIterator { stmt })
    }

    /// Find tiles by tileset
    pub fn find_by_tileset(&self, tileset: i64) -> SqliteResult<Vec<TileRecord>> {
        let mut stmt = self.conn.prepare(
            "SELECT rowid, data, size, key_a, key_b, key_c, key_d, tileset, insert_timestamp, access_timestamp 
             FROM data WHERE tileset = ?",
        )?;

        let rows = stmt.query_map([tileset], |row| {
            let key_a: i64 = row.get(3)?;
            let key_b: i64 = row.get(4)?;
            let key_c: i64 = row.get(5)?;
            let key_d: i64 = row.get(6)?;

            let key_a = key_a as u32;
            let key_b = key_b as u32;
            let key_c = key_c as u32;
            let key_d = key_d as u32;

            let location = tilekey::decode_apple_tile_key(key_a, key_b, key_c, key_d);

            Ok(TileRecord {
                rowid: row.get(0)?,
                data: row.get(1)?,
                size: row.get(2)?,
                key_a,
                key_b,
                key_c,
                key_d,
                tileset: row.get(7)?,
                insert_timestamp: row.get(8).ok(),
                access_timestamp: row.get(9).ok(),
                location,
            })
        })?;

        rows.collect()
    }

    /// Find VMP4 tiles only
    pub fn find_vmp4_tiles(&self) -> SqliteResult<Vec<TileRecord>> {
        let mut stmt = self.conn.prepare(
            "SELECT rowid, data, size, key_a, key_b, key_c, key_d, tileset, insert_timestamp, access_timestamp 
             FROM data WHERE substr(data, 1, 4) = 'vmp4'",
        )?;

        let rows = stmt.query_map([], |row| {
            let key_a: i64 = row.get(3)?;
            let key_b: i64 = row.get(4)?;
            let key_c: i64 = row.get(5)?;
            let key_d: i64 = row.get(6)?;

            let key_a = key_a as u32;
            let key_b = key_b as u32;
            let key_c = key_c as u32;
            let key_d = key_d as u32;

            let location = tilekey::decode_apple_tile_key(key_a, key_b, key_c, key_d);

            Ok(TileRecord {
                rowid: row.get(0)?,
                data: row.get(1)?,
                size: row.get(2)?,
                key_a,
                key_b,
                key_c,
                key_d,
                tileset: row.get(7)?,
                insert_timestamp: row.get(8).ok(),
                access_timestamp: row.get(9).ok(),
                location,
            })
        })?;

        rows.collect()
    }

    /// Get distinct tilesets in the cache
    pub fn get_tilesets(&self) -> SqliteResult<Vec<i64>> {
        let mut stmt = self
            .conn
            .prepare("SELECT DISTINCT tileset FROM data ORDER BY tileset")?;
        let rows = stmt.query_map([], |row| row.get(0))?;
        rows.collect()
    }

    /// Get statistics about the cache
    pub fn get_stats(&self) -> SqliteResult<CacheStats> {
        let total_tiles = self.tile_count()?;

        let vmp4_count: i64 = self.conn.query_row(
            "SELECT COUNT(*) FROM data WHERE substr(data, 1, 4) = 'vmp4'",
            [],
            |row| row.get(0),
        )?;

        let jpeg_count: i64 = self.conn.query_row(
            "SELECT COUNT(*) FROM data WHERE substr(data, 1, 3) = X'ffd8ff'",
            [],
            |row| row.get(0),
        )?;

        let total_size: i64 = self
            .conn
            .query_row("SELECT SUM(size) FROM data", [], |row| row.get(0))
            .unwrap_or(0);

        let tilesets = self.get_tilesets()?;

        Ok(CacheStats {
            total_tiles,
            vmp4_count,
            jpeg_count,
            other_count: total_tiles - vmp4_count - jpeg_count,
            total_size_bytes: total_size,
            tileset_count: tilesets.len(),
        })
    }
}

/// Statistics about a tile cache
#[derive(Debug, Clone)]
pub struct CacheStats {
    pub total_tiles: i64,
    pub vmp4_count: i64,
    pub jpeg_count: i64,
    pub other_count: i64,
    pub total_size_bytes: i64,
    pub tileset_count: usize,
}

impl CacheStats {
    /// Get total size in megabytes
    pub fn total_size_mb(&self) -> f64 {
        self.total_size_bytes as f64 / (1024.0 * 1024.0)
    }
}

/// Iterator over tiles in the cache
pub struct TileIterator<'a> {
    stmt: rusqlite::Statement<'a>,
}

impl<'a> TileIterator<'a> {
    /// Get next tile
    pub fn next_tile(&mut self) -> SqliteResult<Option<TileRecord>> {
        // Note: This is a simplified implementation
        // A proper implementation would use rusqlite's Rows iterator
        Ok(None)
    }
}

/// Find Apple Maps cache files on the system
pub fn find_cache_files() -> Vec<std::path::PathBuf> {
    let mut paths = Vec::new();

    // macOS paths
    if let Ok(home) = std::env::var("HOME") {
        let cache_dir = std::path::PathBuf::from(home).join("Library/Caches/GeoServices");
        if cache_dir.exists() {
            if let Ok(entries) = std::fs::read_dir(&cache_dir) {
                for entry in entries.flatten() {
                    let path = entry.path();
                    if path.extension().map_or(false, |ext| ext == "db") {
                        paths.push(path);
                    }
                }
            }
        }
    }

    paths
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_tile_record_format_detection() {
        let vmp4_record = TileRecord {
            rowid: 1,
            data: b"vmp4test".to_vec(),
            size: 8,
            key_a: 0,
            key_b: 0,
            key_c: 0,
            key_d: 0,
            tileset: 0,
            insert_timestamp: None,
            access_timestamp: None,
            location: None,
        };
        assert!(vmp4_record.is_vmp4());
        assert!(!vmp4_record.is_jpeg());
        assert_eq!(vmp4_record.format(), "VMP4");

        let jpeg_record = TileRecord {
            rowid: 2,
            data: vec![0xff, 0xd8, 0xff, 0xe0],
            size: 4,
            key_a: 0,
            key_b: 0,
            key_c: 0,
            key_d: 0,
            tileset: 0,
            insert_timestamp: None,
            access_timestamp: None,
            location: None,
        };
        assert!(!jpeg_record.is_vmp4());
        assert!(jpeg_record.is_jpeg());
        assert_eq!(jpeg_record.format(), "JPEG");
    }

    #[test]
    fn test_cache_stats() {
        let stats = CacheStats {
            total_tiles: 100,
            vmp4_count: 80,
            jpeg_count: 15,
            other_count: 5,
            total_size_bytes: 10 * 1024 * 1024,
            tileset_count: 3,
        };
        assert!((stats.total_size_mb() - 10.0).abs() < 0.01);
    }
}
