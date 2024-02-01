
int64_t * geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                    (int64_t *param_1, uint64_t param_2, uint32_t param_3, uint64_t *param_4)

{
    char *pcVar1;
    uint32_t uVar2;
    char cVar3;
    int64_t *piVar4;
    uchar *puVar5;
    bool bVar6;
    code *pcVar7;
    int64_t **ppiVar8;
    int64_t *piVar9;
    int32_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t **ppiVar14;
    uchar *puVar15;
    int64_t *piVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    int64_t *unaff_x26;
    ushort uVar20;
    ulong uVar21;
    uchar *puStack_58;
    
    param_2 = param_2 & 0xffffffff;
    if (param_1[1] < param_2 || param_1[1] == param_2) {
        return NULL;
    }
    if (*(*param_1 + param_2 * 0x10) != param_3) {
        return NULL;
    }
    iVar13 = *param_1 + param_2 * 0x10;
    if (param_1[4] < *(iVar13 + 8) + *(iVar13 + 4)) {
        return NULL;
    }
    piVar4 = geo::codec::Allocator::instance()();
    piVar4 = (**(*piVar4 + 0x18))(piVar4, 1, 0x48);
    if (piVar4 == NULL) {
        return NULL;
    }
    piVar18 = *(iVar13 + 8);
    pcVar1 = param_1[3] + *(iVar13 + 4);
    cVar3 = *pcVar1;
    *piVar4 = cVar3;
    iVar10 = *(iVar13 + 0xc);
    if (iVar10 + 1 == 0) {
        iVar10 = *(param_1 + 0x14);
    }
    *(piVar4 + 8) = iVar10;
    piVar17 = piVar4;
    if (cVar3 == '\x01') {
        if (4 < piVar18 + -1) {
            uVar2 = *(pcVar1 + 1);
            if (uVar2 < 0x400001) {
                piVar4[7] = uVar2;
                if (uVar2 == 0) {
                    piVar4[5] = 0;
                }
                else {
                    piVar17 = geo::codec::Allocator::instance()();
                    iVar13 = (**(*piVar17 + 0x10))(piVar17, uVar2, 8);
                    piVar4[5] = iVar13;
                    puStack_58 = piVar4[7];
                    piVar17 = uncompress(iVar13, &stack0xffffffffffffffa8, pcVar1 + 1 + 4, piVar18 + -1);
                    if (piVar17 != 0) {
                        piVar17 = fprintf(**reloc.__stderrp, 0x73c + 0x193b8a000);
                    }
                }
                goto code_r0x0001938e0824;
            }
            piVar17 = fprintf(**reloc.__stderrp, 0x70f + 0x193b8a000);
        }
        piVar4[5] = 0;
        piVar4[7] = 0;
    }
    else if (cVar3 == '\0') {
        piVar4[5] = pcVar1 + 1;
        piVar4[7] = piVar18 + -1;
    }
code_r0x0001938e0824:
    puVar15 = puStack_58;
    if (piVar4[5] == 0) {
        piVar18 = geo::codec::Allocator::instance()();
        (**(*piVar18 + 0x28))(piVar18, piVar4, 0);
        return NULL;
    }
    uVar12 = param_3 + -1;
    if (param_3 + -1 < 0xa9) {
        piVar16 = 0xd8 + 0x193b8a000;
        if (0xa8 < uVar12) {
            uVar12 = 0;
        }
        iVar13 = 0xe9c + 0x1938e0000;
        do {
            uVar12 = *(iVar13 + uVar12 * 4);
            iVar13 = 0x1938e0854;
            uVar12 = uVar12 + 0x1938e0854;
            switch(uVar12) {
            case 0x1938d0854:
                return piVar17;
            case 0x1938e0754:
                return piVar17;
            case 0x1938e0950:
                goto code_r0x0001938e0bd8;
            case 0x1938e0b54:
                goto code_r0x0001938e0b54;
            case 0x1938e2854:
                if (piVar17 == 0) {
                    if (*piVar4 != 0) {
                        geo::codec::VertexPoolDealloc(GeoCodecsVertexPool*)();
                        piVar18 = NULL;
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
                    piVar18 = geo::codec::Allocator::instance()();
                    puVar5 = (**(*piVar18 + 0x18))(piVar18, 1, 0x48);
                    *piVar4 = puVar5;
                    if (puVar5 != NULL) {
                        *(puVar5 + 0x28) = *(puVar15 + 0x28);
                        *puVar5 = *puVar15;
                        if (param_4 == NULL) {
                            bVar6 = false;
                        }
                        else {
                            bVar6 = 0xe00 < (*param_4 & 0x3f00);
                        }
                        geo::codec::_createLOD(GeoCodecsCurveVertexPool*, GeoCodecsVertexPool*, unsigned long, bool, unsigned int**, GeoCodecsPointsOnRoadLODData*, GeoCodecsCharacteristicPointsLODData*, GeoCodecsStrokeSpecificationsLODData*)
                                  (puVar15, puVar5, 0, bVar6, 0, 0, 0, 0);
                        piVar18 = 0x1;
                        if (puStack_58 == NULL) {
                            return 0x1;
                        }
                        goto code_r0x0001938e28f0;
                    }
                }
                piVar18 = NULL;
                if (puStack_58 == NULL) {
                    return NULL;
                }
code_r0x0001938e28f0:
                geo::codec::CurveVertexPoolDealloc(GeoCodecsCurveVertexPool*)();
                return piVar18;
            }
        } while( true );
    }
    piVar16 = 0x608 + 0x193b01000;
code_r0x0001938e0bd8:
    uVar11 = 0xeb382d69 | 0x9ddfea0800000000;
    uVar12 = ((piVar16 << 3) + 8 ^ piVar16 >> 0x20) * uVar11;
    uVar12 = (piVar16 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * uVar11;
    piVar19 = (uVar12 ^ uVar12 >> 0x2f) * uVar11;
    piVar17 = param_4[1];
    if (piVar17 != NULL) {
        pcVar7 = piVar17 + -1;
        if ((piVar17 & pcVar7) != 0) {
            unaff_x26 = piVar19;
            if (piVar17 <= piVar19) {
                uVar12 = 0;
                if (piVar17 != NULL) {
                    uVar12 = piVar19 / piVar17;
                }
                unaff_x26 = piVar19 - uVar12 * piVar17;
            }
            ppiVar14 = *(*param_4 + unaff_x26 * 8);
            if (ppiVar14 != NULL) {
                do {
                    ppiVar14 = *ppiVar14;
                    if (ppiVar14 == NULL) goto code_r0x0001938e0c84;
                    piVar9 = ppiVar14[1];
                    if (piVar9 != piVar19) {
                        if (piVar17 <= piVar9) {
                            uVar12 = 0;
                            if (piVar17 != NULL) {
                                uVar12 = piVar9 / piVar17;
                            }
                            piVar9 = piVar9 - uVar12 * piVar17;
                        }
                        if (piVar9 != unaff_x26) goto code_r0x0001938e0c84;
                    }
                } while (ppiVar14[2] != piVar16);
                goto code_r0x0001938e0e80;
            }
        }
        else {
            unaff_x26 = piVar19 & pcVar7;
            ppiVar14 = *(*param_4 + unaff_x26 * 8);
            if (ppiVar14 != NULL) {
                do {
                    ppiVar14 = *ppiVar14;
                    if ((ppiVar14 == NULL) || (ppiVar14[1] != piVar19 && (ppiVar14[1] & pcVar7) != unaff_x26))
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
    ppiVar14[1] = piVar19;
    ppiVar14[2] = piVar16;
    *ppiVar14 = NULL;
    if (!(param_4[3] + 1 <= *(param_4 + 4) * ZEXT89(piVar17)) || piVar17 == NULL) {
        uVar12 = 1;
        if (0x2 < piVar17) {
            uVar12 = (piVar17 & piVar17 + -1) != 0;
        }
        piVar16 = uVar12 | piVar17 << 1;
        piVar9 = (param_4[3] + 1) / *(param_4 + 4);
        if (piVar16 < piVar9 || piVar16 == piVar9) {
            piVar16 = piVar9;
        }
        if (piVar16 + -1 != NULL) {
            if ((piVar16 & piVar16 + -1) != 0) {
                piVar16 = std::__1::__next_prime(unsigned long)(piVar16);
                piVar17 = param_4[1];
            }
        }
        else {
            piVar16 = 0x2;
        }
        if (piVar16 < piVar17 || piVar16 == piVar17) {
            if (piVar16 < piVar17) {
                piVar9 = param_4[3] / *(param_4 + 4);
                if (piVar17 < x8) {
code_r0x0001938e0dc4:
                    piVar9 = std::__1::__next_prime(unsigned long)();
                }
                else {
                    uVar21 = NEON_cnt(piVar17, 1);
                    uVar20 = NEON_uaddlv(uVar21, 1);
                    if (1 < (CONCAT62(uVar21 >> 0x10, uVar20) & 0xffffffff)) goto code_r0x0001938e0dc4;
                    uVar12 = piVar9 + -1 | piVar9 + -1 >> 1;
                    uVar12 = uVar12 | uVar12 >> 2;
                    uVar12 = uVar12 | uVar12 >> 4;
                    uVar12 = uVar12 | uVar12 >> 8;
                    uVar12 = uVar12 | uVar12 >> 0x10;
                    uVar12 = uVar12 | uVar12 >> 0x20;
                    uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
                    uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
                    uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
                    uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
                    uVar12 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
                    if (0x1 < piVar9) {
                        piVar9 = 1L << (-(0x40 - ((uVar12 >> 0x20) + (uVar12 & 0xffffffff))) & 0x3f);
                    }
                }
                if (piVar16 < piVar9 || piVar16 == piVar9) {
                    piVar16 = piVar9;
                }
                if (piVar16 < piVar17) goto code_r0x0001938e0d5c;
            }
        }
        else {
code_r0x0001938e0d5c:
            void std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__do_rehash<true>(unsigned long)
                      (param_4, piVar16);
        }
        piVar17 = param_4[1];
        if ((piVar17 & piVar17 + -1) != 0) {
            unaff_x26 = piVar19;
            if (piVar17 <= piVar19) {
                uVar12 = 0;
                if (piVar17 != NULL) {
                    uVar12 = piVar19 / piVar17;
                }
                unaff_x26 = piVar19 - uVar12 * piVar17;
            }
        }
        else {
            unaff_x26 = piVar17 + -1 & piVar19;
        }
    }
    uVar12 = *param_4;
    ppiVar8 = *(uVar12 + unaff_x26 * 8);
    if (ppiVar8 == NULL) {
        ppiVar8 = param_4 + 2;
        *ppiVar14 = *ppiVar8;
        *ppiVar8 = ppiVar14;
        *(uVar12 + unaff_x26 * 8) = ppiVar8;
        if (*ppiVar14 != NULL) {
            piVar16 = (*ppiVar14)[1];
            if ((piVar17 & piVar17 + -1) != 0) {
                if (piVar17 <= piVar16) {
                    uVar12 = 0;
                    if (piVar17 != NULL) {
                        uVar12 = piVar16 / piVar17;
                    }
                    piVar16 = piVar16 - uVar12 * piVar17;
                }
            }
            else {
                piVar16 = piVar16 & piVar17 + -1;
            }
            ppiVar8 = *param_4 + piVar16 * 8;
            goto code_r0x0001938e0e70;
        }
    }
    else {
        *ppiVar14 = *ppiVar8;
code_r0x0001938e0e70:
        *ppiVar8 = ppiVar14;
    }
    param_4[3] = param_4[3] + 1;
code_r0x0001938e0e80:
    ppiVar14[3] = piVar18;
    return piVar4;
code_r0x0001938e0b54:
    goto code_r0x0001938e0bd8;
}
