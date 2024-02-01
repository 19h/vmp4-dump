
ulong geo::codec::_readChapter3DBuildings(VMP4Tile*, unsigned short, std::__1::vector<GeoCodecs3DBuildingFeature, geo::StdAllocator<GeoCodecs3DBuildingFeature, geo::codec::Allocator> >&, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, ulong param_2, int64_t *param_3, int64_t *param_4)

{
    int64_t iVar1;
    char cVar2;
    int32_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t **ppiVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    char *pcVar13;
    int64_t iVar14;
    ulong *puVar15;
    int64_t iVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    ulong *puVar19;
    ulong uVar20;
    ulong uVar21;
    ulong uVar22;
    ulong uVar23;
    ulong uVar24;
    ulong uVar25;
    ulong uVar26;
    uint32_t auStack_b0 [2];
    int64_t *piStack_a8;
    int64_t *piStack_a0;
    int64_t *piStack_98;
    int64_t *piStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t *piStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    
    iStack_80 = *param_4;
    uVar9 = param_1[1];
    if (uVar9 != 0) {
        uVar8 = 0;
        do {
            if (*(*param_1 + uVar8 * 0x10) == param_2) {
                pcVar13 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar8, param_2, iStack_80 + 0x778);
                iStack_80 = *param_4;
                goto code_r0x00019392d418;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 <= uVar9 && uVar9 != uVar8);
    }
    pcVar13 = NULL;
code_r0x00019392d418:
    iVar4 = chapterTypeAsString(ChapterType)(param_2);
    piStack_78 = param_4[1];
    if (piStack_78 != NULL) {
        tmp_ldXn = piStack_78[1];
        iVar5 = tmp_ldXn;
        tmp_stXn = iVar5 + 1;
        iVar5 = tmp_stXn;
        piStack_78[1] = iVar5;
        uVar6 = tmp_ldXn;
    }
    iStack_88 = iVar4;
    iVar5 = std::__1::chrono::steady_clock::now()();
    iStack_70 = iVar5;
    if (pcVar13 == NULL) {
        uVar6 = 1;
        iVar14 = iStack_80;
        iVar16 = std::__1::chrono::steady_clock::now()();
        uStack_68 = iVar4;
        if (iVar4 == 0) goto code_r0x00019392dcb4;
    }
    else {
        piStack_98 = NULL;
        piStack_90 = NULL;
        uStack_68._0_4_ = 0;
        uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar13, &uStack_68);
        if ((uVar9 & 1) == 0) {
            uVar6 = **reloc.__stderrp;
code_r0x00019392db68:
            fprintf(uVar6, 0x8ff + 0x193b8a000);
            uVar6 = 0;
            if (param_1 != NULL) {
code_r0x00019392db88:
                if (*pcVar13 != '\0') {
                    piVar17 = geo::codec::Allocator::instance()();
                    (**(*piVar17 + 0x28))(piVar17, *(pcVar13 + 0x28), 0);
                }
                piVar17 = geo::codec::Allocator::instance()();
                (**(*piVar17 + 0x28))(piVar17, pcVar13, 0);
            }
        }
        else {
            uVar9 = uStack_68;
            if (0xffff < uStack_68) {
                uVar6 = **reloc.__stderrp;
                goto code_r0x00019392db68;
            }
            iVar4 = *param_3;
            puVar15 = param_3[1];
            uVar8 = (puVar15 - iVar4 >> 5) * (0xcccccccccccc0000 | 0xcccd);
            if (uVar9 <= uVar8) {
                if (uVar9 <= uVar8 && uVar8 - uVar9 != 0) {
                    std::__1::vector<GeoCodecs3DBuildingFeature, geo::StdAllocator<GeoCodecs3DBuildingFeature, geo::codec::Allocator> >::__base_destruct_at_end[abi:v160006](GeoCodecs3DBuildingFeature*)
                              (param_3, iVar4 + uVar9 * 0xa0);
                }
            }
            else if ((param_3[2] - puVar15 >> 5) * (0xcccccccccccc0000 | 0xcccd) < uVar9 - uVar8) {
                uVar10 = (param_3[2] - iVar4 >> 5) * (0xcccccccccccc0000 | 0xcccd);
                uVar11 = uVar10 * 2;
                if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
                    uVar11 = uVar9;
                }
                if ((0xcccccccccccc | 0xcc000000000000) <= uVar10) {
                    uVar11 = 0x999999999999 | 0x199000000000000;
                }
                iVar4 = (**(*param_3[3] + 0x10))(param_3[3], (uVar11 + (uVar11 << 2)) * 0x20, 8);
                puVar15 = iVar4 + uVar8 * 0xa0;
                iVar16 = iVar4 + uVar11 * 0xa0;
                iVar4 = iVar4 + uVar9 * 0xa0;
                iVar5 = uVar9 * 0xa0 + uVar8 * -0xa0;
                puVar19 = puVar15;
                do {
                    if (puVar19 != NULL) {
                        puVar19[0x11] = 0;
                        puVar19[0x10] = 0;
                        puVar19[0x13] = 0;
                        puVar19[0x12] = 0;
                        puVar19[0xd] = 0;
                        puVar19[0xc] = 0;
                        puVar19[0xf] = 0;
                        puVar19[0xe] = 0;
                        puVar19[9] = 0;
                        puVar19[8] = 0;
                        puVar19[0xb] = 0;
                        puVar19[10] = 0;
                        puVar19[5] = 0;
                        puVar19[4] = 0;
                        puVar19[7] = 0;
                        puVar19[6] = 0;
                        puVar19[1] = 0;
                        *puVar19 = 0;
                        puVar19[3] = 0;
                        puVar19[2] = 0;
                        uVar6 = geo::codec::Allocator::instance()();
                        puVar19[0x13] = uVar6;
                    }
                    puVar19 = puVar19 + 0x14;
                    iVar5 = iVar5 + -0xa0;
                } while (iVar5 != 0);
                iVar5 = *param_3;
                iVar14 = param_3[1];
                if (iVar14 == iVar5) {
                    *param_3 = puVar15;
                    param_3[1] = iVar4;
                    iVar4 = param_3[2];
                    param_3[2] = iVar16;
                }
                else {
                    iVar12 = 0;
                    do {
                        iVar1 = iVar14 + iVar12;
                        *(puVar15 + iVar12 + -0xa0) = *(iVar1 + -0xa0);
                        *(puVar15 + iVar12 + -0x98) = *(iVar1 + -0x98);
                        *(iVar1 + -0xa0) = 0;
                        *(iVar1 + -0x98) = 0;
                        uVar20 = *(iVar1 + -0x88);
                        uVar6 = *(iVar1 + -0x90);
                        uVar21 = *(iVar1 + -0x80);
                        *(puVar15 + iVar12 + -0x78) = *(iVar1 + -0x78);
                        *(puVar15 + iVar12 + -0x80) = uVar21;
                        uVar24 = *(iVar1 + -0x58);
                        uVar23 = *(iVar1 + -0x60);
                        uVar22 = *(iVar1 + -0x48);
                        uVar21 = *(iVar1 + -0x50);
                        uVar26 = *(iVar1 + -0x68);
                        uVar25 = *(iVar1 + -0x70);
                        *(puVar15 + iVar12 + -0x40) = *(iVar1 + -0x40);
                        *(puVar15 + iVar12 + -0x58) = uVar24;
                        *(puVar15 + iVar12 + -0x60) = uVar23;
                        *(puVar15 + iVar12 + -0x48) = uVar22;
                        *(puVar15 + iVar12 + -0x50) = uVar21;
                        *(puVar15 + iVar12 + -0x68) = uVar26;
                        *(puVar15 + iVar12 + -0x70) = uVar25;
                        *(puVar15 + iVar12 + -0x88) = uVar20;
                        *(puVar15 + iVar12 + -0x90) = uVar6;
                        *(puVar15 + iVar12 + -0x38) = *(iVar1 + -0x38);
                        *(puVar15 + iVar12 + -0x30) = *(iVar1 + -0x30);
                        *(iVar1 + -0x38) = 0;
                        *(iVar1 + -0x30) = 0;
                        *(puVar15 + iVar12 + -0x28) = *(iVar1 + -0x28);
                        *(puVar15 + iVar12 + -0x18) = 0;
                        *(puVar15 + iVar12 + -0x10) = 0;
                        *(puVar15 + iVar12 + -0x20) = 0;
                        *(puVar15 + iVar12 + -8) = *(iVar1 + -8);
                        *(puVar15 + iVar12 + -0x20) = *(iVar1 + -0x20);
                        *(puVar15 + iVar12 + -0x18) = *(iVar1 + -0x18);
                        *(puVar15 + iVar12 + -0x10) = *(iVar1 + -0x10);
                        *(iVar1 + -0x20) = 0;
                        *(iVar1 + -0x18) = 0;
                        iVar12 = iVar12 + -0xa0;
                        *(iVar1 + -0x10) = 0;
                    } while (iVar14 + iVar12 != iVar5);
                    iVar14 = *param_3;
                    iVar5 = param_3[1];
                    *param_3 = puVar15 + iVar12;
                    param_3[1] = iVar4;
                    iVar4 = param_3[2];
                    param_3[2] = iVar16;
                    if (iVar5 != iVar14) {
                        do {
                            iVar16 = *(iVar5 + -0x20);
                            if (iVar16 != 0) {
                                *(iVar5 + -0x18) = iVar16;
                                (**(**(iVar5 + -8) + 0x28))(*(iVar5 + -8), iVar16, *(iVar5 + -0x10) - iVar16);
                            }
                            piVar17 = *(iVar5 + -0x30);
                            if (piVar17 != NULL) {
                                LOAcquire();
                                tmp_ldXn = piVar17[1];
                                iVar16 = tmp_ldXn;
                                tmp_stXn = iVar16 + -1;
                                iVar16 = tmp_stXn;
                                piVar17[1] = iVar16;
                                iVar16 = tmp_ldXn;
                                LORelease();
                                if (iVar16 == 0) {
                                    (**(*piVar17 + 0x10))(piVar17);
                                    std::__1::__shared_weak_count::__release_weak()(piVar17);
                                }
                            }
                            iVar16 = iVar5 + -0xa0;
                            if (*(iVar5 + -0x98) != 0) {
                                std::__1::__shared_weak_count::__release_weak()();
                            }
                            iVar5 = iVar16;
                        } while (iVar16 != iVar14);
                    }
                }
                if (iVar14 != 0) {
                    (**(*param_3[3] + 0x28))(param_3[3], iVar14, iVar4 - iVar14);
                }
            }
            else {
                puVar19 = puVar15 + (uVar9 - uVar8) * 0x14;
                iVar4 = uVar9 * 0xa0 + uVar8 * -0xa0;
                do {
                    if (puVar15 != NULL) {
                        puVar15[0x11] = 0;
                        puVar15[0x10] = 0;
                        puVar15[0x13] = 0;
                        puVar15[0x12] = 0;
                        puVar15[0xd] = 0;
                        puVar15[0xc] = 0;
                        puVar15[0xf] = 0;
                        puVar15[0xe] = 0;
                        puVar15[9] = 0;
                        puVar15[8] = 0;
                        puVar15[0xb] = 0;
                        puVar15[10] = 0;
                        puVar15[5] = 0;
                        puVar15[4] = 0;
                        puVar15[7] = 0;
                        puVar15[6] = 0;
                        puVar15[1] = 0;
                        *puVar15 = 0;
                        puVar15[3] = 0;
                        puVar15[2] = 0;
                        uVar6 = geo::codec::Allocator::instance()();
                        puVar15[0x13] = uVar6;
                    }
                    puVar15 = puVar15 + 0x14;
                    iVar4 = iVar4 + -0xa0;
                } while (iVar4 != 0);
                param_3[1] = puVar19;
            }
            piVar17 = operator new(unsigned long)(0x40);
            piVar17[1] = 0;
            piVar17[2] = 0;
            *piVar17 = 0xc00 + 0x1db961000 + 0x10;
            puVar15 = malloc(0x100);
            piStack_98 = piVar17 + 3;
            *piStack_98 = puVar15;
            piVar17[5] = 0;
            piVar17[6] = 0;
            piVar17[4] = 0;
            *(piVar17 + 0x37) = 0;
            if (puVar15 != NULL) {
                puVar15[0x1d] = 0xffffffffffffffff;
                puVar15[0x1c] = 0xffffffffffffffff;
                puVar15[0x1f] = 0xffffffffffffffff;
                puVar15[0x1e] = 0xffffffffffffffff;
                puVar15[0x19] = 0xffffffffffffffff;
                puVar15[0x18] = 0xffffffffffffffff;
                puVar15[0x1b] = 0xffffffffffffffff;
                puVar15[0x1a] = 0xffffffffffffffff;
                puVar15[0x15] = 0xffffffffffffffff;
                puVar15[0x14] = 0xffffffffffffffff;
                puVar15[0x17] = 0xffffffffffffffff;
                puVar15[0x16] = 0xffffffffffffffff;
                puVar15[0x11] = 0xffffffffffffffff;
                puVar15[0x10] = 0xffffffffffffffff;
                puVar15[0x13] = 0xffffffffffffffff;
                puVar15[0x12] = 0xffffffffffffffff;
                puVar15[0xd] = 0xffffffffffffffff;
                puVar15[0xc] = 0xffffffffffffffff;
                puVar15[0xf] = 0xffffffffffffffff;
                puVar15[0xe] = 0xffffffffffffffff;
                puVar15[9] = 0xffffffffffffffff;
                puVar15[8] = 0xffffffffffffffff;
                puVar15[0xb] = 0xffffffffffffffff;
                puVar15[10] = 0xffffffffffffffff;
                puVar15[5] = 0xffffffffffffffff;
                puVar15[4] = 0xffffffffffffffff;
                puVar15[7] = 0xffffffffffffffff;
                puVar15[6] = 0xffffffffffffffff;
                puVar15[1] = 0xffffffffffffffff;
                *puVar15 = 0xffffffffffffffff;
                puVar15[3] = 0xffffffffffffffff;
                puVar15[2] = 0xffffffffffffffff;
            }
            *puVar15 = *0x193af9840;
            *(piVar17 + 0x39) = 0x401;
            piVar18 = piStack_90;
            if (piVar18 == NULL) {
code_r0x00019392d8b4:
                piStack_90 = piVar17;
                tmp_ldXn = piStack_90[1];
                iVar4 = tmp_ldXn;
                tmp_stXn = iVar4 + 1;
                iVar4 = tmp_stXn;
                piStack_90[1] = iVar4;
                uVar6 = tmp_ldXn;
            }
            else {
                LOAcquire();
                tmp_ldXn = piStack_90[1];
                iVar4 = tmp_ldXn;
                tmp_stXn = iVar4 + -1;
                iVar4 = tmp_stXn;
                piStack_90[1] = iVar4;
                iVar4 = tmp_ldXn;
                LORelease();
                piStack_90 = piVar17;
                if (iVar4 == 0) {
                    (**(*piVar18 + 0x10))(piVar18);
                    std::__1::__shared_weak_count::__release_weak()(piVar18);
                }
                piVar17 = piStack_90;
                if (piStack_90 != NULL) goto code_r0x00019392d8b4;
            }
            piStack_a8 = piStack_98;
            piStack_a0 = piStack_90;
            ppiVar7 = FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                (*param_4 + 0x458, &piStack_a8);
            piVar17 = piStack_90;
            piStack_98 = *ppiVar7;
            piVar18 = ppiVar7[1];
            if (piVar18 != NULL) {
                tmp_ldXn = piVar18[1];
                iVar4 = tmp_ldXn;
                tmp_stXn = iVar4 + 1;
                iVar4 = tmp_stXn;
                piVar18[1] = iVar4;
                uVar6 = tmp_ldXn;
            }
            piStack_90 = piVar18;
            if (piVar17 != NULL) {
                LOAcquire();
                tmp_ldXn = piVar17[1];
                iVar4 = tmp_ldXn;
                tmp_stXn = iVar4 + -1;
                iVar4 = tmp_stXn;
                piVar17[1] = iVar4;
                iVar4 = tmp_ldXn;
                LORelease();
                if (iVar4 == 0) {
                    (**(*piVar17 + 0x10))(piVar17);
                    std::__1::__shared_weak_count::__release_weak()(piVar17);
                }
            }
            piVar17 = piStack_a0;
            if (piVar17 != NULL) {
                LOAcquire();
                tmp_ldXn = piStack_a0[1];
                iVar4 = tmp_ldXn;
                tmp_stXn = iVar4 + -1;
                iVar4 = tmp_stXn;
                piStack_a0[1] = iVar4;
                iVar4 = tmp_ldXn;
                LORelease();
                if (iVar4 == 0) {
                    (**(*piVar17 + 0x10))(piVar17);
                    std::__1::__shared_weak_count::__release_weak()(piVar17);
                }
            }
            if (uStack_68 != 0) {
                iVar4 = 0;
                uVar9 = 0;
                do {
                    iVar5 = *param_3;
                    iVar14 = *param_4;
                    iVar16 = param_4[1];
                    if (iVar16 != 0) {
                        tmp_ldXn = *(iVar16 + 0x10);
                        iVar12 = tmp_ldXn;
                        tmp_stXn = iVar12 + 1;
                        uVar6 = tmp_stXn;
                        *(iVar16 + 0x10) = uVar6;
                        uVar6 = tmp_ldXn;
                    }
                    piVar17 = iVar5 + iVar4;
                    iVar12 = piVar17[1];
                    *piVar17 = iVar14;
                    piVar17[1] = iVar16;
                    if (iVar12 != 0) {
                        std::__1::__shared_weak_count::__release_weak()();
                    }
                    auStack_b0[0] = 0;
                    uVar8 = *(pcVar13 + 0x30) + 8;
                    if (*(pcVar13 + 0x38) <= uVar8 && uVar8 != *(pcVar13 + 0x38)) {
code_r0x00019392db5c:
                        uVar6 = **reloc.__stderrp;
                        goto code_r0x00019392db68;
                    }
                    uVar6 = *(*(pcVar13 + 0x28) + *(pcVar13 + 0x30));
                    *(pcVar13 + 0x30) = uVar8;
                    iVar3 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar13, auStack_b0);
                    if (iVar3 == 0) goto code_r0x00019392db5c;
                    uVar8 = auStack_b0[0];
                    if (((auStack_b0[0] >> 0x12 | auStack_b0[0] << -0x12 + 0x40 & 0x3fff) & 0x3fff) != 0)
                    goto code_r0x00019392db5c;
                    iVar16 = iVar5 + iVar4;
                    *(iVar16 + 0x40) = uVar6;
                    piVar18 = iVar16 + 0x80;
                    iVar12 = *piVar18;
                    iVar14 = *(iVar16 + 0x88);
                    uVar11 = iVar14 - iVar12;
                    if (uVar8 <= uVar11) {
                        if (uVar8 <= uVar11 && uVar11 != uVar8) {
                            iVar14 = iVar12 + uVar8;
                            *(iVar16 + 0x88) = iVar14;
                        }
                    }
                    else {
                        std::__1::vector<unsigned char, geo::StdAllocator<unsigned char, geo::codec::Allocator> >::__append(unsigned long)
                                  (piVar18, uVar8 - uVar11);
                        iVar12 = *piVar18;
                        iVar14 = *(iVar16 + 0x88);
                    }
                    iVar14 = iVar14 - iVar12;
                    uVar8 = *(pcVar13 + 0x30) + iVar14;
                    if (*(pcVar13 + 0x38) <= uVar8 && uVar8 != *(pcVar13 + 0x38)) goto code_r0x00019392db5c;
                    memcpy(iVar12, *(pcVar13 + 0x28) + *(pcVar13 + 0x30), iVar14);
                    iVar14 = *(pcVar13 + 0x30) + iVar14;
                    *(pcVar13 + 0x30) = iVar14;
                    uVar8 = iVar14 + 1;
                    if (*(pcVar13 + 0x38) <= uVar8 && uVar8 != *(pcVar13 + 0x38)) goto code_r0x00019392db5c;
                    cVar2 = *(*(pcVar13 + 0x28) + iVar14);
                    *(pcVar13 + 0x30) = uVar8;
                    if (cVar2 == '\0') {
                        if (piStack_90 != NULL) {
                            tmp_ldXn = piStack_90[1];
                            iVar16 = tmp_ldXn;
                            tmp_stXn = iVar16 + 1;
                            iVar16 = tmp_stXn;
                            piStack_90[1] = iVar16;
                            uVar6 = tmp_ldXn;
                        }
                        iVar5 = iVar5 + iVar4;
                        piVar17 = *(iVar5 + 0x70);
                        *(iVar5 + 0x68) = piStack_98;
                        *(iVar5 + 0x70) = piStack_90;
                        if (piVar17 != NULL) {
                            LOAcquire();
                            tmp_ldXn = piVar17[1];
                            iVar5 = tmp_ldXn;
                            tmp_stXn = iVar5 + -1;
                            iVar5 = tmp_stXn;
                            piVar17[1] = iVar5;
                            iVar5 = tmp_ldXn;
                            LORelease();
                            if (iVar5 == 0) {
                                (**(*piVar17 + 0x10))(piVar17);
                                std::__1::__shared_weak_count::__release_weak()(piVar17);
                            }
                        }
                    }
                    else {
                        uVar8 = geo::codec::accumulateStyleAttributes(FeatureStyleAttributesSet&, std::__1::shared_ptr<FeatureStyleAttributes>&, VMP4Chapter*, GeoCodecsFeature*)
                                          (*param_4 + 0x458, &piStack_98, pcVar13, piVar17);
                        if ((uVar8 & 1) == 0) goto code_r0x00019392db5c;
                    }
                    uVar9 = uVar9 + 1;
                    iVar4 = iVar4 + 0xa0;
                } while (uVar9 < uStack_68);
            }
            uVar6 = 1;
            if (param_1 != NULL) goto code_r0x00019392db88;
        }
        piVar17 = piStack_90;
        if (piVar17 != NULL) {
            LOAcquire();
            tmp_ldXn = piStack_90[1];
            iVar4 = tmp_ldXn;
            tmp_stXn = iVar4 + -1;
            iVar4 = tmp_stXn;
            piStack_90[1] = iVar4;
            iVar4 = tmp_ldXn;
            LORelease();
            if (iVar4 == 0) {
                (**(*piVar17 + 0x10))(piVar17);
                std::__1::__shared_weak_count::__release_weak()(piVar17);
            }
        }
        iVar4 = iStack_88;
        iVar14 = iStack_80;
        iVar5 = iStack_70;
        iVar16 = std::__1::chrono::steady_clock::now()();
        uStack_68 = iVar4;
        if (iVar4 == 0) goto code_r0x00019392dcb4;
    }
    piStack_98 = &uStack_68;
    iVar4 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                      (iVar14 + 0x778, &uStack_68, 0x74c + 0x193af9000, &piStack_98, auStack_b0);
    iVar5 = SUB168(SEXT816(iVar16 - iVar5) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar4 + 0x20) = ((iVar5 >> 7) - (iVar5 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x00019392dcb4:
    piVar17 = piStack_78;
    if (piVar17 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_78[1];
        iVar4 = tmp_ldXn;
        tmp_stXn = iVar4 + -1;
        iVar4 = tmp_stXn;
        piStack_78[1] = iVar4;
        iVar4 = tmp_ldXn;
        LORelease();
        if (iVar4 == 0) {
            (**(*piVar17 + 0x10))(piVar17);
            std::__1::__shared_weak_count::__release_weak()(piVar17);
        }
    }
    return uVar6;
}
