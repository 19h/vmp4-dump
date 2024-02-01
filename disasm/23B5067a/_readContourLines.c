
uint32_t geo::codec::_readContourLines(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&, GeoCodecsContourLineUnits)
                   (int64_t *param_1, int64_t *param_2, uint32_t param_3)

{
    uint16_t uVar1;
    int32_t iVar2;
    char cVar3;
    uint *puVar4;
    int64_t iVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    uint *puVar9;
    uint *puVar10;
    uint *puVar11;
    uint *puVar12;
    uint *puVar13;
    float *pfVar14;
    int64_t iVar15;
    int32_t iVar16;
    char *pcVar17;
    ulong uVar18;
    int64_t *piVar19;
    uint64_t uVar20;
    int16_t iVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    ulong uVar24;
    ulong *puVar25;
    ulong *puVar26;
    int64_t iVar27;
    int64_t iVar28;
    int64_t iVar29;
    int64_t iVar30;
    int64_t iVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    uint16_t uVar34;
    uint64_t uVar35;
    int64_t iVar36;
    int64_t iVar37;
    uint64_t uVar38;
    uint64_t uVar39;
    float fVar40;
    uchar auVar41 [16];
    uchar auVar42 [16];
    uchar auVar43 [16];
    uchar auVar44 [16];
    uint uVar45;
    uint uVar46;
    uint uVar47;
    uint uVar48;
    int64_t aiStack_208 [4];
    int64_t iStack_1e8;
    int64_t iStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [16];
    uint32_t uStack_1c0;
    uint uStack_1bc;
    int64_t iStack_1b8;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    int64_t iStack_140;
    int64_t iStack_138;
    ulong uStack_130;
    ulong uStack_128;
    int64_t iStack_120;
    int64_t iStack_118;
    ulong uStack_110;
    ulong uStack_108;
    int64_t iStack_f8;
    int64_t iStack_f0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    
    iVar15 = -0x1a0;
    iVar21 = 0xa1;
    if (param_3 != 0) {
        iVar21 = 0xa4;
    }
    uVar23 = param_1[1];
    if (uVar23 != 0) {
        uVar20 = 0;
        do {
            if (*(*param_1 + uVar20 * 0x10) == iVar21) {
                pcVar17 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    ();
                if (pcVar17 != NULL) {
                    iVar37 = *param_2;
                    iVar31 = iVar37 + 0xbb0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    iVar36 = 0xbb0;
                    if (param_3 != 0) {
                        iVar36 = 0xbe0;
                        iVar31 = iVar37 + 0xbe0;
                    }
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar17, *0x8 + -0x7c);
                    if ((uVar23 & 1) == 0) {
                        uVar18 = **reloc.__stderrp;
                        uVar24 = 0x64f;
code_r0x000193921360:
                        *(*0x8 + -0x208) = uVar24;
                        fprintf(uVar18, 0x8ff + 0x193b8a000);
                    }
                    else {
                        uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar17, *0x8 + -0x80);
                        if ((uVar23 & 1) == 0) {
                            uVar18 = **reloc.__stderrp;
                            uVar24 = 0x650;
                            goto code_r0x000193921360;
                        }
                        uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar17, *0x8 + -0x84);
                        if ((uVar23 & 1) == 0) {
                            uVar18 = **reloc.__stderrp;
                            uVar24 = 0x651;
                            goto code_r0x000193921360;
                        }
                        if ((uStack_88._4_4_ & 1) != param_3) {
                            uVar18 = **reloc.__stderrp;
                            uVar24 = 0x655;
                            goto code_r0x000193921360;
                        }
                        uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar17, *0x8 + -0x88);
                        if ((uVar23 & 1) == 0) {
                            uVar18 = **reloc.__stderrp;
                            uVar24 = 0x658;
                            goto code_r0x000193921360;
                        }
                        uVar23 = *(pcVar17 + 0x30) + 8;
                        if (*(pcVar17 + 0x38) <= uVar23 && uVar23 != *(pcVar17 + 0x38)) {
                            uVar18 = **reloc.__stderrp;
                            uVar24 = 0x659;
                            goto code_r0x000193921360;
                        }
                        *(pcVar17 + 0x30) = uVar23;
                        uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar17, *0x8 + -0x8c);
                        if ((uVar23 & 1) == 0) {
                            uVar18 = **reloc.__stderrp;
                            uVar24 = 0x65a;
                            goto code_r0x000193921360;
                        }
                        *(iVar31 + 0x28) = uStack_88;
                        uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar17, *0x8 + -0x98);
                        if ((uVar23 & 1) == 0) {
                            uVar18 = **reloc.__stderrp;
                            uVar24 = 0x65d;
                            goto code_r0x000193921360;
                        }
                        uVar23 = uStack_98;
                        fcn.1938d6c68(*0x8 + -0x180);
                        uStack_160 = 0;
                        uStack_158 = 0;
                        uStack_150 = 0;
                        mgcl::polyline::Decoder::getPositionsInfo(unsigned char const*, unsigned long, mgcl::polyline::Decoder::PositionsInfo&)
                                  (*(pcVar17 + 0x28) + *(pcVar17 + 0x30), uVar23, *0x8 + -0x160);
                        uVar32 = uStack_150;
                        uVar35 = uVar32;
                        uVar20 = uStack_150._4_4_;
                        uVar33 = uStack_158._4_4_;
                        uVar39 = uVar33;
                        std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
                                  (*0x8 + -0xb8, uVar35);
                        if (uVar35 != iStack_b0 - iStack_b8 >> 2) {
                            uVar18 = **reloc.__stderrp;
                            *(*0x8 + -0x208) = 0x66a;
                            fprintf(uVar18, 0x8ff + 0x193b8a000);
                        }
                        else {
                            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
                                      (*0x8 + -0xd8, uVar20);
                            if (uVar20 == iStack_d0 - iStack_d8 >> 2) {
                                iStack_1e8 = iVar37;
                                iStack_1e0 = iVar36;
                                *(&stack0x00000000 + -0x1a0) = 0;
                                uVar38 = uVar33 + uVar33 * 2;
                                std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
                                          (*0x8 + -0xf8, uVar38);
                                uStack_1d8 = uVar20;
                                if (uVar38 != iStack_f0 - iStack_f8 >> 2) {
                                    uVar18 = **reloc.__stderrp;
                                    uVar24 = 0x670;
code_r0x0001939215a8:
                                    *(*0x8 + -0x208) = uVar24;
                                    fprintf(uVar18, 0x8ff + 0x193b8a000);
                                    iVar31 = 0;
                                }
                                else {
                                    aiStack_208[3] = iVar31;
                                    iVar16 = mgcl::polyline::Decoder::decompressPositions(unsigned char const*, unsigned long, unsigned long&, int*, int*, int*)
                                                       (*0x8 + -0x180, *(pcVar17 + 0x28) + *(pcVar17 + 0x30), uVar23, 
                                                        &stack0x00000000 + iVar15, iStack_f8, iStack_b8, iStack_d8);
                                    if (iVar16 != 0) {
                                        uVar18 = **reloc.__stderrp;
                                        uVar24 = 0x671;
                                        goto code_r0x0001939215a8;
                                    }
                                    *(pcVar17 + 0x30) = *(pcVar17 + 0x30) + uVar23;
                                    piVar19 = geo::codec::Allocator::instance()();
                                    iVar31 = (**(*piVar19 + 0x18))(piVar19, 1, 0x48);
                                    if (iVar31 == 0) {
                                        uVar18 = **reloc.__stderrp;
                                        uVar24 = 0x677;
                                    }
                                    else {
                                        *(iVar31 + 0x10) = uVar39;
                                        piVar19 = geo::codec::Allocator::instance()();
                                        iVar36 = (**(*piVar19 + 0x10))(piVar19, uVar39 << 3, 8);
                                        *(iVar31 + 8) = iVar36;
                                        if (iVar36 == 0) {
                                            uVar18 = **reloc.__stderrp;
                                            uVar24 = 0x67a;
                                        }
                                        else {
                                            *(iVar31 + 0x28) = uVar35;
                                            piVar19 = geo::codec::Allocator::instance()();
                                            aiStack_208[2] = uVar35 << 4;
                                            iVar36 = (**(*piVar19 + 0x10))(piVar19, aiStack_208[2], 8);
                                            *(iVar31 + 0x20) = iVar36;
                                            if (iVar36 != 0) {
                                                if (uVar33 != 0) {
                                                    fVar40 = NEON_ucvtf(uStack_88);
                                                    iVar36 = *(iVar31 + 8);
                                                    fVar40 = 1.0 / fVar40;
                                                    if (uVar33 < 9) {
                                                        iVar30 = 0;
                                                        iVar28 = 0;
                                                    }
                                                    else {
                                                        uVar23 = 8;
                                                        if ((uVar33 & 7) != 0) {
                                                            uVar23 = uVar39 & 7;
                                                        }
                                                        iVar28 = uVar39 - uVar23;
                                                        iVar30 = iVar28 * 3;
                                                        iVar37 = iVar36 + 0x20;
                                                        iVar29 = iStack_f8;
                                                        iVar27 = iVar28;
                                                        do {
                                                            tmp_ldXn = iVar29;
                                                            puVar4 = tmp_ldXn;
                                                            auVar41._0_4_ = *puVar4;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar4 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            uVar18 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar6 = tmp_ldXn;
                                                            auVar41._4_4_ = *puVar6;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar6 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            uVar18 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar7 = tmp_ldXn;
                                                            auVar41._8_4_ = *puVar7;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar7 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            uVar18 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar8 = tmp_ldXn;
                                                            auVar41._12_4_ = *puVar8;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar8 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            uVar18 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            uVar18 = tmp_ldXn;
                                                            auVar43 = NEON_scvtf(auVar41, 4);
                                                            tmp_ldXn = uVar18;
                                                            puVar9 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar10 = tmp_ldXn;
                                                            uVar45 = *puVar10;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            uVar18 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar10 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar11 = tmp_ldXn;
                                                            uVar46 = *puVar11;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            uVar18 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar11 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar12 = tmp_ldXn;
                                                            uVar47 = *puVar12;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            uVar18 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar12 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar13 = tmp_ldXn;
                                                            uVar48 = *puVar13;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            uVar18 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            auVar44._4_4_ = *puVar10;
                                                            auVar44._0_4_ = *puVar9;
                                                            auVar44._8_4_ = *puVar11;
                                                            auVar44._12_4_ = *puVar12;
                                                            auVar44 = NEON_scvtf(auVar44, 4);
                                                            auVar42._4_4_ = *puVar6;
                                                            auVar42._0_4_ = *puVar4;
                                                            auVar42._8_4_ = *puVar7;
                                                            auVar42._12_4_ = *puVar8;
                                                            auVar42 = NEON_scvtf(auVar42, 4);
                                                            tmp_ldXn = iVar37 + -0x20;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar43._0_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar42._0_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar43._4_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar42._4_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar43._8_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar42._8_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar43._12_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar42._12_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            auVar43._4_4_ = uVar46;
                                                            auVar43._0_4_ = uVar45;
                                                            auVar43._8_4_ = uVar47;
                                                            auVar43._12_4_ = uVar48;
                                                            auVar42 = NEON_scvtf(auVar43, 4);
                                                            tmp_ldXn = iVar37;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar44._0_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar42._0_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar44._4_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar42._4_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar44._8_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar42._8_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar44._12_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            pfVar14 = tmp_ldXn;
                                                            *pfVar14 = auVar42._12_4_ * fVar40;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            iVar37 = iVar37 + 0x40;
                                                            iVar29 = iVar29 + 0x60;
                                                            iVar27 = iVar27 + -8;
                                                        } while (iVar27 != 0);
                                                    }
                                                    iVar37 = uVar39 - iVar28;
                                                    puVar25 = iVar36 + iVar28 * 8;
                                                    puVar26 = iStack_f8 + iVar30 * 4;
                                                    do {
                                                        uVar18 = NEON_scvtf(*puVar26, 4);
                                                        *puVar25 = CONCAT44((uVar18 >> 0x20) * fVar40, uVar18 * fVar40);
                                                        iVar37 = iVar37 + -1;
                                                        puVar25 = puVar25 + 1;
                                                        puVar26 = puVar26 + 0xc;
                                                    } while (iVar37 != 0);
                                                }
                                                iStack_118 = 0;
                                                iStack_120 = 0;
                                                uStack_108 = 0;
                                                uStack_110 = 0;
                                                std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
                                                          (*0x8 + -0x140, uStack_1d8);
                                                if (uStack_1d8 != iStack_138 - iStack_140 >> 2) {
                                                    uVar18 = **reloc.__stderrp;
                                                    uVar24 = 0x68c;
code_r0x000193921b64:
                                                    *(*0x8 + -0x208) = uVar24;
                                                    fprintf(uVar18, 0x8ff + 0x193b8a000);
                                                    iVar16 = 6;
                                                }
                                                else {
                                                    uVar23 = 
                                                            bool geo::codec::decodeIntCompressorArray<int>(VMP4Chapter*, mgcl::ints::IntDecompressor<int>*, unsigned int, unsigned int, unsigned long, int*)
                                                                      (pcVar17, *0x8 + -0x120, uStack_80._4_4_, 
                                                                       uStack_80, uStack_1d8);
                                                    if ((uVar23 & 1) == 0) {
                                                        uVar18 = **reloc.__stderrp;
                                                        uVar24 = 0x68d;
                                                        goto code_r0x000193921b64;
                                                    }
                                                    std::__1::vector<GeoCodecsContourLinesFeature, geo::StdAllocator<GeoCodecsContourLinesFeature, geo::codec::Allocator> >::resize(unsigned long)
                                                              (aiStack_208[3], uStack_1d8);
                                                    if ((*(aiStack_208[3] + 8) - *(iStack_1e8 + iStack_1e0) >> 4) *
                                                        (0xaaaaaaaaaaaa0000 | 0xaaab) - uStack_1d8 != 0) {
                                                        uVar18 = **reloc.__stderrp;
                                                        uVar24 = 0x691;
                                                        goto code_r0x000193921b64;
                                                    }
                                                    fVar40 = 0x126f | 0x40430000;
                                                    if (param_3 != 0) {
                                                        fVar40 = 10.0;
                                                    }
                                                    piVar19 = param_2;
                                                    if (uStack_1d8 != 0) {
                                                        iVar37 = 0;
                                                        iVar36 = 0;
                                                        iVar16 = 0;
                                                        uVar23 = uStack_1d8;
                                                        do {
                                                            iVar27 = *(iStack_1e8 + iStack_1e0);
                                                            iVar29 = *param_2;
                                                            iVar30 = param_2[1];
                                                            if (iVar30 != 0) {
                                                                tmp_ldXn = *(iVar30 + 0x10);
                                                                iVar28 = tmp_ldXn;
                                                                tmp_stXn = iVar28 + 1;
                                                                uVar18 = tmp_stXn;
                                                                *(iVar30 + 0x10) = uVar18;
                                                                uVar18 = tmp_ldXn;
                                                            }
                                                            piVar19 = iVar27 + iVar36;
                                                            iVar27 = piVar19[1];
                                                            *piVar19 = iVar29;
                                                            piVar19[1] = iVar30;
                                                            if (iVar27 != 0) {
                                                                std::__1::__shared_weak_count::__release_weak()();
                                                            }
                                                            *(piVar19 + 3) = fVar40 * *(iStack_140 + iVar37);
                                                            uVar22 = *(iStack_140 + iVar37);
                                                            uVar33 = 0;
                                                            if (uStack_90._4_4_ != 0) {
                                                                uVar33 = uVar22 / uStack_90._4_4_;
                                                            }
                                                            *(piVar19 + 0x1c) = uVar22 - uVar33 * uStack_90._4_4_ == 0;
                                                            *(piVar19 + 2) = iVar16;
                                                            iVar2 = *(iStack_d8 + iVar37);
                                                            *(piVar19 + 0x14) = iVar2;
                                                            *(piVar19 + 0x1d) = param_3;
                                                            iVar16 = iVar2 + iVar16;
                                                            iVar36 = iVar36 + 0x30;
                                                            iVar37 = iVar37 + 4;
                                                        } while (uVar23 * 0x30 - iVar36 != 0);
                                                    }
                                                    if (uVar32 != 0) {
                                                        iVar37 = 0;
                                                        iVar36 = 0;
                                                        uVar23 = 0;
                                                        iVar30 = *(iVar31 + 0x20);
                                                        do {
                                                            iVar16 = *(iStack_b8 + iVar37);
                                                            *(iVar30 + iVar36) = uVar23 & 0xffffffff;
                                                            (iVar30 + iVar36)[1] = iVar16;
                                                            iVar30 = *(iVar31 + 0x20);
                                                            uVar23 = *(iVar30 + iVar36 + 8) + (uVar23 & 0xffffffff);
                                                            iVar36 = iVar36 + 0x10;
                                                            iVar37 = iVar37 + 4;
                                                        } while (aiStack_208[2] != iVar36);
                                                    }
                                                    iVar16 = 0;
                                                    *(aiStack_208[3] + 0x20) = iVar31;
                                                    iVar31 = 0;
                                                    param_2 = piVar19;
                                                }
                                                std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                          (*0x8 + -0x140);
                                                mgcl::ints::IntDecompressor<int>::~IntDecompressor()(*0x8 + -0x120);
code_r0x0001939215c8:
                                                uVar32 = param_2;
                                                std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                          (*0x8 + -0xf8);
                                                std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                          (*0x8 + -0xd8);
                                                std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                          (*0x8 + -0xb8);
                                                mgcl::polyline::Decoder::~Decoder()(*0x8 + -0x180);
                                                if (iVar16 == 6) {
code_r0x00019392137c:
                                                    uVar32 = 0;
                                                    uVar33 = 0;
                                                    if (*pcVar17 != '\0') {
code_r0x000193921388:
                                                        uVar32 = uVar33;
                                                        piVar19 = geo::codec::Allocator::instance()();
                                                        (**(*piVar19 + 0x28))(piVar19, *(pcVar17 + 0x28), 0);
                                                    }
                                                }
                                                else {
                                                    if (iVar16 != 0) goto code_r0x0001939212d8;
                                                    uVar23 = 
                                                            geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                                      (pcVar17, *0x8 + -0x90);
                                                    if ((uVar23 & 1) == 0) {
                                                        uVar18 = **reloc.__stderrp;
                                                        uVar24 = 0x6ae;
code_r0x000193921880:
                                                        *(*0x8 + -0x208) = uVar24;
                                                        fprintf(uVar18, 0x8ff + 0x193b8a000);
                                                        uVar33 = 0;
                                                        uVar32 = 0;
                                                        cVar3 = *pcVar17;
                                                    }
                                                    else {
                                                        uVar23 = 
                                                            geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                                      (pcVar17, *0x8 + -0x94);
                                                        if ((uVar23 & 1) == 0) {
                                                            uVar18 = **reloc.__stderrp;
                                                            uVar24 = 0x6b0;
                                                            goto code_r0x000193921880;
                                                        }
                                                        std::__1::vector<unsigned char, geo::StdAllocator<unsigned char, geo::codec::Allocator> >::vector(unsigned long)
                                                                  (*0x8 + -0xb8, uStack_90);
                                                        std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::vector(unsigned long)
                                                                  (*0x8 + -0xd8, uStack_98._4_4_);
                                                        std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::vector(unsigned long)
                                                                  (*0x8 + -0xf8, uStack_98._4_4_);
                                                        std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::vector(unsigned long)
                                                                  (*0x8 + -0x120, uStack_1d8);
                                                        iStack_138 = 0;
                                                        iStack_140 = 0;
                                                        uStack_128 = 0;
                                                        uStack_130 = 0;
                                                        if (iStack_b0 - iStack_b8 != uStack_90) {
                                                            uVar18 = **reloc.__stderrp;
                                                            uVar24 = 0x6bc;
code_r0x000193921920:
                                                            *(*0x8 + -0x208) = uVar24;
                                                            fprintf(uVar18, 0x8ff + 0x193b8a000);
                                                            iVar16 = 6;
                                                        }
                                                        else {
                                                            uVar23 = 
                                                            bool geo::codec::decodeIntCompressorArray<unsigned char>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned char>*, unsigned int, unsigned int, unsigned long, unsigned char*)
                                                                      (pcVar17, *0x8 + -0x140, uStack_80._4_4_, 
                                                                       uStack_80);
                                                            if ((uVar23 & 1) == 0) {
                                                                uVar18 = **reloc.__stderrp;
                                                                uVar24 = 0x6bd;
                                                                goto code_r0x000193921920;
                                                            }
                                                            uStack_158 = 0;
                                                            uStack_160 = 0;
                                                            uStack_148 = 0;
                                                            uStack_150 = 0;
                                                            if (iStack_d0 - iStack_d8 >> 1 != uStack_98._4_4_) {
                                                                uVar18 = **reloc.__stderrp;
                                                                uVar24 = 0x6c0;
code_r0x000193921c04:
                                                                *(*0x8 + -0x208) = uVar24;
                                                                fprintf(uVar18, 0x8ff + 0x193b8a000);
                                                                iVar16 = 6;
                                                            }
                                                            else {
                                                                uVar23 = 
                                                            bool geo::codec::decodeIntCompressorArray<unsigned short>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned short>*, unsigned int, unsigned int, unsigned long, unsigned short*)
                                                                      (pcVar17, *0x8 + -0x160, uStack_80._4_4_, 
                                                                       uStack_80);
                                                            if ((uVar23 & 1) == 0) {
                                                                uVar18 = **reloc.__stderrp;
                                                                uVar24 = 0x6c1;
                                                                goto code_r0x000193921c04;
                                                            }
                                                            uStack_178 = 0;
                                                            uStack_180 = 0;
                                                            uStack_168 = 0;
                                                            uStack_170 = 0;
                                                            if (iStack_f0 - iStack_f8 >> 2 != uStack_98._4_4_) {
                                                                uVar18 = **reloc.__stderrp;
                                                                uVar24 = 0x6c4;
code_r0x000193921c48:
                                                                *(*0x8 + -0x208) = uVar24;
                                                                fprintf(uVar18, 0x8ff + 0x193b8a000);
                                                                iVar16 = 6;
                                                            }
                                                            else {
                                                                uVar23 = 
                                                            bool geo::codec::decodeIntCompressorArray<unsigned int>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned int>*, unsigned int, unsigned int, unsigned long, unsigned int*)
                                                                      (pcVar17, *0x8 + -0x180, uStack_80._4_4_, 
                                                                       uStack_80);
                                                            if ((uVar23 & 1) == 0) {
                                                                uVar18 = **reloc.__stderrp;
                                                                uVar24 = 0x6c5;
                                                                goto code_r0x000193921c48;
                                                            }
                                                            *(&stack0x00000000 + -0x198) = 0;
                                                            *(&stack0x00000000 + -0x1a0) = 0;
                                                            *(&stack0x00000000 + -0x188) = 0;
                                                            *(&stack0x00000000 + -400) = 0;
                                                            if (uStack_1d8 != iStack_118 - iStack_120 >> 1) {
                                                                uVar18 = **reloc.__stderrp;
                                                                uVar24 = 0x6c8;
code_r0x000193921c8c:
                                                                *(*0x8 + -0x208) = uVar24;
                                                                fprintf(uVar18, 0x8ff + 0x193b8a000);
                                                                iVar16 = 6;
                                                            }
                                                            else {
                                                                uVar23 = 
                                                            bool geo::codec::decodeIntCompressorArray<unsigned short>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned short>*, unsigned int, unsigned int, unsigned long, unsigned short*)
                                                                      (pcVar17, &stack0x00000000 + iVar15, 
                                                                       uStack_80._4_4_, uStack_80, uStack_1d8);
                                                            if ((uVar23 & 1) == 0) {
                                                                uVar18 = **reloc.__stderrp;
                                                                uVar24 = 0x6c9;
                                                                goto code_r0x000193921c8c;
                                                            }
                                                            iStack_1b8 = 0;
                                                            iStack_1b0 = 0;
                                                            iStack_1a8 = 0;
                                                            fcn.19392a904(*0x8 + -0x1b8, uStack_90);
                                                            uVar23 = iStack_1a8 - iStack_1b8 >> 4;
                                                            if (uStack_90 < uVar23 || uStack_90 == uVar23) {
                                                                if (uStack_90 != 0) {
                                                                    param_2 = NULL;
                                                                    uVar34 = 0;
                                                                    do {
                                                                        
                                                            std::__1::shared_ptr<FeatureStyleAttributes> std::__1::make_shared[abi:v160006]<FeatureStyleAttributes, , void>()
                                                                      (*0x8 + -0x1d0);
                                                            fcn.19392aa20(*0x8 + -0x1b8, *0x8 + -0x1d0);
                                                            std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()
                                                                      (*0x8 + -0x1d0);
                                                            uVar1 = uVar34 + *(iStack_b8 + param_2);
                                                            if (uVar34 < uVar1) {
                                                                iVar36 = iStack_1b0;
                                                                uVar23 = uVar34;
                                                                do {
                                                                    uStack_1c0 = *(iStack_d8 + uVar23 * 2);
                                                                    uStack_1bc = *(iStack_f8 + uVar23 * 4);
                                                                    
                                                            FeatureStyleAttributes::replaceAttributes(GeoCodecsFeatureStylePair const*, unsigned int)
                                                                      (*(iVar36 + -0x10), *0x8 + -0x1c0, 1);
                                                            uVar23 = uVar23 + 1;
                                                            uVar34 = uVar1;
                                                            } while (uVar1 != uVar23);
                                                            }
                                                            param_2 = param_2 + 1;
                                                            } while (param_2 < uStack_90);
                                                            }
                                                            if (uStack_1d8 != 0) {
                                                                param_2 = NULL;
                                                                iVar37 = iStack_1b8;
                                                                uVar23 = uStack_1d8;
                                                                iVar36 = 0x20;
                                                                do {
                                                                    puVar25 = iVar37 + *(iStack_120 + param_2) * 0x10;
                                                                    
                                                            std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                                                      (*(iStack_1e8 + iStack_1e0) + iVar36, *puVar25, 
                                                                       puVar25[1]);
                                                            iVar36 = iVar36 + 0x30;
                                                            param_2 = param_2 + 2;
                                                            } while (uVar23 * 2 - param_2 != 0);
                                                            }
                                                            uVar32 = param_2;
                                                            iVar16 = 0;
                                                            }
                                                            else {
                                                                uVar18 = **reloc.__stderrp;
                                                                *(*0x8 + -0x208) = 0x6cd;
                                                                fprintf(uVar18, 0x8ff + 0x193b8a000);
                                                                iVar16 = 6;
                                                            }
                                                            fcn.19392ac4c(*0x8 + -0x1b8);
                                                            }
                                                            mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()
                                                                      (&stack0x00000000 + iVar15);
                                                            }
                                                            mgcl::ints::IntDecompressor<unsigned int>::~IntDecompressor()
                                                                      (*0x8 + -0x180);
                                                            }
                                                            mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()
                                                                      (*0x8 + -0x160);
                                                        }
                                                        mgcl::ints::IntDecompressor<unsigned char>::~IntDecompressor()
                                                                  (*0x8 + -0x140);
                                                        std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                                  (*0x8 + -0x120);
                                                        std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                                  (*0x8 + -0xf8);
                                                        std::__1::vector<unsigned short, geo::StdAllocator<unsigned short, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                                  (*0x8 + -0xd8);
                                                        std::__1::vector<unsigned char, geo::StdAllocator<unsigned char, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                                  (*0x8 + -0xb8);
                                                        if (iVar16 == 6) goto code_r0x00019392137c;
                                                        if (iVar16 != 0) goto code_r0x0001939212d8;
                                                        uVar33 = 1;
                                                        uVar32 = 1;
                                                        cVar3 = *pcVar17;
                                                    }
                                                    if (cVar3 != '\0') goto code_r0x000193921388;
                                                }
                                                piVar19 = geo::codec::Allocator::instance()();
                                                (**(*piVar19 + 0x28))(piVar19, pcVar17, 0);
                                                if ((uVar32 == 0) && (iVar31 != 0)) {
                                                    geo::codec::VertexPoolDealloc(GeoCodecsVertexPool*)(iVar31);
                                                }
                                                goto code_r0x0001939212d8;
                                            }
                                            uVar18 = **reloc.__stderrp;
                                            uVar24 = 0x67d;
                                        }
                                    }
                                    *(*0x8 + -0x208) = uVar24;
                                    fprintf(uVar18, 0x8ff + 0x193b8a000);
                                }
                                iVar16 = 6;
                                goto code_r0x0001939215c8;
                            }
                            uVar18 = **reloc.__stderrp;
                            *(*0x8 + -0x208) = 0x66c;
                            fprintf(uVar18, 0x8ff + 0x193b8a000);
                            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                      (*0x8 + -0xd8);
                        }
                        std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                  (*0x8 + -0xb8);
                        mgcl::polyline::Decoder::~Decoder()(*0x8 + -0x180);
                    }
                    iVar31 = 0;
                    goto code_r0x00019392137c;
                }
                break;
            }
            uVar20 = uVar20 + 1;
        } while (uVar20 <= uVar23 && uVar23 != uVar20);
    }
    uVar32 = 1;
code_r0x0001939212d8:
    return uVar32 & 1;
}
