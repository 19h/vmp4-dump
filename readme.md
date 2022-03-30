<h1 align="center">vmp4-dump</h1>

<h5 align="center">Dumps Apple VMP4 files, used by geod, GeoServices, Maps, and other Apple apps.</h5>

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

```shell script
$ vmp4-dump --verbose --dump tile.vf

file size: 17917
sections: 2

type: ChapterGlobal (1 / 1)
offset: 30
size: 12

0000: C0 01 50 40 E2 49 00                             ..P@.I.

type: ChapterDaVinciBuildings (8e / 142)
offset: 42
size: 17875

0000: 14 00 00 00 0B 00 0B 00 C1 FF FF FF 20 D1 10 27  ...............'
0016: C2 DF 18 45 0B 00 14 00 17 5D 04 00 DC 8C 01 CC  ...E.....]......
0032: FF 00 00 00 01 00 00 00 00 00 18 00 00 00 00 81  ................
0048: 20 35 F3 F8 00 00 0B 55 C7 37 07 20 15 19 C7 37  .5.....U.7.....7
0064: 07 20 20 01 00 00 00 03 F0 10 4E 03 00 00 00 02  ..........N.....
0080: C9 80 03 00 00 00 02 52 60 02 00 00 09 7B FE 30  .......R`....{.0
0096: 00 D3 C0 29 C9 4F 5F 60 F0 63 07 5D C6 79 BD 47  ...).O_`.c.].y.G
0112: 9C 3A 08 D3 AE 52 31 16 41 1D 65 E7 17 A9 75 AE  .:...R1.A.e...u.
0128: 00 F8 BF 67 AD C9 53 AC 14 C4 9E 2F CE C8 2B 4F  ...g..S..../..+O
0144: 23 C0 55 B9 AE 72 52 91 06 4D 24 63 8C 4B A8 BD  #.U..rR..M$c.K..
0160: 0E BF 9E 47 14 6A 67 A1 05 9E 85 18 32 C4 3B D3  ...G.jg.....2.;.
0176: 84 57 29 04 06 A8 3E F7 44 92 60 5A CA BC 1B 74  .W)...>.D.`Z...t
0192: 37 98 4C 23 72 4B 1C 9C                          7.L#rK..
..... 17866 more bytes .....
```

#### Special thanks

- "iOS Forensics: VMP4 File format" by Jesse Spangenberger (<a href="https://digitalforensics.io/ios-forensics-vmp4-file-format/">Blog post</a>)

#### Notes

- `cargo` requires a rust installation.
- Most of this inferred from the decompilation by Ghidra
  of the private framework GeoServices.framework extracted
  from the arm64e dyld cache of MacOS 12.3 (21E230).

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
