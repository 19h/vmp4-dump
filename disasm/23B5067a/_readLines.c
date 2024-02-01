
uint32_t geo::codec::_readLines(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, uint64_t *param_2)

{
    uchar auVar1 [16];
    int32_t iVar2;
    int32_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int32_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint *puVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    int32_t *piVar20;
    uint32_t *puVar21;
    int64_t iVar22;
    char *pcVar23;
    char *pcVar24;
    int64_t *piVar25;
    char *pcVar26;
    int64_t iVar27;
    char *pcVar28;
    int64_t iVar29;
    char *pcVar30;
    uint32_t uVar31;
    uint uVar32;
    ulong uVar33;
    ulong uVar34;
    ulong uVar35;
    ulong uVar36;
    ulong uVar37;
    uint uVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    ulong uVar43;
    uint64_t uStack_1b8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    int64_t iStack_190;
    uint64_t uStack_178;
    char *pcStack_170;
    char acStack_168 [4];
    uint32_t uStack_164;
    ulong uStack_160;
    char cStack_155;
    uint uStack_154;
    uint32_t auStack_150 [2];
    int64_t *apiStack_148 [2];
    ulong uStack_138;
    uint64_t uStack_130;
    int64_t *piStack_128;
    int64_t iStack_120;
    int64_t *apiStack_118 [2];
    int64_t iStack_108;
    uint64_t uStack_100;
    int64_t *piStack_f8;
    int64_t iStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    ulong uStack_b8;
    uint64_t uStack_a0;
    ulong uStack_98;
    int64_t iStack_80;
    
    iStack_80 = **reloc.__stack_chk_guard;
    uStack_100 = *param_2;
    iVar29 = *(uStack_100 + 0x358);
    iVar27 = *(uStack_100 + 0x360);
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_e8 = 0;
    uVar17 = param_1[1];
    if (uVar17 != 0) {
        uVar10 = 0;
        do {
            if (*(*param_1 + uVar10 * 0x10) == 0x1f) {
                pcVar23 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar10, 0x1f, uStack_100 + 0x778);
                iStack_108 = 0x14a + 0x193b8a000;
                uStack_100 = *param_2;
                piStack_f8 = param_2[1];
                if (piStack_f8 == NULL) goto code_r0x0001938f4238;
                goto code_r0x0001938f422c;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 <= uVar17 && uVar17 != uVar10);
    }
    pcVar23 = NULL;
    iStack_108 = 0x14a + 0x193b8a000;
    piStack_f8 = param_2[1];
    if (piStack_f8 != NULL) {
code_r0x0001938f422c:
        tmp_ldXn = piStack_f8[1];
        iVar4 = tmp_ldXn;
        tmp_stXn = iVar4 + 1;
        iVar4 = tmp_stXn;
        piStack_f8[1] = iVar4;
        uVar9 = tmp_ldXn;
    }
code_r0x0001938f4238:
    iVar4 = std::__1::chrono::steady_clock::now()();
    iStack_f0 = iVar4;
    if (pcVar23 == NULL) {
        uVar11 = 1;
        uVar31 = 1;
        uVar17 = uStack_100;
        iVar27 = std::__1::chrono::steady_clock::now()();
        uStack_a0 = 0x14a + 0x193b8a000;
        if (0x14a + 0x193b8a000 == 0) goto code_r0x0001938f5188;
    }
    else {
        apiStack_118[0] = NULL;
        apiStack_118[1] = NULL;
        uVar17 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar23, *0x8 + -0xd8);
        if ((uVar17 & 1) == 0) {
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            pcVar24 = NULL;
code_r0x0001938f4ea4:
            pcVar30 = NULL;
            pcVar28 = NULL;
            uVar17 = 0;
            pcVar26 = NULL;
            uVar31 = 0;
code_r0x0001938f4ea8:
            if (param_1 != NULL) {
                if (*pcVar23 != '\0') {
                    piVar25 = geo::codec::Allocator::instance()();
                    (**(*piVar25 + 0x28))(piVar25, *(pcVar23 + 0x28), 0);
                }
                piVar25 = geo::codec::Allocator::instance()();
                (**(*piVar25 + 0x28))(piVar25, pcVar23, 0);
                if (pcVar24 != NULL) {
                    if (*pcVar24 != '\0') {
                        piVar25 = geo::codec::Allocator::instance()();
                        (**(*piVar25 + 0x28))(piVar25, *(pcVar24 + 0x28), 0);
                    }
                    piVar25 = geo::codec::Allocator::instance()();
                    (**(*piVar25 + 0x28))(piVar25, pcVar24, 0);
                }
                if (pcVar26 != NULL) {
                    if (*pcVar26 != '\0') {
                        piVar25 = geo::codec::Allocator::instance()();
                        (**(*piVar25 + 0x28))(piVar25, *(pcVar26 + 0x28), 0);
                    }
                    piVar25 = geo::codec::Allocator::instance()();
                    (**(*piVar25 + 0x28))(piVar25, pcVar26, 0);
                }
                if (pcVar28 != NULL) {
                    if (*pcVar28 != '\0') {
                        piVar25 = geo::codec::Allocator::instance()();
                        (**(*piVar25 + 0x28))(piVar25, *(pcVar28 + 0x28), 0);
                    }
                    piVar25 = geo::codec::Allocator::instance()();
                    (**(*piVar25 + 0x28))(piVar25, pcVar28, 0);
                }
                if (pcVar30 != NULL) {
                    if (*pcVar30 != '\0') {
                        piVar25 = geo::codec::Allocator::instance()();
                        (**(*piVar25 + 0x28))(piVar25, *(pcVar30 + 0x28), 0);
                    }
                    piVar25 = geo::codec::Allocator::instance()();
                    (**(*piVar25 + 0x28))(piVar25, pcVar30, 0);
                }
            }
            piVar25 = geo::codec::Allocator::instance()();
            (**(*piVar25 + 0x28))(piVar25, uVar17, 0);
        }
        else {
            uStack_138 = 0x125 + 0x193b8a000;
            uStack_130 = *param_2;
            piStack_128 = param_2[1];
            if (piStack_128 != NULL) {
                tmp_ldXn = piStack_128[1];
                iVar4 = tmp_ldXn;
                tmp_stXn = iVar4 + 1;
                iVar4 = tmp_stXn;
                piStack_128[1] = iVar4;
                uVar9 = tmp_ldXn;
            }
            iVar4 = std::__1::chrono::steady_clock::now()();
            iStack_120 = iVar4;
            pcStack_170 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uStack_d8, 0x14, *param_2 + 0x778);
            if ((pcStack_170 == NULL) ||
               (uVar17 = geo::codec::decodeVertices(VMP4Chapter*, GeoCodecsCurveVertexPool**, GeoCodecsVertexPool**, bool)
                                   (pcStack_170, *param_2 + 0x300, *param_2 + 0x318, 
                                    0x42 < *(pcStack_170 + 0x40) && *(pcStack_170 + 0x40) != 0x43),  (uVar17 & 1) == 0))
            {
                fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                uVar17 = uStack_138;
                iVar3 = 6;
                uVar10 = uStack_130;
                iVar4 = iStack_120;
                iVar5 = std::__1::chrono::steady_clock::now()();
                uStack_c0 = uVar17;
                iVar2 = 6;
                if (uVar17 != 0) goto code_r0x0001938f43c4;
            }
            else {
                iVar3 = 0;
                uVar17 = 0x125 + 0x193b8a000;
                uVar10 = uStack_130;
                iVar5 = std::__1::chrono::steady_clock::now()();
                iVar2 = 0;
                uStack_c0 = uVar17;
                if (uVar17 != 0) {
code_r0x0001938f43c4:
                    iVar3 = iVar2;
                    uVar17 = uStack_c0;
                    uStack_a0 = *0x8 + -0xc0;
                    iVar22 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                                       (uVar10 + 0x778, *0x8 + -0xc0, 0x74c + 0x193af9000, *0x8 + -0xa0, auStack_150);
                    iVar4 = SUB168(SEXT816(iVar5 - iVar4) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
                    *(iVar22 + 0x20) = ((iVar4 >> 7) - (iVar4 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
                }
            }
            uVar31 = uVar17;
            piVar25 = piStack_128;
            pcVar24 = pcStack_170;
            if (piVar25 != NULL) {
                LOAcquire();
                tmp_ldXn = piStack_128[1];
                iVar4 = tmp_ldXn;
                tmp_stXn = iVar4 + -1;
                iVar4 = tmp_stXn;
                piStack_128[1] = iVar4;
                iVar4 = tmp_ldXn;
                LORelease();
                if (iVar4 != 0) goto code_r0x0001938f4448;
                (**(*piVar25 + 0x10))(piVar25);
                std::__1::__shared_weak_count::__release_weak()(piVar25);
                if (iVar3 == 6) goto code_r0x0001938f4ea4;
            }
            else {
code_r0x0001938f4448:
                if (iVar3 == 6) goto code_r0x0001938f4ea4;
            }
            if (iVar3 == 0) {
                uVar17 = *param_2;
                uVar17 = fcn.1938e6038(param_1, 0x33, uVar17 + 0x4b0, uVar17 + 0x4b8, uVar17 + 0x4d0, uVar17 + 0x4d8, 
                                       uVar17 + 0x778);
                if ((uVar17 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
code_r0x0001938f4e7c:
                    fprintf(uVar9, 0x8ff + 0x193b8a000);
                    goto code_r0x0001938f4ea4;
                }
                uVar17 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar23, *0x8 + -0xd0);
                if ((uVar17 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001938f4e7c;
                }
                uVar17 = uStack_d0;
                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar23, *0x8 + -0xc4);
                if ((uVar10 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001938f4e7c;
                }
                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar23, *0x8 + -200);
                if ((uVar10 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001938f4e7c;
                }
                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar23, *0x8 + -0xcc);
                if ((uVar10 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001938f4e7c;
                }
                if (0xffff < uStack_c8._4_4_) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001938f4e7c;
                }
                if (0xffff < uStack_c8) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001938f4e7c;
                }
                if (0xffff < uStack_d0._4_4_) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001938f4e7c;
                }
                uVar10 = geo::codec::_makeSpaceForLabels(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                   (uStack_c8._4_4_, *0x8 + -0xe0, param_2);
                if ((uVar10 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001938f4e7c;
                }
                uVar10 = geo::codec::_makeSpaceForShields(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                   (uStack_c8, *0x8 + -0xe8, param_2);
                if ((uVar10 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001938f4e7c;
                }
                uVar10 = uStack_d0._4_4_;
                if (uStack_d0._4_4_ != 0) {
                    piVar25 = geo::codec::Allocator::instance()();
                    iVar4 = (**(*piVar25 + 0x18))(piVar25, uVar10, 0x18);
                    uVar13 = *param_2;
                    *(uVar13 + 0x2f0) = iVar4;
                    *(uVar13 + 0x2f8) = uVar10;
                    if (iVar4 == 0) {
                        uVar9 = **reloc.__stderrp;
                        goto code_r0x0001938f4e7c;
                    }
                }
                uVar13 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar23, *0x8 + -0xd4);
                if ((uVar13 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
code_r0x0001938f56e8:
                    fprintf(uVar9, 0x8ff + 0x193b8a000);
                    uVar17 = 0;
                    pcVar30 = NULL;
                    pcVar28 = NULL;
                    pcVar26 = NULL;
code_r0x0001938f5710:
                    uVar31 = 0;
                    pcVar24 = pcStack_170;
                }
                else {
                    if (0xffff < uStack_d8._4_4_) {
                        uVar9 = **reloc.__stderrp;
                        goto code_r0x0001938f56e8;
                    }
                    std::__1::vector<GeoCodecsMultiSectionFeature, geo::StdAllocator<GeoCodecsMultiSectionFeature, geo::codec::Allocator> >::resize(unsigned long)
                              (*param_2 + 0x20);
                    geo::codec::attributesForFeatureType(signed char)(1);
                    std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes>&&)
                              (apiStack_118, &uStack_138);
                    std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(&uStack_138);
                    apiStack_148[0] = apiStack_118[0];
                    apiStack_148[1] = apiStack_118[1];
                    if (apiStack_118[1] != NULL) {
                        tmp_ldXn = apiStack_118[1][1];
                        iVar4 = tmp_ldXn;
                        tmp_stXn = iVar4 + 1;
                        iVar4 = tmp_stXn;
                        apiStack_118[1][1] = iVar4;
                        uVar9 = tmp_ldXn;
                    }
                    puVar6 = FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                       (*param_2 + 0x458, apiStack_148);
                    uStack_138 = *puVar6;
                    uStack_130 = puVar6[1];
                    if (uStack_130 != 0) {
                        tmp_ldXn = *(uStack_130 + 8);
                        iVar4 = tmp_ldXn;
                        tmp_stXn = iVar4 + 1;
                        uVar9 = tmp_stXn;
                        *(uStack_130 + 8) = uVar9;
                        uVar9 = tmp_ldXn;
                    }
                    std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes>&&)
                              (apiStack_118, &uStack_138);
                    std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(&uStack_138);
                    std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(apiStack_148);
                    uVar13 = uStack_e0;
                    uStack_178 = uStack_e8;
                    uVar14 = *param_2;
                    uStack_198 = *(uVar14 + 0x20);
                    if (*(uVar14 + 0x28) != uStack_198) {
                        uStack_1b8 = 0;
                        uStack_1a0 = 0;
                        uVar18 = iVar27 - iVar29;
                        pcVar24 = pcVar23 + 8;
                        uVar35 = *0x193af97d8;
                        uVar9 = *0x193af97d0;
                        uVar36 = *0x193ae20b8;
                        uVar33 = *0x193ae20b0;
                        uVar43 = *0x193af9830;
                        uVar37 = *0x193af97e8;
                        uVar34 = *0x193af97e0;
                        do {
                            puVar6 = uStack_198 + uStack_1a0 * 0x100;
                            *(puVar6 + 0xf) = 1;
                            uVar19 = param_2[1];
                            if (uVar19 != 0) {
                                tmp_ldXn = *(uVar19 + 0x10);
                                iVar27 = tmp_ldXn;
                                tmp_stXn = iVar27 + 1;
                                uVar8 = tmp_stXn;
                                *(uVar19 + 0x10) = uVar8;
                                uVar8 = tmp_ldXn;
                            }
                            uVar7 = puVar6[1];
                            *puVar6 = uVar14;
                            puVar6[1] = uVar19;
                            if (uVar7 != 0) {
                                std::__1::__shared_weak_count::__release_weak()();
                            }
                            uVar14 = *(pcVar23 + 0x30) + 1;
                            if (*(pcVar23 + 0x38) <= uVar14 && uVar14 != *(pcVar23 + 0x38)) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x0001938f56e8;
                            }
                            pcVar23[0x20] = '\x01';
                            *(pcVar23 + 8) = *(pcVar23 + 0x28) + *(pcVar23 + 0x30);
                            *(pcVar23 + 0x18) = uVar35;
                            *(pcVar23 + 0x10) = uVar9;
                            uStack_a0 = (uStack_a0 >> 0x20) << 0x20;
                            uStack_c0 = (uStack_c0 >> 0x20) << 0x20;
                            uVar14 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(pcVar24, *0x8 + -0xa0, 4)
                            ;
                            if ((uVar14 & 1) == 0) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x0001938f56e8;
                            }
                            uVar14 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(pcVar24, *0x8 + -0xc0, 4)
                            ;
                            if ((uVar14 & 1) == 0) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x0001938f56e8;
                            }
                            iVar27 = *(pcVar23 + 0x30) + (*(pcVar23 + 0x18) >> 3);
                            if ((*(pcVar23 + 0x18) & 7) != 0) {
                                iVar27 = iVar27 + 1;
                            }
                            *(pcVar23 + 0x30) = iVar27;
                            pcVar23[0x20] = '\0';
                            puVar6[3] = uVar13;
                            puVar6[5] = uStack_178;
                            uVar14 = uStack_a0;
                            puVar6[4] = uVar14;
                            uVar11 = uStack_c0;
                            uVar19 = uVar11;
                            puVar6[6] = uVar19;
                            if (uStack_a0 != 0) {
                                iVar27 = uVar13 * 0x18;
                                do {
                                    uStack_138 = (uStack_138 >> 0x20) << 0x20;
                                    auStack_150[0] = 0;
                                    uVar7 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                      (pcVar23, &uStack_138);
                                    if ((uVar7 & 1) == 0) {
                                        uStack_e8 = uStack_178;
                                        uStack_e0 = uVar13;
                                        goto code_r0x0001938f56dc;
                                    }
                                    uVar7 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                      (pcVar23, auStack_150);
                                    if ((uVar7 & 1) == 0) {
                                        uStack_e8 = uStack_178;
                                        uStack_e0 = uVar13;
                                        goto code_r0x0001938f56dc;
                                    }
                                    uVar7 = uStack_138;
                                    if (uVar18 < uVar7 || uVar18 == uVar7) {
                                        uStack_e8 = uStack_178;
                                        uStack_e0 = uVar13;
                                        goto code_r0x0001938f56dc;
                                    }
                                    uVar15 = *param_2;
                                    if (*(uVar15 + 0x420) <= uVar13) {
                                        uStack_e8 = uStack_178;
                                        uStack_e0 = uVar13;
                                        goto code_r0x0001938f56dc;
                                    }
                                    piVar25 = *(uVar15 + 0x418) + iVar27;
                                    *piVar25 = iVar29 + uVar7;
                                    *(piVar25 + 2) = auStack_150[0];
                                    uVar8 = geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                      (uStack_138, *(uVar15 + 0x378), *(uVar15 + 0x380));
                                    *(*(*param_2 + 0x418) + iVar27 + 8) = uVar8;
                                    uVar13 = uVar13 + 1;
                                    iVar27 = iVar27 + 0x18;
                                    uVar14 = uVar14 + -1;
                                } while (uVar14 != 0);
                            }
                            if (uVar11 != 0) {
                                iVar27 = uStack_178 << 5;
                                do {
                                    auStack_150[0] = 0;
                                    uStack_138 = 0;
                                    uVar14 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                       (pcVar23, auStack_150);
                                    if ((uVar14 & 1) == 0) {
                                        uStack_e8 = uStack_178;
                                        uStack_e0 = uVar13;
                                        goto code_r0x0001938f56dc;
                                    }
                                    uVar14 = geo::codec::chapterReadVarInt64(VMP4Chapter*, long long*)
                                                       (pcVar23, &uStack_138);
                                    if ((uVar14 & 1) == 0) {
                                        uStack_e8 = uStack_178;
                                        uStack_e0 = uVar13;
                                        goto code_r0x0001938f56dc;
                                    }
                                    uVar14 = auStack_150[0];
                                    if (uVar18 < uVar14 || uVar18 == uVar14) {
                                        uStack_e8 = uStack_178;
                                        uStack_e0 = uVar13;
                                        goto code_r0x0001938f56dc;
                                    }
                                    uVar7 = *param_2;
                                    if (*(uVar7 + 0x430) <= uStack_178) {
                                        uStack_e8 = uStack_178;
                                        uStack_e0 = uVar13;
                                        goto code_r0x0001938f56dc;
                                    }
                                    *(*(uVar7 + 0x428) + iVar27) = iVar29 + uVar14;
                                    uVar8 = geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                      (uVar14, *(uVar7 + 0x378), *(uVar7 + 0x380));
                                    iVar4 = *(*param_2 + 0x428) + iVar27;
                                    *(iVar4 + 8) = uVar8;
                                    *(iVar4 + 0x18) = uStack_138;
                                    uStack_178 = uStack_178 + 1;
                                    iVar27 = iVar27 + 0x20;
                                    uVar19 = uVar19 + -1;
                                } while (uVar19 != 0);
                            }
                            uVar14 = puVar6[6];
                            if (uVar14 != 0) {
                                uVar14 = *(*(*param_2 + 0x428) + uStack_178 * 0x20 + -0x20);
                            }
                            if (puVar6[4] != 0) {
                                uVar14 = *(*(*param_2 + 0x418) + uVar13 * 0x18 + -0x18);
                            }
                            puVar6[2] = uVar14;
                            uStack_164 = (uStack_164 >> 8) << 8;
                            acStack_168[0] = '\0';
                            uStack_154 = 0;
                            cStack_155 = '\0';
                            uVar14 = *(pcVar23 + 0x30) + 1;
                            if (uVar14 < *(pcVar23 + 0x38) || uVar14 == *(pcVar23 + 0x38)) {
                                pcVar23[0x20] = '\x01';
                                *(pcVar23 + 8) = *(pcVar23 + 0x28) + *(pcVar23 + 0x30);
                                *(pcVar23 + 0x18) = uVar35;
                                *(pcVar23 + 0x10) = uVar9;
                            }
                            uVar14 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar24, &uStack_164);
                            if ((uVar14 & 1) == 0) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
code_r0x0001938f56dc:
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x0001938f56e8;
                            }
                            uVar14 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar24, acStack_168);
                            if ((uVar14 & 1) == 0) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                goto code_r0x0001938f56dc;
                            }
                            uVar14 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar24, &uStack_154 + 3);
                            if ((uVar14 & 1) == 0) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                goto code_r0x0001938f56dc;
                            }
                            uVar14 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar24, &uStack_154 + 2);
                            if ((uVar14 & 1) == 0) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                goto code_r0x0001938f56dc;
                            }
                            uVar14 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar24, &uStack_154 + 1);
                            if ((uVar14 & 1) == 0) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                goto code_r0x0001938f56dc;
                            }
                            uVar14 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar24, &uStack_154);
                            if ((uVar14 & 1) == 0) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                goto code_r0x0001938f56dc;
                            }
                            uVar14 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar24, &cStack_155);
                            if ((uVar14 & 1) == 0) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                goto code_r0x0001938f56dc;
                            }
                            uVar14 = *(pcVar23 + 0x18) + 1;
                            if (*(pcVar23 + 0x10) * 8 <= uVar14 && uVar14 != *(pcVar23 + 0x10) * 8) {
                                uStack_e8 = uStack_178;
                                uStack_e0 = uVar13;
                                goto code_r0x0001938f56dc;
                            }
                            *(pcVar23 + 0x18) = uVar14;
                            uVar19 = uVar14 >> 3;
                            if ((uVar14 & 7) != 0) {
                                uVar19 = uVar19 + 1;
                            }
                            *(pcVar23 + 0x30) = uVar19 + *(pcVar23 + 0x30);
                            pcVar23[0x20] = '\0';
                            uStack_138 = CONCAT44(uStack_138._4_4_, 1);
                            if (uStack_164 == '\0') {
                                uVar14 = 1;
                            }
                            else {
                                iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                  (pcVar23, &uStack_138);
                                if (iVar2 == 0) {
                                    uStack_e8 = uStack_178;
                                    uStack_e0 = uVar13;
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x0001938f56e8;
                                }
                                uVar14 = uStack_138;
                            }
                            iVar27 = uStack_198 + uStack_1a0 * 0x100;
                            *(iVar27 + 0x80) = uVar17;
                            *(iVar27 + 0x88) = uVar14;
                            *(iVar27 + 0xc0) = uVar36;
                            *(iVar27 + 0xb8) = uVar33;
                            if (acStack_168[0] != '\0') {
                                uVar19 = *(pcVar23 + 0x30) + 8;
                                if (*(pcVar23 + 0x38) <= uVar19 && uVar19 != *(pcVar23 + 0x38)) {
                                    uStack_e8 = uStack_178;
                                    uStack_e0 = uVar13;
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x0001938f56e8;
                                }
                                uVar7 = *(*(pcVar23 + 0x28) + *(pcVar23 + 0x30));
                                *(pcVar23 + 0x30) = uVar19;
                                puVar6[8] = uVar7;
                            }
                            if (uStack_154._3_1_ == '\0') {
                                *(iVar27 + 0x98) = 0xff;
                                *(iVar27 + 0x90) = uVar43;
                            }
                            else {
                                uVar19 = *(pcVar23 + 0x30) + 2;
                                if (uVar19 < *(pcVar23 + 0x38) || uVar19 == *(pcVar23 + 0x38)) {
                                    pcVar23[0x20] = '\x01';
                                    *(pcVar23 + 8) = *(pcVar23 + 0x28) + *(pcVar23 + 0x30);
                                    *(pcVar23 + 0x18) = uVar37;
                                    *(pcVar23 + 0x10) = uVar34;
                                }
                                auStack_150[0] = 0;
                                uStack_160 = 0;
                                BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(pcVar24, auStack_150, 4);
                                BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(pcVar24, &uStack_160 + 4, 4);
                                BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(pcVar24, &uStack_160, 8);
                                iVar4 = *(pcVar23 + 0x30) + (*(pcVar23 + 0x18) >> 3);
                                if ((*(pcVar23 + 0x18) & 7) != 0) {
                                    iVar4 = iVar4 + 1;
                                }
                                *(pcVar23 + 0x30) = iVar4;
                                pcVar23[0x20] = '\0';
                                uVar11 = auStack_150[0] + -1;
                                if (2 < uVar11 && auStack_150[0] + -1 != 3) {
                                    uVar32 = 0xff;
                                }
                                else {
                                    uVar32 = *(0x820 + 0x193af9000 + uVar11 * 4);
                                }
                                *(iVar27 + 0x98) = uVar32;
                                *(iVar27 + 0x90) = uStack_160._4_4_;
                                *(iVar27 + 0x94) = uStack_160;
                            }
                            if (uStack_154._2_1_ != '\0') {
                                auStack_150[0] = 0;
                                iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                  (pcVar23, auStack_150);
                                if (iVar2 == 0) {
                                    uStack_e8 = uStack_178;
                                    uStack_e0 = uVar13;
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x0001938f56e8;
                                }
                            }
                            if (uStack_154._1_1_ != '\0') {
                                uVar19 = *(pcVar23 + 0x30) + 4;
                                if (*(pcVar23 + 0x38) <= uVar19 && uVar19 != *(pcVar23 + 0x38)) {
                                    uStack_e8 = uStack_178;
                                    uStack_e0 = uVar13;
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x0001938f56e8;
                                }
                                uVar32 = *(*(pcVar23 + 0x28) + *(pcVar23 + 0x30));
                                *(pcVar23 + 0x30) = uVar19;
                                *(puVar6 + 0xb) = uVar32;
                            }
                            if (uStack_154 != '\0') {
                                iVar4 = *(*param_2 + 0x2f0);
                                if (iVar4 == 0) {
                                    uStack_e8 = uStack_178;
                                    uStack_e0 = uVar13;
                                    uVar9 = **reloc.__stderrp;
                                }
                                else {
                                    if (uStack_1b8 < uVar10) {
                                        iVar5 = *(pcVar23 + 0x30);
                                        uVar7 = *(pcVar23 + 0x38);
                                        uVar19 = iVar5 + 4;
                                        if (uVar7 <= uVar19 && uVar19 != uVar7) {
                                            uStack_e8 = uStack_178;
                                            uStack_e0 = uVar13;
                                        }
                                        else {
                                            puVar16 = *(pcVar23 + 0x28) + iVar5;
                                            uVar32 = *puVar16;
                                            *(pcVar23 + 0x30) = uVar19;
                                            uVar19 = iVar5 + 8;
                                            if (uVar7 <= uVar19 && uVar19 != uVar7) {
                                                uStack_e8 = uStack_178;
                                                uStack_e0 = uVar13;
                                            }
                                            else {
                                                uVar38 = puVar16[1];
                                                *(pcVar23 + 0x30) = uVar19;
                                                uVar19 = iVar5 + 0xc;
                                                if (uVar7 <= uVar19 && uVar19 != uVar7) {
                                                    uStack_e8 = uStack_178;
                                                    uStack_e0 = uVar13;
                                                }
                                                else {
                                                    fVar39 = puVar16[2];
                                                    *(pcVar23 + 0x30) = uVar19;
                                                    uVar19 = iVar5 + 0x10;
                                                    if (uVar7 <= uVar19 && uVar19 != uVar7) {
                                                        uStack_e8 = uStack_178;
                                                        uStack_e0 = uVar13;
                                                    }
                                                    else {
                                                        fVar40 = puVar16[3];
                                                        *(pcVar23 + 0x30) = uVar19;
                                                        uVar19 = iVar5 + 0x14;
                                                        if (uVar7 <= uVar19 && uVar19 != uVar7) {
                                                            uStack_e8 = uStack_178;
                                                            uStack_e0 = uVar13;
                                                        }
                                                        else {
                                                            fVar41 = puVar16[4];
                                                            *(pcVar23 + 0x30) = uVar19;
                                                            uVar19 = iVar5 + 0x18;
                                                            if (uVar19 < uVar7 || uVar19 == uVar7) {
                                                                fVar42 = puVar16[5];
                                                                *(pcVar23 + 0x30) = uVar19;
                                                                puVar16 = iVar4 + uStack_1b8 * 0x18;
                                                                uStack_1b8 = uStack_1b8 + 1;
                                                                *puVar16 = uVar32;
                                                                puVar16[1] = uVar38;
                                                                puVar16[2] = fVar39 * 0.0004882812;
                                                                puVar16[3] = fVar40 * 0.0004882812;
                                                                puVar16[4] = fVar41 * 0.0004882812;
                                                                puVar16[5] = fVar42 * 0.0004882812;
                                                                *(iVar27 + 200) = puVar16;
                                                                goto code_r0x0001938f4bfc;
                                                            }
                                                            uStack_e8 = uStack_178;
                                                            uStack_e0 = uVar13;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        goto code_r0x0001938f56dc;
                                    }
                                    uStack_e8 = uStack_178;
                                    uStack_e0 = uVar13;
                                    uVar9 = **reloc.__stderrp;
                                }
                                goto code_r0x0001938f56e8;
                            }
code_r0x0001938f4bfc:
                            if (cStack_155 == '\0') {
                                std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                          (puVar6 + 0xd, apiStack_118[0], apiStack_118[1]);
                            }
                            else {
                                uVar19 = geo::codec::accumulateStyleAttributes(FeatureStyleAttributesSet&, std::__1::shared_ptr<FeatureStyleAttributes>&, VMP4Chapter*, GeoCodecsFeature*)
                                                   (*param_2 + 0x458, apiStack_118, pcVar23, puVar6);
                                if ((uVar19 & 1) == 0) {
                                    uStack_e8 = uStack_178;
                                    uVar9 = **reloc.__stderrp;
                                    uStack_e0 = uVar13;
                                    goto code_r0x0001938f56e8;
                                }
                            }
                            uVar17 = uVar17 + uVar14;
                            uStack_1a0 = uStack_1a0 + 1;
                            uVar14 = *param_2;
                            uStack_198 = *(uVar14 + 0x20);
                        } while (uStack_1a0 < *(uVar14 + 0x28) - *(uVar14 + 0x20) >> 8);
                    }
                    uStack_e8 = uStack_178;
                    uStack_e0 = uVar13;
                    pcVar26 = geo::codec::chapterForTag(VMP4Tile*, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                        (param_1, 0x3c, uVar14 + 0x778);
                    if (pcVar26 != NULL) {
                        uStack_130 = *param_2;
                        piStack_128 = param_2[1];
                        uStack_138 = 0x242 + 0x193b8a000;
                        if (piStack_128 != NULL) {
                            tmp_ldXn = piStack_128[1];
                            iVar27 = tmp_ldXn;
                            tmp_stXn = iVar27 + 1;
                            iVar27 = tmp_stXn;
                            piStack_128[1] = iVar27;
                            uVar9 = tmp_ldXn;
                        }
                        iStack_120 = 0;
                        iStack_120 = std::__1::chrono::steady_clock::now()();
                        uStack_a0 = (uStack_a0 >> 0x20) << 0x20;
                        uStack_c0 = (uStack_c0 >> 0x20) << 0x20;
                        uVar17 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar26, *0x8 + -0xa0);
                        if ((uVar17 & 1) == 0) {
                            uVar9 = **reloc.__stderrp;
code_r0x0001938f5750:
                            fprintf(uVar9, 0x8ff + 0x193b8a000);
                            uVar17 = 0;
                        }
                        else {
                            uVar17 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                               (pcVar26, *0x8 + -0xc0);
                            if ((uVar17 & 1) == 0) {
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x0001938f5750;
                            }
                            *(*param_2 + 0x2b8) = uStack_c0;
                            piVar25 = geo::codec::Allocator::instance()();
                            iVar27 = (**(*piVar25 + 0x18))(piVar25, *(*param_2 + 0x2b8), 0x20);
                            *(*param_2 + 0x2b0) = iVar27;
                            if (iVar27 == 0) {
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x0001938f5750;
                            }
                            uStack_178 = uStack_a0;
                            piVar25 = geo::codec::Allocator::instance()();
                            uVar17 = (**(*piVar25 + 0x18))(piVar25, uStack_178, 0x10);
                            if (uVar17 != 0) {
                                uVar10 = *param_2;
                                if (*(uVar10 + 0x2b8) != 0) {
                                    uVar13 = 0;
                                    iVar27 = 0;
                                    do {
                                        iVar29 = *(uVar10 + 0x2b0);
                                        auStack_150[0] = 0;
                                        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                           (pcVar26, auStack_150);
                                        if ((uVar10 & 1) == 0) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x0001938f59dc;
                                        }
                                        uVar10 = iVar27 + auStack_150[0];
                                        if (uStack_178 <= uVar10 && uVar10 != uStack_178) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x0001938f59dc;
                                        }
                                        *(iVar29 + uVar13 * 0x20) = auStack_150[0];
                                        *(iVar29 + uVar13 * 0x20 + 4) = iVar27;
                                        if (auStack_150[0] != 0) {
                                            iVar29 = 0;
                                            puVar16 = uVar17 + 8 + iVar27 * 0x10;
                                            do {
                                                uStack_160 = 0;
                                                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                                   (pcVar26, &uStack_160 + 4);
                                                if (((uVar10 & 1) == 0) ||
                                                   (iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                                      (pcVar26, &uStack_160),  iVar2 == 0))
                                                goto code_r0x0001938f59d0;
                                                puVar16[-2] = uVar13;
                                                puVar16[-1] = uStack_160._4_4_;
                                                *puVar16 = 0;
                                                puVar16[1] = uStack_160;
                                                iVar29 = iVar29 + 1;
                                                puVar16 = puVar16 + 4;
                                            } while (iVar29 < auStack_150[0]);
                                            iVar27 = iVar27 + iVar29;
                                        }
                                        uVar13 = uVar13 + 1;
                                        uVar10 = *param_2;
                                    } while (uVar13 < *(uVar10 + 0x2b8));
                                }
                                iVar27 = *(uVar10 + 0x300);
                                if ((iVar27 != 0) && (uStack_178 != 0)) {
                                    iVar29 = 0;
                                    iVar5 = *(uVar10 + 0x20);
                                    uVar10 = *(uVar10 + 0x28) - iVar5 >> 8;
                                    iVar4 = *(iVar27 + 0x20);
                                    uVar13 = *(iVar27 + 0x10);
                                    do {
                                        iVar27 = uVar17 + iVar29;
                                        uVar14 = *(iVar27 + 4);
                                        if (uVar10 < uVar14 || uVar10 == uVar14) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x0001938f59dc;
                                        }
                                        uVar11 = *(iVar27 + 0xc);
                                        iVar22 = *(iVar5 + 0x80 + (uVar14 << 8));
                                        uVar14 = *(iVar4 + iVar22 * 0x10 + 8);
                                        if (uVar14 < uVar11 || uVar14 == uVar11) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x0001938f59dc;
                                        }
                                        uVar11 = uVar11 + *(iVar4 + iVar22 * 0x10);
                                        *(iVar27 + 0xc) = uVar11;
                                        if (uVar13 < uVar11 || uVar13 == uVar11) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x0001938f59dc;
                                        }
                                        iVar29 = iVar29 + 0x10;
                                    } while (uStack_178 * 0x10 - iVar29 != 0);
                                }
                                if (2 < *(pcVar26 + 0x40)) {
                                    uVar10 = *(pcVar26 + 0x30);
                                    if (uVar10 <= *(pcVar26 + 0x38)) {
                                        pcVar26[0x20] = '\x01';
                                        *(pcVar26 + 0x10) = *(pcVar26 + 0x38) - uVar10;
                                        *(pcVar26 + 0x18) = 0;
                                        *(pcVar26 + 8) = *(pcVar26 + 0x28) + uVar10;
                                    }
                                    pcVar24 = pcVar26 + 8;
                                    uStack_160 = (uStack_160 >> 8) << 8;
                                    uVar10 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar24, &uStack_160);
                                    if ((uVar10 & 1) == 0) {
                                        uVar9 = **reloc.__stderrp;
                                        goto code_r0x0001938f59dc;
                                    }
                                    if (uStack_160 != '\0') {
                                        auStack_150[0] = 0;
                                        uVar10 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                           (pcVar24, auStack_150, 5);
                                        if ((uVar10 & 1) == 0) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x0001938f59dc;
                                        }
                                        if (*(*param_2 + 0x2b8) != 0) {
                                            uVar10 = 0;
                                            uVar11 = auStack_150[0];
                                            iVar27 = 8;
                                            do {
                                                uStack_164 = (uStack_164 >> 8) << 8;
                                                uVar13 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar24, &uStack_164);
                                                if ((uVar13 & 1) == 0) {
                                                    uVar9 = **reloc.__stderrp;
                                                    goto code_r0x0001938f59dc;
                                                }
                                                uVar13 = *param_2;
                                                if (uStack_164 != '\0') {
                                                    iVar29 = *(uVar13 + 0x2b0);
                                                    uStack_160 = uStack_160 & 0xffffffff;
                                                    iVar2 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (pcVar24, &uStack_160 + 4, uVar11 + 1);
                                                    if (iVar2 == 0) goto code_r0x0001938f59d0;
                                                    uVar13 = *param_2;
                                                    if (*(uVar13 + 0x200) - *(uVar13 + 0x1f8) >> 8 <= uStack_160._4_4_)
                                                    goto code_r0x0001938f59d0;
                                                    *(iVar29 + iVar27) = *(uVar13 + 0x1f8) + uStack_160._4_4_ * 0x100;
                                                }
                                                uVar10 = uVar10 + 1;
                                                iVar27 = iVar27 + 0x20;
                                            } while (uVar10 < *(uVar13 + 0x2b8));
                                        }
                                    }
                                    iVar27 = *(pcVar26 + 0x30) + (*(pcVar26 + 0x18) >> 3);
                                    if ((*(pcVar26 + 0x18) & 7) != 0) {
                                        iVar27 = iVar27 + 1;
                                    }
                                    *(pcVar26 + 0x30) = iVar27;
                                    pcVar26[0x20] = '\0';
                                }
                                geo::codec::ChapterDecodeTimer::~ChapterDecodeTimer()(&uStack_138);
                                goto code_r0x0001938f529c;
                            }
                            uVar9 = **reloc.__stderrp;
code_r0x0001938f59dc:
                            fprintf(uVar9, 0x8ff + 0x193b8a000);
                        }
                        geo::codec::ChapterDecodeTimer::~ChapterDecodeTimer()(&uStack_138);
                        pcVar30 = NULL;
                        pcVar28 = NULL;
                        goto code_r0x0001938f5710;
                    }
                    uVar17 = 0;
                    uStack_178 = 0;
code_r0x0001938f529c:
                    pcVar28 = geo::codec::chapterForTag(VMP4Tile*, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                        (param_1, 0x50, *param_2 + 0x778);
                    if ((pcVar28 != NULL) && (uVar10 = *param_2,  *(uVar10 + 0x28) != *(uVar10 + 0x20))) {
                        piStack_128 = param_2[1];
                        uStack_138 = 0x256 + 0x193b8a000;
                        if (piStack_128 != NULL) {
                            tmp_ldXn = piStack_128[1];
                            iVar27 = tmp_ldXn;
                            tmp_stXn = iVar27 + 1;
                            iVar27 = tmp_stXn;
                            piStack_128[1] = iVar27;
                            uVar9 = tmp_ldXn;
                        }
                        iStack_120 = 0;
                        uStack_130 = uVar10;
                        iStack_120 = std::__1::chrono::steady_clock::now()();
                        uVar10 = *(pcVar28 + 0x30);
                        if (uVar10 <= *(pcVar28 + 0x38)) {
                            pcVar28[0x20] = '\x01';
                            *(pcVar28 + 0x10) = *(pcVar28 + 0x38) - uVar10;
                            *(pcVar28 + 0x18) = 0;
                            *(pcVar28 + 8) = *(pcVar28 + 0x28) + uVar10;
                        }
                        uStack_a0 = (uStack_a0 >> 0x20) << 0x20;
                        iVar2 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(pcVar28 + 8, *0x8 + -0xa0, 6);
                        if (iVar2 != 0) {
                            iVar2 = uStack_a0;
                            if (iVar2 + 1 < 0x41) {
                                iVar27 = *(*param_2 + 0x20);
                                if (*(*param_2 + 0x28) != iVar27) {
                                    uVar10 = 0;
                                    iVar29 = 0x40;
                                    do {
                                        uVar13 = BitstreamUnpack64(Bitstream*, unsigned long long*, unsigned long)
                                                           (pcVar28 + 8, iVar27 + iVar29, iVar2 + 1);
                                        if ((uVar13 & 1) == 0) goto code_r0x0001938f5a40;
                                        uVar10 = uVar10 + 1;
                                        iVar27 = *(*param_2 + 0x20);
                                        iVar29 = iVar29 + 0x100;
                                    } while (uVar10 < *(*param_2 + 0x28) - iVar27 >> 8);
                                }
                                iVar27 = *(pcVar28 + 0x30) + (*(pcVar28 + 0x18) >> 3);
                                if ((*(pcVar28 + 0x18) & 7) != 0) {
                                    iVar27 = iVar27 + 1;
                                }
                                *(pcVar28 + 0x30) = iVar27;
                                pcVar28[0x20] = '\0';
                                geo::codec::ChapterDecodeTimer::~ChapterDecodeTimer()(&uStack_138);
                                goto code_r0x0001938f53b8;
                            }
                        }
code_r0x0001938f5a40:
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        geo::codec::ChapterDecodeTimer::~ChapterDecodeTimer()(&uStack_138);
                        pcVar30 = NULL;
                        goto code_r0x0001938f5710;
                    }
code_r0x0001938f53b8:
                    pcVar30 = geo::codec::chapterForTag(VMP4Tile*, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                        (param_1, 0x5a, *param_2 + 0x778);
                    if ((pcVar30 != NULL) && (uVar10 = *param_2,  *(uVar10 + 0x28) != *(uVar10 + 0x20))) {
                        piStack_128 = param_2[1];
                        uStack_138 = 0x26b + 0x193b8a000;
                        if (piStack_128 != NULL) {
                            tmp_ldXn = piStack_128[1];
                            iVar27 = tmp_ldXn;
                            tmp_stXn = iVar27 + 1;
                            iVar27 = tmp_stXn;
                            piStack_128[1] = iVar27;
                            uVar9 = tmp_ldXn;
                        }
                        iStack_120 = 0;
                        uStack_130 = uVar10;
                        iStack_120 = std::__1::chrono::steady_clock::now()();
                        uVar10 = *(pcVar30 + 0x30);
                        if (uVar10 <= *(pcVar30 + 0x38)) {
                            pcVar30[0x20] = '\x01';
                            *(pcVar30 + 0x10) = *(pcVar30 + 0x38) - uVar10;
                            *(pcVar30 + 0x18) = 0;
                            *(pcVar30 + 8) = *(pcVar30 + 0x28) + uVar10;
                        }
                        pcVar24 = pcVar30 + 8;
                        auStack_150[0] = 0;
                        uStack_160 = uStack_160 & 0xffffffff;
                        uVar10 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(pcVar24, auStack_150, 5);
                        if ((uVar10 & 1) == 0) {
                            uVar9 = **reloc.__stderrp;
                        }
                        else {
                            uVar10 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                               (pcVar24, &uStack_160 + 4, 5);
                            if ((uVar10 & 1) == 0) {
                                uVar9 = **reloc.__stderrp;
                            }
                            else {
                                uVar11 = auStack_150[0];
                                if (uVar11 + 1 < 0x41) {
                                    iVar2 = uStack_160._4_4_;
                                    if (iVar2 + 1 < 0x41) {
                                        iStack_190 = *(*param_2 + 0x20);
                                        if (*(*param_2 + 0x28) != iStack_190) {
                                            uStack_198 = 0;
                                            do {
                                                uStack_160 = (uStack_160 >> 0x20) << 0x20;
                                                iVar3 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                  (pcVar24, &uStack_160, 2);
                                                if (iVar3 == 0) {
                                                    uVar9 = **reloc.__stderrp;
                                                    goto code_r0x0001938f5b48;
                                                }
                                                uVar10 = uStack_160;
                                                if (uStack_160 != 0) {
                                                    iVar27 = iStack_190 + uStack_198 * 0x100;
                                                    do {
                                                        uStack_a0 = (uStack_a0 >> 0x20) << 0x20;
                                                        uVar13 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (pcVar24, *0x8 + -0xa0, 2);
                                                        if ((uVar13 & 1) == 0) {
                                                            uVar9 = **reloc.__stderrp;
                                                            goto code_r0x0001938f5b48;
                                                        }
                                                        uStack_c0 = (uStack_c0 >> 0x20) << 0x20;
                                                        uVar13 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (pcVar24, *0x8 + -0xc0, uVar11 + 1);
                                                        if ((uVar13 & 1) == 0) {
                                                            uVar9 = **reloc.__stderrp;
                                                            goto code_r0x0001938f5b48;
                                                        }
                                                        uStack_164 = 0;
                                                        iVar3 = BitstreamUnpackSigned(Bitstream*, int*, unsigned long)
                                                                          (pcVar24, &uStack_164, iVar2 + 1);
                                                        if (iVar3 == 0) {
                                                            uVar9 = **reloc.__stderrp;
                                                            goto code_r0x0001938f5b48;
                                                        }
                                                        iVar12 = uStack_c0;
                                                        iVar3 = uStack_164 + iVar12;
                                                        if (uStack_a0 == 2) {
code_r0x0001938f54dc:
                                                            *(iVar27 + 0xd2) = uStack_c0;
                                                            *(iVar27 + 0xd6) = iVar3;
                                                        }
                                                        else {
                                                            *(iVar27 + 0xd0) = iVar12;
                                                            *(iVar27 + 0xd4) = iVar3;
                                                            if (uStack_a0 != 1) goto code_r0x0001938f54dc;
                                                        }
                                                        uVar10 = uVar10 + -1;
                                                    } while (uVar10 != 0);
                                                }
                                                uStack_164 = 0;
                                                iVar3 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                  (pcVar24, &uStack_164, 2);
                                                if (iVar3 == 0) {
                                                    uVar9 = **reloc.__stderrp;
                                                    goto code_r0x0001938f5b48;
                                                }
                                                uVar10 = uStack_164;
                                                if (uStack_164 != 0) {
                                                    do {
                                                        uVar13 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (pcVar24, acStack_168, 2);
                                                        if ((uVar13 & 1) == 0) {
                                                            uVar9 = **reloc.__stderrp;
                                                            goto code_r0x0001938f5b48;
                                                        }
                                                        iVar27 = *(pcVar30 + 0x30) + (*(pcVar30 + 0x18) >> 3);
                                                        if ((*(pcVar30 + 0x18) & 7) != 0) {
                                                            iVar27 = iVar27 + 1;
                                                        }
                                                        *(pcVar30 + 0x30) = iVar27;
                                                        pcVar30[0x20] = '\0';
                                                        iVar3 = 
                                                            geo::codec::chapterReadNullTerminatedString(VMP4Chapter*, char*, unsigned long)
                                                                      (pcVar30, *0x8 + -0xa0, 0x20);
                                                        if ((iVar3 == 0) ||
                                                           (iVar3 = 
                                                            geo::codec::chapterReadNullTerminatedString(VMP4Chapter*, char*, unsigned long)
                                                                      (pcVar30, *0x8 + -0xc0, 0x20),  iVar3 == 0)) {
                                                            uVar9 = **reloc.__stderrp;
                                                            goto code_r0x0001938f5b48;
                                                        }
                                                        uVar13 = *(pcVar30 + 0x30);
                                                        if (uVar13 <= *(pcVar30 + 0x38)) {
                                                            pcVar30[0x20] = '\x01';
                                                            *(pcVar30 + 0x10) = *(pcVar30 + 0x38) - uVar13;
                                                            *(pcVar30 + 0x18) = 0;
                                                            *(pcVar30 + 8) = *(pcVar30 + 0x28) + uVar13;
                                                        }
                                                        uVar10 = uVar10 + -1;
                                                    } while (uVar10 != 0);
                                                }
                                                uStack_198 = uStack_198 + 1;
                                                iStack_190 = *(*param_2 + 0x20);
                                            } while (uStack_198 < *(*param_2 + 0x28) - iStack_190 >> 8);
                                        }
                                        iVar27 = *(pcVar30 + 0x30) + (*(pcVar30 + 0x18) >> 3);
                                        if ((*(pcVar30 + 0x18) & 7) != 0) {
                                            iVar27 = iVar27 + 1;
                                        }
                                        *(pcVar30 + 0x30) = iVar27;
                                        pcVar30[0x20] = '\0';
                                        geo::codec::ChapterDecodeTimer::~ChapterDecodeTimer()(&uStack_138);
                                        goto code_r0x0001938f5cf0;
                                    }
                                    uVar9 = **reloc.__stderrp;
                                }
                                else {
                                    uVar9 = **reloc.__stderrp;
                                }
                            }
                        }
code_r0x0001938f5b48:
                        fprintf(uVar9, 0x8ff + 0x193b8a000);
                        geo::codec::ChapterDecodeTimer::~ChapterDecodeTimer()(&uStack_138);
                        goto code_r0x0001938f5710;
                    }
code_r0x0001938f5cf0:
                    uVar10 = *param_2;
                    iVar27 = *(uVar10 + 0x300);
                    if ((iVar27 != 0) && (*(uVar10 + 0x318) == 0)) {
                        iVar29 = *(uVar10 + 0x4b0);
                        if ((iVar29 != 0) && (uVar13 = *(uVar10 + 0x4b8),  uVar13 != 0)) {
                            iVar4 = *(iVar27 + 0x20);
                            iVar5 = *(uVar10 + 0x20);
                            if (uVar13 < 4) {
                                uVar14 = 0;
                            }
                            else {
                                uVar14 = 0;
                                auVar1._8_8_ = 0;
                                auVar1._0_8_ = uVar13 + -1;
                                if ((iVar29 + 0xcU <= iVar29 + 0xcU + (uVar13 + -1) * 100) &&
                                   (!(SUB168(auVar1 * ZEXT816(100), 8) != 0))) {
                                    uVar14 = uVar13 & 0xfffffffffffffffc;
                                    puVar21 = iVar29 + 0xcc;
                                    uVar18 = uVar14;
                                    do {
                                        iVar2 = *(iVar4 + *(iVar5 + puVar21[-0x19] * 0x100 + 0x80) * 0x10);
                                        iVar3 = *(iVar4 + *(iVar5 + *puVar21 * 0x100 + 0x80) * 0x10);
                                        iVar12 = *(iVar4 + *(iVar5 + puVar21[0x19] * 0x100 + 0x80) * 0x10);
                                        puVar21[-0x30] =
                                             puVar21[-0x30] + *(iVar4 + *(iVar5 + puVar21[-0x32] * 0x100 + 0x80) * 0x10)
                                        ;
                                        puVar21[-0x17] = puVar21[-0x17] + iVar2;
                                        puVar21[2] = puVar21[2] + iVar3;
                                        puVar21[0x1b] = puVar21[0x1b] + iVar12;
                                        puVar21 = puVar21 + 100;
                                        uVar18 = uVar18 + -4;
                                    } while (uVar18 != 0);
                                    if (uVar13 == uVar14) goto code_r0x0001938f5d68;
                                }
                            }
                            iVar22 = uVar13 - uVar14;
                            piVar20 = uVar14 * 100 + iVar29 + 0xc;
                            do {
                                *piVar20 = *piVar20 + *(iVar4 + *(iVar5 + 0x80 + (piVar20[-2] << 8)) * 0x10);
                                iVar22 = iVar22 + -1;
                                piVar20 = piVar20 + 0x19;
                            } while (iVar22 != 0);
                        }
code_r0x0001938f5d68:
                        if ((*(uVar10 + 0x4d0) != 0) && (iVar29 = *(uVar10 + 0x4d8),  iVar29 != 0)) {
                            iVar4 = *(iVar27 + 0x20);
                            iVar27 = *(uVar10 + 0x20);
                            uVar13 = *(uVar10 + 0x28) - iVar27 >> 8;
                            puVar21 = *(uVar10 + 0x4d0) + 8;
                            do {
                                uVar10 = puVar21[-2];
                                if (uVar13 < uVar10 || uVar13 == uVar10) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x0001938f60b0;
                                }
                                uVar14 = puVar21[-1];
                                iVar5 = iVar27 + uVar10 * 0x100;
                                uVar10 = *(iVar5 + 0x88);
                                if (uVar10 < uVar14 || uVar10 == uVar14) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x0001938f60b0;
                                }
                                iVar5 = *(iVar5 + 0x80) + uVar14;
                                uVar11 = *puVar21;
                                uVar10 = *(iVar4 + iVar5 * 0x10 + 8);
                                if (uVar10 < uVar11 || uVar10 == uVar11) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x0001938f60b0;
                                }
                                *puVar21 = uVar11 + *(iVar4 + iVar5 * 0x10);
                                iVar29 = iVar29 + -1;
                                puVar21 = puVar21 + 4;
                            } while (iVar29 != 0);
                        }
                        piVar25 = geo::codec::Allocator::instance()();
                        iVar27 = (**(*piVar25 + 0x18))(piVar25, 1, 0x48);
                        uVar10 = *param_2;
                        *(uVar10 + 0x318) = iVar27;
                        if (iVar27 == 0) {
                            uVar9 = **reloc.__stderrp;
                        }
                        else {
                            iVar29 = *(uVar10 + 0x300);
                            *(iVar27 + 0x28) = *(iVar29 + 0x28);
                            uStack_138 = uStack_178;
                            piStack_128 = uVar10 + 0x2c8;
                            iStack_120 = uVar10 + 0x2d8;
                            uStack_a0 = *(uVar10 + 0x4b8);
                            uStack_98 = *(uVar10 + 0x4b0);
                            uStack_b8 = *(uVar10 + 0x4d0);
                            uStack_c0 = *(uVar10 + 0x4d8);
                            uStack_130 = uVar17;
                            uVar10 = geo::codec::_createLOD(GeoCodecsCurveVertexPool*, GeoCodecsVertexPool*, unsigned long, bool, unsigned int**, GeoCodecsPointsOnRoadLODData*, GeoCodecsCharacteristicPointsLODData*, GeoCodecsStrokeSpecificationsLODData*)
                                               (iVar29, iVar27, 0, 0xe00 < (*(uVar10 + 4) & 0x3f00), uVar10 + 0x308, 
                                                &uStack_138, *0x8 + -0xa0, *0x8 + -0xc0);
                            if ((uVar10 & 1) != 0) {
                                pcVar24 = pcStack_170;
                                *(*param_2 + 0x2d0) = uStack_178;
                                uVar31 = 1;
                                goto code_r0x0001938f4ea8;
                            }
                            uVar9 = **reloc.__stderrp;
                        }
code_r0x0001938f60b0:
                        fprintf(uVar9, 0x8ff + 0x193b8a000);
                        goto code_r0x0001938f5710;
                    }
                    uVar31 = 1;
                    if ((*(uVar10 + 0x318) != 0) && (uVar17 != 0)) {
                        *(uVar10 + 0x2c8) = uVar17;
                        *(uVar10 + 0x2d0) = uStack_178;
                        if (uStack_178 == 0) {
                            *(uVar10 + 0x2d8) = 0;
                        }
                        else {
                            piVar25 = geo::codec::Allocator::instance()();
                            iVar27 = (**(*piVar25 + 0x18))(piVar25, uStack_178, 8);
                            *(*param_2 + 0x2d8) = iVar27;
                            if (iVar27 != 0) {
                                iVar29 = 0;
                                iVar27 = 0;
                                do {
                                    *(*(*param_2 + 0x2d8) + iVar29) = *(*param_2 + 0x2c8) + iVar27;
                                    iVar27 = iVar27 + 0x10;
                                    iVar29 = iVar29 + 8;
                                } while (uStack_178 * 0x10 - iVar27 != 0);
                                geo::codec::sortPointsOnRoad(GeoCodecsConnectivityPointOnRoad**, unsigned long)
                                          (*(*param_2 + 0x2d8), *(*param_2 + 0x2d0));
                                pcVar24 = pcStack_170;
                                uVar17 = 0;
                                uVar31 = 1;
                                goto code_r0x0001938f4ea8;
                            }
                        }
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        uVar17 = 0;
                        goto code_r0x0001938f5710;
                    }
                    pcVar24 = pcStack_170;
                }
                goto code_r0x0001938f4ea8;
            }
        }
        iVar29 = iStack_108;
        piVar25 = apiStack_118[1];
        uVar11 = uVar31;
        if (piVar25 != NULL) {
            LOAcquire();
            tmp_ldXn = apiStack_118[1][1];
            iVar27 = tmp_ldXn;
            tmp_stXn = iVar27 + -1;
            iVar27 = tmp_stXn;
            apiStack_118[1][1] = iVar27;
            iVar27 = tmp_ldXn;
            LORelease();
            if (iVar27 == 0) {
                (**(*piVar25 + 0x10))(piVar25);
                std::__1::__shared_weak_count::__release_weak()(piVar25);
                iVar29 = iStack_108;
                uVar17 = uStack_100;
                iVar4 = iStack_f0;
                iVar27 = std::__1::chrono::steady_clock::now()();
                uStack_a0 = iVar29;
                if (iVar29 == 0) goto code_r0x0001938f5188;
                goto code_r0x0001938f5120;
            }
        }
        uVar17 = uStack_100;
        iVar4 = iStack_f0;
        iVar27 = std::__1::chrono::steady_clock::now()();
        uStack_a0 = iVar29;
        if (iVar29 == 0) goto code_r0x0001938f5188;
    }
code_r0x0001938f5120:
    uVar31 = uVar11;
    uStack_138 = *0x8 + -0xa0;
    iVar29 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (uVar17 + 0x778, *0x8 + -0xa0, 0x74c + 0x193af9000, &uStack_138, *0x8 + -0xc0);
    iVar27 = SUB168(SEXT816(iVar27 - iVar4) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar29 + 0x20) = ((iVar27 >> 7) - (iVar27 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x0001938f5188:
    piVar25 = piStack_f8;
    if (piVar25 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_f8[1];
        iVar27 = tmp_ldXn;
        tmp_stXn = iVar27 + -1;
        iVar27 = tmp_stXn;
        piStack_f8[1] = iVar27;
        iVar27 = tmp_ldXn;
        LORelease();
        if (iVar27 == 0) {
            (**(*piVar25 + 0x10))(piVar25);
            std::__1::__shared_weak_count::__release_weak()(piVar25);
        }
    }
    if (**reloc.__stack_chk_guard != iStack_80) {
    // WARNING: Subroutine does not return
        __stack_chk_fail();
    }
    return uVar31 & 1;
code_r0x0001938f59d0:
    uVar9 = **reloc.__stderrp;
    goto code_r0x0001938f59dc;
}
