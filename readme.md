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
$ vmp4-dump tile-0f782e.vf

file size: 538
sections: 8

type: ChapterGlobal (0x1 / 1)
compressed: false
offset: 0x60
size: 11

0000: 47 00 04 59 00 00 A8 00 D2 14 00                 G..Y.......

type: ChapterLabels (0xa / 10)
compressed: false
offset: 0x6c
size: 47

labels: (5)
  - Kuligowo
  - Lubosinek
  - Marianowo
  - Policko
  - Żółwin

type: ChapterLabelLanguages (0xb / 11)
compressed: false
offset: 0x9c
size: 6

languages: (1)
  - /pl

type: ChapterLabelLocalizations2 (0xd / 13)
compressed: false
offset: 0xa3
size: 25

0000: 02 03 01 70 6C 00 03 01 50 4C 00 00 00 01 01 01  ...pl...PL......
0016: 01 01 01 05 88 88 88 88 88                       .........

type: ChapterVertices (0x14 / 20)
compressed: false
offset: 0xbd
size: 217

0000: 13 5E 28 44 00 0E C9 39 38 A2 38 A1 33 03 C8 67  .^(D...98.8.3..g
0016: D0 1C F7 21 3C A2 0D C2 63 32 3B 00 0F BE E3 09  ...!<...c2;.....
0032: 44 8E A6 51 2B 20 EF F9 B9 C7 70 DD 3F 2F EE BF  D..Q+.....p.?/..
0048: 9F DE E6 6D 3A 7F DF 6F DF E9 FA F6 FE FF 3D 7F  ...m:..o......=.
0064: 97 73 C3 82 FA F9 7F 3B EF E5 9C 38 7A 58 53 1F  .s.....;...8zXS.
0080: A1 7E E1 20 82 9F 01 DD 63 F9 2E 9C C5 DF 62 9F  .~......c.....b.
0096: E6 43 09 44 8F D8 7D F4 1F 8B F6 2E 74 5A C8 FE  .C.D..}.....tZ..
0112: 43 73 09 CC 05 9F 07 25 F0 2D 85 00 00 90 6C 4C  Cs.....%.-....lL
0128: E1 74 37 40 48 5E 4B DB 6F C0 E3 0E 2D 27 57 9A  .t7@H^K.o...-'W.
0144: C6 52 F9 F0 04 FF C0 A0 62 2B 7C 1C 54 20 BA 7B  .R......b+|.T..{
0160: 9F 62 86 2C 9D A0 80 F8 2D 87 45 34 74 94 20 0A  .b.,....-.E4t...
0176: 00 28 18 04 85 88 1A 7A 0D B1 EE E0 B3 94 99 F6  .(.....z........
0192: 6F DE 3D B9 6A 95 D7 B8                          o.=.j...
..... 17 more bytes .....


type: ChapterLineFeatures (0x1f / 31)
compressed: true
offset: 0x197
size: 124
original size: 75

0000: 04 00 10 00 00 12 10 25 00 22 37 03 04 01 03 04  .......%."7.....
0016: BA 01 0E 00 15 00 00 00 80 02 10 13 00 20 37 03  ..............7.
0032: 10 00 00 20 37 03 10 25 00 20 37 03 10 00 00 20  ....7..%..7.....
0048: 37 03 10 00 00 20 37 03 10 25 00 20 37 03 10 25  7.....7..%..7..%
0064: 00 20 37 03 10 09 00 20 37 03 10 1D 00 20 37 03  ..7.....7.....7.
0080: 10 25 00 20 37 03 10 00 00 20 37 03 10 1D 00 20  .%..7.....7.....
0096: 37 03 10 25 00 20 37 03 10 00 00 22 34 03 01 01  7..%..7...."4...
0112: 06 00 10 25 00 20 34 03 00 20 34 03              ...%..4...4.

type: ChapterLinePointCharacteristics (0x33 / 51)
compressed: false
offset: 0x1e2
size: 36

0000: FF FF 03 06 06 00 01 00 02 00 07 01 00 02 00 09  ................
0016: 01 01 02 00 0D 01 01 02 00 0E 01 01 02 00 10 01  ................
0032: 07 02 00 00                                      ....

type: Unknown (0x7a / 122)
compressed: false
offset: 0x207
size: 18

0000: 1C 00 05 00 01 00 01 01 00 02 01 00 03 01 00 04  ................
0016: 01 00                                            ..
```

#### Special thanks

- "iOS Forensics: VMP4 File format" by Jesse Spangenberger (<a href="https://digitalforensics.io/ios-forensics-vmp4-file-format/">Blog post</a>)

#### Notes

- `cargo` requires a rust installation.
- Most of this inferred from the decompilation by Ghidra, IDA,
  Binary Ninja, Hopper, and Iaito, of the private framework
  GeoServices.framework extracted from the arm64 dyld cache
  of MacOS 14.1 (23B5067a).

#### Known VectorTile Section Types (MacOS 14.1, 23B5067a, arm64)

```rust
0x09 => Vmp4SectionType::ChapterLabels,
0x0a => Vmp4SectionType::ChapterLabelLanguages,
0x0c => Vmp4SectionType::ChapterLabelLocalizations2,
0x13 => Vmp4SectionType::ChapterVertices,
0x1d => Vmp4SectionType::ChapterPointFeatures,
0x1e => Vmp4SectionType::ChapterLineFeatures,
0x1f => Vmp4SectionType::ChapterPolygonFeatures,
0x20 => Vmp4SectionType::ChapterBuildingFeatures,
0x21 => Vmp4SectionType::ChapterCoastlineFeatures,
0x25 => Vmp4SectionType::ChapterWrappingCoastlineFeatures,
0x26 => Vmp4SectionType::ChapterBuildingMeshes,
0x32 => Vmp4SectionType::ChapterLinePointCharacteristics,
0x33 => Vmp4SectionType::ChapterPolygonPointCharacteristics,
0x36 => Vmp4SectionType::ChapterPolygonPointLabelPositions,
0x3b => Vmp4SectionType::ChapterConnectivity,
0x4f => Vmp4SectionType::ChapterGeoIDSegments,
0x59 => Vmp4SectionType::ChapterAddressRanges,
0x5c => Vmp4SectionType::ChapterTileReferences,
0x5f => Vmp4SectionType::ChapterHighResBuildings,
0x63 => Vmp4SectionType::ChapterDebugBlob,
0x64 => Vmp4SectionType::ChapterElevationRaster,
0x65 => Vmp4SectionType::ChapterStyleAttributeRaster,
0x66 => Vmp4SectionType::ChapterDaVinciMetadata,
0x67 => Vmp4SectionType::ChapterLowResBuildings,
0x6f => Vmp4SectionType::ChapterTransitMZROverride,
0x76 => Vmp4SectionType::ChapterCoverage,
0x7f => Vmp4SectionType::ChapterTransitSystems,
0x80 => Vmp4SectionType::ChapterTransitNetwork,
0x86 => Vmp4SectionType::ChapterRoadNetwork,
0x87 => Vmp4SectionType::ChapterVenueMZROverride,
0x88 => Vmp4SectionType::ChapterVenues,
0x89 => Vmp4SectionType::ChapterStorefronts,
0x8a => Vmp4SectionType::ChapterLowResBorderBuildings,
0x8b => Vmp4SectionType::ChapterBorderBuildingMeshes,
0x8c => Vmp4SectionType::ChapterLabelPlacementMetadata,
0x8d => Vmp4SectionType::ChapterDaVinciBuildings,
0x8f => Vmp4SectionType::ChapterPointFeaturesAddendum,
0x90 => Vmp4SectionType::ChapterLinesExtended,
0x91 => Vmp4SectionType::ChapterTrafficSkeleton1,
0x92 => Vmp4SectionType::ChapterDaVinciLandmarks,
0x93 => Vmp4SectionType::ChapterLineWidths1,
0x94 => Vmp4SectionType::ChapterPointLabelAnnotations,
0x96 => Vmp4SectionType::ChapterPOIMzrOverrides,
0x97 => Vmp4SectionType::ChapterTrafficSkeleton2,
0x98 => Vmp4SectionType::ChapterLineWidths2,
0x99 => Vmp4SectionType::ChapterStyleAttributeRaster2,
0x9a => Vmp4SectionType::ChapterMaterialRaster,
0x9b => Vmp4SectionType::ChapterDaVinciAssetMetadata,
0x9c => Vmp4SectionType::ChapterRunningTracks,
0x9d => Vmp4SectionType::ChapterHikingHillShadeRaster,
0x9e => Vmp4SectionType::ChapterLiveFeatures,
0x9f => Vmp4SectionType::ChapterAnnotationLabels,
0xa0 => Vmp4SectionType::ChapterContourLinesFeet,
0xa1 => Vmp4SectionType::ChapterSupplementalFeatureIDs,
0xa3 => Vmp4SectionType::ChapterContourLinesMeters,
0xa4 => Vmp4SectionType::ChapterLiveFeaturesMetadatas,
0xa7 => Vmp4SectionType::ChapterRegionMetadata,
0xa8 => Vmp4SectionType::ChapterCompressedPolygons,
```

#### License

~~ MIT License ~~

Copyright (c) 2022 - 2024 Kenan Sulayman

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
