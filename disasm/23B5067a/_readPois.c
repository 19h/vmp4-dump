
ulong geo::codec::_readPois(VMP4Tile*, GeoCodecsVMP4DecodingOptions const&, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t param_2, int64_t *param_3)

{
    char cVar1;
    uint8_t uVar2;
    char cVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    int32_t iVar6;
    int32_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    uint8_t *puVar10;
    ulong uVar11;
    int64_t *piVar12;
    uint64_t **ppuVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    uint64_t uVar19;
    ulong uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    int64_t iVar23;
    int64_t iVar24;
    int64_t iVar25;
    char *pcVar26;
    int64_t iVar27;
    char *pcVar28;
    int64_t iVar29;
    uint64_t *puVar30;
    float fVar31;
    uint uVar32;
    ulong uVar33;
    uint32_t uStack_1a8;
    char *pcStack_1a0;
    uint uStack_194;
    uint32_t *puStack_190;
    uint32_t uStack_188;
    ulong uStack_184;
    uint64_t auStack_178 [5];
    uint64_t *apuStack_150 [3];
    int64_t iStack_138;
    uint uStack_130;
    uint64_t uStack_120;
    uint32_t auStack_114 [2];
    uint32_t uStack_10c;
    uint32_t uStack_108;
    char cStack_101;
    int64_t *apiStack_100 [2];
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t *piStack_d8;
    int64_t *piStack_d0;
    uint64_t uStack_c8;
    int64_t iStack_c0;
    int64_t *piStack_b8;
    int64_t iStack_b0;
    code *pcStack_a8;
    int64_t *piStack_a0;
    int64_t iStack_90;
    int64_t iStack_88;
    
    iStack_88 = **reloc.__stack_chk_guard;
    iStack_c0 = *param_3;
    uVar22 = param_1[1];
    if (uVar22 != 0) {
        uVar15 = 0;
        do {
            if (*(*param_1 + uVar15 * 0x10) == 0x1e) {
                pcVar26 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar15, 0x1e, iStack_c0 + 0x778);
                uStack_c8 = 0x135 + 0x193b8a000;
                iStack_c0 = *param_3;
                piStack_b8 = param_3[1];
                if (piStack_b8 == NULL) goto code_r0x0001938f20a4;
                goto code_r0x0001938f2098;
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 <= uVar22 && uVar22 != uVar15);
    }
    pcVar26 = NULL;
    uStack_c8 = 0x135 + 0x193b8a000;
    piStack_b8 = param_3[1];
    if (piStack_b8 != NULL) {
code_r0x0001938f2098:
        tmp_ldXn = piStack_b8[1];
        iVar8 = tmp_ldXn;
        tmp_stXn = iVar8 + 1;
        iVar8 = tmp_stXn;
        piStack_b8[1] = iVar8;
        uVar11 = tmp_ldXn;
    }
code_r0x0001938f20a4:
    iVar8 = std::__1::chrono::steady_clock::now()();
    iStack_b0 = iVar8;
    if (pcVar26 == NULL) {
        uVar11 = 1;
        uVar22 = 0x135 + 0x193b8a000;
        iVar27 = iStack_c0;
        iVar29 = std::__1::chrono::steady_clock::now()();
        auStack_178[0] = uVar22;
        if (uVar22 == 0) goto code_r0x0001938f23b4;
    }
    else {
        piStack_d8 = NULL;
        piStack_d0 = NULL;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f0 = 0;
        iVar8 = *(*param_3 + 0x358);
        iVar29 = *(*param_3 + 0x360);
        uVar22 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar26, *0x8 + -0xdc);
        if ((uVar22 & 1) == 0) {
            pcVar9 = NULL;
code_r0x0001938f21f0:
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            uVar11 = 0;
        }
        else {
            pcVar9 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                               (param_1, uStack_e0._4_4_, 0x14, *param_3 + 0x778);
            if ((pcVar9 == NULL) || (puVar10 = geo::codec::decodePointVertices(VMP4Chapter*)(pcVar9),  puVar10 == NULL))
            goto code_r0x0001938f21f0;
            uVar22 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar26, *0x8 + -0xe0);
            if ((uVar22 & 1) == 0) {
                uVar11 = **reloc.__stderrp;
code_r0x0001938f24b0:
                fprintf(uVar11, 0x8ff + 0x193b8a000);
                uVar11 = 0;
            }
            else {
                uVar22 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar26, *0x8 + -0xe4);
                if ((uVar22 & 1) == 0) {
                    uVar11 = **reloc.__stderrp;
                    goto code_r0x0001938f24b0;
                }
                if (0xffff < uStack_e8._4_4_) {
                    uVar11 = **reloc.__stderrp;
                    goto code_r0x0001938f24b0;
                }
                uVar22 = geo::codec::_makeSpaceForLabels(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                   (uStack_e8._4_4_, *0x8 + -0xf0, param_3);
                if ((uVar22 & 1) == 0) {
                    uVar11 = **reloc.__stderrp;
                    goto code_r0x0001938f24b0;
                }
                uVar22 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar26, *0x8 + -0xe8);
                if ((uVar22 & 1) == 0) {
                    uVar11 = **reloc.__stderrp;
                    goto code_r0x0001938f24b0;
                }
                uVar22 = uStack_e0;
                uVar15 = *(puVar10 + 0x10);
                if (uVar15 < uVar22 || uVar15 == uVar22) {
                    uVar11 = **reloc.__stderrp;
                    goto code_r0x0001938f24b0;
                }
                if (uVar15 - uVar22 < uStack_e8) {
                    uVar11 = **reloc.__stderrp;
                    goto code_r0x0001938f24b0;
                }
                if (uStack_e8 != 0) {
                    geo::codec::attributesForFeatureType(signed char)(3);
                    std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes>&&)
                              (*0x8 + -0xd8, apuStack_150);
                    std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(apuStack_150);
                    apiStack_100[0] = piStack_d8;
                    apiStack_100[1] = piStack_d0;
                    if (piStack_d0 != NULL) {
                        tmp_ldXn = piStack_d0[1];
                        iVar27 = tmp_ldXn;
                        tmp_stXn = iVar27 + 1;
                        iVar27 = tmp_stXn;
                        piStack_d0[1] = iVar27;
                        uVar11 = tmp_ldXn;
                    }
                    ppuVar13 = FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                         (*param_3 + 0x458, apiStack_100);
                    apuStack_150[0] = *ppuVar13;
                    apuStack_150[1] = ppuVar13[1];
                    if (apuStack_150[1] != NULL) {
                        tmp_ldXn = apuStack_150[1][1];
                        iVar27 = tmp_ldXn;
                        tmp_stXn = iVar27 + 1;
                        uVar22 = tmp_stXn;
                        apuStack_150[1][1] = uVar22;
                        uVar11 = tmp_ldXn;
                    }
                    std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes>&&)
                              (*0x8 + -0xd8, apuStack_150);
                    std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(apuStack_150);
                    std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(apiStack_100);
                    std::__1::vector<GeoCodecsPointFeature, geo::StdAllocator<GeoCodecsPointFeature, geo::codec::Allocator> >::resize(unsigned long)
                              (*param_3 + 0x1f8, uStack_e8);
                    piVar12 = geo::codec::Allocator::instance()();
                    iVar27 = (**(*piVar12 + 0x18))(piVar12, uStack_e8, 0x10);
                    iVar17 = *param_3;
                    *(iVar17 + 0x298) = iVar27;
                    if (iVar27 == 0) {
                        uVar11 = **reloc.__stderrp;
                    }
                    else {
                        *(iVar17 + 0x2a0) = uStack_e8;
                        if (uStack_e8 != 0) {
                            uVar22 = 0;
                            iVar27 = 2;
                            iVar17 = 0xf4;
                            uVar33 = *0x193af97d8;
                            uVar11 = *0x193af97d0;
                            do {
                                iVar18 = *param_3;
                                iVar23 = param_3[1];
                                iVar24 = *(iVar18 + 0x1f8);
                                iVar25 = iVar24 + iVar17;
                                piVar12 = iVar25 + -0xf4;
                                if (iVar23 != 0) {
                                    tmp_ldXn = *(iVar23 + 0x10);
                                    iVar4 = tmp_ldXn;
                                    tmp_stXn = iVar4 + 1;
                                    uVar20 = tmp_stXn;
                                    *(iVar23 + 0x10) = uVar20;
                                    uVar20 = tmp_ldXn;
                                }
                                *piVar12 = iVar18;
                                iVar18 = *(iVar25 + -0xec);
                                *(iVar25 + -0xec) = iVar23;
                                iVar25 = iVar24;
                                uVar15 = uVar22;
                                if (iVar18 != 0) {
                                    std::__1::__shared_weak_count::__release_weak()();
                                }
                                iVar18 = iVar25 + iVar17;
                                *(iVar18 + -0x74) = *(*(puVar10 + 8) + (uVar15 + uStack_e0) * 8);
                                if ((*(puVar10 + 0x18) != 0) &&
                                   (fVar31 = *(*(puVar10 + 0x18) + (uVar15 + uStack_e0) * 4),  fVar31 != 3.402823e+38))
                                {
                                    *(iVar25 + iVar17) = 1;
                                    *(iVar25 + iVar17 + -0x6c) = fVar31;
                                }
                                *(iVar18 + -0x94) = 0;
                                *(iVar18 + -1) = 0;
                                *(iVar18 + -0x2c) = 0x42ca0000;
                                *(iVar18 + -0x24) = CONCAT44(0x42ca0000, 0x42ca0000);
                                uVar15 = geo::codec::hp_readLabel(GeoCodecsFeature*, VMP4Chapter*, unsigned long*, char const*, unsigned long, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                                   (piVar12, pcVar26, *0x8 + -0xf0, iVar29 - iVar8, param_3);
                                pcVar28 = pcVar26 + 8;
                                if ((uVar15 & 1) == 0) {
                                    uVar11 = **reloc.__stderrp;
                                    goto code_r0x0001938f24b0;
                                }
                                auStack_178[0] = (auStack_178[0] >> 8) << 8;
                                uStack_188 = (uStack_188 >> 8) << 8;
                                uStack_120 = (uStack_120 >> 8) << 8;
                                puStack_190 = (puStack_190 >> 8) << 8;
                                uStack_108 = (uStack_108 >> 8) << 8;
                                uStack_10c = (uStack_10c >> 8) << 8;
                                uVar15 = *(pcVar26 + 0x30) + 1;
                                if (uVar15 < *(pcVar26 + 0x38) || uVar15 == *(pcVar26 + 0x38)) {
                                    pcVar26[0x20] = '\x01';
                                    *(pcVar26 + 8) = *(pcVar26 + 0x28) + *(pcVar26 + 0x30);
                                    *(pcVar26 + 0x18) = uVar33;
                                    *(pcVar26 + 0x10) = uVar11;
                                }
                                uVar15 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar28, auStack_178);
                                if ((uVar15 & 1) == 0) {
                                    uVar11 = **reloc.__stderrp;
                                    goto code_r0x0001938f24b0;
                                }
                                uVar15 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar28, &uStack_188);
                                if ((uVar15 & 1) == 0) {
                                    uVar11 = **reloc.__stderrp;
                                    goto code_r0x0001938f24b0;
                                }
                                uVar15 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar28, &uStack_120);
                                if ((uVar15 & 1) == 0) {
                                    uVar11 = **reloc.__stderrp;
                                    goto code_r0x0001938f24b0;
                                }
                                uVar15 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar28, &puStack_190);
                                if ((uVar15 & 1) == 0) {
                                    uVar11 = **reloc.__stderrp;
                                    goto code_r0x0001938f24b0;
                                }
                                uVar15 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar28, &uStack_108);
                                if ((uVar15 & 1) == 0) {
                                    uVar11 = **reloc.__stderrp;
                                    goto code_r0x0001938f24b0;
                                }
                                uVar15 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar28, &uStack_10c);
                                if ((uVar15 & 1) == 0) {
                                    uVar11 = **reloc.__stderrp;
                                    goto code_r0x0001938f24b0;
                                }
                                uVar15 = *(pcVar26 + 0x18) + 2;
                                if (*(pcVar26 + 0x10) * 8 <= uVar15 && uVar15 != *(pcVar26 + 0x10) * 8) {
                                    uVar11 = **reloc.__stderrp;
                                    goto code_r0x0001938f24b0;
                                }
                                *(pcVar26 + 0x18) = uVar15;
                                uVar19 = uVar15 >> 3;
                                if ((uVar15 & 7) != 0) {
                                    uVar19 = uVar19 + 1;
                                }
                                uVar19 = uVar19 + *(pcVar26 + 0x30);
                                *(pcVar26 + 0x30) = uVar19;
                                pcVar26[0x20] = '\0';
                                if (auStack_178[0] != '\0') {
                                    uVar15 = uVar19 + 8;
                                    if (*(pcVar26 + 0x38) <= uVar15 && uVar15 != *(pcVar26 + 0x38)) {
                                        uVar11 = **reloc.__stderrp;
                                        goto code_r0x0001938f24b0;
                                    }
                                    uVar20 = *(*(pcVar26 + 0x28) + uVar19);
                                    *(pcVar26 + 0x30) = uVar15;
                                    *(iVar24 + iVar17 + -0xb4) = uVar20;
                                    uVar19 = uVar15;
                                }
                                uVar15 = uVar19;
                                if (uStack_188 != '\0') {
                                    uVar15 = uVar19 + 8;
                                    if (*(pcVar26 + 0x38) <= uVar15 && uVar15 != *(pcVar26 + 0x38)) {
                                        uVar11 = **reloc.__stderrp;
                                        goto code_r0x0001938f24b0;
                                    }
                                    uVar20 = *(*(pcVar26 + 0x28) + uVar19);
                                    *(pcVar26 + 0x30) = uVar15;
                                    *(iVar24 + iVar17 + -0xa7) = 1;
                                    *(iVar24 + iVar17 + -0xa4) = uVar20;
                                }
                                if (uStack_120 != '\0') {
                                    uVar19 = uVar15 + 4;
                                    if (*(pcVar26 + 0x38) <= uVar19 && uVar19 != *(pcVar26 + 0x38)) {
                                        uVar11 = **reloc.__stderrp;
                                        goto code_r0x0001938f24b0;
                                    }
                                    uVar32 = *(*(pcVar26 + 0x28) + uVar15);
                                    *(pcVar26 + 0x30) = uVar19;
                                    *(iVar24 + iVar17 + -0x9c) = uVar32;
                                    *(iVar18 + -0x2c) = uVar32;
                                }
                                if (puStack_190 != '\0') {
                                    apuStack_150[0] = (apuStack_150[0] >> 0x20) << 0x20;
                                    iVar6 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                      (pcVar26, apuStack_150);
                                    if (iVar6 == 0) {
                                        uVar11 = **reloc.__stderrp;
                                        goto code_r0x0001938f24b0;
                                    }
                                }
                                if (uStack_108 != '\0') {
                                    apuStack_150[0] = (apuStack_150[0] >> 0x20) << 0x20;
                                    uVar15 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                       (pcVar26, apuStack_150);
                                    if ((uVar15 & 1) == 0) {
                                        uVar11 = **reloc.__stderrp;
                                        goto code_r0x0001938f24b0;
                                    }
                                    uVar16 = apuStack_150[0];
                                    uVar21 = (uVar16 & 0xaaaaaaaa) >> 1 | (uVar16 & 0x55555555) << 1;
                                    uVar21 = (uVar21 & 0xcccccccc) >> 2 | (uVar21 & 0x33333333) << 2;
                                    uVar21 = (uVar21 >> 4 | (uVar21 & 0xf0f0f0f) << 4) << 0x18;
                                    uVar21 = uVar21 | uVar21 >> 1;
                                    uVar21 = uVar21 | uVar21 >> 2;
                                    uVar21 = uVar21 | uVar21 >> 4;
                                    uVar21 = uVar21 | uVar21 >> 8;
                                    uVar21 = uVar21 | uVar21 >> 0x10;
                                    uVar21 = ((uVar21 & 0xaaaaaaaa) >> 1) + (uVar21 & 0x55555555);
                                    uVar21 = ((uVar21 & 0xcccccccc) >> 2) + (uVar21 & 0x33333333);
                                    uVar21 = ((uVar21 & 0xf0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f);
                                    uVar21 = ((uVar21 & 0xff00ff00) >> 8) + (uVar21 & 0xff00ff);
                                    iVar6 = 0;
                                    if (uVar16 != 0) {
                                        iVar6 = (0x20 - ((uVar21 >> 0x10) + (uVar21 & 0xffff))) + 1;
                                    }
                                    *(*(*param_3 + 0x298) + iVar27) = iVar6;
                                    *(iVar24 + iVar17 + -7) = 1;
                                    *(iVar24 + iVar17 + -0x1c) = uVar22;
                                }
                                if (uStack_10c == '\0') {
                                    std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                              (iVar24 + iVar17 + -0x8c, piStack_d8, piStack_d0);
                                }
                                else {
                                    uVar15 = geo::codec::accumulateStyleAttributes(FeatureStyleAttributesSet&, std::__1::shared_ptr<FeatureStyleAttributes>&, VMP4Chapter*, GeoCodecsFeature*)
                                                       (*param_3 + 0x458, *0x8 + -0xd8, pcVar26, piVar12);
                                    if ((uVar15 & 1) == 0) {
                                        uVar11 = **reloc.__stderrp;
                                        goto code_r0x0001938f24b0;
                                    }
                                }
                                uVar22 = uVar22 + 1;
                                iVar27 = iVar27 + 0x10;
                                iVar17 = iVar17 + 0x100;
                            } while (uVar22 < uStack_e8);
                        }
                        if (*(pcVar26 + 0x40) < 8) goto code_r0x0001938f30dc;
                        uVar22 = *(pcVar26 + 0x30);
                        if (uVar22 <= *(pcVar26 + 0x38)) {
                            pcVar26[0x20] = '\x01';
                            *(pcVar26 + 0x10) = *(pcVar26 + 0x38) - uVar22;
                            *(pcVar26 + 0x18) = 0;
                            *(pcVar26 + 8) = *(pcVar26 + 0x28) + uVar22;
                        }
                        pcStack_1a0 = pcVar26 + 8;
                        cStack_101 = '\0';
                        uVar22 = BitstreamUnpackFlag(Bitstream*, bool*)(pcStack_1a0, &cStack_101);
                        if ((uVar22 & 1) == 0) {
                            uVar11 = **reloc.__stderrp;
                        }
                        else if (cStack_101 == '\0') {
code_r0x0001938f2ca0:
                            uVar22 = *(pcVar26 + 0x30) + (*(pcVar26 + 0x18) >> 3);
                            if ((*(pcVar26 + 0x18) & 7) != 0) {
                                uVar22 = uVar22 + 1;
                            }
                            *(pcVar26 + 0x30) = uVar22;
                            pcVar26[0x20] = '\0';
                            if (*(pcVar26 + 0x40) < 0x28 || *(pcVar26 + 0x40) == 0x28) goto code_r0x0001938f30dc;
                            if (uVar22 <= *(pcVar26 + 0x38)) {
                                pcVar26[0x20] = '\x01';
                                *(pcVar26 + 0x10) = *(pcVar26 + 0x38) - uVar22;
                                *(pcVar26 + 0x18) = 0;
                                *(pcVar26 + 8) = *(pcVar26 + 0x28) + uVar22;
                            }
                            uStack_120 = (uStack_120 >> 8) << 8;
                            uVar22 = BitstreamUnpackFlag(Bitstream*, bool*)(pcStack_1a0, &uStack_120);
                            if ((uVar22 & 1) != 0) {
                                if (uStack_120 != '\0') {
                                    apuStack_150[0] = (apuStack_150[0] >> 0x20) << 0x20;
                                    uVar22 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                       (pcStack_1a0, apuStack_150, 5);
                                    if ((uVar22 & 1) == 0) {
                                        uVar11 = **reloc.__stderrp;
                                        goto code_r0x0001938f24b0;
                                    }
                                    if (uStack_e8 != 0) {
                                        iVar8 = 0;
                                        uVar22 = 0;
                                        iVar6 = apuStack_150[0];
                                        do {
                                            puStack_190 = (puStack_190 >> 8) << 8;
                                            uVar15 = BitstreamUnpackFlag(Bitstream*, bool*)(pcStack_1a0, &puStack_190);
                                            if ((uVar15 & 1) == 0) {
                                                uVar11 = **reloc.__stderrp;
                                                goto code_r0x0001938f24b0;
                                            }
                                            if (puStack_190 != '\0') {
                                                auStack_178[0] = (auStack_178[0] >> 0x20) << 0x20;
                                                uStack_188 = 0;
                                                iVar7 = BitstreamUnpackSigned(Bitstream*, int*, unsigned long)
                                                                  (pcStack_1a0, auStack_178, iVar6 + 1);
                                                if ((iVar7 == 0) ||
                                                   (iVar7 = BitstreamUnpackSigned(Bitstream*, int*, unsigned long)
                                                                      (pcStack_1a0, &uStack_188, iVar6 + 1),  iVar7 == 0
                                                   )) goto code_r0x0001938f2f5c;
                                                iVar29 = *(*param_3 + 0x1f8) + iVar8;
                                                *(iVar29 + 0xf2) = 1;
                                                fVar31 = ~(-1 << (*puVar10 & 0x1f));
                                                *(iVar29 + 0x94) = auStack_178[0] / fVar31;
                                                *(iVar29 + 0x98) = uStack_188 / fVar31;
                                            }
                                            uVar22 = uVar22 + 1;
                                            iVar8 = iVar8 + 0x100;
                                        } while (uVar22 < uStack_e8);
                                    }
                                }
                                uVar22 = *(pcVar26 + 0x30) + (*(pcVar26 + 0x18) >> 3);
                                if ((*(pcVar26 + 0x18) & 7) != 0) {
                                    uVar22 = uVar22 + 1;
                                }
                                *(pcVar26 + 0x30) = uVar22;
                                pcVar26[0x20] = '\0';
                                if (0x37 < *(pcVar26 + 0x40) && *(pcVar26 + 0x40) != 0x38) {
                                    if (uVar22 <= *(pcVar26 + 0x38)) {
                                        pcVar26[0x20] = '\x01';
                                        *(pcVar26 + 0x10) = *(pcVar26 + 0x38) - uVar22;
                                        *(pcVar26 + 0x18) = 0;
                                        *(pcVar26 + 8) = *(pcVar26 + 0x28) + uVar22;
                                    }
                                    iStack_90 = *0x8 + -0xa8;
                                    pcStack_a8 = typeinfo for geo::Allocator + 0x98 + 0x10;
                                    piStack_a0 = param_3;
                                    geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                                              (pcStack_1a0, uStack_e8, *0x8 + -0xa8);
                                    std::__1::function<void (unsigned long, float)>::~function()(*0x8 + -0xa8);
                                    iVar8 = *(pcVar26 + 0x30) + (*(pcVar26 + 0x18) >> 3);
                                    if ((*(pcVar26 + 0x18) & 7) != 0) {
                                        iVar8 = iVar8 + 1;
                                    }
                                    *(pcVar26 + 0x30) = iVar8;
                                    pcVar26[0x20] = '\0';
                                    if (0x3e < *(pcVar26 + 0x40) && *(pcVar26 + 0x40) != 0x3f) {
                                        uVar22 = iVar8 + 1;
                                        uVar15 = *(pcVar26 + 0x38);
                                        if (uVar22 < uVar15 || uVar22 == uVar15) {
                                            pcVar28 = *(pcVar26 + 0x28) + iVar8;
                                            cVar1 = *pcVar28;
                                            *(pcVar26 + 0x30) = uVar22;
                                            if (cVar1 != '\x01') goto code_r0x0001938f30dc;
                                            uVar22 = iVar8 + 5;
                                            if (uVar22 < uVar15 || uVar22 == uVar15) {
                                                iVar6 = *(pcVar28 + 1);
                                                *(pcVar26 + 0x30) = uVar22;
                                                uVar22 = iVar8 + 6;
                                                if (uVar22 < uVar15 || uVar22 == uVar15) {
                                                    cVar1 = pcVar28[5];
                                                    *(pcVar26 + 0x30) = uVar22;
                                                    if ((cVar1 != '\0') &&
                                                       (uVar22 = iVar8 + 7,  uVar22 < uVar15 || uVar22 == uVar15)) {
                                                        uVar2 = pcVar28[6];
                                                        *(pcVar26 + 0x30) = uVar22;
                                                        if ((uVar2 != 0) &&
                                                           (uVar22 = iVar8 + 8,  uVar22 < uVar15 || uVar22 == uVar15)) {
                                                            cVar3 = pcVar28[7];
                                                            *(pcVar26 + 0x30) = uVar22;
                                                            if (cVar3 != '\0') {
                                                                apuStack_150[0] = (apuStack_150[0] >> 0x20) << 0x20;
                                                                uVar22 = 
                                                            geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                                      (pcVar26, apuStack_150);
                                                            if ((uVar22 & 1) != 0) {
                                                                uVar22 = *(pcVar26 + 0x30);
                                                                if (uVar22 <= *(pcVar26 + 0x38)) {
                                                                    pcVar26[0x20] = '\x01';
                                                                    *(pcVar26 + 0x10) = *(pcVar26 + 0x38) - uVar22;
                                                                    *(pcVar26 + 0x18) = 0;
                                                                    *(pcVar26 + 8) = *(pcVar26 + 0x28) + uVar22;
                                                                }
                                                                auStack_178[0] = (auStack_178[0] >> 0x20) << 0x20;
                                                                uStack_188 = 0;
                                                                if (apuStack_150[0] != 0) {
                                                                    uVar21 = 0;
                                                                    uVar22 = 0;
                                                                    uStack_1a8 = uVar2;
                                                                    do {
                                                                        iVar7 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (pcStack_1a0, auStack_178, cVar3);
                                                            if (iVar7 == 0) goto code_r0x0001938f2f5c;
                                                            uVar16 = auStack_178[0] + uVar22;
                                                            uVar22 = uVar16;
                                                            if (uStack_e8 <= uVar16) goto code_r0x0001938f2f5c;
                                                            iVar8 = *(*param_3 + 0x1f8);
                                                            iVar7 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (pcStack_1a0, &uStack_188, cVar1);
                                                            if (iVar7 == 0) goto code_r0x0001938f2f5c;
                                                            uVar32 = NEON_ucvtf(uStack_188);
                                                            uVar32 = NEON_fmadd(uVar32, 1.0 / uStack_1a8, iVar6);
                                                            iVar8 = iVar8 + uVar22 * 0x100;
                                                            *(iVar8 + 0x88) = uVar32;
                                                            *(iVar8 + 0xf4) = 1;
                                                            uVar21 = uVar21 + 1;
                                                            } while (uVar21 < apuStack_150[0]);
                                                            uVar22 = *(pcVar26 + 0x30);
                                                            }
                                                            iVar8 = uVar22 + (*(pcVar26 + 0x18) >> 3);
                                                            if ((*(pcVar26 + 0x18) & 7) != 0) {
                                                                iVar8 = iVar8 + 1;
                                                            }
                                                            *(pcVar26 + 0x30) = iVar8;
                                                            pcVar26[0x20] = '\0';
                                                            goto code_r0x0001938f30dc;
                                                            }
                                                            uVar11 = **reloc.__stderrp;
                                                            goto code_r0x0001938f24b0;
                                                            }
                                                        }
                                                    }
                                                }
code_r0x0001938f2f5c:
                                                uVar11 = **reloc.__stderrp;
                                            }
                                            else {
                                                uVar11 = **reloc.__stderrp;
                                            }
                                        }
                                        else {
                                            uVar11 = **reloc.__stderrp;
                                        }
                                        goto code_r0x0001938f24b0;
                                    }
                                }
                                goto code_r0x0001938f30dc;
                            }
                            uVar11 = **reloc.__stderrp;
                        }
                        else {
                            uStack_108 = 0;
                            uVar22 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(pcStack_1a0, &uStack_108);
                            if ((uVar22 & 1) == 0) {
                                uVar11 = **reloc.__stderrp;
                            }
                            else {
                                uStack_10c = 0;
                                uVar22 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                   (pcStack_1a0, &uStack_10c, 5);
                                if ((uVar22 & 1) == 0) {
                                    uVar11 = **reloc.__stderrp;
                                }
                                else {
                                    uVar21 = uStack_10c;
                                    auStack_114[1] = 0;
                                    uVar22 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                       (pcStack_1a0, auStack_114 + 1, 6);
                                    if ((uVar22 & 1) != 0) {
                                        uStack_1a8 = uStack_108;
                                        if (uStack_1a8 != 0) {
                                            iVar6 = auStack_114[1];
                                            do {
                                                auStack_114[0] = 0;
                                                iVar7 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                  (pcStack_1a0, auStack_114, uVar21 + 1);
                                                if ((iVar7 == 0) ||
                                                   (uVar22 = auStack_114[0], 
                                                   *(*param_3 + 0x200) - *(*param_3 + 0x1f8) >> 8 <= uVar22))
                                                goto code_r0x0001938f2f5c;
                                                uStack_120 = 0;
                                                iVar7 = BitstreamUnpack64(Bitstream*, unsigned long long*, unsigned long)
                                                                  (pcStack_1a0, &uStack_120, iVar6 + 1);
                                                if (iVar7 == 0) {
                                                    uVar11 = **reloc.__stderrp;
                                                    goto code_r0x0001938f24b0;
                                                }
                                                apuStack_150[1] = NULL;
                                                apuStack_150[0] = NULL;
                                                iStack_138 = 0;
                                                apuStack_150[2] = NULL;
                                                uStack_130 = 0x3f800000;
                                                uVar32 = 0x3f800000;
                                                if (*(param_2 + 0x40) != NULL) {
                                                    (**(**(param_2 + 0x40) + 0x30))();
                                                    std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::__move_assign(std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >&, std::__1::integral_constant<bool, true>)
                                                              (apuStack_150, auStack_178);
                                                    fcn.1939299d8(auStack_178);
                                                    uVar15 = uStack_120;
                                                    puVar5 = apuStack_150[1];
                                                    uVar32 = uStack_130;
                                                    if (iStack_138 != 0) {
                                                        puVar30 = apuStack_150[0];
                                                        uVar19 = 
                                                            std::__1::unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::find[abi:v160006](unsigned long long const&)
                                                                      (puVar30, apuStack_150[1], uVar15);
                                                        uVar14 = 
                                                            std::__1::unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::find[abi:v160006](unsigned long long const&)
                                                                      (puVar30, puVar5, uVar15 >> 0x20);
                                                        uVar32 = uStack_130;
                                                        if ((uVar19 | uVar14) != 0) {
                                                            iVar8 = *(*param_3 + 0x1f8) + uVar22 * 0x100;
                                                            *(iVar8 + 0x60) = uVar15;
                                                            uStack_188 = 0x11 | 0x10000;
                                                            uStack_184 = 1;
                                                            if (*(iVar8 + 0x68) != 0) {
                                                                puStack_190 = &uStack_188;
                                                                uStack_194 = 1;
                                                                
                                                            std::__1::shared_ptr<FeatureStyleAttributes> std::__1::make_shared[abi:v160006]<FeatureStyleAttributes, std::__1::shared_ptr<FeatureStyleAttributes>&, GeoCodecsFeatureStylePairExt*, int, void>(std::__1::shared_ptr<FeatureStyleAttributes>&, GeoCodecsFeatureStylePairExt*&&, int&&)
                                                                      (auStack_178, *(iVar8 + 0x68), *(iVar8 + 0x70), 
                                                                       &puStack_190, &uStack_194);
                                                            void std::__1::vector<std::__1::shared_ptr<FeatureStyleAttributes>, geo::StdAllocator<std::__1::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator> >::emplace_back<std::__1::shared_ptr<FeatureStyleAttributes>&>(std::__1::shared_ptr<FeatureStyleAttributes>&)
                                                                      (*param_3 + 0x490, auStack_178);
                                                            std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                                                      (*(*param_3 + 0x1f8) + uVar22 * 0x100 + 0x68, 
                                                                       auStack_178[0], auStack_178[1]);
                                                            std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()
                                                                      (auStack_178);
                                                            uVar32 = uStack_130;
                                                            }
                                                        }
                                                    }
                                                }
                                                uStack_130 = uVar32;
                                                fcn.1939299d8(apuStack_150);
                                                uVar16 = uStack_1a8;
                                                uStack_1a8 = uVar16 + -1;
                                            } while (uVar16 + -1 != 0);
                                        }
                                        goto code_r0x0001938f2ca0;
                                    }
                                    uVar11 = **reloc.__stderrp;
                                }
                            }
                        }
                    }
                    goto code_r0x0001938f24b0;
                }
code_r0x0001938f30dc:
                uVar11 = 1;
            }
            geo::codec::VertexPoolDealloc(GeoCodecsVertexPool*)(puVar10);
        }
        if (param_1 != NULL) {
            if (*pcVar26 != '\0') {
                piVar12 = geo::codec::Allocator::instance()();
                (**(*piVar12 + 0x28))(piVar12, *(pcVar26 + 0x28), 0);
            }
            piVar12 = geo::codec::Allocator::instance()();
            (**(*piVar12 + 0x28))(piVar12, pcVar26, 0);
            if (pcVar9 != NULL) {
                if (*pcVar9 != '\0') {
                    piVar12 = geo::codec::Allocator::instance()();
                    (**(*piVar12 + 0x28))(piVar12, *(pcVar9 + 0x28), 0);
                }
                piVar12 = geo::codec::Allocator::instance()();
                (**(*piVar12 + 0x28))(piVar12, pcVar9, 0);
            }
        }
        piVar12 = piStack_d0;
        if (piVar12 != NULL) {
            LOAcquire();
            tmp_ldXn = piStack_d0[1];
            iVar8 = tmp_ldXn;
            tmp_stXn = iVar8 + -1;
            iVar8 = tmp_stXn;
            piStack_d0[1] = iVar8;
            iVar8 = tmp_ldXn;
            LORelease();
            if (iVar8 == 0) {
                (**(*piVar12 + 0x10))(piVar12);
                std::__1::__shared_weak_count::__release_weak()(piVar12);
            }
        }
        uVar22 = uStack_c8;
        iVar27 = iStack_c0;
        iVar8 = iStack_b0;
        iVar29 = std::__1::chrono::steady_clock::now()();
        auStack_178[0] = uVar22;
        if (uVar22 == 0) goto code_r0x0001938f23b4;
    }
    apuStack_150[0] = auStack_178;
    iVar27 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iVar27 + 0x778, auStack_178, 0x74c + 0x193af9000, apuStack_150, *0x8 + -0xd8);
    iVar8 = SUB168(SEXT816(iVar29 - iVar8) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar27 + 0x20) = ((iVar8 >> 7) - (iVar8 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x0001938f23b4:
    piVar12 = piStack_b8;
    if (piVar12 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_b8[1];
        iVar8 = tmp_ldXn;
        tmp_stXn = iVar8 + -1;
        iVar8 = tmp_stXn;
        piStack_b8[1] = iVar8;
        iVar8 = tmp_ldXn;
        LORelease();
        if (iVar8 == 0) {
            (**(*piVar12 + 0x10))(piVar12);
            std::__1::__shared_weak_count::__release_weak()(piVar12);
        }
    }
    if (**reloc.__stack_chk_guard != iStack_88) {
    // WARNING: Subroutine does not return
        __stack_chk_fail();
    }
    return uVar11;
}
