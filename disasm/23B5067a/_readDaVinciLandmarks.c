
uint64_t geo::codec::_readDaVinciLandmarks(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    int32_t iVar1;
    uint16_t uVar2;
    code *UNRECOVERED_JUMPTABLE;
    int32_t iVar3;
    char *pcVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t **ppiVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t *piVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int64_t unaff_x21;
    int64_t iVar18;
    ushort uVar19;
    ulong uStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t *piStack_c8;
    int64_t iStack_c0;
    int64_t *piStack_b8;
    int64_t *piStack_b0;
    ulong uStack_a8;
    uint uStack_a0;
    int64_t *piStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t *piStack_50;
    int64_t iStack_48;
    
    uVar11 = param_1[1];
    if (uVar11 != 0) {
        uVar10 = 0;
        do {
            if (*(*param_1 + uVar10 * 0x10) == 0x93) {
                pcVar4 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar10, 0x93, *param_2 + 0x778);
                if (pcVar4 != NULL) {
                    iStack_60 = 0x504 + 0x193b8a000;
                    iStack_58 = *param_2;
                    piStack_50 = param_2[1];
                    if (piStack_50 != NULL) {
                        tmp_ldXn = piStack_50[1];
                        iVar7 = tmp_ldXn;
                        tmp_stXn = iVar7 + 1;
                        iVar7 = tmp_stXn;
                        piStack_50[1] = iVar7;
                        uVar5 = tmp_ldXn;
                    }
                    iStack_48 = std::__1::chrono::steady_clock::now()();
                    uStack_88 = 0;
                    piStack_90 = NULL;
                    uStack_78 = 0;
                    piStack_80 = NULL;
                    uStack_70 = 0x3f800000;
                    piStack_b8 = NULL;
                    iStack_c0 = 0;
                    uStack_a8 = 0;
                    piStack_b0 = NULL;
                    uStack_a0 = 0x3f800000;
                    uVar11 = *(pcVar4 + 0x30) + 4;
                    if ((*(pcVar4 + 0x38) <= uVar11 && uVar11 != *(pcVar4 + 0x38)) ||
                       (uVar16 = *(*(pcVar4 + 0x28) + *(pcVar4 + 0x30)),  *(pcVar4 + 0x30) = uVar11,  uVar16 < 0x10))
                    goto code_r0x000193919528;
                    iStack_e0 = 0;
                    iStack_d8 = 0;
                    iStack_d0 = 0;
                    piStack_c8 = geo::codec::Allocator::instance()();
                    uStack_e8 = 0;
                    iVar7 = *param_2;
                    *(iVar7 + 0xaee) = 0;
                    uVar11 = geo::codec::_decodeDaVinciRenderables(VMP4Chapter*, std::__1::unordered_map<unsigned int, std::__1::vector<geo::Transform<float>, geo::StdAllocator<geo::Transform<float>, geo::codec::Allocator> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, std::__1::vector<geo::Transform<float>, geo::StdAllocator<geo::Transform<float>, geo::codec::Allocator> > > > > const&, std::__1::unordered_map<unsigned int, std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> > > > >&, GeoCodecsDaVinciRenderable**, unsigned short&, std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >&, unsigned long&)
                                       (pcVar4, &piStack_90, &iStack_c0, iVar7 + 0x890, iVar7 + 0x888, &iStack_e0, 
                                        &uStack_e8);
                    if ((uVar11 & 1) == 0) {
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        iVar3 = 6;
                    }
                    else {
                        unaff_x21 = iStack_e0;
                        iVar7 = iStack_d8 - unaff_x21;
                        *(*param_2 + 0xaee) = *(*param_2 + 0xaee) + (iVar7 >> 3);
                        piVar6 = geo::codec::Allocator::instance()();
                        uVar5 = (**(*piVar6 + 0x10))(piVar6, iVar7, 8);
                        *(*param_2 + 0xb00) = uVar5;
                        memcpy(uVar5, unaff_x21, iVar7);
                        iVar3 = 0;
                    }
                    uVar16 = unaff_x21;
                    if (iStack_e0 != 0) {
                        (**(*piStack_c8 + 0x28))(piStack_c8, iStack_e0, iStack_d0 - iStack_e0);
                    }
                    if (iVar3 == 6) goto code_r0x00019391954c;
                    if (iVar3 != 0) goto code_r0x0001939195b8;
                    if (*(pcVar4 + 0x40) < 0x14) goto code_r0x000193919a1c;
                    iVar3 = geo::codec::_decodeMaterialModifiers(VMP4Chapter*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (pcVar4, param_2);
                    if (iVar3 == 0) goto code_r0x000193919528;
                    uVar2 = *(*param_2 + 0x888);
                    if ((uVar2 == NULL) || (piStack_b8 == NULL)) goto code_r0x000193919a1c;
                    piVar6 = NULL;
                    if (piStack_b8 == NULL) goto code_r0x000193919a04;
                    goto code_r0x0001939197f8;
                }
                break;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 <= uVar11 && uVar11 != uVar10);
    }
    uVar16 = 1;
    goto code_r0x000193919450;
code_r0x0001939197f8:
    uVar5 = NEON_cnt(piStack_b8, 1);
    uVar19 = NEON_uaddlv(uVar5, 1);
    uVar16 = CONCAT62(uVar5 >> 0x10, uVar19) & 0xffffffff;
    if (uVar16 < 2) {
        piVar15 = piStack_b8 + 0xffffU & piVar6;
    }
    else {
        piVar15 = piVar6;
        if (piStack_b8 < piVar6 || piStack_b8 == piVar6) {
            uVar11 = 0;
            if (piStack_b8 != NULL) {
                uVar11 = piVar6 / piStack_b8;
            }
            piVar15 = piVar6 - uVar11 * piStack_b8;
        }
    }
    ppiVar12 = *(iStack_c0 + piVar15 * 8);
    if ((ppiVar12 != NULL) && (ppiVar12 = *ppiVar12,  ppiVar12 != NULL)) {
        iVar3 = piVar6;
        if (uVar16 < 2) {
            do {
                if (ppiVar12[1] == piVar6) {
                    if (*(ppiVar12 + 2) == iVar3) goto code_r0x0001939198c0;
                }
                else if ((ppiVar12[1] & piStack_b8 + -1) != piVar15) break;
                ppiVar12 = *ppiVar12;
            } while (ppiVar12 != NULL);
        }
        else {
            do {
                piVar9 = ppiVar12[1];
                if (piVar9 == piVar6) {
                    if (*(ppiVar12 + 2) == iVar3) goto code_r0x0001939198c0;
                }
                else {
                    if (piStack_b8 <= piVar9) {
                        uVar11 = 0;
                        if (piStack_b8 != NULL) {
                            uVar11 = piVar9 / piStack_b8;
                        }
                        piVar9 = piVar9 - uVar11 * piStack_b8;
                    }
                    if (piVar9 != piVar15) break;
                }
                ppiVar12 = *ppiVar12;
            } while (ppiVar12 != NULL);
        }
    }
    goto code_r0x000193919a04;
code_r0x0001939198c0:
    iVar7 = *(*param_2 + 0x890) + piVar6 * 0x30;
    uVar11 = *(iVar7 + 0x2a);
    if (*(iVar7 + 0x2a) != 0) {
        uVar10 = 0;
code_r0x0001939198e8:
        if (piStack_b8 != NULL) {
            uVar5 = NEON_cnt(piStack_b8, 1);
            uVar19 = NEON_uaddlv(uVar5, 1);
            uVar16 = CONCAT62(uVar5 >> 0x10, uVar19) & 0xffffffff;
            if (uVar16 < 2) {
                piVar15 = piStack_b8 + 0xffffU & piVar6;
            }
            else {
                piVar15 = piVar6;
                if (piStack_b8 < piVar6 || piStack_b8 == piVar6) {
                    uVar13 = 0;
                    if (piStack_b8 != NULL) {
                        uVar13 = piVar6 / piStack_b8;
                    }
                    piVar15 = piVar6 - uVar13 * piStack_b8;
                }
            }
            ppiVar12 = *(iStack_c0 + piVar15 * 8);
            if ((ppiVar12 != NULL) && (ppiVar12 = *ppiVar12,  ppiVar12 != NULL)) {
                if (1 < uVar16) {
                    do {
                        piVar9 = ppiVar12[1];
                        if (piVar9 != piVar6) {
                            if (piStack_b8 <= piVar9) {
                                uVar13 = 0;
                                if (piStack_b8 != NULL) {
                                    uVar13 = piVar9 / piStack_b8;
                                }
                                piVar9 = piVar9 - uVar13 * piStack_b8;
                            }
                            if (piVar9 != piVar15) goto code_r0x000193919a3c;
                        }
                        else if (*(ppiVar12 + 2) == iVar3) goto code_r0x0001939199b8;
                        ppiVar12 = *ppiVar12;
                        if (ppiVar12 == NULL) goto code_r0x000193919a3c;
                    } while( true );
                }
                do {
                    if (ppiVar12[1] != piVar6) {
                        if ((ppiVar12[1] & piStack_b8 + -1) != piVar15) break;
                    }
                    else if (*(ppiVar12 + 2) == iVar3) goto code_r0x0001939199b8;
                    ppiVar12 = *ppiVar12;
                    if (ppiVar12 == NULL) break;
                } while( true );
            }
        }
code_r0x000193919a3c:
        std::__1::__throw_out_of_range[abi:v160006](char const*)(0xb1a + 0x193b8a000);
    // WARNING: Treating indirect jump as call
        UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x193919a4c);
        uVar11 = (*UNRECOVERED_JUMPTABLE)();
        return uVar11;
    }
code_r0x000193919a04:
    do {
        piVar6 = piVar6 + 1;
        if (piVar6 == uVar2) goto code_r0x000193919a1c;
    } while (piStack_b8 == NULL);
    goto code_r0x0001939197f8;
code_r0x0001939199b8:
    iVar1 = *(ppiVar12[3] + uVar10 * 4);
    if (iVar1 != 0) {
        uVar13 = iVar1 + -1;
        iVar8 = *(*param_2 + 0x838);
        if (*(*param_2 + 0x840) - iVar8 >> 4 <= uVar13) goto code_r0x000193919528;
        if (*(iVar8 + uVar13 * 0x10 + 0xc) != '\0') {
            *(*(iVar7 + 8) + uVar10) = *(*(iVar7 + 8) + uVar10) | 1;
            uVar11 = *(iVar7 + 0x2a);
        }
    }
    uVar10 = uVar10 + 1;
    if (uVar11 <= uVar10) goto code_r0x000193919a04;
    goto code_r0x0001939198e8;
code_r0x000193919a1c:
    uVar17 = 1;
    uVar16 = 1;
    if (*pcVar4 != '\0') {
code_r0x000193919558:
        uVar16 = uVar17;
        piVar6 = geo::codec::Allocator::instance()();
        (**(*piVar6 + 0x28))(piVar6, *(pcVar4 + 0x28), 0);
    }
    goto code_r0x000193919588;
code_r0x000193919528:
    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
code_r0x00019391954c:
    uVar17 = 0;
    uVar16 = 0;
    if (*pcVar4 != '\0') goto code_r0x000193919558;
code_r0x000193919588:
    piVar6 = geo::codec::Allocator::instance()();
    (**(*piVar6 + 0x28))(piVar6, pcVar4, 0);
code_r0x0001939195b8:
    piVar6 = piStack_b0;
    if (piStack_b0 != NULL) {
        do {
            piVar15 = *piVar6;
            iVar7 = piVar6[3];
            if (iVar7 != 0) {
                piVar6[4] = iVar7;
                (**(*piVar6[6] + 0x28))(piVar6[6], iVar7, piVar6[5] - iVar7);
            }
            operator delete(void*)(piVar6);
            piVar6 = piVar15;
        } while (piVar15 != NULL);
    }
    iVar7 = iStack_c0;
    iStack_c0 = 0;
    if (iVar7 != 0) {
        operator delete(void*)();
    }
    piVar6 = piStack_80;
    if (piStack_80 != NULL) {
        do {
            piVar15 = *piVar6;
            iVar7 = piVar6[3];
            if (iVar7 != 0) {
                piVar6[4] = iVar7;
                (**(*piVar6[6] + 0x28))(piVar6[6], iVar7, piVar6[5] - iVar7);
            }
            operator delete(void*)(piVar6);
            piVar6 = piVar15;
        } while (piVar15 != NULL);
    }
    if (piStack_90 != NULL) {
        operator delete(void*)();
    }
    iVar7 = iStack_60;
    iVar18 = iStack_58;
    iVar8 = std::__1::chrono::steady_clock::now()();
    iVar14 = iStack_48;
    iStack_c0 = iVar7;
    if (iVar7 != 0) {
        piStack_90 = &iStack_c0;
        iVar7 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                          (iVar18 + 0x778, &iStack_c0, 0x74c + 0x193af9000, &piStack_90, &iStack_e0);
        iVar8 = SUB168(SEXT816(iVar8 - iVar14) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar7 + 0x20) = ((iVar8 >> 7) - (iVar8 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar6 = piStack_50;
    if (piVar6 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_50[1];
        iVar7 = tmp_ldXn;
        tmp_stXn = iVar7 + -1;
        iVar7 = tmp_stXn;
        piStack_50[1] = iVar7;
        iVar7 = tmp_ldXn;
        LORelease();
        if (iVar7 == 0) {
            (**(*piVar6 + 0x10))(piVar6);
            std::__1::__shared_weak_count::__release_weak()(piVar6);
        }
    }
code_r0x000193919450:
    return uVar16 & 1;
}
