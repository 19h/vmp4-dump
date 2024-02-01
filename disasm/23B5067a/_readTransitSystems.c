
ulong geo::codec::_readTransitSystems(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint uVar1;
    uint32_t uVar2;
    bool bVar3;
    int32_t iVar4;
    int32_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    ulong *puVar20;
    uint64_t uVar21;
    uint uVar22;
    uint64_t uVar23;
    ulong *puVar24;
    ulong *puVar25;
    uint *puVar26;
    uint64_t uVar27;
    uint64_t uVar28;
    char *pcVar29;
    int64_t iVar30;
    uint32_t uVar31;
    int64_t iVar32;
    int64_t *piVar33;
    int64_t iVar34;
    ulong *puVar35;
    ulong *puVar36;
    int64_t *piVar37;
    float fVar38;
    ulong uVar39;
    ulong uVar40;
    ulong uVar41;
    ulong uVar42;
    ulong uVar43;
    ulong uVar44;
    ulong uVar45;
    int64_t *piStack_190;
    uint32_t auStack_184 [3];
    uint32_t uStack_178;
    char cStack_171;
    uint64_t *apuStack_170 [2];
    uint32_t uStack_160;
    uint32_t uStack_15c;
    uint32_t uStack_158;
    char cStack_151;
    int64_t iStack_150;
    int64_t iStack_148;
    int64_t *piStack_140;
    int64_t iStack_138;
    int64_t iStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    uint64_t uStack_f8;
    code *pcStack_f0;
    int64_t *piStack_e8;
    uint64_t *puStack_d8;
    code *pcStack_d0;
    int64_t *piStack_c8;
    int64_t iStack_b8;
    code *pcStack_b0;
    int64_t *piStack_a8;
    int64_t iStack_98;
    code *pcStack_90;
    int64_t *piStack_88;
    int64_t *piStack_78;
    int64_t iStack_70;
    
    iStack_70 = **reloc.__stack_chk_guard;
    piVar37 = &iStack_130;
    iStack_130 = piVar37 + 8;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = geo::codec::Allocator::instance()();
    iStack_148 = *param_2;
    uVar21 = param_1[1];
    if (uVar21 != 0) {
        uVar11 = 0;
        do {
            if (*(*param_1 + uVar11 * 0x10) == 0x80) {
                pcVar29 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar11, 0x80, iStack_148 + 0x778);
                iStack_150 = 0x2c5 + 0x193b8a000;
                iStack_148 = *param_2;
                piStack_140 = param_2[1];
                if (piStack_140 != NULL) goto code_r0x0001939093c4;
                goto code_r0x0001939093d0;
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 <= uVar21 && uVar21 != uVar11);
    }
    pcVar29 = NULL;
    iStack_150 = 0x2c5 + 0x193b8a000;
    piStack_140 = param_2[1];
    if (piStack_140 != NULL) {
code_r0x0001939093c4:
        tmp_ldXn = piStack_140[1];
        iVar6 = tmp_ldXn;
        tmp_stXn = iVar6 + 1;
        iVar6 = tmp_stXn;
        piStack_140[1] = iVar6;
        uVar7 = tmp_ldXn;
    }
code_r0x0001939093d0:
    iVar6 = std::__1::chrono::steady_clock::now()();
    iStack_138 = iVar6;
    if (pcVar29 == NULL) {
        uVar7 = 1;
        uVar21 = 0x2c5 + 0x193b8a000;
        iVar32 = iStack_148;
        iVar9 = std::__1::chrono::steady_clock::now()();
        uStack_f8 = uVar21;
        if (uVar21 == 0) goto code_r0x000193909600;
    }
    else {
        uVar21 = *(pcVar29 + 0x30);
        iVar6 = *(pcVar29 + 0x38) - uVar21;
        if (*(pcVar29 + 0x38) < uVar21) {
            uVar11 = *(pcVar29 + 0x18);
            uVar21 = *(pcVar29 + 0x10) * 8;
            if (uVar21 <= uVar11 + 5 && uVar11 + 5 != uVar21) goto code_r0x0001939094ec;
code_r0x000193909480:
            uVar15 = 0;
            piVar8 = pcVar29 + 8;
            uVar23 = 5;
            do {
                uVar28 = 8 - (uVar11 & 7);
                uVar27 = uVar23;
                if (uVar28 <= uVar23) {
                    uVar27 = uVar28;
                }
                uVar14 = uVar27;
                uVar15 = *(*piVar8 + (uVar11 >> 3)) >> ((8 - (uVar11 & 7)) - uVar14 & 0x1f) &
                         (-1 << (uVar14 & 0x1f) ^ 0xffffffff) | uVar15 << (uVar14 & 0x1f);
                uVar11 = uVar27 + uVar11;
                *(pcVar29 + 0x18) = uVar11;
                uVar23 = uVar23 - uVar27;
            } while (uVar23 != 0);
            uVar23 = uVar15 + 1;
            if (uVar21 <= uVar11 + uVar23 && uVar11 + uVar23 != uVar21) goto code_r0x0001939094ec;
            piStack_190 = piVar8;
            uVar14 = 0;
            if (uVar15 + 1 != 0) {
                do {
                    uVar27 = 8 - (uVar11 & 7);
                    uVar21 = uVar23;
                    if (uVar27 <= uVar23) {
                        uVar21 = uVar27;
                    }
                    uVar15 = uVar21;
                    uVar14 = *(*piVar8 + (uVar11 >> 3)) >> ((8 - (uVar11 & 7)) - uVar15 & 0x1f) &
                             (-1 << (uVar15 & 0x1f) ^ 0xffffffff) | uVar14 << (uVar15 & 0x1f);
                    uVar27 = uVar11;
                    uVar11 = uVar21 + uVar27;
                    *(pcVar29 + 0x18) = uVar21 + uVar27;
                    uVar23 = uVar23 - uVar21;
                } while (uVar23 != 0);
            }
            iVar9 = *param_2;
            uVar21 = uVar14;
            puVar36 = *(iVar9 + 0x528);
            iVar6 = *(iVar9 + 0x520);
            uVar11 = (puVar36 - iVar6 >> 3) * (0x38e38e39 | 0x8e38e38e00000000);
            if (uVar21 <= uVar11) {
                if (uVar21 <= uVar11 && uVar11 - uVar21 != 0) {
                    puVar24 = iVar6 + uVar21 * 0x48;
                    if (puVar36 != puVar24) {
                        do {
                            piVar33 = puVar36[-5];
                            puVar36 = puVar36 + -0x48;
                            if (piVar33 != NULL) {
                                LOAcquire();
                                tmp_ldXn = piVar33[1];
                                iVar6 = tmp_ldXn;
                                tmp_stXn = iVar6 + -1;
                                iVar6 = tmp_stXn;
                                piVar33[1] = iVar6;
                                iVar6 = tmp_ldXn;
                                LORelease();
                                if (iVar6 == 0) {
                                    (**(*piVar33 + 0x10))(piVar33);
                                    std::__1::__shared_weak_count::__release_weak()(piVar33);
                                }
                            }
                        } while (puVar36 != puVar24);
                    }
                    goto code_r0x0001939098b0;
                }
            }
            else if ((*(iVar9 + 0x530) - puVar36 >> 3) * (0x38e38e39 | 0x8e38e38e00000000) < uVar21 - uVar11) {
                uVar27 = (*(iVar9 + 0x530) - iVar6 >> 3) * (0x38e38e39 | 0x8e38e38e00000000);
                uVar23 = uVar27 * 2;
                if (uVar23 < uVar21 || uVar23 - uVar21 == 0) {
                    uVar23 = uVar21;
                }
                if ((0xc71c71c7 | 0x1c71c7100000000) <= uVar27) {
                    uVar23 = 0x8e38e38e | 0x38e38e300000000;
                }
                iVar30 = (**(**(iVar9 + 0x538) + 0x10))(*(iVar9 + 0x538), (uVar23 + (uVar23 << 3)) * 8, 8);
                puVar36 = iVar30 + uVar11 * 0x48;
                iVar6 = iVar30 + uVar21 * 0x48;
                iVar32 = uVar21 * 0x48 + uVar11 * -0x48;
                puVar24 = puVar36;
                do {
                    if (puVar24 != NULL) {
                        puVar24[8] = 0;
                        puVar24[5] = 0;
                        puVar24[4] = 0;
                        puVar24[7] = 0;
                        puVar24[6] = 0;
                        puVar24[1] = 0;
                        *puVar24 = 0;
                        puVar24[3] = 0;
                        puVar24[2] = 0;
                    }
                    puVar24 = puVar24 + 9;
                    iVar32 = iVar32 + -0x48;
                } while (iVar32 != 0);
                iVar30 = iVar30 + uVar23 * 0x48;
                iVar34 = *(iVar9 + 0x528);
                iVar32 = *(iVar9 + 0x520);
                if (iVar34 == iVar32) {
                    *(iVar9 + 0x520) = puVar36;
                    *(iVar9 + 0x528) = iVar6;
                    iVar6 = *(iVar9 + 0x530);
                    *(iVar9 + 0x530) = iVar30;
                }
                else {
                    do {
                        uVar39 = *(iVar34 + -0x40);
                        uVar7 = *(iVar34 + -0x48);
                        puVar36[-7] = *(iVar34 + -0x38);
                        puVar36[-8] = uVar39;
                        puVar36[-9] = uVar7;
                        puVar36[-6] = *(iVar34 + -0x30);
                        puVar36[-5] = *(iVar34 + -0x28);
                        *(iVar34 + -0x30) = 0;
                        *(iVar34 + -0x28) = 0;
                        uVar39 = *(iVar34 + -0x18);
                        uVar7 = *(iVar34 + -0x20);
                        uVar40 = *(iVar34 + -0x14);
                        *(puVar36 + -0xc) = *(iVar34 + -0xc);
                        *(puVar36 + -0x14) = uVar40;
                        puVar36[-3] = uVar39;
                        puVar36[-4] = uVar7;
                        puVar36 = puVar36 + -0x48;
                        iVar34 = iVar34 + -0x48;
                    } while (iVar34 != iVar32);
                    iVar34 = *(iVar9 + 0x520);
                    iVar32 = *(iVar9 + 0x528);
                    *(iVar9 + 0x520) = puVar36;
                    *(iVar9 + 0x528) = iVar6;
                    iVar6 = *(iVar9 + 0x530);
                    *(iVar9 + 0x530) = iVar30;
                    if (iVar32 != iVar34) {
                        do {
                            piVar8 = *(iVar32 + -0x28);
                            iVar32 = iVar32 + -0x48;
                            if (piVar8 != NULL) {
                                LOAcquire();
                                tmp_ldXn = piVar8[1];
                                iVar30 = tmp_ldXn;
                                tmp_stXn = iVar30 + -1;
                                iVar30 = tmp_stXn;
                                piVar8[1] = iVar30;
                                iVar30 = tmp_ldXn;
                                LORelease();
                                if (iVar30 == 0) {
                                    (**(*piVar8 + 0x10))(piVar8);
                                    std::__1::__shared_weak_count::__release_weak()(piVar8);
                                }
                            }
                        } while (iVar32 != iVar34);
                    }
                }
                piVar8 = piStack_190;
                if (iVar34 != 0) {
                    (**(**(iVar9 + 0x538) + 0x28))(*(iVar9 + 0x538), iVar34, iVar6 - iVar34);
                }
            }
            else {
                puVar24 = puVar36 + (uVar21 - uVar11) * 9;
                iVar6 = uVar21 * 0x48 + uVar11 * -0x48;
                do {
                    if (puVar36 != NULL) {
                        puVar36[8] = 0;
                        puVar36[5] = 0;
                        puVar36[4] = 0;
                        puVar36[7] = 0;
                        puVar36[6] = 0;
                        puVar36[1] = 0;
                        *puVar36 = 0;
                        puVar36[3] = 0;
                        puVar36[2] = 0;
                    }
                    puVar36 = puVar36 + 9;
                    iVar6 = iVar6 + -0x48;
                } while (iVar6 != 0);
code_r0x0001939098b0:
                *(iVar9 + 0x528) = puVar24;
            }
            pcStack_90 = typeinfo for geo::Allocator + 0x600 + 0x10;
            piStack_88 = param_2;
            piStack_78 = *0x8 + -0x90;
            iVar4 = geo::codec::_readTransitSystemsChapterIDSet(Bitstream*, unsigned long, std::__1::function<void (unsigned long, unsigned long long const*)>, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                              (piVar8, (*(*param_2 + 0x528) - *(*param_2 + 0x520) >> 3) *
                                       (0x38e38e39 | 0x8e38e38e00000000), *0x8 + -0x90);
            if (piStack_78 != *0x8 + -0x90) {
                if (piStack_78 != NULL) {
                    (**(*piStack_78 + 0x28))();
                }
                if (iVar4 != 0) goto code_r0x000193909a70;
code_r0x000193909bd4:
                uVar7 = **reloc.__stderrp;
                goto code_r0x0001939094fc;
            }
            (**(pcStack_90 + 0x20))(*0x8 + -0x90);
            if (iVar4 == 0) goto code_r0x000193909bd4;
code_r0x000193909a70:
            iVar32 = *param_2;
            iVar9 = *(iVar32 + 0x520);
            iVar6 = *(iVar32 + 0x528) - iVar9;
            if (iVar6 == 0) {
                uVar21 = 0;
            }
            else {
                uVar11 = 0;
                uVar21 = 0;
                iVar6 = SUB168(SEXT816(iVar6) * SEXT816(0x38e38e39 | 0xe38e38e00000000), 8);
                uVar23 = (iVar6 >> 2) - (iVar6 >> 0x3f);
                uVar27 = *(pcVar29 + 0x18);
                uVar28 = *(pcVar29 + 0x10) * 8;
                if (uVar23 < 2) {
                    uVar23 = 1;
                }
                do {
                    if (uVar28 <= uVar27 + 5 && uVar27 + 5 != uVar28) {
code_r0x000193909be8:
                        uVar7 = **reloc.__stderrp;
                        goto code_r0x0001939094fc;
                    }
                    uVar15 = 0;
                    iVar6 = *piVar8;
                    uVar12 = 5;
                    do {
                        uVar17 = 8 - (uVar27 & 7);
                        uVar13 = uVar12;
                        if (uVar17 <= uVar12) {
                            uVar13 = uVar17;
                        }
                        uVar14 = uVar13;
                        uVar15 = *(iVar6 + (uVar27 >> 3)) >> ((8 - (uVar27 & 7)) - uVar14 & 0x1f) &
                                 (-1 << (uVar14 & 0x1f) ^ 0xffffffff) | uVar15 << (uVar14 & 0x1f);
                        uVar27 = uVar13 + uVar27;
                        *(pcVar29 + 0x18) = uVar27;
                        uVar12 = uVar12 - uVar13;
                    } while (uVar12 != 0);
                    uVar12 = uVar15 + 1;
                    if (uVar28 <= uVar27 + uVar12 && uVar27 + uVar12 != uVar28) goto code_r0x000193909be8;
                    uVar13 = 0;
                    if (uVar15 + 1 != 0) {
                        do {
                            uVar18 = 8 - (uVar27 & 7);
                            uVar17 = uVar12;
                            if (uVar18 <= uVar12) {
                                uVar17 = uVar18;
                            }
                            uVar15 = uVar17;
                            uVar13 = *(iVar6 + (uVar27 >> 3)) >> ((8 - (uVar27 & 7)) - uVar15 & 0x1f) &
                                     (-1 << (uVar15 & 0x1f) ^ 0xffffffff) | uVar13 << (uVar15 & 0x1f);
                            uVar18 = uVar27;
                            uVar27 = uVar17 + uVar18;
                            *(pcVar29 + 0x18) = uVar17 + uVar18;
                            uVar12 = uVar12 - uVar17;
                        } while (uVar12 != 0);
                    }
                    puVar10 = iVar9 + uVar11 * 0x48;
                    *puVar10 = uVar21;
                    puVar10[1] = uVar13;
                    uVar21 = uVar13 + uVar21;
                    uVar11 = uVar11 + 1;
                } while (uVar11 != uVar23);
            }
            puVar36 = *(iVar32 + 0x508);
            iVar6 = *(iVar32 + 0x500);
            uVar11 = (puVar36 - iVar6 >> 3) * (0x286bca1b | 0x86bca1af00000000);
            if (uVar21 <= uVar11) {
                if (uVar21 <= uVar11 && uVar11 - uVar21 != 0) {
                    puVar24 = iVar6 + uVar21 * 0x98;
                    if (puVar36 != puVar24) {
                        do {
                            piVar8 = puVar36[-5];
                            if (piVar8 != NULL) {
                                LOAcquire();
                                tmp_ldXn = piVar8[1];
                                iVar6 = tmp_ldXn;
                                tmp_stXn = iVar6 + -1;
                                iVar6 = tmp_stXn;
                                piVar8[1] = iVar6;
                                iVar6 = tmp_ldXn;
                                LORelease();
                                if (iVar6 == 0) {
                                    (**(*piVar8 + 0x10))(piVar8);
                                    std::__1::__shared_weak_count::__release_weak()(piVar8);
                                }
                            }
                            puVar25 = puVar36 + -0x98;
                            if (puVar36[-0x12] != 0) {
                                std::__1::__shared_weak_count::__release_weak()();
                            }
                            puVar36 = puVar25;
                        } while (puVar25 != puVar24);
                    }
                    goto code_r0x000193909de8;
                }
            }
            else if ((*(iVar32 + 0x510) - puVar36 >> 3) * (0x286bca1b | 0x86bca1af00000000) < uVar21 - uVar11) {
                uVar27 = (*(iVar32 + 0x510) - iVar6 >> 3) * (0x286bca1b | 0x86bca1af00000000);
                uVar23 = uVar27 * 2;
                if (uVar23 < uVar21 || uVar23 - uVar21 == 0) {
                    uVar23 = uVar21;
                }
                if ((0xe50d7943 | 0xd7943500000000) <= uVar27) {
                    uVar23 = 0xca1af286 | 0x1af286b00000000;
                }
                iVar30 = (**(**(iVar32 + 0x518) + 0x10))(*(iVar32 + 0x518), uVar23 * 0x98, 8);
                puVar36 = iVar30 + uVar11 * 0x98;
                iVar6 = iVar30 + uVar21 * 0x98;
                iVar9 = uVar21 * 0x98 + uVar11 * -0x98;
                puVar24 = puVar36;
                do {
                    if (puVar24 != NULL) {
                        puVar24[0x12] = 0;
                        puVar24[0xf] = 0;
                        puVar24[0xe] = 0;
                        puVar24[0x11] = 0;
                        puVar24[0x10] = 0;
                        puVar24[0xb] = 0;
                        puVar24[10] = 0;
                        puVar24[0xd] = 0;
                        puVar24[0xc] = 0;
                        puVar24[7] = 0;
                        puVar24[6] = 0;
                        puVar24[9] = 0;
                        puVar24[8] = 0;
                        puVar24[3] = 0;
                        puVar24[2] = 0;
                        puVar24[5] = 0;
                        puVar24[4] = 0;
                        puVar24[1] = 0;
                        *puVar24 = 0;
                    }
                    puVar24 = puVar24 + 0x13;
                    iVar9 = iVar9 + -0x98;
                } while (iVar9 != 0);
                iVar30 = iVar30 + uVar23 * 0x98;
                puVar24 = *(iVar32 + 0x508);
                puVar25 = *(iVar32 + 0x500);
                if (puVar24 == puVar25) {
                    *(iVar32 + 0x500) = puVar36;
                    *(iVar32 + 0x508) = iVar6;
                    iVar6 = *(iVar32 + 0x510);
                    *(iVar32 + 0x510) = iVar30;
                }
                else {
                    do {
                        puVar35 = puVar24 + -0x13;
                        puVar20 = puVar36 + -0x13;
                        *puVar20 = *puVar35;
                        puVar36[-0x12] = puVar24[-0x12];
                        *puVar35 = 0;
                        puVar24[-0x12] = 0;
                        uVar39 = puVar24[-0x10];
                        uVar7 = puVar24[-0x11];
                        uVar40 = puVar24[-0xf];
                        puVar36[-0xe] = puVar24[-0xe];
                        puVar36[-0xf] = uVar40;
                        uVar43 = puVar24[-10];
                        uVar42 = puVar24[-0xb];
                        uVar41 = puVar24[-8];
                        uVar40 = puVar24[-9];
                        uVar45 = puVar24[-0xc];
                        uVar44 = puVar24[-0xd];
                        puVar36[-7] = puVar24[-7];
                        puVar36[-10] = uVar43;
                        puVar36[-0xb] = uVar42;
                        puVar36[-8] = uVar41;
                        puVar36[-9] = uVar40;
                        puVar36[-0xc] = uVar45;
                        puVar36[-0xd] = uVar44;
                        puVar36[-0x10] = uVar39;
                        puVar36[-0x11] = uVar7;
                        puVar36[-6] = puVar24[-6];
                        puVar36[-5] = puVar24[-5];
                        puVar24[-6] = 0;
                        puVar24[-5] = 0;
                        *(puVar36 + -4) = *(puVar24 + -4);
                        uVar39 = puVar24[-2];
                        uVar7 = puVar24[-3];
                        puVar36[-1] = puVar24[-1];
                        puVar36[-2] = uVar39;
                        puVar36[-3] = uVar7;
                        puVar36 = puVar20;
                        puVar24 = puVar35;
                    } while (puVar35 != puVar25);
                    puVar24 = *(iVar32 + 0x500);
                    puVar36 = *(iVar32 + 0x508);
                    *(iVar32 + 0x500) = puVar20;
                    *(iVar32 + 0x508) = iVar6;
                    iVar6 = *(iVar32 + 0x510);
                    *(iVar32 + 0x510) = iVar30;
                    if (puVar36 != puVar24) {
                        do {
                            piVar8 = puVar36[-5];
                            if (piVar8 != NULL) {
                                LOAcquire();
                                tmp_ldXn = piVar8[1];
                                iVar9 = tmp_ldXn;
                                tmp_stXn = iVar9 + -1;
                                iVar9 = tmp_stXn;
                                piVar8[1] = iVar9;
                                iVar9 = tmp_ldXn;
                                LORelease();
                                if (iVar9 == 0) {
                                    (**(*piVar8 + 0x10))(piVar8);
                                    std::__1::__shared_weak_count::__release_weak()(piVar8);
                                }
                            }
                            puVar25 = puVar36 + -0x98;
                            if (puVar36[-0x12] != 0) {
                                std::__1::__shared_weak_count::__release_weak()();
                            }
                            puVar36 = puVar25;
                        } while (puVar25 != puVar24);
                    }
                }
                if (puVar24 != NULL) {
                    (**(**(iVar32 + 0x518) + 0x28))(*(iVar32 + 0x518), puVar24, iVar6 - puVar24);
                }
            }
            else {
                puVar24 = puVar36 + (uVar21 - uVar11) * 0x13;
                iVar6 = uVar11 * -0x98 + uVar21 * 0x98;
                do {
                    if (puVar36 != NULL) {
                        puVar36[0x12] = 0;
                        puVar36[0xf] = 0;
                        puVar36[0xe] = 0;
                        puVar36[0x11] = 0;
                        puVar36[0x10] = 0;
                        puVar36[0xb] = 0;
                        puVar36[10] = 0;
                        puVar36[0xd] = 0;
                        puVar36[0xc] = 0;
                        puVar36[7] = 0;
                        puVar36[6] = 0;
                        puVar36[9] = 0;
                        puVar36[8] = 0;
                        puVar36[3] = 0;
                        puVar36[2] = 0;
                        puVar36[5] = 0;
                        puVar36[4] = 0;
                        puVar36[1] = 0;
                        *puVar36 = 0;
                    }
                    puVar36 = puVar36 + 0x13;
                    iVar6 = iVar6 + -0x98;
                } while (iVar6 != 0);
code_r0x000193909de8:
                *(iVar32 + 0x508) = puVar24;
            }
            iVar6 = *param_2;
            iVar9 = *(iVar6 + 0x520);
            uVar15 = (*(iVar6 + 0x528) - iVar9 >> 3) * (0x8e39 | 0x38e30000);
            if (uVar15 != 0) {
                uVar11 = 0;
                do {
                    piVar8 = iVar9 + uVar11 * 0x48;
                    uVar23 = piVar8[1];
                    if (uVar23 != 0) {
                        iVar32 = *piVar8;
                        iVar30 = *(iVar6 + 0x500);
                        uVar22 = uVar11;
                        if (uVar23 < 4) {
                            uVar28 = 0;
                        }
                        else {
                            uVar28 = uVar23 & 0xfffffffffffffffc;
                            iVar34 = iVar30 + iVar32 * 0x98;
                            uVar27 = uVar28;
                            do {
                                *(iVar34 + 0x84) = uVar22;
                                *(iVar34 + 0x11c) = uVar22;
                                *(iVar34 + 0x1b4) = uVar22;
                                *(iVar34 + 0x24c) = uVar22;
                                iVar34 = iVar34 + 0x260;
                                uVar27 = uVar27 + -4;
                            } while (uVar27 != 0);
                            if (uVar23 == uVar28) goto code_r0x000193909f84;
                        }
                        iVar34 = uVar23 - uVar28;
                        puVar26 = iVar30 + (uVar28 + iVar32) * 0x98 + 0x84;
                        do {
                            *puVar26 = uVar22;
                            iVar34 = iVar34 + -1;
                            puVar26 = puVar26 + 0x26;
                        } while (iVar34 != 0);
                    }
code_r0x000193909f84:
                    uVar11 = uVar11 + 1;
                } while (uVar11 != uVar15);
            }
            iVar9 = *(iVar6 + 0x500);
            if (*(iVar6 + 0x508) != iVar9) {
                iVar32 = 0;
                uVar11 = 0;
                do {
                    iVar30 = param_2[1];
                    if (iVar30 != 0) {
                        tmp_ldXn = *(iVar30 + 0x10);
                        iVar34 = tmp_ldXn;
                        tmp_stXn = iVar34 + 1;
                        uVar7 = tmp_stXn;
                        *(iVar30 + 0x10) = uVar7;
                        uVar7 = tmp_ldXn;
                    }
                    piVar8 = iVar9 + iVar32;
                    iVar9 = piVar8[1];
                    *piVar8 = iVar6;
                    piVar8[1] = iVar30;
                    if (iVar9 != 0) {
                        std::__1::__shared_weak_count::__release_weak()();
                    }
                    iVar6 = *param_2;
                    iVar9 = *(iVar6 + 0x500);
                    *(iVar9 + iVar32 + 0x8c) = 0xffffffffffffffff;
                    uVar11 = uVar11 + 1;
                    iVar32 = iVar32 + 0x98;
                } while (uVar11 < (*(iVar6 + 0x508) - iVar9 >> 3) * (0x286bca1b | 0x86bca1af00000000));
            }
            if (uVar21 != 0) {
                uVar11 = 0;
                uVar23 = *(pcVar29 + 0x18);
                uVar27 = *(pcVar29 + 0x10) * 8;
                iVar6 = *param_2;
                do {
                    if (uVar27 <= uVar23 + 8 && uVar23 + 8 != uVar27) {
                        uVar7 = **reloc.__stderrp;
                        goto code_r0x0001939094fc;
                    }
                    uVar15 = 0;
                    iVar9 = *piStack_190;
                    uVar28 = 8;
                    do {
                        uVar13 = 8 - (uVar23 & 7);
                        uVar12 = uVar28;
                        if (uVar13 <= uVar28) {
                            uVar12 = uVar13;
                        }
                        uVar14 = uVar12;
                        uVar15 = *(iVar9 + (uVar23 >> 3)) >> ((8 - (uVar23 & 7)) - uVar14 & 0x1f) &
                                 (-1 << (uVar14 & 0x1f) ^ 0xffffffff) | uVar15 << (uVar14 & 0x1f);
                        uVar23 = uVar12 + uVar23;
                        *(pcVar29 + 0x18) = uVar23;
                        uVar28 = uVar28 - uVar12;
                    } while (uVar28 != 0);
                    if (uVar27 <= uVar23 + 8 && uVar23 + 8 != uVar27) {
                        uVar7 = **reloc.__stderrp;
                        goto code_r0x0001939094fc;
                    }
                    uVar14 = 0;
                    uVar28 = 8;
                    do {
                        uVar13 = 8 - (uVar23 & 7);
                        uVar12 = uVar28;
                        if (uVar13 <= uVar28) {
                            uVar12 = uVar13;
                        }
                        uVar16 = uVar12;
                        uVar14 = *(iVar9 + (uVar23 >> 3)) >> ((8 - (uVar23 & 7)) - uVar16 & 0x1f) &
                                 (-1 << (uVar16 & 0x1f) ^ 0xffffffff) | uVar14 << (uVar16 & 0x1f);
                        uVar23 = uVar12 + uVar23;
                        *(pcVar29 + 0x18) = uVar23;
                        uVar28 = uVar28 - uVar12;
                    } while (uVar28 != 0);
                    if (uVar27 <= uVar23 + 8 && uVar23 + 8 != uVar27) {
                        uVar7 = **reloc.__stderrp;
                        goto code_r0x0001939094fc;
                    }
                    uVar16 = 0;
                    uVar28 = 8;
                    do {
                        uVar13 = 8 - (uVar23 & 7);
                        uVar12 = uVar28;
                        if (uVar13 <= uVar28) {
                            uVar12 = uVar13;
                        }
                        uVar19 = uVar12;
                        uVar16 = *(iVar9 + (uVar23 >> 3)) >> ((8 - (uVar23 & 7)) - uVar19 & 0x1f) &
                                 (-1 << (uVar19 & 0x1f) ^ 0xffffffff) | uVar16 << (uVar19 & 0x1f);
                        uVar23 = uVar12 + uVar23;
                        *(pcVar29 + 0x18) = uVar23;
                        uVar28 = uVar28 - uVar12;
                    } while (uVar28 != 0);
                    iVar9 = *(iVar6 + 0x500) + uVar11 * 0x98;
                    *(iVar9 + 0x80) = uVar15;
                    *(iVar9 + 0x81) = uVar14;
                    *(iVar9 + 0x82) = uVar16;
                    *(iVar9 + 0x83) = 0xff;
                    uVar11 = uVar11 + 1;
                } while (uVar11 != uVar21);
            }
            iVar6 = *(*param_2 + 0x500);
            uVar21 = bool geo::codec::decodeAttributeSet<GeoCodecsFeature>(signed char, Bitstream*, unsigned int, FeatureStyleAttributesSet*, GeoCodecsFeature*, unsigned long)
                               (1, piStack_190, (*(*param_2 + 0x508) - iVar6 >> 3) * (0xca1b | 0x286b0000), &iStack_130
                                , iVar6, 0x98);
            if ((uVar21 & 1) == 0) {
                uVar7 = **reloc.__stderrp;
                goto code_r0x0001939094fc;
            }
            iStack_98 = *0x8 + -0xb0;
            pcStack_b0 = typeinfo for geo::Allocator + 0x6e8 + 0x10;
            piStack_a8 = param_2;
            uVar21 = geo::codec::_readTransitSystemsChapterLabelSet(Bitstream*, unsigned long, std::__1::function<void (unsigned long, unsigned long, char const*)>, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                               (piStack_190, 
                                (*(*param_2 + 0x508) - *(*param_2 + 0x500) >> 3) * (0x286bca1b | 0x86bca1af00000000), 
                                *0x8 + -0xb0, param_2);
            std::__1::function<void (unsigned long, unsigned long, char const*)>::~function()(*0x8 + -0xb0);
            if ((uVar21 & 1) == 0) {
                uVar7 = **reloc.__stderrp;
                goto code_r0x0001939094fc;
            }
            iStack_b8 = *0x8 + -0xd0;
            pcStack_d0 = typeinfo for geo::Allocator + 2000 + 0x10;
            piStack_c8 = param_2;
            uVar21 = geo::codec::_readTransitSystemsChapterIDSet(Bitstream*, unsigned long, std::__1::function<void (unsigned long, unsigned long long const*)>, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                               (piStack_190, 
                                (*(*param_2 + 0x508) - *(*param_2 + 0x500) >> 3) * (0x286bca1b | 0x86bca1af00000000), 
                                *0x8 + -0xd0);
            std::__1::function<void (unsigned long, unsigned long long const*)>::~function()(*0x8 + -0xd0);
            if ((uVar21 & 1) == 0) {
                uVar7 = **reloc.__stderrp;
                goto code_r0x0001939094fc;
            }
            iVar6 = *param_2;
            uVar21 = geo::codec::_convertTransitLineKeys(GeoCodecsPBTransitLineKey**, unsigned long, unsigned long**, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                               (iVar6 + 0x650, *(iVar6 + 0x660), iVar6 + 0x658, param_2);
            if ((uVar21 & 1) == 0) {
                uVar7 = **reloc.__stderrp;
                goto code_r0x0001939094fc;
            }
            iVar6 = *param_2;
            uVar21 = geo::codec::_convertTransitLineKeys(GeoCodecsPBTransitLineKey**, unsigned long, unsigned long**, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                               (iVar6 + 0x638, *(iVar6 + 0x648), iVar6 + 0x640, param_2);
            if ((uVar21 & 1) == 0) {
                uVar7 = **reloc.__stderrp;
                goto code_r0x0001939094fc;
            }
            cStack_151 = '\0';
            uVar21 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &cStack_151);
            if ((uVar21 & 1) == 0) {
                uVar7 = **reloc.__stderrp;
                goto code_r0x0001939094fc;
            }
            if (cStack_151 != '\0') {
                uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                uVar21 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)(piStack_190, &uStack_f8, 5);
                if ((uVar21 & 1) == 0) {
                    uVar7 = **reloc.__stderrp;
                }
                else {
                    uStack_158 = 0;
                    uVar21 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(piStack_190, &uStack_158);
                    if ((uVar21 & 1) != 0) {
                        apuStack_170[0] = NULL;
                        iVar4 = geo::codec::_makeSpaceForShields(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                          (uStack_158, apuStack_170, param_2);
                        if (iVar4 == 0) {
                            uVar7 = **reloc.__stderrp;
                        }
                        else {
                            puVar10 = apuStack_170[0];
                            iVar6 = *param_2;
                            iVar9 = *(iVar6 + 0x500);
                            if (*(iVar6 + 0x508) != iVar9) {
                                iVar32 = 0;
                                uVar21 = 0;
                                uVar22 = uStack_f8;
                                do {
                                    uStack_160 = (uStack_160 >> 8) << 8;
                                    uVar11 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &uStack_160);
                                    if ((uVar11 & 1) == 0) {
                                        uVar7 = **reloc.__stderrp;
                                        goto code_r0x00019390aa64;
                                    }
                                    if (uStack_160 != '\0') {
                                        uStack_15c = 0;
                                        iVar4 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                          (piStack_190, &uStack_15c, uVar22);
                                        if ((iVar4 == 0) || (iVar6 = *param_2,  *(iVar6 + 0x430) <= puVar10))
                                        goto code_r0x00019390aa58;
                                        *(iVar9 + iVar32 + 0x28) = puVar10;
                                        *(iVar9 + iVar32 + 0x30) = 1;
                                        *(*(iVar6 + 0x428) + puVar10 * 0x20 + 0x18) = uStack_15c;
                                        puVar10 = puVar10 + 1;
                                    }
                                    uVar21 = uVar21 + 1;
                                    iVar6 = *param_2;
                                    iVar9 = *(iVar6 + 0x500);
                                    iVar32 = iVar32 + 0x98;
                                } while (uVar21 < (*(iVar6 + 0x508) - iVar9 >> 3) * (0x286bca1b | 0x86bca1af00000000));
                            }
                            if (puVar10 != *(iVar6 + 0x430)) {
                                uVar7 = **reloc.__stderrp;
                            }
                            else {
                                iVar9 = *(iVar6 + 0x358);
                                iVar6 = *(iVar6 + 0x360);
                                uStack_15c = 0;
                                iVar4 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                  (piStack_190, &uStack_15c, 5);
                                if (iVar4 != 0) {
                                    iVar32 = *(*param_2 + 0x500);
                                    if (*(*param_2 + 0x508) != iVar32) {
                                        iVar30 = 0;
                                        uVar21 = 0;
                                        uVar11 = iVar6 - iVar9;
                                        uVar15 = uStack_15c;
                                        do {
                                            uStack_178 = (uStack_178 >> 8) << 8;
                                            uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &uStack_178);
                                            if ((uVar23 & 1) == 0) {
                                                uVar7 = **reloc.__stderrp;
                                                goto code_r0x00019390aa64;
                                            }
                                            if (uStack_178 != '\0') {
                                                uStack_160 = 0;
                                                uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                   (piStack_190, &uStack_160, uVar15);
                                                if ((((uVar23 & 1) == 0) ||
                                                    (uVar23 = uStack_160,  uVar11 < uVar23 || uVar11 == uVar23)) ||
                                                   (*(iVar32 + iVar30 + 0x30) == 0)) goto code_r0x00019390aa58;
                                                iVar32 = *(iVar32 + iVar30 + 0x28);
                                                iVar6 = *param_2;
                                                *(*(iVar6 + 0x428) + iVar32 * 0x20) = iVar9 + uVar23;
                                                uVar7 = geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                                  (uVar23, *(iVar6 + 0x378), *(iVar6 + 0x380));
                                                *(*(*param_2 + 0x428) + iVar32 * 0x20 + 8) = uVar7;
                                            }
                                            uVar21 = uVar21 + 1;
                                            iVar32 = *(*param_2 + 0x500);
                                            iVar30 = iVar30 + 0x98;
                                        } while (uVar21 < (*(*param_2 + 0x508) - iVar32 >> 3) *
                                                          (0x286bca1b | 0x86bca1af00000000));
                                    }
                                    piVar37 = &iStack_130;
                                    goto code_r0x00019390a6ac;
                                }
                                uVar7 = **reloc.__stderrp;
                            }
                        }
                        goto code_r0x00019390aa64;
                    }
                    uVar7 = **reloc.__stderrp;
                }
                goto code_r0x0001939094fc;
            }
code_r0x00019390a6ac:
            uStack_158 = (uStack_158 >> 8) << 8;
            uVar21 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &uStack_158);
            if ((uVar21 & 1) == 0) {
                uVar7 = **reloc.__stderrp;
                goto code_r0x0001939094fc;
            }
            if (uStack_158 != '\0') {
                apuStack_170[0] = (apuStack_170[0] >> 0x20) << 0x20;
                uVar21 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piStack_190, apuStack_170, 5);
                if ((uVar21 & 1) != 0) {
                    if (*(*param_2 + 0x508) != *(*param_2 + 0x500)) {
                        uVar21 = 0;
                        iVar4 = apuStack_170[0];
                        iVar6 = 0x88;
                        do {
                            uStack_15c = (uStack_15c >> 8) << 8;
                            uVar11 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &uStack_15c);
                            if ((uVar11 & 1) == 0) {
                                uVar7 = **reloc.__stderrp;
                                goto code_r0x00019390a94c;
                            }
                            if (uStack_15c != '\0') {
                                uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                                iVar5 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                  (piStack_190, &uStack_f8, iVar4 + 1);
                                if (iVar5 == 0) {
                                    uVar7 = **reloc.__stderrp;
                                    goto code_r0x00019390a94c;
                                }
                                fVar38 = NEON_ucvtf(uStack_f8);
                                *(*(*param_2 + 0x500) + iVar6) = fVar38 * (0xcccd | 0x3dcc0000);
                            }
                            uVar21 = uVar21 + 1;
                            iVar6 = iVar6 + 0x98;
                        } while (uVar21 < (*(*param_2 + 0x508) - *(*param_2 + 0x500) >> 3) *
                                          (0x286bca1b | 0x86bca1af00000000));
                    }
                    goto code_r0x00019390a7b4;
                }
                uVar7 = **reloc.__stderrp;
code_r0x00019390a94c:
                fprintf(uVar7, 0x8ff + 0x193b8a000);
                piVar37 = &iStack_130;
                uVar7 = 0;
joined_r0x00019390b180:
                if (param_1 == NULL) goto code_r0x000193909584;
                goto code_r0x00019390951c;
            }
code_r0x00019390a7b4:
            if ((0x14 < *(pcVar29 + 0x40)) && (*(*param_2 + 0x528) != *(*param_2 + 0x520))) {
                uVar21 = 0;
                do {
                    uStack_f8 = (uStack_f8 >> 8) << 8;
                    uVar11 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &uStack_f8);
                    if ((uVar11 & 1) == 0) {
                        uVar7 = **reloc.__stderrp;
                        goto code_r0x00019390aa64;
                    }
                    if ((uStack_f8 != '\0') && (piVar37 = *(*param_2 + 0x520) + uVar21 * 0x48,  piVar37[1] != 0)) {
                        uVar11 = 0;
                        do {
                            uStack_158 = (uStack_158 >> 8) << 8;
                            uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &uStack_158);
                            if ((uVar23 & 1) == 0) {
                                uVar7 = **reloc.__stderrp;
                                goto code_r0x00019390aa64;
                            }
                            if (uStack_158 != '\0') {
                                apuStack_170[0] = (apuStack_170[0] >> 0x20) << 0x20;
                                iVar4 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                  (piStack_190, apuStack_170, 8);
                                if (iVar4 == 0) {
                                    uVar7 = **reloc.__stderrp;
                                    goto code_r0x00019390aa64;
                                }
                                *(*(*param_2 + 0x500) + (uVar11 + *piVar37) * 0x98 + 0x83) = apuStack_170[0];
                            }
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < piVar37[1]);
                    }
                    uVar21 = uVar21 + 1;
                } while (uVar21 < (*(*param_2 + 0x528) - *(*param_2 + 0x520) >> 3) * (0x38e38e39 | 0x8e38e38e00000000));
            }
            apuStack_170[0] = (apuStack_170[0] >> 8) << 8;
            uVar21 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, apuStack_170);
            if ((uVar21 & 1) == 0) {
code_r0x00019390aa58:
                uVar7 = **reloc.__stderrp;
            }
            else {
                if (apuStack_170[0] != '\0') {
                    iVar6 = *param_2;
                    uVar21 = bool geo::codec::decodeAttributeSet<GeoCodecsPBTransitSystemInfo>(signed char, Bitstream*, unsigned int, FeatureStyleAttributesSet*, GeoCodecsPBTransitSystemInfo*, unsigned long)
                                       (0xffffffff, piStack_190, 
                                        (*(iVar6 + 0x528) - *(iVar6 + 0x520) >> 3) * (0x8e39 | 0x38e30000), 
                                        iVar6 + 0x458, *(iVar6 + 0x520), 0x48);
                    if ((uVar21 & 1) == 0) goto code_r0x00019390aa58;
                }
                iVar6 = *param_2;
                iVar9 = *(iVar6 + 0x520);
                if (*(iVar6 + 0x528) == iVar9) {
                    uVar21 = 0;
                }
                else {
                    uVar11 = 0;
                    do {
                        piVar37 = iVar9 + uVar11 * 0x48;
                        if (piVar37[1] != 0) {
                            uVar21 = 0;
                            do {
                                apuStack_170[0] = NULL;
                                apuStack_170[1] = NULL;
                                uVar23 = geo::codec::appendStyleAttributes(std::__1::shared_ptr<FeatureStyleAttributes> const&, std::__1::shared_ptr<FeatureStyleAttributes> const&, std::__1::shared_ptr<FeatureStyleAttributes>&, FeatureStyleAttributesSet&)
                                                   (apuStack_170, iVar9 + uVar11 * 0x48 + 0x18, 
                                                    *(*param_2 + 0x500) + (uVar21 + *piVar37) * 0x98 + 0x68, 
                                                    *param_2 + 0x458);
                                std::__1::shared_ptr<FeatureStyleAttributes>::~shared_ptr[abi:v160006]()(apuStack_170);
                                if ((uVar23 & 1) == 0) {
                                    uVar7 = **reloc.__stderrp;
                                    goto code_r0x00019390aa64;
                                }
                                uVar21 = uVar21 + 1;
                            } while (uVar21 < piVar37[1]);
                            iVar6 = *param_2;
                        }
                        uVar11 = uVar11 + 1;
                        iVar9 = *(iVar6 + 0x520);
                        uVar21 = (*(iVar6 + 0x528) - iVar9 >> 3) * (0x38e38e39 | 0x8e38e38e00000000);
                    } while (uVar11 < uVar21);
                }
                puStack_d8 = &uStack_f8 + 1;
                pcStack_f0 = typeinfo for geo::Allocator + 0x850 + 0x10;
                piStack_e8 = param_2;
                uVar21 = geo::codec::_readTransitSystemsChapterLabelSet(Bitstream*, unsigned long, std::__1::function<void (unsigned long, unsigned long, char const*)>, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                   (piStack_190, uVar21, &uStack_f8 + 1, param_2);
                std::__1::function<void (unsigned long, unsigned long, char const*)>::~function()(&uStack_f8 + 1);
                if ((uVar21 & 1) == 0) {
                    uVar7 = **reloc.__stderrp;
                }
                else {
                    uStack_160 = (uStack_160 >> 8) << 8;
                    uVar21 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &uStack_160);
                    if ((uVar21 & 1) == 0) {
                        uVar7 = **reloc.__stderrp;
                    }
                    else if (uStack_160 == '\0') {
                        iVar6 = *param_2;
code_r0x00019390abf0:
                        uVar21 = geo::codec::_convertTransitLineKeys(GeoCodecsPBTransitLineKey**, unsigned long, unsigned long**, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                           (iVar6 + 0x560, *(iVar6 + 0x570), iVar6 + 0x568, param_2);
                        if ((uVar21 & 1) == 0) {
                            uVar7 = **reloc.__stderrp;
                        }
                        else {
                            if (*(pcVar29 + 0x40) < 0x2c) goto code_r0x00019390b15c;
                            apuStack_170[0] = (apuStack_170[0] >> 0x20) << 0x20;
                            uVar21 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                               (piStack_190, apuStack_170, 5);
                            if ((uVar21 & 1) == 0) {
                                uVar7 = **reloc.__stderrp;
                            }
                            else {
                                uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                                uVar21 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                   (piStack_190, &uStack_f8, 5);
                                if ((uVar21 & 1) == 0) {
                                    uVar7 = **reloc.__stderrp;
                                }
                                else {
                                    cStack_171 = '\0';
                                    uVar21 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &cStack_171);
                                    if ((uVar21 & 1) == 0) {
                                        uVar7 = **reloc.__stderrp;
                                    }
                                    else if (cStack_171 == '\0') {
code_r0x00019390adc4:
                                        if (*(pcVar29 + 0x40) < 0x2e) goto code_r0x00019390b15c;
                                        apuStack_170[0] = (apuStack_170[0] >> 0x20) << 0x20;
                                        uVar21 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                           (piStack_190, apuStack_170, 5);
                                        if ((uVar21 & 1) == 0) {
                                            uVar7 = **reloc.__stderrp;
                                        }
                                        else {
                                            uStack_158 = (uStack_158 >> 8) << 8;
                                            uVar21 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &uStack_158);
                                            if ((uVar21 & 1) != 0) {
                                                if (uStack_158 != '\0') {
                                                    iVar6 = *param_2;
                                                    iVar9 = *(iVar6 + 0x520);
                                                    if (*(iVar6 + 0x528) != iVar9) {
                                                        uVar21 = 0;
                                                        uVar22 = apuStack_170[0];
                                                        do {
                                                            piVar37 = iVar9 + uVar21 * 0x48;
                                                            if (piVar37[1] != 0) {
                                                                uVar11 = 0;
                                                                do {
                                                                    uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                                                                    iVar4 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piStack_190, &uStack_f8, uVar22);
                                                            if (iVar4 == 0) {
                                                                uVar7 = **reloc.__stderrp;
                                                                goto code_r0x00019390aa64;
                                                            }
                                                            iVar6 = *param_2;
                                                            *(*(iVar6 + 0x500) + (uVar11 + *piVar37) * 0x98 + 0x94) =
                                                                 uStack_f8;
                                                            uVar11 = uVar11 + 1;
                                                            } while (uVar11 < piVar37[1]);
                                                            }
                                                            uVar21 = uVar21 + 1;
                                                            iVar9 = *(iVar6 + 0x520);
                                                        } while (uVar21 < (*(iVar6 + 0x528) - iVar9 >> 3) *
                                                                          (0x38e38e39 | 0x8e38e38e00000000));
                                                    }
                                                }
                                                if (0x2f < *(pcVar29 + 0x40)) {
                                                    uStack_158 = (uStack_158 >> 8) << 8;
                                                    uVar21 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                       (piStack_190, &uStack_158);
                                                    if ((uVar21 & 1) == 0) {
                                                        uVar7 = **reloc.__stderrp;
                                                        goto code_r0x00019390aa64;
                                                    }
                                                    if (uStack_158 != '\0') {
                                                        apuStack_170[0] = (apuStack_170[0] >> 0x20) << 0x20;
                                                        iVar4 = 
                                                            BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                                      (piStack_190, apuStack_170, 5);
                                                        if (iVar4 == 0) {
                                                            uVar7 = **reloc.__stderrp;
                                                            goto code_r0x00019390aa64;
                                                        }
                                                        if (*(*param_2 + 0x528) != *(*param_2 + 0x520)) {
                                                            uVar21 = 0;
                                                            uVar22 = apuStack_170[0];
                                                            iVar6 = 0x40;
                                                            do {
                                                                uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                                                                iVar4 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piStack_190, &uStack_f8, uVar22);
                                                            if (iVar4 == 0) {
                                                                uVar7 = **reloc.__stderrp;
                                                                goto code_r0x00019390aa64;
                                                            }
                                                            iVar9 = *param_2;
                                                            iVar32 = *(iVar9 + 0x520);
                                                            *(iVar32 + iVar6) = uStack_f8;
                                                            uVar21 = uVar21 + 1;
                                                            iVar6 = iVar6 + 0x48;
                                                            } while (uVar21 < (*(iVar9 + 0x528) - iVar32 >> 3) *
                                                                              (0x38e38e39 | 0x8e38e38e00000000));
                                                        }
                                                    }
                                                }
code_r0x00019390b15c:
                                                iVar6 = *(pcVar29 + 0x30) + (*(pcVar29 + 0x18) >> 3);
                                                if ((*(pcVar29 + 0x18) & 7) != 0) {
                                                    iVar6 = iVar6 + 1;
                                                }
                                                *(pcVar29 + 0x30) = iVar6;
                                                pcVar29[0x20] = '\0';
                                                uVar7 = 1;
                                                piVar37 = &iStack_130;
                                                goto joined_r0x00019390b180;
                                            }
                                            uVar7 = **reloc.__stderrp;
                                        }
                                    }
                                    else {
                                        uStack_158 = 0;
                                        uVar21 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                           (piStack_190, &uStack_158, 5);
                                        if ((uVar21 & 1) == 0) {
                                            uVar7 = **reloc.__stderrp;
                                        }
                                        else {
                                            uStack_15c = 0;
                                            uVar21 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                               (piStack_190, &uStack_15c, 5);
                                            if ((uVar21 & 1) == 0) {
                                                uVar7 = **reloc.__stderrp;
                                            }
                                            else {
                                                uStack_160 = 0;
                                                iVar4 = BitstreamUnpackVar32(Bitstream*, unsigned int*)
                                                                  (piStack_190, &uStack_160);
                                                uVar14 = uStack_158;
                                                uVar15 = uStack_15c;
                                                if (iVar4 != 0) {
                                                    uVar16 = uStack_160;
                                                    if (uVar16 != 0) {
                                                        uVar19 = 0;
                                                        uVar22 = apuStack_170[0];
                                                        uVar1 = uStack_f8;
                                                        do {
                                                            uStack_178 = 0;
                                                            iVar4 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piStack_190, &uStack_178, uVar14);
                                                            if (iVar4 == 0) goto code_r0x00019390aa58;
                                                            uVar31 = uStack_178;
                                                            if (uVar31 + 1 == 0) goto code_r0x00019390aa58;
                                                            auStack_184[2] = 0;
                                                            iVar4 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piStack_190, auStack_184 + 2, uVar15);
                                                            if (iVar4 == 0) {
                                                                uVar7 = **reloc.__stderrp;
                                                                goto code_r0x00019390aa64;
                                                            }
                                                            iVar4 = auStack_184[2];
                                                            if (iVar4 != 0) {
                                                                do {
                                                                    auStack_184[1] = 0;
                                                                    iVar5 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piStack_190, auStack_184 + 1, uVar22);
                                                            if (iVar5 == 0) goto code_r0x00019390aa58;
                                                            uVar11 = auStack_184[1];
                                                            iVar6 = *(*param_2 + 0x520);
                                                            uVar21 = (*(*param_2 + 0x528) - iVar6 >> 3) *
                                                                     (0x38e38e39 | 0x8e38e38e00000000);
                                                            if (uVar21 < uVar11 || uVar21 - uVar11 == 0)
                                                            goto code_r0x00019390aa58;
                                                            auStack_184[0] = 0;
                                                            iVar5 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piStack_190, auStack_184, uVar1);
                                                            if (iVar5 == 0) goto code_r0x00019390aa58;
                                                            piVar37 = iVar6 + uVar11 * 0x48;
                                                            uVar21 = auStack_184[0];
                                                            uVar11 = piVar37[1];
                                                            if (uVar11 < uVar21 || uVar11 == uVar21)
                                                            goto code_r0x00019390aa58;
                                                            iVar6 = *(*param_2 + 0x500) + (*piVar37 + uVar21) * 0x98;
                                                            uVar2 = *(iVar6 + 0x90);
                                                            bVar3 = true;
                                                            if (uVar2 + 1 != 0) {
                                                                bVar3 = uVar2 == uVar31;
                                                            }
                                                            if (!bVar3) goto code_r0x00019390aa58;
                                                            *(iVar6 + 0x90) = uVar31;
                                                            iVar4 = iVar4 + -1;
                                                            } while (iVar4 != 0);
                                                            }
                                                            uVar19 = uVar19 + 1;
                                                        } while (uVar19 != uVar16);
                                                    }
                                                    goto code_r0x00019390adc4;
                                                }
                                                uVar7 = **reloc.__stderrp;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else {
                        uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                        uVar21 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                           (piStack_190, &uStack_f8, 5);
                        if ((uVar21 & 1) == 0) {
                            uVar7 = **reloc.__stderrp;
                        }
                        else {
                            uStack_158 = 0;
                            uVar21 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(piStack_190, &uStack_158);
                            if ((uVar21 & 1) == 0) {
                                uVar7 = **reloc.__stderrp;
                            }
                            else {
                                apuStack_170[0] = NULL;
                                uVar21 = geo::codec::_makeSpaceForLabels(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                                   (uStack_158, apuStack_170, param_2);
                                if ((uVar21 & 1) == 0) {
                                    uVar7 = **reloc.__stderrp;
                                }
                                else {
                                    iVar6 = *param_2;
                                    puVar10 = apuStack_170[0];
                                    iVar9 = *(iVar6 + 0x500);
                                    if (*(iVar6 + 0x508) != iVar9) {
                                        uVar21 = 0;
                                        iVar30 = *(iVar6 + 0x358);
                                        uVar11 = *(iVar6 + 0x360) - iVar30;
                                        uVar22 = uStack_f8;
                                        iVar32 = 0x8c;
                                        do {
                                            uStack_178 = (uStack_178 >> 8) << 8;
                                            uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_190, &uStack_178);
                                            if ((uVar23 & 1) == 0) {
                                                uVar7 = **reloc.__stderrp;
                                                goto code_r0x00019390aa64;
                                            }
                                            if (uStack_178 == '\0') {
                                                iVar6 = *param_2;
                                            }
                                            else {
                                                uStack_15c = 0;
                                                uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                   (piStack_190, &uStack_15c, uVar22);
                                                if (((uVar23 & 1) == 0) ||
                                                   (uVar23 = uStack_15c,  uVar11 < uVar23 || uVar11 == uVar23))
                                                goto code_r0x00019390aa58;
                                                *(iVar9 + iVar32) = puVar10;
                                                iVar6 = *param_2;
                                                *(*(iVar6 + 0x418) + puVar10 * 0x18) = iVar30 + uVar23;
                                                uVar7 = geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                                  (uVar23, *(iVar6 + 0x378), *(iVar6 + 0x380));
                                                iVar6 = *param_2;
                                                *(*(iVar6 + 0x418) + puVar10 * 0x18 + 8) = uVar7;
                                                puVar10 = puVar10 + 1;
                                            }
                                            uVar21 = uVar21 + 1;
                                            iVar9 = *(iVar6 + 0x500);
                                            iVar32 = iVar32 + 0x98;
                                        } while (uVar21 < (*(iVar6 + 0x508) - iVar9 >> 3) *
                                                          (0x286bca1b | 0x86bca1af00000000));
                                    }
                                    if (puVar10 == *(iVar6 + 0x420)) goto code_r0x00019390abf0;
                                    uVar7 = **reloc.__stderrp;
                                }
                            }
                        }
                    }
                }
            }
code_r0x00019390aa64:
            fprintf(uVar7, 0x8ff + 0x193b8a000);
            uVar7 = 0;
            piVar37 = &iStack_130;
            if (param_1 != NULL) goto code_r0x00019390951c;
        }
        else {
            uVar11 = 0;
            pcVar29[0x20] = '\x01';
            *(pcVar29 + 0x10) = iVar6;
            *(pcVar29 + 0x18) = 0;
            *(pcVar29 + 8) = *(pcVar29 + 0x28) + uVar21;
            uVar21 = iVar6 * 8;
            if (5 < uVar21 || uVar21 == 5) goto code_r0x000193909480;
code_r0x0001939094ec:
            uVar7 = **reloc.__stderrp;
code_r0x0001939094fc:
            fprintf(uVar7, 0x8ff + 0x193b8a000);
            uVar7 = 0;
            if (param_1 != NULL) {
code_r0x00019390951c:
                if (*pcVar29 != '\0') {
                    piVar8 = geo::codec::Allocator::instance()();
                    (**(*piVar8 + 0x28))(piVar8, *(pcVar29 + 0x28), 0);
                }
                piVar8 = geo::codec::Allocator::instance()();
                (**(*piVar8 + 0x28))(piVar8, pcVar29, 0);
            }
        }
code_r0x000193909584:
        iVar30 = iStack_150;
        iVar32 = iStack_148;
        iVar6 = iStack_138;
        iVar9 = std::__1::chrono::steady_clock::now()();
        piVar37[7] = iVar30;
        if (iVar30 == 0) goto code_r0x000193909600;
    }
    apuStack_170[0] = &uStack_f8;
    iVar32 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iVar32 + 0x778, &uStack_f8, 0x74c + 0x193af9000, apuStack_170, &uStack_158);
    iVar6 = SUB168(SEXT816(iVar9 - iVar6) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar32 + 0x20) = ((iVar6 >> 7) - (iVar6 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x000193909600:
    piVar37 = piStack_140;
    if (piVar37 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_140[1];
        iVar6 = tmp_ldXn;
        tmp_stXn = iVar6 + -1;
        iVar6 = tmp_stXn;
        piStack_140[1] = iVar6;
        iVar6 = tmp_ldXn;
        LORelease();
        if (iVar6 == 0) {
            (**(*piVar37 + 0x10))(piVar37);
            std::__1::__shared_weak_count::__release_weak()(piVar37);
        }
    }
    FeatureStyleAttributesSet::~FeatureStyleAttributesSet()(&iStack_130);
    if (**reloc.__stack_chk_guard == iStack_70) {
        return uVar7;
    }
    // WARNING: Subroutine does not return
    __stack_chk_fail();
}
