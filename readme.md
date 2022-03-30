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
