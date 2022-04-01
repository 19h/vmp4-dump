<h1 align="center">vmp4-dump</h1>

<h5 align="center">Dumps Apple VMP4 files, used by geod, GeoServices, Maps, and other Apple apps.</h5>

<hr/>

<h5 align="center">— HELP WANTED —<br/>If you can contribute parsers for individual section data, please do.</h5>

<hr/>

<div align="center">
  <a href="https://crates.io/crates/vmp4-dump">
    crates.io
  </a>
  —
  <a href="https://github.com/19h/vmp4-dump">
    Github
  </a>
</div>

<br />

```shell script
$ cargo install vmp4-dump
$ vmp4-dump --verbose --dump tile.vf
```

Example output:

```text
$ vmp4-dump tile-0219ee.vf

file size: 1115
sections: 11

type: ChapterGlobal (1 / 1)
offset: 129
size: 12

0000: 40 01 50 30 E2 01 00                             @.P0...

type: ChapterLabels (a / 10)
offset: 141
size: 34

labels: (2)
  - dzyrzecz-Wybudowanie
  - Paklica

type: ChapterLabelLanguages (b / 11)
offset: 175
size: 7

0000: 6C 00                                            l.

type: ChapterLabelLocalizations2 (d / 13)
offset: 182
size: 23

0000: 6C 00 03 01 50 4C 00 00 00 01 01 01 01 01 01 02  l...PL..........
0016: 88 88                                            ..

type: ChapterVertices (14 / 20)
offset: 205
size: 10

0000: 59 C4 90 60 00                                   Y..`.

type: ChapterPointFeatures (1e / 30)
offset: 215
size: 36

0000: 01 00 00 A4 1E CD EE 41 7A 65 2B B2 00 00 60 41  .......Aze+...`A
0016: 04 04 BA 01 06 04 0A 00 55 0E 00 00 00 00 00     ........U......

type: ChapterVertices (14 / 20)
offset: 251
size: 77

0000: 00 03 56 F6 C3 D8 DE 71 4C F4 00 F1 FA 80 B8 FE  ..V....qL.......
0016: 81 18 FB 80 9C F9 40 A8 F7 80 FC F2 03 74 C1 82  ......@......t..
0032: 1C C9 70 10 FF 01 85 EB 01 F8 F0 00 44 FC 42 9C  ..p.........D.B.
0048: EA 02 04 EC 40 28 FF 40 58 00 80 78 02 C6 51 36  ....@(.@X..x..Q6
0064: 00 38 01 C0 58 00 C0 00                          .8..X...

type: ChapterLineFeatures (1f / 31)
offset: 328
size: 22

0000: 00 01 10 19 00 02 04 01 0C 04 BA 01 0A 01 5E 00  ..............^.
0016: 00                                               .

type: ChapterVertices (14 / 20)
offset: 350
size: 675

0000: 04 E3 01 34 74 00 02 46 32 B8 00 0B 73 DF FF 00  ...4t..F2...s...
0016: 00 00 07 9C FE F3 02 67 FD D0 04 BF DD 00 33 FD  .......g......3.
0032: D0 01 7F DE FF EF F7 6F F1 BE E8 03 4B FE 00 04  .......o....K...
0048: 7F DE 00 1B FD FF FE BF E0 FF BF EE 8F CB BE BA  ................
0064: 03 2B FD 50 11 7F 3D 00 03 FD EF E0 FF B7 FE 53  .+.P..=........S
0080: E4 40 2E 3F B7 00 C7 FE B0 00 3F EF FD 53 FE 6F  .@.?......?..S.o
0096: F2 3F EC FF 93 FC 9F F4 FF 3E FE 3B FD DF FB 3F  .?.......>.;...?
0112: D8 FF B3 FD 6F FC 3F A5 FF B3 F5 FF FF 3F A2 FF  ....o.?......?..
0128: F7 FA 0F FD 3F D4 FF D3 F6 3F EB BE FE FE A3 F3  ....?....?......
0144: CF E6 BF D6 FF BF FA 5F FB 7D CB FF E3 FA 8F FD  ......._.}......
0160: 7F F8 FF FF FD 3F FD 3C F6 F9 6F F8 3F F3 7F 6B  .....?.<..o.?..k
0176: FF 6F FD 2F FA BF C7 FE 14 1C DF DD 7A F7 FA 3B  .o./........z..;
0192: FB 1F EA BF CB FD F7 FE                          ........
..... 475 more bytes .....


type: ChapterPolygonFeatures (20 / 32)
offset: 1025
size: 53

0000: 00 08 02 1B 07 47 02 00 00 88 03 01 47 0D 00 80  .....G......G...
0016: 24 30 E8 02 67 70 34 18 C4 6E B6 12 16 A0 5B 60  $0..gp4..n....[`
0032: D1 70 23 68 50 63 A3 BA DB 04 5A 8C 2D 83 40 00  .p#hPc....Z.-.@.

type: ChapterPolygonPointCharacteristics (34 / 52)
offset: 1078
size: 37

0000: 02 00 05 00 02 00 01 02 00 02 02 00 11 02 00 16  ................
0016: 02 00 01 03 01 82 00 01 02 02 00 01 82 00 02 00  ................
```

#### Special thanks

- "iOS Forensics: VMP4 File format" by Jesse Spangenberger (<a href="https://digitalforensics.io/ios-forensics-vmp4-file-format/">Blog post</a>)

#### Notes

- `cargo` requires a rust installation.
- Most of this inferred from the decompilation by Ghidra
  of the private framework GeoServices.framework extracted
  from the arm64e dyld cache of MacOS 12.3 (21E230).

#### Known VectorTile Section Types (MacOS 12.3, 21E230, arm64e)

```rust
10 => ChapterLabels,
0xb => ChapterLabelLanguages,
0xd => ChapterLabelLocalizations2,
0x14 => ChapterVertices,
0x1e => ChapterPointFeatures,
0x1f => ChapterLineFeatures,
0x20 => ChapterPolygonFeatures,
0x21 => ChapterBuildingFeatures,
0x22 => ChapterCoastlineFeatures,
0x26 => ChapterWrappingCoastlineFeatures,
0x27 => ChapterBuildingMeshes,
0x33 => ChapterLinePointCharacteristics,
0x34 => ChapterPolygonPointCharacteristics,
0x37 => ChapterPolygonPointLabelPositions,
0x3c => ChapterConnectivity,
0x50 => ChapterGeoIDSegments,
0x5a => ChapterAddressRanges,
0x5d => ChapterTileReferences,
0x60 => ChapterHighResBuildings,
100 => ChapterDebugBlob,
0x65 => ChapterElevationRaster,
0x66 => ChapterStyleAttributeRaster,
0x67 => ChapterDaVinciMetadata,
0x68 => ChapterLowResBuildings,
0x70 => ChapterTransitMZROverride,
0x77 => ChapterCoverage,
0x80 => ChapterTransitSystems,
0x81 => ChapterTransitNetwork,
0x87 => ChapterRoadNetwork,
0x88 => ChapterVenueMZROverride,
0x89 => ChapterVenues,
0x8a => ChapterStorefronts,
0x8b => ChapterLowResBorderBuildings,
0x8c => ChapterBorderBuildingMeshes,
0x8d => ChapterLabelPlacementMetadata,
0x8e => ChapterDaVinciBuildings,
0x90 => ChapterPointFeaturesAddendum,
0x91 => ChapterLinesExtended,
0x92 => ChapterTrafficSkeleton1,
0x93 => ChapterDaVinciLandmarks,
0x94 => ChapterLineWidths1,
0x95 => ChapterPointLabelAnnotations,
0x97 => ChapterPOIMzrOverrides,
0x98 => ChapterTrafficSkeleton2,
0x99 => ChapterLineWidths2,
0x9a => ChapterStyleAttributeRaster2,
0x9b => ChapterMaterialRaster,
```

#### License

~~ MIT License ~~

Copyright (c) 2022 Kenan Sulayman

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
