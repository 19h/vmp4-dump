
uint32_t geo::codec::_readPolygonsofType(VMP4Tile*, unsigned short, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, ulong param_2, int64_t **param_3)

{
    float *pfVar1;
    ulong uVar2;
    int32_t iVar3;
    int32_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t **ppiVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    ulong uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint8_t *puVar17;
    char *pcVar18;
    uint32_t uVar19;
    int64_t *piVar20;
    uint32_t uVar21;
    int64_t *piVar22;
    char *pcVar23;
    int64_t *piVar24;
    uint uVar25;
    ulong uVar26;
    float fVar27;
    int64_t iStack_158;
    int64_t *piStack_140;
    int64_t **ppiStack_138;
    int64_t *piStack_130;
    uchar *puStack_118;
    int64_t iStack_110;
    char cStack_103;
    ushort uStack_102;
    int64_t *apiStack_100 [2];
    ulong uStack_f0;
    int64_t *piStack_e8;
    int64_t *piStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t *piStack_c8;
    int64_t *piStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    int64_t *piStack_a0;
    int64_t *piStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t *piStack_78;
    char acStack_70 [16];
    
    iStack_88 = 0;
    iStack_80 = 0;
    piStack_a0 = *param_3;
    uVar16 = param_1[1];
    uVar19 = param_2;
    if (uVar16 != 0) {
        uVar15 = 0;
        do {
            if (*(*param_1 + uVar15 * 0x10) == uVar19) {
                pcVar18 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar15, param_2, piStack_a0 + 0xef);
                piStack_a0 = *param_3;
                goto code_r0x00019392b1dc;
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 <= uVar16 && uVar16 != uVar15);
    }
    pcVar18 = NULL;
code_r0x00019392b1dc:
    iVar5 = chapterTypeAsString(ChapterType)(param_2);
    piStack_98 = param_3[1];
    if (piStack_98 != NULL) {
        tmp_ldXn = piStack_98[1];
        iVar6 = tmp_ldXn;
        tmp_stXn = iVar6 + 1;
        iVar6 = tmp_stXn;
        piStack_98[1] = iVar6;
        uVar14 = tmp_ldXn;
    }
    iStack_a8 = iVar5;
    iVar6 = std::__1::chrono::steady_clock::now()();
    iStack_90 = iVar6;
    if (pcVar18 == NULL) {
        uVar19 = 1;
        uVar21 = 1;
        piVar22 = piStack_a0;
        iVar7 = std::__1::chrono::steady_clock::now()();
        piStack_c8 = iVar5;
        if (iVar5 == 0) goto code_r0x00019392b620;
    }
    else {
        uStack_b8 = 0;
        uStack_b0 = 0;
        piStack_c8 = NULL;
        piStack_c0 = NULL;
        iStack_d0 = 0;
        iVar5 = (*param_3)[0x6b];
        iVar6 = (*param_3)[0x6c];
        uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar18, *0x8 + -0xac);
        if ((uVar16 & 1) == 0) {
            uVar14 = **reloc.__stderrp;
code_r0x00019392b31c:
            fprintf(uVar14, 0x8ff + 0x193b8a000);
            pcVar8 = NULL;
code_r0x00019392b338:
            uVar19 = 0;
            uVar21 = 0;
            if (iStack_80 != 0) {
code_r0x00019392b344:
                uVar21 = uVar19;
                piVar22 = geo::codec::Allocator::instance()();
                (**(*piVar22 + 0x28))(piVar22, *(iStack_80 + 8), 0);
                piVar22 = geo::codec::Allocator::instance()();
                (**(*piVar22 + 0x28))(piVar22, *(iStack_80 + 0x20), 0);
                piVar22 = geo::codec::Allocator::instance()();
                (**(*piVar22 + 0x28))(piVar22, iStack_80, 0);
            }
code_r0x00019392b3dc:
            if (iStack_88 != 0) {
                piVar22 = geo::codec::Allocator::instance()();
                (**(*piVar22 + 0x28))(piVar22, *(iStack_88 + 8), 0);
                piVar22 = geo::codec::Allocator::instance()();
                (**(*piVar22 + 0x28))(piVar22, *(iStack_88 + 0x20), 0);
                piVar22 = geo::codec::Allocator::instance()();
                (**(*piVar22 + 0x28))(piVar22, iStack_88, 0);
            }
            if ((param_1 == NULL) || (pcVar8 == NULL)) {
                if (param_1 == NULL) goto code_r0x00019392b55c;
            }
            else {
                if (*pcVar8 != '\0') {
                    piVar22 = geo::codec::Allocator::instance()();
                    (**(*piVar22 + 0x28))(piVar22, *(pcVar8 + 0x28), 0);
                }
                piVar22 = geo::codec::Allocator::instance()();
                (**(*piVar22 + 0x28))(piVar22, pcVar8, 0);
            }
            if (*pcVar18 != '\0') {
                piVar22 = geo::codec::Allocator::instance()();
                (**(*piVar22 + 0x28))(piVar22, *(pcVar18 + 0x28), 0);
            }
            piVar22 = geo::codec::Allocator::instance()();
            (**(*piVar22 + 0x28))(piVar22, pcVar18, 0);
        }
        else {
            uVar16 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar18, *0x8 + -0xb0);
            if ((uVar16 & 1) == 0) {
                uVar14 = **reloc.__stderrp;
                goto code_r0x00019392b31c;
            }
            uStack_f0 = 0x125 + 0x193b8a000;
            piVar22 = uStack_b0;
            piStack_e8 = *param_3;
            piStack_e0 = param_3[1];
            if (piStack_e0 != NULL) {
                tmp_ldXn = piStack_e0[1];
                iVar7 = tmp_ldXn;
                tmp_stXn = iVar7 + 1;
                iVar7 = tmp_stXn;
                piStack_e0[1] = iVar7;
                uVar14 = tmp_ldXn;
            }
            iVar7 = std::__1::chrono::steady_clock::now()();
            iStack_d8 = iVar7;
            pcVar8 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                               (param_1, uStack_b0._4_4_, 0x14, *param_3 + 0xef);
            piStack_130 = piVar22;
            if ((pcVar8 == NULL) ||
               (uVar16 = geo::codec::decodeVertices(VMP4Chapter*, GeoCodecsCurveVertexPool**, GeoCodecsVertexPool**, bool)
                                   (pcVar8, *0x8 + -0x80, *0x8 + -0x88, 
                                    0x42 < *(pcVar8 + 0x40) && *(pcVar8 + 0x40) != 0x43),  (uVar16 & 1) == 0)) {
                fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                piVar20 = uStack_f0;
                iVar4 = 6;
                piVar24 = piStack_e8;
                iVar7 = iStack_d8;
                piVar9 = std::__1::chrono::steady_clock::now()();
                piStack_78 = piVar20;
                iVar3 = 6;
                if (piVar20 != NULL) goto code_r0x00019392b6d4;
            }
            else {
                iVar4 = 0;
                piVar20 = 0x125 + 0x193b8a000;
                piVar24 = piStack_e8;
                piVar9 = std::__1::chrono::steady_clock::now()();
                iVar3 = 0;
                piStack_78 = piVar20;
                if (piVar20 != NULL) {
code_r0x00019392b6d4:
                    iVar4 = iVar3;
                    puStack_118 = *0x8 + -0x78;
                    iVar10 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                                       (piVar24 + 0xef, *0x8 + -0x78, 0x74c + 0x193af9000, &puStack_118, *0x8 + -0x70);
                    iVar7 = SUB168(SEXT816(piVar9 - iVar7) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
                    *(iVar10 + 0x20) = ((iVar7 >> 7) - (iVar7 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
                    piVar22 = piVar9;
                }
            }
            uVar21 = piVar22;
            piVar20 = piStack_e0;
            if (piVar20 != NULL) {
                LOAcquire();
                tmp_ldXn = piStack_e0[1];
                iVar7 = tmp_ldXn;
                tmp_stXn = iVar7 + -1;
                iVar7 = tmp_stXn;
                piStack_e0[1] = iVar7;
                iVar7 = tmp_ldXn;
                LORelease();
                if (iVar7 == 0) {
                    (**(*piVar20 + 0x10))(piVar20);
                    std::__1::__shared_weak_count::__release_weak()(piVar20);
                }
            }
            if (iVar4 == 6) {
joined_r0x00019392c34c:
                uVar19 = 0;
                uVar21 = 0;
joined_r0x00019392c310:
                if (iStack_80 != 0) goto code_r0x00019392b344;
                goto code_r0x00019392b3dc;
            }
            if (iVar4 == 0) {
                if (uVar19 != 0x20) {
code_r0x00019392b910:
                    iVar7 = iStack_80;
                    if ((iVar7 != 0) || (iVar7 = iStack_88,  iVar7 != 0)) {
                        uVar16 = *(iVar7 + 0x28);
                    }
                    else {
                        uVar16 = 0;
                    }
                    uVar15 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar18, *0x8 + -0xb4);
                    if ((uVar15 & 1) == 0) {
                        uVar14 = **reloc.__stderrp;
code_r0x00019392ba10:
                        fprintf(uVar14, 0x8ff + 0x193b8a000);
                        goto joined_r0x00019392c34c;
                    }
                    if (0xffff < uStack_b8._4_4_) {
                        uVar14 = **reloc.__stderrp;
                        goto code_r0x00019392ba10;
                    }
                    uVar15 = geo::codec::_makeSpaceForLabels(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                       (uStack_b8._4_4_, &iStack_d0, param_3);
                    if ((uVar15 & 1) == 0) {
                        uVar14 = **reloc.__stderrp;
                        goto code_r0x00019392ba10;
                    }
                    uVar15 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar18, *0x8 + -0xb8);
                    if ((uVar15 & 1) == 0) {
                        uVar14 = **reloc.__stderrp;
                        goto code_r0x00019392ba10;
                    }
                    if (0xffff < uStack_b8) {
                        uVar14 = **reloc.__stderrp;
                        goto code_r0x00019392ba10;
                    }
                    if (uVar19 != 0x20) {
                        if (uVar16 == 0) {
                            uVar14 = **reloc.__stderrp;
                        }
                        else {
                            fcn.19392c3e4(*param_3 + 0x23);
                            iStack_158 = (*param_3)[0x27];
                            if (iStack_158 != 0) {
                                geo::codec::attributesForFeatureType(signed char)(4);
                                std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes>&&)
                                          (&iStack_d0 + 1, &uStack_f0);
                                std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(&uStack_f0);
                                goto code_r0x00019392ba78;
                            }
                            uVar14 = **reloc.__stderrp;
                        }
                        goto code_r0x00019392ba10;
                    }
                    std::__1::vector<GeoCodecsPolygonFeature, geo::StdAllocator<GeoCodecsPolygonFeature, geo::codec::Allocator> >::resize(unsigned long)
                              (*param_3 + 0xc);
                    geo::codec::attributesForFeatureType(signed char)(2);
                    std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes>&&)
                              (&iStack_d0 + 1, &uStack_f0);
                    std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(&uStack_f0);
                    iStack_158 = 0;
code_r0x00019392ba78:
                    apiStack_100[0] = piStack_c8;
                    apiStack_100[1] = piStack_c0;
                    if (piStack_c0 != NULL) {
                        tmp_ldXn = piStack_c0[1];
                        iVar7 = tmp_ldXn;
                        tmp_stXn = iVar7 + 1;
                        iVar7 = tmp_stXn;
                        piStack_c0[1] = iVar7;
                        uVar14 = tmp_ldXn;
                    }
                    ppiVar11 = FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                         (*param_3 + 0x8b, apiStack_100);
                    uStack_f0 = *ppiVar11;
                    piStack_e8 = ppiVar11[1];
                    if (piStack_e8 != NULL) {
                        tmp_ldXn = piStack_e8[1];
                        iVar7 = tmp_ldXn;
                        tmp_stXn = iVar7 + 1;
                        iVar7 = tmp_stXn;
                        piStack_e8[1] = iVar7;
                        uVar14 = tmp_ldXn;
                    }
                    std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes>&&)
                              (&iStack_d0 + 1, &uStack_f0);
                    std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(&uStack_f0);
                    std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(apiStack_100);
                    if (uStack_b8 != 0) {
                        uVar15 = 0;
                        piStack_140 = NULL;
                        iVar6 = iVar6 - iVar5;
                        piVar20 = *0x193ae20b8;
                        piVar22 = *0x193ae20b0;
                        uVar26 = *0x193af97d8;
                        uVar14 = *0x193af97d0;
                        iVar5 = iVar6;
                        do {
                            piVar9 = *param_3;
                            if (uVar19 != 0x20) {
                                ppiVar11 = piVar9[0x23] + uVar15 * 0x118;
                                ppiVar11[0x20] = NULL;
                                ppiStack_138 = ppiVar11;
                            }
                            else {
                                ppiStack_138 = NULL;
                                ppiVar11 = piVar9[0xc] + uVar15 * 0x130;
                            }
                            piVar24 = param_3[1];
                            if (piVar24 != NULL) {
                                tmp_ldXn = piVar24[2];
                                iVar7 = tmp_ldXn;
                                tmp_stXn = iVar7 + 1;
                                iVar7 = tmp_stXn;
                                piVar24[2] = iVar7;
                                uVar2 = tmp_ldXn;
                            }
                            piVar12 = ppiVar11[1];
                            *ppiVar11 = piVar9;
                            ppiVar11[1] = piVar24;
                            if (piVar12 != NULL) {
                                std::__1::__shared_weak_count::__release_weak()();
                            }
                            uVar13 = geo::codec::hp_readLabel(GeoCodecsFeature*, VMP4Chapter*, unsigned long*, char const*, unsigned long, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                               (ppiVar11, pcVar18, &iStack_d0, iVar5, param_3);
                            if ((uVar13 & 1) == 0) {
                                uVar14 = **reloc.__stderrp;
                                goto code_r0x00019392ba10;
                            }
                            piStack_78 = (piStack_78 >> 8) << 8;
                            acStack_70[0] = '\0';
                            uStack_102 = 0;
                            cStack_103 = '\0';
                            uVar13 = *(pcVar18 + 0x30) + 1;
                            if (uVar13 < *(pcVar18 + 0x38) || uVar13 == *(pcVar18 + 0x38)) {
                                pcVar18[0x20] = '\x01';
                                *(pcVar18 + 8) = *(pcVar18 + 0x28) + *(pcVar18 + 0x30);
                                *(pcVar18 + 0x18) = uVar26;
                                *(pcVar18 + 0x10) = uVar14;
                            }
                            pcVar23 = pcVar18 + 8;
                            uVar13 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar23, *0x8 + -0x78);
                            if ((uVar13 & 1) == 0) {
                                uVar14 = **reloc.__stderrp;
                                goto code_r0x00019392ba10;
                            }
                            uVar13 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar23, *0x8 + -0x70);
                            if ((uVar13 & 1) == 0) {
                                uVar14 = **reloc.__stderrp;
                                goto code_r0x00019392ba10;
                            }
                            uVar13 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar23, &uStack_102 + 1);
                            if ((uVar13 & 1) == 0) {
                                uVar14 = **reloc.__stderrp;
                                goto code_r0x00019392ba10;
                            }
                            uVar13 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar23, &uStack_102);
                            if ((uVar13 & 1) == 0) {
                                uVar14 = **reloc.__stderrp;
                                goto code_r0x00019392ba10;
                            }
                            uVar13 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar23, &cStack_103);
                            if ((uVar13 & 1) == 0) {
                                uVar14 = **reloc.__stderrp;
                                goto code_r0x00019392ba10;
                            }
                            if (uVar19 != 0x21) {
                                uVar13 = *(pcVar18 + 0x18) + 3;
                                if (*(pcVar18 + 0x10) * 8 <= uVar13 && uVar13 != *(pcVar18 + 0x10) * 8) {
                                    uVar14 = **reloc.__stderrp;
                                    goto code_r0x00019392ba10;
                                }
                            }
                            else {
                                uStack_f0 = (uStack_f0 >> 8) << 8;
                                iVar3 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar18 + 8, &uStack_f0);
                                if (iVar3 == 0) goto code_r0x00019392c1a0;
                                *(ppiStack_138 + 0x22) = uStack_f0;
                                uVar13 = *(pcVar18 + 0x18) + 2;
                                if (*(pcVar18 + 0x10) * 8 <= uVar13 && uVar13 != *(pcVar18 + 0x10) * 8)
                                goto code_r0x00019392c1a0;
                            }
                            *(pcVar18 + 0x18) = uVar13;
                            iVar5 = *(pcVar18 + 0x30) + (uVar13 >> 3);
                            if ((uVar13 & 7) != 0) {
                                iVar5 = iVar5 + 1;
                            }
                            *(pcVar18 + 0x30) = iVar5;
                            pcVar18[0x20] = '\0';
                            uStack_f0 = CONCAT44(uStack_f0._4_4_, 1);
                            if (piStack_78 == '\0') {
                                piVar9 = 0x1;
                            }
                            else {
                                iVar3 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                  (pcVar18, &uStack_f0);
                                if (iVar3 == 0) {
                                    uVar14 = **reloc.__stderrp;
                                    goto code_r0x00019392ba10;
                                }
                                piVar9 = uStack_f0;
                            }
                            ppiVar11[0x10] = piStack_130;
                            ppiVar11[0x11] = piVar9;
                            ppiVar11[0x18] = piVar20;
                            ppiVar11[0x17] = piVar22;
                            if (uVar19 == 0x21) {
                                ppiStack_138[0x20] = piStack_140;
                                uVar13 = piStack_140 + piVar9;
                                if (uVar16 <= uVar13 && uVar13 != uVar16) {
                                    uVar14 = **reloc.__stderrp;
                                    goto code_r0x00019392ba10;
                                }
                                if (piVar9 != NULL) {
                                    iVar5 = 0;
                                    do {
                                        puStack_118 = (puStack_118 >> 0x20) << 0x20;
                                        uVar13 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                           (pcVar18, &puStack_118);
                                        if ((uVar13 & 1) == 0) {
                                            uVar14 = **reloc.__stderrp;
                                            goto code_r0x00019392ba10;
                                        }
                                        *(iStack_158 + piStack_140 * 4 + iVar5 * 4) =
                                             puStack_118 * (0x1002 | 0x3a000000);
                                        iVar5 = iVar5 + 1;
                                    } while (iVar5 < uStack_f0);
                                    piStack_140 = piStack_140 + iVar5;
                                }
                            }
                            if (acStack_70[0] != '\0') {
                                uVar13 = *(pcVar18 + 0x30) + 8;
                                if (*(pcVar18 + 0x38) <= uVar13 && uVar13 != *(pcVar18 + 0x38)) {
                                    uVar14 = **reloc.__stderrp;
                                    goto code_r0x00019392ba10;
                                }
                                piVar24 = *(*(pcVar18 + 0x28) + *(pcVar18 + 0x30));
                                *(pcVar18 + 0x30) = uVar13;
                                ppiVar11[8] = piVar24;
                            }
                            if (uStack_102._1_1_ != '\0') {
                                puStack_118 = (puStack_118 >> 0x20) << 0x20;
                                iVar3 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                  (pcVar18, &puStack_118);
                                if (iVar3 == 0) {
                                    uVar14 = **reloc.__stderrp;
                                    goto code_r0x00019392ba10;
                                }
                            }
                            if (uStack_102 != '\0') {
                                uVar13 = *(pcVar18 + 0x30) + 4;
                                if (*(pcVar18 + 0x38) <= uVar13 && uVar13 != *(pcVar18 + 0x38)) {
                                    uVar14 = **reloc.__stderrp;
                                    goto code_r0x00019392ba10;
                                }
                                uVar25 = *(*(pcVar18 + 0x28) + *(pcVar18 + 0x30));
                                *(pcVar18 + 0x30) = uVar13;
                                *(ppiVar11 + 0xb) = uVar25;
                            }
                            if (cStack_103 == '\0') {
                                std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                          (ppiVar11 + 0xd, piStack_c8, piStack_c0);
                            }
                            else {
                                uVar13 = geo::codec::accumulateStyleAttributes(FeatureStyleAttributesSet&, std::__1::shared_ptr<FeatureStyleAttributes>&, VMP4Chapter*, GeoCodecsFeature*)
                                                   (*param_3 + 0x8b, &iStack_d0 + 1, pcVar18, ppiVar11);
                                if ((uVar13 & 1) == 0) {
                                    uVar14 = **reloc.__stderrp;
                                    goto code_r0x00019392ba10;
                                }
                            }
                            piStack_130 = piStack_130 + piVar9;
                            uVar15 = uVar15 + 1;
                            iVar5 = iVar6;
                        } while (uVar15 < uStack_b8);
                    }
                    if (iStack_80 != 0) {
                        piVar22 = geo::codec::Allocator::instance()();
                        iStack_88 = (**(*piVar22 + 0x18))(piVar22, 1, 0x48);
                        if (iStack_88 == 0) {
                            uVar14 = **reloc.__stderrp;
                            goto code_r0x00019392ba10;
                        }
                        *(iStack_88 + 0x28) = *(iStack_80 + 0x28);
                        if (uVar19 != 0x20) {
                            iStack_110 = 0;
                            uStack_f0 = NULL;
                            piStack_e8 = NULL;
                            puStack_118 = NULL;
                            piVar22 = *param_3;
                        }
                        else {
                            piVar22 = *param_3;
                            uStack_f0 = piVar22[0x99];
                            piStack_e8 = piVar22[0x98];
                            puStack_118 = piVar22[0x9d];
                            iStack_110 = piVar22[0x9c];
                        }
                        geo::codec::_createLOD(GeoCodecsCurveVertexPool*, GeoCodecsVertexPool*, unsigned long, bool, unsigned int**, GeoCodecsPointsOnRoadLODData*, GeoCodecsCharacteristicPointsLODData*, GeoCodecsStrokeSpecificationsLODData*)
                                  (iStack_80, iStack_88, 0, 0xe00 < (*(piVar22 + 4) & 0x3f00), 0, 0, &uStack_f0, 
                                   &puStack_118);
                    }
                    if (iStack_88 != 0) {
                        iVar5 = 800;
                        if (uVar19 != 0x20) {
                            iVar5 = 0x330;
                        }
                        *(*param_3 + iVar5) = iStack_88;
                        iStack_88 = 0;
                    }
                    uVar21 = *(pcVar18 + 0x40);
                    if ((uVar19 == 0x20) && (0x18 < uVar21)) {
                        uVar16 = *(pcVar18 + 0x30);
                        if (uVar16 <= *(pcVar18 + 0x38)) {
                            pcVar18[0x20] = '\x01';
                            *(pcVar18 + 0x10) = *(pcVar18 + 0x38) - uVar16;
                            *(pcVar18 + 0x18) = 0;
                            *(pcVar18 + 8) = *(pcVar18 + 0x28) + uVar16;
                        }
                        piVar22 = *param_3;
                        uVar16 = geo::codec::decodeGhostPointEncoding(Bitstream*, GeoCodecsVertexPool*, unsigned long, GeoCodecsPolygonFeature*)
                                           (pcVar18 + 8, piVar22[100], 
                                            (piVar22[0xd] - piVar22[0xc] >> 4) * (0x286bca1b | 0x86bca1af00000000));
                        if ((uVar16 & 1) == 0) {
                            uVar14 = **reloc.__stderrp;
                            goto code_r0x00019392c328;
                        }
                        iVar5 = *(pcVar18 + 0x30) + (*(pcVar18 + 0x18) >> 3);
                        if ((*(pcVar18 + 0x18) & 7) != 0) {
                            iVar5 = iVar5 + 1;
                        }
                        *(pcVar18 + 0x30) = iVar5;
                        pcVar18[0x20] = '\0';
                        uVar21 = *(pcVar18 + 0x40);
                    }
                    if ((uVar19 == 0x20) && (0x24 < uVar21)) {
                        uVar16 = *(pcVar18 + 0x30);
                        if (uVar16 <= *(pcVar18 + 0x38)) {
                            pcVar18[0x20] = '\x01';
                            *(pcVar18 + 0x10) = *(pcVar18 + 0x38) - uVar16;
                            *(pcVar18 + 0x18) = 0;
                            *(pcVar18 + 8) = *(pcVar18 + 0x28) + uVar16;
                        }
                        pcVar23 = pcVar18 + 8;
                        acStack_70[0] = '\0';
                        uVar16 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar23, *0x8 + -0x70);
                        if ((uVar16 & 1) == 0) {
                            uVar14 = **reloc.__stderrp;
code_r0x00019392c328:
                            fprintf(uVar14, 0x8ff + 0x193b8a000);
                            goto joined_r0x00019392c34c;
                        }
                        if ((acStack_70[0] != '\0') && (uStack_b8 != 0)) {
                            uVar16 = 0;
                            iVar5 = 0x10b;
                            do {
                                uStack_f0 = (uStack_f0 >> 8) << 8;
                                iVar3 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar23, &uStack_f0);
                                if (iVar3 == 0) {
                                    uVar14 = **reloc.__stderrp;
                                    goto code_r0x00019392c328;
                                }
                                *((*param_3)[0xc] + iVar5) = uStack_f0;
                                uVar16 = uVar16 + 1;
                                iVar5 = iVar5 + 0x130;
                            } while (uVar16 < uStack_b8);
                        }
                        if (0x25 < *(pcVar18 + 0x40)) {
                            uStack_102 = uStack_102 & 0xff;
                            uVar16 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar23, &uStack_102 + 1);
                            if ((uVar16 & 1) == 0) {
                                uVar14 = **reloc.__stderrp;
                                goto code_r0x00019392c328;
                            }
                            if (uStack_102._1_1_ != '\0') {
                                uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
                                uVar16 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                   (pcVar23, &uStack_f0, 5);
                                if ((uVar16 & 1) == 0) {
                                    uVar14 = **reloc.__stderrp;
                                    goto code_r0x00019392c328;
                                }
                                if (uStack_b8 != 0) {
                                    uVar16 = 0;
                                    iVar3 = uStack_f0;
                                    iVar5 = 0x124;
                                    do {
                                        uStack_102 = (uStack_102 >> 8) << 8;
                                        uVar15 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar23, &uStack_102);
                                        if ((uVar15 & 1) == 0) {
                                            uVar14 = **reloc.__stderrp;
                                            goto code_r0x00019392c328;
                                        }
                                        if (uStack_102 != '\0') {
                                            puStack_118 = (puStack_118 >> 0x20) << 0x20;
                                            piStack_78 = (piStack_78 >> 0x20) << 0x20;
                                            iVar4 = BitstreamUnpackSigned(Bitstream*, int*, unsigned long)
                                                              (pcVar23, &puStack_118, iVar3 + 1);
                                            if ((iVar4 == 0) ||
                                               (iVar4 = BitstreamUnpackSigned(Bitstream*, int*, unsigned long)
                                                                  (pcVar23, *0x8 + -0x78, iVar3 + 1),  iVar4 == 0))
                                            goto code_r0x00019392c1a0;
                                            piVar22 = *param_3;
                                            pfVar1 = piVar22[0xc] + iVar5;
                                            *(pfVar1 + -0x1a) = 1;
                                            puVar17 = piVar22[100];
                                            if (puVar17 == NULL) goto code_r0x00019392c1a0;
                                            fVar27 = ~(-1 << (*puVar17 & 0x1f));
                                            pfVar1[-1] = puStack_118 / fVar27;
                                            *pfVar1 = piStack_78 / fVar27;
                                        }
                                        uVar16 = uVar16 + 1;
                                        iVar5 = iVar5 + 0x130;
                                    } while (uVar16 < uStack_b8);
                                }
                            }
                        }
                        iVar5 = *(pcVar18 + 0x30) + (*(pcVar18 + 0x18) >> 3);
                        if ((*(pcVar18 + 0x18) & 7) != 0) {
                            iVar5 = iVar5 + 1;
                        }
                        *(pcVar18 + 0x30) = iVar5;
                        pcVar18[0x20] = '\0';
                    }
                    *(param_1 + 5) = uStack_b0._4_4_;
                    *(param_1 + 0x2c) = iStack_80 != 0;
                    uVar19 = 1;
                    uVar21 = 1;
                    goto joined_r0x00019392c310;
                }
                uStack_f0 = 0x15e + 0x193b8a000;
                piStack_e8 = *param_3;
                piStack_e0 = param_3[1];
                if (piStack_e0 != NULL) {
                    tmp_ldXn = piStack_e0[1];
                    iVar7 = tmp_ldXn;
                    tmp_stXn = iVar7 + 1;
                    iVar7 = tmp_stXn;
                    piStack_e0[1] = iVar7;
                    uVar14 = tmp_ldXn;
                }
                iVar7 = std::__1::chrono::steady_clock::now()();
                piVar20 = *param_3;
                iStack_d8 = iVar7;
                uVar16 = fcn.1938e6038(param_1, 0x34, piVar20 + 0x98, piVar20 + 0x99, piVar20 + 0x9c, piVar20 + 0x9d, 
                                       piVar20 + 0xef);
                if ((uVar16 & 1) == 0) {
                    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                    iVar3 = 6;
                    piVar20 = uStack_f0;
                    iVar7 = iStack_d8;
                }
                else {
                    iVar3 = 0;
                    piVar20 = 0x15e + 0x193b8a000;
                }
                piVar9 = piStack_e8;
                piVar24 = std::__1::chrono::steady_clock::now()();
                piStack_78 = piVar20;
                if (piVar20 != NULL) {
                    puStack_118 = *0x8 + -0x78;
                    iVar10 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                                       (piVar9 + 0xef, *0x8 + -0x78, 0x74c + 0x193af9000, &puStack_118, *0x8 + -0x70);
                    iVar7 = SUB168(SEXT816(piVar24 - iVar7) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
                    *(iVar10 + 0x20) = ((iVar7 >> 7) - (iVar7 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
                    piVar22 = piVar24;
                }
                uVar21 = piVar22;
                piVar22 = piStack_e0;
                if (piVar22 != NULL) {
                    LOAcquire();
                    tmp_ldXn = piStack_e0[1];
                    iVar7 = tmp_ldXn;
                    tmp_stXn = iVar7 + -1;
                    iVar7 = tmp_stXn;
                    piStack_e0[1] = iVar7;
                    iVar7 = tmp_ldXn;
                    LORelease();
                    if (iVar7 == 0) {
                        (**(*piVar22 + 0x10))(piVar22);
                        std::__1::__shared_weak_count::__release_weak()(piVar22);
                    }
                }
                if (iVar3 != 6) {
                    if (iVar3 != 0) goto code_r0x00019392b55c;
                    goto code_r0x00019392b910;
                }
                goto code_r0x00019392b338;
            }
        }
code_r0x00019392b55c:
        piVar22 = piStack_c0;
        if (piVar22 != NULL) {
            LOAcquire();
            tmp_ldXn = piStack_c0[1];
            iVar5 = tmp_ldXn;
            tmp_stXn = iVar5 + -1;
            iVar5 = tmp_stXn;
            piStack_c0[1] = iVar5;
            iVar5 = tmp_ldXn;
            LORelease();
            if (iVar5 == 0) {
                (**(*piVar22 + 0x10))(piVar22);
                std::__1::__shared_weak_count::__release_weak()(piVar22);
            }
        }
        iVar5 = iStack_a8;
        piVar22 = piStack_a0;
        iVar6 = iStack_90;
        iVar7 = std::__1::chrono::steady_clock::now()();
        piStack_c8 = iVar5;
        uVar19 = uVar21;
        if (iVar5 == 0) goto code_r0x00019392b620;
    }
    uVar21 = uVar19;
    uStack_f0 = &iStack_d0 + 1;
    iVar5 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                      (piVar22 + 0xef, &iStack_d0 + 1, 0x74c + 0x193af9000, &uStack_f0, &puStack_118);
    iVar6 = SUB168(SEXT816(iVar7 - iVar6) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar5 + 0x20) = ((iVar6 >> 7) - (iVar6 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x00019392b620:
    piVar22 = piStack_98;
    if (piVar22 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_98[1];
        iVar5 = tmp_ldXn;
        tmp_stXn = iVar5 + -1;
        iVar5 = tmp_stXn;
        piStack_98[1] = iVar5;
        iVar5 = tmp_ldXn;
        LORelease();
        if (iVar5 == 0) {
            (**(*piVar22 + 0x10))(piVar22);
            std::__1::__shared_weak_count::__release_weak()(piVar22);
        }
    }
    return uVar21 & 1;
code_r0x00019392c1a0:
    uVar14 = **reloc.__stderrp;
    goto code_r0x00019392c328;
}
