
ulong geo::codec::_readCoastlines(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint64_t uVar1;
    uint64_t *puVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int32_t iVar6;
    char *pcVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t *piVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    ulong uVar21;
    char *pcVar22;
    int64_t iVar23;
    bool bVar24;
    int64_t iVar25;
    int64_t *piVar26;
    int64_t iVar27;
    int64_t iVar28;
    ulong uVar29;
    ulong uVar30;
    ulong uVar31;
    ulong uVar32;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int32_t aiStack_b8 [2];
    int64_t *apiStack_b0 [2];
    uint32_t uStack_a0;
    uint32_t uStack_9c;
    int64_t *piStack_98;
    int64_t *piStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    
    uVar14 = param_1[1];
    if (uVar14 == 0) {
code_r0x0001938fc8bc:
        pcVar22 = NULL;
code_r0x0001938fc8c0:
        uVar21 = 1;
        if (param_1 != NULL) {
code_r0x0001938fcfd8:
            if (pcVar22 != NULL) {
                if (*pcVar22 != '\0') {
                    piVar8 = geo::codec::Allocator::instance()();
                    (**(*piVar8 + 0x28))(piVar8, *(pcVar22 + 0x28), 0);
                }
                piVar8 = geo::codec::Allocator::instance()();
                (**(*piVar8 + 0x28))(piVar8, pcVar22, 0);
            }
        }
        return uVar21;
    }
    uVar13 = 0;
    iVar15 = *param_2;
code_r0x0001938fc710:
    if (*(*param_1 + uVar13 * 0x10) != 0x26) goto code_r0x0001938fc720;
    pcVar22 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                        (param_1, uVar13, 0x26, iVar15 + 0x778);
    if (pcVar22 == NULL) {
        uVar14 = param_1[1];
        if (uVar14 == 0) goto code_r0x0001938fc8bc;
        iVar15 = *param_2;
        goto code_r0x0001938fc72c;
    }
    iVar15 = *param_2;
    piVar8 = param_2[1];
    if (piVar8 != NULL) {
        tmp_ldXn = piVar8[1];
        iVar25 = tmp_ldXn;
        tmp_stXn = iVar25 + 1;
        iVar25 = tmp_stXn;
        piVar8[1] = iVar25;
        uVar21 = tmp_ldXn;
    }
    iVar25 = std::__1::chrono::steady_clock::now()();
    piStack_98 = NULL;
    piStack_90 = NULL;
    uStack_70 = (uStack_70 >> 0x20) << 0x20;
    uStack_78 = (uStack_78 >> 0x20) << 0x20;
    uStack_80 = (uStack_80 >> 0x20) << 0x20;
    uVar14 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar22, *0x8 + -0x70);
    if ((uVar14 & 1) == 0) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    if (uStack_70 != *(param_1 + 5)) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    if (*(param_1 + 0x2c) != '\0') {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    iVar23 = *(*param_2 + 800);
    if (iVar23 == 0) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    if (*(iVar23 + 8) == 0) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    if (*(iVar23 + 0x20) == 0) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    uVar14 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar22, *0x8 + -0x80);
    if ((uVar14 & 1) == 0) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    uVar14 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar22, *0x8 + -0x78);
    if ((uVar14 & 1) == 0) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    bVar24 = true;
    if (uStack_80 == 0) goto code_r0x0001938fc94c;
    uVar14 = uStack_78;
    if (uStack_78 == 0) goto code_r0x0001938fc94c;
    if (0x3ffff < uStack_80) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    if (0xffff < uStack_78) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fc930;
    }
    iVar27 = *param_2;
    iVar23 = *(iVar27 + 0x40);
    iVar28 = *(iVar27 + 0x48);
    uVar13 = iVar28 - iVar23 >> 8;
    if (uVar14 <= uVar13) {
        if (uVar14 <= uVar13 && uVar13 != uVar14) {
            iVar23 = iVar23 + uVar14 * 0x100;
            if (iVar28 != iVar23) {
                do {
                    piVar9 = *(iVar28 + -0x90);
                    if (piVar9 != NULL) {
                        LOAcquire();
                        tmp_ldXn = piVar9[1];
                        iVar16 = tmp_ldXn;
                        tmp_stXn = iVar16 + -1;
                        iVar16 = tmp_stXn;
                        piVar9[1] = iVar16;
                        iVar16 = tmp_ldXn;
                        LORelease();
                        if (iVar16 == 0) {
                            (**(*piVar9 + 0x10))(piVar9);
                            std::__1::__shared_weak_count::__release_weak()(piVar9);
                        }
                    }
                    iVar16 = iVar28 + -0x100;
                    if (*(iVar28 + -0xf8) != 0) {
                        std::__1::__shared_weak_count::__release_weak()();
                    }
                    iVar28 = iVar16;
                } while (iVar16 != iVar23);
            }
            *(iVar27 + 0x48) = iVar23;
        }
    }
    else {
        std::__1::vector<GeoCodecsMultiSectionFeature, geo::StdAllocator<GeoCodecsMultiSectionFeature, geo::codec::Allocator> >::__append(unsigned long)
                  (iVar27 + 0x40, uVar14 - uVar13);
    }
    piVar9 = geo::codec::Allocator::instance()();
    iVar23 = (**(*piVar9 + 0x18))(piVar9, 1, 0x48);
    *(*param_2 + 0x328) = iVar23;
    if (iVar23 == 0) {
        uVar21 = **reloc.__stderrp;
code_r0x0001938fc930:
        fprintf(uVar21, 0x8ff + 0x193b8a000);
        bVar24 = false;
    }
    else {
        *(iVar23 + 0x10) = uStack_80;
        piVar9 = geo::codec::Allocator::instance()();
        iVar23 = (**(*piVar9 + 0x18))(piVar9, uStack_80, 8);
        iVar28 = *(*param_2 + 0x328);
        *(iVar28 + 8) = iVar23;
        if (iVar23 == 0) {
            uVar21 = **reloc.__stderrp;
            goto code_r0x0001938fc930;
        }
        *(iVar28 + 0x28) = uStack_78;
        piVar9 = geo::codec::Allocator::instance()();
        iVar23 = (**(*piVar9 + 0x18))(piVar9, uStack_78, 0x10);
        *(*(*param_2 + 0x328) + 0x20) = iVar23;
        if (iVar23 == 0) {
            uVar21 = **reloc.__stderrp;
            goto code_r0x0001938fc930;
        }
        piVar9 = operator new(unsigned long)(0x40);
        piVar9[1] = 0;
        piVar9[2] = 0;
        *piVar9 = 0xc00 + 0x1db961000 + 0x10;
        puVar10 = malloc(0x100);
        piStack_98 = piVar9 + 3;
        *piStack_98 = puVar10;
        piVar9[5] = 0;
        piVar9[6] = 0;
        piVar9[4] = 0;
        *(piVar9 + 0x37) = 0;
        if (puVar10 != NULL) {
            puVar10[0x1d] = 0xffffffffffffffff;
            puVar10[0x1c] = 0xffffffffffffffff;
            puVar10[0x1f] = 0xffffffffffffffff;
            puVar10[0x1e] = 0xffffffffffffffff;
            puVar10[0x19] = 0xffffffffffffffff;
            puVar10[0x18] = 0xffffffffffffffff;
            puVar10[0x1b] = 0xffffffffffffffff;
            puVar10[0x1a] = 0xffffffffffffffff;
            puVar10[0x15] = 0xffffffffffffffff;
            puVar10[0x14] = 0xffffffffffffffff;
            puVar10[0x17] = 0xffffffffffffffff;
            puVar10[0x16] = 0xffffffffffffffff;
            puVar10[0x11] = 0xffffffffffffffff;
            puVar10[0x10] = 0xffffffffffffffff;
            puVar10[0x13] = 0xffffffffffffffff;
            puVar10[0x12] = 0xffffffffffffffff;
            puVar10[0xd] = 0xffffffffffffffff;
            puVar10[0xc] = 0xffffffffffffffff;
            puVar10[0xf] = 0xffffffffffffffff;
            puVar10[0xe] = 0xffffffffffffffff;
            puVar10[9] = 0xffffffffffffffff;
            puVar10[8] = 0xffffffffffffffff;
            puVar10[0xb] = 0xffffffffffffffff;
            puVar10[10] = 0xffffffffffffffff;
            puVar10[5] = 0xffffffffffffffff;
            puVar10[4] = 0xffffffffffffffff;
            puVar10[7] = 0xffffffffffffffff;
            puVar10[6] = 0xffffffffffffffff;
            puVar10[1] = 0xffffffffffffffff;
            *puVar10 = 0xffffffffffffffff;
            puVar10[3] = 0xffffffffffffffff;
            puVar10[2] = 0xffffffffffffffff;
        }
        *puVar10 = 0x500000005;
        *(piVar9 + 0x39) = 0x501;
        piVar26 = piStack_90;
        if (piVar26 == NULL) {
code_r0x0001938fdad8:
            piStack_90 = piVar9;
            tmp_ldXn = piStack_90[1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + 1;
            iVar23 = tmp_stXn;
            piStack_90[1] = iVar23;
            uVar21 = tmp_ldXn;
        }
        else {
            LOAcquire();
            tmp_ldXn = piStack_90[1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + -1;
            iVar23 = tmp_stXn;
            piStack_90[1] = iVar23;
            iVar23 = tmp_ldXn;
            LORelease();
            piStack_90 = piVar9;
            if (iVar23 == 0) {
                (**(*piVar26 + 0x10))(piVar26);
                std::__1::__shared_weak_count::__release_weak()(piVar26);
            }
            piVar9 = piStack_90;
            if (piStack_90 != NULL) goto code_r0x0001938fdad8;
        }
        apiStack_b0[0] = piStack_98;
        apiStack_b0[1] = piStack_90;
        piVar26 = FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
                            (*param_2 + 0x458, apiStack_b0);
        piVar9 = piStack_90;
        piStack_98 = *piVar26;
        piVar26 = piVar26[1];
        if (piVar26 != NULL) {
            tmp_ldXn = piVar26[1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + 1;
            iVar23 = tmp_stXn;
            piVar26[1] = iVar23;
            uVar21 = tmp_ldXn;
        }
        piStack_90 = piVar26;
        if (piVar9 != NULL) {
            LOAcquire();
            tmp_ldXn = piVar9[1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + -1;
            iVar23 = tmp_stXn;
            piVar9[1] = iVar23;
            iVar23 = tmp_ldXn;
            LORelease();
            if (iVar23 == 0) {
                (**(*piVar9 + 0x10))(piVar9);
                std::__1::__shared_weak_count::__release_weak()(piVar9);
            }
        }
        piVar9 = apiStack_b0[1];
        if (piVar9 != NULL) {
            LOAcquire();
            tmp_ldXn = apiStack_b0[1][1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + -1;
            iVar23 = tmp_stXn;
            apiStack_b0[1][1] = iVar23;
            iVar23 = tmp_ldXn;
            LORelease();
            if (iVar23 == 0) {
                (**(*piVar9 + 0x10))(piVar9);
                std::__1::__shared_weak_count::__release_weak()(piVar9);
            }
        }
        *(*(*param_2 + 0x328) + 0x30) = 0;
        piVar9 = geo::codec::Allocator::instance()();
        iVar23 = (**(*piVar9 + 0x18))(piVar9, *(*param_2 + 0x48) - *(*param_2 + 0x40) >> 7, 0x20);
        *(*(*param_2 + 0x328) + 0x38) = iVar23;
        if (iVar23 == 0) {
            uVar21 = **reloc.__stderrp;
            goto code_r0x0001938fc930;
        }
        piVar9 = geo::codec::Allocator::instance()();
        iVar23 = (**(*piVar9 + 0x18))(piVar9, *(*param_2 + 0x48) - *(*param_2 + 0x40) >> 8, 0x10);
        iVar28 = *param_2;
        iVar27 = *(iVar28 + 0x328);
        *(iVar27 + 0x40) = iVar23;
        if (iVar23 == 0) {
            uVar21 = **reloc.__stderrp;
            goto code_r0x0001938fc930;
        }
        iVar23 = *(iVar28 + 0x40);
        if (*(iVar28 + 0x48) != iVar23) {
            uVar13 = 0;
            uVar14 = 0;
            uVar30 = *0x193ae20b8;
            uVar21 = *0x193ae20b0;
            while( true ) {
                iVar27 = param_2[1];
                if (iVar27 != 0) {
                    tmp_ldXn = *(iVar27 + 0x10);
                    iVar16 = tmp_ldXn;
                    tmp_stXn = iVar16 + 1;
                    uVar29 = tmp_stXn;
                    *(iVar27 + 0x10) = uVar29;
                    uVar29 = tmp_ldXn;
                }
                piVar9 = iVar23 + uVar14 * 0x100;
                iVar16 = piVar9[1];
                *piVar9 = iVar28;
                piVar9[1] = iVar27;
                if (iVar16 != 0) {
                    std::__1::__shared_weak_count::__release_weak()();
                }
                iVar23 = iVar23 + uVar14 * 0x100;
                *(iVar23 + 0xc0) = uVar30;
                *(iVar23 + 0xb8) = uVar21;
                *(iVar23 + 0x80) = uVar14;
                *(iVar23 + 0x88) = 1;
                uStack_88 = (uStack_88 >> 0x20) << 0x20;
                uStack_9c = 0;
                uStack_a0 = 0;
                aiStack_b8[0] = 0;
                uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar22, *0x8 + -0x88);
                if ((((uVar12 & 1) == 0) ||
                    (iVar6 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar22, *0x8 + -0x9c), 
                    iVar6 == 0)) ||
                   ((iVar6 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar22, &uStack_a0), 
                    iVar6 == 0 ||
                    (iVar6 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar22, aiStack_b8), 
                    iVar6 == 0)))) break;
                uVar12 = uStack_88;
                iVar23 = *param_2;
                iVar28 = *(iVar23 + 800);
                if (*(iVar28 + 0x28) < uVar12 || *(iVar28 + 0x28) == uVar12) break;
                piVar26 = *(iVar28 + 0x20) + uVar12 * 0x10;
                iVar27 = *piVar26;
                uVar18 = piVar26[1];
                uVar19 = uVar18 + iVar27;
                if ((*(iVar28 + 0x10) <= uVar19 && uVar19 != *(iVar28 + 0x10)) ||
                   (uVar19 = uStack_9c,  uVar18 < uVar19 || uVar18 == uVar19)) break;
                uVar20 = uStack_a0;
                uVar1 = uVar13 + uVar20;
                if (uStack_80 <= uVar1 && uVar1 != uStack_80) break;
                puVar2 = *(*(iVar23 + 0x328) + 0x20) + uVar14 * 0x10;
                *puVar2 = uVar13;
                puVar2[1] = uVar20;
                if (uStack_a0 != 0) {
                    iVar23 = uVar13 << 3;
                    uVar13 = uVar20;
                    do {
                        uVar3 = uVar19 + -1 + uVar13;
                        uVar5 = 0;
                        if (uVar18 != 0) {
                            uVar5 = uVar3 / uVar18;
                        }
                        *(*(*(*param_2 + 0x328) + 8) + iVar23) =
                             *(*(*(*param_2 + 800) + 8) + ((uVar3 - uVar5 * uVar18) + iVar27) * 8);
                        iVar23 = iVar23 + 8;
                        uVar13 = uVar13 + -1;
                    } while (uVar13 != 0);
                    iVar23 = *param_2;
                    iVar28 = *(iVar23 + 800);
                    uVar13 = uVar1;
                }
                iVar27 = *(iVar28 + 0x40);
                if (iVar27 == 0) {
                    iVar16 = 0;
                }
                else {
                    iVar11 = uVar12 * 0x10;
                    iVar16 = *(iVar27 + iVar11 + 8);
                    if (iVar16 != 0) {
                        uVar12 = 0;
                        if (uVar18 != 0) {
                            uVar12 = uVar19 / uVar18;
                        }
                        puVar10 = *(iVar28 + 0x38) + *(iVar27 + iVar11) * 0x20;
                        do {
                            if (puVar10[3] == uVar19 - uVar12 * uVar18) {
                                puVar4 = *(*(iVar23 + 0x328) + 0x38) + *(*(iVar23 + 0x328) + 0x30) * 0x20;
                                uVar32 = *puVar10;
                                uVar31 = puVar10[3];
                                uVar29 = puVar10[2];
                                puVar4[1] = puVar10[1];
                                *puVar4 = uVar32;
                                puVar4[3] = uVar31;
                                puVar4[2] = uVar29;
                                puVar4[1] = uVar14;
                                puVar4[2] = 0;
                                puVar4[3] = uStack_a0 + -1;
                                iVar23 = *param_2;
                                *(*(iVar23 + 0x328) + 0x30) = *(*(iVar23 + 0x328) + 0x30) + 1;
                                iVar16 = 1;
                                break;
                            }
                            puVar10 = puVar10 + 4;
                            iVar16 = iVar16 + -1;
                        } while (iVar16 != 0);
                    }
                    iVar28 = *(*(iVar23 + 800) + 0x40);
                    if ((iVar28 != 0) && (iVar27 = *(iVar28 + iVar11 + 8),  iVar27 != 0)) {
                        uVar19 = uVar19 + uVar20 + -1;
                        uVar12 = 0;
                        if (uVar18 != 0) {
                            uVar12 = uVar19 / uVar18;
                        }
                        puVar10 = *(*(iVar23 + 800) + 0x38) + *(iVar28 + iVar11) * 0x20;
                        do {
                            if (puVar10[3] == uVar19 - uVar12 * uVar18) {
                                iVar16 = iVar16 + 1;
                                puVar4 = *(*(iVar23 + 0x328) + 0x38) + *(*(iVar23 + 0x328) + 0x30) * 0x20;
                                uVar32 = *puVar10;
                                uVar31 = puVar10[3];
                                uVar29 = puVar10[2];
                                puVar4[1] = puVar10[1];
                                *puVar4 = uVar32;
                                puVar4[3] = uVar31;
                                puVar4[2] = uVar29;
                                puVar4[2] = 0;
                                puVar4[3] = 0;
                                puVar4[1] = uVar14;
                                iVar23 = *param_2;
                                *(*(iVar23 + 0x328) + 0x30) = *(*(iVar23 + 0x328) + 0x30) + 1;
                                break;
                            }
                            puVar10 = puVar10 + 4;
                            iVar27 = iVar27 + -1;
                        } while (iVar27 != 0);
                    }
                }
                piVar26 = *(*(iVar23 + 0x328) + 0x40) + uVar14 * 0x10;
                *piVar26 = *(*(iVar23 + 0x328) + 0x30) - iVar16;
                piVar26[1] = iVar16;
                if (aiStack_b8[0] == 0) {
                    if (piStack_90 != NULL) {
                        tmp_ldXn = piStack_90[1];
                        iVar23 = tmp_ldXn;
                        tmp_stXn = iVar23 + 1;
                        iVar23 = tmp_stXn;
                        piStack_90[1] = iVar23;
                        uVar29 = tmp_ldXn;
                    }
                    piVar26 = piVar9[0xe];
                    piVar9[0xd] = piStack_98;
                    piVar9[0xe] = piStack_90;
                    if (piVar26 != NULL) {
                        LOAcquire();
                        tmp_ldXn = piVar26[1];
                        iVar23 = tmp_ldXn;
                        tmp_stXn = iVar23 + -1;
                        iVar23 = tmp_stXn;
                        piVar26[1] = iVar23;
                        iVar23 = tmp_ldXn;
                        LORelease();
                        if (iVar23 == 0) {
                            (**(*piVar26 + 0x10))(piVar26);
                            std::__1::__shared_weak_count::__release_weak()(piVar26);
                        }
                    }
                }
                else {
                    uVar12 = geo::codec::accumulateStyleAttributes(FeatureStyleAttributesSet&, std::__1::shared_ptr<FeatureStyleAttributes>&, VMP4Chapter*, GeoCodecsFeature*)
                                       (*param_2 + 0x458, *0x8 + -0x98, pcVar22, piVar9);
                    if ((uVar12 & 1) == 0) break;
                }
                uVar14 = uVar14 + 1;
                iVar28 = *param_2;
                iVar23 = *(iVar28 + 0x40);
                if (*(iVar28 + 0x48) - iVar23 >> 8 <= uVar14) {
                    if (*(*(iVar28 + 0x328) + 0x30) == 0) goto code_r0x0001938fe034;
                    goto code_r0x0001938fdfa0;
                }
            }
            uVar21 = **reloc.__stderrp;
            goto code_r0x0001938fc930;
        }
        uVar13 = 0;
        if (*(iVar27 + 0x30) == 0) {
code_r0x0001938fe034:
            piVar9 = geo::codec::Allocator::instance()();
            (**(*piVar9 + 0x28))(piVar9, *(*(*param_2 + 0x328) + 0x38), 0);
            *(*(*param_2 + 0x328) + 0x38) = 0;
            piVar9 = geo::codec::Allocator::instance()();
            (**(*piVar9 + 0x28))(piVar9, *(*(*param_2 + 0x328) + 0x40), 0);
            *(*(*param_2 + 0x328) + 0x40) = 0;
        }
        else {
code_r0x0001938fdfa0:
            piVar9 = geo::codec::Allocator::instance()();
            uVar21 = (**(*piVar9 + 0x20))(piVar9, *(*(*param_2 + 0x328) + 0x38), *(*(*param_2 + 0x328) + 0x30) << 5);
            *(*(*param_2 + 0x328) + 0x38) = uVar21;
        }
        if (uVar13 != uStack_80) {
            uVar21 = **reloc.__stderrp;
            goto code_r0x0001938fc930;
        }
        bVar24 = true;
    }
code_r0x0001938fc94c:
    piVar9 = piStack_90;
    if (piVar9 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_90[1];
        iVar23 = tmp_ldXn;
        tmp_stXn = iVar23 + -1;
        iVar23 = tmp_stXn;
        piStack_90[1] = iVar23;
        iVar23 = tmp_ldXn;
        LORelease();
        if (iVar23 == 0) {
            (**(*piVar9 + 0x10))(piVar9);
            std::__1::__shared_weak_count::__release_weak()(piVar9);
        }
    }
    iVar23 = std::__1::chrono::steady_clock::now()();
    uStack_70 = 0x1bc + 0x193b8a000;
    piStack_98 = *0x8 + -0x70;
    iVar15 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iVar15 + 0x778, *0x8 + -0x70, 0x74c + 0x193af9000, *0x8 + -0x98, *0x8 + -0x78);
    iVar25 = SUB168(SEXT816(iVar23 - iVar25) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar15 + 0x20) = ((iVar25 >> 7) - (iVar25 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    if (piVar8 != NULL) {
        LOAcquire();
        tmp_ldXn = piVar8[1];
        iVar15 = tmp_ldXn;
        tmp_stXn = iVar15 + -1;
        iVar15 = tmp_stXn;
        piVar8[1] = iVar15;
        iVar15 = tmp_ldXn;
        LORelease();
        if (iVar15 == 0) {
            (**(*piVar8 + 0x10))(piVar8);
            std::__1::__shared_weak_count::__release_weak()(piVar8);
        }
    }
    if (!bVar24) {
        pcVar7 = NULL;
        goto code_r0x0001938fcf3c;
    }
    goto code_r0x0001938fc8c0;
code_r0x0001938fc720:
    uVar13 = uVar13 + 1;
    if (uVar14 < uVar13 || uVar14 == uVar13) goto code_r0x0001938fc72c;
    goto code_r0x0001938fc710;
code_r0x0001938fc72c:
    uVar13 = 0;
code_r0x0001938fc738:
    if (*(*param_1 + uVar13 * 0x10) != 0x22) goto code_r0x0001938fc748;
    pcVar7 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                       (param_1, uVar13, 0x22, iVar15 + 0x778);
    if (pcVar7 == NULL) goto code_r0x0001938fc8bc;
    uStack_88 = 0;
    uStack_80 = 0;
    piStack_98 = NULL;
    piStack_90 = NULL;
    uStack_9c = 0;
    uStack_a0 = 0;
    iStack_d0 = *param_2;
    piVar8 = param_2[1];
    if (piVar8 != NULL) {
        tmp_ldXn = piVar8[1];
        iVar15 = tmp_ldXn;
        tmp_stXn = iVar15 + 1;
        iVar15 = tmp_stXn;
        piVar8[1] = iVar15;
        uVar21 = tmp_ldXn;
    }
    iStack_d8 = std::__1::chrono::steady_clock::now()();
    uVar14 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar7, *0x8 + -0x9c);
    if ((uVar14 & 1) == 0) {
        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
        iVar25 = 0;
        iVar15 = 0;
        pcVar22 = NULL;
        goto code_r0x0001938fcb44;
    }
    pcVar22 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                        (param_1, uStack_9c, 0x14, *param_2 + 0x778);
    if (pcVar22 == NULL) {
        uVar21 = **reloc.__stderrp;
code_r0x0001938fcb24:
        fprintf(uVar21, 0x8ff + 0x193b8a000);
        iVar25 = 0;
        goto code_r0x0001938fcb40;
    }
    uVar14 = geo::codec::decodeVertices(VMP4Chapter*, GeoCodecsCurveVertexPool**, GeoCodecsVertexPool**, bool)
                       (pcVar22, *0x8 + -0x80, *0x8 + -0x88, 0x42 < *(pcVar22 + 0x40) && *(pcVar22 + 0x40) != 0x43);
    if ((uVar14 & 1) == 0) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fcb24;
    }
    uVar14 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar7, &uStack_a0);
    if ((uVar14 & 1) == 0) {
        uVar21 = **reloc.__stderrp;
        goto code_r0x0001938fcb24;
    }
    uVar14 = uStack_a0;
    if (uStack_a0 == 0) {
        iVar25 = 0;
        iVar15 = 0;
        bVar24 = true;
        goto code_r0x0001938fcb48;
    }
    iVar23 = *param_2;
    iVar15 = *(iVar23 + 0x40);
    iVar25 = *(iVar23 + 0x48);
    uVar13 = iVar25 - iVar15 >> 8;
    if (uVar14 <= uVar13) {
        if (uVar14 <= uVar13 && uVar13 != uVar14) {
            iVar15 = iVar15 + uVar14 * 0x100;
            if (iVar25 != iVar15) {
                do {
                    piVar9 = *(iVar25 + -0x90);
                    if (piVar9 != NULL) {
                        LOAcquire();
                        tmp_ldXn = piVar9[1];
                        iVar28 = tmp_ldXn;
                        tmp_stXn = iVar28 + -1;
                        iVar28 = tmp_stXn;
                        piVar9[1] = iVar28;
                        iVar28 = tmp_ldXn;
                        LORelease();
                        if (iVar28 == 0) {
                            (**(*piVar9 + 0x10))(piVar9);
                            std::__1::__shared_weak_count::__release_weak()(piVar9);
                        }
                    }
                    iVar28 = iVar25 + -0x100;
                    if (*(iVar25 + -0xf8) != 0) {
                        std::__1::__shared_weak_count::__release_weak()();
                    }
                    iVar25 = iVar28;
                } while (iVar28 != iVar15);
            }
            *(iVar23 + 0x48) = iVar15;
        }
    }
    else {
        std::__1::vector<GeoCodecsMultiSectionFeature, geo::StdAllocator<GeoCodecsMultiSectionFeature, geo::codec::Allocator> >::__append(unsigned long)
                  (iVar23 + 0x40, uVar14 - uVar13);
    }
    if (uStack_80 == 0) {
        piVar9 = geo::codec::Allocator::instance()();
        iVar25 = (**(*piVar9 + 0x18))(piVar9, 1, 0x48);
        if (iVar25 == 0) {
            uVar21 = **reloc.__stderrp;
code_r0x0001938fd7a4:
            fprintf(uVar21, 0x8ff + 0x193b8a000);
code_r0x0001938fcb40:
            iVar15 = 0;
            goto code_r0x0001938fcb44;
        }
        piVar9 = geo::codec::Allocator::instance()();
        uVar21 = (**(*piVar9 + 0x18))(piVar9, *(uStack_88 + 0x10), 8);
        *(iVar25 + 8) = uVar21;
        piVar9 = geo::codec::Allocator::instance()();
        iVar15 = (**(*piVar9 + 0x18))(piVar9, *(*param_2 + 0x48) - *(*param_2 + 0x40) >> 8, 0x10);
        *(iVar25 + 0x20) = iVar15;
        if (iVar15 == 0) {
            uVar21 = **reloc.__stderrp;
            goto code_r0x0001938fd7a4;
        }
        iVar15 = 0;
        uVar14 = uStack_88;
code_r0x0001938fd2d4:
        uVar14 = *(uVar14 + 0x10);
        piVar9 = operator new(unsigned long)(0x40);
        piVar9[1] = 0;
        piVar9[2] = 0;
        *piVar9 = 0xc00 + 0x1db961000 + 0x10;
        puVar10 = malloc(0x100);
        piStack_98 = piVar9 + 3;
        *piStack_98 = puVar10;
        piVar9[5] = 0;
        piVar9[6] = 0;
        piVar9[4] = 0;
        *(piVar9 + 0x37) = 0;
        if (puVar10 != NULL) {
            puVar10[0x1d] = 0xffffffffffffffff;
            puVar10[0x1c] = 0xffffffffffffffff;
            puVar10[0x1f] = 0xffffffffffffffff;
            puVar10[0x1e] = 0xffffffffffffffff;
            puVar10[0x19] = 0xffffffffffffffff;
            puVar10[0x18] = 0xffffffffffffffff;
            puVar10[0x1b] = 0xffffffffffffffff;
            puVar10[0x1a] = 0xffffffffffffffff;
            puVar10[0x15] = 0xffffffffffffffff;
            puVar10[0x14] = 0xffffffffffffffff;
            puVar10[0x17] = 0xffffffffffffffff;
            puVar10[0x16] = 0xffffffffffffffff;
            puVar10[0x11] = 0xffffffffffffffff;
            puVar10[0x10] = 0xffffffffffffffff;
            puVar10[0x13] = 0xffffffffffffffff;
            puVar10[0x12] = 0xffffffffffffffff;
            puVar10[0xd] = 0xffffffffffffffff;
            puVar10[0xc] = 0xffffffffffffffff;
            puVar10[0xf] = 0xffffffffffffffff;
            puVar10[0xe] = 0xffffffffffffffff;
            puVar10[9] = 0xffffffffffffffff;
            puVar10[8] = 0xffffffffffffffff;
            puVar10[0xb] = 0xffffffffffffffff;
            puVar10[10] = 0xffffffffffffffff;
            puVar10[5] = 0xffffffffffffffff;
            puVar10[4] = 0xffffffffffffffff;
            puVar10[7] = 0xffffffffffffffff;
            puVar10[6] = 0xffffffffffffffff;
            puVar10[1] = 0xffffffffffffffff;
            *puVar10 = 0xffffffffffffffff;
            puVar10[3] = 0xffffffffffffffff;
            puVar10[2] = 0xffffffffffffffff;
        }
        *puVar10 = 0x500000005;
        *(piVar9 + 0x39) = 0x501;
        piVar26 = piStack_90;
        if (piVar26 == NULL) {
code_r0x0001938fd410:
            piStack_90 = piVar9;
            tmp_ldXn = piStack_90[1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + 1;
            iVar23 = tmp_stXn;
            piStack_90[1] = iVar23;
            uVar21 = tmp_ldXn;
        }
        else {
            LOAcquire();
            tmp_ldXn = piStack_90[1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + -1;
            iVar23 = tmp_stXn;
            piStack_90[1] = iVar23;
            iVar23 = tmp_ldXn;
            LORelease();
            piStack_90 = piVar9;
            if (iVar23 == 0) {
                (**(*piVar26 + 0x10))(piVar26);
                std::__1::__shared_weak_count::__release_weak()(piVar26);
            }
            piVar9 = piStack_90;
            if (piStack_90 != NULL) goto code_r0x0001938fd410;
        }
        apiStack_b0[0] = piStack_98;
        apiStack_b0[1] = piStack_90;
        piVar26 = FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
                            (*param_2 + 0x458, apiStack_b0);
        piVar9 = piStack_90;
        piStack_98 = *piVar26;
        piVar26 = piVar26[1];
        if (piVar26 != NULL) {
            tmp_ldXn = piVar26[1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + 1;
            iVar23 = tmp_stXn;
            piVar26[1] = iVar23;
            uVar21 = tmp_ldXn;
        }
        piStack_90 = piVar26;
        if (piVar9 != NULL) {
            LOAcquire();
            tmp_ldXn = piVar9[1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + -1;
            iVar23 = tmp_stXn;
            piVar9[1] = iVar23;
            iVar23 = tmp_ldXn;
            LORelease();
            if (iVar23 == 0) {
                (**(*piVar9 + 0x10))(piVar9);
                std::__1::__shared_weak_count::__release_weak()(piVar9);
            }
        }
        piVar9 = apiStack_b0[1];
        if (piVar9 != NULL) {
            LOAcquire();
            tmp_ldXn = apiStack_b0[1][1];
            iVar23 = tmp_ldXn;
            tmp_stXn = iVar23 + -1;
            iVar23 = tmp_stXn;
            apiStack_b0[1][1] = iVar23;
            iVar23 = tmp_ldXn;
            LORelease();
            if (iVar23 == 0) {
                (**(*piVar9 + 0x10))(piVar9);
                std::__1::__shared_weak_count::__release_weak()(piVar9);
            }
        }
        iVar23 = *param_2;
        iVar28 = *(iVar23 + 0x40);
        if (*(iVar23 + 0x48) != iVar28) {
            iVar27 = 0;
            uVar13 = 0;
            uVar30 = *0x193ae20b8;
            uVar21 = *0x193ae20b0;
            while( true ) {
                iVar16 = param_2[1];
                if (iVar16 != 0) {
                    tmp_ldXn = *(iVar16 + 0x10);
                    iVar11 = tmp_ldXn;
                    tmp_stXn = iVar11 + 1;
                    uVar29 = tmp_stXn;
                    *(iVar16 + 0x10) = uVar29;
                    uVar29 = tmp_ldXn;
                }
                piVar9 = iVar28 + iVar27;
                iVar11 = piVar9[1];
                *piVar9 = iVar23;
                piVar9[1] = iVar16;
                if (iVar11 != 0) {
                    std::__1::__shared_weak_count::__release_weak()();
                }
                iVar23 = iVar28 + iVar27;
                *(iVar23 + 0xc0) = uVar30;
                *(iVar23 + 0xb8) = uVar21;
                *(iVar23 + 0x88) = 1;
                uStack_70 = (uStack_70 >> 0x20) << 0x20;
                uStack_78 = (uStack_78 >> 0x20) << 0x20;
                aiStack_b8[0] = 0;
                uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar7, *0x8 + -0x70);
                if ((((uVar12 & 1) == 0) ||
                    (iVar6 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar7, *0x8 + -0x78), 
                    iVar6 == 0)) ||
                   (iVar6 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar7, aiStack_b8), 
                   iVar6 == 0)) break;
                uVar12 = uStack_78;
                if (uVar14 < uStack_78 + uStack_70) break;
                if (uStack_80 == 0) {
                    iVar23 = *(iVar25 + 0x28);
                    puVar10 = *(iVar25 + 0x20) + iVar23 * 0x10;
                    *puVar10 = *(iVar25 + 0x10);
                    puVar10[1] = uVar12;
                    memcpy(*(iVar25 + 8) + *(iVar25 + 0x10) * 8, *(uStack_88 + 8) + uStack_70 * 8, uVar12 << 3);
                    piVar17 = iVar25 + 0x10;
                    piVar26 = iVar25 + 0x28;
                }
                else {
                    iVar23 = *(iVar15 + 0x28);
                    puVar10 = *(iVar15 + 0x20) + iVar23 * 0x10;
                    *puVar10 = *(iVar15 + 0x10);
                    puVar10[1] = uVar12;
                    memcpy(*(iVar15 + 8) + *(iVar15 + 0x10) * 0xc, *(uStack_80 + 8) + uStack_70 * 0xc, uVar12 * 0xc);
                    piVar17 = iVar15 + 0x10;
                    piVar26 = iVar15 + 0x28;
                }
                *piVar17 = *piVar17 + uStack_78;
                *piVar26 = *piVar26 + 1;
                *(iVar28 + iVar27 + 0x80) = iVar23;
                if (aiStack_b8[0] == 0) {
                    if (piStack_90 != NULL) {
                        tmp_ldXn = piStack_90[1];
                        iVar23 = tmp_ldXn;
                        tmp_stXn = iVar23 + 1;
                        iVar23 = tmp_stXn;
                        piStack_90[1] = iVar23;
                        uVar29 = tmp_ldXn;
                    }
                    *(iVar28 + iVar27 + 0x68) = piStack_98;
                    piVar9 = *(iVar28 + iVar27 + 0x70);
                    *(iVar28 + iVar27 + 0x70) = piStack_90;
                    if (piVar9 != NULL) {
                        LOAcquire();
                        tmp_ldXn = piVar9[1];
                        iVar23 = tmp_ldXn;
                        tmp_stXn = iVar23 + -1;
                        iVar23 = tmp_stXn;
                        piVar9[1] = iVar23;
                        iVar23 = tmp_ldXn;
                        LORelease();
                        if (iVar23 == 0) {
                            (**(*piVar9 + 0x10))(piVar9);
                            std::__1::__shared_weak_count::__release_weak()(piVar9);
                        }
                    }
                }
                else {
                    uVar12 = geo::codec::accumulateStyleAttributes(FeatureStyleAttributesSet&, std::__1::shared_ptr<FeatureStyleAttributes>&, VMP4Chapter*, GeoCodecsFeature*)
                                       (*param_2 + 0x458, *0x8 + -0x98, pcVar7, piVar9);
                    if ((uVar12 & 1) == 0) break;
                }
                uVar13 = uVar13 + 1;
                iVar23 = *param_2;
                iVar28 = *(iVar23 + 0x40);
                iVar27 = iVar27 + 0x100;
                if (*(iVar23 + 0x48) - iVar28 >> 8 <= uVar13) goto code_r0x0001938fd6f8;
            }
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            goto code_r0x0001938fcb44;
        }
code_r0x0001938fd6f8:
        if ((iVar15 == 0) || (iVar25 != 0)) {
            *(iVar23 + 0x328) = iVar25;
            bVar24 = true;
            iVar25 = 0;
        }
        else {
            piVar9 = geo::codec::Allocator::instance()();
            iVar25 = (**(*piVar9 + 0x18))(piVar9, 1, 0x48);
            iVar23 = *param_2;
            *(iVar23 + 0x328) = iVar25;
            if (iVar25 == 0) {
                uVar21 = **reloc.__stderrp;
                goto code_r0x0001938fd814;
            }
            *(iVar25 + 0x28) = *(iVar15 + 0x28);
            geo::codec::_createLOD(GeoCodecsCurveVertexPool*, GeoCodecsVertexPool*, unsigned long, bool, unsigned int**, GeoCodecsPointsOnRoadLODData*, GeoCodecsCharacteristicPointsLODData*, GeoCodecsStrokeSpecificationsLODData*)
                      (iVar15, iVar25, 0, 0xe00 < (*(iVar23 + 4) & 0x3f00), 0, 0, 0, 0);
            iVar25 = 0;
            bVar24 = true;
        }
    }
    else {
        piVar9 = geo::codec::Allocator::instance()();
        iVar15 = (**(*piVar9 + 0x18))(piVar9, 1, 0x30);
        if (iVar15 == 0) {
            uVar21 = **reloc.__stderrp;
        }
        else {
            piVar9 = geo::codec::Allocator::instance()();
            uVar21 = (**(*piVar9 + 0x18))(piVar9, *(uStack_80 + 0x10), 0xc);
            *(iVar15 + 8) = uVar21;
            piVar9 = geo::codec::Allocator::instance()();
            iVar25 = (**(*piVar9 + 0x18))(piVar9, *(*param_2 + 0x48) - *(*param_2 + 0x40) >> 8, 0x10);
            *(iVar15 + 0x20) = iVar25;
            if (*(iVar15 + 8) == 0) {
                uVar21 = **reloc.__stderrp;
            }
            else {
                if (iVar25 != 0) {
                    iVar25 = 0;
                    uVar14 = uStack_80;
                    goto code_r0x0001938fd2d4;
                }
                uVar21 = **reloc.__stderrp;
            }
        }
code_r0x0001938fd814:
        fprintf(uVar21, 0x8ff + 0x193b8a000);
        iVar25 = 0;
code_r0x0001938fcb44:
        bVar24 = false;
    }
code_r0x0001938fcb48:
    if (uStack_80 != 0) {
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, *(uStack_80 + 8), 0);
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, *(uStack_80 + 0x20), 0);
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, uStack_80, 0);
    }
    if (uStack_88 != 0) {
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, *(uStack_88 + 8), 0);
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, *(uStack_88 + 0x20), 0);
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, uStack_88, 0);
    }
    if (iVar15 != 0) {
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, *(iVar15 + 8), 0);
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, *(iVar15 + 0x20), 0);
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, iVar15, 0);
    }
    if (iVar25 != 0) {
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, *(iVar25 + 8), 0);
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, *(iVar25 + 0x20), 0);
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, iVar25, 0);
    }
    if (pcVar22 != NULL) {
        if (*pcVar22 != '\0') {
            piVar9 = geo::codec::Allocator::instance()();
            (**(*piVar9 + 0x28))(piVar9, *(pcVar22 + 0x28), 0);
        }
        piVar9 = geo::codec::Allocator::instance()();
        (**(*piVar9 + 0x28))(piVar9, pcVar22, 0);
    }
    iVar15 = std::__1::chrono::steady_clock::now()();
    uStack_78 = 0x1a3 + 0x193b8a000;
    uStack_70 = *0x8 + -0x78;
    iVar25 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iStack_d0 + 0x778, *0x8 + -0x78, 0x74c + 0x193af9000, *0x8 + -0x70, aiStack_b8);
    iVar15 = SUB168(SEXT816(iVar15 - iStack_d8) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar25 + 0x20) = ((iVar15 >> 7) - (iVar15 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    if (piVar8 != NULL) {
        LOAcquire();
        tmp_ldXn = piVar8[1];
        iVar15 = tmp_ldXn;
        tmp_stXn = iVar15 + -1;
        iVar15 = tmp_stXn;
        piVar8[1] = iVar15;
        iVar15 = tmp_ldXn;
        LORelease();
        if (iVar15 == 0) {
            (**(*piVar8 + 0x10))(piVar8);
            std::__1::__shared_weak_count::__release_weak()(piVar8);
        }
    }
    piVar8 = piStack_90;
    if (piVar8 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_90[1];
        iVar15 = tmp_ldXn;
        tmp_stXn = iVar15 + -1;
        iVar15 = tmp_stXn;
        piStack_90[1] = iVar15;
        iVar15 = tmp_ldXn;
        LORelease();
        if (iVar15 == 0) {
            (**(*piVar8 + 0x10))(piVar8);
            std::__1::__shared_weak_count::__release_weak()(piVar8);
        }
    }
    pcVar22 = NULL;
    if (bVar24) {
        uVar21 = 1;
        if (pcVar7 != NULL) goto code_r0x0001938fcf68;
    }
    else {
code_r0x0001938fcf3c:
        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
        uVar21 = 0;
        if (pcVar7 != NULL) {
code_r0x0001938fcf68:
            if (*pcVar7 != '\0') {
                piVar8 = geo::codec::Allocator::instance()();
                (**(*piVar8 + 0x28))(piVar8, *(pcVar7 + 0x28), 0);
            }
            piVar8 = geo::codec::Allocator::instance()();
            (**(*piVar8 + 0x28))(piVar8, pcVar7, 0);
        }
    }
    if (false) {
        return uVar21;
    }
    goto code_r0x0001938fcfd8;
code_r0x0001938fc748:
    uVar13 = uVar13 + 1;
    if (uVar14 < uVar13 || uVar14 == uVar13) goto code_r0x0001938fc8bc;
    goto code_r0x0001938fc738;
}
