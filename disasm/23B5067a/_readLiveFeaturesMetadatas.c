
uint64_t geo::codec::_readLiveFeaturesMetadatas(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint uVar4;
    int32_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t **ppiVar12;
    ulong uVar13;
    int64_t *piVar14;
    code *UNRECOVERED_JUMPTABLE;
    int64_t **ppiVar15;
    int64_t **ppiVar16;
    int64_t *piVar17;
    int64_t iVar18;
    int64_t iVar19;
    bool bVar20;
    int64_t *piVar21;
    int64_t iVar22;
    int64_t **ppiVar23;
    uint32_t uVar24;
    int64_t *piVar25;
    int64_t iVar26;
    uint32_t uVar27;
    int64_t *piVar28;
    ushort uVar29;
    float fVar30;
    uint uVar31;
    ulong uStack_1f8;
    uchar auStack_1f0 [4];
    uint32_t uStack_1ec;
    uint16_t uStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    int64_t iStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    int64_t iStack_168;
    uint64_t uStack_160;
    int64_t *piStack_158;
    int64_t **ppiStack_150;
    uint64_t uStack_148;
    float fStack_140;
    uint32_t uStack_134;
    int64_t *piStack_130;
    int64_t *piStack_128;
    int64_t *piStack_120;
    int64_t iStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    int64_t **ppiStack_b8;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    int64_t *piStack_88;
    int64_t iStack_80;
    
    uVar10 = param_1[1];
    if (uVar10 != 0) {
        uVar9 = 0;
        do {
            if (*(*param_1 + uVar9 * 0x10) == 0xa5) {
                pcVar6 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar9, 0xa5, *param_2 + 0x778);
                if (pcVar6 != NULL) {
                    iStack_98 = 0x602 + 0x193b8a000;
                    iStack_90 = *param_2;
                    piStack_88 = param_2[1];
                    if (piStack_88 != NULL) {
                        tmp_ldXn = piStack_88[1];
                        iVar26 = tmp_ldXn;
                        tmp_stXn = iVar26 + 1;
                        iVar26 = tmp_stXn;
                        piStack_88[1] = iVar26;
                        uVar8 = tmp_ldXn;
                    }
                    iStack_80 = std::__1::chrono::steady_clock::now()();
                    uStack_a0 = 0;
                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x9c);
                    if ((uVar10 & 1) == 0) {
                        uVar8 = **reloc.__stderrp;
                        uVar13 = 0x2d19;
                    }
                    else {
                        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0xa0);
                        if ((uVar10 & 1) == 0) {
                            uVar8 = **reloc.__stderrp;
                            uVar13 = 0x2d1a;
                        }
                        else {
                            uStack_a8 = 0;
                            uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0xa4)
                            ;
                            if ((uVar10 & 1) == 0) {
                                uVar8 = **reloc.__stderrp;
                                uVar13 = 0x2d1e;
                            }
                            else {
                                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                   (pcVar6, *0x8 + -0xa8);
                                if ((uVar10 & 1) != 0) {
                                    uVar10 = uStack_a8._4_4_;
                                    if (uStack_a8._4_4_ == 0) {
                                        iVar26 = 0;
                                        iVar7 = 0;
                                    }
                                    else {
                                        iVar7 = operator new(unsigned long)(uVar10);
                                        iVar26 = iVar7 + uVar10;
                                        bzero(iVar7, uVar10);
                                    }
                                    iStack_c8 = 0;
                                    iStack_d0 = 0;
                                    ppiStack_b8 = NULL;
                                    uStack_c0 = 0;
                                    uVar31 = uStack_a0;
                                    uVar4 = uStack_a0._4_4_;
                                    uStack_160 = (uStack_160 >> 0x20) << 0x20;
                                    iVar5 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                      (pcVar6, *0x8 + -0x160);
                                    if (iVar5 != 0) {
                                        iVar11 = *(pcVar6 + 0x30);
                                        uVar10 = iVar11 + uStack_160;
                                        if (uVar10 < *(pcVar6 + 0x38) || uVar10 == *(pcVar6 + 0x38)) {
                                            *(pcVar6 + 0x30) = uVar10;
                                            iVar5 = mgcl::ints::IntDecompressor<unsigned char>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, unsigned char*)
                                                              (*0x8 + -0xd0, *(pcVar6 + 0x28) + iVar11, uStack_160, 
                                                               uVar4, uVar31, iVar26 - iVar7, iVar7);
                                            if (iVar5 == 0) {
                                                uVar24 = uStack_a8._4_4_;
                                                iStack_e8 = 0;
                                                iStack_e0 = 0;
                                                iStack_f0 = 0;
                                                if (uVar24 != 0) {
                                                    iVar11 = uVar24 << 1;
                                                    iStack_f0 = operator new(unsigned long)(iVar11);
                                                    iVar26 = iStack_f0 + uVar24 * 2;
                                                    iStack_e0 = iVar26;
                                                    bzero(iStack_f0, iVar11);
                                                    iStack_e8 = iVar26;
                                                }
                                                iStack_d8 = 0;
                                                uStack_108 = 0;
                                                uStack_110 = 0;
                                                uStack_f8 = 0;
                                                uStack_100 = 0;
                                                uVar10 = fcn.1938df044(pcVar6, *0x8 + -0x110, uStack_a0._4_4_, uStack_a0
                                                                       , *0x8 + -0xf0);
                                                if ((uVar10 & 1) == 0) {
                                                    uVar8 = **reloc.__stderrp;
                                                    *(*0x8 + -0x1f8) = 0x2d28;
                                                    fprintf(uVar8, 0x8ff + 0x193b8a000);
                                                    iVar5 = 6;
                                                    goto code_r0x000193923264;
                                                }
                                                piVar25 = uStack_a8._4_4_;
                                                piStack_128 = NULL;
                                                piStack_120 = NULL;
                                                piStack_130 = NULL;
                                                if (uStack_a8._4_4_ != 0) {
                                                    iVar26 = piVar25 << 1;
                                                    piStack_130 = operator new(unsigned long)(iVar26);
                                                    piVar25 = piStack_130 + piVar25 * 2;
                                                    piStack_120 = piVar25;
                                                    bzero(piStack_130, iVar26);
                                                    piStack_128 = piVar25;
                                                }
                                                iStack_118 = 0;
                                                uVar10 = fcn.1938df044(pcVar6, *0x8 + -0x110, uStack_a0._4_4_, uStack_a0
                                                                       , *0x8 + -0x130);
                                                if ((uVar10 & 1) == 0) {
                                                    uVar8 = **reloc.__stderrp;
                                                    uVar13 = 0x2d2b;
                                                }
                                                else {
                                                    uStack_134 = 0;
                                                    uVar10 = 
                                                            geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                                      (pcVar6, *0x8 + -0x134);
                                                    if ((uVar10 & 1) != 0) {
                                                        piStack_158 = NULL;
                                                        uStack_160 = 0;
                                                        uStack_148 = 0;
                                                        ppiStack_150 = NULL;
                                                        fStack_140 = 1.0;
                                                        if (uStack_134 == 0) goto code_r0x000193922ea4;
                                                        uVar24 = 0;
                                                        iVar26 = *0x8 + -400 + 0x40;
                                                        goto code_r0x0001939229e8;
                                                    }
                                                    uVar8 = **reloc.__stderrp;
                                                    uVar13 = 0x2d31;
                                                }
                                                *(*0x8 + -0x1f8) = uVar13;
                                                fprintf(uVar8, 0x8ff + 0x193b8a000);
                                                iVar5 = 6;
                                                goto code_r0x000193923254;
                                            }
                                        }
                                    }
                                    uVar8 = **reloc.__stderrp;
                                    *(*0x8 + -0x1f8) = 0x2d24;
                                    fprintf(uVar8, 0x8ff + 0x193b8a000);
                                    iVar5 = 6;
                                    goto code_r0x00019392281c;
                                }
                                uVar8 = **reloc.__stderrp;
                                uVar13 = 0x2d1f;
                            }
                        }
                    }
                    *(*0x8 + -0x1f8) = uVar13;
                    fprintf(uVar8, 0x8ff + 0x193b8a000);
                    goto code_r0x000193922590;
                }
                break;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar10 && uVar10 != uVar9);
    }
    uVar24 = 1;
    goto code_r0x000193922504;
code_r0x0001939229e8:
    do {
        uVar10 = *(pcVar6 + 0x30) + 4;
        if (*(pcVar6 + 0x38) <= uVar10 && uVar10 != *(pcVar6 + 0x38)) {
            uVar8 = **reloc.__stderrp;
            uVar13 = 0x2d35;
code_r0x000193922e84:
            *(*0x8 + -0x1f8) = uVar13;
            fprintf(uVar8, 0x8ff + 0x193b8a000);
            iVar5 = 6;
            goto code_r0x00019392324c;
        }
        uVar31 = *(*(pcVar6 + 0x28) + *(pcVar6 + 0x30));
        *(pcVar6 + 0x30) = uVar10;
        uStack_180 = (uStack_180 >> 0x20) << 0x20;
        iVar5 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x180);
        if (iVar5 == 0) {
            uVar8 = **reloc.__stderrp;
            uVar13 = 0x2d38;
            goto code_r0x000193922e84;
        }
        if (uStack_180 != 0) {
            uVar27 = 0;
            do {
                uStack_1a0 = (uStack_1a0 >> 0x20) << 0x20;
                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x1a0);
                piVar21 = piStack_158;
                if ((uVar10 & 1) == 0) {
                    uVar8 = **reloc.__stderrp;
                    uVar13 = 0x2d3c;
                    goto code_r0x000193922e84;
                }
                uVar2 = uStack_1a0;
                piVar28 = uVar2;
                if (piVar21 == NULL) {
code_r0x000193922ae0:
                    ppiVar23 = operator new(unsigned long)(0x18);
                    *(ppiVar23 + 2) = uVar2;
                    *(ppiVar23 + 0x14) = 0;
                    *ppiVar23 = NULL;
                    ppiVar23[1] = piVar28;
                    piVar14 = piVar25;
                    if (fStack_140 * ZEXT89(piVar21) < uStack_148 + 1 || piVar21 == NULL) {
                        uVar10 = 1;
                        if (0x2 < piVar21) {
                            uVar10 = (piVar21 & piVar21 + -1) != 0;
                        }
                        piVar25 = uVar10 | piVar21 << 1;
                        piVar14 = (uStack_148 + 1) / fStack_140;
                        if (piVar25 < piVar14 || piVar25 == piVar14) {
                            piVar25 = piVar14;
                        }
                        if (piVar25 + -1 != NULL) {
                            if ((piVar25 & piVar25 + -1) != 0) {
                                piVar25 = std::__1::__next_prime(unsigned long)(piVar25);
                                piVar21 = piStack_158;
                            }
                        }
                        else {
                            piVar25 = 0x2;
                        }
                        if (piVar25 < piVar21 || piVar25 == piVar21) {
                            if (piVar25 < piVar21) {
                                piVar14 = uStack_148 / fStack_140;
                                if (piVar21 < x8) {
code_r0x000193922e08:
                                    piVar14 = std::__1::__next_prime(unsigned long)();
                                }
                                else {
                                    uVar8 = NEON_cnt(piVar21, 1);
                                    uVar29 = NEON_uaddlv(uVar8, 1);
                                    if (1 < (CONCAT62(uVar8 >> 0x10, uVar29) & 0xffffffff)) goto code_r0x000193922e08;
                                    uVar10 = piVar14 + -1 | piVar14 + -1 >> 1;
                                    uVar10 = uVar10 | uVar10 >> 2;
                                    uVar10 = uVar10 | uVar10 >> 4;
                                    uVar10 = uVar10 | uVar10 >> 8;
                                    uVar10 = uVar10 | uVar10 >> 0x10;
                                    uVar10 = uVar10 | uVar10 >> 0x20;
                                    uVar10 = ((uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar10 & 0x5555555555555555);
                                    uVar10 = ((uVar10 & 0xcccccccccccccccc) >> 2) + (uVar10 & 0x3333333333333333);
                                    uVar10 = ((uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar10 & 0xf0f0f0f0f0f0f0f);
                                    uVar10 = ((uVar10 & 0xff00ff00ff00ff00) >> 8) + (uVar10 & 0xff00ff00ff00ff);
                                    uVar10 = ((uVar10 & 0xffff0000ffff0000) >> 0x10) + (uVar10 & 0xffff0000ffff);
                                    if (0x1 < piVar14) {
                                        piVar14 = 1L << (-(0x40 - ((uVar10 >> 0x20) + (uVar10 & 0xffffffff))) & 0x3f);
                                    }
                                }
                                uVar10 = uStack_160;
                                if (piVar25 < piVar14 || piVar25 == piVar14) {
                                    piVar25 = piVar14;
                                }
                                if (piVar25 < piVar21) {
                                    if (piVar25 != NULL) goto code_r0x000193922bbc;
                                    uStack_160 = 0;
                                    if (uVar10 != 0) {
                                        operator delete(void*)();
                                    }
                                    piStack_158 = NULL;
                                    piVar21 = NULL;
                                }
                                else {
                                    piVar21 = piStack_158;
                                }
                            }
                        }
                        else {
code_r0x000193922bbc:
                            if (piVar25 >> 0x3d != 0) {
                                std::__throw_bad_array_new_length[abi:v160006]()();
    // WARNING: Treating indirect jump as call
                                UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x1939232ac);
                                uVar10 = (*UNRECOVERED_JUMPTABLE)();
                                return uVar10;
                            }
                            uVar10 = operator new(unsigned long)(piVar25 << 3);
                            bVar20 = uStack_160 != 0;
                            uStack_160 = uVar10;
                            if (bVar20) {
                                operator delete(void*)();
                            }
                            piVar21 = NULL;
                            do {
                                *(uStack_160 + piVar21 * 8) = 0;
                                piVar21 = piVar21 + 1;
                            } while (piVar25 != piVar21);
                            piVar21 = piVar25;
                            piStack_158 = piVar25;
                            if (ppiStack_150 != NULL) {
                                piVar14 = ppiStack_150[1];
                                UNRECOVERED_JUMPTABLE = piVar25 + -1;
                                if ((piVar25 & UNRECOVERED_JUMPTABLE) != 0) {
                                    if (piVar25 <= piVar14) {
                                        uVar10 = 0;
                                        if (piVar25 != NULL) {
                                            uVar10 = piVar14 / piVar25;
                                        }
                                        piVar14 = piVar14 - uVar10 * piVar25;
                                    }
                                    *(uStack_160 + piVar14 * 8) = iVar26;
                                    ppiVar12 = ppiStack_150;
                                    ppiVar15 = *ppiStack_150;
                                    if (*ppiStack_150 != NULL) {
                                        do {
                                            while( true ) {
                                                piVar17 = ppiVar15[1];
                                                if (piVar25 <= piVar17) {
                                                    uVar10 = 0;
                                                    if (piVar25 != NULL) {
                                                        uVar10 = piVar17 / piVar25;
                                                    }
                                                    piVar17 = piVar17 - uVar10 * piVar25;
                                                }
                                                if (piVar17 != piVar14) break;
code_r0x000193922d38:
                                                ppiVar12 = ppiVar15;
                                                ppiVar15 = *ppiVar15;
                                                if (ppiVar15 == NULL) goto code_r0x000193922d88;
                                            }
                                            if (*(uStack_160 + piVar17 * 8) != 0) {
                                                *ppiVar12 = *ppiVar15;
                                                *ppiVar15 = **(uStack_160 + piVar17 * 8);
                                                **(uStack_160 + piVar17 * 8) = ppiVar15;
                                                ppiVar15 = ppiVar12;
                                                goto code_r0x000193922d38;
                                            }
                                            *(uStack_160 + piVar17 * 8) = ppiVar12;
                                            ppiVar16 = *ppiVar15;
                                            ppiVar12 = ppiVar15;
                                            piVar14 = piVar17;
                                            ppiVar15 = ppiVar16;
                                        } while (ppiVar16 != NULL);
                                    }
                                }
                                else {
                                    uVar10 = piVar14 & UNRECOVERED_JUMPTABLE;
                                    *(uStack_160 + uVar10 * 8) = iVar26;
                                    ppiVar15 = ppiStack_150;
                                    ppiVar12 = *ppiStack_150;
                                    if (*ppiStack_150 != NULL) {
                                        do {
                                            uVar9 = ppiVar12[1] & UNRECOVERED_JUMPTABLE;
                                            if (uVar9 == uVar10) {
                                            }
                                            else if (*(uStack_160 + uVar9 * 8) == 0) {
                                                *(uStack_160 + uVar9 * 8) = ppiVar15;
                                                uVar10 = uVar9;
                                            }
                                            else {
                                                *ppiVar15 = *ppiVar12;
                                                *ppiVar12 = **(uStack_160 + uVar9 * 8);
                                                **(uStack_160 + uVar9 * 8) = ppiVar12;
                                                ppiVar12 = ppiVar15;
                                            }
                                            ppiVar16 = *ppiVar12;
                                            ppiVar15 = ppiVar12;
                                            ppiVar12 = ppiVar16;
                                        } while (ppiVar16 != NULL);
                                    }
                                }
                            }
                        }
code_r0x000193922d88:
                        if ((piVar21 & piVar21 + -1) != 0) {
                            piVar14 = piVar28;
                            if (piVar21 < piVar28 || piVar21 == piVar28) {
                                uVar10 = 0;
                                if (piVar21 != NULL) {
                                    uVar10 = piVar28 / piVar21;
                                }
                                piVar14 = piVar28 - uVar10 * piVar21;
                            }
                        }
                        else {
                            piVar14 = piVar21 + -1 & uVar2;
                        }
                    }
                    ppiVar12 = *(uStack_160 + piVar14 * 8);
                    if (ppiVar12 == NULL) {
                        *ppiVar23 = ppiStack_150;
                        *(uStack_160 + piVar14 * 8) = iVar26;
                        ppiStack_150 = ppiVar23;
                        if (*ppiVar23 != NULL) {
                            piVar28 = (*ppiVar23)[1];
                            if ((piVar21 & piVar21 + -1) != 0) {
                                if (piVar21 <= piVar28) {
                                    uVar10 = 0;
                                    if (piVar21 != NULL) {
                                        uVar10 = piVar28 / piVar21;
                                    }
                                    piVar28 = piVar28 - uVar10 * piVar21;
                                }
                            }
                            else {
                                piVar28 = piVar28 & piVar21 + -1;
                            }
                            ppiVar12 = uStack_160 + piVar28 * 8;
                            goto code_r0x000193922a30;
                        }
                    }
                    else {
                        *ppiVar23 = *ppiVar12;
code_r0x000193922a30:
                        *ppiVar12 = ppiVar23;
                    }
                    uStack_148 = uStack_148 + 1;
                }
                else if ((piVar21 & piVar21 + -1) != 0) {
                    piVar25 = piVar28;
                    if (piStack_158 < piVar28 || piStack_158 == piVar28) {
                        uVar10 = 0;
                        if (piStack_158 != NULL) {
                            uVar10 = piVar28 / piVar21;
                        }
                        piVar25 = piVar28 - uVar10 * piVar21;
                    }
                    ppiVar23 = *(uStack_160 + piVar25 * 8);
                    if (ppiVar23 == NULL) goto code_r0x000193922ae0;
                    do {
                        ppiVar23 = *ppiVar23;
                        if (ppiVar23 == NULL) goto code_r0x000193922ae0;
                        piVar14 = ppiVar23[1];
                        if (piVar14 != piVar28) {
                            if (piStack_158 <= piVar14) {
                                uVar10 = 0;
                                if (piStack_158 != NULL) {
                                    uVar10 = piVar14 / piVar21;
                                }
                                piVar14 = piVar14 - uVar10 * piVar21;
                            }
                            if (piVar14 != piVar25) goto code_r0x000193922ae0;
                        }
                    } while (*(ppiVar23 + 2) != uVar2);
                }
                else {
                    piVar25 = piVar21 + -1 & uVar2;
                    ppiVar23 = *(uStack_160 + piVar25 * 8);
                    if (ppiVar23 == NULL) goto code_r0x000193922ae0;
                    do {
                        ppiVar23 = *ppiVar23;
                        if ((ppiVar23 == NULL) || (ppiVar23[1] != piVar28 && (ppiVar23[1] & piVar21 + -1) != piVar25))
                        goto code_r0x000193922ae0;
                    } while (*(ppiVar23 + 2) != uVar2);
                }
                *(ppiVar23 + 0x14) = uVar31;
                uVar27 = uVar27 + 1;
            } while (uVar27 < uStack_180);
        }
        uVar24 = uVar24 + 1;
    } while (uVar24 < uStack_134);
code_r0x000193922ea4:
    uVar24 = uStack_a8._4_4_;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_180 = 0;
    if (uVar24 != 0) {
        iVar26 = uVar24 << 1;
        uStack_180 = operator new(unsigned long)(iVar26);
        uVar10 = uStack_180 + uVar24 * 2;
        uStack_170 = uVar10;
        bzero(uStack_180, iVar26);
        uStack_178 = uVar10;
    }
    iStack_168 = 0;
    uVar10 = fcn.1938df044(pcVar6, *0x8 + -0x110, uStack_a0._4_4_, uStack_a0, *0x8 + -0x180);
    if ((uVar10 & 1) == 0) {
        uVar8 = **reloc.__stderrp;
        *(*0x8 + -0x1f8) = 0x2d42;
        fprintf(uVar8, 0x8ff + 0x193b8a000);
        iVar5 = 6;
    }
    else {
        uVar24 = uStack_a8;
        uStack_198 = 0;
        uStack_190 = 0;
        uStack_1a0 = 0;
        if (uVar24 != 0) {
            iVar26 = uVar24 << 3;
            uVar9 = operator new(unsigned long)(iVar26);
            uVar10 = uVar9 + uVar24 * 8;
            uStack_1a0 = uVar9;
            *(&stack0x00000000 + -400) = uVar10;
            bzero(uVar9, iVar26);
            uStack_198 = uVar10;
        }
        iStack_188 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uVar10 = fcn.1938dece4(pcVar6, *0x8 + -0x1c0, uStack_a0._4_4_, uStack_a0, *0x8 + -0x1a0);
        if ((uVar10 & 1) == 0) {
            uVar8 = **reloc.__stderrp;
            *(*0x8 + -0x1f8) = 0x2d46;
            fprintf(uVar8, 0x8ff + 0x193b8a000);
            iVar5 = 6;
        }
        else {
            uVar24 = uStack_a8;
            iStack_1d8 = 0;
            iStack_1d0 = 0;
            iStack_1e0 = 0;
            if (uVar24 != 0) {
                iVar11 = uVar24 << 3;
                iStack_1e0 = operator new(unsigned long)(iVar11);
                iVar26 = iStack_1e0 + uVar24 * 8;
                iStack_1d0 = iVar26;
                bzero(iStack_1e0, iVar11);
                iStack_1d8 = iVar26;
            }
            iStack_1c8 = 0;
            uVar10 = fcn.1938dece4(pcVar6, *0x8 + -0x1c0, uStack_a0._4_4_, uStack_a0, *0x8 + -0x1e0);
            if ((uVar10 & 1) == 0) {
                uVar8 = **reloc.__stderrp;
                uVar13 = 0x2d49;
code_r0x0001939231f8:
                *(*0x8 + -0x1f8) = uVar13;
                fprintf(uVar8, 0x8ff + 0x193b8a000);
                iVar5 = 6;
code_r0x000193923214:
                if (iStack_1e0 == 0) goto code_r0x000193923224;
            }
            else {
                piVar25 = geo::codec::Allocator::instance()();
                iVar26 = (**(*piVar25 + 0x10))(piVar25, uStack_a8 << 4, 8);
                *(*param_2 + 0x290) = iVar26;
                if (iVar26 == 0) {
                    uVar8 = **reloc.__stderrp;
                    uVar13 = 0x2d4c;
                    goto code_r0x0001939231f8;
                }
                uVar24 = uStack_a8._4_4_;
                if (uVar24 != 0) {
                    iVar26 = 0;
                    uVar10 = 0;
                    do {
                        iVar11 = iStack_d8;
                        iStack_d8 = iVar11 + 1;
                        if (*(iVar7 + iVar26) == '\x01') {
                            uVar3 = *(iStack_f0 + iVar11 * 2);
                            iVar11 = *param_2;
                            if (*(iVar11 + 0x260) < uVar3 || *(iVar11 + 0x260) == uVar3) {
                                uVar8 = **reloc.__stderrp;
                                uVar13 = 0x2d54;
                                goto code_r0x0001939231f8;
                            }
                            iVar11 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, geo::small_vector<GeoCodecsMetadata, 2ul> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, geo::small_vector<GeoCodecsMetadata, 2ul> >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, geo::small_vector<GeoCodecsMetadata, 2ul> >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, geo::small_vector<GeoCodecsMetadata, 2ul> >, std::__1::equal_to<unsigned long long>, std::__1::hash<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, geo::small_vector<GeoCodecsMetadata, 2ul> > > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&)
                                               (iVar11 + 0x268, *(*(iVar11 + 600) + uVar3 * 8));
                            iVar22 = iStack_118;
                            iStack_118 = iVar22 + 1;
                            uVar29 = *(piStack_130 + iVar22 * 2);
                            iVar22 = fcn.1939371fc(uStack_160, piStack_158, uVar29);
                            if (iVar22 == 0) {
                                fVar30 = 1.0;
                            }
                            else {
                                fVar30 = *(iVar22 + 0x14);
                            }
                            auStack_1f0[0] = uVar29;
                            iVar22 = iStack_168;
                            iStack_168 = iVar22 + 1;
                            uStack_1e8 = *(uStack_180 + iVar22 * 2);
                            uVar24 = uStack_1e8;
                            uVar27 = uVar10;
                            uStack_1ec = uVar27;
                            if (uStack_1e8 != 0) {
                                uVar9 = 0;
                                iVar22 = *param_2;
                                iVar19 = iStack_188;
                                uVar10 = uVar10 << -0x3c + 0x40 & 0xffffffff0;
                                iVar18 = iStack_1c8;
                                uVar2 = 0;
                                if (uVar27 <= uStack_a8) {
                                    uVar2 = uStack_a8 - uVar27;
                                }
                                do {
                                    if (uVar2 == uVar9) {
                                        uVar8 = **reloc.__stderrp;
                                        uVar13 = 0x2d62;
                                        goto code_r0x0001939231f8;
                                    }
                                    puVar1 = *(iVar22 + 0x290) + uVar10;
                                    iStack_188 = iVar19 + 1 + uVar9;
                                    *puVar1 = *(uStack_1a0 + iVar19 * 8 + (uVar9 << 3));
                                    iStack_1c8 = iVar18 + 1 + uVar9;
                                    *(puVar1 + 1) = fVar30 * *(iStack_1e0 + iVar18 * 8 + (uVar9 << 3));
                                    uVar9 = uVar9 + 1;
                                    uVar10 = uVar10 + 0x10;
                                } while (uStack_1e8 != uVar9);
                            }
                            void geo::small_vector_base<GeoCodecsMetadata>::emplace_back<GeoCodecsMetadata&>(GeoCodecsMetadata&)
                                      (iVar11 + 0x18, *0x8 + -0x1f0);
                            uVar10 = uVar27 + uVar24;
                            uVar24 = uStack_a8._4_4_;
                        }
                        iVar5 = 0;
                        iVar26 = iVar26 + 1;
                    } while (iVar26 <= uVar24 && uVar24 != iVar26);
                    goto code_r0x000193923214;
                }
                iVar5 = 0;
                if (iStack_1e0 == 0) goto code_r0x000193923224;
            }
            iStack_1d8 = iStack_1e0;
            operator delete(void*)();
        }
code_r0x000193923224:
        mgcl::ints::IntDecompressor<unsigned long long>::~IntDecompressor()(*0x8 + -0x1c0);
        if (uStack_1a0 != 0) {
            uStack_198 = uStack_1a0;
            operator delete(void*)();
        }
    }
    if (uStack_180 != 0) {
        uStack_178 = uStack_180;
        operator delete(void*)();
    }
code_r0x00019392324c:
    std::__1::unordered_map<unsigned int, float, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, float> > >::~unordered_map[abi:v160006]()
              (*0x8 + -0x160);
code_r0x000193923254:
    if (piStack_130 != NULL) {
        piStack_128 = piStack_130;
        operator delete(void*)();
    }
code_r0x000193923264:
    mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(*0x8 + -0x110);
    if (iStack_f0 != 0) {
        iStack_e8 = iStack_f0;
        operator delete(void*)();
    }
code_r0x00019392281c:
    ppiVar23 = ppiStack_b8;
    ppiStack_b8 = NULL;
    if (ppiVar23 != NULL) {
        piVar25 = *ppiVar23;
        *ppiVar23 = NULL;
        if (piVar25 != NULL) {
            iVar26 = *piVar25;
            *piVar25 = 0;
            if (iVar26 != 0) {
                if (*(iVar26 + 0x68) != 0) {
                    *(iVar26 + 0x70) = *(iVar26 + 0x68);
                    operator delete(void*)();
                }
                if (*(iVar26 + 0x50) != 0) {
                    *(iVar26 + 0x58) = *(iVar26 + 0x50);
                    operator delete(void*)();
                }
                operator delete(void*)(iVar26);
            }
            operator delete(void*)(piVar25);
        }
        operator delete(void*)(ppiVar23);
    }
    if (iStack_d0 != 0) {
        iStack_c8 = iStack_d0;
        operator delete(void*)();
    }
    if (iVar7 != 0) {
        operator delete(void*)(iVar7);
    }
    if (iVar5 == 6) {
code_r0x000193922590:
        bVar20 = false;
        if (*pcVar6 != '\0') {
code_r0x00019392259c:
            piVar25 = geo::codec::Allocator::instance()();
            (**(*piVar25 + 0x28))(piVar25, *(pcVar6 + 0x28), 0);
        }
code_r0x0001939225cc:
        piVar25 = geo::codec::Allocator::instance()();
        (**(*piVar25 + 0x28))(piVar25, pcVar6, 0);
        if (bVar20) {
            iVar7 = 1;
        }
        else {
            iVar26 = *param_2;
            if (*(iVar26 + 0x280) != 0) {
                piVar25 = *(iVar26 + 0x278);
                if (*(iVar26 + 0x278) != NULL) {
                    do {
                        piVar21 = *piVar25;
                        if (piVar25[3] != piVar25[5]) {
                            free();
                        }
                        operator delete(void*)(piVar25);
                        piVar25 = piVar21;
                    } while (piVar21 != NULL);
                }
                *(iVar26 + 0x278) = 0;
                iVar7 = *(iVar26 + 0x270);
                if (iVar7 != 0) {
                    iVar11 = 0;
                    do {
                        *(*(iVar26 + 0x268) + iVar11 * 8) = 0;
                        iVar11 = iVar11 + 1;
                    } while (iVar7 != iVar11);
                }
                *(iVar26 + 0x280) = 0;
                iVar26 = *param_2;
            }
            if (*(iVar26 + 0x290) == 0) {
                iVar7 = 0;
            }
            else {
                piVar25 = geo::codec::Allocator::instance()();
                (**(*piVar25 + 0x28))(piVar25, *(*param_2 + 0x290), 0);
                iVar7 = 0;
                *(*param_2 + 0x290) = 0;
            }
        }
    }
    else if (iVar5 == 0) {
        bVar20 = true;
        if (*pcVar6 != '\0') goto code_r0x00019392259c;
        goto code_r0x0001939225cc;
    }
    iVar26 = iStack_98;
    uVar24 = iVar7;
    iVar22 = iStack_90;
    iVar7 = std::__1::chrono::steady_clock::now()();
    iVar11 = iStack_80;
    iStack_d0 = iVar26;
    if (iVar26 != 0) {
        uStack_160 = *0x8 + -0xd0;
        iVar26 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar22 + 0x778, *0x8 + -0xd0, 0x74c + 0x193af9000, *0x8 + -0x160, *0x8 + -0xf0);
        iVar7 = SUB168(SEXT816(iVar7 - iVar11) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar26 + 0x20) = ((iVar7 >> 7) - (iVar7 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar25 = piStack_88;
    if (piStack_88 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_88[1];
        iVar26 = tmp_ldXn;
        tmp_stXn = iVar26 + -1;
        iVar26 = tmp_stXn;
        piStack_88[1] = iVar26;
        iVar26 = tmp_ldXn;
        LORelease();
        if (iVar26 == 0) {
            (**(*piVar25 + 0x10))(piVar25);
            std::__1::__shared_weak_count::__release_weak()(piVar25);
        }
    }
code_r0x000193922504:
    return uVar24 & 1;
}
