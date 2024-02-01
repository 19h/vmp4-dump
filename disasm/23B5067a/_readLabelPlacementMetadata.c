
ulong geo::codec::_readLabelPlacementMetadata(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int32_t iVar4;
    int32_t iVar5;
    uint32_t uVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uchar *puVar13;
    code **ppcVar14;
    ulong uVar15;
    code *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    uint64_t uVar21;
    int64_t iVar22;
    uint32_t uVar23;
    uint64_t uVar24;
    uint32_t uVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    uint64_t uVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    int64_t *piVar31;
    float8 **ppfVar32;
    int64_t iVar33;
    float8 fVar34;
    uint64_t *puVar35;
    uint8_t *puVar36;
    float8 fVar37;
    float8 fVar38;
    float8 fVar39;
    float8 fVar40;
    uint32_t uStack_118;
    uint32_t uStack_10c;
    int64_t iStack_108;
    float8 **ppfStack_100;
    uint32_t uStack_f0;
    uint32_t uStack_d8;
    float8 *pfStack_d0;
    float8 **ppfStack_c0;
    uint64_t uStack_b8;
    uint32_t *puStack_b0;
    int64_t iStack_a8;
    uint8_t **ppuStack_a0;
    int32_t iStack_98;
    int64_t iStack_90;
    uchar auStack_88 [8];
    int64_t iStack_80;
    
    uVar19 = param_1[1];
    if (uVar19 != 0) {
        uVar18 = 0;
        do {
            if (*(*param_1 + uVar18 * 0x10) == 0x8d) {
                pcVar7 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar18, 0x8d, *param_2 + 0x778);
                if (pcVar7 == NULL) {
                    return 1;
                }
                iStack_a8 = *param_2;
                piVar31 = param_2[1];
                if (piVar31 != NULL) {
                    tmp_ldXn = piVar31[1];
                    iVar11 = tmp_ldXn;
                    tmp_stXn = iVar11 + 1;
                    iVar11 = tmp_stXn;
                    piVar31[1] = iVar11;
                    uVar9 = tmp_ldXn;
                }
                iVar8 = std::__1::chrono::steady_clock::now()();
                uVar19 = *(pcVar7 + 0x30);
                iVar11 = *(pcVar7 + 0x38) - uVar19;
                if (*(pcVar7 + 0x38) < uVar19) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x00019390dbc8;
                }
                puVar36 = *(pcVar7 + 0x28) + uVar19;
                ppuStack_a0 = pcVar7 + 8;
                *ppuStack_a0 = puVar36;
                pcVar7[0x20] = '\x01';
                puVar35 = pcVar7 + 0x18;
                *puVar35 = 0;
                *(pcVar7 + 0x10) = iVar11;
                uVar19 = iVar11 * 8;
                if (uVar19 != 0) {
                    uVar1 = *puVar36;
                    *puVar35 = 5;
                    uVar18 = (uVar1 >> 3) + 6;
                    if (uVar18 < uVar19 || uVar18 == uVar19) {
                        uVar3 = 0;
                        uVar18 = (uVar1 >> 3) + 1;
                        uVar21 = 5;
                        do {
                            uVar10 = 8 - (uVar21 & 7);
                            uVar30 = uVar18;
                            if (uVar10 <= uVar18) {
                                uVar30 = uVar10;
                            }
                            uVar2 = uVar30;
                            uVar3 = puVar36[uVar21 >> 3] >> ((8 - (uVar21 & 7)) - uVar2 & 0x1f) &
                                    (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                            uVar21 = uVar30 + uVar21;
                            *puVar35 = uVar21;
                            uVar18 = uVar18 - uVar30;
                        } while (uVar18 != 0);
                        *(pcVar7 + 0x40) = uVar3;
                        if (uVar19 <= uVar21 + 5 && uVar21 + 5 != uVar19) {
code_r0x00019390dbb8:
                            uVar9 = **reloc.__stderrp;
code_r0x00019390dbc8:
                            fprintf(uVar9, 0x8ff + 0x193b8a000);
                            uVar9 = 0;
                            ppfVar32 = NULL;
                            puVar36 = 0x290 + 0x1d6cc0000;
                            tmp_ldWn = *puVar36;
                            uVar3 = tmp_ldWn;
                            if ((uVar3 & 1) == 0) {
code_r0x00019390e3c4:
                                iVar4 = __cxa_guard_acquire(0x290 + 0x1d6cc0000);
                                if (iVar4 != 0) {
                                    ppcVar14 = operator new(unsigned long)(0x108);
                                    ppcVar14[1] = 0x61 + 0x193b8a000;
                                    ppcVar14[2] = 0xc36000000008 | 0x99af000000000000;
                                    ppcVar14[3] = 0x61 + 0x193b8a000;
                                    pcVar16 = *0x193af97f0;
                                    ppcVar14[5] = *0x193af97f8;
                                    ppcVar14[4] = pcVar16;
                                    *ppcVar14 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l
                                                + 0xfa8 + 0x10;
                                    ppcVar14[8] = NULL;
                                    ppcVar14[7] = NULL;
                                    ppcVar14[10] = NULL;
                                    ppcVar14[9] = NULL;
                                    ppcVar14[0xc] = NULL;
                                    ppcVar14[0xb] = NULL;
                                    ppcVar14[0xe] = NULL;
                                    ppcVar14[0xd] = NULL;
                                    ppcVar14[0x10] = NULL;
                                    ppcVar14[0xf] = NULL;
                                    ppcVar14[0x12] = NULL;
                                    ppcVar14[0x11] = NULL;
                                    ppcVar14[0x14] = NULL;
                                    ppcVar14[0x13] = NULL;
                                    ppcVar14[0x16] = NULL;
                                    ppcVar14[0x15] = NULL;
                                    ppcVar14[0x18] = NULL;
                                    ppcVar14[0x17] = NULL;
                                    ppcVar14[0x1a] = NULL;
                                    ppcVar14[0x19] = NULL;
                                    ppcVar14[0x1c] = NULL;
                                    ppcVar14[0x1b] = NULL;
                                    ppcVar14[0x1e] = NULL;
                                    ppcVar14[0x1d] = NULL;
                                    ppcVar14[0x1f] = NULL;
                                    uVar15 = pthread_rwlock_init(ppcVar14 + 7, 0);
                                    if (uVar15 != 0) {
                                        geo::read_write_lock::logFailure(int, char const*)(uVar15, 0x85 + 0x193b8a000);
                                    }
                                    pcVar16 = malloc_create_zone(0, 0);
                                    ppcVar14[6] = pcVar16;
                                    malloc_set_zone_name(pcVar16, 0x61 + 0x193b8a000);
                                    pcVar16 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                    ppcVar14[0x20] = pcVar16;
                                    *geo::codec::Allocator::instance()::alloc = ppcVar14;
                                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                                }
                            }
                        }
                        else {
                            uVar3 = 0;
                            uVar18 = 5;
                            do {
                                uVar10 = 8 - (uVar21 & 7);
                                uVar30 = uVar18;
                                if (uVar10 <= uVar18) {
                                    uVar30 = uVar10;
                                }
                                uVar2 = uVar30;
                                uVar3 = puVar36[uVar21 >> 3] >> ((8 - (uVar21 & 7)) - uVar2 & 0x1f) &
                                        (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                uVar21 = uVar30 + uVar21;
                                *puVar35 = uVar21;
                                uVar18 = uVar18 - uVar30;
                            } while (uVar18 != 0);
                            uVar18 = uVar3 + 1;
                            if (uVar19 <= uVar21 + uVar18 && uVar21 + uVar18 != uVar19) goto code_r0x00019390dbb8;
                            if (uVar3 + 1 != 0) {
                                do {
                                    uVar10 = 8 - (uVar21 & 7);
                                    uVar30 = uVar18;
                                    if (uVar10 <= uVar18) {
                                        uVar30 = uVar10;
                                    }
                                    uVar21 = uVar30 + uVar21;
                                    uVar18 = uVar18 - uVar30;
                                } while (uVar18 != 0);
                                *puVar35 = uVar21;
                            }
                            if (uVar19 <= uVar21 + 5 && uVar21 + 5 != uVar19) {
code_r0x00019390ddfc:
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x00019390dbc8;
                            }
                            uVar3 = 0;
                            uVar18 = 5;
                            do {
                                uVar10 = 8 - (uVar21 & 7);
                                uVar30 = uVar18;
                                if (uVar10 <= uVar18) {
                                    uVar30 = uVar10;
                                }
                                uVar2 = uVar30;
                                uVar3 = puVar36[uVar21 >> 3] >> ((8 - (uVar21 & 7)) - uVar2 & 0x1f) &
                                        (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                uVar21 = uVar30 + uVar21;
                                *puVar35 = uVar21;
                                uVar18 = uVar18 - uVar30;
                            } while (uVar18 != 0);
                            uVar18 = uVar3 + 1;
                            if (uVar19 <= uVar21 + uVar18 && uVar21 + uVar18 != uVar19) goto code_r0x00019390ddfc;
                            if (uVar3 + 1 == 0) {
code_r0x00019390de70:
                                uVar9 = 1;
                                goto code_r0x00019390dca4;
                            }
                            uVar3 = 0;
                            do {
                                uVar10 = 8 - (uVar21 & 7);
                                uVar30 = uVar18;
                                if (uVar10 <= uVar18) {
                                    uVar30 = uVar10;
                                }
                                uVar2 = uVar30;
                                uVar3 = puVar36[uVar21 >> 3] >> ((8 - (uVar21 & 7)) - uVar2 & 0x1f) &
                                        (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                uVar21 = uVar30 + uVar21;
                                *puVar35 = uVar21;
                                uVar18 = uVar18 - uVar30;
                            } while (uVar18 != 0);
                            if (!CARRY4(uVar3 + -5, 2)) goto code_r0x00019390de70;
                            if (uVar19 <= uVar21 + 5 && uVar21 + 5 != uVar19) {
code_r0x00019390dee8:
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x00019390dbc8;
                            }
                            uVar3 = 0;
                            uVar18 = 5;
                            do {
                                uVar10 = 8 - (uVar21 & 7);
                                uVar30 = uVar18;
                                if (uVar10 <= uVar18) {
                                    uVar30 = uVar10;
                                }
                                uVar2 = uVar30;
                                uVar3 = puVar36[uVar21 >> 3] >> ((8 - (uVar21 & 7)) - uVar2 & 0x1f) &
                                        (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                uVar21 = uVar30 + uVar21;
                                *puVar35 = uVar21;
                                uVar18 = uVar18 - uVar30;
                            } while (uVar18 != 0);
                            uVar18 = uVar3 + 1;
                            if (uVar19 <= uVar21 + uVar18 && uVar21 + uVar18 != uVar19) goto code_r0x00019390dee8;
                            if (uVar3 + 1 != 0) {
                                uVar3 = 0;
                                do {
                                    uVar30 = 8 - (uVar21 & 7);
                                    uVar19 = uVar18;
                                    if (uVar30 <= uVar18) {
                                        uVar19 = uVar30;
                                    }
                                    uVar2 = uVar19;
                                    uVar3 = puVar36[uVar21 >> 3] >> ((8 - (uVar21 & 7)) - uVar2 & 0x1f) &
                                            (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                    uVar21 = uVar19 + uVar21;
                                    *puVar35 = uVar21;
                                    uVar18 = uVar18 - uVar19;
                                } while (uVar18 != 0);
                                if (uVar3 != 0) goto code_r0x00019390de70;
                            }
                            iVar12 = *(*param_2 + 0x20);
                            iVar11 = *(*param_2 + 0x28);
                            tmp_ldWn = *(0x290 + 0x1d6cc0000);
                            uVar3 = tmp_ldWn;
                            if (((uVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar4 != 0)) {
                                ppcVar14 = operator new(unsigned long)(0x108);
                                ppcVar14[1] = 0x61 + 0x193b8a000;
                                ppcVar14[2] = 0xc36000000008 | 0x99af000000000000;
                                ppcVar14[3] = 0x61 + 0x193b8a000;
                                pcVar16 = *0x193af97f0;
                                ppcVar14[5] = *0x193af97f8;
                                ppcVar14[4] = pcVar16;
                                *ppcVar14 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                            0xfa8 + 0x10;
                                ppcVar14[8] = NULL;
                                ppcVar14[7] = NULL;
                                ppcVar14[10] = NULL;
                                ppcVar14[9] = NULL;
                                ppcVar14[0xc] = NULL;
                                ppcVar14[0xb] = NULL;
                                ppcVar14[0xe] = NULL;
                                ppcVar14[0xd] = NULL;
                                ppcVar14[0x10] = NULL;
                                ppcVar14[0xf] = NULL;
                                ppcVar14[0x12] = NULL;
                                ppcVar14[0x11] = NULL;
                                ppcVar14[0x14] = NULL;
                                ppcVar14[0x13] = NULL;
                                ppcVar14[0x16] = NULL;
                                ppcVar14[0x15] = NULL;
                                ppcVar14[0x18] = NULL;
                                ppcVar14[0x17] = NULL;
                                ppcVar14[0x1a] = NULL;
                                ppcVar14[0x19] = NULL;
                                ppcVar14[0x1c] = NULL;
                                ppcVar14[0x1b] = NULL;
                                ppcVar14[0x1e] = NULL;
                                ppcVar14[0x1d] = NULL;
                                ppcVar14[0x1f] = NULL;
                                uVar9 = pthread_rwlock_init(ppcVar14 + 7, 0);
                                if (uVar9 != 0) {
                                    geo::read_write_lock::logFailure(int, char const*)(uVar9, 0x85 + 0x193b8a000);
                                }
                                pcVar16 = malloc_create_zone(0, 0);
                                ppcVar14[6] = pcVar16;
                                malloc_set_zone_name(pcVar16, 0x61 + 0x193b8a000);
                                pcVar16 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                ppcVar14[0x20] = pcVar16;
                                *geo::codec::Allocator::instance()::alloc = ppcVar14;
                                __cxa_guard_release(0x290 + 0x1d6cc0000);
                            }
                            iVar33 = 0x1d6cc0000;
                            puVar13 = (**(**(iVar33 + 0x288) + 0x18))(*(iVar33 + 0x288), 0x18, 1);
                            iVar20 = *param_2;
                            *(iVar20 + 0x710) = puVar13;
                            if (puVar13 == NULL) {
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x00019390dbc8;
                            }
                            *puVar13 = 0;
                            uVar21 = *(pcVar7 + 0x18);
                            uVar19 = uVar21 + 1;
                            uVar18 = *(pcVar7 + 0x10) * 8;
                            if (uVar18 <= uVar19 && uVar19 != uVar18) {
                                uVar9 = **reloc.__stderrp;
                                goto code_r0x00019390e390;
                            }
                            puVar36 = *ppuStack_a0;
                            uVar1 = puVar36[uVar21 >> 3];
                            *puVar35 = uVar19;
                            if ((uVar1 >> (7 & (uVar21 ^ 0xffffffff)) & 1) == 0) {
                                uVar9 = 1;
                                goto code_r0x00019390dca4;
                            }
                            if (uVar21 + 0x41 < uVar18 || uVar21 + 0x41 == uVar18) {
                                fVar34 = 0.0;
                                uVar21 = 0x40;
                                do {
                                    uVar10 = 8 - (uVar19 & 7);
                                    uVar30 = uVar21;
                                    if (uVar10 <= uVar21) {
                                        uVar30 = uVar10;
                                    }
                                    fVar34 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar30 & 0x3f) &
                                             (-1L << (uVar30 & 0x3f) ^ 0xffffffffffffffffU) | fVar34 << (uVar30 & 0x3f);
                                    uVar19 = uVar30 + uVar19;
                                    *puVar35 = uVar19;
                                    uVar21 = uVar21 - uVar30;
                                } while (uVar21 != 0);
                                if (uVar18 <= uVar19 + 6 && uVar19 + 6 != uVar18) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019390e390;
                                }
                                uVar3 = 0;
                                uVar21 = 6;
                                do {
                                    uVar10 = 8 - (uVar19 & 7);
                                    uVar30 = uVar21;
                                    if (uVar10 <= uVar21) {
                                        uVar30 = uVar10;
                                    }
                                    uVar2 = uVar30;
                                    uVar3 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar2 & 0x1f) &
                                            (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                    uVar19 = uVar30 + uVar19;
                                    *puVar35 = uVar19;
                                    uVar21 = uVar21 - uVar30;
                                } while (uVar21 != 0);
                                if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019390e390;
                                }
                                uVar2 = 0;
                                puStack_b0 = uVar3 + 1;
                                uVar21 = 5;
                                do {
                                    uVar10 = 8 - (uVar19 & 7);
                                    uVar30 = uVar21;
                                    if (uVar10 <= uVar21) {
                                        uVar30 = uVar10;
                                    }
                                    uVar3 = uVar30;
                                    uVar2 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar3 & 0x1f) &
                                            (-1 << (uVar3 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar3 & 0x1f);
                                    uVar19 = uVar30 + uVar19;
                                    *puVar35 = uVar19;
                                    uVar21 = uVar21 - uVar30;
                                } while (uVar21 != 0);
                                if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019390e390;
                                }
                                uVar3 = 0;
                                uStack_b8 = uVar2 + 1;
                                uVar21 = 5;
                                do {
                                    uVar10 = 8 - (uVar19 & 7);
                                    uVar30 = uVar21;
                                    if (uVar10 <= uVar21) {
                                        uVar30 = uVar10;
                                    }
                                    uVar2 = uVar30;
                                    uVar3 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar2 & 0x1f) &
                                            (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                    uVar19 = uVar30 + uVar19;
                                    *puVar35 = uVar19;
                                    uVar21 = uVar21 - uVar30;
                                } while (uVar21 != 0);
                                if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019390e390;
                                }
                                uVar2 = 0;
                                ppfStack_c0 = uVar3 + 1;
                                uVar21 = 5;
                                do {
                                    uVar10 = 8 - (uVar19 & 7);
                                    uVar30 = uVar21;
                                    if (uVar10 <= uVar21) {
                                        uVar30 = uVar10;
                                    }
                                    uVar3 = uVar30;
                                    uVar2 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar3 & 0x1f) &
                                            (-1 << (uVar3 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar3 & 0x1f);
                                    uVar19 = uVar30 + uVar19;
                                    *puVar35 = uVar19;
                                    uVar21 = uVar21 - uVar30;
                                } while (uVar21 != 0);
                                if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019390e390;
                                }
                                uVar3 = 0;
                                iVar4 = uVar2 + 1;
                                uVar21 = 5;
                                do {
                                    uVar10 = 8 - (uVar19 & 7);
                                    uVar30 = uVar21;
                                    if (uVar10 <= uVar21) {
                                        uVar30 = uVar10;
                                    }
                                    uVar2 = uVar30;
                                    uVar3 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar2 & 0x1f) &
                                            (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                    uVar19 = uVar30 + uVar19;
                                    *puVar35 = uVar19;
                                    uVar21 = uVar21 - uVar30;
                                } while (uVar21 != 0);
                                if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
code_r0x00019390e380:
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019390e390;
                                }
                                uVar2 = 0;
                                pfStack_d0 = uVar3 + 1;
                                uVar21 = 5;
                                do {
                                    uVar10 = 8 - (uVar19 & 7);
                                    uVar30 = uVar21;
                                    if (uVar10 <= uVar21) {
                                        uVar30 = uVar10;
                                    }
                                    uVar3 = uVar30;
                                    uVar2 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar3 & 0x1f) &
                                            (-1 << (uVar3 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar3 & 0x1f);
                                    uVar19 = uVar30 + uVar19;
                                    *puVar35 = uVar19;
                                    uVar21 = uVar21 - uVar30;
                                } while (uVar21 != 0);
                                uVar21 = uVar2 + 1;
                                if (uVar18 <= uVar19 + uVar21 && uVar19 + uVar21 != uVar18) goto code_r0x00019390e380;
                                uVar3 = 0;
                                if (uVar2 + 1 != 0) {
                                    do {
                                        uVar10 = 8 - (uVar19 & 7);
                                        uVar30 = uVar21;
                                        if (uVar10 <= uVar21) {
                                            uVar30 = uVar10;
                                        }
                                        uVar2 = uVar30;
                                        uVar3 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar2 & 0x1f) &
                                                (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                        uVar19 = uVar30 + uVar19;
                                        *puVar35 = uVar19;
                                        uVar21 = uVar21 - uVar30;
                                    } while (uVar21 != 0);
                                }
                                uVar19 = uVar19 + uVar3;
                                if (uVar18 <= uVar19 && uVar19 != uVar18) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019390e390;
                                }
                                *puVar35 = uVar19;
                                iStack_98 = iVar4;
                                if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
code_r0x00019390e7cc:
                                    uVar9 = **reloc.__stderrp;
                                    iStack_98 = iVar4;
                                    goto code_r0x00019390e390;
                                }
                                uVar3 = 0;
                                uVar21 = 5;
                                do {
                                    uVar10 = 8 - (uVar19 & 7);
                                    uVar30 = uVar21;
                                    if (uVar10 <= uVar21) {
                                        uVar30 = uVar10;
                                    }
                                    uVar2 = uVar30;
                                    uVar3 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar2 & 0x1f) &
                                            (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
                                    uVar19 = uVar30 + uVar19;
                                    *puVar35 = uVar19;
                                    uVar21 = uVar21 - uVar30;
                                } while (uVar21 != 0);
                                uVar21 = uVar3 + 1;
                                if (uVar18 <= uVar19 + uVar21 && uVar19 + uVar21 != uVar18) goto code_r0x00019390e7cc;
                                if (uVar3 + 1 == 0) {
code_r0x00019390ec64:
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019390e390;
                                }
                                uVar3 = 0;
                                do {
                                    uVar30 = 8 - (uVar19 & 7);
                                    uVar18 = uVar21;
                                    if (uVar30 <= uVar21) {
                                        uVar18 = uVar30;
                                    }
                                    uVar2 = uVar18;
                                    uVar3 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar2 & 0x3f) &
                                            ~(-1 << (uVar2 & 0x1f)) | uVar3 << (uVar2 & 0x1f);
                                    uVar19 = uVar18 + uVar19;
                                    *puVar35 = uVar19;
                                    uVar21 = uVar21 - uVar18;
                                } while (uVar21 != 0);
                                if (uVar3 == 0) goto code_r0x00019390ec64;
                                *(iVar20 + 0x718) = uVar3;
                                tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                uVar2 = tmp_ldWn;
                                if (((uVar2 & 1) == 0) &&
                                   (iVar4 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar4 != 0)) {
                                    ppcVar14 = operator new(unsigned long)(0x108);
                                    ppcVar14[1] = 0x61 + 0x193b8a000;
                                    ppcVar14[2] = 0xc36000000008 | 0x99af000000000000;
                                    ppcVar14[3] = 0x61 + 0x193b8a000;
                                    pcVar16 = *0x193af97f0;
                                    ppcVar14[5] = *0x193af97f8;
                                    ppcVar14[4] = pcVar16;
                                    *ppcVar14 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l
                                                + 0xfa8 + 0x10;
                                    ppcVar14[8] = NULL;
                                    ppcVar14[7] = NULL;
                                    ppcVar14[10] = NULL;
                                    ppcVar14[9] = NULL;
                                    ppcVar14[0xc] = NULL;
                                    ppcVar14[0xb] = NULL;
                                    ppcVar14[0xe] = NULL;
                                    ppcVar14[0xd] = NULL;
                                    ppcVar14[0x10] = NULL;
                                    ppcVar14[0xf] = NULL;
                                    ppcVar14[0x12] = NULL;
                                    ppcVar14[0x11] = NULL;
                                    ppcVar14[0x14] = NULL;
                                    ppcVar14[0x13] = NULL;
                                    ppcVar14[0x16] = NULL;
                                    ppcVar14[0x15] = NULL;
                                    ppcVar14[0x18] = NULL;
                                    ppcVar14[0x17] = NULL;
                                    ppcVar14[0x1a] = NULL;
                                    ppcVar14[0x19] = NULL;
                                    ppcVar14[0x1c] = NULL;
                                    ppcVar14[0x1b] = NULL;
                                    ppcVar14[0x1e] = NULL;
                                    ppcVar14[0x1d] = NULL;
                                    ppcVar14[0x1f] = NULL;
                                    uVar9 = pthread_rwlock_init(ppcVar14 + 7, 0);
                                    if (uVar9 != 0) {
                                        geo::read_write_lock::logFailure(int, char const*)(uVar9, 0x85 + 0x193b8a000);
                                    }
                                    pcVar16 = malloc_create_zone(0, 0);
                                    ppcVar14[6] = pcVar16;
                                    malloc_set_zone_name(pcVar16, 0x61 + 0x193b8a000);
                                    pcVar16 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                    ppcVar14[0x20] = pcVar16;
                                    *(iVar33 + 0x288) = ppcVar14;
                                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                                }
                                iVar20 = (**(**(iVar33 + 0x288) + 0x18))(*(iVar33 + 0x288), uVar3, 0x30);
                                *(*param_2 + 0x720) = iVar20;
                                if (iVar20 == 0) {
                                    uVar9 = **reloc.__stderrp;
                                    goto code_r0x00019390e390;
                                }
                                tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                uVar2 = tmp_ldWn;
                                if (((uVar2 & 1) == 0) &&
                                   (iVar4 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar4 != 0)) {
                                    ppcVar14 = operator new(unsigned long)(0x108);
                                    ppcVar14[1] = 0x61 + 0x193b8a000;
                                    ppcVar14[2] = 0xc36000000008 | 0x99af000000000000;
                                    ppcVar14[3] = 0x61 + 0x193b8a000;
                                    pcVar16 = *0x193af97f0;
                                    ppcVar14[5] = *0x193af97f8;
                                    ppcVar14[4] = pcVar16;
                                    *ppcVar14 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l
                                                + 0xfa8 + 0x10;
                                    ppcVar14[8] = NULL;
                                    ppcVar14[7] = NULL;
                                    ppcVar14[10] = NULL;
                                    ppcVar14[9] = NULL;
                                    ppcVar14[0xc] = NULL;
                                    ppcVar14[0xb] = NULL;
                                    ppcVar14[0xe] = NULL;
                                    ppcVar14[0xd] = NULL;
                                    ppcVar14[0x10] = NULL;
                                    ppcVar14[0xf] = NULL;
                                    ppcVar14[0x12] = NULL;
                                    ppcVar14[0x11] = NULL;
                                    ppcVar14[0x14] = NULL;
                                    ppcVar14[0x13] = NULL;
                                    ppcVar14[0x16] = NULL;
                                    ppcVar14[0x15] = NULL;
                                    ppcVar14[0x18] = NULL;
                                    ppcVar14[0x17] = NULL;
                                    ppcVar14[0x1a] = NULL;
                                    ppcVar14[0x19] = NULL;
                                    ppcVar14[0x1c] = NULL;
                                    ppcVar14[0x1b] = NULL;
                                    ppcVar14[0x1e] = NULL;
                                    ppcVar14[0x1d] = NULL;
                                    ppcVar14[0x1f] = NULL;
                                    uVar9 = pthread_rwlock_init(ppcVar14 + 7, 0);
                                    if (uVar9 != 0) {
                                        geo::read_write_lock::logFailure(int, char const*)(uVar9, 0x85 + 0x193b8a000);
                                    }
                                    pcVar16 = malloc_create_zone(0, 0);
                                    ppcVar14[6] = pcVar16;
                                    malloc_set_zone_name(pcVar16, 0x61 + 0x193b8a000);
                                    pcVar16 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                    ppcVar14[0x20] = pcVar16;
                                    *(iVar33 + 0x288) = ppcVar14;
                                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                                }
                                ppfVar32 = (**(**(iVar33 + 0x288) + 0x18))(*(iVar33 + 0x288), uVar3, 0x18);
                                if (ppfVar32 == NULL) {
                                    uVar9 = **reloc.__stderrp;
code_r0x00019390ecf0:
                                    fprintf(uVar9, 0x8ff + 0x193b8a000);
                                    uVar9 = 0;
                                }
                                else {
                                    uStack_d8 = 0;
                                    uVar18 = ppfStack_c0;
                                    fVar40 = 1.0 / ~(-1L << (pfStack_d0 & 0x3f));
                                    iVar20 = *param_2;
                                    *(*(iVar20 + 0x710) + 8) = fVar40;
                                    pfStack_d0 = *(iVar20 + 0x720);
                                    iVar20 = *(pcVar7 + 0x10);
                                    uVar19 = *(pcVar7 + 0x18);
                                    fVar39 = *0x193af9808;
                                    fVar37 = *0x193af9800;
                                    ppfStack_c0 = ppfVar32;
                                    do {
                                        uVar21 = iVar20 * 8;
                                        if (uVar21 <= uVar19 + puStack_b0 && uVar19 + puStack_b0 != uVar21) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x00019390ecf0;
                                        }
                                        iVar4 = 8;
                                        if (puStack_b0 == 0) {
                                            uVar30 = 0;
                                        }
                                        else {
                                            uVar30 = 0;
                                            puVar36 = *ppuStack_a0;
                                            uVar10 = puStack_b0;
                                            do {
                                                uVar28 = 8 - (uVar19 & 7);
                                                uVar29 = uVar10;
                                                if (uVar28 <= uVar10) {
                                                    uVar29 = uVar28;
                                                }
                                                uVar30 = puVar36[uVar19 >> 3] >>
                                                         ((iVar4 - (uVar19 & 7)) - uVar29 & 0x3f) &
                                                         (-1L << (uVar29 & 0x3f) ^ 0xffffffffffffffffU) |
                                                         uVar30 << (uVar29 & 0x3f);
                                                uVar19 = uVar29 + uVar19;
                                                *puVar35 = uVar19;
                                                uVar10 = uVar10 - uVar29;
                                            } while (uVar10 != 0);
                                        }
                                        fVar34 = uVar30 + fVar34;
                                        pfStack_d0[3] = fVar34;
                                        if (uVar21 <= uVar19 + uStack_b8 && uVar19 + uStack_b8 != uVar21) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x00019390ecf0;
                                        }
                                        if (uStack_b8 == 0) {
                                            uVar2 = 0;
                                        }
                                        else {
                                            uVar2 = 0;
                                            puVar36 = *ppuStack_a0;
                                            uVar30 = uStack_b8;
                                            do {
                                                uVar29 = 8 - (uVar19 & 7);
                                                uVar10 = uVar30;
                                                if (uVar29 <= uVar30) {
                                                    uVar10 = uVar29;
                                                }
                                                uVar6 = uVar10;
                                                uVar2 = puVar36[uVar19 >> 3] >> ((iVar4 - (uVar19 & 7)) - uVar6 & 0x1f)
                                                        & (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar6 & 0x1f);
                                                uVar19 = uVar10 + uVar19;
                                                *puVar35 = uVar19;
                                                uVar30 = uVar30 - uVar10;
                                            } while (uVar30 != 0);
                                        }
                                        fVar38 = uVar2 * (1.0 / ~(-1L << (uVar18 & 0x3f)));
                                        *pfStack_d0 = fVar38;
                                        *ppfStack_c0 = pfStack_d0;
                                        if (0.0 < fVar38) {
                                            ppfStack_c0[2] = fVar40 / fVar38;
                                        }
                                        uVar30 = uVar19 + 1;
                                        if (uVar21 <= uVar30 && uVar30 != uVar21) {
code_r0x00019390ece4:
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x00019390ecf0;
                                        }
                                        uVar1 = (*ppuStack_a0)[uVar19 >> 3];
                                        *puVar35 = uVar30;
                                        if ((uVar1 >> (7 & (uVar19 ^ 0xffffffff)) & 1) == 0) {
                                            pfStack_d0[2] = fVar39;
                                            pfStack_d0[1] = fVar37;
                                        }
                                        else {
                                            iVar5 = geo::codec::decodeLabelLineRange(Bitstream*, GeoCodecsLabelLineRange*, SharedLabelLineRangeDecodeInfo*, TileLabelLineRangeDecodeInfo*)
                                                              (ppuStack_a0, pfStack_d0 + 1, *0x8 + -0x98, ppfStack_c0);
                                            if (iVar5 == 0) goto code_r0x00019390ece4;
                                            iVar20 = *(pcVar7 + 0x10);
                                            uVar30 = *(pcVar7 + 0x18);
                                            uVar21 = iVar20 << 3;
                                        }
                                        if (uVar21 <= uVar30 + 5 && uVar30 + 5 != uVar21) goto code_r0x00019390ece4;
                                        uVar2 = 0;
                                        puVar36 = *ppuStack_a0;
                                        uVar19 = 5;
                                        do {
                                            uVar29 = 8 - (uVar30 & 7);
                                            uVar10 = uVar19;
                                            if (uVar29 <= uVar19) {
                                                uVar10 = uVar29;
                                            }
                                            uVar6 = uVar10;
                                            uVar2 = puVar36[uVar30 >> 3] >> ((iVar4 - (uVar30 & 7)) - uVar6 & 0x1f) &
                                                    (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar6 & 0x1f);
                                            uVar30 = uVar10 + uVar30;
                                            *puVar35 = uVar30;
                                            uVar19 = uVar19 - uVar10;
                                        } while (uVar19 != 0);
                                        *(ppfStack_c0 + 1) = uVar2 + 1;
                                        if (uVar21 <= uVar30 + 5 && uVar30 + 5 != uVar21) goto code_r0x00019390ece4;
                                        uVar2 = 0;
                                        uVar10 = 5;
                                        do {
                                            uVar19 = 8 - (uVar30 & 7);
                                            uVar29 = uVar10;
                                            if (uVar19 <= uVar10) {
                                                uVar29 = uVar19;
                                            }
                                            uVar6 = uVar29;
                                            uVar2 = puVar36[uVar30 >> 3] >> ((iVar4 - (uVar30 & 7)) - uVar6 & 0x1f) &
                                                    (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar6 & 0x1f);
                                            uVar19 = uVar29 + uVar30;
                                            uVar30 = uVar19;
                                            *puVar35 = uVar30;
                                            uVar10 = uVar10 - uVar29;
                                        } while (uVar10 != 0);
                                        *(ppfStack_c0 + 0xc) = uVar2 + 1;
                                        uStack_d8 = uStack_d8 + 1;
                                        pfStack_d0 = pfStack_d0 + 6;
                                        ppfStack_c0 = ppfStack_c0 + 3;
                                    } while (uStack_d8 != uVar3);
                                    if (uVar21 <= uVar19 + 5 && uVar19 + 5 != uVar21) {
code_r0x00019390ec50:
                                        uVar9 = **reloc.__stderrp;
                                        goto code_r0x00019390ecf0;
                                    }
                                    uVar2 = 0;
                                    uVar18 = 5;
                                    do {
                                        uVar10 = 8 - (uVar19 & 7);
                                        uVar30 = uVar18;
                                        if (uVar10 <= uVar18) {
                                            uVar30 = uVar10;
                                        }
                                        uVar6 = uVar30;
                                        uVar2 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar6 & 0x1f) &
                                                (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar6 & 0x1f);
                                        uVar19 = uVar30 + uVar19;
                                        *puVar35 = uVar19;
                                        uVar18 = uVar18 - uVar30;
                                    } while (uVar18 != 0);
                                    uVar18 = uVar2 + 1;
                                    if (uVar21 <= uVar19 + uVar18 && uVar19 + uVar18 != uVar21)
                                    goto code_r0x00019390ec50;
                                    uVar6 = 0;
                                    if (uVar2 + 1 != 0) {
                                        do {
                                            uVar30 = 8 - (uVar19 & 7);
                                            uVar21 = uVar18;
                                            if (uVar30 <= uVar18) {
                                                uVar21 = uVar30;
                                            }
                                            uVar2 = uVar21;
                                            uVar6 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar2 & 0x1f) &
                                                    (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar6 << (uVar2 & 0x1f);
                                            uVar19 = uVar21 + uVar19;
                                            *puVar35 = uVar19;
                                            uVar18 = uVar18 - uVar21;
                                        } while (uVar18 != 0);
                                    }
                                    *(*param_2 + 0x728) = uVar6;
                                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                    uVar2 = tmp_ldWn;
                                    if (((uVar2 & 1) == 0) &&
                                       (iVar4 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar4 != 0)) {
                                        ppcVar14 = operator new(unsigned long)(0x108);
                                        ppcVar14[1] = 0x61 + 0x193b8a000;
                                        ppcVar14[2] = 0xc36000000008 | 0x99af000000000000;
                                        ppcVar14[3] = 0x61 + 0x193b8a000;
                                        pcVar16 = *0x193af97f0;
                                        ppcVar14[5] = *0x193af97f8;
                                        ppcVar14[4] = pcVar16;
                                        *ppcVar14 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l
                                                    + 0xfa8 + 0x10;
                                        ppcVar14[8] = NULL;
                                        ppcVar14[7] = NULL;
                                        ppcVar14[10] = NULL;
                                        ppcVar14[9] = NULL;
                                        ppcVar14[0xc] = NULL;
                                        ppcVar14[0xb] = NULL;
                                        ppcVar14[0xe] = NULL;
                                        ppcVar14[0xd] = NULL;
                                        ppcVar14[0x10] = NULL;
                                        ppcVar14[0xf] = NULL;
                                        ppcVar14[0x12] = NULL;
                                        ppcVar14[0x11] = NULL;
                                        ppcVar14[0x14] = NULL;
                                        ppcVar14[0x13] = NULL;
                                        ppcVar14[0x16] = NULL;
                                        ppcVar14[0x15] = NULL;
                                        ppcVar14[0x18] = NULL;
                                        ppcVar14[0x17] = NULL;
                                        ppcVar14[0x1a] = NULL;
                                        ppcVar14[0x19] = NULL;
                                        ppcVar14[0x1c] = NULL;
                                        ppcVar14[0x1b] = NULL;
                                        ppcVar14[0x1e] = NULL;
                                        ppcVar14[0x1d] = NULL;
                                        ppcVar14[0x1f] = NULL;
                                        uVar9 = pthread_rwlock_init(ppcVar14 + 7, 0);
                                        if (uVar9 != 0) {
                                            geo::read_write_lock::logFailure(int, char const*)
                                                      (uVar9, 0x85 + 0x193b8a000);
                                        }
                                        pcVar16 = malloc_create_zone(0, 0);
                                        ppcVar14[6] = pcVar16;
                                        malloc_set_zone_name(pcVar16, 0x61 + 0x193b8a000);
                                        pcVar16 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                        ppcVar14[0x20] = pcVar16;
                                        *(iVar33 + 0x288) = ppcVar14;
                                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                                    }
                                    puStack_b0 = (**(**(iVar33 + 0x288) + 0x18))(*(iVar33 + 0x288), uVar6, 0x28);
                                    iVar20 = *param_2;
                                    *(iVar20 + 0x730) = puStack_b0;
                                    if (puStack_b0 == NULL) {
                                        uVar9 = **reloc.__stderrp;
                                        goto code_r0x00019390ecf0;
                                    }
                                    iVar22 = *(pcVar7 + 0x10);
                                    uVar19 = *(pcVar7 + 0x18);
                                    uVar18 = iVar22 * 8;
                                    if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
                                        uVar9 = **reloc.__stderrp;
                                        goto code_r0x00019390ecf0;
                                    }
                                    uVar2 = 0;
                                    puVar36 = *ppuStack_a0;
                                    uVar21 = 5;
                                    do {
                                        uVar10 = 8 - (uVar19 & 7);
                                        uVar30 = uVar21;
                                        if (uVar10 <= uVar21) {
                                            uVar30 = uVar10;
                                        }
                                        uVar17 = uVar30;
                                        uVar2 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar17 & 0x1f) &
                                                (-1 << (uVar17 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar17 & 0x1f);
                                        uVar19 = uVar30 + uVar19;
                                        *puVar35 = uVar19;
                                        uVar21 = uVar21 - uVar30;
                                    } while (uVar21 != 0);
                                    if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
                                        uVar9 = **reloc.__stderrp;
                                        goto code_r0x00019390ecf0;
                                    }
                                    uVar17 = 0;
                                    uVar30 = uVar2 + 1;
                                    uVar21 = 5;
                                    do {
                                        uVar29 = 8 - (uVar19 & 7);
                                        uVar10 = uVar21;
                                        if (uVar29 <= uVar21) {
                                            uVar10 = uVar29;
                                        }
                                        uVar2 = uVar10;
                                        uVar17 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar2 & 0x1f) &
                                                 (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar17 << (uVar2 & 0x1f);
                                        uVar19 = uVar10 + uVar19;
                                        *puVar35 = uVar19;
                                        uVar21 = uVar21 - uVar10;
                                    } while (uVar21 != 0);
                                    if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
                                        uVar9 = **reloc.__stderrp;
                                        goto code_r0x00019390ecf0;
                                    }
                                    uVar2 = 0;
                                    uVar10 = uVar17 + 1;
                                    uVar21 = 5;
                                    do {
                                        uVar28 = 8 - (uVar19 & 7);
                                        uVar29 = uVar21;
                                        if (uVar28 <= uVar21) {
                                            uVar29 = uVar28;
                                        }
                                        uVar17 = uVar29;
                                        uVar2 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar17 & 0x1f) &
                                                (-1 << (uVar17 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar17 & 0x1f);
                                        uVar19 = uVar29 + uVar19;
                                        *puVar35 = uVar19;
                                        uVar21 = uVar21 - uVar29;
                                    } while (uVar21 != 0);
                                    if (uVar18 <= uVar19 + 5 && uVar19 + 5 != uVar18) {
                                        uVar9 = **reloc.__stderrp;
                                        goto code_r0x00019390ecf0;
                                    }
                                    uVar17 = 0;
                                    uVar21 = uVar2 + 1;
                                    uVar18 = 5;
                                    do {
                                        uVar28 = 8 - (uVar19 & 7);
                                        uVar29 = uVar18;
                                        if (uVar28 <= uVar18) {
                                            uVar29 = uVar28;
                                        }
                                        uVar2 = uVar29;
                                        uVar17 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar2 & 0x1f) &
                                                 (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar17 << (uVar2 & 0x1f);
                                        uVar19 = uVar29 + uVar19;
                                        *puVar35 = uVar19;
                                        uVar18 = uVar18 - uVar29;
                                    } while (uVar18 != 0);
                                    uStack_10c = 0;
                                    pfStack_d0._0_4_ = 0;
                                    uVar18 = uVar17 + 1;
                                    ppfStack_c0 = *(iVar20 + 0x720);
                                    ppfStack_100 = ppfVar32;
                                    do {
                                        *(ppfStack_c0 + 0x20) = pfStack_d0;
                                        if (iVar22 * 8 <= uVar19 + uVar30 && uVar19 + uVar30 != iVar22 * 8) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x00019390ecf0;
                                        }
                                        if (uVar30 != 0) {
                                            uVar2 = 0;
                                            uVar29 = uVar30;
                                            do {
                                                uVar24 = 8 - (uVar19 & 7);
                                                uVar28 = uVar29;
                                                if (uVar24 <= uVar29) {
                                                    uVar28 = uVar24;
                                                }
                                                uVar17 = uVar28;
                                                uVar2 = puVar36[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar17 & 0x1f) &
                                                        (-1 << (uVar17 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar17 & 0x1f);
                                                uVar19 = uVar28 + uVar19;
                                                *puVar35 = uVar19;
                                                uVar29 = uVar29 - uVar28;
                                            } while (uVar29 != 0);
                                            if (uVar6 <= uVar2 + pfStack_d0 && uVar2 + pfStack_d0 != uVar6)
                                            goto code_r0x00019390f568;
                                            if (uVar2 < 0x10000) {
                                                *(ppfStack_c0 + 0x2a) = uVar2;
                                                if (uVar2 != 0) {
                                                    iStack_108._0_4_ = 0;
                                                    do {
                                                        uVar29 = iVar22 * 8;
                                                        if (uVar29 <= uVar19 + uVar10 && uVar19 + uVar10 != uVar29)
                                                        goto code_r0x00019390ece4;
                                                        uVar17 = uVar10;
                                                        if (uVar17 != 0) {
                                                            uVar17 = 0;
                                                            uVar28 = uVar10;
                                                            do {
                                                                uVar26 = 8 - (uVar19 & 7);
                                                                uVar24 = uVar28;
                                                                if (uVar26 <= uVar28) {
                                                                    uVar24 = uVar26;
                                                                }
                                                                uVar23 = uVar24;
                                                                uVar17 = puVar36[uVar19 >> 3] >>
                                                                         ((8 - (uVar19 & 7)) - uVar23 & 0x1f) &
                                                                         (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                                         uVar17 << (uVar23 & 0x1f);
                                                                uVar19 = uVar24 + uVar19;
                                                                *puVar35 = uVar19;
                                                                uVar28 = uVar28 - uVar24;
                                                            } while (uVar28 != 0);
                                                        }
                                                        if ((iVar11 - iVar12 >> 8 <= uVar17) ||
                                                           (*puStack_b0 = uVar17, 
                                                           uVar29 <= uVar19 + uVar21 && uVar19 + uVar21 != uVar29))
                                                        goto code_r0x00019390ece4;
                                                        uVar28 = uVar21;
                                                        if (uVar28 != 0) {
                                                            uVar28 = 0;
                                                            uVar24 = uVar21;
                                                            do {
                                                                uVar27 = 8 - (uVar19 & 7);
                                                                uVar26 = uVar24;
                                                                if (uVar27 <= uVar24) {
                                                                    uVar26 = uVar27;
                                                                }
                                                                uVar23 = uVar26;
                                                                uVar17 = uVar28 << (uVar23 & 0x1f);
                                                                uVar28 = puVar36[uVar19 >> 3] >>
                                                                         ((8 - (uVar19 & 7)) - uVar23 & 0x1f) &
                                                                         (-1 << (uVar23 & 0x1f) ^ 0xffffffff) | uVar17;
                                                                uVar19 = uVar26 + uVar19;
                                                                *puVar35 = uVar19;
                                                                uVar24 = uVar24 - uVar26;
                                                            } while (uVar24 != 0);
                                                            if ((uVar17 >> 0x10 & 0xffff) != 0)
                                                            goto code_r0x00019390ece4;
                                                        }
                                                        *(puStack_b0 + 6) = uVar28;
                                                        uVar28 = uVar19 + 1;
                                                        if (uVar29 <= uVar28 && uVar28 != uVar29) {
                                                            uVar9 = **reloc.__stderrp;
                                                            goto code_r0x00019390ecf0;
                                                        }
                                                        uVar1 = puVar36[uVar19 >> 3];
                                                        *puVar35 = uVar28;
                                                        *(puStack_b0 + 0x1f) = uVar1 >> (7 & (uVar19 ^ 0xffffffff)) & 1;
                                                        uVar24 = uVar19 + 2;
                                                        if (uVar29 <= uVar24 && uVar24 != uVar29) {
                                                            uVar9 = **reloc.__stderrp;
                                                            goto code_r0x00019390ecf0;
                                                        }
                                                        uVar1 = puVar36[uVar28 >> 3];
                                                        *puVar35 = uVar24;
                                                        *(puStack_b0 + 0x1e) = uVar1 >> (7 & (uVar28 ^ 0xffffffff)) & 1;
                                                        uVar19 = uVar19 + 3;
                                                        if (uVar29 <= uVar19 && uVar19 != uVar29)
                                                        goto code_r0x00019390ece4;
                                                        uVar1 = puVar36[uVar24 >> 3];
                                                        *puVar35 = uVar19;
                                                        if ((uVar1 >> (7 & (uVar24 ^ 0xffffffff)) & 1) == 0) {
                                                            uVar9 = *(ppfStack_c0 + 8);
                                                            *(puStack_b0 + 4) = (ppfStack_c0 + 8)[1];
                                                            *(puStack_b0 + 2) = uVar9;
                                                        }
                                                        else {
                                                            uVar19 = 
                                                            geo::codec::decodeLabelLineRangeUsingTileLine(Bitstream*, GeoCodecsLabelLineRange*, SharedLabelLineRangeDecodeInfo*, TileLabelLineRangeDecodeInfo*)
                                                                      (ppuStack_a0, puStack_b0 + 2, *0x8 + -0x98, 
                                                                       ppfStack_100);
                                                            if ((uVar19 & 1) == 0) goto code_r0x00019390ece4;
                                                        }
                                                        iVar22 = *(pcVar7 + 0x10);
                                                        uVar29 = *(pcVar7 + 0x18);
                                                        uVar19 = uVar29 + 1;
                                                        uVar28 = iVar22 * 8;
                                                        if (uVar28 <= uVar19 && uVar19 != uVar28) {
                                                            uVar9 = **reloc.__stderrp;
                                                            goto code_r0x00019390ecf0;
                                                        }
                                                        puVar36 = *ppuStack_a0;
                                                        uVar1 = puVar36[uVar29 >> 3];
                                                        *puVar35 = uVar19;
                                                        if ((uVar1 >> (7 & (uVar29 ^ 0xffffffff)) & 1) != 0) {
                                                            *(puStack_b0 + 8) = 1;
                                                            if (uVar28 <= uVar19 + uVar18 && uVar19 + uVar18 != uVar28)
                                                            goto code_r0x00019390ece4;
                                                            if (uVar18 == 0) {
                                                                *(puStack_b0 + 0x1a) = 0;
                                                                goto code_r0x00019390ece4;
                                                            }
                                                            uVar17 = 0;
                                                            uVar29 = uVar18;
                                                            do {
                                                                uVar26 = 8 - (uVar19 & 7);
                                                                uVar24 = uVar29;
                                                                if (uVar26 <= uVar29) {
                                                                    uVar24 = uVar26;
                                                                }
                                                                uVar23 = uVar24;
                                                                uVar17 = puVar36[uVar19 >> 3] >>
                                                                         ((8 - (uVar19 & 7)) - uVar23 & 0x1f) &
                                                                         (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                                         uVar17 << (uVar23 & 0x1f);
                                                                uVar19 = uVar24 + uVar19;
                                                                *puVar35 = uVar19;
                                                                uVar29 = uVar29 - uVar24;
                                                            } while (uVar29 != 0);
                                                            if ((uVar17 >> 0x10 != 0) ||
                                                               (*(puStack_b0 + 0x1a) = uVar17, 
                                                               uVar28 <= uVar19 + uVar18 && uVar19 + uVar18 != uVar28))
                                                            goto code_r0x00019390ece4;
                                                            uVar23 = 0;
                                                            uVar29 = uVar18;
                                                            do {
                                                                uVar24 = 8 - (uVar19 & 7);
                                                                uVar28 = uVar29;
                                                                if (uVar24 <= uVar29) {
                                                                    uVar28 = uVar24;
                                                                }
                                                                uVar25 = uVar28;
                                                                uVar23 = puVar36[uVar19 >> 3] >>
                                                                         ((8 - (uVar19 & 7)) - uVar25 & 0x1f) &
                                                                         (-1 << (uVar25 & 0x1f) ^ 0xffffffff) |
                                                                         uVar23 << (uVar25 & 0x1f);
                                                                uVar19 = uVar28 + uVar19;
                                                                *puVar35 = uVar19;
                                                                uVar29 = uVar29 - uVar28;
                                                            } while (uVar29 != 0);
                                                            if ((uVar23 >> 0x10 != 0) ||
                                                               (iVar4 = uVar23 - uVar17,  uVar23 < uVar17 || iVar4 == 0)
                                                               ) goto code_r0x00019390ece4;
                                                            *(puStack_b0 + 7) = iVar4 + 1;
                                                        }
                                                        iStack_108._0_4_ = iStack_108 + 1;
                                                        puStack_b0 = puStack_b0 + 10;
                                                    } while (iStack_108 != uVar2);
                                                }
                                                goto code_r0x00019390f4d0;
                                            }
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x00019390ecf0;
                                        }
                                        if (uVar6 <= pfStack_d0 && pfStack_d0 != uVar6) {
code_r0x00019390f568:
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x00019390ecf0;
                                        }
                                        uVar2 = 0;
                                        *(ppfStack_c0 + 0x2a) = 0;
code_r0x00019390f4d0:
                                        pfStack_d0._0_4_ = uVar2 + pfStack_d0;
                                        uVar2 = uStack_10c;
                                        uStack_10c = uVar2 + 1;
                                        ppfStack_c0 = ppfStack_c0 + 0x30;
                                        ppfStack_100 = ppfStack_100 + 3;
                                    } while (uVar2 + 1 != uVar3);
                                    if (pfStack_d0 != uVar6) {
                                        uVar9 = **reloc.__stderrp;
                                        goto code_r0x00019390ecf0;
                                    }
                                    uVar18 = uVar19 + 1;
                                    uVar21 = iVar22 * 8;
                                    if (uVar21 <= uVar18 && uVar18 != uVar21) {
                                        uVar9 = **reloc.__stderrp;
                                        goto code_r0x00019390ecf0;
                                    }
                                    uVar1 = puVar36[uVar19 >> 3];
                                    *puVar35 = uVar18;
                                    uVar2 = 1 << (7 & (uVar19 ^ 0xffffffff)) & uVar1;
                                    iVar11 = *param_2;
                                    *(*(iVar11 + 0x710) + 1) = uVar2 != 0;
                                    if (uVar2 != 0) {
                                        uVar30 = uVar19 + 2;
                                        if (uVar21 <= uVar30 && uVar30 != uVar21) {
                                            uVar9 = **reloc.__stderrp;
                                            goto code_r0x00019390ecf0;
                                        }
                                        uVar1 = puVar36[uVar18 >> 3];
                                        *puVar35 = uVar30;
                                        if ((uVar1 >> (7 & (uVar18 ^ 0xffffffff)) & 1) != 0) {
                                            if (uVar19 + 7 < uVar21 || uVar19 + 7 == uVar21) {
                                                uVar2 = 0;
                                                uVar19 = 5;
                                                do {
                                                    uVar10 = 8 - (uVar30 & 7);
                                                    uVar18 = uVar19;
                                                    if (uVar10 <= uVar19) {
                                                        uVar18 = uVar10;
                                                    }
                                                    uVar6 = uVar18;
                                                    uVar2 = puVar36[uVar30 >> 3] >> ((8 - (uVar30 & 7)) - uVar6 & 0x1f)
                                                            & (-1 << (uVar6 & 0x1f) ^ 0xffffffff) |
                                                            uVar2 << (uVar6 & 0x1f);
                                                    uVar30 = uVar18 + uVar30;
                                                    *puVar35 = uVar30;
                                                    uVar19 = uVar19 - uVar18;
                                                } while (uVar19 != 0);
                                                uVar19 = uVar2 + 1;
                                                if (uVar30 + uVar19 < uVar21 || uVar30 + uVar19 == uVar21) {
                                                    uVar6 = 0;
                                                    if (uVar2 + 1 != 0) {
                                                        do {
                                                            uVar21 = 8 - (uVar30 & 7);
                                                            uVar18 = uVar19;
                                                            if (uVar21 <= uVar19) {
                                                                uVar18 = uVar21;
                                                            }
                                                            uVar2 = uVar18;
                                                            uVar6 = puVar36[uVar30 >> 3] >>
                                                                    ((8 - (uVar30 & 7)) - uVar2 & 0x1f) &
                                                                    (-1 << (uVar2 & 0x1f) ^ 0xffffffff) |
                                                                    uVar6 << (uVar2 & 0x1f);
                                                            uVar30 = uVar18 + uVar30;
                                                            *puVar35 = uVar30;
                                                            uVar19 = uVar19 - uVar18;
                                                        } while (uVar19 != 0);
                                                    }
                                                    *(iVar11 + 0x738) = uVar6;
                                                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                                    uVar2 = tmp_ldWn;
                                                    if (((uVar2 & 1) == 0) &&
                                                       (iVar4 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar4 != 0))
                                                    {
                                                        uVar9 = operator new(unsigned long)(0x108);
                                                        geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                                                  (uVar9, 0x61 + 0x193b8a000, 
                                                                   0xc36000000008 | 0x99af000000000000, 0, 0);
                                                        *(iVar33 + 0x288) = uVar9;
                                                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                                                    }
                                                    puVar13 = (**(**(iVar33 + 0x288) + 0x18))
                                                                        (*(iVar33 + 0x288), uVar6, 0x18);
                                                    iVar11 = *param_2;
                                                    *(iVar11 + 0x740) = puVar13;
                                                    if (puVar13 != NULL) {
                                                        iVar12 = *(pcVar7 + 0x10);
                                                        uVar19 = *(pcVar7 + 0x18);
                                                        uVar18 = iVar12 * 8;
                                                        if (uVar19 + 5 < uVar18 || uVar19 + 5 == uVar18) {
                                                            uVar2 = 0;
                                                            puVar36 = *ppuStack_a0;
                                                            uVar21 = 5;
                                                            do {
                                                                uVar10 = 8 - (uVar19 & 7);
                                                                uVar30 = uVar21;
                                                                if (uVar10 <= uVar21) {
                                                                    uVar30 = uVar10;
                                                                }
                                                                uVar17 = uVar30;
                                                                uVar2 = puVar36[uVar19 >> 3] >>
                                                                        ((8 - (uVar19 & 7)) - uVar17 & 0x1f) &
                                                                        (-1 << (uVar17 & 0x1f) ^ 0xffffffff) |
                                                                        uVar2 << (uVar17 & 0x1f);
                                                                uVar19 = uVar30 + uVar19;
                                                                *puVar35 = uVar19;
                                                                uVar21 = uVar21 - uVar30;
                                                            } while (uVar21 != 0);
                                                            if (uVar19 + 5 < uVar18 || uVar19 + 5 == uVar18) {
                                                                uVar17 = 0;
                                                                uVar30 = uVar2 + 1;
                                                                uVar21 = 5;
                                                                do {
                                                                    uVar29 = 8 - (uVar19 & 7);
                                                                    uVar10 = uVar21;
                                                                    if (uVar29 <= uVar21) {
                                                                        uVar10 = uVar29;
                                                                    }
                                                                    uVar2 = uVar10;
                                                                    uVar17 = puVar36[uVar19 >> 3] >>
                                                                             ((8 - (uVar19 & 7)) - uVar2 & 0x1f) &
                                                                             (-1 << (uVar2 & 0x1f) ^ 0xffffffff) |
                                                                             uVar17 << (uVar2 & 0x1f);
                                                                    uVar19 = uVar10 + uVar19;
                                                                    *puVar35 = uVar19;
                                                                    uVar21 = uVar21 - uVar10;
                                                                } while (uVar21 != 0);
                                                                if (uVar19 + 5 < uVar18 || uVar19 + 5 == uVar18) {
                                                                    uVar2 = 0;
                                                                    uVar10 = uVar17 + 1;
                                                                    uVar21 = 5;
                                                                    do {
                                                                        uVar28 = 8 - (uVar19 & 7);
                                                                        uVar29 = uVar21;
                                                                        if (uVar28 <= uVar21) {
                                                                            uVar29 = uVar28;
                                                                        }
                                                                        uVar17 = uVar29;
                                                                        uVar2 = puVar36[uVar19 >> 3] >>
                                                                                ((8 - (uVar19 & 7)) - uVar17 & 0x1f) &
                                                                                (-1 << (uVar17 & 0x1f) ^ 0xffffffff) |
                                                                                uVar2 << (uVar17 & 0x1f);
                                                                        uVar19 = uVar29 + uVar19;
                                                                        *puVar35 = uVar19;
                                                                        uVar21 = uVar21 - uVar29;
                                                                    } while (uVar21 != 0);
                                                                    if (uVar19 + 3 < uVar18 || uVar19 + 3 == uVar18) {
                                                                        uVar17 = 0;
                                                                        uVar29 = uVar2 + 1;
                                                                        uVar21 = 3;
                                                                        do {
                                                                            uVar24 = 8 - (uVar19 & 7);
                                                                            uVar28 = uVar21;
                                                                            if (uVar24 <= uVar21) {
                                                                                uVar28 = uVar24;
                                                                            }
                                                                            uVar2 = uVar28;
                                                                            uVar17 = puVar36[uVar19 >> 3] >>
                                                                                     ((8 - (uVar19 & 7)) - uVar2 & 0x1f)
                                                                                     & (-1 << (uVar2 & 0x1f) ^
                                                                                       0xffffffff) |
                                                                                     uVar17 << (uVar2 & 0x1f);
                                                                            uVar19 = uVar28 + uVar19;
                                                                            *puVar35 = uVar19;
                                                                            uVar21 = uVar21 - uVar28;
                                                                        } while (uVar21 != 0);
                                                                        if (uVar19 + 5 < uVar18 || uVar19 + 5 == uVar18)
                                                                        {
                                                                            uVar2 = 0;
                                                                            uVar28 = uVar17 + 1;
                                                                            uVar21 = 5;
                                                                            do {
                                                                                uVar26 = 8 - (uVar19 & 7);
                                                                                uVar24 = uVar21;
                                                                                if (uVar26 <= uVar21) {
                                                                                    uVar24 = uVar26;
                                                                                }
                                                                                uVar17 = uVar24;
                                                                                uVar2 = puVar36[uVar19 >> 3] >>
                                                                                        ((8 - (uVar19 & 7)) - uVar17 &
                                                                                        0x1f) & (-1 << (uVar17 & 0x1f) ^
                                                                                                0xffffffff) |
                                                                                        uVar2 << (uVar17 & 0x1f);
                                                                                uVar19 = uVar24 + uVar19;
                                                                                *puVar35 = uVar19;
                                                                                uVar21 = uVar21 - uVar24;
                                                                            } while (uVar21 != 0);
                                                                            uVar21 = uVar2 + 1;
                                                                            if (uVar19 + uVar21 < uVar18 ||
                                                                                uVar19 + uVar21 == uVar18) {
                                                                                uVar17 = 0;
                                                                                if (uVar2 + 1 != 0) {
                                                                                    do {
                                                                                        uVar26 = 8 - (uVar19 & 7);
                                                                                        uVar24 = uVar21;
                                                                                        if (uVar26 <= uVar21) {
                                                                                            uVar24 = uVar26;
                                                                                        }
                                                                                        uVar2 = uVar24;
                                                                                        uVar17 = puVar36[uVar19 >> 3] >>
                                                                                                 ((8 - (uVar19 & 7)) -
                                                                                                  uVar2 & 0x1f) &
                                                                                                 (-1 << (uVar2 & 0x1f) ^
                                                                                                 0xffffffff) |
                                                                                                 uVar17 << (uVar2 & 0x1f
                                                                                                           );
                                                                                        uVar19 = uVar24 + uVar19;
                                                                                        *puVar35 = uVar19;
                                                                                        uVar21 = uVar21 - uVar24;
                                                                                    } while (uVar21 != 0);
                                                                                }
                                                                                uVar19 = uVar19 + uVar17;
                                                                                if (uVar19 < uVar18 || uVar19 == uVar18)
                                                                                {
                                                                                    uStack_10c = 0;
                                                                                    uVar2 = 0;
                                                                                    *puVar35 = uVar19;
                                                                                    iStack_108 = *(iVar11 + 0x720);
                                                                                    ppfStack_100 = ppfVar32;
                                                                                    while( true ) {
                                                                                        uStack_d8 = uVar2;
                                                                                        uVar18 = uVar19 + 1;
                                                                                        uVar21 = iVar12 * 8;
                                                                                        if (uVar21 <= uVar18 &&
                                                                                            uVar18 != uVar21) break;
                                                                                        puVar36 = *ppuStack_a0;
                                                                                        uVar1 = puVar36[uVar19 >> 3];
                                                                                        *puVar35 = uVar18;
                                                                                        if ((uVar1 >> (7 & (uVar19 ^ 
                                                            0xffffffff)) & 1) != 0) {
                                                                uStack_d8 = uVar2;
                                                                *(iStack_108 + 0x24) = uStack_d8;
                                                                if (uVar18 + uVar30 < uVar21 ||
                                                                    uVar18 + uVar30 == uVar21) {
                                                                    iVar4 = 8;
                                                                    if (uVar30 == 0) {
                                                                        uVar17 = 0;
                                                                    }
                                                                    else {
                                                                        uVar17 = 0;
                                                                        uVar19 = uVar30;
                                                                        do {
                                                                            uVar26 = 8 - (uVar18 & 7);
                                                                            uVar24 = uVar19;
                                                                            if (uVar26 <= uVar19) {
                                                                                uVar24 = uVar26;
                                                                            }
                                                                            uVar23 = uVar24;
                                                                            uVar17 = puVar36[uVar18 >> 3] >>
                                                                                     ((iVar4 - (uVar18 & 7)) - uVar23 &
                                                                                     0x1f) & (-1 << (uVar23 & 0x1f) ^
                                                                                             0xffffffff) |
                                                                                     uVar17 << (uVar23 & 0x1f);
                                                                            uVar18 = uVar24 + uVar18;
                                                                            *puVar35 = uVar18;
                                                                            uVar19 = uVar19 - uVar24;
                                                                        } while (uVar19 != 0);
                                                                        if (uVar17 >> 0x10 != 0)
                                                                        goto code_r0x00019390ece4;
                                                                    }
                                                                    uStack_118 = uVar17 + uStack_d8;
                                                                    if (uStack_118 < uVar6 || uStack_118 == uVar6) {
                                                                        if (uVar21 <= uVar18 + uVar29 &&
                                                                            uVar18 + uVar29 != uVar21) {
                                                                            uVar9 = **reloc.__stderrp;
                                                                        }
                                                                        else {
                                                                            if (uVar29 == 0) {
                                                                                puStack_b0._0_4_ = 0;
                                                                            }
                                                                            else {
                                                                                puStack_b0._0_4_ = 0;
                                                                                uVar19 = uVar29;
                                                                                do {
                                                                                    uVar24 = 8 - (uVar18 & 7);
                                                                                    uVar21 = uVar19;
                                                                                    if (uVar24 <= uVar19) {
                                                                                        uVar21 = uVar24;
                                                                                    }
                                                                                    uVar23 = uVar21;
                                                                                    puStack_b0._0_4_ =
                                                                                         puVar36[uVar18 >> 3] >>
                                                                                         ((iVar4 - (uVar18 & 7)) -
                                                                                          uVar23 & 0x1f) &
                                                                                         (-1 << (uVar23 & 0x1f) ^
                                                                                         0xffffffff) |
                                                                                         puStack_b0 << (uVar23 & 0x1f);
                                                                                    uVar18 = uVar21 + uVar18;
                                                                                    *puVar35 = uVar18;
                                                                                    uVar19 = uVar19 - uVar21;
                                                                                } while (uVar19 != 0);
                                                                            }
                                                                            if (uVar17 == 0) {
                                                                                uVar2 = uStack_d8;
                                                                            }
                                                                            else {
                                                                                uStack_f0 = 0;
                                                                                uVar19 = uVar18;
                                                                                do {
                                                                                    if (iVar12 * 8 <= uVar19 + uVar10 &&
                                                                                        uVar19 + uVar10 != iVar12 * 8) {
                                                                                        uVar9 = **reloc.__stderrp;
                                                                                        goto code_r0x00019390ecf0;
                                                                                    }
                                                                                    if (uVar10 != 0) {
                                                                                        uVar23 = 0;
                                                                                        puVar36 = *ppuStack_a0;
                                                                                        uVar21 = uVar10;
                                                                                        do {
                                                                                            uVar26 = 8 - (uVar19 & 7);
                                                                                            uVar24 = uVar21;
                                                                                            if (uVar26 <= uVar21) {
                                                                                                uVar24 = uVar26;
                                                                                            }
                                                                                            uVar25 = uVar24;
                                                                                            uVar23 = puVar36[uVar19 >> 3
                                                                                                            ] >>
                                                                                                     ((iVar4 - (uVar19 &
                                                                                                               7)) -
                                                                                                      uVar25 & 0x1f) &
                                                                                                     (-1 << (uVar25 & 
                                                            0x1f) ^ 0xffffffff) | uVar23 << (uVar25 & 0x1f);
                                                            uVar19 = uVar24 + uVar19;
                                                            *puVar35 = uVar19;
                                                            uVar21 = uVar21 - uVar24;
                                                            } while (uVar21 != 0);
                                                            if (uVar23 != 0) goto code_r0x0001939100ec;
                                                            }
                                                            *puVar13 = 0;
                                                            uVar19 = 
                                                            geo::codec::decodeLabelLineRangeUsingTileLine(Bitstream*, GeoCodecsLabelLineRange*, SharedLabelLineRangeDecodeInfo*, TileLabelLineRangeDecodeInfo*)
                                                                      (ppuStack_a0, puVar13 + 8, *0x8 + -0x98, 
                                                                       ppfStack_100);
                                                            if ((uVar19 & 1) == 0) {
                                                                uVar9 = **reloc.__stderrp;
                                                                goto code_r0x00019390ecf0;
                                                            }
                                                            iVar12 = *(pcVar7 + 0x10);
                                                            uVar19 = *(pcVar7 + 0x18);
                                                            if (iVar12 * 8 <= uVar19 + uVar28 &&
                                                                uVar19 + uVar28 != iVar12 * 8) {
                                                                uVar9 = **reloc.__stderrp;
                                                                goto code_r0x00019390ecf0;
                                                            }
                                                            if (uVar28 == 0) {
                                                                uVar23 = 0;
                                                            }
                                                            else {
                                                                uVar23 = 0;
                                                                puVar36 = *ppuStack_a0;
                                                                uVar21 = uVar28;
                                                                do {
                                                                    uVar26 = 8 - (uVar19 & 7);
                                                                    uVar24 = uVar21;
                                                                    if (uVar26 <= uVar21) {
                                                                        uVar24 = uVar26;
                                                                    }
                                                                    uVar25 = uVar24;
                                                                    uVar23 = puVar36[uVar19 >> 3] >>
                                                                             ((iVar4 - (uVar19 & 7)) - uVar25 & 0x1f) &
                                                                             (-1 << (uVar25 & 0x1f) ^ 0xffffffff) |
                                                                             uVar23 << (uVar25 & 0x1f);
                                                                    uVar19 = uVar24 + uVar19;
                                                                    *puVar35 = uVar19;
                                                                    uVar21 = uVar21 - uVar24;
                                                                } while (uVar21 != 0);
                                                            }
                                                            puVar13[1] = uVar23;
                                                            puVar13 = puVar13 + 0x18;
                                                            uStack_d8 = uVar2;
                                                            uVar2 = uStack_d8 + 1;
                                                            uStack_f0 = uStack_f0 + 1;
                                                            } while (uStack_f0 != uVar17);
                                                            uVar2 = uStack_118;
code_r0x0001939100ec:
                                                            uStack_d8 = uVar2;
                                                            uVar2 = uStack_d8;
                                                            uStack_d8 = *(iStack_108 + 0x24);
                                                            }
                                                            *(iStack_108 + 0x28) = uVar2 - uStack_d8;
                                                            *puVar35 = uVar18;
                                                            uVar18 = uVar18 + puStack_b0;
                                                            if (uVar18 < iVar12 * 8 || uVar18 == iVar12 * 8) {
                                                                *puVar35 = uVar18;
                                                                goto code_r0x00019390fe2c;
                                                            }
                                                            uVar9 = **reloc.__stderrp;
                                                            }
                                                            goto code_r0x00019390ecf0;
                                                            }
                                                            }
                                                            goto code_r0x00019390ece4;
                                                            }
code_r0x00019390fe2c:
                                                            uStack_10c = uStack_10c + 1;
                                                            iStack_108 = iStack_108 + 0x30;
                                                            ppfStack_100 = ppfStack_100 + 3;
                                                            uVar19 = uVar18;
                                                            if (uStack_10c == uVar3) goto code_r0x00019390f81c;
                                                            }
                                                            uVar9 = **reloc.__stderrp;
                                                            }
                                                            else {
                                                                uVar9 = **reloc.__stderrp;
                                                            }
                                                            goto code_r0x00019390ecf0;
                                                            }
                                                            }
                                                            uVar9 = **reloc.__stderrp;
                                                            }
                                                            else {
                                                                uVar9 = **reloc.__stderrp;
                                                            }
                                                            }
                                                            else {
                                                                uVar9 = **reloc.__stderrp;
                                                            }
                                                            }
                                                            else {
                                                                uVar9 = **reloc.__stderrp;
                                                            }
                                                        }
                                                        else {
                                                            uVar9 = **reloc.__stderrp;
                                                        }
                                                        goto code_r0x00019390ecf0;
                                                    }
                                                }
                                            }
                                            goto code_r0x00019390ece4;
                                        }
                                        uVar18 = uVar30;
                                    }
code_r0x00019390f81c:
                                    iVar11 = *(pcVar7 + 0x30) + (uVar18 >> 3);
                                    if ((uVar18 & 7) != 0) {
                                        iVar11 = iVar11 + 1;
                                    }
                                    *(pcVar7 + 0x30) = iVar11;
                                    pcVar7[0x20] = '\0';
                                    uVar9 = 1;
                                }
                            }
                            else {
                                uVar9 = **reloc.__stderrp;
code_r0x00019390e390:
                                fprintf(uVar9, 0x8ff + 0x193b8a000);
                                uVar9 = 0;
                                ppfVar32 = NULL;
                            }
                            puVar36 = 0x290 + 0x1d6cc0000;
                            tmp_ldWn = *(0x290 + 0x1d6cc0000);
                            uVar3 = tmp_ldWn;
                            if ((uVar3 & 1) == 0) goto code_r0x00019390e3c4;
                        }
                        (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                                  (*geo::codec::Allocator::instance()::alloc, ppfVar32, 0);
                        if (*pcVar7 != '\0') {
                            tmp_ldWn = *puVar36;
                            uVar3 = tmp_ldWn;
                            if (((uVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar4 != 0)) {
                                ppcVar14 = operator new(unsigned long)(0x108);
                                ppcVar14[1] = 0x61 + 0x193b8a000;
                                ppcVar14[2] = 0xc36000000008 | 0x99af000000000000;
                                ppcVar14[3] = 0x61 + 0x193b8a000;
                                pcVar16 = *0x193af97f0;
                                ppcVar14[5] = *0x193af97f8;
                                ppcVar14[4] = pcVar16;
                                *ppcVar14 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                            0xfa8 + 0x10;
                                ppcVar14[8] = NULL;
                                ppcVar14[7] = NULL;
                                ppcVar14[10] = NULL;
                                ppcVar14[9] = NULL;
                                ppcVar14[0xc] = NULL;
                                ppcVar14[0xb] = NULL;
                                ppcVar14[0xe] = NULL;
                                ppcVar14[0xd] = NULL;
                                ppcVar14[0x10] = NULL;
                                ppcVar14[0xf] = NULL;
                                ppcVar14[0x12] = NULL;
                                ppcVar14[0x11] = NULL;
                                ppcVar14[0x14] = NULL;
                                ppcVar14[0x13] = NULL;
                                ppcVar14[0x16] = NULL;
                                ppcVar14[0x15] = NULL;
                                ppcVar14[0x18] = NULL;
                                ppcVar14[0x17] = NULL;
                                ppcVar14[0x1a] = NULL;
                                ppcVar14[0x19] = NULL;
                                ppcVar14[0x1c] = NULL;
                                ppcVar14[0x1b] = NULL;
                                ppcVar14[0x1e] = NULL;
                                ppcVar14[0x1d] = NULL;
                                ppcVar14[0x1f] = NULL;
                                uVar15 = pthread_rwlock_init(ppcVar14 + 7, 0);
                                if (uVar15 != 0) {
                                    geo::read_write_lock::logFailure(int, char const*)(uVar15, 0x85 + 0x193b8a000);
                                }
                                pcVar16 = malloc_create_zone(0, 0);
                                ppcVar14[6] = pcVar16;
                                malloc_set_zone_name(pcVar16, 0x61 + 0x193b8a000);
                                pcVar16 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                ppcVar14[0x20] = pcVar16;
                                *geo::codec::Allocator::instance()::alloc = ppcVar14;
                                __cxa_guard_release(0x290 + 0x1d6cc0000);
                            }
                            (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                                      (*geo::codec::Allocator::instance()::alloc, *(pcVar7 + 0x28), 0);
                        }
                        tmp_ldWn = *puVar36;
                        uVar3 = tmp_ldWn;
                        if (((uVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar4 != 0)) {
                            ppcVar14 = operator new(unsigned long)(0x108);
                            ppcVar14[1] = 0x61 + 0x193b8a000;
                            ppcVar14[2] = 0xc36000000008 | 0x99af000000000000;
                            ppcVar14[3] = 0x61 + 0x193b8a000;
                            pcVar16 = *0x193af97f0;
                            ppcVar14[5] = *0x193af97f8;
                            ppcVar14[4] = pcVar16;
                            *ppcVar14 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                        0xfa8 + 0x10;
                            ppcVar14[8] = NULL;
                            ppcVar14[7] = NULL;
                            ppcVar14[10] = NULL;
                            ppcVar14[9] = NULL;
                            ppcVar14[0xc] = NULL;
                            ppcVar14[0xb] = NULL;
                            ppcVar14[0xe] = NULL;
                            ppcVar14[0xd] = NULL;
                            ppcVar14[0x10] = NULL;
                            ppcVar14[0xf] = NULL;
                            ppcVar14[0x12] = NULL;
                            ppcVar14[0x11] = NULL;
                            ppcVar14[0x14] = NULL;
                            ppcVar14[0x13] = NULL;
                            ppcVar14[0x16] = NULL;
                            ppcVar14[0x15] = NULL;
                            ppcVar14[0x18] = NULL;
                            ppcVar14[0x17] = NULL;
                            ppcVar14[0x1a] = NULL;
                            ppcVar14[0x19] = NULL;
                            ppcVar14[0x1c] = NULL;
                            ppcVar14[0x1b] = NULL;
                            ppcVar14[0x1e] = NULL;
                            ppcVar14[0x1d] = NULL;
                            ppcVar14[0x1f] = NULL;
                            uVar15 = pthread_rwlock_init(ppcVar14 + 7, 0);
                            if (uVar15 != 0) {
                                geo::read_write_lock::logFailure(int, char const*)(uVar15, 0x85 + 0x193b8a000);
                            }
                            pcVar16 = malloc_create_zone(0, 0);
                            ppcVar14[6] = pcVar16;
                            malloc_set_zone_name(pcVar16, 0x61 + 0x193b8a000);
                            pcVar16 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                            ppcVar14[0x20] = pcVar16;
                            *geo::codec::Allocator::instance()::alloc = ppcVar14;
                            __cxa_guard_release(0x290 + 0x1d6cc0000);
                        }
                        (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                                  (*geo::codec::Allocator::instance()::alloc, pcVar7, 0);
code_r0x00019390dca4:
                        iVar11 = std::__1::chrono::steady_clock::now()();
                        iStack_90 = 0x3a0 + 0x193b8a000;
                        iStack_80 = *0x8 + -0x90;
                        iVar12 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                                           (iStack_a8 + 0x778, *0x8 + -0x90, 0x74c + 0x193af9000, *0x8 + -0x80, 
                                            *0x8 + -0x88);
                        iVar11 = SUB168(SEXT816(iVar11 - iVar8) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
                        *(iVar12 + 0x20) = ((iVar11 >> 7) - (iVar11 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
                        if (piVar31 == NULL) {
                            return uVar9;
                        }
                        LOAcquire();
                        tmp_ldXn = piVar31[1];
                        iVar11 = tmp_ldXn;
                        tmp_stXn = iVar11 + -1;
                        iVar11 = tmp_stXn;
                        piVar31[1] = iVar11;
                        iVar11 = tmp_ldXn;
                        LORelease();
                        if (iVar11 == 0) {
                            (**(*piVar31 + 0x10))(piVar31);
                            std::__1::__shared_weak_count::__release_weak()(piVar31);
                            return uVar9;
                        }
                        return uVar9;
                    }
                }
                uVar9 = **reloc.__stderrp;
                goto code_r0x00019390dbc8;
            }
            uVar18 = uVar18 + 1;
        } while (uVar18 <= uVar19 && uVar19 != uVar18);
    }
    return 1;
}
