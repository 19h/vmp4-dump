
int64_t * geo::codec::chapterForTag(VMP4Tile*, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                    (int64_t *param_1, uint32_t param_2, uint64_t *param_3)

{
    char *pcVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uchar *puVar5;
    uint64_t uVar6;
    bool bVar7;
    uint64_t uVar8;
    code *pcVar9;
    int64_t **ppiVar10;
    int64_t *piVar11;
    int32_t iVar12;
    int64_t iVar13;
    int64_t **ppiVar14;
    uchar *puVar15;
    int64_t *piVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    int64_t *unaff_x26;
    ushort uVar19;
    ulong uVar20;
    uchar *puStack_58;
    
    uVar8 = param_1[1];
    if (uVar8 != 0) {
        uVar6 = 0;
        do {
            if (*(*param_1 + uVar6 * 0x10) == param_2) {
                if (param_1[1] < uVar6 || param_1[1] == uVar6) {
                    return NULL;
                }
                if (*(*param_1 + uVar6 * 0x10) != param_2) {
                    return NULL;
                }
                iVar13 = *param_1 + uVar6 * 0x10;
                if (param_1[4] < *(iVar13 + 8) + *(iVar13 + 4)) {
                    return NULL;
                }
                piVar4 = geo::codec::Allocator::instance()();
                piVar4 = (**(*piVar4 + 0x18))(piVar4, 1, 0x48);
                if (piVar4 == NULL) {
                    return NULL;
                }
                piVar17 = *(iVar13 + 8);
                pcVar1 = param_1[3] + *(iVar13 + 4);
                cVar2 = *pcVar1;
                *piVar4 = cVar2;
                iVar12 = *(iVar13 + 0xc);
                if (iVar12 + 1 == 0) {
                    iVar12 = *(param_1 + 0x14);
                }
                *(piVar4 + 8) = iVar12;
                piVar18 = piVar4;
                if (cVar2 == '\x01') {
                    if (4 < piVar17 + -1) {
                        uVar3 = *(pcVar1 + 1);
                        if (uVar3 < 0x400001) {
                            piVar4[7] = uVar3;
                            if (uVar3 == 0) {
                                piVar4[5] = 0;
                            }
                            else {
                                piVar18 = geo::codec::Allocator::instance()();
                                iVar13 = (**(*piVar18 + 0x10))(piVar18, uVar3, 8);
                                piVar4[5] = iVar13;
                                puStack_58 = piVar4[7];
                                piVar18 = uncompress(iVar13, &puStack_58, pcVar1 + 1 + 4, piVar17 + -1);
                                if (piVar18 != 0) {
                                    piVar18 = fprintf(**reloc.__stderrp, 0x73c + 0x193b8a000);
                                }
                            }
                            goto code_r0x0001938e0824;
                        }
                        piVar18 = fprintf(**reloc.__stderrp, 0x70f + 0x193b8a000);
                    }
                    piVar4[5] = 0;
                    piVar4[7] = 0;
                }
                else if (cVar2 == '\0') {
                    piVar4[5] = pcVar1 + 1;
                    piVar4[7] = piVar17 + -1;
                }
code_r0x0001938e0824:
                puVar15 = puStack_58;
                if (piVar4[5] == 0) {
                    piVar17 = geo::codec::Allocator::instance()();
                    (**(*piVar17 + 0x28))(piVar17, piVar4, 0);
                    return NULL;
                }
                uVar3 = param_2 + -1;
                uVar8 = uVar3;
                if (0xa8 < uVar3) {
                    piVar16 = 0x608 + 0x193b01000;
                    goto code_r0x0001938e0bd8;
                }
                piVar16 = 0xd8 + 0x193b8a000;
                if (0xa8 < uVar8) {
                    uVar8 = 0;
                }
                iVar13 = 0xe9c + 0x1938e0000;
                goto code_r0x0001938e0850;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar8 && uVar8 != uVar6);
    }
    return NULL;
    do {
        iVar13 = 0x1938e0854;
        uVar8 = uVar8 + 0x1938e0854;
        switch(uVar8) {
        case 0x1938d0854:
            return piVar18;
        case 0x1938e0754:
            goto code_r0x0001938e0754;
        case 0x1938e0850:
code_r0x0001938e0850:
            uVar8 = *(iVar13 + uVar8 * 4);
            break;
        case 0x1938e0950:
            goto code_r0x0001938e0bd8;
        case 0x1938e0b54:
            goto code_r0x0001938e0b54;
        case 0x1938e2854:
            if (piVar18 == 0) {
                if (*piVar4 != 0) {
                    geo::codec::VertexPoolDealloc(GeoCodecsVertexPool*)();
                    piVar17 = NULL;
                    *piVar4 = 0;
                    if (puStack_58 == NULL) {
                        return NULL;
                    }
                    goto code_r0x0001938e28f0;
                }
            }
            else {
                if (puVar15 == NULL) {
                    return 0x1;
                }
                piVar17 = geo::codec::Allocator::instance()();
                puVar5 = (**(*piVar17 + 0x18))(piVar17, 1, 0x48);
                *piVar4 = puVar5;
                if (puVar5 != NULL) {
                    *(puVar5 + 0x28) = *(puVar15 + 0x28);
                    *puVar5 = *puVar15;
                    if (param_3 == NULL) {
                        bVar7 = false;
                    }
                    else {
                        bVar7 = 0xe00 < (*param_3 & 0x3f00);
                    }
                    geo::codec::_createLOD(GeoCodecsCurveVertexPool*, GeoCodecsVertexPool*, unsigned long, bool, unsigned int**, GeoCodecsPointsOnRoadLODData*, GeoCodecsCharacteristicPointsLODData*, GeoCodecsStrokeSpecificationsLODData*)
                              (puVar15, puVar5, 0, bVar7, 0, 0, 0, 0);
                    piVar17 = 0x1;
                    if (puStack_58 == NULL) {
                        return 0x1;
                    }
                    goto code_r0x0001938e28f0;
                }
            }
            piVar17 = NULL;
            if (puStack_58 == NULL) {
                return NULL;
            }
code_r0x0001938e28f0:
            geo::codec::CurveVertexPoolDealloc(GeoCodecsCurveVertexPool*)();
            return piVar17;
        }
    } while( true );
code_r0x0001938e0b54:
code_r0x0001938e0bd8:
    uVar6 = 0xeb382d69 | 0x9ddfea0800000000;
    uVar8 = ((piVar16 << 3) + 8 ^ piVar16 >> 0x20) * uVar6;
    uVar8 = (piVar16 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * uVar6;
    piVar18 = (uVar8 ^ uVar8 >> 0x2f) * uVar6;
    piVar4 = param_3[1];
    if (piVar4 != NULL) {
        pcVar9 = piVar4 + -1;
        if ((piVar4 & pcVar9) != 0) {
            unaff_x26 = piVar18;
            if (piVar4 <= piVar18) {
                uVar8 = 0;
                if (piVar4 != NULL) {
                    uVar8 = piVar18 / piVar4;
                }
                unaff_x26 = piVar18 - uVar8 * piVar4;
            }
            ppiVar14 = *(*param_3 + unaff_x26 * 8);
            if (ppiVar14 != NULL) {
                do {
                    ppiVar14 = *ppiVar14;
                    if (ppiVar14 == NULL) goto code_r0x0001938e0c84;
                    piVar11 = ppiVar14[1];
                    if (piVar11 != piVar18) {
                        if (piVar4 <= piVar11) {
                            uVar8 = 0;
                            if (piVar4 != NULL) {
                                uVar8 = piVar11 / piVar4;
                            }
                            piVar11 = piVar11 - uVar8 * piVar4;
                        }
                        if (piVar11 != unaff_x26) goto code_r0x0001938e0c84;
                    }
                } while (ppiVar14[2] != piVar16);
                goto code_r0x0001938e0e80;
            }
        }
        else {
            unaff_x26 = piVar18 & pcVar9;
            ppiVar14 = *(*param_3 + unaff_x26 * 8);
            if (ppiVar14 != NULL) {
                do {
                    ppiVar14 = *ppiVar14;
                    if ((ppiVar14 == NULL) || (ppiVar14[1] != piVar18 && (ppiVar14[1] & pcVar9) != unaff_x26))
                    goto code_r0x0001938e0c84;
                } while (ppiVar14[2] != piVar16);
                goto code_r0x0001938e0e80;
            }
        }
    }
code_r0x0001938e0c84:
    ppiVar14 = operator new(unsigned long)(0x28);
    ppiVar14[3] = NULL;
    ppiVar14[4] = NULL;
    ppiVar14[1] = piVar18;
    ppiVar14[2] = piVar16;
    *ppiVar14 = NULL;
    if (!(param_3[3] + 1 <= *(param_3 + 4) * ZEXT89(piVar4)) || piVar4 == NULL) {
        uVar8 = 1;
        if (0x2 < piVar4) {
            uVar8 = (piVar4 & piVar4 + -1) != 0;
        }
        piVar16 = uVar8 | piVar4 << 1;
        piVar11 = (param_3[3] + 1) / *(param_3 + 4);
        if (piVar16 < piVar11 || piVar16 == piVar11) {
            piVar16 = piVar11;
        }
        if (piVar16 + -1 != NULL) {
            if ((piVar16 & piVar16 + -1) != 0) {
                piVar16 = std::__1::__next_prime(unsigned long)(piVar16);
                piVar4 = param_3[1];
            }
        }
        else {
            piVar16 = 0x2;
        }
        if (piVar16 < piVar4 || piVar16 == piVar4) {
            if (piVar16 < piVar4) {
                piVar11 = param_3[3] / *(param_3 + 4);
                if (piVar4 < x8) {
code_r0x0001938e0dc4:
                    piVar11 = std::__1::__next_prime(unsigned long)();
                }
                else {
                    uVar20 = NEON_cnt(piVar4, 1);
                    uVar19 = NEON_uaddlv(uVar20, 1);
                    if (1 < (CONCAT62(uVar20 >> 0x10, uVar19) & 0xffffffff)) goto code_r0x0001938e0dc4;
                    uVar8 = piVar11 + -1 | piVar11 + -1 >> 1;
                    uVar8 = uVar8 | uVar8 >> 2;
                    uVar8 = uVar8 | uVar8 >> 4;
                    uVar8 = uVar8 | uVar8 >> 8;
                    uVar8 = uVar8 | uVar8 >> 0x10;
                    uVar8 = uVar8 | uVar8 >> 0x20;
                    uVar8 = ((uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar8 & 0x5555555555555555);
                    uVar8 = ((uVar8 & 0xcccccccccccccccc) >> 2) + (uVar8 & 0x3333333333333333);
                    uVar8 = ((uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar8 & 0xf0f0f0f0f0f0f0f);
                    uVar8 = ((uVar8 & 0xff00ff00ff00ff00) >> 8) + (uVar8 & 0xff00ff00ff00ff);
                    uVar8 = ((uVar8 & 0xffff0000ffff0000) >> 0x10) + (uVar8 & 0xffff0000ffff);
                    if (0x1 < piVar11) {
                        piVar11 = 1L << (-(0x40 - ((uVar8 >> 0x20) + (uVar8 & 0xffffffff))) & 0x3f);
                    }
                }
                if (piVar16 < piVar11 || piVar16 == piVar11) {
                    piVar16 = piVar11;
                }
                if (piVar16 < piVar4) goto code_r0x0001938e0d5c;
            }
        }
        else {
code_r0x0001938e0d5c:
            void std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__do_rehash<true>(unsigned long)
                      (param_3, piVar16);
        }
        piVar4 = param_3[1];
        if ((piVar4 & piVar4 + -1) != 0) {
            unaff_x26 = piVar18;
            if (piVar4 <= piVar18) {
                uVar8 = 0;
                if (piVar4 != NULL) {
                    uVar8 = piVar18 / piVar4;
                }
                unaff_x26 = piVar18 - uVar8 * piVar4;
            }
        }
        else {
            unaff_x26 = piVar4 + -1 & piVar18;
        }
    }
    uVar8 = *param_3;
    ppiVar10 = *(uVar8 + unaff_x26 * 8);
    if (ppiVar10 == NULL) {
        ppiVar10 = param_3 + 2;
        *ppiVar14 = *ppiVar10;
        *ppiVar10 = ppiVar14;
        *(uVar8 + unaff_x26 * 8) = ppiVar10;
        if (*ppiVar14 != NULL) {
            piVar18 = (*ppiVar14)[1];
            if ((piVar4 & piVar4 + -1) != 0) {
                if (piVar4 <= piVar18) {
                    uVar8 = 0;
                    if (piVar4 != NULL) {
                        uVar8 = piVar18 / piVar4;
                    }
                    piVar18 = piVar18 - uVar8 * piVar4;
                }
            }
            else {
                piVar18 = piVar18 & piVar4 + -1;
            }
            ppiVar10 = *param_3 + piVar18 * 8;
            goto code_r0x0001938e0e70;
        }
    }
    else {
        *ppiVar14 = *ppiVar10;
code_r0x0001938e0e70:
        *ppiVar10 = ppiVar14;
    }
    param_3[3] = param_3[3] + 1;
code_r0x0001938e0e80:
    ppiVar14[3] = piVar17;
    piVar18 = piVar4;
code_r0x0001938e0754:
    return piVar18;
}
