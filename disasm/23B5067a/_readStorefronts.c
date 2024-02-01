
ulong geo::codec::_readStorefronts(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint uVar4;
    int32_t iVar5;
    char *pcVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    int64_t **ppiVar23;
    int64_t iVar24;
    int64_t iVar25;
    uint64_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t auStack_a4 [3];
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t *piStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [8];
    ulong uStack_68;
    
    uVar13 = param_1[1];
    if (uVar13 != 0) {
        uVar11 = 0;
        do {
            if (*(*param_1 + uVar11 * 0x10) == 0x8a) {
                pcVar6 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar11, 0x8a, *param_2 + 0x778);
                if (pcVar6 == NULL) {
                    return 1;
                }
                uStack_98 = 0x354 + 0x193b8a000;
                iStack_90 = *param_2;
                piStack_88 = param_2[1];
                if (piStack_88 != NULL) {
                    tmp_ldXn = piStack_88[1];
                    iVar8 = tmp_ldXn;
                    tmp_stXn = iVar8 + 1;
                    iVar8 = tmp_stXn;
                    piStack_88[1] = iVar8;
                    uVar9 = tmp_ldXn;
                }
                iStack_80 = std::__1::chrono::steady_clock::now()();
                uStack_68._0_4_ = 0;
                uVar13 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x68);
                if ((uVar13 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x000193912d24;
                }
                if (uStack_68 == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x000193912d24;
                }
                auStack_a4[2] = 0;
                uVar13 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, auStack_a4 + 2);
                if ((uVar13 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x000193912d24;
                }

                *(*param_2 + 0x748) = auStack_a4[2];
                piVar7 = geo::codec::Allocator::instance()();
                iVar8 = (**(*piVar7 + 0x18))(piVar7, 8, auStack_a4[2]);
                *(*param_2 + 0x750) = iVar8;

                if (iVar8 == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x000193912d24;
                }

                uVar13 = *(pcVar6 + 0x30) + 8;
                uVar11 = *(pcVar6 + 0x38) - uVar13;

                if (*(pcVar6 + 0x38) < uVar13) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x000193912d24;
                }

                piVar7 = *(pcVar6 + 0x28) + *(pcVar6 + 0x30);
                piVar15 = piVar7 + 1;
                iVar8 = *piVar7;
                ppiVar23 = pcVar6 + 8;
                *ppiVar23 = piVar15;
                *(pcVar6 + 0x30) = uVar13;
                pcVar6[0x20] = '\x01';
                *(pcVar6 + 0x10) = uVar11;
                *(pcVar6 + 0x18) = 0;

                if ((uVar11 & 0x1fffffffffffffff) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x000193912d24;
                }

                uVar3 = *piVar15;
                *(pcVar6 + 0x18) = 5;
                auStack_a4[1] = 0;
                uVar13 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)(ppiVar23, auStack_a4 + 1, 5);

                if ((uVar13 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    if (BitstreamUnpackBitcount(ppiVar23, auStack_a4, 6) != 0) {
                        if (uStack_68 != 0) {
                            uVar13 = (uVar3 >> 3) + 1;
                            uVar2 = auStack_a4[0];
                            uVar26 = uVar2;
                            uVar11 = uVar13;

                            while (uVar11 != 0) {
                                uVar14 = *(pcVar6 + 0x18);
                                if (*(pcVar6 + 0x10) * 8 <= uVar14 + uVar11 && uVar14 + uVar11 != *(pcVar6 + 0x10) * 8) {
                                    goto code_r0x000193912d24;
                                }

                                uVar16 = 0;
                                do {
                                    uVar21 = 8 - (uVar14 & 7);
                                    uVar22 = uVar11;
                                    if (uVar21 <= uVar11) {
                                        uVar22 = uVar21;
                                    }
                                    uVar19 = uVar22;
                                    uVar16 = *(*ppiVar23 + (uVar14 >> 3)) >> ((8 - (uVar14 & 7)) - uVar19 & 0x3f) & ~(-1 << (uVar19 & 0x1f)) |
                                             uVar16 << (uVar19 & 0x1f);
                                    uVar14 = uVar22 + uVar14;
                                    *(pcVar6 + 0x18) = uVar14;
                                    uVar11 = uVar11 - uVar22;
                                } while (uVar11 != 0);

                                iVar24 = *(*param_2 + 0x1f8);
                                if (*(*param_2 + 0x200) - iVar24 >> 8 <= uVar16) {
                                    goto code_r0x000193912d24;
                                }

                                iVar24 = iVar24 + uVar16 * 0x100;
                                if (*(iVar24 + 0xee) != '\0') {
                                    goto code_r0x000193912d24;
                                }

                                uStack_78 = (uStack_78 >> 0x20) << 0x20;
                                if (BitstreamUnpack(ppiVar23, &uStack_78, uVar4) == 0) {
                                    goto code_r0x000193912d24;
                                }

                                if (0xfd < uStack_78 && uStack_78 != 0xfe) {
                                    goto code_r0x000193912cc8;
                                }

                                *(iVar24 + 0xee) = uStack_78;
                                *(iVar24 + 0xdc) = uVar27;
                                uVar19 = uStack_78 + uVar27;

                                if (uVar12 <= uVar19 && uVar19 != uVar12) {
                                    goto code_r0x000193912cc8;
                                }

                                uVar28 = uVar27;

                                if (uStack_78 == 0) {
                                    goto code_r0x000193912bc0;
                                }

                                uVar11 = *(pcVar6 + 0x18);
                                uVar14 = *(pcVar6 + 0x10) * 8;
                                iVar24 = *param_2;
                                uVar28 = uVar19;

                                if (uVar2 != 0) {
                                    do {
                                        if (uVar14 <= uVar11 + uVar26 && uVar11 + uVar26 != uVar14) {
                                            goto code_r0x000193912cc8;
                                        }

                                        uVar22 = 0;
                                        uVar16 = uVar26;

                                        do {
                                            uVar10 = 8 - (uVar11 & 7);
                                            uVar21 = uVar16;

                                            if (uVar10 <= uVar16) {
                                                uVar21 = uVar10;
                                            }

                                            uVar22 = *(*ppiVar23 + (uVar11 >> 3)) >> ((8 - (uVar11 & 7)) - uVar21 & 0x3f) &
                                                     (-1L << (uVar21 & 0x3f) ^ 0xffffffffffffffffU) | uVar22 << (uVar21 & 0x3f);
                                            uVar11 = uVar21 + uVar11;
                                            *(pcVar6 + 0x18) = uVar11;
                                            uVar16 = uVar16 - uVar21;
                                        } while (uVar16 != 0);

                                        *(*(iVar24 + 0x750) + uVar27 * 8) = uVar22 + iVar8;
                                        uVar27 = uVar27 + 1;
                                    } while (uVar27 != uVar19);

                                    goto code_r0x000193912bc0;
                                }

                                if (uVar14 <= uVar11 + uVar26 && uVar11 + uVar26 != uVar14) {
                                    goto code_r0x000193912cc8;
                                }

                                iVar24 = *(iVar24 + 0x750);
                                uVar17 = uVar27;

                                if ((7 < uStack_78) && (!CARRY4(uVar27, uStack_78 + -1))) {
                                    uVar1 = uStack_78 & 0xfffffff8;
                                    uVar17 = uVar27 + uVar1;
                                    uVar20 = uVar1;

                                    do {
                                        piVar7 = iVar24 + uVar27 * 8;
                                        piVar7[1] = iVar8;
                                        *piVar7 = iVar8;
                                        piVar7[3] = iVar8;
                                        piVar7[2] = iVar8;
                                        piVar7[5] = iVar8;
                                        piVar7[4] = iVar8;
                                        piVar7[7] = iVar8;
                                        piVar7[6] = iVar8;
                                        uVar27 = uVar27 + 8;
                                        uVar20 = uVar20 + -8;
                                    } while (uVar20 != 0);

                                    if (uStack_78 == uVar1) {
                                        goto code_r0x000193912bc0;
                                    }
                                }

                                uVar18 = uVar18;

                                do {
                                    *(iVar24 + uVar17 * 8) = iVar8;
                                    uVar17 = uVar17 + 1;
                                    uVar27 = uVar19;
                                } while (uVar19 != uVar17);
                            }

                        code_r0x000193912c98:
                            if (uVar27 != uVar12) {
                                goto code_r0x000193912d24;
                            }
                            else {
                                iVar8 = *(pcVar6 + 0x30) + (*(pcVar6 + 0x18) >> 3);

                                if ((*(pcVar6 + 0x18) & 7) != 0) {
                                    iVar8 = iVar8 + 1;
                                }

                                *(pcVar6 + 0x30) = iVar8;
                                pcVar6[0x20] = '\0';
                                uVar9 = 1;
                            }

                            if (*pcVar6 != '\0') {
                                piVar7 = geo::codec::Allocator::instance()();
                                (**(*piVar7 + 0x28))(piVar7, *(pcVar6 + 0x28), 0);
                            }

                            piVar7 = geo::codec::Allocator::instance()();
                            (**(*piVar7 + 0x28))(piVar7, pcVar6, 0);
                            uVar13 = uStack_98;
                            iVar25 = iStack_90;
                            iVar8 = std::__1::chrono::steady_clock::now()();
                            iVar24 = iStack_80;
                            uStack_78 = uVar13;

                            if (uVar13 != 0) {
                                uStack_68 = &uStack_78;
                                iVar25 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&) (iVar25 + 0x778, &uStack_78, 0x74c + 0x193af9000, *0x8 + -0x68, *0x8 + -0x70);
                                iVar8 = SUB168(SEXT816(iVar8 - iVar24) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
                                *(iVar25 + 0x20) = ((iVar8 >> 7) - (iVar8 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
                            }

                            piVar7 = piStack_88;

                            if (piVar7 != NULL) {
                                LOAcquire();
                                tmp_ldXn = piStack_88[1];
                                iVar8 = tmp_ldXn;
                                tmp_stXn = iVar8 + -1;
                                iVar8 = tmp_stXn;
                                piStack_88[1] = iVar8;
                                iVar8 = tmp_ldXn;
                                LORelease();

                                if (iVar8 == 0) {
                                    (**(*piVar7 + 0x10))(piVar7);
                                    std::__1::__shared_weak_count::__release_weak()(piVar7);
                                }
                            }

                            return uVar9;
                        }
                    }

                    code_r0x000193912d24:
                    // Handle error case

                    code_r0x000193912cc8:
                    // Handle error case

                    code_r0x000193912bc0:
                    // Handle error case

                    return uVar9;
