
ulong geo::codec::_readModernBuildings(VMP4Tile*, unsigned short, GeoCodecsVertexPool**, std::__1::vector<GeoCodecsBuildingFootprintFeature, geo::StdAllocator<GeoCodecsBuildingFootprintFeature, geo::codec::Allocator> >&, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, ulong param_2, uint8_t **param_3, int64_t *param_4, int64_t *param_5)

{
    char cVar1;
    char cVar2;
    char cVar3;
    char cVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    int32_t iVar10;
    int32_t iVar11;
    char *pcVar12;
    ulong uVar13;
    int64_t *piVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong *puVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint64_t uVar28;
    int64_t iVar29;
    int64_t iVar30;
    int64_t *piVar31;
    uint8_t *puVar32;
    int64_t *piVar33;
    uint64_t uStack_190;
    int64_t iStack_188;
    uint64_t uStack_178;
    uint64_t uStack_140;
    uint64_t uStack_128;
    int64_t *piStack_120;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    int64_t *apiStack_f0 [3];
    int64_t iStack_d8;
    uint64_t auStack_d0 [2];
    uint8_t uStack_b9;
    uint32_t uStack_b8;
    uint uStack_b0;
    uint uStack_ac;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t *piStack_98;
    int64_t *piStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t *piStack_78;
    int64_t iStack_70;
    
    if (param_3 == NULL) {
        return 0;
    }
    uVar20 = param_1[1];
    if (uVar20 == 0) {
        return 1;
    }
    uVar18 = 0;
    while (*(*param_1 + uVar18 * 0x10) != param_2) {
        uVar18 = uVar18 + 1;
        if (uVar20 < uVar18 || uVar20 == uVar18) {
            return 1;
        }
    }
    pcVar12 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                        (param_1, uVar18, param_2, *param_5 + 0x778);
    if (pcVar12 == NULL) {
        return 1;
    }
    iStack_88 = chapterTypeAsString(ChapterType)(param_2);
    iStack_80 = *param_5;
    piStack_78 = param_5[1];
    if (piStack_78 != NULL) {
        tmp_ldXn = piStack_78[1];
        iVar22 = tmp_ldXn;
        tmp_stXn = iVar22 + 1;
        iVar22 = tmp_stXn;
        piStack_78[1] = iVar22;
        uVar13 = tmp_ldXn;
    }
    iStack_70 = std::__1::chrono::steady_clock::now()();
    piStack_98 = NULL;
    piStack_90 = NULL;
    uVar20 = *(pcVar12 + 0x30);
    if (uVar20 <= *(pcVar12 + 0x38)) {
        pcVar12[0x20] = '\x01';
        *(pcVar12 + 0x10) = *(pcVar12 + 0x38) - uVar20;
        *(pcVar12 + 0x18) = 0;
        *(pcVar12 + 8) = *(pcVar12 + 0x28) + uVar20;
    }
    piVar14 = pcVar12 + 8;
    uVar20 = geo::codec::decodeSectionEncoding(Bitstream*, GeoCodecsVertexPool**, bool, GeoCodecsTileKey const*, GeoCodecsVectorTileRawPoint*)
                       (piVar14, param_3, 0, 0, 0);
    if ((uVar20 & 1) == 0) {
        uVar13 = **reloc.__stderrp;
        goto code_r0x00019392c6c0;
    }
    uVar20 = *(pcVar12 + 0x18);
    uVar18 = *(pcVar12 + 0x10) * 8;
    if (uVar18 <= uVar20 + 5 && uVar20 + 5 != uVar18) {
code_r0x00019392c674:
        uVar13 = **reloc.__stderrp;
code_r0x00019392c6c0:
        fprintf(uVar13, 0x8ff + 0x193b8a000);
        uVar13 = 0;
        if (*pcVar12 == '\0') goto code_r0x00019392c714;
    }
    else {
        uVar19 = 0;
        iVar22 = *piVar14;
        uVar24 = 5;
        do {
            uVar28 = 8 - (uVar20 & 7);
            uVar25 = uVar24;
            if (uVar28 <= uVar24) {
                uVar25 = uVar28;
            }
            uVar26 = uVar25;
            uVar19 = *(iVar22 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar26 & 0x1f) &
                     (-1 << (uVar26 & 0x1f) ^ 0xffffffff) | uVar19 << (uVar26 & 0x1f);
            uVar20 = uVar25 + uVar20;
            *(pcVar12 + 0x18) = uVar20;
            uVar24 = uVar24 - uVar25;
        } while (uVar24 != 0);
        uVar24 = uVar19 + 1;
        if (uVar18 <= uVar20 + uVar24 && uVar20 + uVar24 != uVar18) goto code_r0x00019392c674;
        uVar26 = 0;
        if (uVar19 + 1 != 0) {
            do {
                uVar28 = 8 - (uVar20 & 7);
                uVar25 = uVar24;
                if (uVar28 <= uVar24) {
                    uVar25 = uVar28;
                }
                uVar19 = uVar25;
                uVar26 = *(iVar22 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar19 & 0x1f) &
                         (-1 << (uVar19 & 0x1f) ^ 0xffffffff) | uVar26 << (uVar19 & 0x1f);
                uVar28 = uVar20;
                uVar20 = uVar25 + uVar28;
                *(pcVar12 + 0x18) = uVar25 + uVar28;
                uVar24 = uVar24 - uVar25;
            } while (uVar24 != 0);
        }
        if (uVar18 <= uVar20 + 5 && uVar20 + 5 != uVar18) {
code_r0x00019392c918:
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uVar19 = 0;
        uVar24 = 5;
        do {
            uVar28 = 8 - (uVar20 & 7);
            uVar25 = uVar24;
            if (uVar28 <= uVar24) {
                uVar25 = uVar28;
            }
            uVar27 = uVar25;
            uVar19 = *(iVar22 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar27 & 0x1f) &
                     (-1 << (uVar27 & 0x1f) ^ 0xffffffff) | uVar19 << (uVar27 & 0x1f);
            uVar20 = uVar25 + uVar20;
            *(pcVar12 + 0x18) = uVar20;
            uVar24 = uVar24 - uVar25;
        } while (uVar24 != 0);
        uVar24 = uVar19 + 1;
        if (uVar18 <= uVar20 + uVar24 && uVar20 + uVar24 != uVar18) goto code_r0x00019392c918;
        uVar27 = 0;
        if (uVar19 + 1 != 0) {
            do {
                uVar25 = 8 - (uVar20 & 7);
                uVar18 = uVar24;
                if (uVar25 <= uVar24) {
                    uVar18 = uVar25;
                }
                uVar19 = uVar18;
                uVar27 = *(iVar22 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar19 & 0x1f) &
                         (-1 << (uVar19 & 0x1f) ^ 0xffffffff) | uVar27 << (uVar19 & 0x1f);
                uVar25 = uVar20;
                uVar20 = uVar18 + uVar25;
                *(pcVar12 + 0x18) = uVar18 + uVar25;
                uVar24 = uVar24 - uVar18;
            } while (uVar24 != 0);
            if (0xffff < uVar27) {
                uVar13 = **reloc.__stderrp;
                goto code_r0x00019392c6c0;
            }
        }
        uStack_f8 = uVar27;
        iVar22 = param_4[1];
        uVar20 = (iVar22 - *param_4 >> 3) * (0x8af8af8b | 0xaf8af8af00000000);
        if (uStack_f8 <= uVar20) {
            if (uStack_f8 <= uVar20 && uVar20 - uStack_f8 != 0) {
                iVar15 = *param_4 + uStack_f8 * 0x118;
                if (iVar22 != iVar15) {
                    piVar33 = iVar22 + -0x110;
                    do {
                        piVar31 = piVar33[0xd];
                        if (piVar31 != NULL) {
                            LOAcquire();
                            tmp_ldXn = piVar31[1];
                            iVar22 = tmp_ldXn;
                            tmp_stXn = iVar22 + -1;
                            iVar22 = tmp_stXn;
                            piVar31[1] = iVar22;
                            iVar22 = tmp_ldXn;
                            LORelease();
                            if (iVar22 == 0) {
                                (**(*piVar31 + 0x10))(piVar31);
                                std::__1::__shared_weak_count::__release_weak()(piVar31);
                            }
                        }
                        if (*piVar33 != 0) {
                            std::__1::__shared_weak_count::__release_weak()();
                        }
                        iVar22 = piVar33 + -8;
                        piVar33 = piVar33 + -0x118;
                    } while (iVar22 != iVar15);
                }
                param_4[1] = iVar15;
            }
        }
        else {
            fcn.193939f38(param_4, uStack_f8 - uVar20);
        }
        puVar32 = *param_3;
        uVar20 = *(puVar32 + 0x28);
        iVar15 = uVar20 * 4;
        iVar22 = *param_5;
        if (*(iVar22 + 0x138) == *(iVar22 + 0x140)) {
            std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::resize(unsigned long)
                      (iVar22 + 0x138, iVar15);
            uStack_100 = 0;
        }
        else {
            uStack_100 = *(iVar22 + 0x140) - *(iVar22 + 0x138);
            std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::resize(unsigned long)
                      (iVar22 + 0x138, uStack_100 + iVar15);
            uStack_100 = uStack_100 >> 2;
        }
        iVar22 = *param_5;
        iVar29 = *(iVar22 + 0x138);
        if (iVar29 == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        if (*(iVar22 + 0x158) == *(iVar22 + 0x160)) {
            std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::resize(unsigned long)
                      (iVar22 + 0x158, iVar15);
            uStack_108 = 0;
        }
        else {
            uStack_108 = *(iVar22 + 0x160) - *(iVar22 + 0x158);
            std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::resize(unsigned long)
                      (iVar22 + 0x158, uStack_108 + iVar15);
            uStack_108 = uStack_108 >> 2;
        }
        iVar22 = *(*param_5 + 0x158);
        if (iVar22 == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uVar18 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar14, *0x8 + -0x9c, 4);
        if ((uVar18 & 1) == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uVar18 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar14, *0x8 + -0xa0, 4);
        if ((uVar18 & 1) == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uVar18 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar14, *0x8 + -0xa4, 4);
        if ((uVar18 & 1) == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uVar18 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar14, *0x8 + -0xa8, 4);
        if ((uVar18 & 1) == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uVar18 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar14, *0x8 + -0xac, 4);
        if ((uVar18 & 1) == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uVar18 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar14, *0x8 + -0xad);
        if ((uVar18 & 1) == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uVar18 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar14, *0x8 + -0xae);
        if ((uVar18 & 1) == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uVar18 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar14, *0x8 + -0xaf);
        if ((uVar18 & 1) == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        iVar10 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar14, *0x8 + -0xb0);
        uVar5 = uStack_ac;
        if (iVar10 == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        if (uStack_f8 != 0) {
            uVar6 = uStack_a8;
            uVar9 = uStack_a0._4_4_;
            cVar4 = uStack_b0._3_1_;
            uVar8 = uStack_a0;
            uStack_128 = 0;
            cVar3 = uStack_b0._2_1_;
            uVar7 = uStack_a8._4_4_;
            uStack_140 = 0;
            cVar2 = uStack_b0._1_1_;
            iVar30 = *0x193ae20b8;
            iVar15 = *0x193ae20b0;
            cVar1 = uStack_b0;
            uVar18 = uStack_128;
            do {
                uStack_128 = uVar18;
                piStack_120 = *param_4 + uStack_140 * 0x118;
                piStack_120[0x20] = 0;
                iVar23 = *param_5;
                iVar21 = param_5[1];
                if (iVar21 != 0) {
                    tmp_ldXn = *(iVar21 + 0x10);
                    iVar16 = tmp_ldXn;
                    tmp_stXn = iVar16 + 1;
                    uVar13 = tmp_stXn;
                    *(iVar21 + 0x10) = uVar13;
                    uVar13 = tmp_ldXn;
                }
                iVar16 = piStack_120[1];
                *piStack_120 = iVar23;
                piStack_120[1] = iVar21;
                if (iVar16 != 0) {
                    std::__1::__shared_weak_count::__release_weak()();
                }
                piStack_120[0x18] = iVar30;
                piStack_120[0x17] = iVar15;
                if (uVar26 != 0) {
                    auStack_d0[0] = (auStack_d0[0] >> 0x20) << 0x20;
                    iVar10 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar14, *0x8 + -0xd0, uVar6);
                    if (iVar10 == 0) {
                        uVar13 = **reloc.__stderrp;
                        goto code_r0x00019392c6c0;
                    }
                    iVar10 = auStack_d0[0];
                    if (iVar10 != 0) {
                        do {
                            iVar11 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                               (piVar14, *0x8 + -0xb8, uVar5);
                            if (iVar11 == 0) {
                                uVar13 = **reloc.__stderrp;
                                goto code_r0x00019392c6c0;
                            }
                            iVar10 = iVar10 + -1;
                        } while (iVar10 != 0);
                    }
                }
                auStack_d0[0] = (auStack_d0[0] >> 0x20) << 0x20;
                uVar18 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar14, *0x8 + -0xd0, uVar9);
                if ((uVar18 & 1) == 0) {
                    uVar13 = **reloc.__stderrp;
                    goto code_r0x00019392c6c0;
                }
                uStack_110 = auStack_d0[0];
                uStack_178 = uStack_128 + uStack_110;
                if (uVar20 <= uStack_178 && uStack_178 != uVar20) {
                    uVar13 = **reloc.__stderrp;
                    goto code_r0x00019392c6c0;
                }
                piStack_120[0x10] = uStack_128;
                piStack_120[0x11] = uStack_110;
                piStack_120[0x20] = uStack_100;
                if (cVar4 == '\0') {
                    if (uStack_110 == 0) goto code_r0x00019392cdb0;
                    iStack_188 = uStack_110 << 2;
                    bzero(iVar29 + uStack_100 * 4);
                    uStack_190 = uStack_110 + -1;
                    uStack_128 = uStack_100 + uStack_190 + 1;
                    piStack_120[0x21] = uStack_108;
                    if (cVar3 == '\0') goto code_r0x00019392ce5c;
code_r0x00019392ce0c:
                    do {
                        uStack_b9 = 0;
                        uVar18 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar14, *0x8 + -0xb9);
                        if ((uVar18 & 1) == 0) {
                            uVar13 = **reloc.__stderrp;
                            goto code_r0x00019392c6c0;
                        }
                        uStack_b8 = 0;
                        uVar19 = uStack_b9;
                        if (uVar19 != 0) {
                            iVar10 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                               (piVar14, *0x8 + -0xb8, uVar7);
                            if (iVar10 == 0) {
                                uVar13 = **reloc.__stderrp;
                                goto code_r0x00019392c6c0;
                            }
                            uVar19 = uStack_b8;
                        }
                        uVar18 = uStack_108;
                        uStack_108 = uVar18 + 1;
                        *(iVar22 + uVar18 * 4) = uVar19 / ~(-1 << (*puVar32 & 0x1f));
                        uVar19 = uStack_110 + -1;
                        uStack_110 = uVar19;
                    } while (uVar19 != 0);
                }
                else {
                    uVar18 = uStack_110;
                    if (uVar18 != 0) {
                        do {
                            uStack_b8 = 0;
                            iVar10 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                               (piVar14, *0x8 + -0xb8, uVar8);
                            if (iVar10 == 0) {
                                uVar13 = **reloc.__stderrp;
                                goto code_r0x00019392c6c0;
                            }
                            uVar24 = uStack_100;
                            uStack_100 = uVar24 + 1;
                            *(iVar29 + uVar24 * 4) = uStack_b8 / ~(-1 << (*puVar32 & 0x1f));
                            uVar19 = uVar18 + -1;
                            uVar18 = uVar19;
                        } while (uVar19 != 0);
                    }
code_r0x00019392cdb0:
                    piStack_120[0x21] = uStack_108;
                    uStack_128 = uStack_100;
                    if (cVar3 == '\0') {
                        if (uStack_110 != 0) {
                            iStack_188 = uStack_110 << 2;
                            uStack_190 = uStack_110 + -1;
code_r0x00019392ce5c:
                            bzero(iVar22 + uStack_108 * 4, iStack_188);
                            uStack_108 = uStack_108 + uStack_190 + 1;
                        }
                    }
                    else if (uStack_110 != 0) goto code_r0x00019392ce0c;
                }
                *(piStack_120 + 0x22) = 0;
                if (cVar2 != '\0') {
                    uStack_b8 = (uStack_b8 >> 8) << 8;
                    iVar10 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar14, *0x8 + -0xb8);
                    if (iVar10 == 0) {
                        uVar13 = **reloc.__stderrp;
                        goto code_r0x00019392c6c0;
                    }
                    *(piStack_120 + 0x22) = uStack_b8;
                }
                piStack_120[8] = 0;
                if (cVar1 != '\0') {
                    uStack_b8 = (uStack_b8 >> 8) << 8;
                    iVar10 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar14, *0x8 + -0xb8);
                    if ((iVar10 == 0) ||
                       ((uStack_b8 != '\0' &&
                        (iVar10 = BitstreamUnpack64(Bitstream*, unsigned long long*, unsigned long)
                                            (piVar14, piStack_120 + 8, 0x40),  iVar10 == 0)))) {
                        uVar13 = **reloc.__stderrp;
                        goto code_r0x00019392c6c0;
                    }
                }
                uStack_140 = uStack_140 + 1;
                uVar18 = uStack_178;
                uStack_100 = uStack_128;
            } while (uStack_140 != uStack_f8);
        }
        iVar22 = *(pcVar12 + 0x30) + (*(pcVar12 + 0x18) >> 3);
        if ((*(pcVar12 + 0x18) & 7) != 0) {
            iVar22 = iVar22 + 1;
        }
        *(pcVar12 + 0x30) = iVar22;
        pcVar12[0x20] = '\0';
        geo::codec::attributesForFeatureType(signed char)(4);
        std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes>&&)
                  (*0x8 + -0x98, *0x8 + -0xd0);
        std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(*0x8 + -0xd0);
        apiStack_f0[0] = piStack_98;
        apiStack_f0[1] = piStack_90;
        if (piStack_90 != NULL) {
            tmp_ldXn = piStack_90[1];
            iVar22 = tmp_ldXn;
            tmp_stXn = iVar22 + 1;
            iVar22 = tmp_stXn;
            piStack_90[1] = iVar22;
            uVar13 = tmp_ldXn;
        }
        puVar17 = FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
                            (*param_5 + 0x458, apiStack_f0);
        apiStack_f0[2] = *puVar17;
        iStack_d8 = puVar17[1];
        if (iStack_d8 != 0) {
            tmp_ldXn = *(iStack_d8 + 8);
            iVar22 = tmp_ldXn;
            tmp_stXn = iVar22 + 1;
            uVar13 = tmp_stXn;
            *(iStack_d8 + 8) = uVar13;
            uVar13 = tmp_ldXn;
        }
        std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(apiStack_f0 + 2);
        std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(apiStack_f0);
        uVar20 = bool geo::codec::decodeAttributeSet<GeoCodecsFeature>(signed char, Bitstream*, unsigned int, FeatureStyleAttributesSet*, GeoCodecsFeature*, unsigned long)
                           (4, piVar14, uStack_f8, *param_5 + 0x458, *param_4, 0x118);
        if ((uVar20 & 1) == 0) {
            uVar13 = **reloc.__stderrp;
            goto code_r0x00019392c6c0;
        }
        uVar13 = 1;
        if (*pcVar12 == '\0') goto code_r0x00019392c714;
    }
    piVar14 = geo::codec::Allocator::instance()();
    (**(*piVar14 + 0x28))(piVar14, *(pcVar12 + 0x28), 0);
code_r0x00019392c714:
    piVar14 = geo::codec::Allocator::instance()();
    (**(*piVar14 + 0x28))(piVar14, pcVar12, 0);
    piVar14 = piStack_90;
    if (piVar14 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_90[1];
        iVar22 = tmp_ldXn;
        tmp_stXn = iVar22 + -1;
        iVar22 = tmp_stXn;
        piStack_90[1] = iVar22;
        iVar22 = tmp_ldXn;
        LORelease();
        if (iVar22 == 0) {
            (**(*piVar14 + 0x10))(piVar14);
            std::__1::__shared_weak_count::__release_weak()(piVar14);
        }
    }
    iVar22 = iStack_88;
    iVar30 = iStack_80;
    iVar15 = std::__1::chrono::steady_clock::now()();
    iVar29 = iStack_70;
    auStack_d0[0] = iVar22;
    if (iVar22 != 0) {
        piStack_98 = *0x8 + -0xd0;
        iVar22 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar30 + 0x778, *0x8 + -0xd0, 0x74c + 0x193af9000, *0x8 + -0x98, *0x8 + -0xb8);
        iVar15 = SUB168(SEXT816(iVar15 - iVar29) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar22 + 0x20) = ((iVar15 >> 7) - (iVar15 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar14 = piStack_78;
    if (piStack_78 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_78[1];
        iVar22 = tmp_ldXn;
        tmp_stXn = iVar22 + -1;
        iVar22 = tmp_stXn;
        piStack_78[1] = iVar22;
        iVar22 = tmp_ldXn;
        LORelease();
        if (iVar22 == 0) {
            (**(*piVar14 + 0x10))(piVar14);
            std::__1::__shared_weak_count::__release_weak()(piVar14);
            return uVar13;
        }
        return uVar13;
    }
    return uVar13;
}
