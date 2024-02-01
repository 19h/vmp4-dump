
ulong geo::codec::_readTransitNetwork(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, ulong param_2, int64_t **param_3)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    bool bVar4;
    uint32_t uVar5;
    int32_t iVar6;
    uint32_t uVar7;
    int32_t iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    char *pcVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    code **ppcVar16;
    ulong uVar17;
    int64_t **ppiVar18;
    ulong *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    int64_t iVar22;
    uint32_t uVar23;
    code *pcVar24;
    float *pfVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    uint64_t uVar28;
    uint32_t uVar29;
    int64_t iVar30;
    uint64_t uVar31;
    code *pcVar32;
    ulong *puVar33;
    ulong *puVar34;
    uint *puVar35;
    uint8_t *puVar36;
    int32_t **ppiVar37;
    int32_t *piVar38;
    int64_t **ppiVar39;
    ulong *puVar40;
    ulong *puVar41;
    ulong *puVar42;
    int64_t **ppiVar43;
    uint64_t uVar44;
    uint32_t uVar45;
    int32_t *piVar46;
    uint64_t uVar47;
    code **ppcVar48;
    code **ppcVar49;
    uchar *puVar50;
    int64_t *piVar51;
    uint32_t *puVar52;
    uchar uVar53;
    int32_t iVar54;
    uint64_t uVar55;
    int64_t *piVar56;
    uint32_t uVar57;
    uint64_t uVar58;
    int64_t iVar59;
    int64_t *piVar60;
    ulong uVar61;
    int64_t **ppiVar62;
    code **ppcVar63;
    ulong *puVar64;
    int64_t *piVar65;
    uint64_t uVar66;
    uint64_t uVar67;
    ushort uVar68;
    code *pcVar69;
    code *pcVar70;
    ulong uVar71;
    code *pcVar72;
    ulong uVar73;
    code *pcVar74;
    ulong uVar75;
    code *pcVar76;
    ulong uVar77;
    code *pcVar78;
    code *pcVar79;
    ulong uVar80;
    ulong uVar81;
    code *pcVar82;
    ulong uVar83;
    ulong uVar84;
    ulong uVar85;
    float fVar86;
    int64_t iStack_260;
    code *pcStack_258;
    int64_t **ppiStack_250;
    int64_t *piStack_248;
    int64_t *piStack_240;
    int64_t **ppiStack_238;
    ulong uStack_230;
    ulong uStack_228;
    int64_t **ppiStack_220;
    int64_t *piStack_218;
    ulong uStack_210;
    int64_t **ppiStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    uint64_t uStack_1f0;
    ulong uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    int64_t *piStack_1d0;
    int64_t *piStack_1c8;
    int64_t *piStack_1c0;
    char cStack_1b5;
    int32_t iStack_1b4;
    char cStack_1ad;
    uint32_t uStack_1ac;
    uint32_t uStack_1a8;
    uint8_t *puStack_1a0;
    int64_t *piStack_198;
    int64_t **ppiStack_190;
    ulong uStack_188;
    uint uStack_180;
    uint64_t uStack_170;
    code *pcStack_168;
    int64_t **ppiStack_160;
    int64_t iStack_150;
    code *pcStack_148;
    int64_t **ppiStack_140;
    int64_t *piStack_130;
    code *apcStack_128 [3];
    int64_t *piStack_110;
    code *apcStack_108 [3];
    int64_t *piStack_f0;
    code *apcStack_e8 [3];
    int64_t *piStack_d0;
    code *apcStack_c8 [3];
    int64_t *piStack_b0;
    code *apcStack_a8 [3];
    int64_t *piStack_90;
    int64_t iStack_88;
    
    iStack_88 = **reloc.__stack_chk_guard;
    uVar31 = param_1[1];
    if (uVar31 == 0) {
code_r0x0001938ff6bc:
        uVar61 = 1;
        goto code_r0x0001938ff6c0;
    }
    uVar20 = 0;
code_r0x0001938ff648:
    if (*(*param_1 + uVar20 * 0x10) != 0x81) goto code_r0x0001938ff658;
    pcVar11 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                        (param_1, uVar20, 0x81, *param_3 + 0xef);
    if (pcVar11 == NULL) goto code_r0x0001938ff6bc;
    piStack_1c0 = *param_3;
    piVar60 = param_3[1];
    if (piVar60 != NULL) {
        tmp_ldXn = piVar60[1];
        iVar13 = tmp_ldXn;
        tmp_stXn = iVar13 + 1;
        iVar13 = tmp_stXn;
        piVar60[1] = iVar13;
        uVar61 = tmp_ldXn;
    }
    iVar12 = std::__1::chrono::steady_clock::now()();
    uVar31 = *(pcVar11 + 0x30);
    iVar13 = *(pcVar11 + 0x38) - uVar31;
    if (*(pcVar11 + 0x38) < uVar31) {
        uVar20 = *(pcVar11 + 0x18);
        uVar31 = *(pcVar11 + 0x10) * 8;
        if (uVar31 <= uVar20 + 5 && uVar20 + 5 != uVar31) goto code_r0x0001938ff7a0;
    }
    else {
        uVar20 = 0;
        pcVar11[0x20] = '\x01';
        *(pcVar11 + 0x10) = iVar13;
        *(pcVar11 + 0x18) = 0;
        *(pcVar11 + 8) = *(pcVar11 + 0x28) + uVar31;
        uVar31 = iVar13 * 8;
        if (uVar31 <= 5 && uVar31 != 5) goto code_r0x0001938ff7a0;
    }
    uVar9 = 0;
    piVar21 = pcVar11 + 8;
    puVar1 = pcVar11 + 0x18;
    iVar13 = *piVar21;
    uVar44 = 5;
    do {
        uVar58 = 8 - (uVar20 & 7);
        uVar55 = uVar44;
        if (uVar58 <= uVar44) {
            uVar55 = uVar58;
        }
        uVar7 = uVar55;
        uVar9 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar7 & 0x1f) & (-1 << (uVar7 & 0x1f) ^ 0xffffffff) |
                uVar9 << (uVar7 & 0x1f);
        uVar20 = uVar55 + uVar20;
        *puVar1 = uVar20;
        uVar44 = uVar44 - uVar55;
    } while (uVar44 != 0);
    uVar44 = uVar9 + 1;
    if (uVar31 <= uVar20 + uVar44 && uVar20 + uVar44 != uVar31) {
code_r0x0001938ff7a0:
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x1099;
        goto code_r0x0001938ff7b0;
    }
    uVar7 = 0;
    if (uVar9 + 1 != 0) {
        do {
            uVar58 = 8 - (uVar20 & 7);
            uVar55 = uVar44;
            if (uVar58 <= uVar44) {
                uVar55 = uVar58;
            }
            uVar9 = uVar55;
            uVar7 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar9 & 0x1f) &
                    (-1 << (uVar9 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar9 & 0x1f);
            uVar20 = uVar55 + uVar20;
            *puVar1 = uVar20;
            uVar44 = uVar44 - uVar55;
        } while (uVar44 != 0);
    }
    if (uVar31 <= uVar20 + 5 && uVar20 + 5 != uVar31) {
code_r0x0001938ff9e4:
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x109a;
        goto code_r0x0001938ff7b0;
    }
    uVar9 = 0;
    uVar44 = 5;
    do {
        uVar58 = 8 - (uVar20 & 7);
        uVar55 = uVar44;
        if (uVar58 <= uVar44) {
            uVar55 = uVar58;
        }
        uVar10 = uVar55;
        uVar9 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar10 & 0x1f) & (-1 << (uVar10 & 0x1f) ^ 0xffffffff)
                | uVar9 << (uVar10 & 0x1f);
        uVar20 = uVar55 + uVar20;
        *puVar1 = uVar20;
        uVar44 = uVar44 - uVar55;
    } while (uVar44 != 0);
    uVar44 = uVar9 + 1;
    if (uVar31 <= uVar20 + uVar44 && uVar20 + uVar44 != uVar31) goto code_r0x0001938ff9e4;
    ppiVar62 = NULL;
    if (uVar9 + 1 != 0) {
        do {
            uVar55 = 8 - (uVar20 & 7);
            uVar31 = uVar44;
            if (uVar55 <= uVar44) {
                uVar31 = uVar55;
            }
            uVar9 = uVar31;
            ppiVar62 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar9 & 0x1f) &
                       (-1 << (uVar9 & 0x1f) ^ 0xffffffff) | ppiVar62 << (uVar9 & 0x1f);
            uVar20 = uVar31 + uVar20;
            *puVar1 = uVar20;
            uVar44 = uVar44 - uVar31;
        } while (uVar44 != 0);
    }
    piStack_1d0 = piVar21;
    piStack_1c8 = pcVar11 + 0x10;
    uVar31 = geo::codec::decodeSectionEncoding(Bitstream*, GeoCodecsVertexPool**, bool, GeoCodecsTileKey const*, GeoCodecsVectorTileRawPoint*)
                       (piVar21, *param_3 + 0xaf, 1, param_2, 0);
    if ((uVar31 & 1) == 0) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x109c;
        goto code_r0x0001938ff7b0;
    }
    uVar31 = *puVar1;
    piVar21 = piStack_1c8;
    uVar20 = *piVar21 * 8;
    if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x109f;
        goto code_r0x0001938ff7b0;
    }
    uVar9 = 0;
    piVar65 = piStack_1d0;
    iVar13 = *piVar65;
    uVar44 = 5;
    do {
        uVar58 = 8 - (uVar31 & 7);
        uVar55 = uVar44;
        if (uVar58 <= uVar44) {
            uVar55 = uVar58;
        }
        uVar10 = uVar55;
        uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x1f) & (-1 << (uVar10 & 0x1f) ^ 0xffffffff)
                | uVar9 << (uVar10 & 0x1f);
        uVar31 = uVar55 + uVar31;
        *puVar1 = uVar31;
        uVar44 = uVar44 - uVar55;
    } while (uVar44 != 0);
    if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x10a1;
        goto code_r0x0001938ff7b0;
    }
    uVar10 = 0;
    uVar44 = 5;
    do {
        uVar58 = 8 - (uVar31 & 7);
        uVar55 = uVar44;
        if (uVar58 <= uVar44) {
            uVar55 = uVar58;
        }
        uVar5 = uVar55;
        uVar10 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar5 & 0x1f) & (-1 << (uVar5 & 0x1f) ^ 0xffffffff)
                 | uVar10 << (uVar5 & 0x1f);
        uVar31 = uVar55 + uVar31;
        *puVar1 = uVar31;
        uVar44 = uVar44 - uVar55;
    } while (uVar44 != 0);
    if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x10a3;
        goto code_r0x0001938ff7b0;
    }
    uVar5 = 0;
    uStack_1d8 = uVar10 + 1;
    uVar20 = 5;
    do {
        uVar55 = 8 - (uVar31 & 7);
        uVar44 = uVar20;
        if (uVar55 <= uVar20) {
            uVar44 = uVar55;
        }
        uVar10 = uVar44;
        uVar5 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x1f) & (-1 << (uVar10 & 0x1f) ^ 0xffffffff)
                | uVar5 << (uVar10 & 0x1f);
        uVar31 = uVar44 + uVar31;
        *puVar1 = uVar31;
        uVar20 = uVar20 - uVar44;
    } while (uVar20 != 0);
    uStack_1e0 = uVar5 + 1;
    *(&stack0x00000000 + -0x1f0) = uVar9 + 1;
    iVar6 = ppiVar62;
    if (uVar7 == 0) {
        uStack_1f8 = (uStack_1f8 >> 0x20) << 0x20;
        ppcVar16 = *param_3;
        if (iVar6 == 0) {
code_r0x000193900aec:
            pcVar32 = ppcVar16[0xb1];
            pcVar24 = ppcVar16[0xb0];
code_r0x000193900af4:
            uVar31 = geo::codec::_decodeTransitLabelsFromStream(Bitstream*, unsigned long, GeoCodecsFeature*, unsigned long, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                               (piVar65, (pcVar32 - pcVar24 >> 3) * (0x677d46cf | 0x51b3bea300000000), pcVar24, 0x178, 
                                param_3);
            if ((uVar31 & 1) == 0) {
                uVar61 = **reloc.__stderrp;
                pcVar32 = 0x10f4;
                goto code_r0x0001938ff7b0;
            }
            uVar44 = *puVar1;
            uVar31 = uVar44 + 1;
            uVar20 = *piStack_1c8 * 8;
            if (uVar20 <= uVar31 && uVar31 != uVar20) {
                uVar61 = **reloc.__stderrp;
                pcVar32 = 0x10f7;
                goto code_r0x0001938ff7b0;
            }
            iVar13 = *piStack_1d0;
            uVar2 = *(iVar13 + (uVar44 >> 3));
            *puVar1 = uVar31;
            if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) != 0) {
                if (uVar20 <= uVar44 + 7 && uVar44 + 7 != uVar20) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x10fa;
                    goto code_r0x0001938ff7b0;
                }
                uVar9 = 0;
                uVar44 = 6;
                do {
                    uVar58 = 8 - (uVar31 & 7);
                    uVar55 = uVar44;
                    if (uVar58 <= uVar44) {
                        uVar55 = uVar58;
                    }
                    uVar7 = uVar55;
                    uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                            (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                    uVar31 = uVar55 + uVar31;
                    *puVar1 = uVar31;
                    uVar44 = uVar44 - uVar55;
                } while (uVar44 != 0);
                iVar15 = (*param_3)[0xb0];
                iVar14 = (*param_3)[0xb1] - iVar15;
                if (iVar14 != 0) {
                    uVar44 = 0;
                    uVar9 = uVar9 + 1;
                    do {
                        uVar55 = uVar31 + uVar9;
                        if (uVar20 <= uVar55 && uVar55 != uVar20) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x10fc;
                            goto code_r0x0001938ff7b0;
                        }
                        uVar58 = 0;
                        uVar55 = uVar9;
                        if (uVar9 != 0) {
                            do {
                                uVar28 = 8 - (uVar31 & 7);
                                uVar27 = uVar55;
                                if (uVar28 <= uVar55) {
                                    uVar27 = uVar28;
                                }
                                uVar58 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar27 & 0x3f) &
                                         (-1L << (uVar27 & 0x3f) ^ 0xffffffffffffffffU) | uVar58 << (uVar27 & 0x3f);
                                uVar31 = uVar27 + uVar31;
                                *puVar1 = uVar31;
                                uVar55 = uVar55 - uVar27;
                                uVar55 = uVar55;
                            } while (uVar55 != 0);
                        }
                        *(iVar15 + uVar44 * 0x178 + 0x40) = uVar58;
                        iVar22 = iVar15 + uVar44 * 0x178;
                        *(iVar22 + 0x4d) = 1;
                        *(iVar22 + 0x50) = *(iVar22 + 0x40);
                        uVar44 = uVar44 + 1;
                    } while (uVar44 < (iVar14 >> 3) * (0x677d46cf | 0x51b3bea300000000));
                }
            }
            uVar44 = uVar31 + 1;
            if (uVar20 <= uVar44 && uVar44 != uVar20) {
                uVar61 = **reloc.__stderrp;
                pcVar32 = 0x1104;
                goto code_r0x0001938ff7b0;
            }
            uVar2 = *(iVar13 + (uVar31 >> 3));
            *puVar1 = uVar44;
            if ((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) == 0) {
code_r0x000193901920:
                uVar31 = uVar44 + 1;
                if (uVar20 <= uVar31 && uVar31 != uVar20) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x1178;
                    goto code_r0x0001938ff7b0;
                }
                iVar13 = *piStack_1d0;
                uVar2 = *(iVar13 + (uVar44 >> 3));
                *puVar1 = uVar31;
                if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) == 0) goto code_r0x000193901da0;
                if (uVar20 <= uVar44 + 6 && uVar44 + 6 != uVar20) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x117b;
                    goto code_r0x0001938ff7b0;
                }
                uVar9 = 0;
                uVar44 = 5;
                do {
                    uVar58 = 8 - (uVar31 & 7);
                    uVar55 = uVar44;
                    if (uVar58 <= uVar44) {
                        uVar55 = uVar58;
                    }
                    uVar7 = uVar55;
                    uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                            (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                    uVar31 = uVar55 + uVar31;
                    *puVar1 = uVar31;
                    uVar44 = uVar44 - uVar55;
                } while (uVar44 != 0);
                if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x117d;
                    goto code_r0x0001938ff7b0;
                }
                uVar7 = 0;
                uVar9 = uVar9 + 1;
                uVar44 = 5;
                do {
                    uVar58 = 8 - (uVar31 & 7);
                    uVar55 = uVar44;
                    if (uVar58 <= uVar44) {
                        uVar55 = uVar58;
                    }
                    uVar10 = uVar55;
                    uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                            (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                    uVar31 = uVar55 + uVar31;
                    *puVar1 = uVar31;
                    uVar44 = uVar44 - uVar55;
                } while (uVar44 != 0);
                if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x117f;
                    goto code_r0x0001938ff7b0;
                }
                uVar10 = 0;
                uVar55 = uVar7 + 1;
                uVar44 = 5;
                do {
                    uVar27 = 8 - (uVar31 & 7);
                    uVar58 = uVar44;
                    if (uVar27 <= uVar44) {
                        uVar58 = uVar27;
                    }
                    uVar5 = uVar58;
                    uVar10 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar5 & 0x1f) &
                             (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar5 & 0x1f);
                    uVar31 = uVar58 + uVar31;
                    *puVar1 = uVar31;
                    uVar44 = uVar44 - uVar58;
                } while (uVar44 != 0);
                uVar44 = uVar10 + 1;
                if (uVar20 <= uVar31 + uVar44 && uVar31 + uVar44 != uVar20) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x1182;
                    goto code_r0x0001938ff7b0;
                }
                if (uVar10 + 1 == 0) {
                    piVar21 = *param_3;
                    piVar21[0xb5] = 0;
                }
                else {
                    uVar20 = 0;
                    do {
                        uVar27 = 8 - (uVar31 & 7);
                        uVar58 = uVar44;
                        if (uVar27 <= uVar44) {
                            uVar58 = uVar27;
                        }
                        uVar10 = uVar58;
                        uVar20 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x3f) &
                                 ~(-1 << (uVar10 & 0x1f)) | uVar20 << (uVar10 & 0x1f);
                        uVar31 = uVar58 + uVar31;
                        *puVar1 = uVar31;
                        uVar44 = uVar44 - uVar58;
                    } while (uVar44 != 0);
                    piVar21 = *param_3;
                    piVar21[0xb5] = uVar20;
                    if (uVar20 != 0) {
                        tmp_ldWn = *(0x290 + 0x1d6cc0000);
                        uVar10 = tmp_ldWn;
                        if (((uVar10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                            ppcVar16 = operator new(unsigned long)(0x108);
                            ppcVar16[1] = 0x61 + 0x193b8a000;
                            ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                            ppcVar16[3] = 0x61 + 0x193b8a000;
                            pcVar32 = *0x193af97f0;
                            ppcVar16[5] = *0x193af97f8;
                            ppcVar16[4] = pcVar32;
                            *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                        0xfa8 + 0x10;
                            uStack_1e8 = ppcVar16 + 7;
                            ppcVar16[8] = NULL;
                            *uStack_1e8 = NULL;
                            ppcVar16[10] = NULL;
                            ppcVar16[9] = NULL;
                            ppcVar16[0xc] = NULL;
                            ppcVar16[0xb] = NULL;
                            ppcVar16[0xe] = NULL;
                            ppcVar16[0xd] = NULL;
                            ppcVar16[0x10] = NULL;
                            ppcVar16[0xf] = NULL;
                            ppcVar16[0x12] = NULL;
                            ppcVar16[0x11] = NULL;
                            ppcVar16[0x14] = NULL;
                            ppcVar16[0x13] = NULL;
                            ppcVar16[0x16] = NULL;
                            ppcVar16[0x15] = NULL;
                            ppcVar16[0x18] = NULL;
                            ppcVar16[0x17] = NULL;
                            ppcVar16[0x1a] = NULL;
                            ppcVar16[0x19] = NULL;
                            ppcVar16[0x1c] = NULL;
                            ppcVar16[0x1b] = NULL;
                            ppcVar16[0x1e] = NULL;
                            ppcVar16[0x1d] = NULL;
                            ppcVar16[0x1f] = NULL;
                            uVar61 = pthread_rwlock_init(uStack_1e8, 0);
                            if (uVar61 != 0) {
                                geo::read_write_lock::logFailure(int, char const*)(uVar61, 0x85 + 0x193b8a000);
                            }
                            pcVar32 = malloc_create_zone(0, 0);
                            ppcVar16[6] = pcVar32;
                            malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
                            pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                            ppcVar16[0x20] = pcVar32;
                            *geo::codec::Allocator::instance()::alloc = ppcVar16;
                            __cxa_guard_release(0x290 + 0x1d6cc0000);
                        }
                        iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x18))
                                           (*geo::codec::Allocator::instance()::alloc, (*param_3)[0xb5], 8);
                        piVar21 = *param_3;
                        piVar21[0xb4] = iVar13;
                        if (iVar13 == 0) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x1187;
                            goto code_r0x0001938ff7b0;
                        }
                    }
                }
                if (piVar21[0xb1] == piVar21[0xb0]) {
code_r0x000193901da0:
                    if (8 < *(pcVar11 + 0x40)) {
                        uVar20 = *puVar1;
                        uVar31 = uVar20 + 1;
                        if (uVar31 < *piStack_1c8 * 8 || uVar31 == *piStack_1c8 * 8) {
                            uVar2 = *(*piStack_1d0 + (uVar20 >> 3));
                            *puVar1 = uVar31;
                            if ((uVar2 >> (7 & (uVar20 ^ 0xffffffff)) & 1) == 0) goto code_r0x000193902080;
                            tmp_ldWn = *(0x290 + 0x1d6cc0000);
                            uVar9 = tmp_ldWn;
                            if (((uVar9 & 1) == 0) && (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                                ppcVar16 = operator new(unsigned long)(0x108);
                                ppcVar16[1] = 0x61 + 0x193b8a000;
                                ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                                ppcVar16[3] = 0x61 + 0x193b8a000;
                                pcVar32 = *0x193af97f0;
                                ppcVar16[5] = *0x193af97f8;
                                ppcVar16[4] = pcVar32;
                                *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                            0xfa8 + 0x10;
                                ppcVar16[8] = NULL;
                                ppcVar16[7] = NULL;
                                ppcVar16[10] = NULL;
                                ppcVar16[9] = NULL;
                                ppcVar16[0xc] = NULL;
                                ppcVar16[0xb] = NULL;
                                ppcVar16[0xe] = NULL;
                                ppcVar16[0xd] = NULL;
                                ppcVar16[0x10] = NULL;
                                ppcVar16[0xf] = NULL;
                                ppcVar16[0x12] = NULL;
                                ppcVar16[0x11] = NULL;
                                ppcVar16[0x14] = NULL;
                                ppcVar16[0x13] = NULL;
                                ppcVar16[0x16] = NULL;
                                ppcVar16[0x15] = NULL;
                                ppcVar16[0x18] = NULL;
                                ppcVar16[0x17] = NULL;
                                ppcVar16[0x1a] = NULL;
                                ppcVar16[0x19] = NULL;
                                ppcVar16[0x1c] = NULL;
                                ppcVar16[0x1b] = NULL;
                                ppcVar16[0x1e] = NULL;
                                ppcVar16[0x1d] = NULL;
                                ppcVar16[0x1f] = NULL;
                                uVar61 = pthread_rwlock_init(ppcVar16 + 7, 0);
                                if (uVar61 != 0) {
                                    geo::read_write_lock::logFailure(int, char const*)(uVar61, 0x85 + 0x193b8a000);
                                }
                                pcVar32 = malloc_create_zone(0, 0);
                                ppcVar16[6] = pcVar32;
                                malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
                                pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                ppcVar16[0x20] = pcVar32;
                                *geo::codec::Allocator::instance()::alloc = ppcVar16;
                                __cxa_guard_release(0x290 + 0x1d6cc0000);
                            }
                            uStack_200 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                                   (*geo::codec::Allocator::instance()::alloc, (*param_3)[0xae] << 2, 8)
                            ;
                            piStack_218 = *param_3;
                            piStack_218[0xbf] = uStack_200;
                            if (uStack_200 == NULL) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x11a3;
                                goto code_r0x0001938ff7b0;
                            }
                            uVar31 = *puVar1;
                            ppiStack_208 = *piStack_1c8 * 8;
                            if (uVar31 + 5 < ppiStack_208 || uVar31 + 5 == ppiStack_208) {
                                uVar9 = 0;
                                iVar13 = *piStack_1d0;
                                uVar20 = 5;
                                do {
                                    uVar55 = 8 - (uVar31 & 7);
                                    uVar44 = uVar20;
                                    if (uVar55 <= uVar20) {
                                        uVar44 = uVar55;
                                    }
                                    uVar7 = uVar44;
                                    uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                            (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                                    uVar31 = uVar44 + uVar31;
                                    *puVar1 = uVar31;
                                    uVar20 = uVar20 - uVar44;
                                } while (uVar20 != 0);
                                iVar14 = piStack_218[0xa9] - piStack_218[0xa8];
                                if (iVar14 == 0) {
                                    ppiVar39 = NULL;
                                }
                                else {
                                    uStack_210 = NULL;
                                    uStack_1e8 = uVar9 + 1;
                                    iVar14 = SUB168(SEXT816(iVar14) * SEXT816(0x590b2165 | 0xb21642c800000000), 8) +
                                             iVar14;
                                    uStack_228 = (iVar14 >> 7) - (iVar14 >> 0x3f);
                                    if (uStack_228 < 0x2) {
                                        uStack_228 = 0x1;
                                    }
                                    ppiStack_220 = piStack_218[0xa8] + 0x20;
                                    ppiVar43 = NULL;
                                    do {
                                        piVar21 = ppiStack_220[uStack_210 * 0x17];
                                        ppiVar39 = ppiVar43;
                                        if (piVar21 != NULL) {
                                            if (uStack_1e8 == 0) {
                                                if (ppiStack_208 <= uVar31 + uStack_1e8 &&
                                                    uVar31 + uStack_1e8 != ppiStack_208) {
code_r0x000193902064:
                                                    pcVar32 = 0x11ad;
                                                    goto code_r0x000193900470;
                                                }
                                                ppiStack_238 = ppiVar43;
                                                uStack_230 = piVar21;
                                                bzero(uStack_200 + ppiVar43 * 4, piVar21 << 2);
                                                ppiVar39 = ppiStack_238 + uStack_230;
                                            }
                                            else {
                                                ppiVar39 = ppiVar43 + piVar21;
                                                do {
                                                    if (ppiStack_208 <= uVar31 + uStack_1e8 &&
                                                        uVar31 + uStack_1e8 != ppiStack_208) goto code_r0x000193902064;
                                                    uVar9 = 0;
                                                    ppcVar16 = uStack_1e8;
                                                    do {
                                                        ppcVar48 = 8 - (uVar31 & 7);
                                                        ppcVar63 = ppcVar16;
                                                        if (ppcVar48 <= ppcVar16) {
                                                            ppcVar63 = ppcVar48;
                                                        }
                                                        uVar7 = ppcVar63;
                                                        uVar9 = *(iVar13 + (uVar31 >> 3)) >>
                                                                ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                                                (-1 << (uVar7 & 0x1f) ^ 0xffffffff) |
                                                                uVar9 << (uVar7 & 0x1f);
                                                        uVar31 = ppcVar63 + uVar31;
                                                        *puVar1 = uVar31;
                                                        ppcVar16 = ppcVar16 - ppcVar63;
                                                    } while (ppcVar16 != NULL);
                                                    *(uStack_200 + ppiVar43 * 4) = uVar9;
                                                    ppiVar43 = ppiVar43 + 1;
                                                } while (ppiVar43 != ppiVar39);
                                            }
                                        }
                                        uStack_210 = uStack_210 + 1;
                                        ppiVar43 = ppiVar39;
                                    } while (uStack_210 != uStack_228);
                                }
                                if (ppiVar39 == piStack_218[0xae]) goto code_r0x000193902080;
                                pcVar32 = 0x11b0;
                            }
                            else {
                                pcVar32 = 0x11a6;
                            }
                            goto code_r0x000193900470;
                        }
                        uVar61 = **reloc.__stderrp;
                        pcVar32 = 0x11a0;
                        goto code_r0x0001938ff7b0;
                    }
code_r0x000193902080:
                    piVar21 = *param_3;
                    if (piVar21[0xa9] != piVar21[0xa8]) {
                        uVar20 = *puVar1;
                        uVar31 = uVar20 + 1;
                        if (uVar31 < *piStack_1c8 * 8 || uVar31 == *piStack_1c8 * 8) {
                            uVar2 = *(*piStack_1d0 + (uVar20 >> 3));
                            *puVar1 = uVar31;
                            if ((uVar2 >> (7 & (uVar20 ^ 0xffffffff)) & 1) == 0) goto code_r0x0001939020e0;
                            pcVar32 = 0x11b7;
                        }
                        else {
                            pcVar32 = 0x11b6;
                        }
                        goto code_r0x000193900470;
                    }
code_r0x0001939020e0:
                    if (*(pcVar11 + 0x40) < 0xc) {
code_r0x0001939021c4:
                        uStack_200 = (uStack_200 >> 0x20) << 0x20;
code_r0x0001939021c8:
                        uVar44 = *puVar1;
                        uVar31 = uVar44 + 1;
                        iVar13 = *piStack_1c8;
                        uVar20 = iVar13 * 8;
                        if (uVar20 <= uVar31 && uVar31 != uVar20) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x1209;
                            goto code_r0x0001938ff7b0;
                        }
                        iVar14 = *piStack_1d0;
                        uVar2 = *(iVar14 + (uVar44 >> 3));
                        *puVar1 = uVar31;
                        if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) != 0) {
                            if (uVar20 <= uVar44 + 7 && uVar44 + 7 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x120c;
                            }
                            else {
                                uVar9 = 0;
                                uVar44 = 6;
                                do {
                                    uVar58 = 8 - (uVar31 & 7);
                                    uVar55 = uVar44;
                                    if (uVar58 <= uVar44) {
                                        uVar55 = uVar58;
                                    }
                                    uVar7 = uVar55;
                                    uVar9 = *(iVar14 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                            (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                                    uVar31 = uVar55 + uVar31;
                                    *puVar1 = uVar31;
                                    uVar44 = uVar44 - uVar55;
                                } while (uVar44 != 0);
                                if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
                                    uVar61 = **reloc.__stderrp;
                                    pcVar32 = 0x120f;
                                    goto code_r0x0001938ff7b0;
                                }
                                uVar7 = 0;
                                uVar9 = uVar9 + 1;
                                uVar44 = 5;
                                do {
                                    uVar58 = 8 - (uVar31 & 7);
                                    uVar55 = uVar44;
                                    if (uVar58 <= uVar44) {
                                        uVar55 = uVar58;
                                    }
                                    uVar10 = uVar55;
                                    uVar7 = *(iVar14 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                                            (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                                    uVar31 = uVar55 + uVar31;
                                    *puVar1 = uVar31;
                                    uVar44 = uVar44 - uVar55;
                                } while (uVar44 != 0);
                                if (uVar31 + 5 < uVar20 || uVar31 + 5 == uVar20) {
                                    uVar10 = 0;
                                    uVar7 = uVar7 + 1;
                                    uVar55 = uVar7;
                                    uVar44 = 5;
                                    do {
                                        uVar27 = 8 - (uVar31 & 7);
                                        uVar58 = uVar44;
                                        if (uVar27 <= uVar44) {
                                            uVar58 = uVar27;
                                        }
                                        uVar5 = uVar58;
                                        uVar10 = *(iVar14 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar5 & 0x1f) &
                                                 (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar5 & 0x1f);
                                        uVar31 = uVar58 + uVar31;
                                        *puVar1 = uVar31;
                                        uVar44 = uVar44 - uVar58;
                                    } while (uVar44 != 0);
                                    uVar44 = uVar10 + 1;
                                    if (uVar31 + uVar44 < uVar20 || uVar31 + uVar44 == uVar20) {
                                        if (uVar10 + 1 != 0) {
                                            uVar20 = 0;
                                            do {
                                                uVar27 = 8 - (uVar31 & 7);
                                                uVar58 = uVar44;
                                                if (uVar27 <= uVar44) {
                                                    uVar58 = uVar27;
                                                }
                                                uVar10 = uVar58;
                                                uVar20 = *(iVar14 + (uVar31 >> 3)) >>
                                                         ((8 - (uVar31 & 7)) - uVar10 & 0x3f) & ~(-1 << (uVar10 & 0x1f))
                                                         | uVar20 << (uVar10 & 0x1f);
                                                uVar31 = uVar58 + uVar31;
                                                *puVar1 = uVar31;
                                                uVar44 = uVar44 - uVar58;
                                            } while (uVar44 != 0);
                                            if (uVar20 != 0) {
                                                tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                                uVar10 = tmp_ldWn;
                                                if (((uVar10 & 1) == 0) &&
                                                   (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                                                    uStack_1e8 = operator new(unsigned long)(0x108);
                                                    uStack_1e8[1] = 0x61 + 0x193b8a000;
                                                    uStack_1e8[2] = 0xc36000000008 | 0x99af000000000000;
                                                    uStack_1e8[3] = 0x61 + 0x193b8a000;
                                                    pcVar32 = *0x193af97f0;
                                                    uStack_1e8[5] = *0x193af97f8;
                                                    uStack_1e8[4] = pcVar32;
                                                    *uStack_1e8 = 
                                                            ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l
                                                            + 0xfa8 + 0x10;
                                                    ppiStack_208 = uStack_1e8 + 7;
                                                    uStack_1e8[8] = NULL;
                                                    *ppiStack_208 = NULL;
                                                    uStack_1e8[10] = NULL;
                                                    uStack_1e8[9] = NULL;
                                                    uStack_1e8[0xc] = NULL;
                                                    uStack_1e8[0xb] = NULL;
                                                    uStack_1e8[0xe] = NULL;
                                                    uStack_1e8[0xd] = NULL;
                                                    uStack_1e8[0x10] = NULL;
                                                    uStack_1e8[0xf] = NULL;
                                                    uStack_1e8[0x12] = NULL;
                                                    uStack_1e8[0x11] = NULL;
                                                    uStack_1e8[0x14] = NULL;
                                                    uStack_1e8[0x13] = NULL;
                                                    uStack_1e8[0x16] = NULL;
                                                    uStack_1e8[0x15] = NULL;
                                                    uStack_1e8[0x18] = NULL;
                                                    uStack_1e8[0x17] = NULL;
                                                    uStack_1e8[0x1a] = NULL;
                                                    uStack_1e8[0x19] = NULL;
                                                    uStack_1e8[0x1c] = NULL;
                                                    uStack_1e8[0x1b] = NULL;
                                                    uStack_1e8[0x1e] = NULL;
                                                    uStack_1e8[0x1d] = NULL;
                                                    uStack_1e8[0x1f] = NULL;
                                                    uVar61 = pthread_rwlock_init(ppiStack_208, 0);
                                                    if (uVar61 != 0) {
                                                        geo::read_write_lock::logFailure(int, char const*)
                                                                  (uVar61, 0x85 + 0x193b8a000);
                                                    }
                                                    pcVar32 = malloc_create_zone(0, 0);
                                                    uStack_1e8[6] = pcVar32;
                                                    malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
                                                    pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                                    uStack_1e8[0x20] = pcVar32;
                                                    *geo::codec::Allocator::instance()::alloc = uStack_1e8;
                                                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                                                }
                                                iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                                                   (*geo::codec::Allocator::instance()::alloc, 
                                                                    uVar20 << 3, 8);
                                                piVar21 = *param_3;
                                                piVar21[0xc1] = iVar13;
                                                piVar21[0xc2] = uVar20;
                                                if (iVar13 == 0) {
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x1216;
                                                }
                                                else {
                                                    uVar44 = 0;
                                                    iVar14 = (*param_3)[0xc1];
                                                    iVar13 = *piStack_1c8;
                                                    uVar31 = *puVar1;
                                                    while (uVar58 = uVar31 + uVar9, 
                                                          uVar58 < iVar13 * 8 || uVar58 == iVar13 * 8) {
                                                        uVar58 = 0;
                                                        if (uVar9 != 0) {
                                                            iVar15 = *piStack_1d0;
                                                            uVar27 = uVar9;
                                                            do {
                                                                uVar26 = 8 - (uVar31 & 7);
                                                                uVar28 = uVar27;
                                                                if (uVar26 <= uVar27) {
                                                                    uVar28 = uVar26;
                                                                }
                                                                uVar58 = *(iVar15 + (uVar31 >> 3)) >>
                                                                         ((8 - (uVar31 & 7)) - uVar28 & 0x3f) &
                                                                         (-1L << (uVar28 & 0x3f) ^ 0xffffffffffffffffU)
                                                                         | uVar58 << (uVar28 & 0x3f);
                                                                uVar31 = uVar28 + uVar31;
                                                                *puVar1 = uVar31;
                                                                uVar27 = uVar27 - uVar28;
                                                            } while (uVar27 != 0);
                                                        }
                                                        *(iVar14 + uVar44 * 8) = uVar58;
                                                        uVar44 = uVar44 + 1;
                                                        if (uVar44 == uVar20) goto code_r0x000193902a00;
                                                    }
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x1218;
                                                }
                                                goto code_r0x0001938ff7b0;
                                            }
                                        }
code_r0x000193902a00:
                                        piVar21 = *param_3;
                                        iVar15 = piVar21[0xb1];
                                        iVar14 = piVar21[0xb0];
                                        uVar20 = iVar13 * 8;
                                        if (iVar15 - iVar14 == 0) goto code_r0x000193902c08;
                                        uVar44 = 0;
                                        uVar58 = uVar31;
                                        while( true ) {
                                            uVar31 = uVar58 + 1;
                                            if (uVar20 <= uVar31 && uVar31 != uVar20) {
                                                uVar61 = **reloc.__stderrp;
                                                pcVar32 = 0x121d;
                                                goto code_r0x0001938ff7b0;
                                            }
                                            iVar22 = *piStack_1d0;
                                            uVar2 = *(iVar22 + (uVar58 >> 3));
                                            *puVar1 = uVar31;
                                            if ((uVar2 >> (7 & (uVar58 ^ 0xffffffff)) & 1) == 0)
                                            goto code_r0x000193902a50;
                                            uVar58 = uVar58 + 2;
                                            uVar27 = iVar13 * 8;
                                            if (uVar27 <= uVar58 && uVar58 != uVar27) break;
                                            uVar2 = *(iVar22 + (uVar31 >> 3));
                                            *puVar1 = uVar58;
                                            if (uVar27 <= uVar58 + uVar55 && uVar58 + uVar55 != uVar27) {
                                                uVar61 = **reloc.__stderrp;
                                                pcVar32 = 0x1222;
                                                goto code_r0x0001938ff7b0;
                                            }
                                            uVar9 = 0;
                                            uVar27 = uVar55;
                                            if (uVar7 != 0) {
                                                do {
                                                    uVar26 = 8 - (uVar58 & 7);
                                                    uVar28 = uVar27;
                                                    if (uVar26 <= uVar27) {
                                                        uVar28 = uVar26;
                                                    }
                                                    uVar10 = uVar28;
                                                    uVar9 = *(iVar22 + (uVar58 >> 3)) >>
                                                            ((8 - (uVar58 & 7)) - uVar10 & 0x1f) &
                                                            (-1 << (uVar10 & 0x1f) ^ 0xffffffff) |
                                                            uVar9 << (uVar10 & 0x1f);
                                                    uVar58 = uVar28 + uVar58;
                                                    *puVar1 = uVar58;
                                                    uVar27 = uVar27 - uVar28;
                                                    uVar27 = uVar27;
                                                } while (uVar27 != 0);
                                            }
                                            if ((1 << (7 & (uVar31 ^ 0xffffffff)) & uVar2) == 0) {
                                                if (piVar21[0xc1] != 0) {
                                                    iVar59 = piVar21[0xc1] + uVar9 * 8;
                                                    goto code_r0x000193902b30;
                                                }
                                            }
                                            else {
                                                iVar59 = iVar14 + uVar9 * 0x178;
                                                *(iVar14 + uVar44 * 0x178 + 0x118) = iVar59;
                                                iVar59 = iVar59 + 0x40;
code_r0x000193902b30:
                                                *(iVar14 + uVar44 * 0x178 + 0x120) = iVar59;
                                            }
                                            uVar27 = uVar58 + 1;
                                            uVar31 = uVar27;
                                            uVar28 = iVar13 * 8;
                                            if (uVar28 <= uVar27 && uVar27 != uVar28) {
                                                uVar61 = **reloc.__stderrp;
                                                pcVar32 = 0x122b;
                                                goto code_r0x0001938ff7b0;
                                            }
                                            uVar2 = *(iVar22 + (uVar58 >> 3));
                                            *puVar1 = uVar31;
                                            if ((uVar2 >> (7 & (uVar58 ^ 0xffffffff)) & 1) != 0) {
                                                uVar31 = uVar58 + 2;
                                                if (uVar28 <= uVar31 && uVar31 != uVar28) {
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x122e;
                                                }
                                                else {
                                                    uVar2 = *(iVar22 + (uVar27 >> 3));
                                                    *puVar1 = uVar31;
                                                    if (uVar31 + uVar55 < uVar20 || uVar31 + uVar55 == uVar20) {
                                                        uVar9 = 0;
                                                        uVar58 = uVar55;
                                                        if (uVar7 != 0) {
                                                            do {
                                                                uVar26 = 8 - (uVar31 & 7);
                                                                uVar28 = uVar58;
                                                                if (uVar26 <= uVar58) {
                                                                    uVar28 = uVar26;
                                                                }
                                                                uVar10 = uVar28;
                                                                uVar9 = *(iVar22 + (uVar31 >> 3)) >>
                                                                        ((8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                                                                        (-1 << (uVar10 & 0x1f) ^ 0xffffffff) |
                                                                        uVar9 << (uVar10 & 0x1f);
                                                                uVar31 = uVar28 + uVar31;
                                                                *puVar1 = uVar31;
                                                                uVar58 = uVar58 - uVar28;
                                                                uVar58 = uVar58;
                                                            } while (uVar58 != 0);
                                                        }
                                                        if ((1 << (7 & (uVar27 ^ 0xffffffff)) & uVar2) == 0) {
                                                            if (piVar21[0xc1] == 0) goto code_r0x000193902a50;
                                                            iVar22 = piVar21[0xc1] + uVar9 * 8;
                                                        }
                                                        else {
                                                            iVar22 = iVar14 + uVar9 * 0x178 + 0x40;
                                                        }
                                                        *(iVar14 + uVar44 * 0x178 + 0x128) = iVar22;
                                                        goto code_r0x000193902a50;
                                                    }
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x1230;
                                                }
                                                goto code_r0x0001938ff7b0;
                                            }
code_r0x000193902a50:
                                            uVar44 = uVar44 + 1;
                                            uVar58 = uVar31;
                                            if ((iVar15 - iVar14 >> 3) * (0x677d46cf | 0x51b3bea300000000) <= uVar44)
                                            goto code_r0x000193902c08;
                                        }
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x1220;
                                        goto code_r0x0001938ff7b0;
                                    }
                                }
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1212;
                            }
                        }
                        else {
code_r0x000193902c08:
                            uVar44 = uVar31 + 1;
                            if (uVar20 <= uVar44 && uVar44 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x123f;
                                goto code_r0x0001938ff7b0;
                            }
                            uVar2 = *(*piStack_1d0 + (uVar31 >> 3));
                            *puVar1 = uVar44;
                            if (((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) != 0) &&
                               (iVar13 = (*param_3)[0xb1] - (*param_3)[0xb0],  iVar13 != 0)) {
                                *(*0x8 + -0xa8) = typeinfo for geo::Allocator + 0x280 + 0x10;
                                *(*0x8 + -0xa0) = param_3;
                                *(*0x8 + -0x90) = *0x8 + -0xa8;
                                geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                                          (piStack_1d0, (iVar13 >> 3) * (0x677d46cf | 0x51b3bea300000000), *0x8 + -0xa8)
                                ;
                                piVar21 = *(*0x8 + -0x90);
                                if (piVar21 == *0x8 + -0xa8) {
                                    (**(*(*0x8 + -0xa8) + 0x20))(*0x8 + -0xa8);
                                }
                                else if (piVar21 != NULL) {
                                    (**(*piVar21 + 0x28))();
                                }
                            }
                            if (*(pcVar11 + 0x40) < 0x11) {
code_r0x000193904470:
                                iVar13 = (*param_3)[0xa8];
                                if (iVar13 == (*param_3)[0xa9]) goto code_r0x000193904da4;
                                iVar14 = 0;
                                uStack_1e8 = NULL;
                                piStack_198 = NULL;
                                puStack_1a0 = NULL;
                                uStack_188 = 0;
                                ppiStack_190 = NULL;
                                uStack_180 = 0x3f800000;
                                do {
                                    iVar15 = iVar13 + iVar14;
                                    iVar22 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, JunctionInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, JunctionInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, JunctionInfo>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, JunctionInfo>, std::__1::equal_to<unsigned long long>, std::__1::hash<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, JunctionInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&)
                                                       (*0x8 + -0x1a0, *(iVar15 + 0x38));
                                    std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<GeoCodecsTransitLink*, void*>*>, bool> std::__1::__hash_table<GeoCodecsTransitLink*, std::__1::hash<GeoCodecsTransitLink*>, std::__1::equal_to<GeoCodecsTransitLink*>, std::__1::allocator<GeoCodecsTransitLink*> >::__emplace_unique_key_args<GeoCodecsTransitLink*, GeoCodecsTransitLink*&>(GeoCodecsTransitLink* const&, GeoCodecsTransitLink*&)
                                              (iVar22 + 0x40, iVar15, iVar15);
                                    iVar13 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, JunctionInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, JunctionInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, JunctionInfo>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, JunctionInfo>, std::__1::equal_to<unsigned long long>, std::__1::hash<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, JunctionInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&)
                                                       (*0x8 + -0x1a0, *(iVar13 + iVar14 + 0x40));
                                    std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<GeoCodecsTransitLink*, void*>*>, bool> std::__1::__hash_table<GeoCodecsTransitLink*, std::__1::hash<GeoCodecsTransitLink*>, std::__1::equal_to<GeoCodecsTransitLink*>, std::__1::allocator<GeoCodecsTransitLink*> >::__emplace_unique_key_args<GeoCodecsTransitLink*, GeoCodecsTransitLink*&>(GeoCodecsTransitLink* const&, GeoCodecsTransitLink*&)
                                              (iVar13 + 0x18, iVar15, iVar15);
                                    uStack_1e8 = uStack_1e8 + 1;
                                    piVar21 = *param_3;
                                    iVar13 = piVar21[0xa8];
                                    iVar14 = iVar14 + 0xb8;
                                } while (uStack_1e8 < (piVar21[0xa9] - iVar13 >> 3) * (0xe9bd37a7 | 0xd37a6f4d00000000))
                                ;
                                uStack_210 = CONCAT44(uStack_210._4_4_, 1);
                                ppiStack_208 = ppiStack_190;
                                if (ppiStack_190 == NULL) goto code_r0x000193904d84;
                                uStack_230 = NULL;
                                uStack_228 = NULL;
                                fVar86 = 1.0 / (1 << (*piVar21[0xaf] & 0x1f));
code_r0x000193904554:
                                *(ppiStack_208 + 0xd) = 1;
                                piVar21 = ppiStack_208[6];
                                if (piVar21 == NULL) {
                                    ppiVar18 = ppiStack_208[5];
                                    ppiStack_238 = ppiStack_208 + 10;
                                    ppiVar39 = *ppiStack_238;
                                    iVar13 = ppiVar39[2][5];
                                    ppiVar43 = ppiVar18;
                                    if (ppiVar18 != NULL) {
                                        bVar4 = false;
                                        goto code_r0x0001939045b0;
                                    }
                                    bVar4 = true;
                                    ppiVar18 = ppiVar39;
code_r0x0001939045e8:
                                    do {
                                        ppiStack_238 = ppiStack_208 + 10;
                                        if (ppiVar39[2][5] != iVar13) goto code_r0x000193904d80;
                                        ppiVar39 = *ppiVar39;
                                    } while (ppiVar39 != NULL);
                                }
                                else {
                                    ppiVar18 = ppiStack_208[5];
                                    iVar13 = ppiVar18[2][6];
                                    bVar4 = ppiVar18 == NULL;
                                    ppiVar43 = ppiVar18;
code_r0x0001939045b0:
                                    do {
                                        if (ppiVar18[2][6] != iVar13) goto code_r0x000193904d80;
                                        ppiVar18 = *ppiVar18;
                                    } while (ppiVar18 != NULL);
                                    ppiVar18 = ppiStack_208[10];
                                    ppiVar39 = ppiVar18;
                                    if (ppiVar18 != NULL) goto code_r0x0001939045e8;
                                    ppiVar39 = 0x1;
                                }
                                ppiStack_220 = ppiStack_208 + 5;
                                ppiStack_238 = ppiStack_208 + 10;
                                if (iVar13 == 0) {
                                    if (piVar21 == NULL) {
                                        uStack_1e8 = ppiVar18[2];
                                        if (*(uStack_1e8 + 0x14) == 0) {
                                            piStack_240 = NULL;
                                        }
                                        else {
                                            iVar13 = 0;
                                            uVar31 = 0;
                                            uVar20 = 1;
                                            do {
                                                if (((uVar20 != 0) && (uStack_1e8[1] != NULL)) &&
                                                   (piVar21 = std::__1::__shared_weak_count::lock()(),  piVar21 != NULL)
                                                   ) {
                                                    if ((*uStack_1e8 == NULL) ||
                                                       (iVar14 = *(*uStack_1e8 + 0x578),  iVar14 == 0)) {
                                                        piStack_218 = NULL;
                                                        piStack_240 = NULL;
                                                    }
                                                    else {
                                                        piVar65 = *(iVar14 + 0x20) + *(uStack_1e8 + 2) * 0x10 + iVar13;
                                                        piStack_218 = piVar65[1];
                                                        piStack_240 = *(iVar14 + 8) + *piVar65 * 8;
                                                    }
                                                    LOAcquire();
                                                    tmp_ldXn = *(piVar21 + 8);
                                                    iVar14 = tmp_ldXn;
                                                    tmp_stXn = iVar14 + -1;
                                                    uVar61 = tmp_stXn;
                                                    *(piVar21 + 8) = uVar61;
                                                    iVar14 = tmp_ldXn;
                                                    LORelease();
                                                    if (iVar14 == 0) {
                                                        (**(*piVar21 + 0x10))(piVar21);
                                                        std::__1::__shared_weak_count::__release_weak()(piVar21);
                                                    }
                                                    if (piStack_218 != NULL) goto code_r0x000193904824;
                                                }
                                                uVar31 = uVar31 + 1;
                                                uVar20 = *(uStack_1e8 + 0x14);
                                                iVar13 = iVar13 + 0x10;
                                            } while (uVar31 < uVar20);
                                            piStack_240 = NULL;
                                        }
                                    }
                                    else {
                                        piVar21 = ppiVar43[2];
                                        if (*(piVar21 + 0x14) == 0) {
                                            piStack_240 = NULL;
                                        }
                                        else {
                                            iVar13 = *(piVar21 + 0x14) << 4;
                                            do {
                                                if (((*(piVar21 + 0x14) != 0) && (piVar21[1] != 0)) &&
                                                   (piVar65 = std::__1::__shared_weak_count::lock()(),  piVar65 != NULL)
                                                   ) {
                                                    if ((*piVar21 == 0) || (iVar14 = *(*piVar21 + 0x578),  iVar14 == 0))
                                                    {
                                                        uStack_1e8 = NULL;
                                                        piStack_218 = NULL;
                                                    }
                                                    else {
                                                        iVar15 = *(iVar14 + 0x20) + *(piVar21 + 2) * 0x10 + iVar13;
                                                        uStack_1e8 = *(iVar15 + -8);
                                                        piStack_218 = *(iVar14 + 8) + *(iVar15 + -0x10) * 8;
                                                    }
                                                    LOAcquire();
                                                    tmp_ldXn = *(piVar65 + 8);
                                                    iVar14 = tmp_ldXn;
                                                    tmp_stXn = iVar14 + -1;
                                                    uVar61 = tmp_stXn;
                                                    *(piVar65 + 8) = uVar61;
                                                    iVar14 = tmp_ldXn;
                                                    LORelease();
                                                    if (iVar14 == 0) {
                                                        (**(*piVar65 + 0x10))(piVar65);
                                                        std::__1::__shared_weak_count::__release_weak()(piVar65);
                                                    }
                                                    if (uStack_1e8 != NULL) {
                                                        piStack_240 = piStack_218 + uStack_1e8 + -1;
                                                        goto code_r0x000193904824;
                                                    }
                                                }
                                                iVar13 = iVar13 + -0x10;
                                            } while (iVar13 != 0);
                                            piStack_240 = NULL;
                                        }
                                    }
code_r0x000193904824:
                                    ppiStack_220 = *ppiStack_220;
                                    if (ppiStack_220 == NULL) {
                                        if (*(ppiStack_208 + 0xd) != '\0') goto code_r0x000193904a4c;
                                        goto code_r0x000193904c74;
                                    }
                                    uStack_1e8 = ppiStack_220[2];
                                    if (*(uStack_1e8 + 0x14) != 0) {
                                        uVar31 = 0;
                                        uVar20 = 1;
                                        iVar13 = 8;
                                        do {
                                            if (((uVar20 != 0) && (uStack_1e8[1] != NULL)) &&
                                               (piVar21 = std::__1::__shared_weak_count::lock()(),  piVar21 != NULL)) {
                                                if ((*uStack_1e8 == NULL) ||
                                                   (iVar14 = *(*uStack_1e8 + 0x578),  iVar14 == 0)) {
                                                    piStack_218 = NULL;
                                                }
                                                else {
                                                    piStack_218 = *(*(iVar14 + 0x20) + *(uStack_1e8 + 2) * 0x10 + iVar13
                                                                   );
                                                }
                                                LOAcquire();
                                                tmp_ldXn = *(piVar21 + 8);
                                                iVar14 = tmp_ldXn;
                                                tmp_stXn = iVar14 + -1;
                                                uVar61 = tmp_stXn;
                                                *(piVar21 + 8) = uVar61;
                                                iVar14 = tmp_ldXn;
                                                LORelease();
                                                if (iVar14 == 0) {
                                                    (**(*piVar21 + 0x10))(piVar21);
                                                    std::__1::__shared_weak_count::__release_weak()(piVar21);
                                                }
                                                if (piStack_218 != NULL) goto code_r0x00019390490c;
                                            }
                                            uVar31 = uVar31 + 1;
                                            uVar20 = *(uStack_1e8 + 0x14);
                                            iVar13 = iVar13 + 0x10;
                                            if (uVar20 <= uVar31) break;
                                        } while( true );
                                    }
                                    goto code_r0x000193904a34;
                                }
                                if (*(iVar13 + 0x161) == '\0') {
code_r0x000193904c58:
                                    uStack_228 = uStack_228 + 1;
                                    uStack_230 = piVar21 + uStack_230 + ppiStack_208[0xb];
                                }
                                else {
                                    *(ppiStack_208 + 0xd) = 0;
                                    if (!bVar4) {
                                        do {
                                            *(ppiVar43[2] + 0x30) = 0;
                                            ppiVar43 = *ppiVar43;
                                        } while (ppiVar43 != NULL);
                                    }
                                    if ((ppiVar39 & 1) == 0) {
                                        do {
                                            *(ppiVar18[2] + 0x28) = 0;
                                            ppiVar18 = *ppiVar18;
                                        } while (ppiVar18 != NULL);
                                    }
                                }
                                goto code_r0x000193904c74;
                            }
                            uVar44 = *puVar1;
                            uVar31 = uVar44 + 1;
                            uVar20 = *piStack_1c8 * 8;
                            if (uVar20 <= uVar31 && uVar31 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x124e;
                                goto code_r0x0001938ff7b0;
                            }
                            iVar13 = *piStack_1d0;
                            uVar2 = *(iVar13 + (uVar44 >> 3));
                            *puVar1 = uVar31;
                            if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) == 0) goto code_r0x000193904470;
                            piVar21 = *param_3;
                            if ((piVar21[0xb6] != 0) || (puVar33 = piVar21[0xb7],  puVar33 != piVar21[0xb8])) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1251;
                                goto code_r0x0001938ff7b0;
                            }
                            if (uVar20 <= uVar44 + 6 && uVar44 + 6 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1253;
                                goto code_r0x0001938ff7b0;
                            }
                            uVar9 = 0;
                            uVar44 = 5;
                            do {
                                uVar58 = 8 - (uVar31 & 7);
                                uVar55 = uVar44;
                                if (uVar58 <= uVar44) {
                                    uVar55 = uVar58;
                                }
                                uVar7 = uVar55;
                                uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                                uVar31 = uVar55 + uVar31;
                                *puVar1 = uVar31;
                                uVar44 = uVar44 - uVar55;
                            } while (uVar44 != 0);
                            if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1256;
                                goto code_r0x0001938ff7b0;
                            }
                            uVar7 = 0;
                            ppiStack_208 = uVar9 + 1;
                            uVar44 = 5;
                            do {
                                uVar58 = 8 - (uVar31 & 7);
                                uVar55 = uVar44;
                                if (uVar58 <= uVar44) {
                                    uVar55 = uVar58;
                                }
                                uVar9 = uVar55;
                                uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar9 & 0x1f) &
                                        (-1 << (uVar9 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar9 & 0x1f);
                                uVar31 = uVar55 + uVar31;
                                *puVar1 = uVar31;
                                uVar44 = uVar44 - uVar55;
                            } while (uVar44 != 0);
                            if (uVar20 <= uVar31 + 6 && uVar31 + 6 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1259;
                                goto code_r0x0001938ff7b0;
                            }
                            uVar9 = 0;
                            ppiStack_220 = uVar7 + 1;
                            uVar44 = 6;
                            do {
                                uVar58 = 8 - (uVar31 & 7);
                                uVar55 = uVar44;
                                if (uVar58 <= uVar44) {
                                    uVar55 = uVar58;
                                }
                                uVar7 = uVar55;
                                uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                                uVar31 = uVar55 + uVar31;
                                *puVar1 = uVar31;
                                uVar44 = uVar44 - uVar55;
                            } while (uVar44 != 0);
                            if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x125c;
                                goto code_r0x0001938ff7b0;
                            }
                            uVar7 = 0;
                            piStack_218 = uVar9 + 1;
                            uVar44 = 5;
                            do {
                                uVar58 = 8 - (uVar31 & 7);
                                uVar55 = uVar44;
                                if (uVar58 <= uVar44) {
                                    uVar55 = uVar58;
                                }
                                uVar9 = uVar55;
                                uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar9 & 0x1f) &
                                        (-1 << (uVar9 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar9 & 0x1f);
                                uVar31 = uVar55 + uVar31;
                                *puVar1 = uVar31;
                                uVar44 = uVar44 - uVar55;
                            } while (uVar44 != 0);
                            if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
code_r0x0001939033c8:
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x125f;
                                goto code_r0x0001938ff7b0;
                            }
                            uVar9 = 0;
                            uStack_210 = uVar7 + 1;
                            uVar44 = 5;
                            do {
                                uVar58 = 8 - (uVar31 & 7);
                                uVar55 = uVar44;
                                if (uVar58 <= uVar44) {
                                    uVar55 = uVar58;
                                }
                                uVar7 = uVar55;
                                uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                                uVar31 = uVar55 + uVar31;
                                *puVar1 = uVar31;
                                uVar44 = uVar44 - uVar55;
                            } while (uVar44 != 0);
                            uVar44 = uVar9 + 1;
                            if (uVar20 <= uVar31 + uVar44 && uVar31 + uVar44 != uVar20) goto code_r0x0001939033c8;
                            if (uVar9 + 1 == 0) {
code_r0x000193903ac8:
                                uStack_1e8 = NULL;
                            }
                            else {
                                uStack_1e8 = NULL;
                                do {
                                    uVar55 = 8 - (uVar31 & 7);
                                    uVar20 = uVar44;
                                    if (uVar55 <= uVar44) {
                                        uVar20 = uVar55;
                                    }
                                    uVar9 = uVar20;
                                    uStack_1e8 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar9 & 0x3f) &
                                                 ~(-1 << (uVar9 & 0x1f)) | uStack_1e8 << (uVar9 & 0x1f);
                                    uVar31 = uVar20 + uVar31;
                                    *puVar1 = uVar31;
                                    uVar44 = uVar44 - uVar20;
                                } while (uVar44 != 0);
                                if (uStack_1e8 == 0) goto code_r0x000193903ac8;
                                ppcVar16 = (piVar21[0xb9] - puVar33 >> 3) * (0x286bca1b | 0x86bca1af00000000);
                                if (ppcVar16 < uStack_1e8) {
                                    ppcVar63 = ppcVar16 * 2;
                                    if (ppcVar63 < uStack_1e8 || ppcVar63 - uStack_1e8 == 0) {
                                        ppcVar63 = uStack_1e8;
                                    }
                                    if ((0xe50d7943 | 0xd7943500000000) <= ppcVar16) {
                                        ppcVar63 = 0xca1af286 | 0x1af286b00000000;
                                    }
                                    puVar33 = (**(*piVar21[0xba] + 0x10))(piVar21[0xba], ppcVar63 * 0x98, 8);
                                    iVar13 = 0;
                                    do {
                                        puVar41 = puVar33 + iVar13;
                                        if (puVar41 != NULL) {
                                            puVar41[0x12] = 0;
                                            puVar41[0xf] = 0;
                                            puVar41[0xe] = 0;
                                            puVar41[0x11] = 0;
                                            puVar41[0x10] = 0;
                                            puVar41[0xb] = 0;
                                            puVar41[10] = 0;
                                            puVar41[0xd] = 0;
                                            puVar41[0xc] = 0;
                                            puVar41[7] = 0;
                                            puVar41[6] = 0;
                                            puVar41[9] = 0;
                                            puVar41[8] = 0;
                                            puVar41[3] = 0;
                                            puVar41[2] = 0;
                                            puVar41[5] = 0;
                                            puVar41[4] = 0;
                                            puVar41[1] = 0;
                                            *puVar41 = 0;
                                        }
                                        iVar13 = iVar13 + 0x98;
                                    } while (uStack_1e8 * 0x98 - iVar13 != 0);
                                    puVar34 = puVar33 + ppcVar63 * 0x98;
                                    puVar42 = piVar21[0xb8];
                                    puVar40 = piVar21[0xb7];
                                    puVar41 = puVar33;
                                    if (puVar42 == puVar40) {
                                        piVar21[0xb7] = puVar33;
                                        piVar21[0xb8] = puVar33 + uStack_1e8 * 0x13;
                                        uStack_230 = piVar21[0xb9];
                                        piVar21[0xb9] = puVar34;
                                    }
                                    else {
                                        do {
                                            puVar64 = puVar42 + -0x13;
                                            puVar19 = puVar41 + -0x13;
                                            *puVar19 = *puVar64;
                                            puVar41[-0x12] = puVar42[-0x12];
                                            *puVar64 = 0;
                                            puVar42[-0x12] = 0;
                                            uVar17 = puVar42[-0x10];
                                            uVar61 = puVar42[-0x11];
                                            uVar71 = puVar42[-0xf];
                                            puVar41[-0xe] = puVar42[-0xe];
                                            puVar41[-0xf] = uVar71;
                                            uVar77 = puVar42[-10];
                                            uVar75 = puVar42[-0xb];
                                            uVar73 = puVar42[-8];
                                            uVar71 = puVar42[-9];
                                            uVar81 = puVar42[-0xc];
                                            uVar80 = puVar42[-0xd];
                                            puVar41[-7] = puVar42[-7];
                                            puVar41[-10] = uVar77;
                                            puVar41[-0xb] = uVar75;
                                            puVar41[-8] = uVar73;
                                            puVar41[-9] = uVar71;
                                            puVar41[-0xc] = uVar81;
                                            puVar41[-0xd] = uVar80;
                                            puVar41[-0x10] = uVar17;
                                            puVar41[-0x11] = uVar61;
                                            puVar41[-6] = puVar42[-6];
                                            puVar41[-5] = puVar42[-5];
                                            puVar42[-6] = 0;
                                            puVar42[-5] = 0;
                                            *(puVar41 + -4) = *(puVar42 + -4);
                                            uVar17 = puVar42[-2];
                                            uVar61 = puVar42[-3];
                                            *(puVar41 + -1) = *(puVar42 + -1);
                                            puVar41[-2] = uVar17;
                                            puVar41[-3] = uVar61;
                                            puVar41 = puVar19;
                                            puVar42 = puVar64;
                                        } while (puVar64 != puVar40);
                                        puVar42 = piVar21[0xb7];
                                        puVar41 = piVar21[0xb8];
                                        piVar21[0xb7] = puVar19;
                                        piVar21[0xb8] = puVar33 + uStack_1e8 * 0x13;
                                        uStack_230 = piVar21[0xb9];
                                        piVar21[0xb9] = puVar34;
                                        if (puVar41 != puVar42) {
                                            do {
                                                uStack_228 = puVar41[-5];
                                                if (uStack_228 != NULL) {
                                                    LOAcquire();
                                                    tmp_ldXn = uStack_228[1];
                                                    iVar13 = tmp_ldXn;
                                                    tmp_stXn = iVar13 + -1;
                                                    iVar13 = tmp_stXn;
                                                    uStack_228[1] = iVar13;
                                                    iVar13 = tmp_ldXn;
                                                    LORelease();
                                                    if (iVar13 == 0) {
                                                        (**(*uStack_228 + 0x10))(uStack_228);
                                                        std::__1::__shared_weak_count::__release_weak()(uStack_228);
                                                    }
                                                }
                                                uStack_228 = puVar41 + -0x98;
                                                if (puVar41[-0x12] != 0) {
                                                    std::__1::__shared_weak_count::__release_weak()();
                                                }
                                                puVar41 = uStack_228;
                                            } while (uStack_228 != puVar42);
                                        }
                                    }
                                    if (puVar42 != NULL) {
                                        (**(*piVar21[0xba] + 0x28))(piVar21[0xba], puVar42, uStack_230 - puVar42);
                                    }
                                }
                                else {
                                    iVar13 = uStack_1e8 * 0x98;
                                    puVar41 = puVar33 + uStack_1e8 * 0x13;
                                    do {
                                        if (puVar33 != NULL) {
                                            puVar33[0x12] = 0;
                                            puVar33[0xf] = 0;
                                            puVar33[0xe] = 0;
                                            puVar33[0x11] = 0;
                                            puVar33[0x10] = 0;
                                            puVar33[0xb] = 0;
                                            puVar33[10] = 0;
                                            puVar33[0xd] = 0;
                                            puVar33[0xc] = 0;
                                            puVar33[7] = 0;
                                            puVar33[6] = 0;
                                            puVar33[9] = 0;
                                            puVar33[8] = 0;
                                            puVar33[3] = 0;
                                            puVar33[2] = 0;
                                            puVar33[5] = 0;
                                            puVar33[4] = 0;
                                            puVar33[1] = 0;
                                            *puVar33 = 0;
                                        }
                                        puVar33 = puVar33 + 0x13;
                                        iVar13 = iVar13 + -0x98;
                                    } while (iVar13 != 0);
                                    piVar21[0xb8] = puVar41;
                                }
                            }
                            piVar21 = *param_3;
                            iVar13 = piVar21[0xb7];
                            if (piVar21[0xb8] == iVar13) {
                                uStack_228 = uStack_228._4_4_ << 0x20;
code_r0x000193904038:
                                uVar31 = geo::codec::decodeSectionEncoding(Bitstream*, GeoCodecsVertexPool**, bool, GeoCodecsTileKey const*, GeoCodecsVectorTileRawPoint*)
                                                   (piStack_1d0, piVar21 + 0xb6, 0, 0, 0);
                                if ((uVar31 & 1) == 0) {
                                    uVar61 = **reloc.__stderrp;
                                    pcVar32 = 0x1277;
                                    goto code_r0x0001938ff7b0;
                                }
                                piVar21 = *param_3;
                                if ((piVar21[0xb6] == 0) || (*(piVar21[0xb6] + 0x28) != uStack_228)) {
                                    uVar61 = **reloc.__stderrp;
                                    pcVar32 = 0x1278;
                                    goto code_r0x0001938ff7b0;
                                }
                                uVar20 = *puVar1;
                                uVar31 = uVar20 + 1;
                                if (uVar31 < *piStack_1c8 * 8 || uVar31 == *piStack_1c8 * 8) {
                                    uVar2 = *(*piStack_1d0 + (uVar20 >> 3));
                                    *puVar1 = uVar31;
                                    if (((uVar2 >> (7 & (uVar20 ^ 0xffffffff)) & 1) == 0) ||
                                       (uVar31 = bool geo::codec::decodeAttributeSet<GeoCodecsFeature>(signed char, Bitstream*, unsigned int, FeatureStyleAttributesSet*, GeoCodecsFeature*, unsigned long)
                                                           (1, piStack_1d0, uStack_1e8, piVar21 + 0x8b, piVar21[0xb7], 
                                                            0x98),  (uVar31 & 1) != 0)) goto code_r0x000193904470;
                                    pcVar32 = 0x127d;
                                }
                                else {
                                    pcVar32 = 0x127b;
                                }
                                goto code_r0x000193900470;
                            }
                            uVar31 = 0;
                            uStack_228 = uStack_228._4_4_ << 0x20;
                            while( true ) {
                                piVar65 = *param_3;
                                piVar21 = param_3[1];
                                if (piVar21 != NULL) {
                                    tmp_ldXn = piVar21[2];
                                    iVar14 = tmp_ldXn;
                                    tmp_stXn = iVar14 + 1;
                                    iVar14 = tmp_stXn;
                                    piVar21[2] = iVar14;
                                    uVar61 = tmp_ldXn;
                                }
                                ppiVar39 = iVar13 + uVar31 * 0x98;
                                piVar51 = ppiVar39[1];
                                *ppiVar39 = piVar65;
                                ppiVar39[1] = piVar21;
                                if (piVar51 != NULL) {
                                    std::__1::__shared_weak_count::__release_weak()();
                                }
                                uVar20 = *puVar1;
                                uVar44 = *piStack_1c8 * 8;
                                if (uVar44 <= uVar20 + ppiStack_208 && uVar20 + ppiStack_208 != uVar44) break;
                                uVar9 = ppiStack_208;
                                if (uVar9 != 0) {
                                    uVar9 = 0;
                                    iVar13 = *piStack_1d0;
                                    ppiVar39 = ppiStack_208;
                                    do {
                                        ppiVar18 = 8 - (uVar20 & 7);
                                        ppiVar43 = ppiVar39;
                                        if (ppiVar18 <= ppiVar39) {
                                            ppiVar43 = ppiVar18;
                                        }
                                        uVar7 = ppiVar43;
                                        uVar9 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar7 & 0x1f) &
                                                (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                                        uVar20 = ppiVar43 + uVar20;
                                        *puVar1 = uVar20;
                                        ppiVar39 = ppiVar39 - ppiVar43;
                                    } while (ppiVar39 != NULL);
                                }
                                if (uVar44 <= uVar20 + ppiStack_220 && uVar20 + ppiStack_220 != uVar44) {
                                    uVar61 = **reloc.__stderrp;
                                    pcVar32 = 0x1267;
                                    goto code_r0x0001938ff7b0;
                                }
                                if (ppiStack_220 == 0) {
                                    uVar7 = 0;
                                }
                                else {
                                    uVar7 = 0;
                                    iVar13 = *piStack_1d0;
                                    ppiVar39 = ppiStack_220;
                                    do {
                                        ppiVar18 = 8 - (uVar20 & 7);
                                        ppiVar43 = ppiVar39;
                                        if (ppiVar18 <= ppiVar39) {
                                            ppiVar43 = ppiVar18;
                                        }
                                        uVar10 = ppiVar43;
                                        uVar7 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar10 & 0x1f) &
                                                (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                                        uVar20 = ppiVar43 + uVar20;
                                        *puVar1 = uVar20;
                                        ppiVar39 = ppiVar39 - ppiVar43;
                                    } while (ppiVar39 != NULL);
                                }
                                piVar21 = *param_3;
                                iVar13 = piVar21[0xb7];
                                iVar14 = iVar13 + uVar31 * 0x98;
                                *(iVar14 + 0x80) = uStack_228;
                                *(iVar14 + 0x88) = uVar7;
                                if (uVar9 != 0) {
                                    uVar10 = 0;
                                    do {
                                        uVar55 = uVar20 + 1;
                                        if (uVar44 <= uVar55 && uVar55 != uVar44) {
                                            uVar61 = **reloc.__stderrp;
                                            pcVar32 = 0x126d;
                                            goto code_r0x0001938ff7b0;
                                        }
                                        uVar2 = *(*piStack_1d0 + (uVar20 >> 3));
                                        *puVar1 = uVar55;
                                        if ((uVar2 >> (7 & (uVar20 ^ 0xffffffff)) & 1) == 0) {
                                            if (uVar44 <= uVar55 + piStack_218 && uVar55 + piStack_218 != uVar44) {
                                                uVar61 = **reloc.__stderrp;
                                                pcVar32 = 0x1273;
                                                goto code_r0x0001938ff7b0;
                                            }
                                            uVar20 = uVar55;
                                            if (piStack_218 != 0) {
                                                piVar65 = piStack_218;
                                                do {
                                                    piVar56 = 8 - (uVar55 & 7);
                                                    piVar51 = piVar65;
                                                    if (piVar56 <= piVar65) {
                                                        piVar51 = piVar56;
                                                    }
                                                    uVar55 = piVar51 + uVar55;
                                                    piVar65 = piVar65 - piVar51;
                                                } while (piVar65 != NULL);
                                                goto code_r0x000193903f78;
                                            }
                                        }
                                        else {
                                            if (uVar44 <= uVar55 + uStack_210 && uVar55 + uStack_210 != uVar44) {
                                                uVar61 = **reloc.__stderrp;
                                                pcVar32 = mach0_cmd_8;
                                                goto code_r0x0001938ff7b0;
                                            }
                                            uVar20 = uVar55;
                                            if (uStack_210 != 0) {
                                                puVar33 = uStack_210;
                                                do {
                                                    puVar42 = 8 - (uVar55 & 7);
                                                    puVar41 = puVar33;
                                                    if (puVar42 <= puVar33) {
                                                        puVar41 = puVar42;
                                                    }
                                                    uVar55 = puVar41 + uVar55;
                                                    puVar33 = puVar33 - puVar41;
                                                } while (puVar33 != NULL);
code_r0x000193903f78:
                                                *puVar1 = uVar55;
                                                uVar20 = uVar55;
                                            }
                                        }
                                        uVar10 = uVar10 + 1;
                                    } while (uVar10 != uVar9);
                                }
                                uStack_228 = CONCAT44(uStack_228._4_4_, uVar7 + uStack_228);
                                uVar31 = uVar31 + 1;
                                if ((piVar21[0xb8] - iVar13 >> 3) * (0x286bca1b | 0x86bca1af00000000) <= uVar31)
                                goto code_r0x000193904038;
                            }
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x1265;
                        }
                    }
                    else {
                        uVar44 = *puVar1;
                        uVar31 = uVar44 + 1;
                        uVar20 = *piStack_1c8 * 8;
                        if (uVar20 <= uVar31 && uVar31 != uVar20) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x11bd;
                            goto code_r0x0001938ff7b0;
                        }
                        iVar13 = *piStack_1d0;
                        uVar2 = *(iVar13 + (uVar44 >> 3));
                        *puVar1 = uVar31;
                        if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) == 0) goto code_r0x0001939021c4;
                        if (uVar20 <= uVar44 + 6 && uVar44 + 6 != uVar20) {
code_r0x0001939021b0:
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = mach0_cmd_6;
                            goto code_r0x0001938ff7b0;
                        }
                        uVar9 = 0;
                        uVar44 = 5;
                        do {
                            uVar58 = 8 - (uVar31 & 7);
                            uVar55 = uVar44;
                            if (uVar58 <= uVar44) {
                                uVar55 = uVar58;
                            }
                            uVar7 = uVar55;
                            uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                    (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                            uVar31 = uVar55 + uVar31;
                            *puVar1 = uVar31;
                            uVar44 = uVar44 - uVar55;
                        } while (uVar44 != 0);
                        uVar44 = uVar9 + 1;
                        if (uVar20 <= uVar31 + uVar44 && uVar31 + uVar44 != uVar20) goto code_r0x0001939021b0;
                        uVar7 = 0;
                        if (uVar9 + 1 != 0) {
                            do {
                                uVar55 = 8 - (uVar31 & 7);
                                uVar20 = uVar44;
                                if (uVar55 <= uVar44) {
                                    uVar20 = uVar55;
                                }
                                uVar9 = uVar20;
                                uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar9 & 0x1f) &
                                        (-1 << (uVar9 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar9 & 0x1f);
                                uVar31 = uVar20 + uVar31;
                                *puVar1 = uVar31;
                                uVar44 = uVar44 - uVar20;
                            } while (uVar44 != 0);
                        }
                        uStack_200 = uVar7;
                        ppcVar16 = piVar21[0xc4];
                        iVar13 = piVar21[0xc3];
                        ppcVar63 = (ppcVar16 - iVar13 >> 3) * (0x8af8af8b | 0xaf8af8af00000000);
                        if (uStack_200 <= ppcVar63) {
                            if (uStack_200 <= ppcVar63 && ppcVar63 - uStack_200 != 0) {
                                uStack_1e8 = iVar13 + uStack_200 * 0x118;
                                ppcVar48 = ppcVar16;
                                if (ppcVar16 != uStack_1e8) {
                                    piVar65 = ppcVar16 + -0x110;
                                    do {
                                        piVar51 = piVar65[0xd];
                                        if (piVar51 != NULL) {
                                            LOAcquire();
                                            tmp_ldXn = piVar51[1];
                                            iVar13 = tmp_ldXn;
                                            tmp_stXn = iVar13 + -1;
                                            iVar13 = tmp_stXn;
                                            piVar51[1] = iVar13;
                                            iVar13 = tmp_ldXn;
                                            LORelease();
                                            if (iVar13 == 0) {
                                                (**(*piVar51 + 0x10))(piVar51);
                                                std::__1::__shared_weak_count::__release_weak()(piVar51);
                                            }
                                        }
                                        if (*piVar65 != 0) {
                                            std::__1::__shared_weak_count::__release_weak()();
                                        }
                                        ppcVar16 = piVar65 + -8;
                                        piVar65 = piVar65 + -0x118;
                                    } while (ppcVar16 != uStack_1e8);
                                    ppcVar48 = uStack_1e8;
                                }
                                goto code_r0x000193902dc8;
                            }
                        }
                        else if ((piVar21[0xc5] - ppcVar16 >> 3) * (0x8af8af8b | 0xaf8af8af00000000) <
                                 uStack_200 - ppcVar63) {
                            uVar31 = (piVar21[0xc5] - iVar13 >> 3) * (0x8af8af8b | 0xaf8af8af00000000);
                            ppcVar16 = uVar31 * 2;
                            if (ppcVar16 < uStack_200 || ppcVar16 - uStack_200 == 0) {
                                ppcVar16 = uStack_200;
                            }
                            if ((0x75075075 | 0x75075000000000) <= uVar31) {
                                ppcVar16 = 0xea0ea0ea | 0xea0ea000000000;
                            }
                            iVar15 = (**(*piVar21[0xc6] + 0x10))(piVar21[0xc6], ppcVar16 * 0x118, 8);
                            puVar33 = iVar15 + ppcVar63 * 0x118;
                            iVar13 = iVar15 + uStack_200 * 0x118;
                            iVar14 = uStack_200 * 0x118 + ppcVar63 * -0x118;
                            puVar41 = puVar33;
                            do {
                                if (puVar41 != NULL) {
                                    puVar41[0x22] = 0;
                                    puVar41[0x1f] = 0;
                                    puVar41[0x1e] = 0;
                                    puVar41[0x21] = 0;
                                    puVar41[0x20] = 0;
                                    puVar41[0x1b] = 0;
                                    puVar41[0x1a] = 0;
                                    puVar41[0x1d] = 0;
                                    puVar41[0x1c] = 0;
                                    puVar41[0x17] = 0;
                                    puVar41[0x16] = 0;
                                    puVar41[0x19] = 0;
                                    puVar41[0x18] = 0;
                                    puVar41[0x13] = 0;
                                    puVar41[0x12] = 0;
                                    puVar41[0x15] = 0;
                                    puVar41[0x14] = 0;
                                    puVar41[0xf] = 0;
                                    puVar41[0xe] = 0;
                                    puVar41[0x11] = 0;
                                    puVar41[0x10] = 0;
                                    puVar41[0xb] = 0;
                                    puVar41[10] = 0;
                                    puVar41[0xd] = 0;
                                    puVar41[0xc] = 0;
                                    puVar41[7] = 0;
                                    puVar41[6] = 0;
                                    puVar41[9] = 0;
                                    puVar41[8] = 0;
                                    puVar41[3] = 0;
                                    puVar41[2] = 0;
                                    puVar41[5] = 0;
                                    puVar41[4] = 0;
                                    puVar41[1] = 0;
                                    *puVar41 = 0;
                                }
                                puVar41 = puVar41 + 0x23;
                                iVar14 = iVar14 + -0x118;
                            } while (iVar14 != 0);
                            iVar14 = iVar15 + ppcVar16 * 0x118;
                            uStack_1e8 = piVar21[0xc4];
                            ppcVar16 = piVar21[0xc3];
                            if (uStack_1e8 == ppcVar16) {
                                piVar21[0xc3] = puVar33;
                                piVar21[0xc4] = iVar13;
                                ppiStack_208 = piVar21[0xc5];
                                piVar21[0xc5] = iVar14;
                            }
                            else {
                                ppcVar48 = uStack_1e8 + -0x118;
                                ppcVar63 = ppcVar63 * 0x118 + iVar15 + -0x118;
                                do {
                                    ppcVar49 = ppcVar63;
                                    *ppcVar49 = *ppcVar48;
                                    ppcVar49[1] = ppcVar48[1];
                                    *ppcVar48 = NULL;
                                    ppcVar48[1] = NULL;
                                    pcVar24 = ppcVar48[3];
                                    pcVar32 = ppcVar48[2];
                                    pcVar69 = ppcVar48[4];
                                    ppcVar49[5] = ppcVar48[5];
                                    ppcVar49[4] = pcVar69;
                                    pcVar74 = ppcVar48[9];
                                    pcVar72 = ppcVar48[8];
                                    pcVar70 = ppcVar48[0xb];
                                    pcVar69 = ppcVar48[10];
                                    pcVar78 = ppcVar48[7];
                                    pcVar76 = ppcVar48[6];
                                    ppcVar49[0xc] = ppcVar48[0xc];
                                    ppcVar49[9] = pcVar74;
                                    ppcVar49[8] = pcVar72;
                                    ppcVar49[0xb] = pcVar70;
                                    ppcVar49[10] = pcVar69;
                                    ppcVar49[7] = pcVar78;
                                    ppcVar49[6] = pcVar76;
                                    ppcVar49[3] = pcVar24;
                                    ppcVar49[2] = pcVar32;
                                    ppcVar49[0xd] = ppcVar48[0xd];
                                    ppcVar49[0xe] = ppcVar48[0xe];
                                    ppcVar48[0xd] = NULL;
                                    ppcVar48[0xe] = NULL;
                                    *(ppcVar49 + 0xf) = *(ppcVar48 + 0xf);
                                    pcVar24 = ppcVar48[0x11];
                                    pcVar32 = ppcVar48[0x10];
                                    pcVar70 = ppcVar48[0x13];
                                    pcVar69 = ppcVar48[0x12];
                                    pcVar72 = ppcVar48[0x14];
                                    pcVar76 = ppcVar48[0x17];
                                    pcVar74 = ppcVar48[0x16];
                                    ppcVar49[0x15] = ppcVar48[0x15];
                                    ppcVar49[0x14] = pcVar72;
                                    ppcVar49[0x17] = pcVar76;
                                    ppcVar49[0x16] = pcVar74;
                                    ppcVar49[0x11] = pcVar24;
                                    ppcVar49[0x10] = pcVar32;
                                    ppcVar49[0x13] = pcVar70;
                                    ppcVar49[0x12] = pcVar69;
                                    pcVar24 = ppcVar48[0x19];
                                    pcVar32 = ppcVar48[0x18];
                                    pcVar70 = ppcVar48[0x1b];
                                    pcVar69 = ppcVar48[0x1a];
                                    pcVar74 = ppcVar48[0x1d];
                                    pcVar72 = ppcVar48[0x1c];
                                    uVar61 = *(ppcVar48 + 0xe9);
                                    *(ppcVar49 + 0xf1) = *(ppcVar48 + 0xf1);
                                    *(ppcVar49 + 0xe9) = uVar61;
                                    ppcVar49[0x1b] = pcVar70;
                                    ppcVar49[0x1a] = pcVar69;
                                    ppcVar49[0x1d] = pcVar74;
                                    ppcVar49[0x1c] = pcVar72;
                                    ppcVar49[0x19] = pcVar24;
                                    ppcVar49[0x18] = pcVar32;
                                    pcVar24 = ppcVar48[0x21];
                                    pcVar32 = ppcVar48[0x20];
                                    ppcVar49[0x22] = ppcVar48[0x22];
                                    ppcVar49[0x21] = pcVar24;
                                    ppcVar49[0x20] = pcVar32;
                                    bVar4 = ppcVar48 != ppcVar16;
                                    ppcVar48 = ppcVar48 + -0x118;
                                    ppcVar63 = ppcVar49 + -0x118;
                                } while (bVar4);
                                uStack_1e8 = piVar21[0xc3];
                                ppcVar16 = piVar21[0xc4];
                                piVar21[0xc3] = ppcVar49;
                                piVar21[0xc4] = iVar13;
                                ppiStack_208 = piVar21[0xc5];
                                piVar21[0xc5] = iVar14;
                                if (ppcVar16 != uStack_1e8) {
                                    piVar65 = ppcVar16 + -0x110;
                                    do {
                                        piVar51 = piVar65[0xd];
                                        if (piVar51 != NULL) {
                                            LOAcquire();
                                            tmp_ldXn = piVar51[1];
                                            iVar13 = tmp_ldXn;
                                            tmp_stXn = iVar13 + -1;
                                            iVar13 = tmp_stXn;
                                            piVar51[1] = iVar13;
                                            iVar13 = tmp_ldXn;
                                            LORelease();
                                            if (iVar13 == 0) {
                                                (**(*piVar51 + 0x10))(piVar51);
                                                std::__1::__shared_weak_count::__release_weak()(piVar51);
                                            }
                                        }
                                        if (*piVar65 != 0) {
                                            std::__1::__shared_weak_count::__release_weak()();
                                        }
                                        ppcVar16 = piVar65 + -8;
                                        piVar65 = piVar65 + -0x118;
                                    } while (ppcVar16 != uStack_1e8);
                                }
                            }
                            if (uStack_1e8 != NULL) {
                                (**(*piVar21[0xc6] + 0x28))(piVar21[0xc6], uStack_1e8, ppiStack_208 - uStack_1e8);
                            }
                        }
                        else {
                            ppcVar48 = ppcVar16 + (uStack_200 - ppcVar63) * 0x23;
                            iVar13 = uStack_200 * 0x118 + ppcVar63 * -0x118;
                            do {
                                if (ppcVar16 != NULL) {
                                    ppcVar16[0x22] = NULL;
                                    ppcVar16[0x1f] = NULL;
                                    ppcVar16[0x1e] = NULL;
                                    ppcVar16[0x21] = NULL;
                                    ppcVar16[0x20] = NULL;
                                    ppcVar16[0x1b] = NULL;
                                    ppcVar16[0x1a] = NULL;
                                    ppcVar16[0x1d] = NULL;
                                    ppcVar16[0x1c] = NULL;
                                    ppcVar16[0x17] = NULL;
                                    ppcVar16[0x16] = NULL;
                                    ppcVar16[0x19] = NULL;
                                    ppcVar16[0x18] = NULL;
                                    ppcVar16[0x13] = NULL;
                                    ppcVar16[0x12] = NULL;
                                    ppcVar16[0x15] = NULL;
                                    ppcVar16[0x14] = NULL;
                                    ppcVar16[0xf] = NULL;
                                    ppcVar16[0xe] = NULL;
                                    ppcVar16[0x11] = NULL;
                                    ppcVar16[0x10] = NULL;
                                    ppcVar16[0xb] = NULL;
                                    ppcVar16[10] = NULL;
                                    ppcVar16[0xd] = NULL;
                                    ppcVar16[0xc] = NULL;
                                    ppcVar16[7] = NULL;
                                    ppcVar16[6] = NULL;
                                    ppcVar16[9] = NULL;
                                    ppcVar16[8] = NULL;
                                    ppcVar16[3] = NULL;
                                    ppcVar16[2] = NULL;
                                    ppcVar16[5] = NULL;
                                    ppcVar16[4] = NULL;
                                    ppcVar16[1] = NULL;
                                    *ppcVar16 = NULL;
                                }
                                ppcVar16 = ppcVar16 + 0x23;
                                iVar13 = iVar13 + -0x118;
                            } while (iVar13 != 0);
code_r0x000193902dc8:
                            piVar21[0xc4] = ppcVar48;
                        }
                        uVar31 = *puVar1;
                        uVar20 = *piStack_1c8 * 8;
                        if (uVar20 <= uVar31 + 6 && uVar31 + 6 != uVar20) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x11c4;
                        }
                        else {
                            uVar9 = 0;
                            iVar13 = *piStack_1d0;
                            uVar44 = 6;
                            do {
                                uVar58 = 8 - (uVar31 & 7);
                                uVar55 = uVar44;
                                if (uVar58 <= uVar44) {
                                    uVar55 = uVar58;
                                }
                                uVar7 = uVar55;
                                uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                                uVar31 = uVar55 + uVar31;
                                *puVar1 = uVar31;
                                uVar44 = uVar44 - uVar55;
                            } while (uVar44 != 0);
                            if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x11c7;
                            }
                            else {
                                uVar7 = 0;
                                uVar9 = uVar9 + 1;
                                uVar44 = 5;
                                do {
                                    uVar58 = 8 - (uVar31 & 7);
                                    uVar55 = uVar44;
                                    if (uVar58 <= uVar44) {
                                        uVar55 = uVar58;
                                    }
                                    uVar10 = uVar55;
                                    uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                                            (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                                    uVar31 = uVar55 + uVar31;
                                    *puVar1 = uVar31;
                                    uVar44 = uVar44 - uVar55;
                                } while (uVar44 != 0);
                                if (uVar20 <= uVar31 + 6 && uVar31 + 6 != uVar20) {
                                    uVar61 = **reloc.__stderrp;
                                    pcVar32 = 0x11ca;
                                    goto code_r0x0001938ff7b0;
                                }
                                uVar10 = 0;
                                uStack_1e8 = uVar7 + 1;
                                uVar44 = 6;
                                do {
                                    uVar58 = 8 - (uVar31 & 7);
                                    uVar55 = uVar44;
                                    if (uVar58 <= uVar44) {
                                        uVar55 = uVar58;
                                    }
                                    uVar7 = uVar55;
                                    uVar10 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                             (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar7 & 0x1f);
                                    uVar31 = uVar55 + uVar31;
                                    *puVar1 = uVar31;
                                    uVar44 = uVar44 - uVar55;
                                } while (uVar44 != 0);
                                if (uVar31 + 5 < uVar20 || uVar31 + 5 == uVar20) {
                                    uVar7 = 0;
                                    ppiStack_208 = uVar10 + 1;
                                    uVar20 = 5;
                                    do {
                                        uVar55 = 8 - (uVar31 & 7);
                                        uVar44 = uVar20;
                                        if (uVar55 <= uVar20) {
                                            uVar44 = uVar55;
                                        }
                                        uVar10 = uVar44;
                                        uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                                                (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                                        uVar31 = uVar44 + uVar31;
                                        *puVar1 = uVar31;
                                        uVar20 = uVar20 - uVar44;
                                    } while (uVar20 != 0);
                                    puStack_1a0 = NULL;
                                    uVar31 = geo::codec::decodeSectionEncoding(Bitstream*, GeoCodecsVertexPool**, bool, GeoCodecsTileKey const*, GeoCodecsVectorTileRawPoint*)
                                                       (piStack_1d0, *0x8 + -0x1a0, 0, 0, 0);
                                    if ((uVar31 & 1) == 0) {
                                        pcVar32 = 0x11d0;
                                        goto code_r0x000193900470;
                                    }
                                    if ((puStack_1a0 == NULL) || (*(puStack_1a0 + 8) == 0)) {
code_r0x000193903114:
                                        pcVar32 = 0x11d1;
                                        goto code_r0x000193900470;
                                    }
                                    piVar21 = *param_3;
                                    if (*(puStack_1a0 + 0x10) !=
                                        (piVar21[0xc4] - piVar21[0xc3] >> 3) * (0x8af8af8b | 0xaf8af8af00000000))
                                    goto code_r0x000193903114;
                                    iVar8 = bool geo::codec::decodeAttributeSet<GeoCodecsFeature>(signed char, Bitstream*, unsigned int, FeatureStyleAttributesSet*, GeoCodecsFeature*, unsigned long)
                                                      (3, piStack_1d0, uStack_200, piVar21 + 0x8b, piVar21[0xc3], 0x118)
                                    ;
                                    if (iVar8 == 0) {
                                        pcVar32 = 0x11d2;
                                    }
                                    else {
                                        if (puStack_1a0 == NULL) {
                                            uStack_200 = uStack_200._4_4_ << 0x20;
                                        }
                                        else {
                                            uStack_200 = CONCAT44(uStack_200._4_4_, *puStack_1a0);
                                        }
                                        iVar13 = (*param_3)[0xc3];
                                        if ((*param_3)[0xc4] == iVar13) {
code_r0x000193903afc:
                                            if (puStack_1a0 != NULL) {
                                                if (*(puStack_1a0 + 8) != 0) {
                                                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                                    uVar9 = tmp_ldWn;
                                                    if (((uVar9 & 1) == 0) &&
                                                       (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0))
                                                    {
                                                        uVar61 = operator new(unsigned long)(0x108);
                                                        geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                                                  (uVar61, 0x61 + 0x193b8a000, 
                                                                   0xc36000000008 | 0x99af000000000000, 0, 0);
                                                        *geo::codec::Allocator::instance()::alloc = uVar61;
                                                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                                                    }
                                                    (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                                                              (*geo::codec::Allocator::instance()::alloc, 
                                                               *(puStack_1a0 + 8), 0);
                                                }
                                                if (*(puStack_1a0 + 0x20) != 0) {
                                                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                                    uVar9 = tmp_ldWn;
                                                    if (((uVar9 & 1) == 0) &&
                                                       (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0))
                                                    {
                                                        uVar61 = operator new(unsigned long)(0x108);
                                                        geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                                                  (uVar61, 0x61 + 0x193b8a000, 
                                                                   0xc36000000008 | 0x99af000000000000, 0, 0);
                                                        *geo::codec::Allocator::instance()::alloc = uVar61;
                                                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                                                    }
                                                    (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                                                              (*geo::codec::Allocator::instance()::alloc, 
                                                               *(puStack_1a0 + 0x20), 0);
                                                }
                                                tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                                uVar9 = tmp_ldWn;
                                                if (((uVar9 & 1) == 0) &&
                                                   (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                                                    uVar61 = operator new(unsigned long)(0x108);
                                                    geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                                              (uVar61, 0x61 + 0x193b8a000, 
                                                               0xc36000000008 | 0x99af000000000000, 0, 0);
                                                    *geo::codec::Allocator::instance()::alloc = uVar61;
                                                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                                                }
                                                (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                                                          (*geo::codec::Allocator::instance()::alloc, puStack_1a0, 0);
                                            }
                                            goto code_r0x0001939021c8;
                                        }
                                        uStack_210 = NULL;
                                        ppiStack_220 = uVar7 + 1;
                                        while( true ) {
                                            piStack_218 = uStack_210 * 0x118;
                                            *(piStack_218 + iVar13 + 0x80) = *(*(puStack_1a0 + 8) + uStack_210 * 8);
                                            piVar21 = *param_3;
                                            piVar65 = param_3[1];
                                            iVar13 = piVar21[0xc3];
                                            if (piVar65 != NULL) {
                                                tmp_ldXn = piVar65[2];
                                                iVar14 = tmp_ldXn;
                                                tmp_stXn = iVar14 + 1;
                                                iVar14 = tmp_stXn;
                                                piVar65[2] = iVar14;
                                                uVar61 = tmp_ldXn;
                                            }
                                            ppiVar39 = iVar13 + piStack_218;
                                            piVar51 = ppiVar39[1];
                                            *ppiVar39 = piVar21;
                                            ppiVar39[1] = piVar65;
                                            if (piVar51 != NULL) {
                                                std::__1::__shared_weak_count::__release_weak()();
                                            }
                                            uVar20 = *puVar1;
                                            uVar44 = *piStack_1c8 * 8;
                                            uVar31 = uVar20 + uVar9;
                                            if (uVar44 <= uVar31 && uVar31 != uVar44) break;
                                            piVar21 = *param_3;
                                            iVar13 = piVar21[0xc3];
                                            uVar31 = 0;
                                            iVar8 = 8;
                                            if (uVar9 != 0) {
                                                iVar14 = *piStack_1d0;
                                                uVar55 = uVar9;
                                                do {
                                                    uVar27 = 8 - (uVar20 & 7);
                                                    uVar58 = uVar55;
                                                    if (uVar27 <= uVar55) {
                                                        uVar58 = uVar27;
                                                    }
                                                    uVar31 = *(iVar14 + (uVar20 >> 3)) >>
                                                             ((iVar8 - (uVar20 & 7)) - uVar58 & 0x3f) &
                                                             (-1L << (uVar58 & 0x3f) ^ 0xffffffffffffffffU) |
                                                             uVar31 << (uVar58 & 0x3f);
                                                    uVar20 = uVar58 + uVar20;
                                                    *puVar1 = uVar20;
                                                    uVar55 = uVar55 - uVar58;
                                                } while (uVar55 != 0);
                                            }
                                            *(piStack_218 + iVar13 + 0x40) = uVar31;
                                            iVar14 = iVar13 + uStack_210 * 0x118;
                                            *(iVar14 + 0x4d) = 1;
                                            *(iVar14 + 0x50) = uVar31;
                                            uVar31 = uVar20 + 1;
                                            if (uVar44 <= uVar31 && uVar31 != uVar44) {
                                                pcVar32 = 0x11dd;
                                                goto code_r0x000193900470;
                                            }
                                            iVar14 = *piStack_1d0;
                                            uVar2 = *(iVar14 + (uVar20 >> 3));
                                            *puVar1 = uVar31;
                                            iVar54 = -1;
                                            if ((uVar2 >> (7 & (uVar20 ^ 0xffffffff)) & 1) != 0) {
                                                if (uVar44 <= uVar31 + uStack_1e8 && uVar31 + uStack_1e8 != uVar44) {
                                                    pcVar32 = 0x11e0;
                                                }
                                                else {
                                                    if (uStack_1e8 == 0) {
                                                        uVar7 = 0;
                                                    }
                                                    else {
                                                        uVar7 = 0;
                                                        ppcVar16 = uStack_1e8;
                                                        do {
                                                            ppcVar48 = 8 - (uVar31 & 7);
                                                            ppcVar63 = ppcVar16;
                                                            if (ppcVar48 <= ppcVar16) {
                                                                ppcVar63 = ppcVar48;
                                                            }
                                                            uVar10 = ppcVar63;
                                                            uVar7 = *(iVar14 + (uVar31 >> 3)) >>
                                                                    ((iVar8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                                                                    (iVar54 << (uVar10 & 0x1f) ^ 0xffffffff) |
                                                                    uVar7 << (uVar10 & 0x1f);
                                                            uVar31 = ppcVar63 + uVar31;
                                                            *puVar1 = uVar31;
                                                            ppcVar16 = ppcVar16 - ppcVar63;
                                                        } while (ppcVar16 != NULL);
                                                    }
                                                    uVar20 = uVar7;
                                                    uVar55 = (piVar21[0xb1] - piVar21[0xb0] >> 3) *
                                                             (0x677d46cf | 0x51b3bea300000000);
                                                    if (uVar20 <= uVar55 && uVar55 - uVar20 != 0) {
                                                        *(piStack_218 + iVar13 + 0x100) =
                                                             *(piVar21[0xb0] + uVar20 * 0x178 + 0x40);
                                                        uVar20 = uVar31 + 1;
                                                        if (uVar44 <= uVar20 && uVar20 != uVar44)
                                                        goto code_r0x000193903974;
                                                        goto code_r0x000193903764;
                                                    }
                                                    pcVar32 = 0x11e1;
                                                }
                                                goto code_r0x000193900470;
                                            }
                                            if (uVar44 <= uVar31 + ppiStack_208 && uVar31 + ppiStack_208 != uVar44) {
                                                pcVar32 = 0x11e4;
                                                goto code_r0x000193900470;
                                            }
                                            if (ppiStack_208 == 0) {
                                                *(piStack_218 + iVar13 + 0x100) = 0;
                                                uVar20 = uVar31 + 1;
                                                if (uVar44 <= uVar20 && uVar20 != uVar44) goto code_r0x000193903974;
                                            }
                                            else {
                                                uVar20 = 0;
                                                ppiVar39 = ppiStack_208;
                                                do {
                                                    ppiVar18 = 8 - (uVar31 & 7);
                                                    ppiVar43 = ppiVar39;
                                                    if (ppiVar18 <= ppiVar39) {
                                                        ppiVar43 = ppiVar18;
                                                    }
                                                    uVar20 = *(iVar14 + (uVar31 >> 3)) >>
                                                             ((iVar8 - (uVar31 & 7)) - ppiVar43 & 0x3f) &
                                                             (-1L << (ppiVar43 & 0x3f) ^ 0xffffffffffffffffU) |
                                                             uVar20 << (ppiVar43 & 0x3f);
                                                    uVar31 = ppiVar43 + uVar31;
                                                    *puVar1 = uVar31;
                                                    ppiVar39 = ppiVar39 - ppiVar43;
                                                } while (ppiVar39 != NULL);
                                                *(piStack_218 + iVar13 + 0x100) = uVar20;
                                                uVar20 = uVar31 + 1;
                                                if (uVar44 <= uVar20 && uVar20 != uVar44) {
code_r0x000193903974:
                                                    pcVar32 = 0x11e7;
                                                    goto code_r0x000193900470;
                                                }
                                            }
code_r0x000193903764:
                                            uVar2 = *(iVar14 + (uVar31 >> 3));
                                            *puVar1 = uVar20;
                                            uVar55 = uVar31 + 2;
                                            if (uVar44 <= uVar55 && uVar55 != uVar44) {
                                                pcVar32 = 0x11e8;
                                                goto code_r0x000193900470;
                                            }
                                            uVar3 = *(iVar14 + (uVar20 >> 3));
                                            *puVar1 = uVar55;
                                            if ((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) != 0) {
                                                *(piStack_218 + iVar13 + 0x108) = *(piStack_218 + iVar13 + 0x108) | 1;
                                            }
                                            if ((1 << (7 & (uVar20 ^ 0xffffffff)) & uVar3) != 0) {
                                                *(piStack_218 + iVar13 + 0x108) = *(piStack_218 + iVar13 + 0x108) | 2;
                                            }
                                            if (uVar44 <= uVar55 + ppiStack_220 && uVar55 + ppiStack_220 != uVar44) {
                                                pcVar32 = 0x11ee;
                                                goto code_r0x000193900470;
                                            }
                                            if (ppiStack_220 == 0) {
                                                uVar7 = 0;
                                            }
                                            else {
                                                uVar7 = 0;
                                                ppiVar39 = ppiStack_220;
                                                do {
                                                    ppiVar18 = 8 - (uVar55 & 7);
                                                    ppiVar43 = ppiVar39;
                                                    if (ppiVar18 <= ppiVar39) {
                                                        ppiVar43 = ppiVar18;
                                                    }
                                                    uVar10 = ppiVar43;
                                                    uVar7 = *(iVar14 + (uVar55 >> 3)) >>
                                                            ((iVar8 - (uVar55 & 7)) - uVar10 & 0x1f) &
                                                            (iVar54 << (uVar10 & 0x1f) ^ 0xffffffff) |
                                                            uVar7 << (uVar10 & 0x1f);
                                                    uVar55 = ppiVar43 + uVar55;
                                                    *puVar1 = uVar55;
                                                    ppiVar39 = ppiVar39 - ppiVar43;
                                                } while (ppiVar39 != NULL);
                                            }
                                            *(piStack_218 + iVar13 + 0x10c) = uVar7 * (0xcccd | 0x3dcc0000);
                                            uVar31 = uVar55 + 1;
                                            if (uVar44 <= uVar31 && uVar31 != uVar44) {
                                                pcVar32 = 0x11f1;
                                                goto code_r0x000193900470;
                                            }
                                            uVar2 = *(iVar14 + (uVar55 >> 3));
                                            *puVar1 = uVar31;
                                            if ((uVar2 >> (7 & (uVar55 ^ 0xffffffff)) & 1) != 0) {
                                                if (uVar44 <= uVar55 + 5 && uVar55 + 5 != uVar44) {
                                                    pcVar32 = 0x11f4;
                                                }
                                                else {
                                                    uVar7 = 0;
                                                    uVar20 = 4;
                                                    do {
                                                        uVar58 = 8 - (uVar31 & 7);
                                                        uVar55 = uVar20;
                                                        if (uVar58 <= uVar20) {
                                                            uVar55 = uVar58;
                                                        }
                                                        uVar10 = uVar55;
                                                        uVar7 = *(iVar14 + (uVar31 >> 3)) >>
                                                                ((iVar8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                                                                (iVar54 << (uVar10 & 0x1f) ^ 0xffffffff) |
                                                                uVar7 << (uVar10 & 0x1f);
                                                        uVar31 = uVar55 + uVar31;
                                                        *puVar1 = uVar31;
                                                        uVar20 = uVar20 - uVar55;
                                                    } while (uVar20 != 0);
                                                    uVar20 = uVar7 + 1;
                                                    if (uVar31 + uVar20 < uVar44 || uVar31 + uVar20 == uVar44) {
                                                        uVar10 = 0;
                                                        if (uVar7 + 1 != 0) {
                                                            do {
                                                                uVar55 = 8 - (uVar31 & 7);
                                                                uVar44 = uVar20;
                                                                if (uVar55 <= uVar20) {
                                                                    uVar44 = uVar55;
                                                                }
                                                                uVar7 = uVar44;
                                                                uVar10 = *(iVar14 + (uVar31 >> 3)) >>
                                                                         ((iVar8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                                                         (iVar54 << (uVar7 & 0x1f) ^ 0xffffffff) |
                                                                         uVar10 << (uVar7 & 0x1f);
                                                                uVar31 = uVar44 + uVar31;
                                                                *puVar1 = uVar31;
                                                                uVar20 = uVar20 - uVar44;
                                                            } while (uVar20 != 0);
                                                        }
                                                        *(piStack_218 + iVar13 + 0x110) = uVar10;
                                                        goto code_r0x00019390392c;
                                                    }
                                                    pcVar32 = 0x11f7;
                                                }
                                                goto code_r0x000193900470;
                                            }
code_r0x00019390392c:
                                            uStack_210 = uStack_210 + 1;
                                            if ((piVar21[0xc4] - iVar13 >> 3) * (0x8af8af8b | 0xaf8af8af00000000) <=
                                                uStack_210) goto code_r0x000193903afc;
                                        }
                                        pcVar32 = 0x11d8;
                                    }
                                    goto code_r0x000193900470;
                                }
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x11cd;
                            }
                        }
                    }
                }
                else {
                    uVar31 = 0;
                    iVar13 = 0;
                    piVar21 = *param_3;
                    while( true ) {
                        uVar44 = *puVar1;
                        uVar20 = uVar44 + uVar9;
                        if (*piStack_1c8 * 8 <= uVar20 && uVar20 != *piStack_1c8 * 8) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x118d;
                            goto code_r0x0001938ff7b0;
                        }
                        uVar10 = 0;
                        piVar65 = piVar21;
                        iVar14 = iVar13;
                        if (uVar9 == 0) {
                            iVar15 = piVar21[0xb0];
                            *(iVar15 + uVar31 * 0x178 + 0x100) = iVar13;
                        }
                        else {
                            iVar22 = *piStack_1d0;
                            uVar20 = uVar9;
                            do {
                                uVar27 = 8 - (uVar44 & 7);
                                uVar58 = uVar20;
                                if (uVar27 <= uVar20) {
                                    uVar58 = uVar27;
                                }
                                uVar5 = uVar58;
                                uVar10 = *(iVar22 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar5 & 0x1f) &
                                         (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar5 & 0x1f);
                                uVar44 = uVar58 + uVar44;
                                *puVar1 = uVar44;
                                uVar20 = uVar20 - uVar58;
                            } while (uVar20 != 0);
                            iVar15 = piVar21[0xb0];
                            *(iVar15 + uVar31 * 0x178 + 0x100) = iVar13;
                            if (uVar10 != 0) {
                                piVar65 = *param_3;
                                uVar5 = uVar10;
                                if (uVar7 + 1 == 0) {
                                    do {
                                        if (*piStack_1c8 * 8 <= *puVar1 + uVar55 && *puVar1 + uVar55 != *piStack_1c8 * 8
                                           ) goto code_r0x000193902050;
                                        iVar14 = iVar13 + 1;
                                        *(piVar65[0xb4] + iVar13 * 8) = 0;
                                        uVar5 = uVar5 + -1;
                                        iVar13 = iVar14;
                                        uVar5 = uVar5;
                                    } while (uVar5 != 0);
                                }
                                else {
                                    do {
                                        uVar20 = *puVar1;
                                        if (*piStack_1c8 * 8 <= uVar20 + uVar55 && uVar20 + uVar55 != *piStack_1c8 * 8)
                                        goto code_r0x000193902050;
                                        uVar58 = 0;
                                        uVar44 = uVar55;
                                        do {
                                            uVar28 = 8 - (uVar20 & 7);
                                            uVar27 = uVar44;
                                            if (uVar28 <= uVar44) {
                                                uVar27 = uVar28;
                                            }
                                            uVar5 = uVar27;
                                            uVar58 = *(iVar22 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar5 & 0x3f) &
                                                     ~(-1 << (uVar5 & 0x1f)) | uVar58 << (uVar5 & 0x1f);
                                            uVar20 = uVar27 + uVar20;
                                            *puVar1 = uVar20;
                                            uVar44 = uVar44 - uVar27;
                                        } while (uVar44 != 0);
                                        iVar14 = iVar13 + 1;
                                        *(piVar65[0xb4] + iVar13 * 8) = uVar58;
                                        iVar13 = iVar14;
                                    } while (uVar10 + iVar13 != iVar14);
                                }
                                iVar15 = piVar65[0xb0];
                                iVar13 = iVar14;
                                iVar14 = *(iVar15 + uVar31 * 0x178 + 0x100);
                            }
                        }
                        *(iVar15 + uVar31 * 0x178 + 0x108) = uVar10;
                        uVar20 = iVar14 + uVar10;
                        if (piVar65[0xb5] <= uVar20 && uVar20 != piVar65[0xb5]) break;
                        uVar31 = uVar31 + 1;
                        if ((piVar65[0xb1] - iVar15 >> 3) * (0x677d46cf | 0x51b3bea300000000) <= uVar31)
                        goto code_r0x000193901da0;
                    }
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x1195;
                }
            }
            else if (uVar20 <= uVar31 + 7 && uVar31 + 7 != uVar20) {
                uVar61 = **reloc.__stderrp;
                pcVar32 = 0x1107;
            }
            else {
                uVar9 = 0;
                uVar31 = 6;
                do {
                    uVar58 = 8 - (uVar44 & 7);
                    uVar55 = uVar31;
                    if (uVar58 <= uVar31) {
                        uVar55 = uVar58;
                    }
                    uVar7 = uVar55;
                    uVar9 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar7 & 0x1f) &
                            (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                    uVar44 = uVar55 + uVar44;
                    *puVar1 = uVar44;
                    uVar31 = uVar31 - uVar55;
                } while (uVar31 != 0);
                if (uVar20 <= uVar44 + 5 && uVar44 + 5 != uVar20) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x1109;
                }
                else {
                    uVar7 = 0;
                    uVar9 = uVar9 + 1;
                    uVar55 = uVar9;
                    uVar31 = 5;
                    do {
                        uVar27 = 8 - (uVar44 & 7);
                        uVar58 = uVar31;
                        if (uVar27 <= uVar31) {
                            uVar58 = uVar27;
                        }
                        uVar10 = uVar58;
                        uVar7 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar10 & 0x1f) &
                                (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                        uVar44 = uVar58 + uVar44;
                        *puVar1 = uVar44;
                        uVar31 = uVar31 - uVar58;
                    } while (uVar31 != 0);
                    if (uVar20 <= uVar44 + 5 && uVar44 + 5 != uVar20) {
code_r0x000193900e7c:
                        uVar61 = **reloc.__stderrp;
                        pcVar32 = 0x110c;
                        goto code_r0x0001938ff7b0;
                    }
                    uVar10 = 0;
                    uVar7 = uVar7 + 1;
                    uVar58 = uVar7;
                    uVar31 = 5;
                    do {
                        uVar28 = 8 - (uVar44 & 7);
                        uVar27 = uVar31;
                        if (uVar28 <= uVar31) {
                            uVar27 = uVar28;
                        }
                        uVar5 = uVar27;
                        uVar10 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar5 & 0x1f) &
                                 (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar5 & 0x1f);
                        uVar44 = uVar27 + uVar44;
                        *puVar1 = uVar44;
                        uVar31 = uVar31 - uVar27;
                    } while (uVar31 != 0);
                    uVar31 = uVar10 + 1;
                    if (uVar20 <= uVar44 + uVar31 && uVar44 + uVar31 != uVar20) goto code_r0x000193900e7c;
                    if (uVar10 + 1 == 0) {
code_r0x000193900f58:
                        piVar21 = *param_3;
                    }
                    else {
                        uVar20 = 0;
                        do {
                            uVar28 = 8 - (uVar44 & 7);
                            uVar27 = uVar31;
                            if (uVar28 <= uVar31) {
                                uVar27 = uVar28;
                            }
                            uVar10 = uVar27;
                            uVar20 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar10 & 0x3f) &
                                     ~(-1 << (uVar10 & 0x1f)) | uVar20 << (uVar10 & 0x1f);
                            uVar44 = uVar27 + uVar44;
                            *puVar1 = uVar44;
                            uVar31 = uVar31 - uVar27;
                        } while (uVar31 != 0);
                        if (uVar20 == 0) goto code_r0x000193900f58;
                        tmp_ldWn = *(0x290 + 0x1d6cc0000);
                        uVar10 = tmp_ldWn;
                        if (((uVar10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                            uStack_1e8 = operator new(unsigned long)(0x108);
                            uStack_1e8[1] = 0x61 + 0x193b8a000;
                            uStack_1e8[2] = 0xc36000000008 | 0x99af000000000000;
                            uStack_1e8[3] = 0x61 + 0x193b8a000;
                            pcVar32 = *0x193af97f0;
                            uStack_1e8[5] = *0x193af97f8;
                            uStack_1e8[4] = pcVar32;
                            *uStack_1e8 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                          0xfa8 + 0x10;
                            uStack_200 = uStack_1e8 + 7;
                            uStack_1e8[8] = NULL;
                            *uStack_200 = NULL;
                            uStack_1e8[10] = NULL;
                            uStack_1e8[9] = NULL;
                            uStack_1e8[0xc] = NULL;
                            uStack_1e8[0xb] = NULL;
                            uStack_1e8[0xe] = NULL;
                            uStack_1e8[0xd] = NULL;
                            uStack_1e8[0x10] = NULL;
                            uStack_1e8[0xf] = NULL;
                            uStack_1e8[0x12] = NULL;
                            uStack_1e8[0x11] = NULL;
                            uStack_1e8[0x14] = NULL;
                            uStack_1e8[0x13] = NULL;
                            uStack_1e8[0x16] = NULL;
                            uStack_1e8[0x15] = NULL;
                            uStack_1e8[0x18] = NULL;
                            uStack_1e8[0x17] = NULL;
                            uStack_1e8[0x1a] = NULL;
                            uStack_1e8[0x19] = NULL;
                            uStack_1e8[0x1c] = NULL;
                            uStack_1e8[0x1b] = NULL;
                            uStack_1e8[0x1e] = NULL;
                            uStack_1e8[0x1d] = NULL;
                            uStack_1e8[0x1f] = NULL;
                            uVar61 = pthread_rwlock_init(uStack_200, 0);
                            if (uVar61 != 0) {
                                geo::read_write_lock::logFailure(int, char const*)(uVar61, 0x85 + 0x193b8a000);
                            }
                            pcVar32 = malloc_create_zone(0, 0);
                            uStack_1e8[6] = pcVar32;
                            malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
                            pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                            uStack_1e8[0x20] = pcVar32;
                            *geo::codec::Allocator::instance()::alloc = uStack_1e8;
                            __cxa_guard_release(0x290 + 0x1d6cc0000);
                        }
                        iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                           (*geo::codec::Allocator::instance()::alloc, uVar20 << 3, 8);
                        piVar21 = *param_3;
                        piVar21[0xd0] = iVar13;
                        piVar21[0xd1] = uVar20;
                        if (iVar13 == 0) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x1110;
                            goto code_r0x0001938ff7b0;
                        }
                    }
                    if (piVar21[0xae] != 0) {
                        tmp_ldWn = *(0x290 + 0x1d6cc0000);
                        uVar10 = tmp_ldWn;
                        if (((uVar10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                            ppcVar16 = operator new(unsigned long)(0x108);
                            ppcVar16[1] = 0x61 + 0x193b8a000;
                            ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                            ppcVar16[3] = 0x61 + 0x193b8a000;
                            pcVar32 = *0x193af97f0;
                            ppcVar16[5] = *0x193af97f8;
                            ppcVar16[4] = pcVar32;
                            *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                        0xfa8 + 0x10;
                            uStack_1e8 = ppcVar16 + 7;
                            ppcVar16[8] = NULL;
                            *uStack_1e8 = NULL;
                            ppcVar16[10] = NULL;
                            ppcVar16[9] = NULL;
                            ppcVar16[0xc] = NULL;
                            ppcVar16[0xb] = NULL;
                            ppcVar16[0xe] = NULL;
                            ppcVar16[0xd] = NULL;
                            ppcVar16[0x10] = NULL;
                            ppcVar16[0xf] = NULL;
                            ppcVar16[0x12] = NULL;
                            ppcVar16[0x11] = NULL;
                            ppcVar16[0x14] = NULL;
                            ppcVar16[0x13] = NULL;
                            ppcVar16[0x16] = NULL;
                            ppcVar16[0x15] = NULL;
                            ppcVar16[0x18] = NULL;
                            ppcVar16[0x17] = NULL;
                            ppcVar16[0x1a] = NULL;
                            ppcVar16[0x19] = NULL;
                            ppcVar16[0x1c] = NULL;
                            ppcVar16[0x1b] = NULL;
                            ppcVar16[0x1e] = NULL;
                            ppcVar16[0x1d] = NULL;
                            ppcVar16[0x1f] = NULL;
                            uVar61 = pthread_rwlock_init(uStack_1e8, 0);
                            if (uVar61 != 0) {
                                geo::read_write_lock::logFailure(int, char const*)(uVar61, 0x85 + 0x193b8a000);
                            }
                            pcVar32 = malloc_create_zone(0, 0);
                            ppcVar16[6] = pcVar32;
                            malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
                            pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                            ppcVar16[0x20] = pcVar32;
                            *geo::codec::Allocator::instance()::alloc = ppcVar16;
                            __cxa_guard_release(0x290 + 0x1d6cc0000);
                        }
                        iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                           (*geo::codec::Allocator::instance()::alloc, (*param_3)[0xae] << 4, 8);
                        piVar21 = *param_3;
                        piVar21[0xd2] = iVar13;
                        piVar21[0xd3] = piVar21[0xae] << 1;
                        if (iVar13 == 0) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x1117;
                            goto code_r0x0001938ff7b0;
                        }
                    }
                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                    uVar10 = tmp_ldWn;
                    if (((uVar10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                        ppcVar16 = operator new(unsigned long)(0x108);
                        ppcVar16[1] = 0x61 + 0x193b8a000;
                        ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                        ppcVar16[3] = 0x61 + 0x193b8a000;
                        pcVar32 = *0x193af97f0;
                        ppcVar16[5] = *0x193af97f8;
                        ppcVar16[4] = pcVar32;
                        *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                    0xfa8 + 0x10;
                        uStack_1e8 = ppcVar16 + 7;
                        ppcVar16[8] = NULL;
                        *uStack_1e8 = NULL;
                        ppcVar16[10] = NULL;
                        ppcVar16[9] = NULL;
                        ppcVar16[0xc] = NULL;
                        ppcVar16[0xb] = NULL;
                        ppcVar16[0xe] = NULL;
                        ppcVar16[0xd] = NULL;
                        ppcVar16[0x10] = NULL;
                        ppcVar16[0xf] = NULL;
                        ppcVar16[0x12] = NULL;
                        ppcVar16[0x11] = NULL;
                        ppcVar16[0x14] = NULL;
                        ppcVar16[0x13] = NULL;
                        ppcVar16[0x16] = NULL;
                        ppcVar16[0x15] = NULL;
                        ppcVar16[0x18] = NULL;
                        ppcVar16[0x17] = NULL;
                        ppcVar16[0x1a] = NULL;
                        ppcVar16[0x19] = NULL;
                        ppcVar16[0x1c] = NULL;
                        ppcVar16[0x1b] = NULL;
                        ppcVar16[0x1e] = NULL;
                        ppcVar16[0x1d] = NULL;
                        ppcVar16[0x1f] = NULL;
                        uVar61 = pthread_rwlock_init(uStack_1e8, 0);
                        if (uVar61 != 0) {
                            geo::read_write_lock::logFailure(int, char const*)(uVar61, 0x85 + 0x193b8a000);
                        }
                        pcVar32 = malloc_create_zone(0, 0);
                        ppcVar16[6] = pcVar32;
                        malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
                        pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                        ppcVar16[0x20] = pcVar32;
                        *geo::codec::Allocator::instance()::alloc = ppcVar16;
                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                    }
                    iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                       (*geo::codec::Allocator::instance()::alloc, (*param_3)[0xae] << 1, 8);
                    piVar21 = *param_3;
                    piVar21[0xdd] = iVar13;
                    if (iVar13 == 0) {
                        uVar61 = **reloc.__stderrp;
                        pcVar32 = 0x111c;
                    }
                    else {
                        if (piVar21[0xa9] == piVar21[0xa8]) {
                            uVar44 = *puVar1;
                            uVar20 = *piStack_1c8 << 3;
                            goto code_r0x000193901920;
                        }
                        uVar31 = 0;
                        uStack_1e8 = NULL;
                        uStack_200 = NULL;
                        iVar13 = 0;
                        uVar20 = *piStack_1c8 * 8;
                        uVar44 = *puVar1;
                        while( true ) {
                            uVar27 = uVar44 + 1;
                            if (uVar20 <= uVar27 && uVar27 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1127;
                                goto code_r0x0001938ff7b0;
                            }
                            iVar14 = (*param_3)[0xa8];
                            iVar15 = *piStack_1d0;
                            uVar2 = *(iVar15 + (uVar44 >> 3));
                            *puVar1 = uVar27;
                            iVar54 = 8;
                            iVar8 = -1;
                            if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) != 0) {
                                if (uVar20 <= uVar27 + uVar58 && uVar27 + uVar58 != uVar20) {
                                    pcVar32 = 0x112a;
                                }
                                else {
                                    uVar10 = 0;
                                    uVar44 = uVar58;
                                    if (uVar7 != 0) {
                                        do {
                                            uVar26 = 8 - (uVar27 & 7);
                                            uVar28 = uVar44;
                                            if (uVar26 <= uVar44) {
                                                uVar28 = uVar26;
                                            }
                                            uVar5 = uVar28;
                                            uVar10 = *(iVar15 + (uVar27 >> 3)) >>
                                                     ((iVar54 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                                     (iVar8 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar5 & 0x1f);
                                            uVar27 = uVar28 + uVar27;
                                            *puVar1 = uVar27;
                                            uVar44 = uVar44 - uVar28;
                                            uVar44 = uVar44;
                                        } while (uVar44 != 0);
                                    }
                                    uVar28 = uVar10;
                                    piVar21 = *param_3;
                                    uVar44 = (piVar21[0xb1] - piVar21[0xb0] >> 3) * (0x677d46cf | 0x51b3bea300000000);
                                    if (uVar28 <= uVar44 && uVar44 - uVar28 != 0) {
                                        iVar59 = piVar21[0xb0] + uVar28 * 0x178;
                                        iVar22 = piVar21[0xa8];
                                        *(iVar22 + uVar31 * 0xb8 + 0x38) = *(iVar59 + 0x40);
                                        goto code_r0x0001939011c0;
                                    }
                                    pcVar32 = 0x112b;
                                }
                                goto code_r0x000193900470;
                            }
                            if (uVar20 <= uVar27 + uVar55 && uVar27 + uVar55 != uVar20) break;
                            iVar22 = (*param_3)[0xa8];
                            uVar28 = 0;
                            uVar44 = uVar55;
                            if (uVar9 != 0) {
                                do {
                                    uVar66 = 8 - (uVar27 & 7);
                                    uVar26 = uVar44;
                                    if (uVar66 <= uVar44) {
                                        uVar26 = uVar66;
                                    }
                                    uVar28 = *(iVar15 + (uVar27 >> 3)) >> ((iVar54 - (uVar27 & 7)) - uVar26 & 0x3f) &
                                             (-1L << (uVar26 & 0x3f) ^ 0xffffffffffffffffU) | uVar28 << (uVar26 & 0x3f);
                                    uVar27 = uVar26 + uVar27;
                                    *puVar1 = uVar27;
                                    uVar44 = uVar44 - uVar26;
                                    uVar44 = uVar44;
                                } while (uVar44 != 0);
                            }
                            iVar59 = 0;
                            *(iVar22 + uVar31 * 0xb8 + 0x38) = uVar28;
                            iVar22 = (*param_3)[0xa8];
code_r0x0001939011c0:
                            iVar30 = uVar31 * 0xb8;
                            *(iVar22 + iVar30 + 0x28) = iVar59;
                            uVar44 = uVar27 + 1;
                            if (uVar20 <= uVar44 && uVar44 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1138;
                                goto code_r0x0001938ff7b0;
                            }
                            uVar2 = *(iVar15 + (uVar27 >> 3));
                            *puVar1 = uVar44;
                            if ((uVar2 >> (7 & (uVar27 ^ 0xffffffff)) & 1) != 0) {
                                if (uVar20 <= uVar44 + uVar58 && uVar44 + uVar58 != uVar20) {
                                    pcVar32 = 0x113b;
                                }
                                else {
                                    uVar10 = 0;
                                    uVar27 = uVar58;
                                    if (uVar7 != 0) {
                                        do {
                                            uVar26 = 8 - (uVar44 & 7);
                                            uVar28 = uVar27;
                                            if (uVar26 <= uVar27) {
                                                uVar28 = uVar26;
                                            }
                                            uVar5 = uVar28;
                                            uVar10 = *(iVar15 + (uVar44 >> 3)) >>
                                                     ((iVar54 - (uVar44 & 7)) - uVar5 & 0x1f) &
                                                     (iVar8 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar5 & 0x1f);
                                            uVar44 = uVar28 + uVar44;
                                            *puVar1 = uVar44;
                                            uVar27 = uVar27 - uVar28;
                                            uVar27 = uVar27;
                                        } while (uVar27 != 0);
                                    }
                                    uVar28 = uVar10;
                                    piVar21 = *param_3;
                                    uVar27 = (piVar21[0xb1] - piVar21[0xb0] >> 3) * (0x677d46cf | 0x51b3bea300000000);
                                    if (uVar28 <= uVar27 && uVar27 - uVar28 != 0) {
                                        iVar15 = piVar21[0xb0] + uVar28 * 0x178;
                                        iVar22 = piVar21[0xa8];
                                        *(iVar22 + iVar30 + 0x40) = *(iVar15 + 0x40);
                                        goto code_r0x000193901318;
                                    }
                                    pcVar32 = 0x113c;
                                }
                                goto code_r0x000193900470;
                            }
                            if (uVar20 <= uVar44 + uVar55 && uVar44 + uVar55 != uVar20) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1144;
                                goto code_r0x0001938ff7b0;
                            }
                            iVar22 = (*param_3)[0xa8];
                            uVar28 = 0;
                            uVar27 = uVar55;
                            if (uVar9 != 0) {
                                do {
                                    uVar66 = 8 - (uVar44 & 7);
                                    uVar26 = uVar27;
                                    if (uVar66 <= uVar27) {
                                        uVar26 = uVar66;
                                    }
                                    uVar28 = *(iVar15 + (uVar44 >> 3)) >> ((iVar54 - (uVar44 & 7)) - uVar26 & 0x3f) &
                                             (-1L << (uVar26 & 0x3f) ^ 0xffffffffffffffffU) | uVar28 << (uVar26 & 0x3f);
                                    uVar44 = uVar26 + uVar44;
                                    *puVar1 = uVar44;
                                    uVar27 = uVar27 - uVar26;
                                    uVar27 = uVar27;
                                } while (uVar27 != 0);
                            }
                            iVar15 = 0;
                            *(iVar22 + iVar30 + 0x40) = uVar28;
                            piVar21 = *param_3;
                            iVar22 = piVar21[0xa8];
code_r0x000193901318:
                            *(iVar22 + iVar30 + 0x30) = iVar15;
                            iVar14 = iVar14 + iVar30;
                            *(iVar14 + 0x68) = uStack_1e8;
                            uVar27 = *(iVar14 + 0x20);
                            if (uVar27 == 0) {
                                ppcVar16 = uStack_1e8;
                            }
                            else {
                                uVar28 = 0;
                                ppiStack_208 = iVar14 + 0x38;
                                uStack_210 = iVar14 + 0x40;
                                ppcVar16 = uStack_1e8;
                                do {
                                    uVar26 = uVar44 + 1;
                                    if (uVar20 <= uVar26 && uVar26 != uVar20) {
                                        pcVar32 = 0x114b;
                                        goto code_r0x000193900470;
                                    }
                                    iVar15 = *piStack_1d0;
                                    uVar2 = *(iVar15 + (uVar44 >> 3));
                                    uVar10 = 7;
                                    *puVar1 = uVar26;
                                    *((*param_3)[0xdd] + iVar13) = uVar2 >> (uVar10 & (uVar44 ^ 0xffffffff)) & 1;
                                    uVar66 = uVar44 + 2;
                                    if (uVar20 <= uVar66 && uVar66 != uVar20) {
                                        pcVar32 = 0x114d;
                                        goto code_r0x000193900470;
                                    }
                                    uVar2 = *(iVar15 + (uVar26 >> 3));
                                    *puVar1 = uVar66;
                                    *((*param_3)[0xdd] + iVar13 + 1) = uVar2 >> (uVar10 & (uVar26 ^ 0xffffffff)) & 1;
                                    uVar26 = uVar44 + 3;
                                    uVar47 = uVar26;
                                    if (uVar20 <= uVar26 && uVar26 != uVar20) {
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x1151;
                                        goto code_r0x0001938ff7b0;
                                    }
                                    uVar2 = *(iVar15 + (uVar66 >> 3));
                                    *puVar1 = uVar47;
                                    if ((uVar2 >> (uVar10 & (uVar66 ^ 0xffffffff)) & 1) == 0) {
                                        piVar21 = *param_3;
                                        ppiVar39 = ppiStack_208;
                                    }
                                    else {
                                        uVar47 = uVar44 + 4;
                                        if (uVar20 <= uVar47 && uVar47 != uVar20) {
                                            uVar61 = **reloc.__stderrp;
                                            pcVar32 = 0x1154;
                                            goto code_r0x0001938ff7b0;
                                        }
                                        uVar2 = *(iVar15 + (uVar26 >> 3));
                                        *puVar1 = uVar47;
                                        if ((uVar2 >> (uVar10 & (uVar26 ^ 0xffffffff)) & 1) == 0) {
                                            if (uVar20 <= uVar47 + uVar55 && uVar47 + uVar55 != uVar20) {
                                                uVar61 = **reloc.__stderrp;
                                                pcVar32 = 0x115a;
                                                goto code_r0x0001938ff7b0;
                                            }
                                            iVar22 = (*param_3)[0xd0];
                                            uVar26 = 0;
                                            uVar44 = uVar55;
                                            if (uVar9 != 0) {
                                                do {
                                                    uVar67 = 8 - (uVar47 & 7);
                                                    uVar66 = uVar44;
                                                    if (uVar67 <= uVar44) {
                                                        uVar66 = uVar67;
                                                    }
                                                    uVar26 = *(iVar15 + (uVar47 >> 3)) >>
                                                             ((iVar54 - (uVar47 & 7)) - uVar66 & 0x3f) &
                                                             (-1L << (uVar66 & 0x3f) ^ 0xffffffffffffffffU) |
                                                             uVar26 << (uVar66 & 0x3f);
                                                    uVar47 = uVar66 + uVar47;
                                                    *puVar1 = uVar47;
                                                    uVar44 = uVar44 - uVar66;
                                                    uVar44 = uVar44;
                                                } while (uVar44 != 0);
                                            }
                                            iVar15 = uStack_200 * 8;
                                            *(iVar22 + iVar15) = uVar26;
                                            uStack_200 = uStack_200 + 1;
                                            piVar21 = *param_3;
                                            ppiVar39 = piVar21[0xd0] + iVar15;
                                        }
                                        else {
                                            if (uVar20 <= uVar47 + uVar58 && uVar47 + uVar58 != uVar20) {
                                                uVar61 = **reloc.__stderrp;
                                                pcVar32 = 0x1157;
                                                goto code_r0x0001938ff7b0;
                                            }
                                            uVar10 = 0;
                                            uVar44 = uVar58;
                                            if (uVar7 != 0) {
                                                do {
                                                    uVar66 = 8 - (uVar47 & 7);
                                                    uVar26 = uVar44;
                                                    if (uVar66 <= uVar44) {
                                                        uVar26 = uVar66;
                                                    }
                                                    uVar5 = uVar26;
                                                    uVar10 = *(iVar15 + (uVar47 >> 3)) >>
                                                             ((iVar54 - (uVar47 & 7)) - uVar5 & 0x1f) &
                                                             (iVar8 << (uVar5 & 0x1f) ^ 0xffffffff) |
                                                             uVar10 << (uVar5 & 0x1f);
                                                    uVar47 = uVar26 + uVar47;
                                                    *puVar1 = uVar47;
                                                    uVar44 = uVar44 - uVar26;
                                                    uVar44 = uVar44;
                                                } while (uVar44 != 0);
                                            }
                                            piVar21 = *param_3;
                                            ppiVar39 = piVar21[0xb0] + uVar10 * 0x178 + 0x40;
                                        }
                                    }
                                    *(piVar21[0xd2] + ppcVar16 * 8) = ppiVar39;
                                    uVar26 = uVar47 + 1;
                                    uVar44 = uVar26;
                                    if (uVar20 <= uVar26 && uVar26 != uVar20) {
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x1162;
                                        goto code_r0x0001938ff7b0;
                                    }
                                    iVar15 = *piStack_1d0;
                                    uVar2 = *(iVar15 + (uVar47 >> 3));
                                    *puVar1 = uVar44;
                                    if ((uVar2 >> (7 & (uVar47 ^ 0xffffffff)) & 1) == 0) {
                                        piVar21 = *param_3;
                                        puVar33 = uStack_210;
                                    }
                                    else {
                                        uVar44 = uVar47 + 2;
                                        if (uVar20 <= uVar44 && uVar44 != uVar20) {
                                            uVar61 = **reloc.__stderrp;
                                            pcVar32 = 0x1165;
                                            goto code_r0x0001938ff7b0;
                                        }
                                        uVar2 = *(iVar15 + (uVar26 >> 3));
                                        *puVar1 = uVar44;
                                        if ((uVar2 >> (7 & (uVar26 ^ 0xffffffff)) & 1) == 0) {
                                            if (uVar20 <= uVar44 + uVar55 && uVar44 + uVar55 != uVar20) {
                                                uVar61 = **reloc.__stderrp;
                                                pcVar32 = 0x116b;
                                                goto code_r0x0001938ff7b0;
                                            }
                                            iVar22 = (*param_3)[0xd0];
                                            uVar66 = 0;
                                            uVar26 = uVar55;
                                            if (uVar9 != 0) {
                                                do {
                                                    uVar67 = 8 - (uVar44 & 7);
                                                    uVar47 = uVar26;
                                                    if (uVar67 <= uVar26) {
                                                        uVar47 = uVar67;
                                                    }
                                                    uVar66 = *(iVar15 + (uVar44 >> 3)) >>
                                                             ((iVar54 - (uVar44 & 7)) - uVar47 & 0x3f) &
                                                             (-1L << (uVar47 & 0x3f) ^ 0xffffffffffffffffU) |
                                                             uVar66 << (uVar47 & 0x3f);
                                                    uVar44 = uVar47 + uVar44;
                                                    *puVar1 = uVar44;
                                                    uVar26 = uVar26 - uVar47;
                                                    uVar26 = uVar26;
                                                } while (uVar26 != 0);
                                            }
                                            iVar15 = uStack_200 * 8;
                                            *(iVar22 + iVar15) = uVar66;
                                            uStack_200 = uStack_200 + 1;
                                            piVar21 = *param_3;
                                            puVar33 = piVar21[0xd0] + iVar15;
                                        }
                                        else {
                                            if (uVar20 <= uVar44 + uVar58 && uVar44 + uVar58 != uVar20) {
                                                uVar61 = **reloc.__stderrp;
                                                pcVar32 = 0x1168;
                                                goto code_r0x0001938ff7b0;
                                            }
                                            uVar10 = 0;
                                            uVar26 = uVar58;
                                            if (uVar7 != 0) {
                                                do {
                                                    uVar47 = 8 - (uVar44 & 7);
                                                    uVar66 = uVar26;
                                                    if (uVar47 <= uVar26) {
                                                        uVar66 = uVar47;
                                                    }
                                                    uVar5 = uVar66;
                                                    uVar10 = *(iVar15 + (uVar44 >> 3)) >>
                                                             ((iVar54 - (uVar44 & 7)) - uVar5 & 0x1f) &
                                                             (iVar8 << (uVar5 & 0x1f) ^ 0xffffffff) |
                                                             uVar10 << (uVar5 & 0x1f);
                                                    uVar44 = uVar66 + uVar44;
                                                    *puVar1 = uVar44;
                                                    uVar26 = uVar26 - uVar66;
                                                    uVar26 = uVar26;
                                                } while (uVar26 != 0);
                                            }
                                            piVar21 = *param_3;
                                            puVar33 = piVar21[0xb0] + uVar10 * 0x178 + 0x40;
                                        }
                                    }
                                    iVar13 = iVar13 + 2;
                                    *(piVar21[0xd2] + ppcVar16 * 8 + 8) = puVar33;
                                    ppcVar16 = ppcVar16 + 2;
                                    uVar28 = uVar28 + 1;
                                } while (uVar28 < uVar27);
                                piVar21 = *param_3;
                            }
                            *(iVar14 + 0x70) = ppcVar16 - uStack_1e8;
                            uVar31 = uVar31 + 1;
                            uStack_1e8 = ppcVar16;
                            if ((piVar21[0xa9] - piVar21[0xa8] >> 3) * (0xe9bd37a7 | 0xd37a6f4d00000000) <= uVar31)
                            goto code_r0x000193901920;
                        }
                        uVar61 = **reloc.__stderrp;
                        pcVar32 = 0x1133;
                    }
                }
            }
        }
        else {
code_r0x0001938ffd54:
            ppcVar63 = ppcVar16[0xb1];
            pcVar32 = ppcVar16[0xb0];
            ppiVar39 = (ppcVar63 - pcVar32 >> 3) * (0x677d46cf | 0x51b3bea300000000);
            uStack_200 = ppcVar16;
            if (ppiVar62 <= ppiVar39) {
                if (ppiVar62 <= ppiVar39 && ppiVar39 - ppiVar62 != 0) {
                    uStack_1e8 = pcVar32 + ppiVar62 * 0x178;
                    if (ppcVar63 != uStack_1e8) {
                        piVar21 = ppcVar63 + -0x170;
                        do {
                            piVar65 = piVar21[0xd];
                            if (piVar65 != NULL) {
                                LOAcquire();
                                tmp_ldXn = piVar65[1];
                                iVar13 = tmp_ldXn;
                                tmp_stXn = iVar13 + -1;
                                iVar13 = tmp_stXn;
                                piVar65[1] = iVar13;
                                iVar13 = tmp_ldXn;
                                LORelease();
                                if (iVar13 == 0) {
                                    (**(*piVar65 + 0x10))(piVar65);
                                    std::__1::__shared_weak_count::__release_weak()(piVar65);
                                }
                            }
                            if (*piVar21 != 0) {
                                std::__1::__shared_weak_count::__release_weak()();
                            }
                            ppcVar16 = piVar21 + -8;
                            piVar21 = piVar21 + -0x178;
                        } while (ppcVar16 != uStack_1e8);
                        ppcVar16 = uStack_1e8;
                        goto code_r0x000193900578;
                    }
                    goto code_r0x00019390057c;
                }
            }
            else if ((ppcVar16[0xb2] - ppcVar63 >> 3) * (0x677d46cf | 0x51b3bea300000000) < ppiVar62 - ppiVar39) {
                uVar31 = (ppcVar16[0xb2] - pcVar32 >> 3) * (0x677d46cf | 0x51b3bea300000000);
                ppiVar43 = uVar31 * 2;
                if (ppiVar43 < ppiVar62 || ppiVar43 - ppiVar62 == 0) {
                    ppiVar43 = ppiVar62;
                }
                if ((0xae4c415c | 0x57262000000000) <= uVar31) {
                    ppiVar43 = 0x5c9882b9 | 0xae4c4100000000;
                }
                iVar14 = (**(*ppcVar16[0xb3] + 0x10))(ppcVar16[0xb3], ppiVar43 * 0x178, 8);
                puVar33 = iVar14 + ppiVar39 * 0x178;
                pcVar32 = iVar14 + ppiVar62 * 0x178;
                iVar13 = ppiVar62 * 0x178 + ppiVar39 * -0x178;
                puVar41 = puVar33;
                do {
                    if (puVar41 != NULL) {
                        puVar41[0x2e] = 0;
                        puVar41[0x2b] = 0;
                        puVar41[0x2a] = 0;
                        puVar41[0x2d] = 0;
                        puVar41[0x2c] = 0;
                        puVar41[0x27] = 0;
                        puVar41[0x26] = 0;
                        puVar41[0x29] = 0;
                        puVar41[0x28] = 0;
                        puVar41[0x23] = 0;
                        puVar41[0x22] = 0;
                        puVar41[0x25] = 0;
                        puVar41[0x24] = 0;
                        puVar41[0x1f] = 0;
                        puVar41[0x1e] = 0;
                        puVar41[0x21] = 0;
                        puVar41[0x20] = 0;
                        puVar41[0x1b] = 0;
                        puVar41[0x1a] = 0;
                        puVar41[0x1d] = 0;
                        puVar41[0x1c] = 0;
                        puVar41[0x17] = 0;
                        puVar41[0x16] = 0;
                        puVar41[0x19] = 0;
                        puVar41[0x18] = 0;
                        puVar41[0x13] = 0;
                        puVar41[0x12] = 0;
                        puVar41[0x15] = 0;
                        puVar41[0x14] = 0;
                        puVar41[0xf] = 0;
                        puVar41[0xe] = 0;
                        puVar41[0x11] = 0;
                        puVar41[0x10] = 0;
                        puVar41[0xb] = 0;
                        puVar41[10] = 0;
                        puVar41[0xd] = 0;
                        puVar41[0xc] = 0;
                        puVar41[7] = 0;
                        puVar41[6] = 0;
                        puVar41[9] = 0;
                        puVar41[8] = 0;
                        puVar41[3] = 0;
                        puVar41[2] = 0;
                        puVar41[5] = 0;
                        puVar41[4] = 0;
                        puVar41[1] = 0;
                        *puVar41 = 0;
                    }
                    puVar41 = puVar41 + 0x2f;
                    iVar13 = iVar13 + -0x178;
                } while (iVar13 != 0);
                pcVar24 = iVar14 + ppiVar43 * 0x178;
                uStack_1e8 = uStack_200[0xb1];
                ppcVar16 = uStack_200[0xb0];
                if (uStack_1e8 == ppcVar16) {
                    uStack_200[0xb0] = puVar33;
                    uStack_200[0xb1] = pcVar32;
                    ppiStack_208 = uStack_200[0xb2];
                    uStack_200[0xb2] = pcVar24;
                }
                else {
                    ppcVar63 = uStack_1e8 + -0x178;
                    ppcVar48 = ppiVar39 * 0x178 + iVar14 + -0x178;
                    do {
                        ppcVar49 = ppcVar48;
                        *ppcVar49 = *ppcVar63;
                        ppcVar49[1] = ppcVar63[1];
                        *ppcVar63 = NULL;
                        ppcVar63[1] = NULL;
                        pcVar70 = ppcVar63[3];
                        pcVar69 = ppcVar63[2];
                        pcVar72 = ppcVar63[4];
                        ppcVar49[5] = ppcVar63[5];
                        ppcVar49[4] = pcVar72;
                        pcVar78 = ppcVar63[9];
                        pcVar76 = ppcVar63[8];
                        pcVar74 = ppcVar63[0xb];
                        pcVar72 = ppcVar63[10];
                        pcVar82 = ppcVar63[7];
                        pcVar79 = ppcVar63[6];
                        ppcVar49[0xc] = ppcVar63[0xc];
                        ppcVar49[9] = pcVar78;
                        ppcVar49[8] = pcVar76;
                        ppcVar49[0xb] = pcVar74;
                        ppcVar49[10] = pcVar72;
                        ppcVar49[7] = pcVar82;
                        ppcVar49[6] = pcVar79;
                        ppcVar49[3] = pcVar70;
                        ppcVar49[2] = pcVar69;
                        ppcVar49[0xd] = ppcVar63[0xd];
                        ppcVar49[0xe] = ppcVar63[0xe];
                        ppcVar63[0xd] = NULL;
                        ppcVar63[0xe] = NULL;
                        *(ppcVar49 + 0xf) = *(ppcVar63 + 0xf);
                        pcVar70 = ppcVar63[0x11];
                        pcVar69 = ppcVar63[0x10];
                        pcVar74 = ppcVar63[0x13];
                        pcVar72 = ppcVar63[0x12];
                        pcVar76 = ppcVar63[0x14];
                        pcVar79 = ppcVar63[0x17];
                        pcVar78 = ppcVar63[0x16];
                        ppcVar49[0x15] = ppcVar63[0x15];
                        ppcVar49[0x14] = pcVar76;
                        ppcVar49[0x17] = pcVar79;
                        ppcVar49[0x16] = pcVar78;
                        ppcVar49[0x11] = pcVar70;
                        ppcVar49[0x10] = pcVar69;
                        ppcVar49[0x13] = pcVar74;
                        ppcVar49[0x12] = pcVar72;
                        pcVar70 = ppcVar63[0x19];
                        pcVar69 = ppcVar63[0x18];
                        pcVar74 = ppcVar63[0x1b];
                        pcVar72 = ppcVar63[0x1a];
                        pcVar78 = ppcVar63[0x1d];
                        pcVar76 = ppcVar63[0x1c];
                        uVar61 = *(ppcVar63 + 0xe9);
                        *(ppcVar49 + 0xf1) = *(ppcVar63 + 0xf1);
                        *(ppcVar49 + 0xe9) = uVar61;
                        ppcVar49[0x1b] = pcVar74;
                        ppcVar49[0x1a] = pcVar72;
                        ppcVar49[0x1d] = pcVar78;
                        ppcVar49[0x1c] = pcVar76;
                        ppcVar49[0x19] = pcVar70;
                        ppcVar49[0x18] = pcVar69;
                        pcVar74 = ppcVar63[0x2b];
                        pcVar72 = ppcVar63[0x2a];
                        pcVar70 = ppcVar63[0x2d];
                        pcVar69 = ppcVar63[0x2c];
                        pcVar78 = ppcVar63[0x29];
                        pcVar76 = ppcVar63[0x28];
                        ppcVar49[0x2e] = ppcVar63[0x2e];
                        ppcVar49[0x2b] = pcVar74;
                        ppcVar49[0x2a] = pcVar72;
                        ppcVar49[0x2d] = pcVar70;
                        ppcVar49[0x2c] = pcVar69;
                        ppcVar49[0x29] = pcVar78;
                        ppcVar49[0x28] = pcVar76;
                        pcVar70 = ppcVar63[0x21];
                        pcVar69 = ppcVar63[0x20];
                        pcVar74 = ppcVar63[0x23];
                        pcVar72 = ppcVar63[0x22];
                        pcVar76 = ppcVar63[0x24];
                        pcVar79 = ppcVar63[0x27];
                        pcVar78 = ppcVar63[0x26];
                        ppcVar49[0x25] = ppcVar63[0x25];
                        ppcVar49[0x24] = pcVar76;
                        ppcVar49[0x27] = pcVar79;
                        ppcVar49[0x26] = pcVar78;
                        ppcVar49[0x21] = pcVar70;
                        ppcVar49[0x20] = pcVar69;
                        ppcVar49[0x23] = pcVar74;
                        ppcVar49[0x22] = pcVar72;
                        bVar4 = ppcVar63 != ppcVar16;
                        ppcVar63 = ppcVar63 + -0x178;
                        ppcVar48 = ppcVar49 + -0x178;
                    } while (bVar4);
                    uStack_1e8 = uStack_200[0xb0];
                    ppcVar16 = uStack_200[0xb1];
                    uStack_200[0xb0] = ppcVar49;
                    uStack_200[0xb1] = pcVar32;
                    ppiStack_208 = uStack_200[0xb2];
                    uStack_200[0xb2] = pcVar24;
                    if (ppcVar16 != uStack_1e8) {
                        piVar21 = ppcVar16 + -0x170;
                        do {
                            piVar65 = piVar21[0xd];
                            if (piVar65 != NULL) {
                                LOAcquire();
                                tmp_ldXn = piVar65[1];
                                iVar13 = tmp_ldXn;
                                tmp_stXn = iVar13 + -1;
                                iVar13 = tmp_stXn;
                                piVar65[1] = iVar13;
                                iVar13 = tmp_ldXn;
                                LORelease();
                                if (iVar13 == 0) {
                                    (**(*piVar65 + 0x10))(piVar65);
                                    std::__1::__shared_weak_count::__release_weak()(piVar65);
                                }
                            }
                            if (*piVar21 != 0) {
                                std::__1::__shared_weak_count::__release_weak()();
                            }
                            ppcVar16 = piVar21 + -8;
                            piVar21 = piVar21 + -0x178;
                        } while (ppcVar16 != uStack_1e8);
                    }
                }
                piVar21 = piStack_1c8;
                if (uStack_1e8 != NULL) {
                    (**(*uStack_200[0xb3] + 0x28))(uStack_200[0xb3], uStack_1e8, ppiStack_208 - uStack_1e8);
                    piVar21 = piStack_1c8;
                }
            }
            else {
                ppcVar16 = ppcVar63 + (ppiVar62 - ppiVar39) * 0x2f;
                iVar13 = ppiVar62 * 0x178 + ppiVar39 * -0x178;
                do {
                    if (ppcVar63 != NULL) {
                        ppcVar63[0x2e] = NULL;
                        ppcVar63[0x2b] = NULL;
                        ppcVar63[0x2a] = NULL;
                        ppcVar63[0x2d] = NULL;
                        ppcVar63[0x2c] = NULL;
                        ppcVar63[0x27] = NULL;
                        ppcVar63[0x26] = NULL;
                        ppcVar63[0x29] = NULL;
                        ppcVar63[0x28] = NULL;
                        ppcVar63[0x23] = NULL;
                        ppcVar63[0x22] = NULL;
                        ppcVar63[0x25] = NULL;
                        ppcVar63[0x24] = NULL;
                        ppcVar63[0x1f] = NULL;
                        ppcVar63[0x1e] = NULL;
                        ppcVar63[0x21] = NULL;
                        ppcVar63[0x20] = NULL;
                        ppcVar63[0x1b] = NULL;
                        ppcVar63[0x1a] = NULL;
                        ppcVar63[0x1d] = NULL;
                        ppcVar63[0x1c] = NULL;
                        ppcVar63[0x17] = NULL;
                        ppcVar63[0x16] = NULL;
                        ppcVar63[0x19] = NULL;
                        ppcVar63[0x18] = NULL;
                        ppcVar63[0x13] = NULL;
                        ppcVar63[0x12] = NULL;
                        ppcVar63[0x15] = NULL;
                        ppcVar63[0x14] = NULL;
                        ppcVar63[0xf] = NULL;
                        ppcVar63[0xe] = NULL;
                        ppcVar63[0x11] = NULL;
                        ppcVar63[0x10] = NULL;
                        ppcVar63[0xb] = NULL;
                        ppcVar63[10] = NULL;
                        ppcVar63[0xd] = NULL;
                        ppcVar63[0xc] = NULL;
                        ppcVar63[7] = NULL;
                        ppcVar63[6] = NULL;
                        ppcVar63[9] = NULL;
                        ppcVar63[8] = NULL;
                        ppcVar63[3] = NULL;
                        ppcVar63[2] = NULL;
                        ppcVar63[5] = NULL;
                        ppcVar63[4] = NULL;
                        ppcVar63[1] = NULL;
                        *ppcVar63 = NULL;
                    }
                    ppcVar63 = ppcVar63 + 0x2f;
                    iVar13 = iVar13 + -0x178;
                } while (iVar13 != 0);
code_r0x000193900578:
                piVar21 = piStack_1c8;
                ppcVar63 = ppcVar16;
code_r0x00019390057c:
                uStack_200[0xb1] = ppcVar63;
            }
            iVar13 = 0x161;
            uVar31 = uStack_1f8;
            ppiVar39 = ppiVar62;
            while( true ) {
                uVar44 = *puVar1;
                uVar20 = uVar44 + 1;
                if (*piVar21 * 8 <= uVar20 && uVar20 != *piVar21 * 8) break;
                uVar2 = *(*piStack_1d0 + (uVar44 >> 3));
                *puVar1 = uVar20;
                piVar21 = *param_3;
                if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) == 0) {
                    iVar14 = piVar21[0xb0];
                    *(iVar14 + iVar13) = 1;
                }
                else {
                    uVar20 = uVar31 << -0x3c + 0x40 & 0xffffffff0;
                    *(piVar21[0xb0] + iVar13 + -0xe1) =
                         *(*(piVar21[0xaf] + 8) + *(*(piVar21[0xaf] + 0x20) + uVar20) * 8);
                    piVar21 = *param_3;
                    if (*(*(piVar21[0xaf] + 0x20) + uVar20 + 8) != 1) {
                        uVar61 = **reloc.__stderrp;
                        pcVar32 = 0x10de;
                        goto code_r0x0001938ff7b0;
                    }
                    uVar31 = uVar31 + 1;
                    iVar14 = piVar21[0xb0];
                }
                piVar65 = param_3[1];
                if (piVar65 != NULL) {
                    tmp_ldXn = piVar65[2];
                    iVar15 = tmp_ldXn;
                    tmp_stXn = iVar15 + 1;
                    iVar15 = tmp_stXn;
                    piVar65[2] = iVar15;
                    uVar61 = tmp_ldXn;
                }
                *(iVar14 + iVar13 + -0x161) = piVar21;
                ppiVar43 = iVar14 + iVar13 + -0x159;
                piVar21 = *ppiVar43;
                *ppiVar43 = piVar65;
                if (piVar21 != NULL) {
                    std::__1::__shared_weak_count::__release_weak()();
                }
                iVar13 = iVar13 + 0x178;
                ppiVar39 = ppiVar39 + -1;
                piVar21 = piStack_1c8;
                if (ppiVar39 == NULL) {
                    uVar31 = bool geo::codec::decodeAttributeSet<GeoCodecsFeature>(signed char, Bitstream*, unsigned int, FeatureStyleAttributesSet*, GeoCodecsFeature*, unsigned long)
                                       (3, piStack_1d0, ppiVar62, *param_3 + 0x8b, (*param_3)[0xb0], 0x178);
                    if ((uVar31 & 1) != 0) {
                        pcVar24 = (*param_3)[0xb0];
                        pcVar32 = pcVar24;
                        if ((*param_3)[0xb1] != pcVar24) {
                            uVar31 = 0;
                            pcVar69 = pcVar24;
                            do {
                                ppiVar37 = *(pcVar69 + 0x68);
                                if ((ppiVar37 == NULL) || (uVar20 = *(ppiVar37 + 0x21),  uVar20 == 0)) {
code_r0x000193900734:
                                    iVar8 = 0xff;
                                }
                                else {
                                    piVar38 = *ppiVar37;
                                    if (*piVar38 != 0x2a) {
                                        uVar44 = 0;
                                        piVar46 = piVar38;
                                        do {
                                            piVar46 = piVar46 + 2;
                                            if (uVar20 + -1 == uVar44) goto code_r0x000193900734;
                                            uVar44 = uVar44 + 1;
                                        } while (*piVar46 != 0x2a);
                                        if (uVar20 <= uVar44) goto code_r0x000193900734;
                                        piVar38 = piVar38 + (uVar44 & 0xffffffff) * 2;
                                    }
                                    iVar8 = piVar38[1];
                                }
                                pcVar69[0x130] = SUB41(iVar8, 0);
                                uVar31 = uVar31 + 1;
                                pcVar69 = pcVar69 + 0x178;
                                pcVar32 = (*param_3)[0xb1];
                                pcVar24 = (*param_3)[0xb0];
                            } while (uVar31 < (pcVar32 - pcVar24 >> 3) * (0x677d46cf | 0x51b3bea300000000));
                        }
                        piVar65 = piStack_1d0;
                        goto code_r0x000193900af4;
                    }
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x10e6;
                    goto code_r0x0001938ff7b0;
                }
            }
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x10db;
        }
    }
    else {
        piVar51 = *param_3;
        ppcVar16 = uVar7;
        puVar33 = piVar51[0xa9];
        iVar13 = piVar51[0xa8];
        ppcVar63 = (puVar33 - iVar13 >> 3) * (0xe9bd37a7 | 0xd37a6f4d00000000);
        uStack_1e8 = ppcVar16;
        if (ppcVar16 <= ppcVar63) {
            if (ppcVar16 <= ppcVar63 && ppcVar63 - ppcVar16 != 0) {
                puVar42 = iVar13 + ppcVar16 * 0xb8;
                puVar41 = puVar33;
                uStack_1f8 = piVar51;
                if (puVar33 != puVar42) {
                    do {
                        puVar34 = puVar41 + -0xb8;
                        if (puVar41[-0x16] != 0) {
                            std::__1::__shared_weak_count::__release_weak()();
                            piVar21 = piStack_1c8;
                        }
                        puVar33 = puVar42;
                        puVar41 = puVar34;
                    } while (puVar34 != puVar42);
                }
                piVar51 = uStack_1f8;
                goto code_r0x000193900084;
            }
        }
        else if ((piVar51[0xaa] - puVar33 >> 3) * (0xe9bd37a7 | 0xd37a6f4d00000000) < ppcVar16 - ppcVar63) {
            uVar31 = (piVar51[0xaa] - iVar13 >> 3) * (0xe9bd37a7 | 0xd37a6f4d00000000);
            uStack_200 = uVar31 * 2;
            if (uStack_200 < ppcVar16 || uStack_200 - ppcVar16 == 0) {
                uStack_200 = ppcVar16;
            }
            if ((0xc8590b21 | 0xb2164200000000) <= uVar31) {
                uStack_200 = 0x90b21642 | 0x1642c8500000000;
            }
            uStack_1f8 = piVar51;
            iVar15 = (**(*piVar51[0xab] + 0x10))(piVar51[0xab], uStack_200 * 0xb8, 8);
            puVar33 = iVar15 + ppcVar63 * 0xb8;
            iVar13 = iVar15 + ppcVar16 * 0xb8;
            iVar14 = ppcVar16 * 0xb8 + ppcVar63 * -0xb8;
            puVar41 = puVar33;
            do {
                if (puVar41 != NULL) {
                    puVar41[0x16] = 0;
                    puVar41[0x13] = 0;
                    puVar41[0x12] = 0;
                    puVar41[0x15] = 0;
                    puVar41[0x14] = 0;
                    puVar41[0xf] = 0;
                    puVar41[0xe] = 0;
                    puVar41[0x11] = 0;
                    puVar41[0x10] = 0;
                    puVar41[0xb] = 0;
                    puVar41[10] = 0;
                    puVar41[0xd] = 0;
                    puVar41[0xc] = 0;
                    puVar41[7] = 0;
                    puVar41[6] = 0;
                    puVar41[9] = 0;
                    puVar41[8] = 0;
                    puVar41[3] = 0;
                    puVar41[2] = 0;
                    puVar41[5] = 0;
                    puVar41[4] = 0;
                    puVar41[1] = 0;
                    *puVar41 = 0;
                }
                puVar41 = puVar41 + 0x17;
                iVar14 = iVar14 + -0xb8;
            } while (iVar14 != 0);
            iVar15 = iVar15 + uStack_200 * 0xb8;
            puVar41 = uStack_1f8[0xa9];
            puVar42 = uStack_1f8[0xa8];
            if (puVar41 == puVar42) {
                uStack_1f8[0xa8] = puVar33;
                uStack_1f8[0xa9] = iVar13;
                uStack_200 = uStack_1f8[0xaa];
                uStack_1f8[0xaa] = iVar15;
            }
            else {
                do {
                    puVar40 = puVar41 + -0x17;
                    puVar34 = puVar33 + -0x17;
                    *puVar34 = *puVar40;
                    puVar33[-0x16] = puVar41[-0x16];
                    *puVar40 = 0;
                    puVar41[-0x16] = 0;
                    uVar75 = puVar41[-0x13];
                    uVar17 = puVar41[-0x10];
                    uVar61 = puVar41[-0x11];
                    uVar73 = puVar41[-0x14];
                    uVar71 = puVar41[-0x15];
                    puVar33[-0x12] = puVar41[-0x12];
                    puVar33[-0x13] = uVar75;
                    uVar75 = puVar41[-0xb];
                    uVar80 = puVar41[-8];
                    uVar77 = puVar41[-9];
                    uVar85 = puVar41[-0xe];
                    uVar84 = puVar41[-0xf];
                    uVar83 = puVar41[-0xc];
                    uVar81 = puVar41[-0xd];
                    puVar33[-10] = puVar41[-10];
                    puVar33[-0xb] = uVar75;
                    puVar33[-8] = uVar80;
                    puVar33[-9] = uVar77;
                    puVar33[-0xe] = uVar85;
                    puVar33[-0xf] = uVar84;
                    puVar33[-0xc] = uVar83;
                    puVar33[-0xd] = uVar81;
                    uVar81 = puVar41[-4];
                    uVar80 = puVar41[-5];
                    uVar77 = puVar41[-2];
                    uVar75 = puVar41[-3];
                    uVar84 = puVar41[-6];
                    uVar83 = puVar41[-7];
                    puVar33[-1] = puVar41[-1];
                    puVar33[-4] = uVar81;
                    puVar33[-5] = uVar80;
                    puVar33[-2] = uVar77;
                    puVar33[-3] = uVar75;
                    puVar33[-6] = uVar84;
                    puVar33[-7] = uVar83;
                    puVar33[-0x14] = uVar73;
                    puVar33[-0x15] = uVar71;
                    puVar33[-0x10] = uVar17;
                    puVar33[-0x11] = uVar61;
                    puVar33 = puVar34;
                    puVar41 = puVar40;
                } while (puVar40 != puVar42);
                puVar41 = uStack_1f8[0xa8];
                puVar33 = uStack_1f8[0xa9];
                uStack_1f8[0xa8] = puVar34;
                uStack_1f8[0xa9] = iVar13;
                uStack_200 = uStack_1f8[0xaa];
                uStack_1f8[0xaa] = iVar15;
                if (puVar33 != puVar41) {
                    do {
                        puVar42 = puVar33 + -0xb8;
                        if (puVar33[-0x16] != 0) {
                            std::__1::__shared_weak_count::__release_weak()();
                        }
                        puVar33 = puVar42;
                    } while (puVar42 != puVar41);
                }
            }
            piVar65 = piStack_1d0;
            piVar21 = piStack_1c8;
            if (puVar41 != NULL) {
                (**(*uStack_1f8[0xab] + 0x28))(uStack_1f8[0xab], puVar41, uStack_200 - puVar41);
                piVar21 = piStack_1c8;
            }
        }
        else {
            puVar41 = puVar33 + (ppcVar16 - ppcVar63) * 0x17;
            iVar13 = ppcVar16 * 0xb8 + ppcVar63 * -0xb8;
            do {
                if (puVar33 != NULL) {
                    puVar33[0x16] = 0;
                    puVar33[0x13] = 0;
                    puVar33[0x12] = 0;
                    puVar33[0x15] = 0;
                    puVar33[0x14] = 0;
                    puVar33[0xf] = 0;
                    puVar33[0xe] = 0;
                    puVar33[0x11] = 0;
                    puVar33[0x10] = 0;
                    puVar33[0xb] = 0;
                    puVar33[10] = 0;
                    puVar33[0xd] = 0;
                    puVar33[0xc] = 0;
                    puVar33[7] = 0;
                    puVar33[6] = 0;
                    puVar33[9] = 0;
                    puVar33[8] = 0;
                    puVar33[3] = 0;
                    puVar33[2] = 0;
                    puVar33[5] = 0;
                    puVar33[4] = 0;
                    puVar33[1] = 0;
                    *puVar33 = 0;
                }
                puVar33 = puVar33 + 0x17;
                iVar13 = iVar13 + -0xb8;
            } while (iVar13 != 0);
            piVar21 = piStack_1c8;
            puVar33 = puVar41;
code_r0x000193900084:
            piVar51[0xa9] = puVar33;
            piVar65 = piStack_1d0;
        }
        uVar31 = *puVar1;
        uVar20 = *piVar21 * 8;
        if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x10a9;
            goto code_r0x0001938ff7b0;
        }
        uVar9 = 0;
        iVar13 = *piVar65;
        uVar44 = 5;
        do {
            uVar58 = 8 - (uVar31 & 7);
            uVar55 = uVar44;
            if (uVar58 <= uVar44) {
                uVar55 = uVar58;
            }
            uVar10 = uVar55;
            uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                    (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar10 & 0x1f);
            uVar31 = uVar55 + uVar31;
            *puVar1 = uVar31;
            uVar44 = uVar44 - uVar55;
        } while (uVar44 != 0);
        if (uVar20 <= uVar31 + 5 && uVar31 + 5 != uVar20) {
            pcVar32 = 0x10ab;
            goto code_r0x000193900470;
        }
        uVar10 = 0;
        uVar9 = uVar9 + 1;
        uVar44 = 5;
        do {
            uVar58 = 8 - (uVar31 & 7);
            uVar55 = uVar44;
            if (uVar58 <= uVar44) {
                uVar55 = uVar58;
            }
            uVar5 = uVar55;
            uVar10 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar5 & 0x1f) &
                     (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar5 & 0x1f);
            uVar31 = uVar55 + uVar31;
            *puVar1 = uVar31;
            uVar44 = uVar44 - uVar55;
        } while (uVar44 != 0);
        ppcVar16 = NULL;
        iVar8 = 0;
        uVar44 = uVar10 + 1;
        piVar21 = *param_3;
        do {
            uVar55 = uVar31 + uVar9;
            if (uVar20 <= uVar55 && uVar55 != uVar20) {
                pcVar32 = 0x10af;
                goto code_r0x000193900470;
            }
            uVar23 = 0;
            uVar5 = 0;
            uVar55 = uVar9;
            if (uVar9 != 0) {
                do {
                    uVar27 = 8 - (uVar31 & 7);
                    uVar58 = uVar55;
                    if (uVar27 <= uVar55) {
                        uVar58 = uVar27;
                    }
                    uVar5 = uVar58;
                    uVar5 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar5 & 0x1f) &
                            (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar23 << (uVar5 & 0x1f);
                    uVar31 = uVar58 + uVar31;
                    *puVar1 = uVar31;
                    uVar55 = uVar55 - uVar58;
                    uVar55 = uVar55;
                    uVar23 = uVar5;
                } while (uVar55 != 0);
            }
            iVar14 = piVar21[0xa8] + ppcVar16 * 0xb8;
            *(iVar14 + 0x10) = iVar8;
            *(iVar14 + 0x14) = uVar5;
            iVar8 = uVar5 + iVar8;
            ppcVar16 = ppcVar16 + 1;
        } while (ppcVar16 != uStack_1e8);
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_, iVar8);
        if (uVar20 <= uVar31 + uVar44 && uVar31 + uVar44 != uVar20) {
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x10b6;
        }
        else {
            if (uVar10 + 1 == 0) {
                (*param_3)[0xae] = 0;
            }
            else {
                uVar20 = 0;
                do {
                    uVar58 = 8 - (uVar31 & 7);
                    uVar55 = uVar44;
                    if (uVar58 <= uVar44) {
                        uVar55 = uVar58;
                    }
                    uVar9 = uVar55;
                    uVar20 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar9 & 0x3f) & ~(-1 << (uVar9 & 0x1f))
                             | uVar20 << (uVar9 & 0x1f);
                    uVar31 = uVar55 + uVar31;
                    *puVar1 = uVar31;
                    uVar44 = uVar44 - uVar55;
                } while (uVar44 != 0);
                (*param_3)[0xae] = uVar20;
                if (uVar20 != 0) {
                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                    uVar9 = tmp_ldWn;
                    if (((uVar9 & 1) == 0) && (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                        ppcVar16 = operator new(unsigned long)(0x108);
                        ppcVar16[1] = 0x61 + 0x193b8a000;
                        ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                        ppcVar16[3] = 0x61 + 0x193b8a000;
                        pcVar32 = *0x193af97f0;
                        ppcVar16[5] = *0x193af97f8;
                        ppcVar16[4] = pcVar32;
                        *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                    0xfa8 + 0x10;
                        ppcVar16[8] = NULL;
                        ppcVar16[7] = NULL;
                        ppcVar16[10] = NULL;
                        ppcVar16[9] = NULL;
                        ppcVar16[0xc] = NULL;
                        ppcVar16[0xb] = NULL;
                        ppcVar16[0xe] = NULL;
                        ppcVar16[0xd] = NULL;
                        ppcVar16[0x10] = NULL;
                        ppcVar16[0xf] = NULL;
                        ppcVar16[0x12] = NULL;
                        ppcVar16[0x11] = NULL;
                        ppcVar16[0x14] = NULL;
                        ppcVar16[0x13] = NULL;
                        ppcVar16[0x16] = NULL;
                        ppcVar16[0x15] = NULL;
                        ppcVar16[0x18] = NULL;
                        ppcVar16[0x17] = NULL;
                        ppcVar16[0x1a] = NULL;
                        ppcVar16[0x19] = NULL;
                        ppcVar16[0x1c] = NULL;
                        ppcVar16[0x1b] = NULL;
                        ppcVar16[0x1e] = NULL;
                        ppcVar16[0x1d] = NULL;
                        ppcVar16[0x1f] = NULL;
                        uVar61 = pthread_rwlock_init(ppcVar16 + 7, 0);
                        if (uVar61 != 0) {
                            geo::read_write_lock::logFailure(int, char const*)(uVar61, 0x85 + 0x193b8a000);
                        }
                        pcVar32 = malloc_create_zone(0, 0);
                        ppcVar16[6] = pcVar32;
                        malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
                        pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                        ppcVar16[0x20] = pcVar32;
                        *geo::codec::Allocator::instance()::alloc = ppcVar16;
                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                    }
                    iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                       (*geo::codec::Allocator::instance()::alloc, (*param_3)[0xae] << 3, 8);
                    (*param_3)[0xac] = iVar13;
                    if (iVar13 == 0) {
                        uVar61 = **reloc.__stderrp;
                        pcVar32 = 0x10bb;
                        goto code_r0x0001938ff7b0;
                    }
                }
            }
            ppcVar16 = NULL;
            uStack_1e8 = NULL;
            if (uVar7 < 2) {
                uVar7 = 1;
            }
            uStack_200 = uVar7;
            while( true ) {
                piVar21 = *param_3;
                piVar65 = param_3[1];
                iVar13 = piVar21[0xa8];
                if (piVar65 != NULL) {
                    tmp_ldXn = piVar65[2];
                    iVar14 = tmp_ldXn;
                    tmp_stXn = iVar14 + 1;
                    iVar14 = tmp_stXn;
                    piVar65[2] = iVar14;
                    uVar61 = tmp_ldXn;
                }
                ppiVar39 = iVar13 + ppcVar16 * 0xb8;
                piVar51 = ppiVar39[1];
                *ppiVar39 = piVar21;
                ppiVar39[1] = piVar65;
                if (piVar51 != NULL) {
                    std::__1::__shared_weak_count::__release_weak()();
                }
                uVar20 = *puVar1;
                uVar44 = *piStack_1c8 * 8;
                uVar31 = uVar20 + *(&stack0x00000000 + -0x1f0);
                if (uVar44 <= uVar31 && uVar31 != uVar44) break;
                uVar9 = 0;
                if (*(&stack0x00000000 + -0x1f0) == 0) {
code_r0x0001939009cc:
                    ppcVar63 = uStack_1e8;
                }
                else {
                    iVar13 = *piStack_1d0;
                    uVar31 = *(&stack0x00000000 + -0x1f0);
                    do {
                        uVar58 = 8 - (uVar20 & 7);
                        uVar55 = uVar31;
                        if (uVar58 <= uVar31) {
                            uVar55 = uVar58;
                        }
                        uVar7 = uVar55;
                        uVar9 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar7 & 0x1f) &
                                (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                        uVar20 = uVar55 + uVar20;
                        *puVar1 = uVar20;
                        uVar31 = uVar31 - uVar55;
                    } while (uVar31 != 0);
                    if (uVar9 == 0) goto code_r0x0001939009cc;
                    iVar8 = uVar9 + uStack_1e8;
                    piVar21 = *param_3;
                    if (uStack_1d8 == 0) {
                        ppcVar63 = uStack_1e8;
                        do {
                            if (uVar44 <= uVar20 + uStack_1d8 && uVar20 + uStack_1d8 != uVar44)
                            goto code_r0x000193900aa8;
                            iVar14 = piVar21[0xac];
                            *(iVar14 + ppcVar63 * 8) = 0;
                            uVar31 = uStack_1e0;
                            if (uVar44 <= uVar20 + uVar31 && uVar20 + uVar31 != uVar44) goto code_r0x000193900ab0;
                            uVar10 = 0;
                            uVar7 = 0;
                            if (uVar31 != 0) {
                                do {
                                    uVar58 = 8 - (uVar20 & 7);
                                    uVar55 = uVar31;
                                    if (uVar58 <= uVar31) {
                                        uVar55 = uVar58;
                                    }
                                    uVar7 = uVar55;
                                    uVar7 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar7 & 0x1f) &
                                            (-1 << (uVar7 & 0x1f) ^ 0xffffffffU) | uVar10 << (uVar7 & 0x1f);
                                    uVar20 = uVar55 + uVar20;
                                    *puVar1 = uVar20;
                                    uVar31 = uVar31 - uVar55;
                                    uVar10 = uVar7;
                                } while (uVar31 != 0);
                            }
                            *(iVar14 + ppcVar63 * 8 + 4) = uVar7;
                            ppcVar63 = ppcVar63 + 1;
                        } while (iVar8 != ppcVar63);
                    }
                    else {
                        ppcVar63 = uStack_1e8;
                        do {
                            uVar31 = uStack_1d8;
                            if (uVar44 <= uVar20 + uVar31 && uVar20 + uVar31 != uVar44) goto code_r0x000193900aa8;
                            uVar7 = 0;
                            do {
                                uVar58 = 8 - (uVar20 & 7);
                                uVar55 = uVar31;
                                if (uVar58 <= uVar31) {
                                    uVar55 = uVar58;
                                }
                                uVar10 = uVar55;
                                uVar7 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar10 & 0x1f) &
                                        (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                                uVar20 = uVar55 + uVar20;
                                *puVar1 = uVar20;
                                uVar31 = uVar31 - uVar55;
                            } while (uVar31 != 0);
                            iVar14 = piVar21[0xac];
                            *(iVar14 + ppcVar63 * 8) = uVar7;
                            uVar31 = uStack_1e0;
                            if (uVar44 <= uVar20 + uVar31 && uVar20 + uVar31 != uVar44) goto code_r0x000193900ab0;
                            uVar10 = 0;
                            uVar7 = 0;
                            if (uVar31 != 0) {
                                do {
                                    uVar58 = 8 - (uVar20 & 7);
                                    uVar55 = uVar31;
                                    if (uVar58 <= uVar31) {
                                        uVar55 = uVar58;
                                    }
                                    uVar7 = uVar55;
                                    uVar7 = *(iVar13 + (uVar20 >> 3)) >> ((8 - (uVar20 & 7)) - uVar7 & 0x1f) &
                                            (-1 << (uVar7 & 0x1f) ^ 0xffffffffU) | uVar10 << (uVar7 & 0x1f);
                                    uVar20 = uVar55 + uVar20;
                                    *puVar1 = uVar20;
                                    uVar31 = uVar31 - uVar55;
                                    uVar10 = uVar7;
                                } while (uVar31 != 0);
                            }
                            *(iVar14 + ppcVar63 * 8 + 4) = uVar7;
                            ppcVar63 = ppcVar63 + 1;
                        } while (iVar8 != ppcVar63);
                    }
                }
                iVar13 = (*param_3)[0xa8] + ppcVar16 * 0xb8;
                uVar31 = ppcVar63 - uStack_1e8;
                *(iVar13 + 0x18) = uStack_1e8;
                *(iVar13 + 0x20) = uVar31;
                if (uVar31 != uVar9) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x10ce;
                    goto code_r0x0001938ff7b0;
                }
                ppcVar16 = ppcVar16 + 1;
                uStack_1e8 = ppcVar63;
                if (ppcVar16 == uStack_200) {
                    piVar65 = piStack_1d0;
                    piVar21 = piStack_1c8;
                    ppcVar16 = *param_3;
                    if (iVar6 != 0) goto code_r0x0001938ffd54;
                    goto code_r0x000193900aec;
                }
            }
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x10c3;
        }
    }
    goto code_r0x0001938ff7b0;
code_r0x0001938ff658:
    uVar20 = uVar20 + 1;
    if (uVar31 < uVar20 || uVar31 == uVar20) goto code_r0x0001938ff6bc;
    goto code_r0x0001938ff648;
code_r0x000193900aa8:
    pcVar32 = 0x10c7;
    goto code_r0x000193900470;
code_r0x000193900ab0:
    pcVar32 = 0x10c9;
    goto code_r0x000193900470;
code_r0x000193902050:
    uVar61 = **reloc.__stderrp;
    pcVar32 = 0x1191;
    goto code_r0x0001938ff7b0;
code_r0x000193904d80:
    ppiStack_220 = ppiStack_208 + 5;
    uStack_210 = (uStack_210 >> 0x20) << 0x20;
    goto code_r0x000193904d84;
code_r0x000193904a4c:
    ppiStack_238 = *ppiStack_238;
    if (ppiStack_238 == NULL) {
        if (*(ppiStack_208 + 0xd) == '\0') goto code_r0x000193904c74;
        piVar21 = ppiStack_208[6];
        goto code_r0x000193904c58;
    }
    uStack_1e8 = ppiStack_238[2];
    if (*(uStack_1e8 + 0x14) != 0) {
        uVar31 = 0;
        uVar20 = 1;
        iVar13 = 8;
        do {
            if (((uVar20 != 0) && (uStack_1e8[1] != NULL)) &&
               (piVar21 = std::__1::__shared_weak_count::lock()(),  piVar21 != NULL)) {
                if ((*uStack_1e8 == NULL) || (iVar14 = *(*uStack_1e8 + 0x578),  iVar14 == 0)) {
                    piStack_218 = NULL;
                }
                else {
                    piStack_218 = *(*(iVar14 + 0x20) + *(uStack_1e8 + 2) * 0x10 + iVar13);
                }
                LOAcquire();
                tmp_ldXn = *(piVar21 + 8);
                iVar14 = tmp_ldXn;
                tmp_stXn = iVar14 + -1;
                uVar61 = tmp_stXn;
                *(piVar21 + 8) = uVar61;
                iVar14 = tmp_ldXn;
                LORelease();
                if (iVar14 == 0) {
                    (**(*piVar21 + 0x10))(piVar21);
                    std::__1::__shared_weak_count::__release_weak()(piVar21);
                }
                if (piStack_218 != NULL) goto code_r0x000193904b34;
            }
            uVar31 = uVar31 + 1;
            uVar20 = *(uStack_1e8 + 0x14);
            iVar13 = iVar13 + 0x10;
            if (uVar20 <= uVar31) break;
        } while( true );
    }
    goto code_r0x000193904a34;
code_r0x000193904b34:
    iVar13 = 0;
    piStack_218 = 0x1;
    iVar8 = 1;
    do {
        if (((iVar8 != 0) && (uStack_1e8[1] != NULL)) &&
           (piVar21 = std::__1::__shared_weak_count::lock()(),  piVar21 != NULL)) {
            if ((*uStack_1e8 == NULL) || (iVar14 = *(*uStack_1e8 + 0x578),  iVar14 == 0)) {
                iVar15 = 0;
                ppiStack_220 = NULL;
            }
            else {
                piVar65 = *(iVar14 + 0x20) + *(uStack_1e8 + 2) * 0x10 + iVar13;
                iVar15 = piVar65[1];
                ppiStack_220 = *(iVar14 + 8) + *piVar65 * 8;
            }
            LOAcquire();
            tmp_ldXn = *(piVar21 + 8);
            iVar14 = tmp_ldXn;
            tmp_stXn = iVar14 + -1;
            uVar61 = tmp_stXn;
            *(piVar21 + 8) = uVar61;
            iVar14 = tmp_ldXn;
            LORelease();
            if (iVar14 == 0) {
                (**(*piVar21 + 0x10))(piVar21);
                std::__1::__shared_weak_count::__release_weak()(piVar21);
            }
            if (iVar15 != 0) break;
        }
        iVar8 = *(uStack_1e8 + 0x14);
        piStack_218 = piStack_218 + 1;
        iVar13 = iVar13 + 0x10;
    } while( true );
    if ((fVar86 <= ABS(*ppiStack_220 - *piStack_240)) || (fVar86 <= ABS(*(ppiStack_220 + 4) - *(piStack_240 + 4))))
    goto code_r0x000193904a34;
    goto code_r0x000193904a4c;
code_r0x00019390490c:
    if (*(uStack_1e8 + 0x14) == 0) {
code_r0x0001939049dc:
        piVar21 = NULL;
        if (fVar86 <= ABS(_Reset - *piStack_240)) goto code_r0x000193904a34;
    }
    else {
        iVar13 = *(uStack_1e8 + 0x14) << 4;
        if (true) goto code_r0x000193904934;
        do {
            do {
                do {
                    iVar13 = iVar13 + -0x10;
                    if (iVar13 == 0) goto code_r0x0001939049dc;
                } while (*(uStack_1e8 + 0x14) == 0);
code_r0x000193904934:
            } while ((uStack_1e8[1] == NULL) || (piVar21 = std::__1::__shared_weak_count::lock()(),  piVar21 == NULL));
            if ((*uStack_1e8 == NULL) || (iVar14 = *(*uStack_1e8 + 0x578),  iVar14 == 0)) {
                iVar15 = 0;
                piStack_218 = NULL;
            }
            else {
                iVar22 = *(iVar14 + 0x20) + *(uStack_1e8 + 2) * 0x10 + iVar13;
                iVar15 = *(iVar22 + -8);
                piStack_218 = *(iVar14 + 8) + *(iVar22 + -0x10) * 8;
            }
            LOAcquire();
            tmp_ldXn = *(piVar21 + 8);
            iVar14 = tmp_ldXn;
            tmp_stXn = iVar14 + -1;
            uVar61 = tmp_stXn;
            *(piVar21 + 8) = uVar61;
            iVar14 = tmp_ldXn;
            LORelease();
            if (iVar14 == 0) {
                (**(*piVar21 + 0x10))(piVar21);
                std::__1::__shared_weak_count::__release_weak()(piVar21);
            }
        } while (iVar15 == 0);
        piVar21 = piStack_218 + iVar15 + -1;
        if (fVar86 <= ABS(*piVar21 - *piStack_240)) goto code_r0x000193904a34;
    }
    if (fVar86 <= ABS(*(piVar21 + 4) - *(piStack_240 + 4))) goto code_r0x000193904a34;
    goto code_r0x000193904824;
code_r0x000193904a34:
    *(ppiStack_208 + 0xd) = 0;
code_r0x000193904c74:
    ppiStack_208 = *ppiStack_208;
    if (ppiStack_208 == NULL) goto code_r0x000193904c84;
    goto code_r0x000193904554;
code_r0x000193904c84:
    uStack_210 = CONCAT44(uStack_210._4_4_, 1);
    if ((uStack_228 != NULL) && (uStack_230 != NULL)) {
        piVar21 = *param_3;
        piVar21[0xbc] = uStack_228;
        piVar21[0xbe] = uStack_230;
        tmp_ldWn = *(0x290 + 0x1d6cc0000);
        uVar9 = tmp_ldWn;
        if (((uVar9 & 1) == 0) && (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
            uVar61 = operator new(unsigned long)(0x108);
            geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                      (uVar61, 0x61 + 0x193b8a000, 0xc36000000008 | 0x99af000000000000, 0, 0);
            *geo::codec::Allocator::instance()::alloc = uVar61;
            __cxa_guard_release(0x290 + 0x1d6cc0000);
        }
        iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                           (*geo::codec::Allocator::instance()::alloc, (*param_3)[0xbc] << 5, 8);
        (*param_3)[0xbb] = iVar13;
        tmp_ldWn = *(0x290 + 0x1d6cc0000);
        uVar9 = tmp_ldWn;
        if (((uVar9 & 1) == 0) && (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
            uVar61 = operator new(unsigned long)(0x108);
            geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                      (uVar61, 0x61 + 0x193b8a000, 0xc36000000008 | 0x99af000000000000, 0, 0);
            *geo::codec::Allocator::instance()::alloc = uVar61;
            __cxa_guard_release(0x290 + 0x1d6cc0000);
        }
        iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                           (*geo::codec::Allocator::instance()::alloc, (*param_3)[0xbe] << 4, 8);
        uStack_210 = (uStack_210 >> 0x20) << 0x20;
        piVar21 = *param_3;
        piVar21[0xbd] = iVar13;
        if ((piVar21[0xbb] != 0) && (iVar13 != 0)) {
            ppiStack_220 = ppiStack_190;
            if (ppiStack_190 != NULL) {
                uStack_1e8 = (uStack_1e8 >> 0x20) << 0x20;
                uVar9 = 0;
                do {
                    if (*(ppiStack_220 + 0xd) != '\0') {
                        ppiStack_208 = (*param_3)[0xbb] + uStack_1e8 * 0x20;
                        ppiStack_220[0xe] = ppiStack_208;
                        ppiStack_208[1] = NULL;
                        *(ppiStack_208 + 4) = uVar9;
                        piVar21 = ppiStack_220[5];
                        if (piVar21 != NULL) {
                            do {
                                piVar65 = *param_3;
                                uStack_210 = piVar65[0xbd] + uVar9 * 0x10;
                                *uStack_210 = uStack_1e8;
                                piVar51 = piVar21[2];
                                *(uStack_210 + 4) = (piVar51 - piVar65[0xa8] >> 3) * (0x37a7 | 0xe9bd0000);
                                iVar8 = *(piVar51 + 0x14);
                                uVar7 = iVar8 + -1;
                                piStack_218 = uVar7;
                                *(uStack_210 + 1) = uVar7;
                                if (((iVar8 == 0) || (piVar51[1] == 0)) ||
                                   (piVar65 = std::__1::__shared_weak_count::lock()(),  piVar65 == NULL)) {
                                    piStack_218 = NULL;
                                }
                                else {
                                    if ((*piVar51 == 0) || (iVar13 = *(*piVar51 + 0x578),  iVar13 == 0)) {
                                        piStack_218 = NULL;
                                    }
                                    else {
                                        piStack_218 = *(*(iVar13 + 0x20) + *(piVar51 + 2) * 0x10 + (piStack_218 << 4) +
                                                       8);
                                    }
                                    LOAcquire();
                                    tmp_ldXn = *(piVar65 + 8);
                                    iVar13 = tmp_ldXn;
                                    tmp_stXn = iVar13 + -1;
                                    uVar61 = tmp_stXn;
                                    *(piVar65 + 8) = uVar61;
                                    iVar13 = tmp_ldXn;
                                    LORelease();
                                    if (iVar13 == 0) {
                                        (**(*piVar65 + 0x10))(piVar65);
                                        std::__1::__shared_weak_count::__release_weak()(piVar65);
                                    }
                                }
                                *(uStack_210 + 0xc) = piStack_218 + -1;
                                *(piVar21[2] + 0x30) = ppiStack_208;
                                piVar21 = *piVar21;
                                uVar9 = uVar9 + 1;
                            } while (piVar21 != NULL);
                        }
                        ppiVar39 = ppiStack_220[10];
                        if (ppiVar39 != NULL) {
                            iVar13 = (*param_3)[0xbd];
                            iVar14 = (*param_3)[0xa8];
                            do {
                                piVar38 = iVar13 + uVar9 * 0x10;
                                *piVar38 = uStack_1e8;
                                piVar21 = ppiVar39[2];
                                uVar9 = uVar9 + 1;
                                *(piVar38 + 2) = 0;
                                piVar38[1] = (piVar21 - iVar14 >> 3) * (0x37a7 | 0xe9bd0000);
                                piVar21[5] = ppiStack_208;
                                ppiVar39 = *ppiVar39;
                            } while (ppiVar39 != NULL);
                        }
                        *ppiStack_208 = uVar9 - *(ppiStack_208 + 4);
                        uStack_1e8 = CONCAT44(uStack_1e8._4_4_, uStack_1e8 + 1);
                    }
                    ppiStack_220 = *ppiStack_220;
                } while (ppiStack_220 != NULL);
                piVar21 = *param_3;
            }
            iVar14 = piVar21[0xb0];
            iVar13 = piVar21[0xb1] - iVar14;
            if ((iVar13 != 0) && (piStack_198 != NULL)) {
                uVar31 = 0;
                iVar13 = SUB168(SEXT816(iVar13) * SEXT816(0x4c415c99 | 0x572620ae00000000), 8);
                uVar20 = (iVar13 >> 7) - (iVar13 >> 0x3f);
                uVar61 = NEON_cnt(piStack_198, 1);
                uVar68 = NEON_uaddlv(uVar61, 1);
                uVar9 = CONCAT62(uVar61 >> 0x10, uVar68) & 0xffffffff;
                if (uVar20 < 2) {
                    uVar20 = 1;
                }
code_r0x00019390542c:
                iVar13 = iVar14 + uVar31 * 0x178;
                piVar21 = *(iVar13 + 0x40);
                if (uVar9 < 2) {
                    piVar65 = piVar21 & piStack_198 + -1;
                }
                else {
                    piVar65 = piVar21;
                    if (piStack_198 <= piVar21) {
                        uVar44 = 0;
                        if (piStack_198 != NULL) {
                            uVar44 = piVar21 / piStack_198;
                        }
                        piVar65 = piVar21 - uVar44 * piStack_198;
                    }
                }
                ppiVar39 = *(puStack_1a0 + piVar65 * 8);
                if ((ppiVar39 != NULL) && (ppiVar39 = *ppiVar39,  ppiVar39 != NULL)) {
                    if (uVar9 < 2) {
                        do {
                            if (ppiVar39[1] == piVar21) {
                                if (ppiVar39[2] == piVar21) goto code_r0x0001939054e4;
                            }
                            else if ((ppiVar39[1] & piStack_198 + -1) != piVar65) break;
                            ppiVar39 = *ppiVar39;
                        } while (ppiVar39 != NULL);
                    }
                    else {
                        do {
                            piVar51 = ppiVar39[1];
                            if (piVar51 == piVar21) {
                                if (ppiVar39[2] == piVar21) goto code_r0x0001939054e4;
                            }
                            else {
                                if (piStack_198 <= piVar51) {
                                    uVar44 = 0;
                                    if (piStack_198 != NULL) {
                                        uVar44 = piVar51 / piStack_198;
                                    }
                                    piVar51 = piVar51 - uVar44 * piStack_198;
                                }
                                if (piVar51 != piVar65) break;
                            }
                            ppiVar39 = *ppiVar39;
                        } while (ppiVar39 != NULL);
                    }
                }
                goto code_r0x000193905418;
            }
            uStack_210 = CONCAT44(uStack_210._4_4_, 1);
        }
    }
code_r0x000193904d84:
    ppiVar39 = ppiStack_190;
    if (ppiStack_190 != NULL) {
        do {
            ppiVar18 = *ppiVar39;
            ppiVar43 = ppiVar39[10];
            if (ppiVar43 != NULL) {
                do {
                    ppiVar43 = *ppiVar43;
                    operator delete(void*)();
                } while (ppiVar43 != NULL);
            }
            piVar21 = ppiVar39[8];
            ppiVar39[8] = NULL;
            if (piVar21 != NULL) {
                operator delete(void*)();
            }
            ppiVar43 = ppiVar39[5];
            if (ppiVar43 != NULL) {
                do {
                    ppiVar43 = *ppiVar43;
                    operator delete(void*)();
                } while (ppiVar43 != NULL);
            }
            piVar21 = ppiVar39[3];
            ppiVar39[3] = NULL;
            if (piVar21 != NULL) {
                operator delete(void*)();
            }
            operator delete(void*)(ppiVar39);
            ppiVar39 = ppiVar18;
        } while (ppiVar18 != NULL);
    }
    iVar13 = puStack_1a0;
    puStack_1a0 = NULL;
    if (iVar13 != 0) {
        operator delete(void*)();
    }
    if ((uStack_210 & 1) == 0) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x1282;
        goto code_r0x0001938ff7b0;
    }
code_r0x000193904da4:
    uVar44 = *puVar1;
    uVar31 = uVar44 + 1;
    uVar20 = *piStack_1c8 * 8;
    if (uVar20 <= uVar31 && uVar31 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x12a0;
        goto code_r0x0001938ff7b0;
    }
    iVar13 = *piStack_1d0;
    uVar2 = *(iVar13 + (uVar44 >> 3));
    *puVar1 = uVar31;
    if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) != 0) {
        if (uVar44 + 6 < uVar20 || uVar44 + 6 == uVar20) {
            uVar9 = 0;
            uVar44 = 5;
            do {
                uVar58 = 8 - (uVar31 & 7);
                uVar55 = uVar44;
                if (uVar58 <= uVar44) {
                    uVar55 = uVar58;
                }
                uVar7 = uVar55;
                uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                uVar31 = uVar55 + uVar31;
                *puVar1 = uVar31;
                uVar44 = uVar44 - uVar55;
            } while (uVar44 != 0);
            if (uVar31 + 5 < uVar20 || uVar31 + 5 == uVar20) {
                uVar7 = 0;
                uStack_1e8 = uVar9 + 1;
                uVar44 = 5;
                do {
                    uVar58 = 8 - (uVar31 & 7);
                    uVar55 = uVar44;
                    if (uVar58 <= uVar44) {
                        uVar55 = uVar58;
                    }
                    uVar9 = uVar55;
                    uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar9 & 0x1f) &
                            (-1 << (uVar9 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar9 & 0x1f);
                    uVar31 = uVar55 + uVar31;
                    *puVar1 = uVar31;
                    uVar44 = uVar44 - uVar55;
                } while (uVar44 != 0);
                if (uVar31 + 5 < uVar20 || uVar31 + 5 == uVar20) {
                    uVar9 = 0;
                    ppiStack_208 = uVar7 + 1;
                    uVar44 = 5;
                    do {
                        uVar58 = 8 - (uVar31 & 7);
                        uVar55 = uVar44;
                        if (uVar58 <= uVar44) {
                            uVar55 = uVar58;
                        }
                        uVar7 = uVar55;
                        uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                        uVar31 = uVar55 + uVar31;
                        *puVar1 = uVar31;
                        uVar44 = uVar44 - uVar55;
                    } while (uVar44 != 0);
                    if (uVar31 + 5 < uVar20 || uVar31 + 5 == uVar20) {
                        uVar7 = 0;
                        uStack_210 = uVar9 + 1;
                        uVar44 = 5;
                        do {
                            uVar58 = 8 - (uVar31 & 7);
                            uVar55 = uVar44;
                            if (uVar58 <= uVar44) {
                                uVar55 = uVar58;
                            }
                            uVar9 = uVar55;
                            uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar9 & 0x1f) &
                                    (-1 << (uVar9 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar9 & 0x1f);
                            uVar31 = uVar55 + uVar31;
                            *puVar1 = uVar31;
                            uVar44 = uVar44 - uVar55;
                        } while (uVar44 != 0);
                        uVar44 = uVar7 + 1;
                        if (uVar31 + uVar44 < uVar20 || uVar31 + uVar44 == uVar20) {
                            uVar9 = 0;
                            if (uVar7 + 1 != 0) {
                                do {
                                    uVar58 = 8 - (uVar31 & 7);
                                    uVar55 = uVar44;
                                    if (uVar58 <= uVar44) {
                                        uVar55 = uVar58;
                                    }
                                    uVar7 = uVar55;
                                    uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                            (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                                    uVar31 = uVar55 + uVar31;
                                    *puVar1 = uVar31;
                                    uVar44 = uVar44 - uVar55;
                                } while (uVar44 != 0);
                            }
                            if (uVar31 + 5 < uVar20 || uVar31 + 5 == uVar20) {
                                uVar7 = 0;
                                uVar44 = 5;
                                do {
                                    uVar58 = 8 - (uVar31 & 7);
                                    uVar55 = uVar44;
                                    if (uVar58 <= uVar44) {
                                        uVar55 = uVar58;
                                    }
                                    uVar10 = uVar55;
                                    uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                                            (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                                    uVar31 = uVar55 + uVar31;
                                    *puVar1 = uVar31;
                                    uVar44 = uVar44 - uVar55;
                                } while (uVar44 != 0);
                                uVar44 = uVar7 + 1;
                                if (uVar31 + uVar44 < uVar20 || uVar31 + uVar44 == uVar20) {
                                    if (uVar7 + 1 == 0) {
                                        piVar21 = *param_3;
                                        piVar21[0xcc] = 0;
                                    }
                                    else {
                                        uVar20 = 0;
                                        do {
                                            uVar58 = 8 - (uVar31 & 7);
                                            uVar55 = uVar44;
                                            if (uVar58 <= uVar44) {
                                                uVar55 = uVar58;
                                            }
                                            uVar7 = uVar55;
                                            uVar20 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x3f) &
                                                     ~(-1 << (uVar7 & 0x1f)) | uVar20 << (uVar7 & 0x1f);
                                            uVar31 = uVar55 + uVar31;
                                            *puVar1 = uVar31;
                                            uVar44 = uVar44 - uVar55;
                                        } while (uVar44 != 0);
                                        piVar21 = *param_3;
                                        piVar21[0xcc] = uVar20;
                                        if (uVar20 != 0) {
                                            tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                            uVar7 = tmp_ldWn;
                                            if (((uVar7 & 1) == 0) &&
                                               (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                                                uVar61 = operator new(unsigned long)(0x108);
                                                geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                                          (uVar61, 0x61 + 0x193b8a000, 
                                                           0xc36000000008 | 0x99af000000000000, 0, 0);
                                                *geo::codec::Allocator::instance()::alloc = uVar61;
                                                __cxa_guard_release(0x290 + 0x1d6cc0000);
                                            }
                                            iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                                               (*geo::codec::Allocator::instance()::alloc, uVar20 << 3, 
                                                                8);
                                            piVar21 = *param_3;
                                            piVar21[0xca] = iVar13;
                                            if (iVar13 == 0) {
                                                pcVar32 = 0x12b4;
                                                goto code_r0x000193900470;
                                            }
                                        }
                                    }
                                    uStack_228 = piVar21[0x6b];
                                    iVar13 = piVar21[0x6c];
                                    piVar21 = *param_3;
                                    piStack_218 = piVar21[0x84];
                                    if (uVar9 == 0) {
code_r0x0001939055f8:
                                        if (iVar6 == 0) {
                                            uStack_230 = uStack_230._4_4_ << 0x20;
                                        }
                                        else {
                                            uStack_230 = uStack_230._4_4_ << 0x20;
                                            piStack_240 = iVar13 - uStack_228;
                                            ppiStack_238 = NULL;
                                            uVar31 = *puVar1;
                                            iVar13 = *piStack_1c8;
                                            ppiStack_250 = ppiVar62;
                                            do {
                                                uVar20 = iVar13 * 8;
                                                if (uVar20 <= uVar31 + 2 && uVar31 + 2 != uVar20) {
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x12c3;
                                                    goto code_r0x0001938ff7b0;
                                                }
                                                uVar9 = 0;
                                                piVar21 = *param_3;
                                                iVar14 = piVar21[0xb0];
                                                iVar15 = *piStack_1d0;
                                                uVar44 = 2;
                                                do {
                                                    uVar58 = 8 - (uVar31 & 7);
                                                    uVar55 = uVar44;
                                                    if (uVar58 <= uVar44) {
                                                        uVar55 = uVar58;
                                                    }
                                                    uVar7 = uVar55;
                                                    uVar9 = *(iVar15 + (uVar31 >> 3)) >>
                                                            ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                                            (-1 << (uVar7 & 0x1f) ^ 0xffffffff) |
                                                            uVar9 << (uVar7 & 0x1f);
                                                    uVar31 = uVar55 + uVar31;
                                                    *puVar1 = uVar31;
                                                    uVar44 = uVar44 - uVar55;
                                                } while (uVar44 != 0);
                                                ppiStack_220 = iVar14 + ppiStack_238 * 0x178;
                                                *(ppiStack_220 + 0x131) = uVar9;
                                                uVar44 = uVar31 + 1;
                                                if (uVar20 <= uVar44 && uVar44 != uVar20) {
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x12c9;
                                                    goto code_r0x0001938ff7b0;
                                                }
                                                uVar2 = *(iVar15 + (uVar31 >> 3));
                                                *puVar1 = uVar44;
                                                iVar8 = 8;
                                                iVar6 = -1;
                                                if ((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) == 0) {
                                                    ppiStack_220[0x27] = 0xff;
                                                }
                                                else {
                                                    ppiStack_220[0x27] = piStack_218;
                                                    if (uVar20 <= uVar44 + uStack_1e8 && uVar44 + uStack_1e8 != uVar20)
                                                    {
                                                        pcVar32 = 0x12ce;
                                                        goto code_r0x000193900470;
                                                    }
                                                    if (uStack_1e8 == 0) {
                                                        uVar9 = 0;
                                                    }
                                                    else {
                                                        uVar9 = 0;
                                                        ppcVar16 = uStack_1e8;
                                                        do {
                                                            ppcVar48 = 8 - (uVar44 & 7);
                                                            ppcVar63 = ppcVar16;
                                                            if (ppcVar48 <= ppcVar16) {
                                                                ppcVar63 = ppcVar48;
                                                            }
                                                            uVar7 = ppcVar63;
                                                            uVar9 = *(iVar15 + (uVar44 >> 3)) >>
                                                                    ((8 - (uVar44 & 7)) - uVar7 & 0x1f) &
                                                                    (-1 << (uVar7 & 0x1f) ^ 0xffffffff) |
                                                                    uVar9 << (uVar7 & 0x1f);
                                                            uVar44 = ppcVar63 + uVar44;
                                                            *puVar1 = uVar44;
                                                            ppcVar16 = ppcVar16 - ppcVar63;
                                                        } while (ppcVar16 != NULL);
                                                    }
                                                    piVar65 = uVar9;
                                                    if (piStack_240 < piVar65 || piStack_240 == piVar65) {
                                                        pcVar32 = 0x12cf;
                                                        goto code_r0x000193900470;
                                                    }
                                                    if (uVar20 <= uVar44 + uStack_1e8 && uVar44 + uStack_1e8 != uVar20)
                                                    {
                                                        pcVar32 = 0x12d2;
                                                        goto code_r0x000193900470;
                                                    }
                                                    if (uStack_1e8 == 0) {
                                                        uVar9 = 0;
                                                    }
                                                    else {
                                                        uVar9 = 0;
                                                        ppcVar16 = uStack_1e8;
                                                        do {
                                                            ppcVar48 = 8 - (uVar44 & 7);
                                                            ppcVar63 = ppcVar16;
                                                            if (ppcVar48 <= ppcVar16) {
                                                                ppcVar63 = ppcVar48;
                                                            }
                                                            uVar7 = ppcVar63;
                                                            uVar9 = *(iVar15 + (uVar44 >> 3)) >>
                                                                    ((iVar8 - (uVar44 & 7)) - uVar7 & 0x1f) &
                                                                    (iVar6 << (uVar7 & 0x1f) ^ 0xffffffff) |
                                                                    uVar9 << (uVar7 & 0x1f);
                                                            uVar44 = ppcVar63 + uVar44;
                                                            *puVar1 = uVar44;
                                                            ppcVar16 = ppcVar16 - ppcVar63;
                                                        } while (ppcVar16 != NULL);
                                                    }
                                                    piStack_248 = uVar9;
                                                    if (piStack_240 < piStack_248 || piStack_240 == piStack_248) {
                                                        pcVar32 = 0x12d3;
                                                        goto code_r0x000193900470;
                                                    }
                                                    if (uVar20 <= uVar44 + uStack_1e8 && uVar44 + uStack_1e8 != uVar20)
                                                    {
                                                        pcVar32 = 0x12d6;
                                                        goto code_r0x000193900470;
                                                    }
                                                    if (uStack_1e8 == 0) {
                                                        uVar9 = 0;
                                                    }
                                                    else {
                                                        uVar9 = 0;
                                                        ppcVar16 = uStack_1e8;
                                                        do {
                                                            ppcVar48 = 8 - (uVar44 & 7);
                                                            ppcVar63 = ppcVar16;
                                                            if (ppcVar48 <= ppcVar16) {
                                                                ppcVar63 = ppcVar48;
                                                            }
                                                            uVar7 = ppcVar63;
                                                            uVar9 = *(iVar15 + (uVar44 >> 3)) >>
                                                                    ((iVar8 - (uVar44 & 7)) - uVar7 & 0x1f) &
                                                                    (iVar6 << (uVar7 & 0x1f) ^ 0xffffffff) |
                                                                    uVar9 << (uVar7 & 0x1f);
                                                            uVar44 = ppcVar63 + uVar44;
                                                            *puVar1 = uVar44;
                                                            ppcVar16 = ppcVar16 - ppcVar63;
                                                        } while (ppcVar16 != NULL);
                                                    }
                                                    piVar51 = uVar9;
                                                    if (piStack_240 < piVar51 || piStack_240 == piVar51) {
                                                        pcVar32 = 0x12d7;
                                                        goto code_r0x000193900470;
                                                    }
                                                    iVar13 = piVar21[0x83];
                                                    iVar14 = piStack_218 * 0x18;
                                                    *(iVar13 + iVar14) = uStack_228 + piVar65;
                                                    *(iVar13 + iVar14 + 2) = 0;
                                                    uVar61 = 
                                                            geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                                      (piVar65, piVar21[0x6f], piVar21[0x70]);
                                                    piVar21 = *param_3;
                                                    iVar13 = piVar21[0x83] + iVar14;
                                                    *(iVar13 + 8) = uVar61;
                                                    *(iVar13 + 0x18) = uStack_228 + piStack_248;
                                                    *(iVar13 + 0x28) = 0;
                                                    uVar61 = 
                                                            geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                                      (piStack_248, piVar21[0x6f], piVar21[0x70]);
                                                    piVar21 = *param_3;
                                                    iVar13 = piVar21[0x83] + iVar14;
                                                    *(iVar13 + 0x20) = uVar61;
                                                    *(iVar13 + 0x30) = uStack_228 + piVar51;
                                                    *(iVar13 + 0x40) = 0;
                                                    uVar61 = 
                                                            geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                                      (piVar51, piVar21[0x6f], piVar21[0x70]);
                                                    *((*param_3)[0x83] + iVar14 + 0x38) = uVar61;
                                                    uVar44 = *puVar1;
                                                    iVar13 = *piStack_1c8;
                                                    uVar20 = iVar13 << 3;
                                                }
                                                if (uVar20 <= uVar44 + ppiStack_208 && uVar44 + ppiStack_208 != uVar20)
                                                {
                                                    pcVar32 = 0x12ee;
                                                    goto code_r0x000193900470;
                                                }
                                                uVar9 = ppiStack_208;
                                                if (uVar9 != 0) {
                                                    uVar9 = 0;
                                                    iVar14 = *piStack_1d0;
                                                    ppiVar62 = ppiStack_208;
                                                    do {
                                                        ppiVar43 = 8 - (uVar44 & 7);
                                                        ppiVar39 = ppiVar62;
                                                        if (ppiVar43 <= ppiVar62) {
                                                            ppiVar39 = ppiVar43;
                                                        }
                                                        uVar7 = ppiVar39;
                                                        uVar9 = *(iVar14 + (uVar44 >> 3)) >>
                                                                ((iVar8 - (uVar44 & 7)) - uVar7 & 0x1f) &
                                                                (iVar6 << (uVar7 & 0x1f) ^ 0xffffffff) |
                                                                uVar9 << (uVar7 & 0x1f);
                                                        uVar44 = ppiVar39 + uVar44;
                                                        *puVar1 = uVar44;
                                                        ppiVar62 = ppiVar62 - ppiVar39;
                                                    } while (ppiVar62 != NULL);
                                                }
                                                *(ppiStack_220 + 0x144) = uStack_230;
                                                *(ppiStack_220 + 0x132) = uVar9;
                                                uVar7 = uVar9 + uStack_230;
                                                if ((*param_3)[0xcc] < uVar7) {
                                                    pcVar32 = 0x12f3;
                                                    goto code_r0x000193900470;
                                                }
                                                if (uVar9 != 0) {
                                                    uVar10 = 0;
                                                    puVar52 = (*param_3)[0xca] + uStack_230 * 8;
                                                    do {
                                                        if (uVar20 <= uVar44 + uStack_1d8 &&
                                                            uVar44 + uStack_1d8 != uVar20) {
                                                            pcVar32 = 0x12f7;
                                                            goto code_r0x000193900470;
                                                        }
                                                        if (uStack_1d8 == 0) {
                                                            uVar5 = 0;
                                                        }
                                                        else {
                                                            uVar5 = 0;
                                                            uVar31 = uStack_1d8;
                                                            iVar14 = *piStack_1d0;
                                                            do {
                                                                uVar58 = 8 - (uVar44 & 7);
                                                                uVar55 = uVar31;
                                                                if (uVar58 <= uVar31) {
                                                                    uVar55 = uVar58;
                                                                }
                                                                uVar23 = uVar55;
                                                                uVar5 = *(iVar14 + (uVar44 >> 3)) >>
                                                                        ((iVar8 - (uVar44 & 7)) - uVar23 & 0x1f) &
                                                                        (iVar6 << (uVar23 & 0x1f) ^ 0xffffffffU) |
                                                                        uVar5 << (uVar23 & 0x1f);
                                                                uVar44 = uVar55 + uVar44;
                                                                *puVar1 = uVar44;
                                                                uVar31 = uVar31 - uVar55;
                                                            } while (uVar31 != 0);
                                                        }
                                                        *puVar52 = uVar5;
                                                        if (uVar20 <= uVar44 + uStack_1e0 &&
                                                            uVar44 + uStack_1e0 != uVar20) {
                                                            pcVar32 = 0x12f8;
                                                            goto code_r0x000193900470;
                                                        }
                                                        if (uStack_1e0 == 0) {
                                                            uVar5 = 0;
                                                        }
                                                        else {
                                                            uVar5 = 0;
                                                            iVar14 = *piStack_1d0;
                                                            uVar31 = uStack_1e0;
                                                            do {
                                                                uVar58 = 8 - (uVar44 & 7);
                                                                uVar55 = uVar31;
                                                                if (uVar58 <= uVar31) {
                                                                    uVar55 = uVar58;
                                                                }
                                                                uVar23 = uVar55;
                                                                uVar5 = *(iVar14 + (uVar44 >> 3)) >>
                                                                        ((iVar8 - (uVar44 & 7)) - uVar23 & 0x1f) &
                                                                        (iVar6 << (uVar23 & 0x1f) ^ 0xffffffffU) |
                                                                        uVar5 << (uVar23 & 0x1f);
                                                                uVar44 = uVar55 + uVar44;
                                                                *puVar1 = uVar44;
                                                                uVar31 = uVar31 - uVar55;
                                                            } while (uVar31 != 0);
                                                        }
                                                        puVar52[1] = uVar5;
                                                        uVar10 = uVar10 + 1;
                                                        puVar52 = puVar52 + 2;
                                                    } while (uVar10 != uVar9);
                                                    uStack_230 = CONCAT44(uStack_230._4_4_, uVar7);
                                                }
                                                uVar31 = uVar44 + 1;
                                                if (uVar20 <= uVar31 && uVar31 != uVar20) {
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x12fc;
                                                    goto code_r0x0001938ff7b0;
                                                }
                                                iVar14 = *piStack_1d0;
                                                uVar2 = *(iVar14 + (uVar44 >> 3));
                                                *puVar1 = uVar31;
                                                if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) == 0) {
                                                    *(ppiStack_220 + 0x29) = iVar6;
                                                    uVar9 = 0xff;
                                                }
                                                else {
                                                    if (uVar20 <= uVar31 + uStack_210 && uVar31 + uStack_210 != uVar20)
                                                    {
                                                        uVar61 = **reloc.__stderrp;
                                                        pcVar32 = 0x12ff;
                                                        goto code_r0x0001938ff7b0;
                                                    }
                                                    uVar7 = uStack_210;
                                                    if (uVar7 != 0) {
                                                        uVar7 = 0;
                                                        puVar33 = uStack_210;
                                                        do {
                                                            puVar42 = 8 - (uVar31 & 7);
                                                            puVar41 = puVar33;
                                                            if (puVar42 <= puVar33) {
                                                                puVar41 = puVar42;
                                                            }
                                                            uVar9 = puVar41;
                                                            uVar7 = *(iVar14 + (uVar31 >> 3)) >>
                                                                    ((iVar8 - (uVar31 & 7)) - uVar9 & 0x1f) &
                                                                    (iVar6 << (uVar9 & 0x1f) ^ 0xffffffff) |
                                                                    uVar7 << (uVar9 & 0x1f);
                                                            uVar31 = puVar41 + uVar31;
                                                            *puVar1 = uVar31;
                                                            puVar33 = puVar33 - puVar41;
                                                        } while (puVar33 != NULL);
                                                    }
                                                    if (uVar20 <= uVar31 + ppiStack_208 &&
                                                        uVar31 + ppiStack_208 != uVar20) {
                                                        uVar61 = **reloc.__stderrp;
                                                        pcVar32 = 0x1302;
                                                        goto code_r0x0001938ff7b0;
                                                    }
                                                    uVar9 = ppiStack_208;
                                                    if (uVar9 != 0) {
                                                        uVar9 = 0;
                                                        ppiVar62 = ppiStack_208;
                                                        do {
                                                            ppiVar43 = 8 - (uVar31 & 7);
                                                            ppiVar39 = ppiVar62;
                                                            if (ppiVar43 <= ppiVar62) {
                                                                ppiVar39 = ppiVar43;
                                                            }
                                                            uVar10 = ppiVar39;
                                                            uVar9 = *(iVar14 + (uVar31 >> 3)) >>
                                                                    ((iVar8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                                                                    (iVar6 << (uVar10 & 0x1f) ^ 0xffffffff) |
                                                                    uVar9 << (uVar10 & 0x1f);
                                                            uVar31 = ppiVar39 + uVar31;
                                                            *puVar1 = uVar31;
                                                            ppiVar62 = ppiVar62 - ppiVar39;
                                                        } while (ppiVar62 != NULL);
                                                    }
                                                    *(ppiStack_220 + 0x29) = uVar7;
                                                }
                                                piStack_218 = piStack_218 + 3;
                                                *(ppiStack_220 + 0x133) = uVar9;
                                                ppiStack_238 = ppiStack_238 + 1;
                                            } while (ppiStack_238 != ppiStack_250);
                                        }
                                        if ((*param_3)[0xcc] == uStack_230) {
                                            uVar31 = *puVar1;
                                            uVar20 = *piStack_1c8 << 3;
                                            goto code_r0x000193905c28;
                                        }
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x130c;
                                    }
                                    else {
                                        piVar21[0x84] = piStack_218 + uVar9;
                                        iVar14 = piVar21[0x83];
                                        tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                        uVar7 = tmp_ldWn;
                                        if (((uVar7 & 1) == 0) &&
                                           (iVar8 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar8 != 0)) {
                                            ppiStack_220 = operator new(unsigned long)(0x108);
                                            geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                                      (ppiStack_220, 0x61 + 0x193b8a000, 
                                                       0xc36000000008 | 0x99af000000000000, 0, 0);
                                            *geo::codec::Allocator::instance()::alloc = ppiStack_220;
                                            __cxa_guard_release(0x290 + 0x1d6cc0000);
                                        }
                                        piVar21 = *geo::codec::Allocator::instance()::alloc;
                                        piVar65 = *param_3;
                                        if (iVar14 == 0) {
                                            iVar14 = (**(*piVar21 + 0x18))(piVar21, piVar65[0x84], 0x18);
                                            (*param_3)[0x83] = iVar14;
code_r0x0001939055f4:
                                            if (iVar14 != 0) goto code_r0x0001939055f8;
                                        }
                                        else {
                                            iVar14 = (**(*piVar21 + 0x20))(piVar21, piVar65[0x83], piVar65[0x84] * 0x18)
                                            ;
                                            if (iVar14 != 0) {
                                                (*param_3)[0x83] = iVar14;
                                                bzero(iVar14 + piStack_218 * 0x18, uVar9 * 0x18);
                                                iVar14 = (*param_3)[0x83];
                                                goto code_r0x0001939055f4;
                                            }
                                            tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                            uVar9 = tmp_ldWn;
                                            if (((uVar9 & 1) == 0) &&
                                               (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
                                                uVar61 = operator new(unsigned long)(0x108);
                                                geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                                          (uVar61, 0x61 + 0x193b8a000, 
                                                           0xc36000000008 | 0x99af000000000000, 0, 0);
                                                *geo::codec::Allocator::instance()::alloc = uVar61;
                                                __cxa_guard_release(0x290 + 0x1d6cc0000);
                                            }
                                            (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                                                      (*geo::codec::Allocator::instance()::alloc, (*param_3)[0x83], 0);
                                            (*param_3)[0x83] = 0;
                                        }
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x12bb;
                                    }
                                    goto code_r0x0001938ff7b0;
                                }
                            }
                            pcVar32 = 0x12af;
                            goto code_r0x000193900470;
                        }
                    }
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x12ac;
                }
                else {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x12a9;
                }
            }
            else {
                uVar61 = **reloc.__stderrp;
                pcVar32 = 0x12a6;
            }
        }
        else {
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x12a3;
        }
        goto code_r0x0001938ff7b0;
    }
code_r0x000193905c28:
    uVar44 = uVar31 + 1;
    if (uVar20 <= uVar44 && uVar44 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x1313;
        goto code_r0x0001938ff7b0;
    }
    iVar13 = *piStack_1d0;
    uVar2 = *(iVar13 + (uVar31 >> 3));
    *puVar1 = uVar44;
    if ((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) != 0) {
        if (uVar31 + 6 < uVar20 || uVar31 + 6 == uVar20) {
            uVar9 = 0;
            uVar31 = 5;
            do {
                uVar58 = 8 - (uVar44 & 7);
                uVar55 = uVar31;
                if (uVar58 <= uVar31) {
                    uVar55 = uVar58;
                }
                uVar7 = uVar55;
                uVar9 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar7 & 0x1f) &
                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                uVar44 = uVar55 + uVar44;
                *puVar1 = uVar44;
                uVar31 = uVar31 - uVar55;
            } while (uVar31 != 0);
            uVar31 = uVar9 + 1;
            if (uVar44 + uVar31 < uVar20 || uVar44 + uVar31 == uVar20) {
                uVar20 = 0;
                if (uVar9 + 1 != 0) {
                    do {
                        uVar58 = 8 - (uVar44 & 7);
                        uVar55 = uVar31;
                        if (uVar58 <= uVar31) {
                            uVar55 = uVar58;
                        }
                        uVar9 = uVar55;
                        uVar20 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar9 & 0x3f) &
                                 ~(-1 << (uVar9 & 0x1f)) | uVar20 << (uVar9 & 0x1f);
                        uVar44 = uVar55 + uVar44;
                        *puVar1 = uVar44;
                        uVar31 = uVar31 - uVar55;
                    } while (uVar31 != 0);
                    if (uVar20 != 0) {
                        tmp_ldWn = *(0x290 + 0x1d6cc0000);
                        uVar9 = tmp_ldWn;
                        if (((uVar9 & 1) == 0) && (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
                            ppcVar16 = operator new(unsigned long)(0x108);
                            ppcVar16[1] = 0x61 + 0x193b8a000;
                            ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                            ppcVar16[3] = 0x61 + 0x193b8a000;
                            pcVar32 = *0x193af97f0;
                            ppcVar16[5] = *0x193af97f8;
                            ppcVar16[4] = pcVar32;
                            *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                        0xfa8 + 0x10;
                            ppcVar16[8] = NULL;
                            ppcVar16[7] = NULL;
                            ppcVar16[10] = NULL;
                            ppcVar16[9] = NULL;
                            ppcVar16[0xc] = NULL;
                            ppcVar16[0xb] = NULL;
                            ppcVar16[0xe] = NULL;
                            ppcVar16[0xd] = NULL;
                            ppcVar16[0x10] = NULL;
                            ppcVar16[0xf] = NULL;
                            ppcVar16[0x12] = NULL;
                            ppcVar16[0x11] = NULL;
                            ppcVar16[0x14] = NULL;
                            ppcVar16[0x13] = NULL;
                            ppcVar16[0x16] = NULL;
                            ppcVar16[0x15] = NULL;
                            ppcVar16[0x18] = NULL;
                            ppcVar16[0x17] = NULL;
                            ppcVar16[0x1a] = NULL;
                            ppcVar16[0x19] = NULL;
                            ppcVar16[0x1c] = NULL;
                            ppcVar16[0x1b] = NULL;
                            ppcVar16[0x1e] = NULL;
                            ppcVar16[0x1d] = NULL;
                            ppcVar16[0x1f] = NULL;
                            uVar61 = pthread_rwlock_init(ppcVar16 + 7, 0);
                            if (uVar61 != 0) {
                                geo::read_write_lock::logFailure(int, char const*)(uVar61, 0x85 + 0x193b8a000);
                            }
                            pcVar32 = malloc_create_zone(0, 0);
                            ppcVar16[6] = pcVar32;
                            malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
                            pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                            ppcVar16[0x20] = pcVar32;
                            *geo::codec::Allocator::instance()::alloc = ppcVar16;
                            __cxa_guard_release(0x290 + 0x1d6cc0000);
                        }
                        iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                           (*geo::codec::Allocator::instance()::alloc, uVar20 << 3, 8);
                        piVar21 = *param_3;
                        piVar21[0xcd] = iVar13;
                        if (iVar13 == 0) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x131b;
                            goto code_r0x0001938ff7b0;
                        }
                        piVar21[0xce] = uVar20;
                    }
                }
                piVar21 = *param_3;
                iVar14 = piVar21[0xa8];
                iVar13 = piVar21[0xa9] - iVar14;
                if (iVar13 == 0) {
                    iVar6 = 0;
                }
                else {
                    uVar31 = 0;
                    uVar55 = 0;
                    iVar13 = SUB168(SEXT816(iVar13) * SEXT816(0x590b2165 | 0xb21642c800000000), 8) + iVar13;
                    uVar44 = (iVar13 >> 7) - (iVar13 >> 0x3f);
                    if (uVar44 < 2) {
                        uVar44 = 1;
                    }
                    do {
                        uVar28 = *puVar1;
                        uVar58 = uVar28 + 1;
                        uVar27 = *piStack_1c8 * 8;
                        if (uVar27 <= uVar58 && uVar58 != uVar27) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x1322;
                            goto code_r0x0001938ff7b0;
                        }
                        iVar13 = *piStack_1d0;
                        uVar2 = *(iVar13 + (uVar28 >> 3));
                        *puVar1 = uVar58;
                        uVar26 = uVar55;
                        if ((uVar2 >> (7 & (uVar28 ^ 0xffffffff)) & 1) != 0) {
                            if (uVar27 <= uVar58 + *(&stack0x00000000 + -0x1f0) &&
                                uVar58 + *(&stack0x00000000 + -0x1f0) != uVar27) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1325;
                                goto code_r0x0001938ff7b0;
                            }
                            if (*(&stack0x00000000 + -0x1f0) == 0) {
                                iVar13 = iVar14 + uVar31 * 0xb8;
                                *(iVar13 + 0x58) = uVar55;
                                *(iVar13 + 0x60) = 0;
                            }
                            else {
                                uVar28 = 0;
                                uVar27 = *(&stack0x00000000 + -0x1f0);
                                do {
                                    uVar47 = 8 - (uVar58 & 7);
                                    uVar66 = uVar27;
                                    if (uVar47 <= uVar27) {
                                        uVar66 = uVar47;
                                    }
                                    uVar9 = uVar66;
                                    uVar28 = *(iVar13 + (uVar58 >> 3)) >> ((8 - (uVar58 & 7)) - uVar9 & 0x3f) &
                                             ~(-1 << (uVar9 & 0x1f)) | uVar28 << (uVar9 & 0x1f);
                                    uVar58 = uVar66 + uVar58;
                                    *puVar1 = uVar58;
                                    uVar27 = uVar27 - uVar66;
                                } while (uVar27 != 0);
                                iVar15 = iVar14 + uVar31 * 0xb8;
                                *(iVar15 + 0x58) = uVar55;
                                *(iVar15 + 0x60) = uVar28;
                                if (uVar28 != 0) {
                                    uVar9 = uVar28 + uVar55;
                                    uVar26 = uVar9;
                                    do {
                                        uVar58 = *puVar1;
                                        if (*piStack_1c8 * 8 <= uVar58 + *(&stack0x00000000 + -0x1f0) &&
                                            uVar58 + *(&stack0x00000000 + -0x1f0) != *piStack_1c8 * 8) {
                                            uVar61 = **reloc.__stderrp;
                                            pcVar32 = 0x132c;
                                            goto code_r0x0001938ff7b0;
                                        }
                                        uVar28 = 0;
                                        uVar27 = *(&stack0x00000000 + -0x1f0);
                                        do {
                                            uVar47 = 8 - (uVar58 & 7);
                                            uVar66 = uVar27;
                                            if (uVar47 <= uVar27) {
                                                uVar66 = uVar47;
                                            }
                                            uVar7 = uVar66;
                                            uVar28 = *(iVar13 + (uVar58 >> 3)) >> ((8 - (uVar58 & 7)) - uVar7 & 0x3f) &
                                                     ~(-1 << (uVar7 & 0x1f)) | uVar28 << (uVar7 & 0x1f);
                                            uVar58 = uVar66 + uVar58;
                                            *puVar1 = uVar58;
                                            uVar27 = uVar27 - uVar66;
                                        } while (uVar27 != 0);
                                        *(piVar21[0xcd] + uVar55 * 8) = uVar28;
                                        uVar7 = uVar55 + 1;
                                        uVar55 = uVar7;
                                    } while (uVar7 != uVar9);
                                }
                            }
                        }
                        iVar6 = uVar26;
                        uVar31 = uVar31 + 1;
                        uVar55 = uVar26;
                    } while (uVar31 != uVar44);
                }
                if (iVar6 != uVar20) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x1331;
                    goto code_r0x0001938ff7b0;
                }
                goto code_r0x000193905f74;
            }
        }
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x1317;
        goto code_r0x0001938ff7b0;
    }
code_r0x000193905f74:
    iVar14 = (*param_3)[0xb1];
    iVar13 = (*param_3)[0xb0];
    *(*0x8 + -200) = typeinfo for geo::Allocator + 0x300 + 0x10;
    *(*0x8 + -0xc0) = param_3;
    *(*0x8 + -0xb0) = *0x8 + -200;
    uVar31 = geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                       (piStack_1d0, (iVar14 - iVar13 >> 3) * (0x677d46cf | 0x51b3bea300000000), *0x8 + -200);
    piVar21 = *(*0x8 + -0xb0);
    if (piVar21 == *0x8 + -200) {
        (**(*(*0x8 + -200) + 0x20))(*0x8 + -200);
    }
    else if (piVar21 != NULL) {
        (**(*piVar21 + 0x28))();
    }
    if ((uVar31 & 1) == 0) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x1339;
        goto code_r0x0001938ff7b0;
    }
    uVar44 = *puVar1;
    uVar31 = uVar44 + 1;
    uVar20 = *piStack_1c8 * 8;
    if (uVar20 <= uVar31 && uVar31 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x133f;
        goto code_r0x0001938ff7b0;
    }
    uVar2 = *(*piStack_1d0 + (uVar44 >> 3));
    *puVar1 = uVar31;
    if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) != 0) {
        piVar21 = *param_3;
        if (piVar21[0xae] != 0) {
            tmp_ldWn = *(0x290 + 0x1d6cc0000);
            uVar9 = tmp_ldWn;
            if (((uVar9 & 1) == 0) && (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
                uVar61 = operator new(unsigned long)(0x108);
                geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                          (uVar61, 0x61 + 0x193b8a000, 0xc36000000008 | 0x99af000000000000, 0, 0);
                *geo::codec::Allocator::instance()::alloc = uVar61;
                __cxa_guard_release(0x290 + 0x1d6cc0000);
            }
            iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x18))
                               (*geo::codec::Allocator::instance()::alloc, 1, (*param_3)[0xae]);
            piVar21 = *param_3;
            piVar21[0xcf] = iVar13;
            if (iVar13 == 0) {
                uVar61 = **reloc.__stderrp;
                pcVar32 = 0x1343;
                goto code_r0x0001938ff7b0;
            }
        }
        if (piVar21[0xa9] == piVar21[0xa8]) {
            uVar31 = *puVar1;
            uVar20 = *piStack_1c8 << 3;
        }
        else {
            uVar44 = 0;
            uVar20 = *piStack_1c8 * 8;
            piVar21 = *param_3;
            uVar31 = *puVar1;
            do {
                uVar55 = uVar31 + 1;
                if (uVar20 <= uVar55 && uVar55 != uVar20) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x1347;
                    goto code_r0x0001938ff7b0;
                }
                iVar14 = *piStack_1d0;
                uVar2 = *(iVar14 + (uVar31 >> 3));
                *puVar1 = uVar55;
                iVar13 = piVar21[0xa8];
                if ((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) == 0) {
code_r0x000193906210:
                    uVar31 = uVar55;
                }
                else {
                    iVar15 = iVar13 + uVar44 * 0xb8;
                    iVar22 = *(iVar15 + 0x20);
                    if (iVar22 == 0) goto code_r0x000193906210;
                    iVar59 = 0;
                    do {
                        uVar58 = uVar55 + 1;
                        if (uVar20 <= uVar58 && uVar58 != uVar20) {
                            pcVar32 = 0x134c;
                            goto code_r0x000193900470;
                        }
                        uVar2 = *(iVar14 + (uVar55 >> 3));
                        *puVar1 = uVar58;
                        uVar31 = uVar55 + 2;
                        if (uVar20 <= uVar31 && uVar31 != uVar20) {
                            pcVar32 = 0x134d;
                            goto code_r0x000193900470;
                        }
                        uVar9 = 1 << (7 & (uVar55 ^ 0xffffffff)) & uVar2;
                        uVar7 = 1 << (7 & (uVar55 + 1 ^ 0xffffffff)) & *(iVar14 + (uVar58 >> 3));
                        *puVar1 = uVar31;
                        if ((uVar9 | uVar7) == 0) {
                            pcVar32 = 0x134e;
                            goto code_r0x000193900470;
                        }
                        uVar53 = 1;
                        if (uVar9 == 0) {
                            uVar53 = 2;
                        }
                        if (uVar7 != 0 && uVar9 != 0) {
                            uVar53 = 0;
                        }
                        *(piVar21[0xcf] + *(iVar15 + 0x18) + iVar59) = uVar53;
                        iVar59 = iVar59 + 1;
                        uVar55 = uVar31;
                    } while (iVar22 != iVar59);
                }
                uVar44 = uVar44 + 1;
            } while (uVar44 < (piVar21[0xa9] - iVar13 >> 3) * (0xe9bd37a7 | 0xd37a6f4d00000000));
        }
    }
    uVar44 = uVar31 + 1;
    if (uVar20 <= uVar44 && uVar44 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x136e;
        goto code_r0x0001938ff7b0;
    }
    uVar2 = *(*piStack_1d0 + (uVar31 >> 3));
    *puVar1 = uVar44;
    if ((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) != 0) {
        tmp_ldWn = *(0x290 + 0x1d6cc0000);
        uVar9 = tmp_ldWn;
        if (((uVar9 & 1) == 0) && (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
            uVar61 = operator new(unsigned long)(0x108);
            geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                      (uVar61, 0x61 + 0x193b8a000, 0xc36000000008 | 0x99af000000000000, 0, 0);
            *geo::codec::Allocator::instance()::alloc = uVar61;
            __cxa_guard_release(0x290 + 0x1d6cc0000);
        }
        uVar31 = uStack_1f8;
        iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x18))
                           (*geo::codec::Allocator::instance()::alloc, uVar31, 8);
        piVar21 = *param_3;
        piVar21[0xd4] = iVar13;
        piVar21[0xd5] = uVar31;
        if (iVar13 == 0) {
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x1372;
        }
        else {
            if (uStack_1f8 != 0) {
                if (uStack_1f8 < 4) {
                    uVar44 = 0;
                }
                else {
                    uVar44 = uVar31 & 0xfffffffc;
                    puVar35 = iVar13 + 0x14;
                    uVar20 = uVar44;
                    do {
                        puVar35[-4] = 0x3f800000;
                        puVar35[-2] = 0x3f800000;
                        *puVar35 = 0x3f800000;
                        puVar35[2] = 0x3f800000;
                        puVar35 = puVar35 + 8;
                        uVar20 = uVar20 + -4;
                    } while (uVar20 != 0);
                    if (uVar44 == uVar31) goto code_r0x0001939063e0;
                }
                iVar14 = uVar31 - uVar44;
                puVar35 = iVar13 + uVar44 * 8 + 4;
                do {
                    *puVar35 = 0x3f800000;
                    iVar14 = iVar14 + -1;
                    puVar35 = puVar35 + 2;
                } while (iVar14 != 0);
            }
code_r0x0001939063e0:
            uVar31 = *puVar1;
            if (uVar31 + 5 < *piStack_1c8 * 8 || uVar31 + 5 == *piStack_1c8 * 8) {
                uVar9 = 0;
                iVar13 = *piStack_1d0;
                uVar20 = 5;
                do {
                    uVar55 = 8 - (uVar31 & 7);
                    uVar44 = uVar20;
                    if (uVar55 <= uVar20) {
                        uVar44 = uVar55;
                    }
                    uVar7 = uVar44;
                    uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                            (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                    uVar31 = uVar44 + uVar31;
                    *puVar1 = uVar31;
                    uVar20 = uVar20 - uVar44;
                } while (uVar20 != 0);
                uVar9 = uVar9 + 1;
                uVar31 = uVar9;
                fVar86 = __exp10f(uVar31 * (0x209a | 0x3e9a0000));
                piVar21 = *param_3;
                iVar14 = piVar21[0xa8];
                iVar13 = piVar21[0xa9] - iVar14;
                if (iVar13 != 0) {
                    uVar20 = 0;
                    iVar13 = SUB168(SEXT816(iVar13) * SEXT816(0x590b2165 | 0xb21642c800000000), 8) + iVar13;
                    uVar44 = (iVar13 >> 7) - (iVar13 >> 0x3f);
                    uVar55 = *piStack_1c8 * 8;
                    if (uVar44 < 2) {
                        uVar44 = 1;
                    }
                    uVar58 = *puVar1;
                    do {
                        uVar27 = uVar58 + 1;
                        if (uVar55 <= uVar27 && uVar27 != uVar55) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x137f;
                            goto code_r0x0001938ff7b0;
                        }
                        iVar13 = *piStack_1d0;
                        uVar2 = *(iVar13 + (uVar58 >> 3));
                        uVar7 = uVar58;
                        *puVar1 = uVar27;
                        uVar58 = uVar27;
                        if ((uVar2 >> (7 & (uVar7 ^ 0xffffffff)) & 1) != 0) {
                            iVar15 = iVar14 + uVar20 * 0xb8;
                            uVar10 = *(iVar15 + 0x10);
                            iVar6 = *(iVar15 + 0x14);
                            uVar7 = iVar6 + uVar10;
                            if (uStack_1f8 <= uVar7 && uVar7 != uStack_1f8) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x1382;
                                goto code_r0x0001938ff7b0;
                            }
                            if (iVar6 != 0) {
                                iVar8 = 0;
                                pfVar25 = piVar21[0xd4] + uVar10 * 8;
                                do {
                                    uVar27 = uVar58 + 1;
                                    if (uVar55 <= uVar27 && uVar27 != uVar55) {
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x1386;
                                        goto code_r0x0001938ff7b0;
                                    }
                                    uVar2 = *(iVar13 + (uVar58 >> 3));
                                    *puVar1 = uVar27;
                                    if ((uVar2 >> (7 & (uVar58 ^ 0xffffffff)) & 1) != 0) {
                                        if (uVar55 <= uVar27 + uVar31 && uVar27 + uVar31 != uVar55) {
                                            uVar61 = **reloc.__stderrp;
                                            pcVar32 = 0x1389;
                                            goto code_r0x0001938ff7b0;
                                        }
                                        uVar7 = 0;
                                        uVar58 = uVar31;
                                        if (uVar9 != 0) {
                                            do {
                                                uVar26 = 8 - (uVar27 & 7);
                                                uVar28 = uVar58;
                                                if (uVar26 <= uVar58) {
                                                    uVar28 = uVar26;
                                                }
                                                uVar10 = uVar28;
                                                uVar7 = *(iVar13 + (uVar27 >> 3)) >>
                                                        ((8 - (uVar27 & 7)) - uVar10 & 0x1f) &
                                                        (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                                                uVar27 = uVar28 + uVar27;
                                                *puVar1 = uVar27;
                                                uVar58 = uVar58 - uVar28;
                                                uVar58 = uVar58;
                                            } while (uVar58 != 0);
                                        }
                                        *pfVar25 = (1.0 / fVar86) * uVar7;
                                    }
                                    uVar58 = uVar27 + 1;
                                    if (uVar55 <= uVar58 && uVar58 != uVar55) {
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x138d;
                                        goto code_r0x0001938ff7b0;
                                    }
                                    uVar2 = *(iVar13 + (uVar27 >> 3));
                                    *puVar1 = uVar58;
                                    if ((uVar2 >> (7 & (uVar27 ^ 0xffffffff)) & 1) != 0) {
                                        if (uVar55 <= uVar58 + uVar31 && uVar58 + uVar31 != uVar55) {
                                            uVar61 = **reloc.__stderrp;
                                            pcVar32 = 0x1390;
                                            goto code_r0x0001938ff7b0;
                                        }
                                        uVar28 = 0;
                                        uVar27 = uVar31;
                                        if (uVar9 != 0) {
                                            do {
                                                uVar66 = 8 - (uVar58 & 7);
                                                uVar26 = uVar27;
                                                if (uVar66 <= uVar27) {
                                                    uVar26 = uVar66;
                                                }
                                                uVar7 = uVar26;
                                                uVar28 = *(iVar13 + (uVar58 >> 3)) >>
                                                         ((8 - (uVar58 & 7)) - uVar7 & 0x1f) &
                                                         (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar28 << (uVar7 & 0x1f);
                                                uVar58 = uVar26 + uVar58;
                                                *puVar1 = uVar58;
                                                uVar27 = uVar27 - uVar26;
                                                uVar27 = uVar27;
                                            } while (uVar27 != 0);
                                        }
                                        pfVar25[1] = (1.0 / fVar86) * uVar28;
                                    }
                                    iVar8 = iVar8 + 1;
                                    pfVar25 = pfVar25 + 2;
                                } while (iVar8 != iVar6);
                            }
                        }
                        uVar20 = uVar20 + 1;
                    } while (uVar20 != uVar44);
                }
                goto code_r0x000193906688;
            }
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x1378;
        }
        goto code_r0x0001938ff7b0;
    }
code_r0x000193906688:
    iVar13 = (*param_3)[0xc3];
    uVar31 = geo::codec::_decodeTransitLabelsFromStream(Bitstream*, unsigned long, GeoCodecsFeature*, unsigned long, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                       (piStack_1d0, ((*param_3)[0xc4] - iVar13 >> 3) * (0x8af8af8b | 0xaf8af8af00000000), iVar13, 0x118
                        , param_3);
    if ((uVar31 & 1) == 0) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x139b;
        goto code_r0x0001938ff7b0;
    }
    piVar21 = *param_3;
    puVar36 = piVar21[0xaf];
    if (puVar36 != NULL) {
        puVar36 = *puVar36;
    }
    uVar31 = geo::codec::_decodeLabelTextPlacementsFromStream(Bitstream*, unsigned long, GeoCodecsPointFeature*, unsigned long, unsigned long, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                       (piStack_1d0, (piVar21[0xb1] - piVar21[0xb0] >> 3) * (0x677d46cf | 0x51b3bea300000000), 
                        piVar21[0xb0], 0x178, puVar36 & 0xffffffff, param_3);
    if ((uVar31 & 1) == 0) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x13a1;
        goto code_r0x0001938ff7b0;
    }
    iVar13 = (*param_3)[0xc3];
    uVar31 = geo::codec::_decodeLabelTextPlacementsFromStream(Bitstream*, unsigned long, GeoCodecsPointFeature*, unsigned long, unsigned long, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                       (piStack_1d0, ((*param_3)[0xc4] - iVar13 >> 3) * (0x8af8af8b | 0xaf8af8af00000000), iVar13, 0x118
                        , uStack_200, param_3);
    if ((uVar31 & 1) == 0) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x13a6;
        goto code_r0x0001938ff7b0;
    }
    if (0x1e < *(pcVar11 + 0x40)) {
        iVar14 = (*param_3)[0xb8];
        iVar13 = (*param_3)[0xb7];
        *(*0x8 + -0xe8) = typeinfo for geo::Allocator + 0x380 + 0x10;
        *(*0x8 + -0xe0) = param_3;
        *(*0x8 + -0xd0) = *0x8 + -0xe8;
        geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                  (piStack_1d0, (iVar14 - iVar13 >> 3) * (0x286bca1b | 0x86bca1af00000000), *0x8 + -0xe8);
        piVar21 = *(*0x8 + -0xd0);
        if (piVar21 == *0x8 + -0xe8) {
            (**(*(*0x8 + -0xe8) + 0x20))(*0x8 + -0xe8);
        }
        else if (piVar21 != NULL) {
            (**(*piVar21 + 0x28))();
        }
        iVar14 = (*param_3)[0xb8];
        iVar13 = (*param_3)[0xb7];
        *(*0x8 + -0x108) = typeinfo for geo::Allocator + 0x400 + 0x10;
        *(*0x8 + -0x100) = param_3;
        *(*0x8 + -0xf0) = *0x8 + -0x108;
        geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                  (piStack_1d0, (iVar14 - iVar13 >> 3) * (0x286bca1b | 0x86bca1af00000000), *0x8 + -0x108);
        piVar21 = *(*0x8 + -0xf0);
        if (piVar21 == *0x8 + -0x108) {
            (**(*(*0x8 + -0x108) + 0x20))(*0x8 + -0x108);
        }
        else if (piVar21 != NULL) {
            (**(*piVar21 + 0x28))();
        }
        if (0x1f < *(pcVar11 + 0x40)) {
            iVar14 = (*param_3)[0xc4];
            iVar13 = (*param_3)[0xc3];
            *(*0x8 + -0x128) = typeinfo for geo::Allocator + 0x480 + 0x10;
            *(*0x8 + -0x120) = param_3;
            *(*0x8 + -0x110) = *0x8 + -0x128;
            geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                      (piStack_1d0, (iVar14 - iVar13 >> 3) * (0x8af8af8b | 0xaf8af8af00000000), *0x8 + -0x128);
            piVar21 = *(*0x8 + -0x110);
            if (piVar21 == *0x8 + -0x128) {
                (**(*(*0x8 + -0x128) + 0x20))(*0x8 + -0x128);
            }
            else if (piVar21 != NULL) {
                (**(*piVar21 + 0x28))();
            }
            iVar14 = (*param_3)[0xc4];
            iVar13 = (*param_3)[0xc3];
            pcStack_148 = typeinfo for geo::Allocator + 0x500 + 0x10;
            *(*0x8 + -0x130) = *0x8 + -0x148;
            ppiStack_140 = param_3;
            geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                      (piStack_1d0, (iVar14 - iVar13 >> 3) * (0x8af8af8b | 0xaf8af8af00000000), *0x8 + -0x148);
            piVar21 = *(*0x8 + -0x130);
            if (piVar21 == *0x8 + -0x148) {
                (**(pcStack_148 + 0x20))(*0x8 + -0x148);
            }
            else if (piVar21 != NULL) {
                (**(*piVar21 + 0x28))();
            }
        }
    }
    uVar44 = *puVar1;
    uVar31 = uVar44 + 1;
    uVar20 = *piStack_1c8 * 8;
    if (uVar20 <= uVar31 && uVar31 != uVar20) {
        pcVar32 = 0x13bd;
        goto code_r0x000193900470;
    }
    iVar13 = *piStack_1d0;
    uVar2 = *(iVar13 + (uVar44 >> 3));
    *puVar1 = uVar31;
    if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) == 0) {
code_r0x000193906df0:
        uVar44 = uVar31;
    }
    else {
        iVar15 = (*param_3)[0xb0];
        iVar14 = (*param_3)[0xb1] - iVar15;
        if (iVar14 == 0) goto code_r0x000193906df0;
        iVar14 = SUB168(SEXT816(iVar14) * SEXT816(0x4c415c99 | 0x572620ae00000000), 8);
        uVar55 = (iVar14 >> 7) - (iVar14 >> 0x3f);
        if (uVar55 < 2) {
            uVar55 = 1;
        }
        puVar36 = iVar15 + 0x160;
        do {
            uVar44 = uVar31 + 1;
            if (uVar20 <= uVar44 && uVar44 != uVar20) {
                pcVar32 = mach0_cmd_16;
                goto code_r0x000193900470;
            }
            uVar2 = *(iVar13 + (uVar31 >> 3));
            *puVar1 = uVar44;
            *puVar36 = uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1;
            puVar36 = puVar36 + 0x178;
            uVar31 = uVar44;
            uVar55 = uVar55 + -1;
        } while (uVar55 != 0);
    }
    uVar31 = uVar44 + 1;
    if (uVar20 <= uVar31 && uVar31 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x13c8;
        goto code_r0x0001938ff7b0;
    }
    uVar2 = *(iVar13 + (uVar44 >> 3));
    *puVar1 = uVar31;
    if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) != 0) {
        if (uVar44 + 6 < uVar20 || uVar44 + 6 == uVar20) {
            uVar9 = 0;
            uVar44 = 5;
            do {
                uVar58 = 8 - (uVar31 & 7);
                uVar55 = uVar44;
                if (uVar58 <= uVar44) {
                    uVar55 = uVar58;
                }
                uVar7 = uVar55;
                uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                uVar31 = uVar55 + uVar31;
                *puVar1 = uVar31;
                uVar44 = uVar44 - uVar55;
            } while (uVar44 != 0);
            if (uVar31 + 5 < uVar20 || uVar31 + 5 == uVar20) {
                uVar7 = 0;
                uStack_1e8 = uVar9 + 1;
                uVar44 = 5;
                do {
                    uVar58 = 8 - (uVar31 & 7);
                    uVar55 = uVar44;
                    if (uVar58 <= uVar44) {
                        uVar55 = uVar58;
                    }
                    uVar9 = uVar55;
                    uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar9 & 0x1f) &
                            (-1 << (uVar9 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar9 & 0x1f);
                    uVar31 = uVar55 + uVar31;
                    *puVar1 = uVar31;
                    uVar44 = uVar44 - uVar55;
                } while (uVar44 != 0);
                if (uVar31 + 5 < uVar20 || uVar31 + 5 == uVar20) {
                    uVar9 = 0;
                    *(&stack0x00000000 + -0x1f0) = uVar7 + 1;
                    uVar44 = 5;
                    do {
                        uVar58 = 8 - (uVar31 & 7);
                        uVar55 = uVar44;
                        if (uVar58 <= uVar44) {
                            uVar55 = uVar58;
                        }
                        uVar7 = uVar55;
                        uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                                (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                        uVar31 = uVar55 + uVar31;
                        *puVar1 = uVar31;
                        uVar44 = uVar44 - uVar55;
                    } while (uVar44 != 0);
                    uVar44 = uVar9 + 1;
                    if (uVar31 + uVar44 < uVar20 || uVar31 + uVar44 == uVar20) {
                        if (uVar9 + 1 != 0) {
                            uVar20 = 0;
                            do {
                                uVar58 = 8 - (uVar31 & 7);
                                uVar55 = uVar44;
                                if (uVar58 <= uVar44) {
                                    uVar55 = uVar58;
                                }
                                uVar9 = uVar55;
                                uVar20 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar9 & 0x3f) &
                                         ~(-1 << (uVar9 & 0x1f)) | uVar20 << (uVar9 & 0x1f);
                                uVar31 = uVar55 + uVar31;
                                *puVar1 = uVar31;
                                uVar44 = uVar44 - uVar55;
                            } while (uVar44 != 0);
                            if (uVar20 != 0) {
                                piVar21 = *param_3;
                                uStack_200 = piVar21[0x6b];
                                iVar14 = piVar21[0x6c];
                                uStack_1f8 = piVar21[0x86];
                                piVar21[0x86] = uStack_1f8 + uVar20;
                                iVar13 = piVar21[0x85];
                                tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                uVar9 = tmp_ldWn;
                                if (((uVar9 & 1) == 0) &&
                                   (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
                                    uVar61 = operator new(unsigned long)(0x108);
                                    geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                              (uVar61, 0x61 + 0x193b8a000, 0xc36000000008 | 0x99af000000000000, 0, 0);
                                    *geo::codec::Allocator::instance()::alloc = uVar61;
                                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                                }
                                piVar21 = *geo::codec::Allocator::instance()::alloc;
                                piVar65 = *param_3;
                                if (iVar13 == 0) {
                                    iVar13 = (**(*piVar21 + 0x18))(piVar21, piVar65[0x86], 0x20);
                                    (*param_3)[0x85] = iVar13;
code_r0x000193907318:
                                    if (iVar13 != 0) {
                                        piVar21 = *param_3;
                                        iVar13 = piVar21[0xc3];
                                        if (piVar21[0xc4] != iVar13) {
                                            uVar31 = 0;
                                            ppiStack_208 = iVar14 - uStack_200;
                                            do {
                                                uVar55 = *puVar1;
                                                uVar20 = uVar55 + 1;
                                                uVar44 = *piStack_1c8 * 8;
                                                if (uVar44 <= uVar20 && uVar20 != uVar44) {
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x13db;
                                                    goto code_r0x0001938ff7b0;
                                                }
                                                iVar14 = *piStack_1d0;
                                                uVar2 = *(iVar14 + (uVar55 >> 3));
                                                *puVar1 = uVar20;
                                                if ((uVar2 >> (7 & (uVar55 ^ 0xffffffff)) & 1) != 0) {
                                                    if (uVar44 <= uVar20 + uStack_1e8 && uVar20 + uStack_1e8 != uVar44)
                                                    {
                                                        pcVar32 = 0x13de;
                                                        goto code_r0x000193900470;
                                                    }
                                                    if (uStack_1e8 == 0) {
                                                        uVar9 = 0;
                                                    }
                                                    else {
                                                        uVar9 = 0;
                                                        ppcVar16 = uStack_1e8;
                                                        do {
                                                            ppcVar48 = 8 - (uVar20 & 7);
                                                            ppcVar63 = ppcVar16;
                                                            if (ppcVar48 <= ppcVar16) {
                                                                ppcVar63 = ppcVar48;
                                                            }
                                                            uVar7 = ppcVar63;
                                                            uVar9 = *(iVar14 + (uVar20 >> 3)) >>
                                                                    ((8 - (uVar20 & 7)) - uVar7 & 0x1f) &
                                                                    (-1 << (uVar7 & 0x1f) ^ 0xffffffff) |
                                                                    uVar9 << (uVar7 & 0x1f);
                                                            uVar20 = ppcVar63 + uVar20;
                                                            *puVar1 = uVar20;
                                                            ppcVar16 = ppcVar16 - ppcVar63;
                                                        } while (ppcVar16 != NULL);
                                                    }
                                                    piVar21 = *param_3;
                                                    if (piVar21[0x86] <= uStack_1f8) {
                                                        pcVar32 = 0x13df;
                                                        goto code_r0x000193900470;
                                                    }
                                                    *(iVar13 + 0x28) = uStack_1f8;
                                                    *(iVar13 + 0x30) = 1;
                                                    iVar15 = piVar21[0x85];
                                                    iVar22 = uStack_1f8 * 0x20;
                                                    *(iVar15 + iVar22 + 0x18) = uVar9;
                                                    uVar55 = uVar20 + 1;
                                                    if (uVar44 <= uVar55 && uVar55 != uVar44) {
                                                        uVar61 = **reloc.__stderrp;
                                                        pcVar32 = 0x13e6;
                                                        goto code_r0x0001938ff7b0;
                                                    }
                                                    uStack_1f8 = uStack_1f8 + 1;
                                                    uVar2 = *(iVar14 + (uVar20 >> 3));
                                                    *puVar1 = uVar55;
                                                    if ((uVar2 >> (7 & (uVar20 ^ 0xffffffff)) & 1) != 0) {
                                                        if (uVar44 <= uVar55 + *(&stack0x00000000 + -0x1f0) &&
                                                            uVar55 + *(&stack0x00000000 + -0x1f0) != uVar44) {
                                                            pcVar32 = 0x13e9;
                                                            goto code_r0x000193900470;
                                                        }
                                                        if (*(&stack0x00000000 + -0x1f0) == 0) {
                                                            uVar9 = 0;
                                                        }
                                                        else {
                                                            uVar9 = 0;
                                                            uVar20 = *(&stack0x00000000 + -0x1f0);
                                                            do {
                                                                uVar58 = 8 - (uVar55 & 7);
                                                                uVar44 = uVar20;
                                                                if (uVar58 <= uVar20) {
                                                                    uVar44 = uVar58;
                                                                }
                                                                uVar7 = uVar44;
                                                                uVar9 = *(iVar14 + (uVar55 >> 3)) >>
                                                                        ((8 - (uVar55 & 7)) - uVar7 & 0x1f) &
                                                                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) |
                                                                        uVar9 << (uVar7 & 0x1f);
                                                                uVar55 = uVar44 + uVar55;
                                                                *puVar1 = uVar55;
                                                                uVar20 = uVar20 - uVar44;
                                                            } while (uVar20 != 0);
                                                        }
                                                        ppiVar62 = uVar9;
                                                        if (ppiStack_208 < ppiVar62 || ppiStack_208 == ppiVar62) {
                                                            pcVar32 = 0x13ea;
                                                            goto code_r0x000193900470;
                                                        }
                                                        *(iVar15 + iVar22) = uStack_200 + ppiVar62;
                                                        uVar61 = 
                                                            geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                                      (ppiVar62, piVar21[0x6f], piVar21[0x70]);
                                                        *((*param_3)[0x85] + iVar22 + 8) = uVar61;
                                                    }
                                                }
                                                uVar31 = uVar31 + 1;
                                                iVar13 = iVar13 + 0x118;
                                                piVar21 = *param_3;
                                            } while (uVar31 < (piVar21[0xc4] - piVar21[0xc3] >> 3) *
                                                              (0x8af8af8b | 0xaf8af8af00000000));
                                        }
                                        if (uStack_1f8 == piVar21[0x86]) {
                                            uVar31 = *puVar1;
                                            uVar20 = *piStack_1c8 << 3;
                                            goto code_r0x000193907560;
                                        }
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x13f1;
                                        goto code_r0x0001938ff7b0;
                                    }
                                }
                                else {
                                    iVar13 = (**(*piVar21 + 0x20))(piVar21, piVar65[0x85], piVar65[0x86] << 5);
                                    if (iVar13 != 0) {
                                        (*param_3)[0x85] = iVar13;
                                        bzero(iVar13 + uStack_1f8 * 0x20, uVar20 << 5);
                                        iVar13 = (*param_3)[0x85];
                                        goto code_r0x000193907318;
                                    }
                                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                    uVar9 = tmp_ldWn;
                                    if (((uVar9 & 1) == 0) &&
                                       (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
                                        uVar61 = operator new(unsigned long)(0x108);
                                        geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                                  (uVar61, 0x61 + 0x193b8a000, 0xc36000000008 | 0x99af000000000000, 0, 0
                                                  );
                                        *geo::codec::Allocator::instance()::alloc = uVar61;
                                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                                    }
                                    (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                                              (*geo::codec::Allocator::instance()::alloc, (*param_3)[0x85], 0);
                                    (*param_3)[0x85] = 0;
                                }
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x13d7;
                                goto code_r0x0001938ff7b0;
                            }
                        }
                        pcVar32 = 0x13d2;
                        goto code_r0x000193900470;
                    }
                }
                pcVar32 = 0x13d1;
                goto code_r0x000193900470;
            }
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x13ce;
        }
        else {
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x13cb;
        }
        goto code_r0x0001938ff7b0;
    }
code_r0x000193907560:
    uVar44 = uVar31 + 1;
    if (uVar20 <= uVar44 && uVar44 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x140a;
        goto code_r0x0001938ff7b0;
    }
    iVar13 = *piStack_1d0;
    uVar2 = *(iVar13 + (uVar31 >> 3));
    *puVar1 = uVar44;
    if ((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) != 0) {
        if (uVar31 + 7 < uVar20 || uVar31 + 7 == uVar20) {
            uVar9 = 0;
            uVar31 = 6;
            do {
                uVar58 = 8 - (uVar44 & 7);
                uVar55 = uVar31;
                if (uVar58 <= uVar31) {
                    uVar55 = uVar58;
                }
                uVar7 = uVar55;
                uVar9 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar7 & 0x1f) &
                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                uVar44 = uVar55 + uVar44;
                *puVar1 = uVar44;
                uVar31 = uVar31 - uVar55;
            } while (uVar31 != 0);
            if (uVar44 + 5 < uVar20 || uVar44 + 5 == uVar20) {
                uVar7 = 0;
                uVar9 = uVar9 + 1;
                uVar31 = 5;
                do {
                    uVar58 = 8 - (uVar44 & 7);
                    uVar55 = uVar31;
                    if (uVar58 <= uVar31) {
                        uVar55 = uVar58;
                    }
                    uVar10 = uVar55;
                    uVar7 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar10 & 0x1f) &
                            (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                    uVar44 = uVar55 + uVar44;
                    *puVar1 = uVar44;
                    uVar31 = uVar31 - uVar55;
                } while (uVar31 != 0);
                if (uVar44 + 6 < uVar20 || uVar44 + 6 == uVar20) {
                    uVar10 = 0;
                    uVar7 = uVar7 + 1;
                    uVar55 = uVar7;
                    uVar31 = 6;
                    do {
                        uVar27 = 8 - (uVar44 & 7);
                        uVar58 = uVar31;
                        if (uVar27 <= uVar31) {
                            uVar58 = uVar27;
                        }
                        uVar5 = uVar58;
                        uVar10 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar5 & 0x1f) &
                                 (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar5 & 0x1f);
                        uVar44 = uVar58 + uVar44;
                        *puVar1 = uVar44;
                        uVar31 = uVar31 - uVar58;
                    } while (uVar31 != 0);
                    if (uVar44 + 5 < uVar20 || uVar44 + 5 == uVar20) {
                        uVar5 = 0;
                        uVar10 = uVar10 + 1;
                        uVar31 = 5;
                        do {
                            uVar27 = 8 - (uVar44 & 7);
                            uVar58 = uVar31;
                            if (uVar27 <= uVar31) {
                                uVar58 = uVar27;
                            }
                            uVar23 = uVar58;
                            uVar5 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar23 & 0x1f) &
                                    (-1 << (uVar23 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar23 & 0x1f);
                            uVar44 = uVar58 + uVar44;
                            *puVar1 = uVar44;
                            uVar31 = uVar31 - uVar58;
                        } while (uVar31 != 0);
                        uVar31 = uVar5 + 1;
                        if (uVar44 + uVar31 < uVar20 || uVar44 + uVar31 == uVar20) {
                            uVar23 = 0;
                            if (uVar5 + 1 != 0) {
                                do {
                                    uVar27 = 8 - (uVar44 & 7);
                                    uVar58 = uVar31;
                                    if (uVar27 <= uVar31) {
                                        uVar58 = uVar27;
                                    }
                                    uVar5 = uVar58;
                                    uVar23 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar5 & 0x1f) &
                                             (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar23 << (uVar5 & 0x1f);
                                    uVar44 = uVar58 + uVar44;
                                    *puVar1 = uVar44;
                                    uVar31 = uVar31 - uVar58;
                                } while (uVar31 != 0);
                            }
                            if (uVar44 + 5 < uVar20 || uVar44 + 5 == uVar20) {
                                uVar5 = 0;
                                uVar31 = 5;
                                do {
                                    uVar27 = 8 - (uVar44 & 7);
                                    uVar58 = uVar31;
                                    if (uVar27 <= uVar31) {
                                        uVar58 = uVar27;
                                    }
                                    uVar57 = uVar58;
                                    uVar5 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar57 & 0x1f) &
                                            (-1 << (uVar57 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar57 & 0x1f);
                                    uVar44 = uVar58 + uVar44;
                                    *puVar1 = uVar44;
                                    uVar31 = uVar31 - uVar58;
                                } while (uVar31 != 0);
                                uVar31 = uVar5 + 1;
                                if (uVar44 + uVar31 < uVar20 || uVar44 + uVar31 == uVar20) {
                                    uVar20 = 0;
                                    if (uVar5 + 1 != 0) {
                                        do {
                                            uVar27 = 8 - (uVar44 & 7);
                                            uVar58 = uVar31;
                                            if (uVar27 <= uVar31) {
                                                uVar58 = uVar27;
                                            }
                                            uVar5 = uVar58;
                                            uVar20 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar5 & 0x1f) &
                                                     (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar20 << (uVar5 & 0x1f);
                                            uVar44 = uVar58 + uVar44;
                                            *puVar1 = uVar44;
                                            uVar31 = uVar31 - uVar58;
                                        } while (uVar31 != 0);
                                    }
                                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                    uVar5 = tmp_ldWn;
                                    if (((uVar5 & 1) == 0) &&
                                       (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
                                        uStack_1e8 = operator new(unsigned long)(0x108);
                                        geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                                  (uStack_1e8, 0x61 + 0x193b8a000, 0xc36000000008 | 0x99af000000000000, 
                                                   0, 0);
                                        *geo::codec::Allocator::instance()::alloc = uStack_1e8;
                                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                                    }
                                    iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                                       (*geo::codec::Allocator::instance()::alloc, 
                                                        uVar20 << -0x3d + 0x40 & 0x7fffffff8, 8);
                                    piVar21 = *param_3;
                                    piVar21[0xdb] = iVar13;
                                    if (iVar13 != 0) {
                                        piVar21[0xdc] = uVar20;
                                        if (uVar23 == 0) {
                                            uVar44 = *puVar1;
                                            uVar20 = *piStack_1c8 << 3;
                                        }
                                        else {
                                            uVar5 = 0;
                                            uVar20 = *piStack_1c8 * 8;
                                            uVar44 = *puVar1;
                                            uVar31 = 0;
                                            do {
                                                if (uVar20 <= uVar44 + uVar55 && uVar44 + uVar55 != uVar20) {
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x1423;
                                                    goto code_r0x0001938ff7b0;
                                                }
                                                uVar57 = 0;
                                                iVar8 = 8;
                                                iVar6 = -1;
                                                if (uVar7 != 0) {
                                                    iVar14 = *piStack_1d0;
                                                    uVar58 = uVar55;
                                                    do {
                                                        uVar28 = 8 - (uVar44 & 7);
                                                        uVar27 = uVar58;
                                                        if (uVar28 <= uVar58) {
                                                            uVar27 = uVar28;
                                                        }
                                                        uVar29 = uVar27;
                                                        uVar57 = *(iVar14 + (uVar44 >> 3)) >>
                                                                 ((iVar8 - (uVar44 & 7)) - uVar29 & 0x1f) &
                                                                 (iVar6 << (uVar29 & 0x1f) ^ 0xffffffff) |
                                                                 uVar57 << (uVar29 & 0x1f);
                                                        uVar44 = uVar27 + uVar44;
                                                        *puVar1 = uVar44;
                                                        uVar58 = uVar58 - uVar27;
                                                    } while (uVar58 != 0);
                                                }
                                                uVar58 = uVar44 + uVar10;
                                                if (uVar20 <= uVar58 && uVar58 != uVar20) {
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x1425;
                                                    goto code_r0x0001938ff7b0;
                                                }
                                                uVar29 = 0;
                                                if (uVar10 != 0) {
                                                    iVar14 = *piStack_1d0;
                                                    uVar58 = uVar10;
                                                    do {
                                                        uVar28 = 8 - (uVar44 & 7);
                                                        uVar27 = uVar58;
                                                        if (uVar28 <= uVar58) {
                                                            uVar27 = uVar28;
                                                        }
                                                        uVar45 = uVar27;
                                                        uVar29 = *(iVar14 + (uVar44 >> 3)) >>
                                                                 ((iVar8 - (uVar44 & 7)) - uVar45 & 0x1f) &
                                                                 (iVar6 << (uVar45 & 0x1f) ^ 0xffffffff) |
                                                                 uVar29 << (uVar45 & 0x1f);
                                                        uVar44 = uVar27 + uVar44;
                                                        *puVar1 = uVar44;
                                                        uVar58 = uVar58 - uVar27;
                                                    } while (uVar58 != 0);
                                                }
                                                uVar27 = uVar57;
                                                iVar14 = piVar21[0xb0];
                                                uVar58 = (piVar21[0xb1] - iVar14 >> 3) *
                                                         (0x677d46cf | 0x51b3bea300000000);
                                                if (uVar58 < uVar27 || uVar58 - uVar27 == 0) {
                                                    uVar61 = **reloc.__stderrp;
                                                    pcVar32 = 0x1426;
                                                    goto code_r0x0001938ff7b0;
                                                }
                                                iVar15 = iVar14 + uVar27 * 0x178;
                                                *(iVar15 + 0x168) = uVar31;
                                                *(iVar15 + 0x170) = uVar29;
                                                uVar27 = uVar31;
                                                if (uVar29 != 0) {
                                                    uVar29 = uVar29 + uVar31;
                                                    uVar27 = uVar29;
                                                    uVar28 = uVar44;
                                                    do {
                                                        uVar44 = uVar28 + 1;
                                                        if (uVar20 <= uVar44 && uVar44 != uVar20) {
                                                            uVar61 = **reloc.__stderrp;
                                                            pcVar32 = 0x142c;
                                                            goto code_r0x0001938ff7b0;
                                                        }
                                                        iVar15 = *piStack_1d0;
                                                        uVar2 = *(iVar15 + (uVar28 >> 3));
                                                        *puVar1 = uVar44;
                                                        if ((uVar2 >> (7 & (uVar28 ^ 0xffffffff)) & 1) == 0) {
                                                            uVar28 = uVar44 + uVar9;
                                                            if (uVar20 <= uVar28 && uVar28 != uVar20) {
                                                                uVar61 = **reloc.__stderrp;
                                                                pcVar32 = 0x1433;
                                                                goto code_r0x0001938ff7b0;
                                                            }
                                                            if (uVar9 == 0) {
                                                                *(iVar13 + uVar31 * 8) = 0;
                                                            }
                                                            else {
                                                                uVar26 = 0;
                                                                uVar28 = uVar9;
                                                                do {
                                                                    uVar47 = 8 - (uVar44 & 7);
                                                                    uVar66 = uVar28;
                                                                    if (uVar47 <= uVar28) {
                                                                        uVar66 = uVar47;
                                                                    }
                                                                    uVar26 = *(iVar15 + (uVar44 >> 3)) >>
                                                                             ((iVar8 - (uVar44 & 7)) - uVar66 & 0x3f) &
                                                                             (-1L << (uVar66 & 0x3f) ^
                                                                             0xffffffffffffffffU) |
                                                                             uVar26 << (uVar66 & 0x3f);
                                                                    uVar44 = uVar66 + uVar44;
                                                                    *puVar1 = uVar44;
                                                                    uVar28 = uVar28 - uVar66;
                                                                } while (uVar28 != 0);
                                                                *(iVar13 + uVar31 * 8) = uVar26;
                                                            }
                                                        }
                                                        else {
                                                            if (uVar20 <= uVar44 + uVar55 && uVar44 + uVar55 != uVar20)
                                                            {
                                                                pcVar32 = 0x142f;
                                                                goto code_r0x000193900470;
                                                            }
                                                            uVar57 = 0;
                                                            uVar28 = uVar55;
                                                            if (uVar7 != 0) {
                                                                do {
                                                                    uVar66 = 8 - (uVar44 & 7);
                                                                    uVar26 = uVar28;
                                                                    if (uVar66 <= uVar28) {
                                                                        uVar26 = uVar66;
                                                                    }
                                                                    uVar45 = uVar26;
                                                                    uVar57 = *(iVar15 + (uVar44 >> 3)) >>
                                                                             ((iVar8 - (uVar44 & 7)) - uVar45 & 0x1f) &
                                                                             (iVar6 << (uVar45 & 0x1f) ^ 0xffffffff) |
                                                                             uVar57 << (uVar45 & 0x1f);
                                                                    uVar44 = uVar26 + uVar44;
                                                                    *puVar1 = uVar44;
                                                                    uVar28 = uVar28 - uVar26;
                                                                    uVar28 = uVar28;
                                                                } while (uVar28 != 0);
                                                            }
                                                            uVar28 = uVar57;
                                                            if (uVar58 < uVar28 || uVar58 - uVar28 == 0) {
                                                                pcVar32 = mach0_cmd_17;
                                                                goto code_r0x000193900470;
                                                            }
                                                            *(iVar13 + uVar31 * 8) = *(iVar14 + 0x40 + uVar28 * 0x178);
                                                        }
                                                        uVar57 = uVar31 + 1;
                                                        uVar31 = uVar57;
                                                        uVar28 = uVar44;
                                                    } while (uVar57 != uVar29);
                                                }
                                                uVar5 = uVar5 + 1;
                                                uVar31 = uVar27;
                                            } while (uVar5 != uVar23);
                                        }
                                        goto code_r0x000193907c78;
                                    }
                                    uVar61 = **reloc.__stderrp;
                                    pcVar32 = 0x141c;
                                    goto code_r0x0001938ff7b0;
                                }
                            }
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x1419;
                            goto code_r0x0001938ff7b0;
                        }
                    }
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x1416;
                }
                else {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x1413;
                }
            }
            else {
                uVar61 = **reloc.__stderrp;
                pcVar32 = 0x1410;
            }
        }
        else {
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x140d;
        }
        goto code_r0x0001938ff7b0;
    }
code_r0x000193907c78:
    uVar31 = uVar44 + 1;
    if (uVar20 <= uVar31 && uVar31 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x1448;
        goto code_r0x0001938ff7b0;
    }
    iVar13 = *piStack_1d0;
    uVar2 = *(iVar13 + (uVar44 >> 3));
    *puVar1 = uVar31;
    if ((uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) != 0) {
        if (uVar44 + 6 < uVar20 || uVar44 + 6 == uVar20) {
            uVar9 = 0;
            uVar44 = 5;
            do {
                uVar58 = 8 - (uVar31 & 7);
                uVar55 = uVar44;
                if (uVar58 <= uVar44) {
                    uVar55 = uVar58;
                }
                uVar7 = uVar55;
                uVar9 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x1f) &
                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                uVar31 = uVar55 + uVar31;
                *puVar1 = uVar31;
                uVar44 = uVar44 - uVar55;
            } while (uVar44 != 0);
            if (uVar31 + 5 < uVar20 || uVar31 + 5 == uVar20) {
                uVar7 = 0;
                uVar9 = uVar9 + 1;
                uVar44 = 5;
                do {
                    uVar58 = 8 - (uVar31 & 7);
                    uVar55 = uVar44;
                    if (uVar58 <= uVar44) {
                        uVar55 = uVar58;
                    }
                    uVar10 = uVar55;
                    uVar7 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar10 & 0x1f) &
                            (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                    uVar31 = uVar55 + uVar31;
                    *puVar1 = uVar31;
                    uVar44 = uVar44 - uVar55;
                } while (uVar44 != 0);
                uVar44 = uVar7 + 1;
                if (uVar31 + uVar44 < uVar20 || uVar31 + uVar44 == uVar20) {
                    uVar20 = 0;
                    if (uVar7 + 1 == 0) {
                        piVar21 = *param_3;
                        piVar21[0xc9] = 0;
                    }
                    else {
                        do {
                            uVar58 = 8 - (uVar31 & 7);
                            uVar55 = uVar44;
                            if (uVar58 <= uVar44) {
                                uVar55 = uVar58;
                            }
                            uVar7 = uVar55;
                            uVar20 = *(iVar13 + (uVar31 >> 3)) >> ((8 - (uVar31 & 7)) - uVar7 & 0x3f) &
                                     ~(-1 << (uVar7 & 0x1f)) | uVar20 << (uVar7 & 0x1f);
                            uVar31 = uVar55 + uVar31;
                            *puVar1 = uVar31;
                            uVar44 = uVar44 - uVar55;
                        } while (uVar44 != 0);
                        piVar21 = *param_3;
                        piVar21[0xc9] = uVar20;
                        if (uVar20 != 0) {
                            tmp_ldWn = *(0x290 + 0x1d6cc0000);
                            uVar7 = tmp_ldWn;
                            if (((uVar7 & 1) == 0) && (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
                                uVar61 = operator new(unsigned long)(0x108);
                                geo::MallocZoneAllocator::MallocZoneAllocator(geo::StringLiteral, unsigned long, unsigned int)
                                          (uVar61, 0x61 + 0x193b8a000, 0xc36000000008 | 0x99af000000000000, 0, 0);
                                *geo::codec::Allocator::instance()::alloc = uVar61;
                                __cxa_guard_release(0x290 + 0x1d6cc0000);
                            }
                            iVar13 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                               (*geo::codec::Allocator::instance()::alloc, uVar20 << 3, 8);
                            piVar21 = *param_3;
                            piVar21[199] = iVar13;
                            if (iVar13 == 0) {
                                pcVar32 = 0x1453;
                                goto code_r0x000193900470;
                            }
                        }
                    }
                    iVar13 = piVar21[0xb0];
                    uVar7 = uVar20;
                    if (piVar21[0xb1] == iVar13) {
                        uVar10 = 0;
                    }
                    else {
                        uVar31 = 0;
                        uVar10 = 0;
                        puVar52 = piVar21[199];
                        uVar44 = *piStack_1c8 * 8;
                        piVar21 = *param_3;
                        uVar20 = *puVar1;
                        do {
                            uVar55 = uVar20 + 1;
                            if (uVar44 <= uVar55 && uVar55 != uVar44) {
                                pcVar32 = 0x145c;
                                goto code_r0x000193900470;
                            }
                            iVar14 = *piStack_1d0;
                            uVar2 = *(iVar14 + (uVar20 >> 3));
                            uVar5 = uVar20;
                            *puVar1 = uVar55;
                            uVar20 = uVar55;
                            if ((uVar2 >> (7 & (uVar5 ^ 0xffffffff)) & 1) == 0) goto code_r0x00019390802c;
                            uVar20 = uVar55 + uVar9;
                            if (uVar44 <= uVar20 && uVar20 != uVar44) {
                                pcVar32 = 0x145e;
                                goto code_r0x000193900470;
                            }
                            if (uVar9 == 0) {
                                if (uVar7 <= uVar10 && uVar10 != uVar7) goto code_r0x000193908848;
                                *(iVar13 + 0x140) = uVar10;
                                *(iVar13 + 0x134) = 0;
                                uVar20 = uVar55;
                            }
                            else {
                                uVar5 = 0;
                                uVar58 = uVar9;
                                do {
                                    uVar20 = 8 - (uVar55 & 7);
                                    uVar27 = uVar58;
                                    if (uVar20 <= uVar58) {
                                        uVar27 = uVar20;
                                    }
                                    uVar23 = uVar27;
                                    uVar5 = *(iVar14 + (uVar55 >> 3)) >> ((8 - (uVar55 & 7)) - uVar23 & 0x1f) &
                                            (-1 << (uVar23 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar23 & 0x1f);
                                    uVar20 = uVar27 + uVar55;
                                    uVar55 = uVar20;
                                    *puVar1 = uVar55;
                                    uVar58 = uVar58 - uVar27;
                                } while (uVar58 != 0);
                                uVar23 = uVar5 + uVar10;
                                if (uVar7 <= uVar23 && uVar23 != uVar7) {
code_r0x000193908848:
                                    pcVar32 = 0x145f;
                                    goto code_r0x000193900470;
                                }
                                *(iVar13 + 0x140) = uVar10;
                                *(iVar13 + 0x134) = uVar5;
                                uVar20 = uVar55;
                                if (uVar5 != 0) {
                                    uVar57 = 0;
                                    do {
                                        if (uVar44 <= uVar20 + uStack_1d8 && uVar20 + uStack_1d8 != uVar44) {
                                            pcVar32 = 0x1464;
                                            goto code_r0x000193900470;
                                        }
                                        if (uStack_1d8 == 0) {
                                            uVar10 = 0;
                                        }
                                        else {
                                            uVar10 = 0;
                                            uVar55 = uStack_1d8;
                                            do {
                                                uVar27 = 8 - (uVar20 & 7);
                                                uVar58 = uVar55;
                                                if (uVar27 <= uVar55) {
                                                    uVar58 = uVar27;
                                                }
                                                uVar29 = uVar58;
                                                uVar10 = *(iVar14 + (uVar20 >> 3)) >>
                                                         ((8 - (uVar20 & 7)) - uVar29 & 0x1f) &
                                                         (-1 << (uVar29 & 0x1f) ^ 0xffffffff) |
                                                         uVar10 << (uVar29 & 0x1f);
                                                uVar20 = uVar58 + uVar20;
                                                *puVar1 = uVar20;
                                                uVar55 = uVar55 - uVar58;
                                            } while (uVar55 != 0);
                                        }
                                        *puVar52 = uVar10;
                                        if (uVar44 <= uVar20 + uStack_1e0 && uVar20 + uStack_1e0 != uVar44) {
                                            pcVar32 = 0x1465;
                                            goto code_r0x000193900470;
                                        }
                                        if (uStack_1e0 == 0) {
                                            uVar10 = 0;
                                        }
                                        else {
                                            uVar10 = 0;
                                            uVar55 = uStack_1e0;
                                            do {
                                                uVar27 = 8 - (uVar20 & 7);
                                                uVar58 = uVar55;
                                                if (uVar27 <= uVar55) {
                                                    uVar58 = uVar27;
                                                }
                                                uVar29 = uVar58;
                                                uVar10 = *(iVar14 + (uVar20 >> 3)) >>
                                                         ((8 - (uVar20 & 7)) - uVar29 & 0x1f) &
                                                         (-1 << (uVar29 & 0x1f) ^ 0xffffffff) |
                                                         uVar10 << (uVar29 & 0x1f);
                                                uVar20 = uVar58 + uVar20;
                                                *puVar1 = uVar20;
                                                uVar55 = uVar55 - uVar58;
                                            } while (uVar55 != 0);
                                        }
                                        puVar52[1] = uVar10;
                                        uVar57 = uVar57 + 1;
                                        puVar52 = puVar52 + 2;
                                        uVar10 = uVar23;
                                    } while (uVar57 != uVar5);
                                }
                            }
code_r0x00019390802c:
                            uVar31 = uVar31 + 1;
                            iVar13 = iVar13 + 0x178;
                        } while (uVar31 < (piVar21[0xb1] - piVar21[0xb0] >> 3) * (0x677d46cf | 0x51b3bea300000000));
                    }
                    if (uVar10 != uVar7) {
                        pcVar32 = 0x1469;
                        goto code_r0x000193900470;
                    }
                    uVar31 = *puVar1;
                    uVar20 = *piStack_1c8 << 3;
                    goto code_r0x000193907edc;
                }
            }
            pcVar32 = 0x144e;
            goto code_r0x000193900470;
        }
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x144b;
        goto code_r0x0001938ff7b0;
    }
code_r0x000193907edc:
    uVar44 = uVar31 + 1;
    if (uVar20 <= uVar44 && uVar44 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x1475;
        goto code_r0x0001938ff7b0;
    }
    iVar13 = *piStack_1d0;
    uVar2 = *(iVar13 + (uVar31 >> 3));
    *puVar1 = uVar44;
    if ((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) == 0) {
code_r0x000193907fa0:
        uVar31 = uVar44;
    }
    else {
        iVar15 = (*param_3)[0xb0];
        iVar14 = (*param_3)[0xb1] - iVar15;
        if (iVar14 == 0) goto code_r0x000193907fa0;
        iVar14 = SUB168(SEXT816(iVar14) * SEXT816(0x4c415c99 | 0x572620ae00000000), 8);
        uVar55 = (iVar14 >> 7) - (iVar14 >> 0x3f);
        if (uVar55 < 2) {
            uVar55 = 1;
        }
        puVar50 = iVar15 + 0x162;
        do {
            uVar31 = uVar44 + 1;
            if (uVar20 <= uVar31 && uVar31 != uVar20) {
                uVar61 = **reloc.__stderrp;
                pcVar32 = 0x1479;
                goto code_r0x0001938ff7b0;
            }
            uVar2 = *(iVar13 + (uVar44 >> 3));
            *puVar1 = uVar31;
            *puVar50 = (uVar2 >> (7 & (uVar44 ^ 0xffffffff)) & 1) == 0;
            puVar50 = puVar50 + 0x178;
            uVar44 = uVar31;
            uVar55 = uVar55 + -1;
        } while (uVar55 != 0);
    }
    uVar9 = *(pcVar11 + 0x40);
    if (uVar9 < 0x32) goto code_r0x000193908bb4;
    uVar44 = uVar31 + 1;
    if (uVar20 <= uVar44 && uVar44 != uVar20) {
        uVar61 = **reloc.__stderrp;
        pcVar32 = 0x149a;
        goto code_r0x0001938ff7b0;
    }
    uVar2 = *(iVar13 + (uVar31 >> 3));
    *puVar1 = uVar44;
    if ((uVar2 >> (7 & (uVar31 ^ 0xffffffff)) & 1) != 0) {
        if (uVar31 + 6 < uVar20 || uVar31 + 6 == uVar20) {
            uVar9 = 0;
            uVar31 = 5;
            do {
                uVar58 = 8 - (uVar44 & 7);
                uVar55 = uVar31;
                if (uVar58 <= uVar31) {
                    uVar55 = uVar58;
                }
                uVar7 = uVar55;
                uVar9 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar7 & 0x1f) &
                        (-1 << (uVar7 & 0x1f) ^ 0xffffffff) | uVar9 << (uVar7 & 0x1f);
                uVar44 = uVar55 + uVar44;
                *puVar1 = uVar44;
                uVar31 = uVar31 - uVar55;
            } while (uVar31 != 0);
            if (uVar44 + 5 < uVar20 || uVar44 + 5 == uVar20) {
                uVar7 = 0;
                uVar31 = 5;
                do {
                    uVar55 = 8 - (uVar44 & 7);
                    uVar20 = uVar31;
                    if (uVar55 <= uVar31) {
                        uVar20 = uVar55;
                    }
                    uVar10 = uVar20;
                    uVar7 = *(iVar13 + (uVar44 >> 3)) >> ((8 - (uVar44 & 7)) - uVar10 & 0x1f) &
                            (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar7 << (uVar10 & 0x1f);
                    uVar44 = uVar20 + uVar44;
                    *puVar1 = uVar44;
                    uVar31 = uVar31 - uVar20;
                } while (uVar31 != 0);
                uStack_170 = (uStack_170 >> 0x20) << 0x20;
                uVar31 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                   (piStack_1d0, *0x8 + -0x170, 6);
                if ((uVar31 & 1) == 0) {
                    uVar61 = **reloc.__stderrp;
                    pcVar32 = 0x14a4;
                }
                else {
                    uStack_1a8 = 0;
                    uVar31 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(piStack_1d0, *0x8 + -0x1a8);
                    if ((uVar31 & 1) == 0) {
                        uVar61 = **reloc.__stderrp;
                        pcVar32 = 0x14a7;
                    }
                    else {
                        (*param_3)[0xdf] = uStack_1a8;
                        uStack_1ac = 0;
                        uVar31 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(piStack_1d0, *0x8 + -0x1ac);
                        if ((uVar31 & 1) == 0) {
                            uVar61 = **reloc.__stderrp;
                            pcVar32 = 0x14ab;
                        }
                        else {
                            (*param_3)[0xe1] = uStack_1ac;
                            piVar21 = geo::codec::Allocator::instance()();
                            iVar13 = (**(*piVar21 + 0x10))(piVar21, (*param_3)[0xdf] << 3, 8);
                            (*param_3)[0xde] = iVar13;
                            piVar21 = geo::codec::Allocator::instance()();
                            iVar13 = (**(*piVar21 + 0x10))(piVar21, (*param_3)[0xe1] << 3, 8);
                            piVar21 = *param_3;
                            piVar21[0xe0] = iVar13;
                            if (piVar21[0xa9] == piVar21[0xa8]) {
                                uVar31 = 0;
                                uVar20 = 0;
                            }
                            else {
                                uVar44 = 0;
                                uVar20 = 0;
                                uVar31 = 0;
                                uStack_1d8 = uVar7 + 1;
                                piStack_1c8 = uStack_170;
                                do {
                                    cStack_1ad = '\0';
                                    uVar55 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_1d0, *0x8 + -0x1ad);
                                    if ((uVar55 & 1) == 0) {
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x14b6;
                                        goto code_r0x0001938ff7b0;
                                    }
                                    if (cStack_1ad != '\0') {
                                        iStack_1b4 = 0;
                                        uVar55 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                           (piStack_1d0, *0x8 + -0x1b4, uStack_1d8);
                                        if ((uVar55 & 1) != 0) {
                                            iVar13 = (*param_3)[0xa8];
                                            iVar14 = uVar44 * 0xb8;
                                            *(iVar13 + iVar14 + 0x78) = uVar31;
                                            *(iVar13 + iVar14 + 0x98) = uVar20;
                                            iVar6 = iStack_1b4;
                                            if (iVar6 != 0) {
                                                do {
                                                    cStack_1b5 = '\0';
                                                    uVar55 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                       (piStack_1d0, *0x8 + -0x1b5);
                                                    if ((uVar55 & 1) == 0) goto code_r0x000193908dd4;
                                                    if (cStack_1b5 == '\0') {
                                                        puStack_1a0 = NULL;
                                                        iVar8 = 
                                                            BitstreamUnpack64(Bitstream*, unsigned long long*, unsigned long)
                                                                      (piStack_1d0, *0x8 + -0x1a0, piStack_1c8);
                                                        if (iVar8 == 0) goto code_r0x000193908c4c;
                                                        piVar21 = *param_3;
                                                        if (piVar21[0xe1] <= uVar20) goto code_r0x000193908df0;
                                                        *(piVar21[0xe0] + uVar20 * 8) = puStack_1a0;
                                                        uVar20 = uVar20 + 1;
                                                        *(piVar21[0xa8] + iVar14 + 0xa0) =
                                                             *(piVar21[0xa8] + iVar14 + 0xa0) + 1;
                                                    }
                                                    else {
                                                        puStack_1a0 = (puStack_1a0 >> 0x20) << 0x20;
                                                        iVar8 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piStack_1d0, *0x8 + -0x1a0, uVar9 + 1);
                                                        if (iVar8 == 0) goto code_r0x000193908c44;
                                                        piVar21 = *param_3;
                                                        if (piVar21[0xdf] <= uVar31) goto code_r0x000193908de8;
                                                        *(piVar21[0xde] + uVar31 * 8) = puStack_1a0;
                                                        uVar31 = uVar31 + 1;
                                                        *(piVar21[0xa8] + iVar14 + 0x80) =
                                                             *(piVar21[0xa8] + iVar14 + 0x80) + 1;
                                                    }
                                                    iVar6 = iVar6 + -1;
                                                } while (iVar6 != 0);
                                            }
                                            iStack_1b4 = 0;
                                            iVar6 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                              (piStack_1d0, *0x8 + -0x1b4, uStack_1d8);
                                            if (iVar6 != 0) {
                                                piVar21 = *param_3;
                                                iVar13 = piVar21[0xa8];
                                                *(iVar13 + iVar14 + 0x88) = uVar31;
                                                *(iVar13 + iVar14 + 0xa8) = uVar20;
                                                iVar6 = iStack_1b4;
                                                if (iVar6 != 0) {
                                                    do {
                                                        while( true ) {
                                                            cStack_1b5 = '\0';
                                                            iVar8 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                              (piStack_1d0, *0x8 + -0x1b5);
                                                            if (iVar8 == 0) goto code_r0x000193908dd4;
                                                            if (cStack_1b5 == '\0') break;
                                                            puStack_1a0 = (puStack_1a0 >> 0x20) << 0x20;
                                                            iVar8 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piStack_1d0, *0x8 + -0x1a0, uVar9 + 1);
                                                            if (iVar8 == 0) goto code_r0x000193908c44;
                                                            piVar21 = *param_3;
                                                            if (piVar21[0xdf] <= uVar31) goto code_r0x000193908de8;
                                                            *(piVar21[0xde] + uVar31 * 8) = puStack_1a0;
                                                            uVar31 = uVar31 + 1;
                                                            *(piVar21[0xa8] + iVar14 + 0x90) =
                                                                 *(piVar21[0xa8] + iVar14 + 0x90) + 1;
                                                            iVar6 = iVar6 + -1;
                                                            if (iVar6 == 0) goto code_r0x0001939085f0;
                                                        }
                                                        puStack_1a0 = NULL;
                                                        iVar8 = 
                                                            BitstreamUnpack64(Bitstream*, unsigned long long*, unsigned long)
                                                                      (piStack_1d0, *0x8 + -0x1a0, piStack_1c8);
                                                        if (iVar8 == 0) goto code_r0x000193908c4c;
                                                        piVar21 = *param_3;
                                                        if (piVar21[0xe1] <= uVar20) goto code_r0x000193908df0;
                                                        *(piVar21[0xe0] + uVar20 * 8) = puStack_1a0;
                                                        uVar20 = uVar20 + 1;
                                                        *(piVar21[0xa8] + iVar14 + 0xb0) =
                                                             *(piVar21[0xa8] + iVar14 + 0xb0) + 1;
                                                        iVar6 = iVar6 + -1;
                                                    } while (iVar6 != 0);
                                                }
                                                goto code_r0x0001939085f0;
                                            }
                                        }
                                        uVar61 = **reloc.__stderrp;
                                        pcVar32 = 0x14be;
                                        goto code_r0x0001938ff7b0;
                                    }
                                    piVar21 = *param_3;
code_r0x0001939085f0:
                                    uVar44 = uVar44 + 1;
                                } while (uVar44 < (piVar21[0xa9] - piVar21[0xa8] >> 3) *
                                                  (0xe9bd37a7 | 0xd37a6f4d00000000));
                            }
                            if (uVar31 != (*param_3)[0xdf]) {
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x14db;
                            }
                            else {
                                if (uVar20 == (*param_3)[0xe1]) {
                                    uVar9 = *(pcVar11 + 0x40);
                                    goto code_r0x000193908b14;
                                }
                                uVar61 = **reloc.__stderrp;
                                pcVar32 = 0x14dc;
                            }
                        }
                    }
                }
            }
            else {
                uVar61 = **reloc.__stderrp;
                pcVar32 = 0x14a1;
            }
        }
        else {
            uVar61 = **reloc.__stderrp;
            pcVar32 = 0x149e;
        }
        goto code_r0x0001938ff7b0;
    }
code_r0x000193908b14:
    if (0x3f < uVar9) {
        puStack_1a0 = (puStack_1a0 >> 8) << 8;
        uVar31 = BitstreamUnpackFlag(Bitstream*, bool*)(piStack_1d0, *0x8 + -0x1a0);
        if ((uVar31 & 1) == 0) {
            pcVar32 = 0x14e5;
            goto code_r0x000193900470;
        }
        if (puStack_1a0 != '\0') {
            piVar21 = geo::codec::Allocator::instance()();
            iVar13 = (**(*piVar21 + 0x18))(piVar21, (*param_3)[0xae], 4);
            piVar21 = *param_3;
            piVar21[0xc0] = iVar13;
            if (iVar13 == 0) {
                pcVar32 = mach0_cmd_19;
                goto code_r0x000193900470;
            }
            iStack_150 = *0x8 + -0x168;
            pcStack_168 = typeinfo for geo::Allocator + 0x580 + 0x10;
            ppiStack_160 = param_3;
            geo::codec::decodeZoomRanks(Bitstream*, unsigned long, std::__1::function<void (unsigned long, float)>)
                      (piStack_1d0, piVar21[0xae], *0x8 + -0x168);
            std::__1::function<void (unsigned long, float)>::~function()(*0x8 + -0x168);
        }
    }
code_r0x000193908bb4:
    iVar13 = *(pcVar11 + 0x30) + (*(pcVar11 + 0x18) >> 3);
    if ((*(pcVar11 + 0x18) & 7) != 0) {
        iVar13 = iVar13 + 1;
    }
    *(pcVar11 + 0x30) = iVar13;
    pcVar11[0x20] = '\0';
    uVar61 = 1;
    if (*pcVar11 != '\0') goto code_r0x0001938ff7d4;
    goto code_r0x0001938ff818;
code_r0x0001939054e4:
    if (*(ppiVar39 + 0xd) != '\0') {
        *(iVar13 + 0x110) = ppiVar39[0xe];
    }
code_r0x000193905418:
    uVar31 = uVar31 + 1;
    uStack_210 = CONCAT44(uStack_210._4_4_, 1);
    if (uVar31 == uVar20) goto code_r0x000193904d84;
    goto code_r0x00019390542c;
code_r0x000193908dd4:
    uVar61 = **reloc.__stderrp;
    pcVar32 = 0x14c5;
    goto code_r0x0001938ff7b0;
code_r0x000193908c4c:
    pcVar32 = 0x14d1;
    goto code_r0x000193900470;
code_r0x000193908df0:
    pcVar32 = 0x14d2;
    goto code_r0x000193900470;
code_r0x000193908c44:
    pcVar32 = 0x14c9;
    goto code_r0x000193900470;
code_r0x000193908de8:
    pcVar32 = 0x14ca;
code_r0x000193900470:
    uVar61 = **reloc.__stderrp;
code_r0x0001938ff7b0:
    *(*0x8 + -0x260) = 0x7bc + 0x193b8a000;
    *(*0x8 + -600) = pcVar32;
    fprintf(uVar61, 0x8ff + 0x193b8a000);
    uVar61 = 0;
    if (*pcVar11 != '\0') {
code_r0x0001938ff7d4:
        tmp_ldWn = *(0x290 + 0x1d6cc0000);
        uVar9 = tmp_ldWn;
        if (((uVar9 & 1) == 0) && (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
            ppcVar16 = operator new(unsigned long)(0x108);
            ppcVar16[1] = 0x61 + 0x193b8a000;
            ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
            ppcVar16[3] = 0x61 + 0x193b8a000;
            pcVar32 = *0x193af97f0;
            ppcVar16[5] = *0x193af97f8;
            ppcVar16[4] = pcVar32;
            *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l + 0xfa8 + 0x10;
            ppcVar16[8] = NULL;
            ppcVar16[7] = NULL;
            ppcVar16[10] = NULL;
            ppcVar16[9] = NULL;
            ppcVar16[0xc] = NULL;
            ppcVar16[0xb] = NULL;
            ppcVar16[0xe] = NULL;
            ppcVar16[0xd] = NULL;
            ppcVar16[0x10] = NULL;
            ppcVar16[0xf] = NULL;
            ppcVar16[0x12] = NULL;
            ppcVar16[0x11] = NULL;
            ppcVar16[0x14] = NULL;
            ppcVar16[0x13] = NULL;
            ppcVar16[0x16] = NULL;
            ppcVar16[0x15] = NULL;
            ppcVar16[0x18] = NULL;
            ppcVar16[0x17] = NULL;
            ppcVar16[0x1a] = NULL;
            ppcVar16[0x19] = NULL;
            ppcVar16[0x1c] = NULL;
            ppcVar16[0x1b] = NULL;
            ppcVar16[0x1e] = NULL;
            ppcVar16[0x1d] = NULL;
            ppcVar16[0x1f] = NULL;
            uVar17 = pthread_rwlock_init(ppcVar16 + 7, 0);
            if (uVar17 != 0) {
                geo::read_write_lock::logFailure(int, char const*)(uVar17, 0x85 + 0x193b8a000);
            }
            pcVar32 = malloc_create_zone(0, 0);
            ppcVar16[6] = pcVar32;
            malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
            pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
            ppcVar16[0x20] = pcVar32;
            *geo::codec::Allocator::instance()::alloc = ppcVar16;
            __cxa_guard_release(0x290 + 0x1d6cc0000);
        }
        (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                  (*geo::codec::Allocator::instance()::alloc, *(pcVar11 + 0x28), 0);
    }
code_r0x0001938ff818:
    tmp_ldWn = *(0x290 + 0x1d6cc0000);
    uVar9 = tmp_ldWn;
    if (((uVar9 & 1) == 0) && (iVar6 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar6 != 0)) {
        ppcVar16 = operator new(unsigned long)(0x108);
        ppcVar16[1] = 0x61 + 0x193b8a000;
        ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
        ppcVar16[3] = 0x61 + 0x193b8a000;
        pcVar32 = *0x193af97f0;
        ppcVar16[5] = *0x193af97f8;
        ppcVar16[4] = pcVar32;
        *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l + 0xfa8 + 0x10;
        ppcVar16[8] = NULL;
        ppcVar16[7] = NULL;
        ppcVar16[10] = NULL;
        ppcVar16[9] = NULL;
        ppcVar16[0xc] = NULL;
        ppcVar16[0xb] = NULL;
        ppcVar16[0xe] = NULL;
        ppcVar16[0xd] = NULL;
        ppcVar16[0x10] = NULL;
        ppcVar16[0xf] = NULL;
        ppcVar16[0x12] = NULL;
        ppcVar16[0x11] = NULL;
        ppcVar16[0x14] = NULL;
        ppcVar16[0x13] = NULL;
        ppcVar16[0x16] = NULL;
        ppcVar16[0x15] = NULL;
        ppcVar16[0x18] = NULL;
        ppcVar16[0x17] = NULL;
        ppcVar16[0x1a] = NULL;
        ppcVar16[0x19] = NULL;
        ppcVar16[0x1c] = NULL;
        ppcVar16[0x1b] = NULL;
        ppcVar16[0x1e] = NULL;
        ppcVar16[0x1d] = NULL;
        ppcVar16[0x1f] = NULL;
        uVar17 = pthread_rwlock_init(ppcVar16 + 7, 0);
        if (uVar17 != 0) {
            geo::read_write_lock::logFailure(int, char const*)(uVar17, 0x85 + 0x193b8a000);
        }
        pcVar32 = malloc_create_zone(0, 0);
        ppcVar16[6] = pcVar32;
        malloc_set_zone_name(pcVar32, 0x61 + 0x193b8a000);
        pcVar32 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
        ppcVar16[0x20] = pcVar32;
        *geo::codec::Allocator::instance()::alloc = ppcVar16;
        __cxa_guard_release(0x290 + 0x1d6cc0000);
    }
    (**(**geo::codec::Allocator::instance()::alloc + 0x28))(*geo::codec::Allocator::instance()::alloc, pcVar11, 0);
    iVar13 = std::__1::chrono::steady_clock::now()();
    uStack_170 = 0x2db + 0x193b8a000;
    puStack_1a0 = *0x8 + -0x170;
    iVar14 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (piStack_1c0 + 0xef, *0x8 + -0x170, 0x74c + 0x193af9000, *0x8 + -0x1a0, *0x8 + -0x1a8);
    iVar13 = SUB168(SEXT816(iVar13 - iVar12) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar14 + 0x20) = ((iVar13 >> 7) - (iVar13 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    if (piVar60 != NULL) {
        LOAcquire();
        tmp_ldXn = piVar60[1];
        iVar13 = tmp_ldXn;
        tmp_stXn = iVar13 + -1;
        iVar13 = tmp_stXn;
        piVar60[1] = iVar13;
        iVar13 = tmp_ldXn;
        LORelease();
        if (iVar13 == 0) {
            (**(*piVar60 + 0x10))(piVar60);
            std::__1::__shared_weak_count::__release_weak()(piVar60);
        }
    }
code_r0x0001938ff6c0:
    if (**reloc.__stack_chk_guard == iStack_88) {
        return uVar61;
    }
    // WARNING: Subroutine does not return
    __stack_chk_fail();
}
