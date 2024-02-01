
ulong geo::codec::_readPoisAddendum(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint32_t uVar1;
    uint8_t *puVar2;
    uint32_t uVar3;
    uint uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int32_t iVar12;
    int32_t iVar13;
    ulong uVar14;
    int64_t *piVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t iVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    int64_t iVar21;
    uint *puVar22;
    uint32_t uVar23;
    uint64_t uVar24;
    uint32_t uVar25;
    uint64_t uVar26;
    char *pcVar27;
    int64_t iVar28;
    uint8_t **ppuVar29;
    int64_t iVar30;
    uint8_t uVar31;
    uint8_t uVar32;
    uint32_t uVar33;
    uint uVar34;
    float fVar35;
    uint64_t uStack_170;
    uint32_t uStack_12c;
    uint64_t uStack_120;
    char cStack_fd;
    uint32_t uStack_fc;
    ulong uStack_f8;
    ulong uStack_f0;
    uint32_t auStack_e8 [2];
    uint32_t uStack_e0;
    uint32_t uStack_dc;
    uint32_t auStack_d8 [4];
    uint32_t uStack_c8;
    char cStack_bd;
    uint uStack_bc;
    int64_t iStack_b8;
    int64_t iStack_b0;
    int64_t *piStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    
    iStack_b0 = *param_2;
    uVar19 = param_1[1];
    if (uVar19 != 0) {
        uVar17 = 0;
        do {
            if (*(*param_1 + uVar17 * 0x10) == 0x90) {
                pcVar27 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar17, 0x90, iStack_b0 + 0x778);
                iStack_b8 = 0x3be + 0x193b8a000;
                iStack_b0 = *param_2;
                piStack_a8 = param_2[1];
                if (piStack_a8 == NULL) goto code_r0x0001938f3224;
                goto code_r0x0001938f3218;
            }
            uVar17 = uVar17 + 1;
        } while (uVar17 <= uVar19 && uVar19 != uVar17);
    }
    pcVar27 = NULL;
    iStack_b8 = 0x3be + 0x193b8a000;
    piStack_a8 = param_2[1];
    if (piStack_a8 != NULL) {
code_r0x0001938f3218:
        tmp_ldXn = piStack_a8[1];
        iVar28 = tmp_ldXn;
        tmp_stXn = iVar28 + 1;
        iVar28 = tmp_stXn;
        piStack_a8[1] = iVar28;
        uVar14 = tmp_ldXn;
    }
code_r0x0001938f3224:
    iStack_a0 = std::__1::chrono::steady_clock::now()();
    if (pcVar27 == NULL) goto code_r0x0001938f3564;
    uVar19 = *(pcVar27 + 0x30);
    iVar28 = *(pcVar27 + 0x38) - uVar19;
    if (*(pcVar27 + 0x38) < uVar19) {
        uVar14 = **reloc.__stderrp;
        goto code_r0x0001938f33b0;
    }
    puVar2 = *(pcVar27 + 0x28) + uVar19;
    ppuVar29 = pcVar27 + 8;
    *ppuVar29 = puVar2;
    pcVar27[0x20] = '\x01';
    *(pcVar27 + 0x10) = iVar28;
    *(pcVar27 + 0x18) = 0;
    uVar19 = iVar28 * 8;
    if (uVar19 == 0) {
code_r0x0001938f32c0:
        uVar14 = **reloc.__stderrp;
code_r0x0001938f33b0:
        fprintf(uVar14, 0x8ff + 0x193b8a000);
        uVar14 = 0;
        iVar28 = 0;
code_r0x0001938f33d0:
        piVar15 = geo::codec::Allocator::instance()();
        (**(*piVar15 + 0x28))(piVar15, iVar28, 0);
        if (param_1 != NULL) {
            if (*pcVar27 != '\0') {
                piVar15 = geo::codec::Allocator::instance()();
                (**(*piVar15 + 0x28))(piVar15, *(pcVar27 + 0x28), 0);
            }
            piVar15 = geo::codec::Allocator::instance()();
            (**(*piVar15 + 0x28))(piVar15, pcVar27, 0);
        }
        iVar28 = iStack_b8;
        iVar30 = iStack_b0;
        iVar16 = std::__1::chrono::steady_clock::now()();
        uStack_98 = iVar28;
        if (iVar28 == 0) goto code_r0x0001938f35ec;
    }
    else {
        uVar8 = *puVar2;
        *(pcVar27 + 0x18) = 5;
        uVar17 = (uVar8 >> 3) + 6;
        if (uVar19 <= uVar17 && uVar17 != uVar19) goto code_r0x0001938f32c0;
        uVar23 = 0;
        uVar17 = (uVar8 >> 3) + 1;
        uVar20 = 5;
        do {
            uVar26 = 8 - (uVar20 & 7);
            uVar24 = uVar17;
            if (uVar26 <= uVar17) {
                uVar24 = uVar26;
            }
            uVar25 = uVar24;
            uVar23 = puVar2[uVar20 >> 3] >> ((8 - (uVar20 & 7)) - uVar25 & 0x1f) & (-1 << (uVar25 & 0x1f) ^ 0xffffffff)
                     | uVar23 << (uVar25 & 0x1f);
            uVar20 = uVar24 + uVar20;
            *(pcVar27 + 0x18) = uVar20;
            uVar17 = uVar17 - uVar24;
        } while (uVar17 != 0);
        *(pcVar27 + 0x40) = uVar23;
        if (uVar19 <= uVar20 + 5 && uVar20 + 5 != uVar19) {
code_r0x0001938f33a0:
            uVar14 = **reloc.__stderrp;
            goto code_r0x0001938f33b0;
        }
        uVar23 = 0;
        uVar17 = 5;
        do {
            uVar26 = 8 - (uVar20 & 7);
            uVar24 = uVar17;
            if (uVar26 <= uVar17) {
                uVar24 = uVar26;
            }
            uVar25 = uVar24;
            uVar23 = puVar2[uVar20 >> 3] >> ((8 - (uVar20 & 7)) - uVar25 & 0x1f) & (-1 << (uVar25 & 0x1f) ^ 0xffffffff)
                     | uVar23 << (uVar25 & 0x1f);
            uVar20 = uVar24 + uVar20;
            *(pcVar27 + 0x18) = uVar20;
            uVar17 = uVar17 - uVar24;
        } while (uVar17 != 0);
        uVar17 = uVar23 + 1;
        if (uVar19 <= uVar20 + uVar17 && uVar20 + uVar17 != uVar19) goto code_r0x0001938f33a0;
        if (uVar23 + 1 != 0) {
            uVar23 = 0;
            do {
                uVar26 = 8 - (uVar20 & 7);
                uVar24 = uVar17;
                if (uVar26 <= uVar17) {
                    uVar24 = uVar26;
                }
                uVar25 = uVar24;
                uVar23 = puVar2[uVar20 >> 3] >> ((8 - (uVar20 & 7)) - uVar25 & 0x1f) &
                         (-1 << (uVar25 & 0x1f) ^ 0xffffffff) | uVar23 << (uVar25 & 0x1f);
                uVar20 = uVar24 + uVar20;
                *(pcVar27 + 0x18) = uVar20;
                uVar17 = uVar17 - uVar24;
            } while (uVar17 != 0);
            if (uVar23 != 4) goto code_r0x0001938f3564;
            if (uVar19 <= uVar20 + 5 && uVar20 + 5 != uVar19) {
code_r0x0001938f3550:
                uVar14 = **reloc.__stderrp;
                goto code_r0x0001938f33b0;
            }
            uVar23 = 0;
            uVar17 = 5;
            do {
                uVar26 = 8 - (uVar20 & 7);
                uVar24 = uVar17;
                if (uVar26 <= uVar17) {
                    uVar24 = uVar26;
                }
                uVar25 = uVar24;
                uVar23 = puVar2[uVar20 >> 3] >> ((8 - (uVar20 & 7)) - uVar25 & 0x1f) &
                         (-1 << (uVar25 & 0x1f) ^ 0xffffffff) | uVar23 << (uVar25 & 0x1f);
                uVar20 = uVar24 + uVar20;
                *(pcVar27 + 0x18) = uVar20;
                uVar17 = uVar17 - uVar24;
            } while (uVar17 != 0);
            uVar17 = uVar23 + 1;
            if (uVar19 <= uVar20 + uVar17 && uVar20 + uVar17 != uVar19) goto code_r0x0001938f3550;
            uVar25 = 0;
            if (uVar23 + 1 != 0) {
                do {
                    uVar24 = 8 - (uVar20 & 7);
                    uVar19 = uVar17;
                    if (uVar24 <= uVar17) {
                        uVar19 = uVar24;
                    }
                    uVar23 = uVar19;
                    uVar25 = puVar2[uVar20 >> 3] >> ((8 - (uVar20 & 7)) - uVar23 & 0x1f) &
                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) | uVar25 << (uVar23 & 0x1f);
                    uVar24 = uVar20;
                    uVar20 = uVar19 + uVar24;
                    *(pcVar27 + 0x18) = uVar19 + uVar24;
                    uVar17 = uVar17 - uVar19;
                } while (uVar17 != 0);
            }
            if (uVar25 != *(*param_2 + 0x200) - *(*param_2 + 0x1f8) >> 8) {
                uVar14 = **reloc.__stderrp;
                goto code_r0x0001938f33b0;
            }
            uStack_bc = 0;
            uVar19 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)(ppuVar29, *0x8 + -0xbc, 5);
            if ((uVar19 & 1) == 0) {
                uVar14 = **reloc.__stderrp;
                goto code_r0x0001938f33b0;
            }
            cStack_bd = '\0';
            uVar19 = BitstreamUnpackFlag(Bitstream*, bool*)(ppuVar29, *0x8 + -0xbd);
            if ((uVar19 & 1) == 0) {
                uVar14 = **reloc.__stderrp;
                goto code_r0x0001938f33b0;
            }
            if (cStack_bd != '\0') {
                uStack_98 = (uStack_98 >> 0x20) << 0x20;
                uVar19 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(ppuVar29, *0x8 + -0x98);
                if ((uVar19 & 1) == 0) {
                    uVar14 = **reloc.__stderrp;
                }
                else {
                    uStack_c8 = 0;
                    uVar19 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(ppuVar29, auStack_d8 + 4);
                    if ((uVar19 & 1) == 0) {
                        uVar14 = **reloc.__stderrp;
                    }
                    else {
                        uVar25 = uStack_98;
                        uVar23 = uStack_c8;
                        auStack_d8[3] = 0;
                        uVar19 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                           (ppuVar29, auStack_d8 + 3, 5);
                        if ((uVar19 & 1) == 0) {
                            uVar14 = **reloc.__stderrp;
                        }
                        else {
                            auStack_d8[2] = 0;
                            uVar19 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(ppuVar29, auStack_d8 + 2);
                            if ((uVar19 & 1) != 0) {
                                piVar15 = geo::codec::Allocator::instance()();
                                uVar3 = auStack_d8[2];
                                iVar28 = (**(*piVar15 + 0x18))(piVar15, uVar3, 4);
                                if (iVar28 != 0) {
                                    auStack_d8[1] = 0;
                                    if (uVar3 != 0) {
                                        iVar16 = 0;
                                        uVar4 = auStack_d8[3];
                                        do {
                                            uVar19 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                               (ppuVar29, auStack_d8 + 1, uVar4);
                                            if ((uVar19 & 1) == 0) {
                                                uVar14 = **reloc.__stderrp;
                                                goto code_r0x0001938f3d2c;
                                            }
                                            *(iVar28 + iVar16) = auStack_d8[1];
                                            iVar16 = iVar16 + 4;
                                        } while (uVar3 * 4 - iVar16 != 0);
                                    }
                                    auStack_d8[0] = 0;
                                    uVar19 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                       (ppuVar29, auStack_d8, 5);
                                    if ((uVar19 & 1) == 0) {
                                        uVar14 = **reloc.__stderrp;
                                    }
                                    else {
                                        uStack_dc = 0;
                                        uVar19 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                           (ppuVar29, &uStack_dc, 5);
                                        if ((uVar19 & 1) == 0) {
                                            uVar14 = **reloc.__stderrp;
                                        }
                                        else {
                                            uStack_e0 = 0;
                                            uVar19 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                               (ppuVar29, &uStack_e0, 5);
                                            if ((uVar19 & 1) != 0) {
                                                auStack_e8[1] = 0;
                                                uVar19 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                                   (ppuVar29, auStack_e8 + 1, 5);
                                                if ((uVar19 & 1) != 0) {
                                                    piVar15 = geo::codec::Allocator::instance()();
                                                    uVar1 = uVar23 + uVar25;
                                                    iVar16 = (**(*piVar15 + 0x18))(piVar15, uVar1, 0xc);
                                                    *(*param_2 + 0x760) = iVar16;
                                                    if (iVar16 != 0) {
                                                        uStack_90 = 0;
                                                        uVar19 = 
                                                            geo::codec::_makeSpaceForLabels(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                                                      (uVar23, *0x8 + -0x90, param_2);
                                                        if ((uVar19 & 1) == 0) {
                                                            uVar14 = **reloc.__stderrp;
                                                        }
                                                        else {
                                                            iVar16 = *(*param_2 + 0x358);
                                                            iVar30 = *(*param_2 + 0x360);
                                                            auStack_e8[0] = 0;
                                                            uStack_f8 = 0;
                                                            uStack_f0 = 0;
                                                            iVar12 = BitstreamUnpackVar32(Bitstream*, unsigned int*)
                                                                               (ppuVar29, &uStack_f8 + 4);
                                                            uVar34 = uStack_bc;
                                                            uVar11 = auStack_d8[0];
                                                            uVar10 = uStack_dc;
                                                            uVar9 = uStack_e0;
                                                            uVar4 = auStack_e8[1];
                                                            if (iVar12 == 0) {
                                                                uVar14 = **reloc.__stderrp;
                                                            }
                                                            else {
                                                                uVar5 = uStack_f8._4_4_;
                                                                uStack_120 = uStack_90;
                                                                if (uVar5 == 0) {
                                                                    uVar33 = 0;
                                                                }
                                                                else {
                                                                    uStack_170 = 0;
                                                                    uStack_12c = 0;
                                                                    uVar33 = 0;
                                                                    do {
                                                                        uVar19 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (ppuVar29, auStack_e8, uVar34);
                                                            if ((uVar19 & 1) == 0) {
                                                                uStack_90 = uStack_120;
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            iVar21 = *(*param_2 + 0x1f8);
                                                            if (*(*param_2 + 0x200) - iVar21 >> 8 <= auStack_e8[0]) {
                                                                uStack_90 = uStack_120;
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            iVar21 = iVar21 + auStack_e8[0] * 0x100;
                                                            if (*(iVar21 + 0xef) != '\0') {
                                                                uStack_90 = uStack_120;
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            uVar19 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (ppuVar29, &uStack_f0 + 4, uVar11);
                                                            if ((uVar19 & 1) == 0) {
                                                                uStack_90 = uStack_120;
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            uVar6 = uStack_f0._4_4_;
                                                            uVar19 = uVar6;
                                                            uStack_12c = uVar6 + uStack_12c;
                                                            if (uVar25 <= uStack_12c && uStack_12c != uVar25) {
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            if (0xff < uVar6) {
                                                                uStack_90 = uStack_120;
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            *(iVar21 + 0xe0) = uVar33;
                                                            *(iVar21 + 0xef) = uVar6;
                                                            if (*(iVar21 + 0xf0) != '\0') {
                                                                uStack_90 = uStack_120;
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            uVar17 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (ppuVar29, &uStack_f0, uVar10);
                                                            if ((uVar17 & 1) == 0) {
                                                                uStack_90 = uStack_120;
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            uVar7 = uStack_f0;
                                                            uVar17 = uVar7;
                                                            if (uVar23 <= uVar7 && uVar7 != uVar23) {
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            if (0xff < uVar7) {
                                                                uStack_90 = uStack_120;
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            if (uVar6 != 0) {
                                                                do {
                                                                    uVar20 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (ppuVar29, &uStack_f8, uVar9);
                                                            if ((uVar20 & 1) == 0) {
                                                                uStack_90 = uStack_120;
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            if (uVar3 <= uStack_f8) {
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            puVar22 = *(*param_2 + 0x760) + uVar33 * 0xc;
                                                            *puVar22 = 6;
                                                            puVar22[1] = *(iVar28 + uStack_f8 * 4);
                                                            puVar22[2] = 0xffffffff;
                                                            uVar33 = uVar33 + 1;
                                                            uVar19 = uVar19 + -1;
                                                            } while (uVar19 != 0);
                                                            }
                                                            *(iVar21 + 0xe4) = uVar33;
                                                            *(iVar21 + 0xf0) = uVar7;
                                                            if (uVar7 != 0) {
                                                                iVar21 = uStack_120 * 0x18;
                                                                do {
                                                                    uVar19 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (ppuVar29, &uStack_f8, uVar9);
                                                            if ((uVar19 & 1) == 0) {
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            if (uVar3 <= uStack_f8) {
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x0001938f3d2c;
                                                            }
                                                            puVar22 = *(*param_2 + 0x760) + uVar33 * 0xc;
                                                            *puVar22 = 6;
                                                            puVar22[1] = *(iVar28 + uStack_f8 * 4);
                                                            uStack_fc = 0;
                                                            uVar19 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (ppuVar29, &uStack_fc, uVar4);
                                                            if (((uVar19 & 1) == 0) ||
                                                               (uVar19 = uStack_fc,  uVar20 = iVar30 - iVar16, 
                                                               uVar20 < uVar19 || uVar20 == uVar19))
                                                            goto code_r0x0001938f3d20;
                                                            iVar18 = *param_2;
                                                            *(*(iVar18 + 0x760) + uVar33 * 0xc + 8) = uStack_120;
                                                            *(*(iVar18 + 0x418) + iVar21) = iVar16 + uVar19;
                                                            uVar14 = 
                                                            geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                                      (uVar19, *(iVar18 + 0x378), *(iVar18 + 0x380));
                                                            *(*(*param_2 + 0x418) + iVar21 + 8) = uVar14;
                                                            uStack_120 = uStack_120 + 1;
                                                            uVar33 = uVar33 + 1;
                                                            iVar21 = iVar21 + 0x18;
                                                            uVar17 = uVar17 + -1;
                                                            } while (uVar17 != 0);
                                                            }
                                                            uStack_170 = uStack_170 + 1;
                                                            } while (uStack_170 != uVar5);
                                                            }
                                                            if (uVar33 != uVar1) {
                                                                uVar14 = **reloc.__stderrp;
                                                            }
                                                            else {
                                                                if (uStack_120 == *(*param_2 + 0x420))
                                                                goto code_r0x0001938f3b68;
                                                                uVar14 = **reloc.__stderrp;
                                                            }
                                                            }
                                                        }
                                                        goto code_r0x0001938f3d2c;
                                                    }
                                                }
code_r0x0001938f3d20:
                                                uVar14 = **reloc.__stderrp;
                                            }
                                            else {
                                                uVar14 = **reloc.__stderrp;
                                            }
                                        }
                                    }
                                    goto code_r0x0001938f3d2c;
                                }
                            }
                            uVar14 = **reloc.__stderrp;
                        }
                    }
                }
                goto code_r0x0001938f33b0;
            }
            iVar28 = 0;
code_r0x0001938f3b68:
            cStack_fd = '\0';
            uVar19 = BitstreamUnpackFlag(Bitstream*, bool*)(ppuVar29, &cStack_fd);
            if ((uVar19 & 1) == 0) {
                uVar14 = **reloc.__stderrp;
code_r0x0001938f3d2c:
                fprintf(uVar14, 0x8ff + 0x193b8a000);
                uVar14 = 0;
            }
            else {
                if (cStack_fd != '\0') {
                    uStack_90 = (uStack_90 >> 0x20) << 0x20;
                    uVar19 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                       (ppuVar29, *0x8 + -0x90, 5);
                    if ((uVar19 & 1) == 0) {
                        uVar14 = **reloc.__stderrp;
                    }
                    else {
                        uVar23 = uStack_90;
                        uStack_98 = (uStack_98 >> 0x20) << 0x20;
                        uVar19 = BitstreamUnpackSignedVar32(Bitstream*, int*)(ppuVar29, *0x8 + -0x98);
                        if ((uVar19 & 1) == 0) {
                            uVar14 = **reloc.__stderrp;
                        }
                        else {
                            uStack_c8 = 0;
                            iVar12 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                               (ppuVar29, auStack_d8 + 4, 8);
                            if ((iVar12 == 0) || (uVar25 = uStack_c8,  uStack_c8 == 0)) goto code_r0x0001938f3d20;
                            auStack_d8[3] = 0;
                            uVar19 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                               (ppuVar29, auStack_d8 + 3, 5);
                            if ((uVar19 & 1) == 0) {
                                uVar14 = **reloc.__stderrp;
                            }
                            else {
                                auStack_d8[2] = 0;
                                iVar12 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                   (ppuVar29, auStack_d8 + 2, 5);
                                uVar4 = auStack_d8[3];
                                uVar3 = auStack_d8[2];
                                if (iVar12 != 0) {
                                    iVar16 = *(*param_2 + 0x1f8);
                                    if (*(*param_2 + 0x200) != iVar16) {
                                        iVar30 = 0;
                                        uVar19 = 0;
                                        iVar12 = uStack_98;
                                        do {
                                            auStack_d8[0] = (auStack_d8[0] >> 8) << 8;
                                            uVar17 = BitstreamUnpackFlag(Bitstream*, bool*)(ppuVar29, auStack_d8);
                                            if ((uVar17 & 1) == 0) {
                                                uVar14 = **reloc.__stderrp;
                                                goto code_r0x0001938f3d2c;
                                            }
                                            uVar8 = auStack_d8[0];
                                            if (auStack_d8[0] != 0) {
                                                auStack_d8[1] = 0;
                                                iVar13 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                   (ppuVar29, auStack_d8 + 1, uVar4);
                                                if (iVar13 == 0) {
                                                    uVar14 = **reloc.__stderrp;
                                                    goto code_r0x0001938f3d2c;
                                                }
                                                uVar34 = NEON_ucvtf(auStack_d8[1]);
                                                uVar34 = NEON_fmadd(1.0 / uVar25, uVar34, iVar12);
                                                *(iVar16 + iVar30 + 0x88) = uVar34;
                                                *(iVar16 + iVar30 + 0xf4) = 1;
                                            }
                                            uStack_dc = (uStack_dc >> 8) << 8;
                                            uVar17 = BitstreamUnpackFlag(Bitstream*, bool*)(ppuVar29, &uStack_dc);
                                            if ((uVar17 & 1) == 0) {
                                                uVar14 = **reloc.__stderrp;
                                                goto code_r0x0001938f3d2c;
                                            }
                                            uVar32 = uStack_dc;
                                            if (uVar32 != 0) {
                                                auStack_d8[1] = 0;
                                                iVar13 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                   (ppuVar29, auStack_d8 + 1, uVar3);
                                                if (iVar13 == 0) {
                                                    uVar14 = **reloc.__stderrp;
                                                    goto code_r0x0001938f3d2c;
                                                }
                                                fVar35 = NEON_ucvtf(auStack_d8[1]);
                                                *(iVar16 + iVar30 + 0x8c) = (1.0 / uVar25) * fVar35;
                                                *(iVar16 + iVar30 + 0xf5) = 1;
                                            }
                                            uStack_e0 = (uStack_e0 >> 8) << 8;
                                            uVar17 = BitstreamUnpackFlag(Bitstream*, bool*)(ppuVar29, &uStack_e0);
                                            if ((uVar17 & 1) == 0) {
                                                uVar14 = **reloc.__stderrp;
                                                goto code_r0x0001938f3d2c;
                                            }
                                            uVar31 = uStack_e0;
                                            if (uVar31 != 0) {
                                                auStack_d8[1] = 0;
                                                iVar13 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                   (ppuVar29, auStack_d8 + 1, uVar23);
                                                if (iVar13 == 0) {
                                                    uVar14 = **reloc.__stderrp;
                                                    goto code_r0x0001938f3d2c;
                                                }
                                                fVar35 = NEON_ucvtf(auStack_d8[1]);
                                                *(iVar16 + iVar30 + 0x90) = fVar35 * (1.0 / ~(-1L << (uVar23 & 0x3f)));
                                                *(iVar16 + iVar30 + 0xf6) = 1;
                                            }
                                            *(iVar16 + iVar30 + 0xf7) = (uVar8 | uVar32 | uVar31) != 0;
                                            uVar19 = uVar19 + 1;
                                            iVar16 = *(*param_2 + 0x1f8);
                                            iVar30 = iVar30 + 0x100;
                                        } while (uVar19 < *(*param_2 + 0x200) - iVar16 >> 8);
                                    }
                                    goto code_r0x0001938f3ea4;
                                }
                                uVar14 = **reloc.__stderrp;
                            }
                        }
                    }
                    goto code_r0x0001938f3d2c;
                }
code_r0x0001938f3ea4:
                iVar16 = *(pcVar27 + 0x30) + (*(pcVar27 + 0x18) >> 3);
                if ((*(pcVar27 + 0x18) & 7) != 0) {
                    iVar16 = iVar16 + 1;
                }
                *(pcVar27 + 0x30) = iVar16;
                pcVar27[0x20] = '\0';
                uVar14 = 1;
            }
            goto code_r0x0001938f33d0;
        }
code_r0x0001938f3564:
        uVar14 = 1;
        iVar28 = 0x3be + 0x193b8a000;
        iVar30 = iStack_b0;
        iVar16 = std::__1::chrono::steady_clock::now()();
        uStack_98 = iVar28;
        if (iVar28 == 0) goto code_r0x0001938f35ec;
    }
    iVar28 = iStack_a0;
    uStack_90 = *0x8 + -0x98;
    iVar30 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iVar30 + 0x778, *0x8 + -0x98, 0x74c + 0x193af9000, *0x8 + -0x90, auStack_d8 + 4);
    iVar28 = SUB168(SEXT816(iVar16 - iVar28) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar30 + 0x20) = ((iVar28 >> 7) - (iVar28 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x0001938f35ec:
    piVar15 = piStack_a8;
    if (piVar15 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_a8[1];
        iVar28 = tmp_ldXn;
        tmp_stXn = iVar28 + -1;
        iVar28 = tmp_stXn;
        piStack_a8[1] = iVar28;
        iVar28 = tmp_ldXn;
        LORelease();
        if (iVar28 == 0) {
            (**(*piVar15 + 0x10))(piVar15);
            std::__1::__shared_weak_count::__release_weak()(piVar15);
        }
    }
    return uVar14;
}
