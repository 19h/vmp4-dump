
ulong geo::codec::_readLinesExtendedChapter(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    uint uVar3;
    int64_t iVar4;
    int32_t iVar5;
    int32_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong *puVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    char *pcVar24;
    int64_t iVar25;
    uint64_t *puVar26;
    char acStack_122 [2];
    uint64_t *puStack_120;
    int64_t iStack_118;
    uint64_t auStack_110 [2];
    ulong uStack_100;
    int64_t iStack_f8;
    char cStack_e9;
    uint32_t uStack_e8;
    uint32_t auStack_e4 [2];
    char acStack_da [2];
    uint32_t auStack_d8 [2];
    uint64_t uStack_d0;
    int64_t iStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    code *pcStack_b0;
    int64_t *piStack_a8;
    code **ppcStack_98;
    code *pcStack_90;
    int64_t *piStack_88;
    int64_t iStack_78;
    int64_t iStack_70;
    
    iStack_70 = **reloc.__stack_chk_guard;
    iStack_c8 = *param_2;
    uVar17 = param_1[1];
    if (uVar17 != 0) {
        uVar12 = 0;
        do {
            if (*(*param_1 + uVar12 * 0x10) == 0x91) {
                pcVar24 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar12, 0x91, iStack_c8 + 0x778);
                uStack_d0 = 0x44c + 0x193b8a000;
                iStack_c8 = *param_2;
                piStack_c0 = param_2[1];
                if (piStack_c0 == NULL) goto code_r0x0001938fe8a8;
                goto code_r0x0001938fe89c;
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 <= uVar17 && uVar17 != uVar12);
    }
    pcVar24 = NULL;
    uStack_d0 = 0x44c + 0x193b8a000;
    piStack_c0 = param_2[1];
    if (piStack_c0 != NULL) {
code_r0x0001938fe89c:
        tmp_ldXn = piStack_c0[1];
        iVar7 = tmp_ldXn;
        tmp_stXn = iVar7 + 1;
        iVar7 = tmp_stXn;
        piStack_c0[1] = iVar7;
        uVar8 = tmp_ldXn;
    }
code_r0x0001938fe8a8:
    iVar7 = std::__1::chrono::steady_clock::now()();
    iStack_b8 = iVar7;
    if (pcVar24 == NULL) {
code_r0x0001938fea54:
        uVar8 = 1;
        uVar17 = 0x44c + 0x193b8a000;
        iVar25 = iStack_c8;
        iVar10 = std::__1::chrono::steady_clock::now()();
        auStack_110[0] = uVar17;
        if (uVar17 == 0) goto code_r0x0001938fead8;
    }
    else {
        uVar17 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar24, pcVar24 + 0x40);
        if ((uVar17 & 1) == 0) {
            uVar8 = **reloc.__stderrp;
code_r0x0001938fe958:
            fprintf(uVar8, 0x8ff + 0x193b8a000);
            uVar8 = 0;
            if (param_1 != NULL) {
code_r0x0001938fe978:
                if (*pcVar24 != '\0') {
                    piVar9 = geo::codec::Allocator::instance()();
                    (**(*piVar9 + 0x28))(piVar9, *(pcVar24 + 0x28), 0);
                }
                piVar9 = geo::codec::Allocator::instance()();
                (**(*piVar9 + 0x28))(piVar9, pcVar24, 0);
            }
        }
        else {
            auStack_d8[1] = 0;
            uVar17 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar24, auStack_d8 + 1);
            if ((uVar17 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            if (*(pcVar24 + 0x40) < auStack_d8[1]) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            if (auStack_d8[1] != 1) goto code_r0x0001938fea54;
            auStack_d8[0] = 0;
            uVar17 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar24, auStack_d8);
            if ((uVar17 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            std::__1::vector<GeoCodecsPhysicalFeature, geo::StdAllocator<GeoCodecsPhysicalFeature, geo::codec::Allocator> >::resize(unsigned long)
                      (*param_2 + 0x98, auStack_d8[0]);
            iVar7 = *param_2;
            iVar10 = *(iVar7 + 0x98);
            if (*(iVar7 + 0xa0) != iVar10) {
                iVar25 = 0;
                uVar17 = 0;
                do {
                    iVar18 = param_2[1];
                    if (iVar18 != 0) {
                        tmp_ldXn = *(iVar18 + 0x10);
                        iVar4 = tmp_ldXn;
                        tmp_stXn = iVar4 + 1;
                        uVar8 = tmp_stXn;
                        *(iVar18 + 0x10) = uVar8;
                        uVar8 = tmp_ldXn;
                    }
                    piVar9 = iVar10 + iVar25;
                    iVar10 = piVar9[1];
                    *piVar9 = iVar7;
                    piVar9[1] = iVar18;
                    if (iVar10 != 0) {
                        std::__1::__shared_weak_count::__release_weak()();
                    }
                    uVar17 = uVar17 + 1;
                    iVar7 = *param_2;
                    iVar10 = *(iVar7 + 0x98);
                    iVar25 = iVar25 + 0x108;
                } while (uVar17 < (*(iVar7 + 0xa0) - iVar10 >> 3) * (0x3e0f83e1 | 0xf83e0f800000000));
            }
            uVar17 = *(pcVar24 + 0x30);
            if (*(pcVar24 + 0x38) < uVar17) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            piVar9 = pcVar24 + 8;
            *piVar9 = *(pcVar24 + 0x28) + uVar17;
            pcVar24[0x20] = '\x01';
            *(pcVar24 + 0x10) = *(pcVar24 + 0x38) - uVar17;
            *(pcVar24 + 0x18) = 0;
            acStack_da[1] = '\0';
            uVar17 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, acStack_da + 1);
            if ((uVar17 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            if (acStack_da[1] != '\0') {
                uStack_100 = (uStack_100 >> 0x20) << 0x20;
                iVar5 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)(piVar9, &uStack_100, 5);
                puVar11 = uStack_100;
                if (iVar5 != 0) {
                    iVar10 = *param_2;
                    iVar25 = *(iVar10 + 0x98);
                    iVar7 = *(iVar10 + 0xa0) - iVar25;
                    if (iVar7 != 0) {
                        iVar7 = SUB168(SEXT816(iVar7) * SEXT816(0x3e0f83e1 | 0xf83e0f800000000), 8);
                        uVar17 = (iVar7 >> 4) - (iVar7 >> 0x3f);
                        uVar12 = uStack_100;
                        uVar20 = *(pcVar24 + 0x10) * 8;
                        if (uStack_100 == 0) {
                            if (uVar20 <= *(pcVar24 + 0x18) + uVar12 && *(pcVar24 + 0x18) + uVar12 != uVar20) {
                                *(iVar25 + 0x80) = 0;
                                goto code_r0x0001938fef3c;
                            }
                            if (uVar17 < 2) {
                                uVar17 = 1;
                            }
                            puVar19 = iVar25 + 0x80;
                            do {
                                *puVar19 = 0;
                                puVar19[1] = 0;
                                uVar17 = uVar17 + -1;
                                puVar19 = puVar19 + 0x21;
                            } while (uVar17 != 0);
                        }
                        else {
                            uVar21 = 0;
                            uVar22 = 0;
                            if (uVar17 < 2) {
                                uVar17 = 1;
                            }
                            uVar23 = *(pcVar24 + 0x18);
                            do {
                                iVar7 = iVar25 + uVar21 * 0x108;
                                *(iVar7 + 0x80) = uVar22;
                                if (uVar20 <= uVar23 + uVar12 && uVar23 + uVar12 != uVar20) goto code_r0x0001938fef3c;
                                uVar14 = 0;
                                uVar13 = uVar12;
                                do {
                                    uVar16 = 8 - (uVar23 & 7);
                                    uVar2 = uVar13;
                                    if (uVar16 <= uVar13) {
                                        uVar2 = uVar16;
                                    }
                                    uVar15 = uVar2;
                                    uVar14 = *(*piVar9 + (uVar23 >> 3)) >> ((8 - (uVar23 & 7)) - uVar15 & 0x3f) &
                                             ~(-1 << (uVar15 & 0x1f)) | uVar14 << (uVar15 & 0x1f);
                                    uVar23 = uVar2 + uVar23;
                                    *(pcVar24 + 0x18) = uVar23;
                                    uVar13 = uVar13 - uVar2;
                                } while (uVar13 != 0);
                                *(iVar7 + 0x88) = uVar14;
                                uVar22 = uVar14 + uVar22;
                                uVar21 = uVar21 + 1;
                            } while (uVar21 != uVar17);
                        }
                    }
                    goto code_r0x0001938fee00;
                }
code_r0x0001938fef3c:
                uStack_100 = puVar11;
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            iVar10 = *param_2;
            iVar25 = *(iVar10 + 0x98);
            iVar7 = *(iVar10 + 0xa0) - iVar25;
            if (iVar7 != 0) {
                iVar7 = SUB168(SEXT816(iVar7) * SEXT816(0x3e0f83e1 | 0xf83e0f800000000), 8);
                uVar17 = (iVar7 >> 4) - (iVar7 >> 0x3f);
                if (uVar17 < 2) {
                    uVar17 = 1;
                }
                if (uVar17 < 4) {
                    uVar20 = 0;
                }
                else {
                    uVar20 = uVar17 & 0xfffffffffffffffc;
                    uVar12 = 3;
                    iVar7 = iVar25;
                    do {
                        iVar5 = uVar12;
                        *(iVar7 + 0x290) = iVar5 + -1 & 0xfffffffe;
                        *(iVar7 + 0x398) = uVar12 & 0xffffffff;
                        *(iVar7 + 0x80) = iVar5 + -3 & 0xfffffffc;
                        *(iVar7 + 0x88) = 1;
                        *(iVar7 + 0x188) = iVar5 + -2 & 0xfffffffd;
                        *(iVar7 + 400) = 1;
                        uVar12 = uVar12 + 4;
                        *(iVar7 + 0x298) = 1;
                        *(iVar7 + 0x3a0) = 1;
                        iVar7 = iVar7 + 0x420;
                    } while (uVar12 - uVar20 != 3);
                    if (uVar17 == uVar20) goto code_r0x0001938fee00;
                }
                puVar19 = iVar25 + uVar20 * 0x108 + 0x88;
                do {
                    uVar12 = uVar20 & 0xffffffff;
                    uVar20 = uVar20 + 1;
                    puVar19[-1] = uVar12;
                    *puVar19 = 1;
                    puVar19 = puVar19 + 0x21;
                } while (uVar17 != uVar20);
            }
code_r0x0001938fee00:
            uVar17 = geo::codec::decodeSectionEncoding(Bitstream*, GeoCodecsVertexPool**, bool, GeoCodecsTileKey const*, GeoCodecsVectorTileRawPoint*)
                               (piVar9, iVar10 + 0x350, 0, 0, 0);
            if ((uVar17 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            uVar17 = geo::codec::decodeSectionZEncoding(Bitstream*, GeoCodecsVertexPool*)(piVar9, *(*param_2 + 0x350));
            if ((uVar17 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            acStack_da[0] = '\0';
            uVar17 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, acStack_da);
            if ((uVar17 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            if (acStack_da[0] != '\0') {
                auStack_110[0] = (auStack_110[0] >> 0x20) << 0x20;
                uVar17 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)(piVar9, auStack_110, 2);
                if ((uVar17 & 1) == 0) {
                    uVar8 = **reloc.__stderrp;
                }
                else {
                    auStack_e4[1] = 0;
                    uVar17 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                       (piVar9, auStack_e4 + 1, 5);
                    if ((uVar17 & 1) == 0) {
                        uVar8 = **reloc.__stderrp;
                    }
                    else {
                        uStack_100 = NULL;
                        uVar17 = geo::codec::_makeSpaceForLabels(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                           ((*(*param_2 + 0xa0) - *(*param_2 + 0x98) >> 3) *
                                            (0x3e0f83e1 | 0xf83e0f800000000), &uStack_100, param_2);
                        if ((uVar17 & 1) != 0) {
                            iVar7 = *param_2;
                            if (*(iVar7 + 0xa0) != *(iVar7 + 0x98)) {
                                uVar17 = 0;
                                iVar10 = *(iVar7 + 0x358);
                                uVar12 = *(iVar7 + 0x360) - iVar10;
                                puVar26 = uStack_100;
                                uVar3 = auStack_110[0];
                                iVar5 = auStack_e4[1];
                                do {
                                    uVar20 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, acStack_da);
                                    if ((uVar20 & 1) == 0) {
                                        uVar8 = **reloc.__stderrp;
                                        goto code_r0x0001938fe958;
                                    }
                                    if (acStack_da[0] != '\0') {
                                        auStack_e4[0] = 0;
                                        uVar20 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                           (piVar9, auStack_e4, uVar3);
                                        if ((uVar20 & 1) == 0) {
                                            uVar8 = **reloc.__stderrp;
                                            goto code_r0x0001938fe958;
                                        }
                                        uVar15 = auStack_e4[0];
                                        if (uVar15 != 0) {
                                            uStack_e8 = 0;
                                            uVar20 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                               (piVar9, &uStack_e8, iVar5);
                                            if ((uVar20 & 1) == 0) {
                                                uStack_100 = puVar26;
                                                puVar11 = uStack_100;
                                                goto code_r0x0001938fef3c;
                                            }
                                            uVar20 = uStack_e8;
                                            puVar11 = puVar26;
                                            if ((uVar12 < uVar20 || uVar12 == uVar20) ||
                                               (iVar7 = *param_2,  puVar11 = uStack_100,  *(iVar7 + 0x420) <= puVar26))
                                            goto code_r0x0001938fef3c;
                                            piVar1 = *(iVar7 + 0x418) + puVar26 * 0x18;
                                            *piVar1 = iVar10 + uVar20;
                                            *(piVar1 + 2) = 0;
                                            uVar8 = geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                              (uVar20, *(iVar7 + 0x378), *(iVar7 + 0x380));
                                            iVar7 = *param_2;
                                            iVar25 = *(iVar7 + 0x418);
                                            *(iVar25 + puVar26 * 0x18 + 8) = uVar8;
                                            iVar7 = *(iVar7 + 0x98) + uVar17 * 0x108;
                                            *(iVar7 + 0x18) = puVar26;
                                            *(iVar7 + 0x20) = 1;
                                            *(iVar7 + 0x10) = *(iVar25 + puVar26 * 0x18);
                                            puVar26 = puVar26 + 1;
                                            if (1 < uVar15) {
                                                iVar7 = uVar15 + -1;
                                                do {
                                                    uStack_e8 = 0;
                                                    iVar6 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar9, &uStack_e8, iVar5);
                                                    puVar11 = uStack_100;
                                                    if ((iVar6 == 0) || (uVar12 < uStack_e8 || uVar12 == uStack_e8))
                                                    goto code_r0x0001938fef3c;
                                                    iVar7 = iVar7 + -1;
                                                } while (iVar7 != 0);
                                            }
                                        }
                                    }
                                    uVar17 = uVar17 + 1;
                                } while (uVar17 < (*(*param_2 + 0xa0) - *(*param_2 + 0x98) >> 3) *
                                                  (0x3e0f83e1 | 0xf83e0f800000000));
                            }
                            goto code_r0x0001938ff0b8;
                        }
                        uVar8 = **reloc.__stderrp;
                    }
                }
                goto code_r0x0001938fe958;
            }
code_r0x0001938ff0b8:
            cStack_e9 = '\0';
            uVar17 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, &cStack_e9);
            if ((uVar17 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            if (cStack_e9 == '\0') {
                geo::codec::attributesForFeatureType(signed char)(0x15);
                puStack_120 = uStack_100;
                iStack_118 = iStack_f8;
                if (iStack_f8 != 0) {
                    puVar19 = iStack_f8 + 8;
                    tmp_ldXn = *puVar19;
                    iVar7 = tmp_ldXn;
                    tmp_stXn = iVar7 + 1;
                    uVar8 = tmp_stXn;
                    *puVar19 = uVar8;
                    uVar8 = tmp_ldXn;
                }
                puVar11 = FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                    (*param_2 + 0x458, &puStack_120);
                auStack_110[0] = *puVar11;
                auStack_110[1] = puVar11[1];
                if (auStack_110[1] != 0) {
                    tmp_ldXn = *(auStack_110[1] + 8);
                    iVar7 = tmp_ldXn;
                    tmp_stXn = iVar7 + 1;
                    uVar8 = tmp_stXn;
                    *(auStack_110[1] + 8) = uVar8;
                    uVar8 = tmp_ldXn;
                }
                std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes>&&)
                          (&uStack_100, auStack_110);
                std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(auStack_110);
                std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(&puStack_120);
                iVar7 = *(*param_2 + 0x98);
                if (*(*param_2 + 0xa0) != iVar7) {
                    uVar17 = 0;
                    iVar10 = 0x68;
                    do {
                        std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                  (iVar7 + iVar10, uStack_100, iStack_f8);
                        uVar17 = uVar17 + 1;
                        iVar7 = *(*param_2 + 0x98);
                        iVar10 = iVar10 + 0x108;
                    } while (uVar17 < (*(*param_2 + 0xa0) - iVar7 >> 3) * (0x3e0f83e1 | 0xf83e0f800000000));
                }
                std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(&uStack_100);
            }
            else {
                iVar7 = *param_2;
                uVar17 = bool geo::codec::decodeAttributeSet<GeoCodecsFeature>(signed char, Bitstream*, unsigned int, FeatureStyleAttributesSet*, GeoCodecsFeature*, unsigned long)
                                   (0x15, piVar9, (*(iVar7 + 0xa0) - *(iVar7 + 0x98) >> 3) * (0x83e1 | 0x3e0f0000), 
                                    iVar7 + 0x458, *(iVar7 + 0x98), 0x108);
                if ((uVar17 & 1) == 0) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x0001938fe958;
                }
            }
            acStack_122[1] = '\0';
            uVar17 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, acStack_122 + 1);
            if ((uVar17 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            iVar7 = *param_2;
            if (acStack_122[1] == '\0') {
                iVar25 = *(iVar7 + 0x98);
                iVar10 = *(iVar7 + 0xa0);
            }
            else {
                iVar25 = *(iVar7 + 0xa0);
                iVar10 = iVar25;
                if (iVar25 != *(iVar7 + 0x98)) {
                    uVar17 = 0;
                    iVar7 = 0x40;
                    do {
                        uStack_100 = (uStack_100 >> 8) << 8;
                        iVar5 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, &uStack_100);
                        puVar11 = uStack_100;
                        if ((iVar5 == 0) ||
                           ((uStack_100 != '\0' &&
                            (iVar5 = BitstreamUnpack64(Bitstream*, unsigned long long*, unsigned long)
                                               (piVar9, *(*param_2 + 0x98) + iVar7, 0x40),  puVar11 = uStack_100, 
                            iVar5 == 0)))) goto code_r0x0001938fef3c;
                        uVar17 = uVar17 + 1;
                        iVar25 = *(*param_2 + 0x98);
                        iVar10 = *(*param_2 + 0xa0);
                        iVar7 = iVar7 + 0x108;
                    } while (uVar17 < (iVar10 - iVar25 >> 3) * (0x3e0f83e1 | 0xf83e0f800000000));
                }
            }
            iStack_78 = *0x8 + -0x90;
            pcStack_90 = typeinfo for geo::Allocator + 0x180 + 0x10;
            piStack_88 = param_2;
            geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                      (piVar9, (iVar10 - iVar25 >> 3) * (0x3e0f83e1 | 0xf83e0f800000000), *0x8 + -0x90);
            std::__1::function<void (unsigned long, float)>::~function()(*0x8 + -0x90);
            ppcStack_98 = &pcStack_b0;
            pcStack_b0 = typeinfo for geo::Allocator + 0x200 + 0x10;
            piStack_a8 = param_2;
            geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                      (piVar9, (*(*param_2 + 0xa0) - *(*param_2 + 0x98) >> 3) * (0x3e0f83e1 | 0xf83e0f800000000), 
                       &pcStack_b0);
            std::__1::function<void (unsigned long, float)>::~function()(&pcStack_b0);
            acStack_122[0] = '\0';
            uVar17 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, acStack_122);
            if ((uVar17 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x0001938fe958;
            }
            if (acStack_122[0] != '\0') {
                auStack_e4[0] = (auStack_e4[0] >> 8) << 8;
                uStack_100 = CONCAT44(uStack_100._4_4_, 1);
                iVar5 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, auStack_e4);
                puVar11 = uStack_100;
                if ((iVar5 == 0) ||
                   ((auStack_e4[0] != '\0' &&
                    (iVar5 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(piVar9, &uStack_100),  puVar11 = uStack_100
                    ,  iVar5 == 0)))) goto code_r0x0001938fef3c;
                auStack_110[0] = (auStack_110[0] >> 0x20) << 0x20;
                iVar5 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)(piVar9, auStack_110, 5);
                if (iVar5 == 0) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x0001938fe958;
                }
                if (*(*param_2 + 0xa0) != *(*param_2 + 0x98)) {
                    uVar17 = 0;
                    uVar3 = auStack_110[0];
                    iVar5 = uStack_100;
                    iVar7 = 0x104;
                    do {
                        uStack_e8 = (uStack_e8 >> 8) << 8;
                        uVar12 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, &uStack_e8);
                        if ((uVar12 & 1) == 0) {
                            uVar8 = **reloc.__stderrp;
                            goto code_r0x0001938fe958;
                        }
                        if (uStack_e8 == '\0') {
                            iVar10 = *param_2;
                            iVar25 = *(iVar10 + 0x98);
                        }
                        else {
                            auStack_e4[1] = 0;
                            iVar6 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                              (piVar9, auStack_e4 + 1, uVar3);
                            if (iVar6 == 0) {
                                uVar8 = **reloc.__stderrp;
                                goto code_r0x0001938fe958;
                            }
                            iVar10 = *param_2;
                            iVar25 = *(iVar10 + 0x98);
                            *(iVar25 + iVar7) = auStack_e4[1] * iVar5;
                        }
                        uVar17 = uVar17 + 1;
                        iVar7 = iVar7 + 0x108;
                    } while (uVar17 < (*(iVar10 + 0xa0) - iVar25 >> 3) * (0x3e0f83e1 | 0xf83e0f800000000));
                }
            }
            iVar7 = *(pcVar24 + 0x30) + (*(pcVar24 + 0x18) >> 3);
            if ((*(pcVar24 + 0x18) & 7) != 0) {
                iVar7 = iVar7 + 1;
            }
            *(pcVar24 + 0x30) = iVar7;
            pcVar24[0x20] = '\0';
            uVar8 = 1;
            if (param_1 != NULL) goto code_r0x0001938fe978;
        }
        uVar17 = uStack_d0;
        iVar25 = iStack_c8;
        iVar7 = iStack_b8;
        iVar10 = std::__1::chrono::steady_clock::now()();
        auStack_110[0] = uVar17;
        if (uVar17 == 0) goto code_r0x0001938fead8;
    }
    uStack_100 = auStack_110;
    iVar25 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iVar25 + 0x778, auStack_110, 0x74c + 0x193af9000, &uStack_100, auStack_e4 + 1);
    iVar7 = SUB168(SEXT816(iVar10 - iVar7) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar25 + 0x20) = ((iVar7 >> 7) - (iVar7 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x0001938fead8:
    piVar9 = piStack_c0;
    if (piVar9 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_c0[1];
        iVar7 = tmp_ldXn;
        tmp_stXn = iVar7 + -1;
        iVar7 = tmp_stXn;
        piStack_c0[1] = iVar7;
        iVar7 = tmp_ldXn;
        LORelease();
        if (iVar7 == 0) {
            (**(*piVar9 + 0x10))(piVar9);
            std::__1::__shared_weak_count::__release_weak()(piVar9);
        }
    }
    if (**reloc.__stack_chk_guard != iStack_70) {
    // WARNING: Subroutine does not return
        __stack_chk_fail();
    }
    return uVar8;
}
