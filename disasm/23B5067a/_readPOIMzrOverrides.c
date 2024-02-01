
uint32_t geo::codec::_readPOIMzrOverrides(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    uint32_t uVar1;
    int32_t iVar2;
    char *pcVar3;
    ulong uVar4;
    uchar (*pauVar5) [16];
    uint16_t *puVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint *puVar11;
    float *pfVar12;
    char *pcVar13;
    uint16_t *puVar14;
    ulong *puVar15;
    uint uVar16;
    uchar (*pauVar19) [16];
    uint32_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    int64_t iVar23;
    float fVar24;
    uint64_t uVar25;
    uchar auVar26 [16];
    int32_t aiStack_bc [3];
    uchar *apuStack_b0 [4];
    uint32_t auStack_90 [4];
    uint uStack_80;
    uint32_t uStack_7c;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t *piStack_68;
    int64_t iStack_60;
    ulong uStack_58;
    uint uVar17;
    uint uVar18;
    
    uVar10 = param_1[1];
    if (uVar10 != 0) {
        uVar9 = 0;
        do {
            if (*(*param_1 + uVar9 * 0x10) == 0x97) {
                pcVar3 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar9, 0x97, *param_2 + 0x778);
                if ((pcVar3 != NULL) && (1 < *(pcVar3 + 0x40))) {
                    iStack_78 = 0x51c + 0x193b8a000;
                    iStack_70 = *param_2;
                    piStack_68 = param_2[1];
                    if (piStack_68 != NULL) {
                        tmp_ldXn = piStack_68[1];
                        iVar23 = tmp_ldXn;
                        tmp_stXn = iVar23 + 1;
                        iVar23 = tmp_stXn;
                        piStack_68[1] = iVar23;
                        uVar4 = tmp_ldXn;
                    }
                    iStack_60 = std::__1::chrono::steady_clock::now()();
                    uStack_58._0_4_ = 0;
                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, *0x8 + -0x58);
                    if ((uVar10 & 1) == 0) {
                        uVar4 = **reloc.__stderrp;
                        goto code_r0x00019390d144;
                    }
                    uStack_7c = 0;
                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, auStack_90 + 5);
                    if ((uVar10 & 1) == 0) {
                        uVar4 = **reloc.__stderrp;
                        goto code_r0x00019390d144;
                    }
                    auStack_90[3] = 0;
                    uStack_80 = 0;
                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, auStack_90 + 4);
                    if ((uVar10 & 1) == 0) {
                        uVar4 = **reloc.__stderrp;
                        goto code_r0x00019390d144;
                    }
                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, auStack_90 + 3);
                    if ((uVar10 & 1) == 0) {
                        uVar4 = **reloc.__stderrp;
                        goto code_r0x00019390d144;
                    }
                    auStack_90[2] = 0;
                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, auStack_90 + 2);
                    if ((uVar10 & 1) == 0) {
                        uVar4 = **reloc.__stderrp;
                        goto code_r0x00019390d144;
                    }
                    if (auStack_90[2] == 0) goto code_r0x00019390ca88;
                    auStack_90[0] = 0;
                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, auStack_90);
                    if ((uVar10 & 1) == 0) {
                        uVar4 = **reloc.__stderrp;
                        goto code_r0x00019390d144;
                    }
                    uVar20 = auStack_90[0];
                    iVar23 = *(pcVar3 + 0x30);
                    uVar10 = iVar23 + uVar20;
                    if (*(pcVar3 + 0x38) <= uVar10 && uVar10 != *(pcVar3 + 0x38)) {
                        uVar4 = **reloc.__stderrp;
                        goto code_r0x00019390d144;
                    }
                    iVar8 = *(pcVar3 + 0x28);
                    *(pcVar3 + 0x30) = uVar10;
                    uVar1 = uStack_7c;
                    if (uVar1 == 0) {
                        pauVar5 = NULL;
                    }
                    else {
                        pauVar5 = operator new(unsigned long)(uVar1);
                        bzero(pauVar5, uVar1);
                    }
                    apuStack_b0[1] = NULL;
                    apuStack_b0[0] = NULL;
                    apuStack_b0[3] = NULL;
                    apuStack_b0[2] = NULL;
                    iVar2 = mgcl::ints::IntDecompressor<bool>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, bool*)
                                      (apuStack_b0, iVar8 + iVar23, uVar20, uStack_80, auStack_90[3], uVar1, pauVar5);
                    if (iVar2 == 0) {
                        uVar10 = uStack_7c;
                        iVar23 = *(*param_2 + 0x1f8);
                        if (uVar10 == *(*param_2 + 0x200) - iVar23 >> 8) {
                            if (uStack_7c == 0) {
                                iVar2 = 0;
                                mgcl::ints::IntDecompressor<bool>::~IntDecompressor()(apuStack_b0);
                                if (pauVar5 == NULL) goto code_r0x00019390ca78;
                                goto code_r0x00019390ca70;
                            }
                            if ((uStack_7c < 8) ||
                               ((iVar23 + 0xd0U < *pauVar5 + uVar10 && (pauVar5 < iVar23 + uVar10 * 0x100 + -0x2c)))) {
                                uVar9 = 0;
                                goto code_r0x00019390ca00;
                            }
                            if (0xf < uStack_7c) {
                                iVar8 = 0;
                                uVar9 = uVar10 & 0xfffffff0;
                                pauVar19 = pauVar5;
                                goto code_r0x00019390cde8;
                            }
                            uVar25 = 0;
                            goto code_r0x00019390cf7c;
                        }
                    }
                    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                    iVar2 = 6;
                    mgcl::ints::IntDecompressor<bool>::~IntDecompressor()(apuStack_b0);
                    if (pauVar5 == NULL) goto code_r0x00019390ca78;
                    goto code_r0x00019390ca70;
                }
                break;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar10 && uVar10 != uVar9);
    }
    uVar20 = 1;
    goto code_r0x00019390c7f4;
code_r0x00019390cde8:
    do {
        auVar26 = NEON_cmtst(*pauVar19, *pauVar19, 1);
        uVar16 = 0x42c80000;
        uVar17 = 0x42c80000;
        uVar18 = 0x42c80000;
        if ((auVar26 & 0x1) == 0x0) {
            if ((auVar26 & 0x100) == 0x0) goto code_r0x00019390ce08;
code_r0x00019390cebc:
            *(iVar23 + iVar8 + 0x1d0) = uVar16;
            if ((auVar26 & 0x10000) != 0x0) goto code_r0x00019390ce10;
code_r0x00019390cecc:
            if ((auVar26 & 0x1000000) == 0x0) goto code_r0x00019390ce20;
code_r0x00019390ced4:
            *(iVar23 + iVar8 + 0x3d0) = uVar16;
            if ((auVar26 & 0x100000000) != 0x0) goto code_r0x00019390ce28;
code_r0x00019390cee4:
            if ((auVar26 & 0x10000000000) == 0x0) goto code_r0x00019390ce38;
code_r0x00019390ceec:
            *(iVar23 + iVar8 + 0x5d0) = uVar17;
            if ((auVar26 & 0x1000000000000) != 0x0) goto code_r0x00019390ce40;
code_r0x00019390cefc:
            if ((auVar26 & 0x100000000000000) == 0x0) goto code_r0x00019390ce50;
code_r0x00019390cf04:
            *(iVar23 + iVar8 + 2000) = uVar17;
            if ((auVar26 & 0x1) != 0x0) goto code_r0x00019390ce58;
code_r0x00019390cf14:
            if ((auVar26 & 0x100) == 0x0) goto code_r0x00019390ce68;
code_r0x00019390cf1c:
            *(iVar23 + iVar8 + 0x9d0) = uVar17;
            if ((auVar26 & 0x10000) != 0x0) goto code_r0x00019390ce70;
code_r0x00019390cf2c:
            if ((auVar26 & 0x1000000) == 0x0) goto code_r0x00019390ce80;
code_r0x00019390cf34:
            *(iVar23 + iVar8 + 0xbd0) = uVar17;
            if ((auVar26 & 0x100000000) != 0x0) goto code_r0x00019390ce88;
code_r0x00019390cf44:
            if ((auVar26 & 0x10000000000) == 0x0) goto code_r0x00019390ce98;
code_r0x00019390cf4c:
            *(iVar23 + iVar8 + 0xdd0) = uVar18;
            if ((auVar26 & 0x1000000000000) != 0x0) goto code_r0x00019390cea0;
code_r0x00019390cf5c:
            if ((auVar26 & 0x100000000000000) != 0x0) goto code_r0x00019390cf64;
        }
        else {
            *(iVar23 + iVar8 + 0xd0) = uVar16;
            if ((auVar26 & 0x100) != 0x0) goto code_r0x00019390cebc;
code_r0x00019390ce08:
            if ((auVar26 & 0x10000) == 0x0) goto code_r0x00019390cecc;
code_r0x00019390ce10:
            *(iVar23 + iVar8 + 0x2d0) = uVar16;
            if ((auVar26 & 0x1000000) != 0x0) goto code_r0x00019390ced4;
code_r0x00019390ce20:
            if ((auVar26 & 0x100000000) == 0x0) goto code_r0x00019390cee4;
code_r0x00019390ce28:
            *(iVar23 + iVar8 + 0x4d0) = uVar17;
            if ((auVar26 & 0x10000000000) != 0x0) goto code_r0x00019390ceec;
code_r0x00019390ce38:
            if ((auVar26 & 0x1000000000000) == 0x0) goto code_r0x00019390cefc;
code_r0x00019390ce40:
            *(iVar23 + iVar8 + 0x6d0) = uVar17;
            if ((auVar26 & 0x100000000000000) != 0x0) goto code_r0x00019390cf04;
code_r0x00019390ce50:
            if ((auVar26 & 0x1) == 0x0) goto code_r0x00019390cf14;
code_r0x00019390ce58:
            *(iVar23 + iVar8 + 0x8d0) = uVar17;
            if ((auVar26 & 0x100) != 0x0) goto code_r0x00019390cf1c;
code_r0x00019390ce68:
            if ((auVar26 & 0x10000) == 0x0) goto code_r0x00019390cf2c;
code_r0x00019390ce70:
            *(iVar23 + iVar8 + 0xad0) = uVar17;
            if ((auVar26 & 0x1000000) != 0x0) goto code_r0x00019390cf34;
code_r0x00019390ce80:
            if ((auVar26 & 0x100000000) == 0x0) goto code_r0x00019390cf44;
code_r0x00019390ce88:
            *(iVar23 + iVar8 + 0xcd0) = uVar18;
            if ((auVar26 & 0x10000000000) != 0x0) goto code_r0x00019390cf4c;
code_r0x00019390ce98:
            if ((auVar26 & 0x1000000000000) == 0x0) goto code_r0x00019390cf5c;
code_r0x00019390cea0:
            *(iVar23 + iVar8 + 0xed0) = uVar18;
            if ((auVar26 & 0x100000000000000) != 0x0) {
code_r0x00019390cf64:
                *(iVar23 + iVar8 + 0xfd0) = uVar18;
            }
        }
        iVar8 = iVar8 + 0x1000;
        pauVar19 = pauVar19[1];
    } while ((uVar10 & 0xfffffff0) * 0x100 - iVar8 != 0);
    if (uVar9 != uVar10) {
        uVar25 = uVar9;
        if ((uStack_7c >> 3 & 1) != 0) {
code_r0x00019390cf7c:
            uVar9 = uVar10 & 0xfffffff8;
            iVar8 = uVar25 - uVar9;
            puVar15 = *pauVar5 + uVar25;
            puVar11 = iVar23 + uVar25 * 0x100 + 2000;
            do {
                uVar25 = NEON_cmtst(*puVar15, *puVar15, 1);
                uVar16 = 0x42c80000;
                uVar17 = 0x42c80000;
                if ((uVar25 & 1) == 0) {
                    if ((uVar25 & 0x100) == 0) goto code_r0x00019390cfcc;
code_r0x00019390d01c:
                    *(puVar11 + -0x600) = uVar16;
                    if ((uVar25 & 0x10000) != 0) goto code_r0x00019390cfd4;
code_r0x00019390d02c:
                    if ((uVar25 & 0x1000000) == 0) goto code_r0x00019390cfe4;
code_r0x00019390d034:
                    *(puVar11 + -0x400) = uVar16;
                    if ((uVar25 & 0x100000000) != 0) goto code_r0x00019390cfec;
code_r0x00019390d044:
                    if ((uVar25 & 0x10000000000) == 0) goto code_r0x00019390cffc;
code_r0x00019390d04c:
                    *(puVar11 + -0x200) = uVar17;
                    if ((uVar25 & 0x1000000000000) != 0) goto code_r0x00019390d004;
code_r0x00019390d05c:
                    if ((uVar25 & 0x100000000000000) != 0) goto code_r0x00019390d064;
                }
                else {
                    *(puVar11 + -0x700) = uVar16;
                    if ((uVar25 & 0x100) != 0) goto code_r0x00019390d01c;
code_r0x00019390cfcc:
                    if ((uVar25 & 0x10000) == 0) goto code_r0x00019390d02c;
code_r0x00019390cfd4:
                    *(puVar11 + -0x500) = uVar16;
                    if ((uVar25 & 0x1000000) != 0) goto code_r0x00019390d034;
code_r0x00019390cfe4:
                    if ((uVar25 & 0x100000000) == 0) goto code_r0x00019390d044;
code_r0x00019390cfec:
                    *(puVar11 + -0x300) = uVar17;
                    if ((uVar25 & 0x10000000000) != 0) goto code_r0x00019390d04c;
code_r0x00019390cffc:
                    if ((uVar25 & 0x1000000000000) == 0) goto code_r0x00019390d05c;
code_r0x00019390d004:
                    puVar11[-0x40] = uVar17;
                    if ((uVar25 & 0x100000000000000) != 0) {
code_r0x00019390d064:
                        *puVar11 = uVar17;
                    }
                }
                puVar15 = puVar15 + 1;
                puVar11 = puVar11 + 0x200;
                iVar8 = iVar8 + 8;
            } while (iVar8 != 0);
            if (uVar9 == uVar10) goto code_r0x00019390d074;
        }
code_r0x00019390ca00:
        puVar11 = iVar23 + uVar9 * 0x100 + 0xd0;
        iVar23 = uVar10 - uVar9;
        pcVar13 = *pauVar5 + uVar9;
        do {
            if (*pcVar13 != '\0') {
                *puVar11 = 0x42c80000;
            }
            puVar11 = puVar11 + 0x40;
            pcVar13 = pcVar13 + 1;
            iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
    }
code_r0x00019390d074:
    mgcl::ints::IntDecompressor<bool>::~IntDecompressor()(apuStack_b0);
    iVar2 = 0;
code_r0x00019390ca70:
    operator delete(void*)(pauVar5);
code_r0x00019390ca78:
    if (iVar2 == 0) {
code_r0x00019390ca88:
        aiStack_bc[2] = 0;
        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, aiStack_bc + 2);
        if ((uVar10 & 1) == 0) {
            uVar4 = **reloc.__stderrp;
            goto code_r0x00019390d144;
        }
        if (aiStack_bc[2] != 0) {
            auStack_90[0] = 0;
            uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, auStack_90);
            if ((uVar10 & 1) == 0) {
                uVar4 = **reloc.__stderrp;
            }
            else {
                uVar20 = auStack_90[0];
                iVar23 = *(pcVar3 + 0x30);
                uVar10 = iVar23 + uVar20;
                if (uVar10 < *(pcVar3 + 0x38) || uVar10 == *(pcVar3 + 0x38)) {
                    iVar8 = *(pcVar3 + 0x28);
                    *(pcVar3 + 0x30) = uVar10;
                    uVar1 = uStack_7c;
                    if (uVar1 == 0) {
                        puVar6 = NULL;
                    }
                    else {
                        iVar21 = uVar1 << 1;
                        puVar6 = operator new(unsigned long)(iVar21);
                        bzero(puVar6, iVar21);
                    }
                    apuStack_b0[1] = NULL;
                    apuStack_b0[0] = NULL;
                    apuStack_b0[3] = NULL;
                    apuStack_b0[2] = NULL;
                    iVar2 = mgcl::ints::IntDecompressor<unsigned short>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, unsigned short*)
                                      (apuStack_b0, iVar8 + iVar23, uVar20, uStack_80, auStack_90[3], uVar1, puVar6);
                    if (iVar2 == 0) {
                        uVar10 = uStack_7c;
                        iVar23 = *(*param_2 + 0x1f8);
                        if (uVar10 != *(*param_2 + 0x200) - iVar23 >> 8) goto code_r0x00019390cbfc;
                        if (uStack_7c != 0) {
                            fVar24 = NEON_ucvtf(uStack_58);
                            pfVar12 = iVar23 + 0xd0;
                            puVar14 = puVar6;
                            do {
                                if ((*pfVar12 != 100.0) && (*puVar14 != 0)) {
                                    *pfVar12 = *puVar14 * (1.0 / fVar24);
                                }
                                pfVar12 = pfVar12 + 0x40;
                                puVar14 = puVar14 + 1;
                                uVar10 = uVar10 + -1;
                            } while (uVar10 != 0);
                        }
                        iVar2 = 0;
                        mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(apuStack_b0);
                        if (puVar6 != NULL) goto code_r0x00019390cc30;
                    }
                    else {
code_r0x00019390cbfc:
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        iVar2 = 6;
                        mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(apuStack_b0);
                        if (puVar6 != NULL) {
code_r0x00019390cc30:
                            operator delete(void*)(puVar6);
                        }
                    }
                    if (iVar2 != 0) goto code_r0x00019390ca7c;
                    goto code_r0x00019390cc3c;
                }
                uVar4 = **reloc.__stderrp;
            }
code_r0x00019390d144:
            fprintf(uVar4, 0x8ff + 0x193b8a000);
            goto code_r0x00019390d15c;
        }
code_r0x00019390cc3c:
        aiStack_bc[1] = 0;
        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, aiStack_bc + 1);
        if ((uVar10 & 1) == 0) {
            uVar4 = **reloc.__stderrp;
            goto code_r0x00019390d144;
        }
        if (aiStack_bc[1] != 0) {
            auStack_90[0] = 0;
            uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, auStack_90);
            if ((uVar10 & 1) == 0) {
                uVar4 = **reloc.__stderrp;
            }
            else {
                uVar20 = auStack_90[0];
                iVar23 = *(pcVar3 + 0x30);
                uVar10 = iVar23 + uVar20;
                if (uVar10 < *(pcVar3 + 0x38) || uVar10 == *(pcVar3 + 0x38)) {
                    iVar8 = *(pcVar3 + 0x28);
                    *(pcVar3 + 0x30) = uVar10;
                    uVar1 = uStack_7c;
                    if (uVar1 == 0) {
                        pauVar5 = NULL;
                    }
                    else {
                        pauVar5 = operator new(unsigned long)(uVar1);
                        bzero(pauVar5, uVar1);
                    }
                    apuStack_b0[1] = NULL;
                    apuStack_b0[0] = NULL;
                    apuStack_b0[3] = NULL;
                    apuStack_b0[2] = NULL;
                    iVar2 = mgcl::ints::IntDecompressor<bool>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, bool*)
                                      (apuStack_b0, iVar8 + iVar23, uVar20, uStack_80, auStack_90[3], uVar1, pauVar5);
                    if (iVar2 == 0) {
                        uVar10 = uStack_7c;
                        iVar23 = *(*param_2 + 0x1f8);
                        if (uVar10 != *(*param_2 + 0x200) - iVar23 >> 8) goto code_r0x00019390d088;
                        if (uStack_7c != 0) {
                            if ((uStack_7c < 8) ||
                               ((iVar23 + 0xd4U < *pauVar5 + uVar10 && (pauVar5 < iVar23 + uVar10 * 0x100 + -0x28)))) {
                                uVar9 = 0;
code_r0x00019390cd84:
                                puVar11 = iVar23 + uVar9 * 0x100 + 0xd4;
                                iVar23 = uVar10 - uVar9;
                                pcVar13 = *pauVar5 + uVar9;
                                do {
                                    if (*pcVar13 != '\0') {
                                        *puVar11 = 0x42c80000;
                                    }
                                    puVar11 = puVar11 + 0x40;
                                    pcVar13 = pcVar13 + 1;
                                    iVar23 = iVar23 + -1;
                                } while (iVar23 != 0);
                            }
                            else if (uStack_7c < 0x10) {
                                uVar25 = 0;
code_r0x00019390d3ec:
                                uVar9 = uVar10 & 0xfffffff8;
                                iVar8 = uVar25 - uVar9;
                                puVar15 = *pauVar5 + uVar25;
                                puVar11 = iVar23 + uVar25 * 0x100 + 0x7d4;
                                do {
                                    uVar25 = NEON_cmtst(*puVar15, *puVar15, 1);
                                    uVar16 = 0x42c80000;
                                    uVar17 = 0x42c80000;
                                    if ((uVar25 & 1) == 0) {
                                        if ((uVar25 & 0x100) == 0) goto code_r0x00019390d43c;
code_r0x00019390d48c:
                                        *(puVar11 + -0x600) = uVar16;
                                        if ((uVar25 & 0x10000) != 0) goto code_r0x00019390d444;
code_r0x00019390d49c:
                                        if ((uVar25 & 0x1000000) == 0) goto code_r0x00019390d454;
code_r0x00019390d4a4:
                                        *(puVar11 + -0x400) = uVar16;
                                        if ((uVar25 & 0x100000000) != 0) goto code_r0x00019390d45c;
code_r0x00019390d4b4:
                                        if ((uVar25 & 0x10000000000) == 0) goto code_r0x00019390d46c;
code_r0x00019390d4bc:
                                        *(puVar11 + -0x200) = uVar17;
                                        if ((uVar25 & 0x1000000000000) != 0) goto code_r0x00019390d474;
code_r0x00019390d4cc:
                                        if ((uVar25 & 0x100000000000000) != 0) goto code_r0x00019390d4d4;
                                    }
                                    else {
                                        *(puVar11 + -0x700) = uVar16;
                                        if ((uVar25 & 0x100) != 0) goto code_r0x00019390d48c;
code_r0x00019390d43c:
                                        if ((uVar25 & 0x10000) == 0) goto code_r0x00019390d49c;
code_r0x00019390d444:
                                        *(puVar11 + -0x500) = uVar16;
                                        if ((uVar25 & 0x1000000) != 0) goto code_r0x00019390d4a4;
code_r0x00019390d454:
                                        if ((uVar25 & 0x100000000) == 0) goto code_r0x00019390d4b4;
code_r0x00019390d45c:
                                        *(puVar11 + -0x300) = uVar17;
                                        if ((uVar25 & 0x10000000000) != 0) goto code_r0x00019390d4bc;
code_r0x00019390d46c:
                                        if ((uVar25 & 0x1000000000000) == 0) goto code_r0x00019390d4cc;
code_r0x00019390d474:
                                        puVar11[-0x40] = uVar17;
                                        if ((uVar25 & 0x100000000000000) != 0) {
code_r0x00019390d4d4:
                                            *puVar11 = uVar17;
                                        }
                                    }
                                    puVar15 = puVar15 + 1;
                                    puVar11 = puVar11 + 0x200;
                                    iVar8 = iVar8 + 8;
                                } while (iVar8 != 0);
                                if (uVar9 != uVar10) goto code_r0x00019390cd84;
                            }
                            else {
                                iVar8 = 0;
                                uVar9 = uVar10 & 0xfffffff0;
                                pauVar19 = pauVar5;
                                do {
                                    auVar26 = NEON_cmtst(*pauVar19, *pauVar19, 1);
                                    uVar16 = 0x42c80000;
                                    uVar17 = 0x42c80000;
                                    uVar18 = 0x42c80000;
                                    if ((auVar26 & 0x1) == 0x0) {
                                        if ((auVar26 & 0x100) == 0x0) goto code_r0x00019390d534;
code_r0x00019390d5e8:
                                        *(iVar23 + iVar8 + 0x1d4) = uVar16;
                                        if ((auVar26 & 0x10000) != 0x0) goto code_r0x00019390d53c;
code_r0x00019390d5f8:
                                        if ((auVar26 & 0x1000000) == 0x0) goto code_r0x00019390d54c;
code_r0x00019390d600:
                                        *(iVar23 + iVar8 + 0x3d4) = uVar16;
                                        if ((auVar26 & 0x100000000) != 0x0) goto code_r0x00019390d554;
code_r0x00019390d610:
                                        if ((auVar26 & 0x10000000000) == 0x0) goto code_r0x00019390d564;
code_r0x00019390d618:
                                        *(iVar23 + iVar8 + 0x5d4) = uVar17;
                                        if ((auVar26 & 0x1000000000000) != 0x0) goto code_r0x00019390d56c;
code_r0x00019390d628:
                                        if ((auVar26 & 0x100000000000000) == 0x0) goto code_r0x00019390d57c;
code_r0x00019390d630:
                                        *(iVar23 + iVar8 + 0x7d4) = uVar17;
                                        if ((auVar26 & 0x1) != 0x0) goto code_r0x00019390d584;
code_r0x00019390d640:
                                        if ((auVar26 & 0x100) == 0x0) goto code_r0x00019390d594;
code_r0x00019390d648:
                                        *(iVar23 + iVar8 + 0x9d4) = uVar17;
                                        if ((auVar26 & 0x10000) != 0x0) goto code_r0x00019390d59c;
code_r0x00019390d658:
                                        if ((auVar26 & 0x1000000) == 0x0) goto code_r0x00019390d5ac;
code_r0x00019390d660:
                                        *(iVar23 + iVar8 + 0xbd4) = uVar17;
                                        if ((auVar26 & 0x100000000) != 0x0) goto code_r0x00019390d5b4;
code_r0x00019390d670:
                                        if ((auVar26 & 0x10000000000) == 0x0) goto code_r0x00019390d5c4;
code_r0x00019390d678:
                                        *(iVar23 + iVar8 + 0xdd4) = uVar18;
                                        if ((auVar26 & 0x1000000000000) != 0x0) goto code_r0x00019390d5cc;
code_r0x00019390d688:
                                        if ((auVar26 & 0x100000000000000) != 0x0) goto code_r0x00019390d690;
                                    }
                                    else {
                                        *(iVar23 + iVar8 + 0xd4) = uVar16;
                                        if ((auVar26 & 0x100) != 0x0) goto code_r0x00019390d5e8;
code_r0x00019390d534:
                                        if ((auVar26 & 0x10000) == 0x0) goto code_r0x00019390d5f8;
code_r0x00019390d53c:
                                        *(iVar23 + iVar8 + 0x2d4) = uVar16;
                                        if ((auVar26 & 0x1000000) != 0x0) goto code_r0x00019390d600;
code_r0x00019390d54c:
                                        if ((auVar26 & 0x100000000) == 0x0) goto code_r0x00019390d610;
code_r0x00019390d554:
                                        *(iVar23 + iVar8 + 0x4d4) = uVar17;
                                        if ((auVar26 & 0x10000000000) != 0x0) goto code_r0x00019390d618;
code_r0x00019390d564:
                                        if ((auVar26 & 0x1000000000000) == 0x0) goto code_r0x00019390d628;
code_r0x00019390d56c:
                                        *(iVar23 + iVar8 + 0x6d4) = uVar17;
                                        if ((auVar26 & 0x100000000000000) != 0x0) goto code_r0x00019390d630;
code_r0x00019390d57c:
                                        if ((auVar26 & 0x1) == 0x0) goto code_r0x00019390d640;
code_r0x00019390d584:
                                        *(iVar23 + iVar8 + 0x8d4) = uVar17;
                                        if ((auVar26 & 0x100) != 0x0) goto code_r0x00019390d648;
code_r0x00019390d594:
                                        if ((auVar26 & 0x10000) == 0x0) goto code_r0x00019390d658;
code_r0x00019390d59c:
                                        *(iVar23 + iVar8 + 0xad4) = uVar17;
                                        if ((auVar26 & 0x1000000) != 0x0) goto code_r0x00019390d660;
code_r0x00019390d5ac:
                                        if ((auVar26 & 0x100000000) == 0x0) goto code_r0x00019390d670;
code_r0x00019390d5b4:
                                        *(iVar23 + iVar8 + 0xcd4) = uVar18;
                                        if ((auVar26 & 0x10000000000) != 0x0) goto code_r0x00019390d678;
code_r0x00019390d5c4:
                                        if ((auVar26 & 0x1000000000000) == 0x0) goto code_r0x00019390d688;
code_r0x00019390d5cc:
                                        *(iVar23 + iVar8 + 0xed4) = uVar18;
                                        if ((auVar26 & 0x100000000000000) != 0x0) {
code_r0x00019390d690:
                                            *(iVar23 + iVar8 + 0xfd4) = uVar18;
                                        }
                                    }
                                    iVar8 = iVar8 + 0x1000;
                                    pauVar19 = pauVar19[1];
                                } while ((uVar10 & 0xfffffff0) * 0x100 - iVar8 != 0);
                                if (uVar9 != uVar10) {
                                    uVar25 = uVar9;
                                    if ((uStack_7c >> 3 & 1) == 0) goto code_r0x00019390cd84;
                                    goto code_r0x00019390d3ec;
                                }
                            }
                            mgcl::ints::IntDecompressor<bool>::~IntDecompressor()(apuStack_b0);
                            iVar2 = 0;
                            goto code_r0x00019390d0bc;
                        }
                        iVar2 = 0;
                        mgcl::ints::IntDecompressor<bool>::~IntDecompressor()(apuStack_b0);
                        if (pauVar5 != NULL) goto code_r0x00019390d0bc;
                    }
                    else {
code_r0x00019390d088:
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        iVar2 = 6;
                        mgcl::ints::IntDecompressor<bool>::~IntDecompressor()(apuStack_b0);
                        if (pauVar5 != NULL) {
code_r0x00019390d0bc:
                            operator delete(void*)(pauVar5);
                        }
                    }
                    if (iVar2 != 0) goto code_r0x00019390ca7c;
                    goto code_r0x00019390d0c8;
                }
                uVar4 = **reloc.__stderrp;
            }
            goto code_r0x00019390d144;
        }
code_r0x00019390d0c8:
        aiStack_bc[0] = 0;
        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, aiStack_bc);
        if ((uVar10 & 1) == 0) {
            uVar4 = **reloc.__stderrp;
            goto code_r0x00019390d144;
        }
        if (aiStack_bc[0] != 0) {
            auStack_90[0] = 0;
            uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, auStack_90);
            if ((uVar10 & 1) == 0) {
                uVar4 = **reloc.__stderrp;
            }
            else {
                uVar20 = auStack_90[0];
                iVar23 = *(pcVar3 + 0x30);
                uVar10 = iVar23 + uVar20;
                if (uVar10 < *(pcVar3 + 0x38) || uVar10 == *(pcVar3 + 0x38)) {
                    iVar8 = *(pcVar3 + 0x28);
                    *(pcVar3 + 0x30) = uVar10;
                    uVar1 = uStack_7c;
                    if (uVar1 == 0) {
                        puVar6 = NULL;
                    }
                    else {
                        iVar21 = uVar1 << 1;
                        puVar6 = operator new(unsigned long)(iVar21);
                        bzero(puVar6, iVar21);
                    }
                    apuStack_b0[1] = NULL;
                    apuStack_b0[0] = NULL;
                    apuStack_b0[3] = NULL;
                    apuStack_b0[2] = NULL;
                    iVar2 = mgcl::ints::IntDecompressor<unsigned short>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, unsigned short*)
                                      (apuStack_b0, iVar8 + iVar23, uVar20, uStack_80, auStack_90[3], uVar1, puVar6);
                    if (iVar2 == 0) {
                        uVar10 = uStack_7c;
                        iVar23 = *(*param_2 + 0x1f8);
                        if (uVar10 != *(*param_2 + 0x200) - iVar23 >> 8) goto code_r0x00019390d37c;
                        if (uStack_7c != 0) {
                            fVar24 = NEON_ucvtf(uStack_58);
                            pfVar12 = iVar23 + 0xd4;
                            puVar14 = puVar6;
                            do {
                                if ((*pfVar12 != 100.0) && (*puVar14 != 0)) {
                                    *pfVar12 = *puVar14 * (1.0 / fVar24);
                                }
                                pfVar12 = pfVar12 + 0x40;
                                puVar14 = puVar14 + 1;
                                uVar10 = uVar10 + -1;
                            } while (uVar10 != 0);
                        }
                        iVar2 = 0;
                        mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(apuStack_b0);
                        if (puVar6 != NULL) goto code_r0x00019390d3b0;
                    }
                    else {
code_r0x00019390d37c:
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        iVar2 = 6;
                        mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(apuStack_b0);
                        if (puVar6 != NULL) {
code_r0x00019390d3b0:
                            operator delete(void*)(puVar6);
                        }
                    }
                    if (iVar2 != 0) goto code_r0x00019390ca7c;
                    goto code_r0x00019390d3bc;
                }
                uVar4 = **reloc.__stderrp;
            }
            goto code_r0x00019390d144;
        }
code_r0x00019390d3bc:
        param_2 = 0x1;
        if (*pcVar3 != '\0') goto code_r0x00019390d168;
code_r0x00019390d198:
        piVar7 = geo::codec::Allocator::instance()();
        (**(*piVar7 + 0x28))(piVar7, pcVar3, 0);
    }
    else {
code_r0x00019390ca7c:
        if (iVar2 == 6) {
code_r0x00019390d15c:
            param_2 = NULL;
            if (*pcVar3 != '\0') {
code_r0x00019390d168:
                piVar7 = geo::codec::Allocator::instance()();
                (**(*piVar7 + 0x28))(piVar7, *(pcVar3 + 0x28), 0);
            }
            goto code_r0x00019390d198;
        }
    }
    iVar23 = iStack_78;
    uVar20 = param_2;
    iVar22 = iStack_70;
    iVar8 = std::__1::chrono::steady_clock::now()();
    iVar21 = iStack_60;
    uStack_58 = iVar23;
    if (iVar23 != 0) {
        apuStack_b0[0] = *0x8 + -0x58;
        iVar23 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar22 + 0x778, *0x8 + -0x58, 0x74c + 0x193af9000, apuStack_b0, auStack_90);
        iVar8 = SUB168(SEXT816(iVar8 - iVar21) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar23 + 0x20) = ((iVar8 >> 7) - (iVar8 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar7 = piStack_68;
    if (piVar7 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_68[1];
        iVar23 = tmp_ldXn;
        tmp_stXn = iVar23 + -1;
        iVar23 = tmp_stXn;
        piStack_68[1] = iVar23;
        iVar23 = tmp_ldXn;
        LORelease();
        if (iVar23 == 0) {
            (**(*piVar7 + 0x10))(piVar7);
            std::__1::__shared_weak_count::__release_weak()(piVar7);
        }
    }
code_r0x00019390c7f4:
    return uVar20 & 1;
}
