
uint32_t geo::codec::_readCompressedPolygons(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    float *pfVar3;
    int32_t iVar4;
    char *pcVar5;
    ulong uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    int32_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    uint32_t uVar19;
    int16_t iVar20;
    uint64_t uVar21;
    int16_t *piVar22;
    int16_t iVar23;
    uint64_t uVar24;
    float fVar25;
    int64_t aiStack_2c8 [3];
    uint32_t uStack_2ac;
    int64_t iStack_2a8;
    int64_t iStack_2a0;
    uchar uStack_291;
    uint64_t uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    int16_t iStack_202;
    ulong auStack_200 [4];
    uchar auStack_1e0 [8];
    int64_t aiStack_1d8 [4];
    int64_t aiStack_1b8 [4];
    int64_t aiStack_198 [4];
    ulong uStack_178;
    uint32_t uStack_16c;
    ulong uStack_168;
    int64_t aiStack_160 [5];
    int64_t aiStack_138 [4];
    int64_t aiStack_118 [3];
    int64_t *piStack_100;
    int64_t aiStack_f8 [3];
    int64_t *piStack_e0;
    int64_t aiStack_d8 [3];
    int64_t *piStack_c0;
    int64_t aiStack_b8 [3];
    int64_t *piStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    
    iVar17 = -0x270;
    uVar9 = param_1[1];
    if (uVar9 != 0) {
        uVar8 = 0;
        piVar1 = *0x8 + -0x118;
        iVar18 = *0x8 + -0x202;
code_r0x000193923cb4:
        if (*(*param_1 + uVar8 * 0x10) != 0xa9) goto code_r0x000193923cc4;
        pcVar5 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                           (param_1, uVar8, 0xa9, *param_2 + 0x778);
        if (pcVar5 == NULL) goto code_r0x000193923d9c;
        *(*0x8 + -0x80) = 0;
        *(*0x8 + -0x78) = 0;
        *(*0x8 + -0x90) = 0;
        *(*0x8 + -0x88) = 0;
        *(*0x8 + -0x98) = 0;
        *(*0x8 + -0xb8) = 0;
        *(*0x8 + -0xb0) = 0;
        *(*0x8 + -0xa8) = 0;
        uVar6 = geo::codec::Allocator::instance()();
        *(*0x8 + -0xa0) = uVar6;
        *(*0x8 + -0xd8) = 0;
        *(*0x8 + -0xd0) = 0;
        *(*0x8 + -200) = 0;
        uVar6 = geo::codec::Allocator::instance()();
        *(*0x8 + -0xc0) = uVar6;
        *(*0x8 + -0xf8) = 0;
        *(*0x8 + -0xf0) = 0;
        *(*0x8 + -0xe8) = 0;
        uVar6 = geo::codec::Allocator::instance()();
        *(*0x8 + -0xe0) = uVar6;
        *(*0x8 + -0x110) = 0;
        *(*0x8 + -0x118) = 0;
        *(*0x8 + -0x108) = 0;
        uVar6 = geo::codec::Allocator::instance()();
        *(*0x8 + -0x100) = uVar6;
        *(*0x8 + -0x130) = 0;
        *(*0x8 + -0x138) = 0;
        *(*0x8 + -0x128) = 0;
        uVar6 = geo::codec::Allocator::instance()();
        *(*0x8 + -0x120) = uVar6;
        uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x74);
        if ((uVar9 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2dec;
code_r0x000193923dfc:
            *(*0x8 + -0x2c8) = uVar10;
            fprintf(uVar6, 0x8ff + 0x193b8a000);
code_r0x000193923e14:
            iVar17 = 0;
            uVar19 = 0;
            goto code_r0x000193923e1c;
        }
        uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x78);
        if ((uVar9 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2ded;
            goto code_r0x000193923dfc;
        }
        uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x7c);
        if ((uVar9 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2dee;
            goto code_r0x000193923dfc;
        }
        uVar9 = *(pcVar5 + 0x30) + 8;
        if (*(pcVar5 + 0x38) <= uVar9 && uVar9 != *(pcVar5 + 0x38)) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2def;
            goto code_r0x000193923dfc;
        }
        *(pcVar5 + 0x30) = uVar9;
        uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x80);
        if ((uVar9 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2df3;
            goto code_r0x000193923dfc;
        }
        *(*0x8 + -0x148) = 0;
        *(*0x8 + -0x150) = 0;
        *(*0x8 + -0x158) = 0;
        *(*0x8 + -0x160) = 0;
        std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::resize(unsigned long)
                  (*0x8 + -0xb8, *(*0x8 + -0x80));
        if (*(*0x8 + -0xb0) - *(*0x8 + -0xb8) >> 1 != *(*0x8 + -0x80)) {
            uVar6 = 0x2df6;
code_r0x000193924310:
            uVar10 = **reloc.__stderrp;
            *(*0x8 + -0x2c8) = uVar6;
            fprintf(uVar10, 0x8ff + 0x193b8a000);
            mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(*0x8 + -0x160);
            goto code_r0x000193923e14;
        }
        uVar9 = bool geo::codec::decodeIntCompressorArray<unsigned short>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned short>*, unsigned int, unsigned int, unsigned long, unsigned short*)
                          (pcVar5, *0x8 + -0x160, *(*0x8 + -0x74), *(*0x8 + -0x78));
        if ((uVar9 & 1) == 0) {
            uVar6 = 0x2df7;
            goto code_r0x000193924310;
        }
        mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(*0x8 + -0x160);
        if (*(*0x8 + -0x80) != *(*param_2 + 0xc28) - *(*param_2 + 0xc20) >> 7) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2dfa;
            goto code_r0x000193923dfc;
        }
        uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x84);
        if ((uVar9 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2dfe;
            goto code_r0x000193923dfc;
        }
        *(*0x8 + -0x148) = 0;
        *(*0x8 + -0x150) = 0;
        *(*0x8 + -0x158) = 0;
        *(*0x8 + -0x160) = 0;
        std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::resize(unsigned long)
                  (*0x8 + -0xd8, *(*0x8 + -0x84));
        if (*(*0x8 + -0xd0) - *(*0x8 + -0xd8) >> 1 != *(*0x8 + -0x84)) {
            uVar6 = 0x2e01;
            goto code_r0x000193924310;
        }
        uVar9 = bool geo::codec::decodeIntCompressorArray<unsigned short>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned short>*, unsigned int, unsigned int, unsigned long, unsigned short*)
                          (pcVar5, *0x8 + -0x160, *(*0x8 + -0x74), *(*0x8 + -0x78));
        if ((uVar9 & 1) == 0) {
            uVar6 = 0x2e02;
            goto code_r0x000193924310;
        }
        mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(*0x8 + -0x160);
        uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x88);
        if ((uVar9 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2e07;
            goto code_r0x000193923dfc;
        }
        *(*0x8 + -0x148) = 0;
        *(*0x8 + -0x150) = 0;
        *(*0x8 + -0x158) = 0;
        *(*0x8 + -0x160) = 0;
        std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::resize(unsigned long)
                  (*0x8 + -0xf8, *(*0x8 + -0x88));
        if (*(*0x8 + -0xf0) - *(*0x8 + -0xf8) >> 1 != *(*0x8 + -0x88)) {
            uVar6 = 0x2e0a;
code_r0x000193924398:
            uVar10 = **reloc.__stderrp;
            *(*0x8 + -0x2c8) = uVar6;
            fprintf(uVar10, 0x8ff + 0x193b8a000);
            mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(*0x8 + -0x160);
code_r0x0001939243c4:
            iVar17 = 0;
            uVar19 = 0;
            iVar18 = *0x8 + -0x202;
            goto code_r0x000193923e1c;
        }
        uVar9 = bool geo::codec::decodeIntCompressorArray<unsigned short>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned short>*, unsigned int, unsigned int, unsigned long, unsigned short*)
                          (pcVar5, *0x8 + -0x160, *(*0x8 + -0x74), *(*0x8 + -0x78));
        if ((uVar9 & 1) == 0) {
            uVar6 = 0x2e0b;
            goto code_r0x000193924398;
        }
        mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(*0x8 + -0x160);
        uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x8c);
        if ((uVar9 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2e10;
code_r0x0001939243e4:
            *(*0x8 + -0x2c8) = uVar10;
            fprintf(uVar6, 0x8ff + 0x193b8a000);
            goto code_r0x0001939243c4;
        }
        *(*0x8 + -0x148) = 0;
        *(*0x8 + -0x150) = 0;
        *(*0x8 + -0x158) = 0;
        *(*0x8 + -0x160) = 0;
        std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::resize(unsigned long)
                  (*0x8 + -0x118, *(*0x8 + -0x8c));
        if (*(*0x8 + -0x110) - *piVar1 >> 1 != *(*0x8 + -0x8c)) {
            uVar6 = 0x2e13;
            goto code_r0x000193924398;
        }
        uVar9 = bool geo::codec::decodeIntCompressorArray<unsigned short>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned short>*, unsigned int, unsigned int, unsigned long, unsigned short*)
                          (pcVar5, *0x8 + -0x160, *(*0x8 + -0x74), *(*0x8 + -0x78));
        if ((uVar9 & 1) == 0) {
            uVar6 = 0x2e14;
            goto code_r0x000193924398;
        }
        mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(*0x8 + -0x160);
        *(*0x8 + -0x148) = 0;
        *(*0x8 + -0x150) = 0;
        *(*0x8 + -0x158) = 0;
        *(*0x8 + -0x160) = 0;
        std::__1::vector<unsigned char, geo::StdAllocator<unsigned char, geo::codec::Allocator> >::resize(unsigned long)
                  (*0x8 + -0x138, *(*0x8 + -0x8c));
        if (*(*0x8 + -0x130) - *(*0x8 + -0x138) != *(*0x8 + -0x8c)) {
            uVar6 = 0x2e1b;
code_r0x00019392441c:
            uVar10 = **reloc.__stderrp;
            *(*0x8 + -0x2c8) = uVar6;
            fprintf(uVar10, 0x8ff + 0x193b8a000);
            mgcl::ints::IntDecompressor<unsigned char>::~IntDecompressor()(*0x8 + -0x160);
            goto code_r0x0001939243c4;
        }
        uVar9 = bool geo::codec::decodeIntCompressorArray<unsigned char>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned char>*, unsigned int, unsigned int, unsigned long, unsigned char*)
                          (pcVar5, *0x8 + -0x160, *(*0x8 + -0x74), *(*0x8 + -0x78));
        if ((uVar9 & 1) == 0) {
            uVar6 = 0x2e1c;
            goto code_r0x00019392441c;
        }
        mgcl::ints::IntDecompressor<unsigned char>::~IntDecompressor()(*0x8 + -0x160);
        uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x90);
        if ((uVar9 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2e1f;
            goto code_r0x0001939243e4;
        }
        *(*0x8 + -0x170) = 0;
        *(*0x8 + -0x178) = 0;
        *(*0x8 + -0x168) = 0;
        mgcl::polyline::Decoder::getPositionsInfo(unsigned char const*, unsigned long, mgcl::polyline::Decoder::PositionsInfo&)
                  (*(pcVar5 + 0x28) + *(pcVar5 + 0x30), *(*0x8 + -0x90), *0x8 + -0x178);
        if (*(*0x8 + -0x164) != 1) {
            uVar10 = 0x2e29;
code_r0x00019392446c:
            uVar6 = **reloc.__stderrp;
            goto code_r0x0001939243e4;
        }
        uVar15 = *(*0x8 + -0x168);
        uVar9 = uVar15;
        if (uVar15 != *(*0x8 + -0x8c)) {
            uVar10 = 0x2e2a;
            goto code_r0x00019392446c;
        }
        uVar19 = *(*0x8 + -0x16c);
        uVar8 = uVar19;
        std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)(*0x8 + -0x160, 1);
        if (*(*0x8 + -0x158) - *(*0x8 + -0x160) != 4) {
            uVar6 = **reloc.__stderrp;
            *(*0x8 + -0x2c8) = 0x2e2d;
            fprintf(uVar6, 0x8ff + 0x193b8a000);
code_r0x00019392450c:
            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()(*0x8 + -0x160)
            ;
            goto code_r0x0001939243c4;
        }
        std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
                  (*0x8 + -0x198, uVar9);
        if (uVar9 != *(*0x8 + -400) - *(*0x8 + -0x198) >> 2) {
            uVar6 = **reloc.__stderrp;
            *(*0x8 + -0x2c8) = 0x2e2f;
            fprintf(uVar6, 0x8ff + 0x193b8a000);
code_r0x000193924504:
            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()(*0x8 + -0x198)
            ;
            goto code_r0x00019392450c;
        }
        uVar21 = uVar19 + uVar19 * 2;
        std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
                  (*0x8 + -0x1b8, uVar21);
        if (uVar21 != *(*0x8 + -0x1b0) - *(*0x8 + -0x1b8) >> 2) {
            uVar6 = **reloc.__stderrp;
            *(*0x8 + -0x2c8) = 0x2e31;
            fprintf(uVar6, 0x8ff + 0x193b8a000);
            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()(*0x8 + -0x1b8)
            ;
            goto code_r0x000193924504;
        }
        std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >::vector(unsigned long)
                  (*0x8 + -0x1d8, uVar8);
        if (uVar8 != *(*0x8 + -0x1d0) - *(*0x8 + -0x1d8) >> 3) {
            uVar6 = **reloc.__stderrp;
            *(*0x8 + -0x2c8) = 0x2e33;
            fprintf(uVar6, 0x8ff + 0x193b8a000);
            iStack_2a0 = 0;
            iVar4 = 6;
            goto code_r0x000193924b9c;
        }
        fcn.1938d6c68(*0x8 + -0x1e0);
        iVar4 = mgcl::polyline::Decoder::decompressPositions(unsigned char const*, unsigned long, unsigned long&, int*, int*, int*)
                          (*0x8 + -0x1e0, *(pcVar5 + 0x28) + *(pcVar5 + 0x30), *(*0x8 + -0x90), *0x8 + -0x98, 
                           *(*0x8 + -0x1b8), *(*0x8 + -0x198), *(*0x8 + -0x160));
        if (iVar4 != 0) {
            uVar6 = **reloc.__stderrp;
            *(*0x8 + -0x2c8) = 0x2e37;
            fprintf(uVar6, 0x8ff + 0x193b8a000);
            iStack_2a0 = 0;
            iVar4 = 6;
            goto code_r0x000193924b94;
        }
        *(pcVar5 + 0x30) = *(pcVar5 + 0x30) + *(*0x8 + -0x90);
        *(*0x8 + -0x1e8) = 0;
        *(*0x8 + -0x1f0) = 0;
        *(*0x8 + -0x1f8) = 0;
        *(*0x8 + -0x200) = 0;
        piVar22 = *0x8 + -0x202;
        uVar21 = bool geo::codec::decodeIntCompressorArray<unsigned long long>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned long long>*, unsigned int, unsigned int, unsigned long, unsigned long long*)
                           (pcVar5, *0x8 + -0x200, *(*0x8 + -0x74), *(*0x8 + -0x78), uVar8, *(*0x8 + -0x1d8));
        if ((uVar21 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2e3c;
code_r0x000193924794:
            *(*0x8 + -0x2c8) = uVar10;
            fprintf(uVar6, 0x8ff + 0x193b8a000);
            iStack_2a0 = 0;
            iVar4 = 6;
            goto code_r0x000193924b8c;
        }
        piVar7 = geo::codec::Allocator::instance()();
        iStack_2a0 = (**(*piVar7 + 0x18))(piVar7, 1, 0x48);
        if (iStack_2a0 == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2e41;
            goto code_r0x000193924794;
        }
        *(iStack_2a0 + 0x10) = uVar8;
        piVar7 = geo::codec::Allocator::instance()();
        iVar18 = (**(*piVar7 + 0x10))(piVar7, uVar8 << 3, 8);
        *(iStack_2a0 + 8) = iVar18;
        if (iVar18 == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2e44;
code_r0x000193924b30:
            *(*0x8 + -0x2c8) = uVar10;
            fprintf(uVar6, 0x8ff + 0x193b8a000);
            iVar4 = 6;
            goto code_r0x000193924b8c;
        }
        piVar7 = geo::codec::Allocator::instance()();
        iVar18 = (**(*piVar7 + 0x10))(piVar7, uVar8 << 2, 8);
        *(iStack_2a0 + 0x18) = iVar18;
        if (iVar18 == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2e46;
            goto code_r0x000193924b30;
        }
        *(iStack_2a0 + 0x28) = uVar9;
        piVar7 = geo::codec::Allocator::instance()();
        iVar18 = (**(*piVar7 + 0x10))(piVar7, uVar9 << 4, 8);
        *(iStack_2a0 + 0x20) = iVar18;
        if (iVar18 == 0) {
            uVar6 = **reloc.__stderrp;
            uVar10 = 0x2e4a;
            goto code_r0x000193924b30;
        }
        if (uVar15 != 0) {
            uVar21 = 0;
            fVar25 = NEON_ucvtf(*(*0x8 + -0x7c));
            fVar25 = 1.0 / fVar25;
            uVar24 = 0;
            do {
                iVar4 = *(*(piVar22 + 0x35) + uVar21 * 4);
                iVar11 = uVar24;
                uVar12 = uVar24;
                if (iVar4 != 0) {
                    iVar18 = *(*0x8 + -0x1d8);
                    piVar22 = *0x8 + -0x202;
                    iVar14 = *(*0x8 + -0x1b8);
                    uVar12 = iVar4 + iVar11;
                    uVar15 = iVar11 * 3;
                    uVar16 = uVar24;
                    do {
                        if ((*(iVar18 + uVar16 * 8) >> 1 & 1) == 0) {
                            pfVar3 = *(iStack_2a0 + 8) + uVar16 * 8;
                            *pfVar3 = fVar25 * *(iVar14 + uVar15 * 4);
                            pfVar3[1] = fVar25 * *(iVar14 + (uVar15 + 1) * 4);
                            *(*(iStack_2a0 + 0x18) + uVar16 * 4) = fVar25 * *(iVar14 + (uVar15 + 2) * 4);
                        }
                        uVar16 = uVar16 + 1;
                        uVar15 = uVar15 + 3;
                        iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                }
                puVar2 = *(iStack_2a0 + 0x20) + uVar21 * 0x10;
                uVar21 = uVar21 + 1;
                *puVar2 = uVar24;
                puVar2[1] = uVar12 - iVar11;
                uVar24 = uVar12;
            } while (uVar21 != uVar9);
        }
        *(*param_2 + 0xc40) = iStack_2a0;
        *piVar22 = 0;
        uVar9 = *(*0x8 + -0x80);
        if (*(*0x8 + -0x80) == 0) goto code_r0x000193924b04;
        aiStack_2c8[2] = 0;
        uVar24 = 0;
        uVar21 = 0;
        uVar12 = 0;
        iVar18 = *(*0x8 + -0xb8);
code_r0x0001939247f8:
        iVar13 = aiStack_2c8[2] * 2;
        iVar14 = *(*param_2 + 0xc20) + aiStack_2c8[2] * 0x80;
        *(iVar14 + 0x18) = *(iVar18 + iVar13);
        if (*(iVar18 + iVar13) != 0) {
            uStack_2ac = 0;
            iStack_2a0 = iVar14 + 0x20;
            iStack_2a8 = iVar14 + 0x40;
            aiStack_2c8[1] = iVar14 + 0x60;
code_r0x000193924834:
            uVar19 = uVar8;
            if (uVar12 < *(*0x8 + -0x84)) {
                if (uVar21 <= *(*0x8 + -0x88) && *(*0x8 + -0x88) != uVar21) {
                    iVar20 = *(*(*0x8 + -0xd8) + uVar12 * 2);
                    *piVar22 = iVar20;
                    iVar23 = *(*(*0x8 + -0xf8) + uVar21 * 2);
                    uStack_230 = 0;
                    uStack_228 = 0;
                    uStack_220 = 0;
                    uStack_218 = geo::codec::Allocator::instance()();
                    std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::reserve(unsigned long)
                              (*0x8 + -0x230, iVar23);
                    uStack_250 = 0;
                    uStack_248 = 0;
                    uStack_240 = 0;
                    uStack_238 = geo::codec::Allocator::instance()();
                    std::__1::vector<bool, geo::StdAllocator<bool, geo::codec::Allocator> >::reserve(unsigned long)
                              (*0x8 + -0x250, iVar23);
                    uVar21 = uVar21 + 1;
                    if (iVar23 != 0) {
                        uVar8 = uVar24 << 1;
                        do {
                            if (*(*0x8 + -0x8c) <= uVar24) {
                                uVar24 = uVar24 & 0xffffffff;
                                uVar6 = **reloc.__stderrp;
                                aiStack_2c8[0] = 0x2e7a;
                                goto code_r0x000193924a90;
                            }
                            std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::push_back[abi:v160006](unsigned short const&)
                                      (*0x8 + -0x230, *piVar1 + uVar8);
                            (&stack0x00000000)[-0x270] = *(*(piVar22 + 0x65) + uVar24) != '\0';
                            std::__1::vector<bool, geo::StdAllocator<bool, geo::codec::Allocator> >::push_back(bool const&)
                                      (*0x8 + -0x250, &stack0x00000000 + iVar17);
                            uVar24 = uVar24 + 1;
                            iVar23 = iVar23 + -1;
                            uVar8 = uVar8 + 2;
                        } while (iVar23 != 0);
                        uVar24 = uVar24 & 0xffffffff;
                    }
                    std::__1::vector<std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >, geo::StdAllocator<std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >, geo::codec::Allocator> >::push_back[abi:v160006](std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >&&)
                              (iStack_2a0, *0x8 + -0x230);
                    fcn.193938048(iStack_2a8, *0x8 + -0x250);
                    iVar20 = iVar20 + -1;
                    *piVar22 = iVar20;
                    std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::push_back[abi:v160006](unsigned short const&)
                              (aiStack_2c8[1], *0x8 + -0x202);
code_r0x000193924974:
                    if (iVar20 != 0) {
                        if (uVar21 < *(*0x8 + -0x88)) goto code_r0x000193924988;
                        *piVar22 = iVar20;
                        uVar21 = uVar21 & 0xffffffff;
                        uVar6 = **reloc.__stderrp;
                        aiStack_2c8[0] = 0x2e88;
code_r0x000193924a90:
                        fprintf(uVar6, 0x8ff + 0x193b8a000);
                        iVar4 = 6;
                        goto code_r0x000193924ab0;
                    }
                    iVar20 = 0;
                    iVar4 = 0;
                    goto code_r0x000193924a54;
                }
                aiStack_2c8[0] = 0x2e6f;
            }
            else {
                aiStack_2c8[0] = 0x2e6e;
            }
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            iVar4 = 6;
            goto code_r0x000193924b88;
        }
        goto code_r0x000193924af0;
    }
code_r0x000193923d9c:
    uVar19 = 1;
    goto code_r0x000193923da0;
code_r0x000193923cc4:
    uVar8 = uVar8 + 1;
    if (uVar9 < uVar8 || uVar9 == uVar8) goto code_r0x000193923d9c;
    goto code_r0x000193923cb4;
code_r0x000193924988:
    iVar23 = *(*(*0x8 + -0xf8) + uVar21 * 2);
    *(&stack0x00000000 + -0x270) = 0;
    *(&stack0x00000000 + -0x268) = 0;
    uStack_260 = 0;
    uStack_258 = geo::codec::Allocator::instance()();
    std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::reserve(unsigned long)
              (&stack0x00000000 + iVar17, iVar23);
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_278 = geo::codec::Allocator::instance()();
    std::__1::vector<bool, geo::StdAllocator<bool, geo::codec::Allocator> >::reserve(unsigned long)
              (*0x8 + -0x290, iVar23);
    if (iVar23 != 0) {
        iVar18 = uVar24 << 1;
        do {
            if (*(*0x8 + -0x8c) <= uVar24) {
                uVar24 = uVar24 & 0xffffffff;
                uVar6 = **reloc.__stderrp;
                *(*0x8 + -0x2c8) = 0x2e90;
                fprintf(uVar6, 0x8ff + 0x193b8a000);
                uVar8 = 0;
                iVar4 = 6;
                goto code_r0x00019392495c;
            }
            std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::push_back[abi:v160006](unsigned short const&)
                      (&stack0x00000000 + iVar17, *piVar1 + iVar18);
            uStack_291 = *(*(piVar22 + 0x65) + uVar24) != '\0';
            std::__1::vector<bool, geo::StdAllocator<bool, geo::codec::Allocator> >::push_back(bool const&)
                      (*0x8 + -0x290, *0x8 + -0x291);
            uVar24 = uVar24 + 1;
            iVar23 = iVar23 + -1;
            iVar18 = iVar18 + 2;
        } while (iVar23 != 0);
        uVar24 = uVar24 & 0xffffffff;
    }
    std::__1::vector<std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >, geo::StdAllocator<std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >, geo::codec::Allocator> >::push_back[abi:v160006](std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >&&)
              (iStack_2a0, &stack0x00000000 + iVar17);
    fcn.193938048(iStack_2a8, *0x8 + -0x290);
    iVar4 = 0;
    iVar20 = iVar20 + -1;
    uVar8 = 1;
code_r0x00019392495c:
    uVar21 = uVar21 + 1;
    std::__1::vector<bool, geo::StdAllocator<bool, geo::codec::Allocator> >::~vector[abi:v160006]()(*0x8 + -0x290);
    std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::~vector[abi:v160006]()
              (&stack0x00000000 + iVar17);
    if (uVar8 == 0) goto code_r0x000193924a54;
    goto code_r0x000193924974;
code_r0x000193924a54:
    *piVar22 = iVar20;
    uVar21 = uVar21 & 0xffffffff;
code_r0x000193924ab0:
    uVar19 = uVar8;
    std::__1::vector<bool, geo::StdAllocator<bool, geo::codec::Allocator> >::~vector[abi:v160006]()(*0x8 + -0x250);
    std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::~vector[abi:v160006]()
              (*0x8 + -0x230);
    if (iVar4 != 0) goto code_r0x000193924b88;
    uVar12 = uVar12 + 1;
    uStack_2ac = uStack_2ac + 1;
    iVar18 = *(*0x8 + -0xb8);
    if (*(iVar18 + aiStack_2c8[2] * 2) <= uStack_2ac) goto code_r0x000193924ae8;
    goto code_r0x000193924834;
code_r0x000193924ae8:
    uVar12 = uVar12 & 0xffffffff;
    uVar9 = *(*0x8 + -0x80);
code_r0x000193924af0:
    uVar19 = uVar8;
    aiStack_2c8[2] = aiStack_2c8[2] + 1;
    if (uVar9 <= aiStack_2c8[2]) goto code_r0x000193924b04;
    goto code_r0x0001939247f8;
code_r0x000193924b04:
    iVar4 = 0;
code_r0x000193924b88:
    iStack_2a0 = 0;
code_r0x000193924b8c:
    mgcl::ints::IntDecompressor<unsigned long long>::~IntDecompressor()(*0x8 + -0x200);
code_r0x000193924b94:
    mgcl::polyline::Decoder::~Decoder()(*0x8 + -0x1e0);
code_r0x000193924b9c:
    std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >::~vector[abi:v160006]()
              (*0x8 + -0x1d8);
    std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()(*0x8 + -0x1b8);
    std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()(*0x8 + -0x198);
    std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()(*0x8 + -0x160);
    if (iVar4 == 6) {
code_r0x000193924e70:
        uVar19 = 0;
        iVar17 = iStack_2a0;
        iVar18 = *0x8 + -0x202;
code_r0x000193923e1c:
        if (*pcVar5 != '\0') {
            piVar7 = geo::codec::Allocator::instance()();
            (**(*piVar7 + 0x28))(piVar7, *(pcVar5 + 0x28), 0);
        }
        piVar7 = geo::codec::Allocator::instance()();
        (**(*piVar7 + 0x28))(piVar7, pcVar5, 0);
        if ((uVar19 == 0) && (iVar17 != 0)) {
            geo::codec::VertexPoolDealloc(GeoCodecsVertexPool*)(iVar17);
        }
    }
    else {
        iVar18 = *0x8 + -0x202;
        if (iVar4 == 0) {
            uStack_290 = (uStack_290 >> 0x20) << 0x20;
            *(*0x8 + -0x178) = 0;
            *(*0x8 + -0x158) = 0;
            *(*0x8 + -0x160) = 0;
            *(*0x8 + -0x150) = 0;
            uVar6 = geo::codec::Allocator::instance()();
            *(*0x8 + -0x148) = uVar6;
            *(*0x8 + -400) = 0;
            *(*0x8 + -0x198) = 0;
            *(*0x8 + -0x188) = 0;
            uVar6 = geo::codec::Allocator::instance()();
            *(*0x8 + -0x180) = uVar6;
            *(*0x8 + -0x1b0) = 0;
            *(*0x8 + -0x1b8) = 0;
            *(*0x8 + -0x1a8) = 0;
            uVar6 = geo::codec::Allocator::instance()();
            *(*0x8 + -0x1a0) = uVar6;
            *(*0x8 + -0x1d0) = 0;
            *(*0x8 + -0x1d8) = 0;
            *(*0x8 + -0x1c8) = 0;
            uVar6 = geo::codec::Allocator::instance()();
            *(*0x8 + -0x1c0) = uVar6;
            uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x290);
            if ((uVar9 & 1) == 0) {
                uVar6 = **reloc.__stderrp;
                uVar10 = 0x2ea7;
code_r0x000193924e18:
                *(*0x8 + -0x2c8) = uVar10;
                fprintf(uVar6, 0x8ff + 0x193b8a000);
                iVar4 = 6;
            }
            else {
                uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x178);
                if ((uVar9 & 1) == 0) {
                    uVar6 = **reloc.__stderrp;
                    uVar10 = 0x2ea8;
                    goto code_r0x000193924e18;
                }
                std::__1::vector<unsigned char, geo::StdAllocator<unsigned char, geo::codec::Allocator> >::resize(unsigned long)
                          (*0x8 + -0x160, uStack_290);
                if (*(*0x8 + -0x158) - *(*0x8 + -0x160) != uStack_290) {
                    uVar6 = **reloc.__stderrp;
                    uVar10 = 0x2eab;
                    goto code_r0x000193924e18;
                }
                std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::resize(unsigned long)
                          (*0x8 + -0x198, *(*0x8 + -0x178));
                if (*(*0x8 + -400) - *(*0x8 + -0x198) >> 1 != *(*0x8 + -0x178)) {
                    uVar6 = **reloc.__stderrp;
                    uVar10 = 0x2ead;
                    goto code_r0x000193924e18;
                }
                std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::resize(unsigned long)
                          (*0x8 + -0x1b8);
                if (*(*0x8 + -0x178) != *(*0x8 + -0x1b0) - *(*0x8 + -0x1b8) >> 2) {
                    uVar6 = **reloc.__stderrp;
                    uVar10 = 0x2eaf;
                    goto code_r0x000193924e18;
                }
                std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::resize(unsigned long)
                          (*0x8 + -0x1d8, *(*0x8 + -0x80));
                if (*(*0x8 + -0x80) != *(*0x8 + -0x1d0) - *(*0x8 + -0x1d8) >> 1) {
                    uVar6 = **reloc.__stderrp;
                    uVar10 = 0x2eb1;
                    goto code_r0x000193924e18;
                }
                *(*0x8 + -0x1e8) = 0;
                *(*0x8 + -0x1f0) = 0;
                *(*0x8 + -0x1f8) = 0;
                *(*0x8 + -0x200) = 0;
                uVar9 = bool geo::codec::decodeIntCompressorArray<unsigned char>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned char>*, unsigned int, unsigned int, unsigned long, unsigned char*)
                                  (pcVar5, *0x8 + -0x200, *(*0x8 + -0x74), *(*0x8 + -0x78), uStack_290, *(*0x8 + -0x160)
                                  );
                if ((uVar9 & 1) == 0) {
                    uVar6 = **reloc.__stderrp;
                    *(*0x8 + -0x2c8) = 0x2eb4;
                    fprintf(uVar6, 0x8ff + 0x193b8a000);
                    iVar4 = 6;
                }
                else {
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_218 = 0;
                    uStack_220 = 0;
                    uVar9 = bool geo::codec::decodeIntCompressorArray<unsigned short>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned short>*, unsigned int, unsigned int, unsigned long, unsigned short*)
                                      (pcVar5, *0x8 + -0x230, *(*0x8 + -0x74), *(*0x8 + -0x78), *(*0x8 + -0x178), 
                                       *(*0x8 + -0x198));
                    if ((uVar9 & 1) == 0) {
                        uVar6 = **reloc.__stderrp;
                        *(*0x8 + -0x2c8) = 0x2eb7;
                        fprintf(uVar6, 0x8ff + 0x193b8a000);
                        iVar4 = 6;
                    }
                    else {
                        uStack_248 = 0;
                        uStack_250 = 0;
                        uStack_238 = 0;
                        uStack_240 = 0;
                        uVar9 = bool geo::codec::decodeIntCompressorArray<unsigned int>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned int>*, unsigned int, unsigned int, unsigned long, unsigned int*)
                                          (pcVar5, *0x8 + -0x250, *(*0x8 + -0x74), *(*0x8 + -0x78), *(*0x8 + -0x178), 
                                           *(*0x8 + -0x1b8));
                        if ((uVar9 & 1) == 0) {
                            uVar6 = **reloc.__stderrp;
                            *(*0x8 + -0x2c8) = 0x2eba;
                            fprintf(uVar6, 0x8ff + 0x193b8a000);
                            iVar4 = 6;
                        }
                        else {
                            *(&stack0x00000000 + -0x268) = 0;
                            *(&stack0x00000000 + -0x270) = 0;
                            *(&stack0x00000000 + -600) = 0;
                            *(&stack0x00000000 + -0x260) = 0;
                            uVar9 = bool geo::codec::decodeIntCompressorArray<unsigned short>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned short>*, unsigned int, unsigned int, unsigned long, unsigned short*)
                                              (pcVar5, &stack0x00000000 + iVar17, *(*0x8 + -0x74), *(*0x8 + -0x78), 
                                               *(*0x8 + -0x80), *(*0x8 + -0x1d8));
                            if ((uVar9 & 1) == 0) {
                                uVar6 = **reloc.__stderrp;
                                *(*0x8 + -0x2c8) = 0x2ebd;
                                fprintf(uVar6, 0x8ff + 0x193b8a000);
                                iVar4 = 6;
                            }
                            else {
                                iVar4 = 0;
                            }
                            mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(&stack0x00000000 + iVar17);
                        }
                        mgcl::ints::IntDecompressor<unsigned int>::~IntDecompressor()(*0x8 + -0x250);
                    }
                    mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(*0x8 + -0x230);
                }
                mgcl::ints::IntDecompressor<unsigned char>::~IntDecompressor()(*0x8 + -0x200);
            }
            std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::~vector[abi:v160006]()
                      (*0x8 + -0x1d8);
            std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::~vector[abi:v160006]()
                      (*0x8 + -0x1b8);
            std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::~vector[abi:v160006]()
                      (*0x8 + -0x198);
            std::__1::vector<unsigned char, geo::StdAllocator<unsigned char, geo::codec::Allocator> >::~vector[abi:v160006]()
                      (*0x8 + -0x160);
            if (iVar4 == 6) goto code_r0x000193924e70;
            iVar17 = iStack_2a0;
            iVar18 = *0x8 + -0x202;
            if (iVar4 != 0) goto code_r0x000193923e94;
            uVar19 = 1;
            goto code_r0x000193923e1c;
        }
    }
code_r0x000193923e94:
    iVar17 = *(iVar18 + 0xca);
    if (iVar17 != 0) {
        *(iVar18 + 0xd2) = iVar17;
        (**(**(iVar18 + 0xe2) + 0x28))(*(iVar18 + 0xe2), iVar17, *(iVar18 + 0xda) - iVar17);
    }
    iVar17 = *piVar1;
    if (iVar17 != 0) {
        *(*0x8 + -0x110) = iVar17;
        (**(**(*0x8 + -0x100) + 0x28))(*(*0x8 + -0x100), iVar17, *(*0x8 + -0x108) - iVar17);
    }
    iVar17 = *(*0x8 + -0xf8);
    if (iVar17 != 0) {
        *(*0x8 + -0xf0) = iVar17;
        (**(**(*0x8 + -0xe0) + 0x28))(*(*0x8 + -0xe0), iVar17, *(*0x8 + -0xe8) - iVar17);
    }
    iVar17 = *(*0x8 + -0xd8);
    if (iVar17 != 0) {
        *(*0x8 + -0xd0) = iVar17;
        (**(**(*0x8 + -0xc0) + 0x28))(*(*0x8 + -0xc0), iVar17, *(*0x8 + -200) - iVar17);
    }
    iVar17 = *(*0x8 + -0xb8);
    if (iVar17 != 0) {
        *(*0x8 + -0xb0) = iVar17;
        (**(**(*0x8 + -0xa0) + 0x28))(*(*0x8 + -0xa0), iVar17, *(*0x8 + -0xa8) - iVar17);
    }
code_r0x000193923da0:
    return uVar19 & 1;
}
