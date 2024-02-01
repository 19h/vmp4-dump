
uint32_t geo::codec::_readRunningTracks(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    uint64_t uVar1;
    uint *puVar2;
    uint uVar3;
    uint32_t uVar4;
    uint uVar5;
    bool bVar6;
    bool bVar7;
    int32_t iVar8;
    ulong uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong uVar14;
    uchar *puVar15;
    uint64_t uVar16;
    ulong *puVar17;
    ulong *puVar18;
    uint64_t uVar19;
    char *pcVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint32_t uVar23;
    int64_t unaff_x22;
    uint32_t uVar24;
    uint32_t uVar25;
    uint64_t uVar26;
    ulong uVar27;
    ulong uVar28;
    ulong uVar29;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    uchar auStack_2d0 [12];
    uint32_t uStack_2c4;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    int64_t iStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    int64_t iStack_280;
    int64_t iStack_278;
    ulong uStack_270;
    ulong uStack_268;
    int64_t iStack_260;
    int64_t iStack_258;
    int64_t iStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    int64_t iStack_238;
    int64_t iStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    int64_t iStack_1f0;
    int64_t iStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1b8;
    int64_t iStack_1b0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    uchar auStack_180 [12];
    uint32_t uStack_174;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uint64_t uStack_160;
    ulong uStack_158;
    uchar *puStack_150;
    uchar *puStack_148;
    uchar *puStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong *puStack_110;
    ulong *puStack_108;
    ulong *puStack_100;
    ulong uStack_f8;
    int64_t aiStack_f0 [4];
    ulong uStack_d0;
    ulong uStack_c8;
    uint32_t uStack_ac;
    uint32_t uStack_a8;
    uint uStack_a4;
    ulong uStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    int64_t *piStack_88;
    int64_t iStack_80;
    
    iStack_90 = *param_2;
    uVar16 = param_1[1];
    if (uVar16 != 0) {
        uVar13 = 0;
        do {
            if (*(*param_1 + uVar13 * 0x10) == 0x9d) {
                pcVar20 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar13, 0x9d, iStack_90 + 0x778);
                iStack_98 = 0x4a4 + 0x193b8a000;
                iStack_90 = *param_2;
                piStack_88 = param_2[1];
                if (piStack_88 == NULL) goto code_r0x00019391ff20;
                goto code_r0x00019391ff14;
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 <= uVar16 && uVar16 != uVar13);
    }
    pcVar20 = NULL;
    iStack_98 = 0x4a4 + 0x193b8a000;
    piStack_88 = param_2[1];
    if (piStack_88 != NULL) {
code_r0x00019391ff14:
        tmp_ldXn = piStack_88[1];
        iVar12 = tmp_ldXn;
        tmp_stXn = iVar12 + 1;
        iVar12 = tmp_stXn;
        piStack_88[1] = iVar12;
        uVar9 = tmp_ldXn;
    }
code_r0x00019391ff20:
    iStack_80 = std::__1::chrono::steady_clock::now()();
    if (pcVar20 == NULL) {
        uVar23 = 1;
        *(*param_2 + 0xc68) = 1;
        goto code_r0x000193920088;
    }
    uStack_a0 = 0;
    uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar20, *0x8 + -0x9c);
    if ((uVar16 & 1) == 0) {
        uVar9 = **reloc.__stderrp;
        uVar14 = 0x2b17;
code_r0x000193920000:
        *(*0x8 + -0x2f8) = uVar14;
        fprintf(uVar9, 0x8ff + 0x193b8a000);
code_r0x000193920018:
        uVar25 = 0;
        uVar23 = 0;
        if (param_1 == NULL) goto code_r0x000193920088;
    }
    else {
        uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar20, *0x8 + -0xa0);
        if ((uVar16 & 1) == 0) {
            uVar9 = **reloc.__stderrp;
            uVar14 = 0x2b18;
            goto code_r0x000193920000;
        }
        uStack_a4 = 0;
        uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar20, *0x8 + -0xa4);
        if ((uVar16 & 1) == 0) {
            uVar9 = **reloc.__stderrp;
            uVar14 = 0x2b1b;
            goto code_r0x000193920000;
        }
        uVar16 = *(pcVar20 + 0x30) + 8;
        if (*(pcVar20 + 0x38) <= uVar16 && uVar16 != *(pcVar20 + 0x38)) {
            uVar9 = **reloc.__stderrp;
            uVar14 = 0x2b1e;
            goto code_r0x000193920000;
        }
        uVar9 = *(*(pcVar20 + 0x28) + *(pcVar20 + 0x30));
        *(pcVar20 + 0x30) = uVar16;
        if (3 < *(pcVar20 + 0x40)) {
            uStack_d0 = (uStack_d0 >> 0x20) << 0x20;
            uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar20, *0x8 + -0xd0);
            if ((uVar16 & 1) == 0) {
                uVar14 = 0x2b22;
            }
            else {
                uVar23 = uStack_d0;
                if (uVar23 == 0) {
                    uVar14 = 0x2b23;
                }
                else {
                    uStack_d0 = CONCAT44(uStack_d0._4_4_, uVar23 << 1);
                    if ((3 & (uVar23 ^ 0xffffffff)) != 0) {
                        *(*param_2 + 0xc68) = uVar23 << 1;
                        goto code_r0x0001939201e8;
                    }
                    uVar14 = 0x2b29;
                }
            }
            uVar9 = **reloc.__stderrp;
            goto code_r0x000193920000;
        }
code_r0x0001939201e8:
        uStack_a8 = 0;
        uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar20, *0x8 + -0xa8);
        if ((uVar16 & 1) == 0) {
            uVar9 = **reloc.__stderrp;
            uVar14 = 0x2b2f;
            goto code_r0x000193920000;
        }
        if (uStack_a8 != 0) {
            uStack_ac = 0;
            uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar20, *0x8 + -0xac);
            if ((uVar16 & 1) == 0) {
                uVar9 = **reloc.__stderrp;
                uVar14 = 0x2b35;
                goto code_r0x000193920000;
            }
            std::__1::vector<GeoCodecsRunningTrack, geo::StdAllocator<GeoCodecsRunningTrack, geo::codec::Allocator> >::vector(unsigned long)
                      (*0x8 + -0xd0, uStack_a8);
            aiStack_f0[1] = 0;
            aiStack_f0[0] = 0;
            aiStack_f0[3] = 0;
            aiStack_f0[2] = 0;
            uVar23 = uStack_a8;
            puStack_108 = NULL;
            puStack_100 = NULL;
            puStack_110 = NULL;
            if (uVar23 != 0) {
                unaff_x22 = uVar23 << 3;
                puStack_110 = operator new(unsigned long)(unaff_x22);
                puVar17 = puStack_110 + uVar23;
                puStack_100 = puVar17;
                bzero(puStack_110, unaff_x22);
                puStack_108 = puVar17;
            }
            uVar23 = unaff_x22;
            uStack_f8 = 0;
            uVar16 = fcn.1938dece4(pcVar20, *0x8 + -0xf0, uStack_a0._4_4_, uStack_a0, *0x8 + -0x110);
            if ((uVar16 & 1) == 0) {
                uVar9 = **reloc.__stderrp;
                *(*0x8 + -0x2f8) = 0x2b3b;
                fprintf(uVar9, 0x8ff + 0x193b8a000);
                bVar7 = true;
            }
            else {
                uStack_128 = 0;
                uStack_130 = 0;
                uStack_118 = 0;
                uStack_120 = 0;
                uVar16 = uStack_a8;
                uVar23 = uStack_a8;
                puStack_148 = NULL;
                puStack_140 = NULL;
                puStack_150 = NULL;
                if (uStack_a8 != 0) {
                    puStack_150 = operator new(unsigned long)(uVar16);
                    puVar15 = puStack_150 + uVar16;
                    puStack_140 = puVar15;
                    bzero(puStack_150, uVar16);
                    puStack_148 = puVar15;
                }
                uStack_138 = 0;
                uVar16 = fcn.1938df1f4(pcVar20, *0x8 + -0x130, uStack_a0._4_4_, uStack_a0, *0x8 + -0x150);
                if ((uVar16 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    uVar14 = 0x2b40;
code_r0x0001939203a0:
                    *(*0x8 + -0x2f8) = uVar14;
                    fprintf(uVar9, 0x8ff + 0x193b8a000);
                    bVar7 = true;
                }
                else {
                    if (*(pcVar20 + 0x40) < 3 || *(pcVar20 + 0x40) == 3) {
                        uStack_170 = (uStack_170 >> 0x20) << 0x20;
                        uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar20, *0x8 + -0x170);
                        if ((uVar16 & 1) == 0) {
                            uVar9 = **reloc.__stderrp;
                            uVar14 = 0x2b44;
                        }
                        else {
                            uVar16 = *(pcVar20 + 0x30) + uStack_170;
                            if (uVar16 < *(pcVar20 + 0x38) || uVar16 == *(pcVar20 + 0x38)) {
                                *(pcVar20 + 0x30) = uVar16;
                                goto code_r0x0001939203d8;
                            }
                            uVar9 = **reloc.__stderrp;
                            uVar14 = 0x2b47;
                        }
                        goto code_r0x0001939203a0;
                    }
code_r0x0001939203d8:
                    uVar16 = uStack_ac;
                    uVar23 = uStack_ac;
                    uStack_168 = 0;
                    uStack_160 = 0;
                    uStack_170 = 0;
                    if (uStack_ac != 0) {
                        uStack_170 = operator new(unsigned long)(uVar16);
                        uVar13 = uStack_170 + uVar16;
                        uStack_160 = uVar13;
                        bzero(uStack_170, uVar16);
                        uStack_168 = uVar13;
                    }
                    uStack_158 = 0;
                    iVar8 = fcn.1938df1f4(pcVar20, *0x8 + -0x130, uStack_a0._4_4_, uStack_a0, *0x8 + -0x170);
                    if (iVar8 == 0) {
                        uVar9 = **reloc.__stderrp;
                        uVar14 = 0x2b4b;
code_r0x00019392062c:
                        *(*0x8 + -0x2f8) = uVar14;
                        fprintf(uVar9, 0x8ff + 0x193b8a000);
                        bVar7 = true;
                        if (uStack_170 != 0) {
code_r0x000193920650:
                            uStack_168 = uStack_170;
                            operator delete(void*)();
                        }
                    }
                    else {
                        if (uStack_a8 != 0) {
                            iVar12 = 0;
                            puVar17 = uStack_d0;
                            iVar11 = *(pcVar20 + 0x30);
                            uVar16 = *(pcVar20 + 0x38);
                            puVar18 = puStack_110;
                            puVar15 = puStack_150;
                            do {
                                iVar21 = iVar11 + iVar12;
                                uVar13 = iVar21 + 8;
                                if (uVar16 <= uVar13 && uVar13 != uVar16) {
                                    uVar14 = 0x2b52;
code_r0x000193920620:
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019392062c;
                                }
                                iVar22 = *(pcVar20 + 0x28);
                                uVar14 = *(iVar21 + iVar22);
                                *(pcVar20 + 0x30) = uVar13;
                                uVar13 = iVar21 + 0x10;
                                if (uVar16 <= uVar13 && uVar13 != uVar16) {
                                    uVar14 = 0x2b53;
                                    goto code_r0x000193920620;
                                }
                                iVar21 = iVar11 + iVar12;
                                uVar27 = *(iVar21 + iVar22 + 8);
                                *(pcVar20 + 0x30) = uVar13;
                                uVar13 = iVar21 + 0x18;
                                if (uVar16 <= uVar13 && uVar13 != uVar16) {
                                    uVar14 = 0x2b54;
                                    goto code_r0x000193920620;
                                }
                                uVar28 = *(iVar21 + iVar22 + 0x10);
                                *(pcVar20 + 0x30) = uVar13;
                                uVar13 = iVar21 + 0x20;
                                if (uVar16 <= uVar13 && uVar13 != uVar16) {
                                    uVar14 = 0x2b55;
                                    goto code_r0x000193920620;
                                }
                                uVar29 = *(iVar22 + iVar11 + iVar12 + 0x18);
                                *(pcVar20 + 0x30) = uVar13;
                                *puVar17 = *puVar18;
                                *(puVar17 + 1) = *puVar15;
                                puVar17[2] = uVar14;
                                puVar17[3] = uVar28;
                                puVar17[4] = uVar27;
                                puVar17[5] = uVar29;
                                *(puVar17 + 10) = uStack_a4;
                                puVar17[0xb] = uVar9;
                                iVar12 = iVar12 + 0x20;
                                puVar17 = puVar17 + 0x10;
                                puVar18 = puVar18 + 1;
                                puVar15 = puVar15 + 1;
                            } while (uStack_a8 * 0x20 - iVar12 != 0);
                        }
                        uStack_174 = 0;
                        uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar20, *0x8 + -0x174);
                        if ((uVar16 & 1) == 0) {
                            uVar9 = **reloc.__stderrp;
                            uVar14 = 0x2b60;
                            goto code_r0x00019392062c;
                        }
                        fcn.1938d6c68(*0x8 + -0x180);
                        uStack_198 = 0;
                        uStack_190 = 0;
                        uStack_188 = 0;
                        mgcl::polyline::Decoder::getPositionsInfo(unsigned char const*, unsigned long, mgcl::polyline::Decoder::PositionsInfo&)
                                  (*(pcVar20 + 0x28) + *(pcVar20 + 0x30), uStack_174, *0x8 + -0x198);
                        piVar10 = uStack_ac;
                        uVar23 = uStack_ac;
                        if (uStack_ac != uStack_188) {
                            uVar9 = **reloc.__stderrp;
                            *(*0x8 + -0x2f8) = 0x2b65;
                            fprintf(uVar9, 0x8ff + 0x193b8a000);
                            bVar7 = true;
                        }
                        else {
                            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
                                      (*0x8 + -0x1b8, uStack_190._4_4_ * 3);
                            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
                                      (*0x8 + -0x1d8, piVar10);
                            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
                                      (*0x8 + -0x1f8, uStack_188._4_4_);
                            uStack_200 = 0;
                            iVar8 = mgcl::polyline::Decoder::decompressPositions(unsigned char const*, unsigned long, unsigned long&, int*, int*, int*)
                                              (*0x8 + -0x180, *(pcVar20 + 0x28) + *(pcVar20 + 0x30), uStack_174, 
                                               *0x8 + -0x200, iStack_1b8, iStack_1d8, iStack_1f8);
                            if (iVar8 == 0) {
                                *(pcVar20 + 0x30) = *(pcVar20 + 0x30) + uStack_174;
                                uStack_218 = 0;
                                uStack_220 = 0;
                                uStack_208 = 0;
                                uStack_210 = 0;
                                uVar16 = uStack_ac;
                                iStack_238 = 0;
                                iStack_230 = 0;
                                iStack_240 = 0;
                                if (uStack_ac != 0) {
                                    piVar10 = uVar16 << 2;
                                    iStack_240 = operator new(unsigned long)(piVar10);
                                    iVar12 = iStack_240 + uVar16 * 4;
                                    iStack_230 = iVar12;
                                    bzero(iStack_240, piVar10);
                                    iStack_238 = iVar12;
                                }
                                uVar23 = piVar10;
                                uStack_228 = 0;
                                if (*(pcVar20 + 0x40) < 2) {
                                    uVar25 = 0;
code_r0x000193920730:
                                    iStack_260 = 0;
                                    iStack_258 = 0;
                                    iStack_250 = 0;
                                    if (uVar16 != 0) {
                                        piVar10 = uVar16 << 2;
                                        iStack_260 = operator new(unsigned long)(piVar10);
                                        iVar12 = iStack_260 + uVar16 * 4;
                                        iStack_250 = iVar12;
                                        bzero(iStack_260, piVar10);
                                        iStack_258 = iVar12;
                                    }
                                    uVar23 = piVar10;
                                    uStack_248 = 0;
                                    if (*(pcVar20 + 0x40) < 3) {
code_r0x00019392078c:
                                        iStack_280 = 0;
                                        iStack_278 = 0;
                                        uStack_270 = 0;
                                        uStack_268 = geo::codec::Allocator::instance()();
                                        iStack_2a0 = 0;
                                        uStack_298 = 0;
                                        *(&stack0x00000000 + -0x290) = 0;
                                        uStack_288 = geo::codec::Allocator::instance()();
                                        uStack_2c0 = 0;
                                        uStack_2b8 = 0;
                                        uStack_2b0 = 0;
                                        uStack_2a8 = geo::codec::Allocator::instance()();
                                        if (*(pcVar20 + 0x40) < 4) {
code_r0x000193920968:
                                            uVar23 = uStack_a8;
                                            if (uVar23 != iStack_1f0 - iStack_1f8 >> 2) {
                                                uVar9 = **reloc.__stderrp;
                                                uVar14 = 0x2ba2;
code_r0x000193920c8c:
                                                uVar23 = piVar10;
                                                *(*0x8 + -0x2f8) = uVar14;
                                                fprintf(uVar9, 0x8ff + 0x193b8a000);
                                                goto code_r0x000193920ca4;
                                            }
                                            if (uStack_ac != iStack_1d0 - iStack_1d8 >> 2) {
                                                uVar9 = **reloc.__stderrp;
                                                uVar14 = 0x2ba3;
                                                goto code_r0x000193920c8c;
                                            }
                                            if (iStack_1f0 != iStack_1f8) {
                                                piVar10 = NULL;
                                                do {
                                                    *(uStack_d0 + piVar10 * 0x80 + 0xc) = uVar25;
                                                    std::__1::vector<GeoCodecsRunningTrackLane, geo::StdAllocator<GeoCodecsRunningTrackLane, geo::codec::Allocator> >::resize(unsigned long)
                                                              (uStack_d0 + piVar10 * 0x10 + 0xc, 
                                                               *(iStack_1f8 + piVar10 * 4));
                                                    piVar10 = piVar10 + 1;
                                                } while (piVar10 < iStack_1f0 - iStack_1f8 >> 2);
                                                uVar23 = uStack_a8;
                                            }
                                            if ((uVar25 >> 2 != 0) && (uVar23 != 0)) {
                                                uVar16 = 0;
                                                uVar23 = 0xb;
                                                iVar12 = 0x30;
                                                do {
                                                    if (*(iStack_2a0 + uVar16 * 4) != 4) {
                                                        uVar9 = **reloc.__stderrp;
                                                        uVar14 = 0x2bad;
                                                        goto code_r0x000193920c8c;
                                                    }
                                                    piVar10 = uStack_d0 + iVar12;
                                                    std::__1::vector<gm::Matrix<unsigned int, 3, 1>, geo::StdAllocator<gm::Matrix<unsigned int, 3, 1>, geo::codec::Allocator> >::resize(unsigned long)
                                                              (piVar10, 4);
                                                    uVar13 = iStack_278 - iStack_280 >> 2;
                                                    if (uVar13 < uVar23 + -9 || uVar13 == uVar23 + -9) {
code_r0x000193920c08:
                                                        uVar9 = **reloc.__stderrp;
                                                        uVar14 = 0x2bb0;
                                                        goto code_r0x000193920c8c;
                                                    }
                                                    puVar17 = iStack_280 + (uVar23 + -0xb) * 4;
                                                    uVar3 = *(puVar17 + 1);
                                                    puVar18 = *piVar10;
                                                    *puVar18 = *puVar17;
                                                    *(puVar18 + 1) = uVar3;
                                                    if (uVar13 < uVar23 + -6 || uVar13 == uVar23 + -6)
                                                    goto code_r0x000193920c08;
                                                    uVar9 = *(iStack_280 + (uVar23 + -7 << -0x3e + 0x40 & 0x3fffffffc));
                                                    *(puVar18 + 0xc) = *(puVar17 + 0xc);
                                                    puVar18[2] = uVar9;
                                                    uVar19 = uVar23 + -3;
                                                    if (uVar13 < uVar19 || uVar13 == uVar19) goto code_r0x000193920c08;
                                                    uVar3 = *(iStack_280 + uVar19 * 4);
                                                    puVar18[3] = *(iStack_280 +
                                                                  (uVar23 + -5 << -0x3e + 0x40 & 0x3fffffffc));
                                                    *(puVar18 + 4) = uVar3;
                                                    uVar19 = uVar23;
                                                    if (uVar13 < uVar19 || uVar13 == uVar19) goto code_r0x000193920c08;
                                                    uVar3 = *(iStack_280 + uVar19 * 4);
                                                    *(puVar18 + 0x24) =
                                                         *(iStack_280 + (uVar23 + -2 << -0x3e + 0x40 & 0x3fffffffc));
                                                    *(puVar18 + 0x2c) = uVar3;
                                                    uVar16 = uVar16 + 1;
                                                    iVar12 = iVar12 + 0x80;
                                                    uVar23 = uVar23 + 0xc;
                                                } while (uVar16 < uStack_a8);
                                            }
                                            if (uStack_ac != 0) {
                                                uVar16 = 0;
                                                uVar25 = 0;
                                                uVar23 = 0;
                                                uVar24 = 0;
                                                do {
                                                    if (uStack_a8 <= uVar25) {
                                                        uVar9 = **reloc.__stderrp;
                                                        uVar14 = 0x2bbd;
                                                        goto code_r0x000193920c8c;
                                                    }
                                                    uVar26 = uVar25;
                                                    uVar13 = uVar24;
                                                    uVar19 = (uStack_d0[uVar26 * 0x10 + 0xd] -
                                                              uStack_d0[uVar26 * 0x10 + 0xc] >> 4) *
                                                             (0xaaaaaaaaaaaa0000 | 0xaaab);
                                                    if (uVar19 < uVar13 || uVar19 - uVar13 == 0) {
                                                        uVar9 = **reloc.__stderrp;
                                                        uVar14 = 0x2bbf;
                                                        goto code_r0x000193920c8c;
                                                    }
                                                    puVar15 = uStack_d0[uVar26 * 0x10 + 0xc] + uVar13 * 0x30;
                                                    *puVar15 = *(uStack_170 + uVar16);
                                                    iVar12 = uVar16 * 4;
                                                    *(puVar15 + 0x28) = *(iStack_240 + iVar12);
                                                    *(puVar15 + 0x2c) = *(iStack_260 + iVar12);
                                                    uVar4 = *(iStack_1d8 + iVar12);
                                                    piVar10 = puVar15 + 8;
                                                    std::__1::vector<gm::Matrix<unsigned int, 3, 1>, geo::StdAllocator<gm::Matrix<unsigned int, 3, 1>, geo::codec::Allocator> >::resize(unsigned long)
                                                              (piVar10, uVar4);
                                                    if (uVar4 != 0) {
                                                        iVar12 = 0;
                                                        uVar13 = iStack_1b0 - iStack_1b8 >> 2;
                                                        do {
                                                            uVar19 = uVar23 + 2;
                                                            if (uVar13 < uVar19 || uVar13 == uVar19) {
                                                                uVar9 = **reloc.__stderrp;
                                                                uVar14 = 0x2bc9;
                                                                goto code_r0x000193920c8c;
                                                            }
                                                            uVar1 = uVar23;
                                                            uVar3 = *(iStack_1b8 + (uVar23 + 1) * 4);
                                                            uVar23 = uVar23 + 3;
                                                            uVar5 = *(iStack_1b8 + uVar19 * 4);
                                                            puVar2 = *piVar10 + iVar12;
                                                            *puVar2 = *(iStack_1b8 + uVar1 * 4);
                                                            puVar2[1] = uVar3;
                                                            puVar2[2] = uVar5;
                                                            iVar12 = iVar12 + 0xc;
                                                        } while (uVar4 * 0xc - iVar12 != 0);
                                                    }
                                                    bVar7 = *(iStack_1f8 + uVar26 * 4) <= uVar24 + 1;
                                                    if (bVar7) {
                                                        uVar25 = uVar25 + 1;
                                                    }
                                                    uVar4 = 0;
                                                    if (!bVar7) {
                                                        uVar4 = uVar24 + 1;
                                                    }
                                                    uVar16 = uVar16 + 1;
                                                    uVar24 = uVar4;
                                                } while (uVar16 < uStack_ac);
                                            }
                                            uVar23 = piVar10;
                                            if (*param_2 + 0xc70 != *0x8 + -0xd0) {
                                                void std::__1::vector<GeoCodecsRunningTrack, geo::StdAllocator<GeoCodecsRunningTrack, geo::codec::Allocator> >::assign<GeoCodecsRunningTrack*, 0>(GeoCodecsRunningTrack*, GeoCodecsRunningTrack*)
                                                          (*param_2 + 0xc70, uStack_d0, uStack_c8);
                                            }
                                            bVar7 = false;
                                        }
                                        else {
                                            uStack_2c4 = 0;
                                            uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                               (pcVar20, *0x8 + -0x2c4);
                                            if ((uVar16 & 1) == 0) {
                                                uVar9 = **reloc.__stderrp;
                                                uVar14 = 0x2b88;
                                                goto code_r0x000193920c8c;
                                            }
                                            fcn.1938d6c68(*0x8 + -0x2d0);
                                            uStack_2e8 = 0;
                                            uStack_2e0 = 0;
                                            uStack_2d8 = 0;
                                            mgcl::polyline::Decoder::getPositionsInfo(unsigned char const*, unsigned long, mgcl::polyline::Decoder::PositionsInfo&)
                                                      (*(pcVar20 + 0x28) + *(pcVar20 + 0x30), uStack_2c4, *0x8 + -0x2e8)
                                            ;
                                            piVar10 = uStack_a8;
                                            uVar23 = uStack_a8;
                                            if (uStack_a8 != uStack_2d8) {
                                                uVar9 = 0x2b8d;
code_r0x00019392091c:
                                                uVar14 = **reloc.__stderrp;
                                            }
                                            else {
                                                if (uStack_a8 != uStack_2d8._4_4_) {
                                                    uVar9 = 0x2b8e;
                                                    goto code_r0x00019392091c;
                                                }
                                                if (uStack_2e0._4_4_ != uStack_a8 * 4) {
                                                    uVar9 = 0x2b8f;
                                                    goto code_r0x00019392091c;
                                                }
                                                std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::resize(unsigned long)
                                                          (*0x8 + -0x280, uStack_a8 + (uStack_a8 << 1) << 2);
                                                std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::resize(unsigned long)
                                                          (*0x8 + -0x2a0, piVar10);
                                                std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::resize(unsigned long)
                                                          (*0x8 + -0x2c0, piVar10);
                                                uStack_2f0 = 0;
                                                iVar8 = mgcl::polyline::Decoder::decompressPositions(unsigned char const*, unsigned long, unsigned long&, int*, int*, int*)
                                                                  (*0x8 + -0x2d0, *(pcVar20 + 0x28) + *(pcVar20 + 0x30)
                                                                   , uStack_2c4, *0x8 + -0x2f0, iStack_280, iStack_2a0, 
                                                                   uStack_2c0);
                                                if (iVar8 == 0) {
                                                    *(pcVar20 + 0x30) = *(pcVar20 + 0x30) + uStack_2c4;
                                                    uVar25 = uVar25 | 4;
                                                    mgcl::polyline::Decoder::~Decoder()(*0x8 + -0x2d0);
                                                    goto code_r0x000193920968;
                                                }
                                                uVar14 = **reloc.__stderrp;
                                                uVar9 = 0x2b9a;
                                            }
                                            *(*0x8 + -0x2f8) = uVar9;
                                            fprintf(uVar14, 0x8ff + 0x193b8a000);
                                            mgcl::polyline::Decoder::~Decoder()(*0x8 + -0x2d0);
code_r0x000193920ca4:
                                            bVar7 = true;
                                        }
                                        std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                  (*0x8 + -0x2c0);
                                        std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                  (*0x8 + -0x2a0);
                                        std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                  (*0x8 + -0x280);
                                    }
                                    else {
                                        uVar16 = fcn.1938de984(pcVar20, *0x8 + -0x220, uStack_a0._4_4_, uStack_a0, 
                                                               *0x8 + -0x260);
                                        if ((uVar16 & 1) != 0) {
                                            uVar25 = uVar25 | 2;
                                            goto code_r0x00019392078c;
                                        }
                                        uVar9 = **reloc.__stderrp;
                                        *(*0x8 + -0x2f8) = 0x2b7f;
                                        fprintf(uVar9, 0x8ff + 0x193b8a000);
                                        bVar7 = true;
                                    }
                                    if (iStack_260 != 0) {
                                        iStack_258 = iStack_260;
                                        operator delete(void*)();
                                    }
                                }
                                else {
                                    iVar8 = fcn.1938de984(pcVar20, *0x8 + -0x220, uStack_a0._4_4_, uStack_a0, 
                                                          *0x8 + -0x240);
                                    if (iVar8 != 0) {
                                        uVar16 = uStack_ac;
                                        uVar25 = 1;
                                        goto code_r0x000193920730;
                                    }
                                    uVar9 = **reloc.__stderrp;
                                    *(*0x8 + -0x2f8) = 0x2b79;
                                    fprintf(uVar9, 0x8ff + 0x193b8a000);
                                    bVar7 = true;
                                }
                                if (iStack_240 != 0) {
                                    iStack_238 = iStack_240;
                                    operator delete(void*)();
                                }
                                mgcl::ints::IntDecompressor<unsigned int>::~IntDecompressor()(*0x8 + -0x220);
                            }
                            else {
                                uVar9 = **reloc.__stderrp;
                                *(*0x8 + -0x2f8) = 0x2b70;
                                fprintf(uVar9, 0x8ff + 0x193b8a000);
                                bVar7 = true;
                            }
                            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                      (*0x8 + -0x1f8);
                            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                      (*0x8 + -0x1d8);
                            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                      (*0x8 + -0x1b8);
                        }
                        mgcl::polyline::Decoder::~Decoder()(*0x8 + -0x180);
                        if (uStack_170 != 0) goto code_r0x000193920650;
                    }
                }
                if (puStack_150 != NULL) {
                    puStack_148 = puStack_150;
                    operator delete(void*)();
                }
                mgcl::ints::IntDecompressor<unsigned char>::~IntDecompressor()(*0x8 + -0x130);
            }
            if (puStack_110 != NULL) {
                puStack_108 = puStack_110;
                operator delete(void*)();
            }
            mgcl::ints::IntDecompressor<unsigned long long>::~IntDecompressor()(*0x8 + -0xf0);
            std::__1::vector<GeoCodecsRunningTrack, geo::StdAllocator<GeoCodecsRunningTrack, geo::codec::Allocator> >::~vector[abi:v160006]()
                      (*0x8 + -0xd0);
            bVar6 = !bVar7;
            if (bVar6) goto code_r0x0001939206a0;
            if (!bVar7) goto code_r0x000193920088;
            goto code_r0x000193920018;
        }
        if (*(pcVar20 + 0x40) < 3 || *(pcVar20 + 0x40) == 3) {
            uVar9 = **reloc.__stderrp;
            uVar14 = 0x2b31;
            goto code_r0x000193920000;
        }
code_r0x0001939206a0:
        uVar25 = 1;
        uVar23 = 1;
        if (param_1 == NULL) goto code_r0x000193920088;
    }
    uVar23 = uVar25;
    if (*pcVar20 != '\0') {
        piVar10 = geo::codec::Allocator::instance()();
        (**(*piVar10 + 0x28))(piVar10, *(pcVar20 + 0x28), 0);
    }
    piVar10 = geo::codec::Allocator::instance()();
    (**(*piVar10 + 0x28))(piVar10, pcVar20, 0);
code_r0x000193920088:
    iVar12 = iStack_98;
    iVar22 = iStack_90;
    iVar11 = std::__1::chrono::steady_clock::now()();
    iVar21 = iStack_80;
    aiStack_f0[0] = iVar12;
    if (iVar12 != 0) {
        uStack_d0 = *0x8 + -0xf0;
        iVar12 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar22 + 0x778, *0x8 + -0xf0, 0x74c + 0x193af9000, *0x8 + -0xd0, *0x8 + -0x110);
        iVar11 = SUB168(SEXT816(iVar11 - iVar21) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar12 + 0x20) = ((iVar11 >> 7) - (iVar11 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar10 = piStack_88;
    if (piStack_88 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_88[1];
        iVar12 = tmp_ldXn;
        tmp_stXn = iVar12 + -1;
        iVar12 = tmp_stXn;
        piStack_88[1] = iVar12;
        iVar12 = tmp_ldXn;
        LORelease();
        if (iVar12 == 0) {
            (**(*piVar10 + 0x10))(piVar10);
            std::__1::__shared_weak_count::__release_weak()(piVar10);
        }
    }
    return uVar23 & 1;
}
