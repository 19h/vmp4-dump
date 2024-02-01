
ulong geo::codec::_readLabels(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uchar uVar1;
    uint8_t uVar2;
    uchar uVar3;
    uchar uVar4;
    uchar uVar5;
    char cVar6;
    bool bVar7;
    bool bVar8;
    int32_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    char *pcVar24;
    int64_t iVar25;
    char *pcVar26;
    int64_t iVar27;
    uchar *puVar28;
    char *pcVar29;
    char *pcVar30;
    uint32_t uVar31;
    ulong uVar32;
    int64_t iVar33;
    uint64_t *puVar34;
    uint32_t uStack_1ac;
    uint32_t uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint32_t uStack_184;
    uint32_t uStack_12c;
    int64_t aiStack_128 [2];
    int64_t *piStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    int64_t iStack_100;
    int64_t *piStack_f8;
    int64_t iStack_f0;
    uint32_t uStack_e8;
    ushort uStack_e1;
    char acStack_df [3];
    uint32_t uStack_dc;
    uint32_t uStack_d8;
    uint32_t uStack_d4;
    uint uStack_d0;
    uint32_t uStack_cc;
    uint32_t uStack_c8;
    uint32_t uStack_c4;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    int64_t *piStack_b0;
    uint uStack_a0;
    uint32_t uStack_98;
    int64_t aiStack_90 [6];
    
    aiStack_90[4] = **reloc.__stack_chk_guard;
    iStack_100 = *param_2;
    uVar19 = param_1[1];
    if (uVar19 == 0) {
        pcVar24 = NULL;
    }
    else {
        uVar15 = 0;
        do {
            if (*(*param_1 + uVar15 * 0x10) == 10) {
                pcVar24 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar15, 10, iStack_100 + 0x778);
                uVar19 = param_1[1];
                iStack_100 = *param_2;
                if (uVar19 == 0) goto code_r0x0001938f0c00;
                goto code_r0x0001938f0bd8;
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 <= uVar19 && uVar19 != uVar15);
        pcVar24 = NULL;
code_r0x0001938f0bd8:
        uVar15 = 0;
        do {
            if (*(*param_1 + uVar15 * 0x10) == 0xb) {
                pcVar26 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar15, 0xb, iStack_100 + 0x778);
                iStack_108 = 0xe6 + 0x193b8a000;
                iStack_100 = *param_2;
                piStack_f8 = param_2[1];
                if (piStack_f8 == NULL) goto code_r0x0001938f0c28;
                goto code_r0x0001938f0c1c;
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 <= uVar19 && uVar19 != uVar15);
    }
code_r0x0001938f0c00:
    pcVar26 = NULL;
    iStack_108 = 0xe6 + 0x193b8a000;
    piStack_f8 = param_2[1];
    if (piStack_f8 != NULL) {
code_r0x0001938f0c1c:
        tmp_ldXn = piStack_f8[1];
        iVar33 = tmp_ldXn;
        tmp_stXn = iVar33 + 1;
        iVar33 = tmp_stXn;
        piStack_f8[1] = iVar33;
        uVar32 = tmp_ldXn;
    }
code_r0x0001938f0c28:
    iStack_f0 = std::__1::chrono::steady_clock::now()();
    aiStack_128[0] = 0xf4 + 0x193b8a000;
    aiStack_128[1] = *param_2;
    piStack_118 = param_2[1];
    if (piStack_118 != NULL) {
        tmp_ldXn = piStack_118[1];
        iVar33 = tmp_ldXn;
        tmp_stXn = iVar33 + 1;
        iVar33 = tmp_stXn;
        piStack_118[1] = iVar33;
        uVar32 = tmp_ldXn;
    }
    iVar33 = *0x8 + -0xc0;
    iStack_110 = std::__1::chrono::steady_clock::now()();
    uStack_12c = 0;
    uVar32 = 1;
    if ((pcVar24 != NULL) && (pcVar26 != NULL)) {
        std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::reserve(unsigned long)
                  (*param_2 + 0x358, *(pcVar24 + 0x38));
        std::__1::__wrap_iter<char*> std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::insert<unsigned char*, 0>(std::__1::__wrap_iter<char const*>, unsigned char*, unsigned char*)
                  (*param_2 + 0x358, *(*param_2 + 0x360), *(pcVar24 + 0x28), *(pcVar24 + 0x28) + *(pcVar24 + 0x38));
        uVar19 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar26, &uStack_12c);
        if ((uVar19 & 1) == 0) {
            uVar32 = **reloc.__stderrp;
code_r0x0001938f0d58:
            fprintf(uVar32, 0x8ff + 0x193b8a000);
            uVar32 = 0;
        }
        else {
            *(*param_2 + 0x380) = uStack_12c;
            if (uStack_12c != 0) {
                piVar10 = geo::codec::Allocator::instance()();
                iVar11 = (**(*piVar10 + 0x18))(piVar10, *(*param_2 + 0x380), 0x18);
                iVar16 = *param_2;
                *(iVar16 + 0x378) = iVar11;
                if (iVar11 == 0) {
                    uVar32 = **reloc.__stderrp;
                    goto code_r0x0001938f0d58;
                }
                if (*(iVar16 + 0x380) == 0) {
                    uVar19 = 0;
                }
                else {
                    uVar15 = 0;
                    puVar28 = *0x8 + -0x90;
                    do {
                        uStack_c0 = (uStack_c0 >> 0x20) << 0x20;
                        uStack_98 = 0;
                        uVar19 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar26, *0x8 + -0xc0);
                        if (((uVar19 & 1) == 0) ||
                           (iVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar26, *0x8 + -0x98)
                           ,  iVar9 == 0)) {
code_r0x0001938f0fd4:
                            uVar32 = **reloc.__stderrp;
                            goto code_r0x0001938f0d58;
                        }
                        uVar19 = *(pcVar26 + 0x30);
                        uVar17 = *(pcVar26 + 0x38);
                        uVar23 = uVar19 + 1;
                        if (uVar17 <= uVar23 && uVar23 != uVar17) goto code_r0x0001938f0fd4;
                        iVar11 = *(pcVar26 + 0x28);
                        if (uVar19 < uVar17) {
                            uVar22 = 0;
                            do {
                                cVar6 = *(iVar11 + uVar19);
                                uVar23 = uVar19;
                                if (cVar6 == '\0') break;
                                if (uVar22 < 0x1f) {
                                    puVar28[uVar22] = cVar6;
                                    uVar22 = uVar22 + 1;
                                }
                                uVar19 = uVar19 + 1;
                                uVar23 = uVar17;
                            } while (uVar17 != uVar19);
                            uVar23 = uVar23 + 1;
                            puVar28[uVar22] = 0;
                            if (uVar23 < uVar17) goto code_r0x0001938f0d78;
code_r0x0001938f0e54:
                            *(pcVar26 + 0x30) = uVar17;
                            if (*(iVar11 + uVar17 + -1) != '\0') goto code_r0x0001938f0fd4;
                        }
                        else {
                            *puVar28 = 0;
                            if (uVar17 <= uVar23) goto code_r0x0001938f0e54;
code_r0x0001938f0d78:
                            *(pcVar26 + 0x30) = uVar23;
                        }
                        iVar16 = *param_2;
                        iVar11 = *(iVar16 + 0x378);
                        puVar34 = iVar11 + uVar15 * 0x18;
                        *puVar34 = uStack_c0;
                        puVar34[1] = uStack_98;
                        uVar19 = strdup(*0x8 + -0x90);
                        puVar34[2] = uVar19;
                        iVar33 = *0x8 + -0xc0;
                        uVar15 = uVar15 + 1;
                        uVar19 = *(iVar16 + 0x380);
                    } while (uVar15 < uVar19);
                }
                mergesort(iVar11, uVar19, 0x18, 0x40c + 0x193938000);
            }
            *(iVar33 + 0x30) = 0;
            *(iVar33 + 0x38) = 0;
            *(iVar33 + 0x40) = 0;
            uVar32 = geo::codec::Allocator::instance()();
            *(iVar33 + 0x48) = uVar32;
            iStack_b8 = *param_2;
            uVar19 = param_1[1];
            if (uVar19 != 0) {
                uVar15 = 0;
                do {
                    if (*(*param_1 + uVar15 * 0x10) == 0xd) {
                        pcVar29 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                            (param_1, uVar15, 0xd, iStack_b8 + 0x778);
                        uStack_c0 = 0x10a + 0x193b8a000;
                        iStack_b8 = *param_2;
                        piStack_b0 = param_2[1];
                        if (piStack_b0 == NULL) goto code_r0x0001938f0f0c;
                        goto code_r0x0001938f0f00;
                    }
                    uVar15 = uVar15 + 1;
                } while (uVar15 <= uVar19 && uVar19 != uVar15);
            }
            pcVar29 = NULL;
            uStack_c0 = 0x10a + 0x193b8a000;
            piStack_b0 = param_2[1];
            if (piStack_b0 != NULL) {
code_r0x0001938f0f00:
                tmp_ldXn = piStack_b0[1];
                iVar11 = tmp_ldXn;
                tmp_stXn = iVar11 + 1;
                iVar11 = tmp_stXn;
                piStack_b0[1] = iVar11;
                uVar32 = tmp_ldXn;
            }
code_r0x0001938f0f0c:
            uVar32 = std::__1::chrono::steady_clock::now()();
            *(iVar33 + 0x18) = uVar32;
            if (pcVar29 == NULL) {
                uVar32 = 1;
            }
            else {
                pcVar30 = pcVar29;
                if (*(*param_2 + 0x388) == *(*param_2 + 0x390)) {
                    uVar19 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar29, pcVar29 + 0x40);
                    if ((uVar19 & 1) != 0) {
                        uStack_c4 = 0;
                        iVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar29, *0x8 + -0xc4);
                        if (iVar9 != 0) {
                            uStack_c8 = 0;
                            iVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar29, *0x8 + -200);
                            if ((iVar9 != 0) &&
                               (*(pcVar29 + 0x30) + uStack_c4 < *(pcVar29 + 0x38) ||
                                *(pcVar29 + 0x30) + uStack_c4 == *(pcVar29 + 0x38))) {
                                std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::reserve(unsigned long)
                                          (*param_2 + 0x3a8);
                                std::__1::__wrap_iter<char*> std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::insert<unsigned char*, 0>(std::__1::__wrap_iter<char const*>, unsigned char*, unsigned char*)
                                          (*param_2 + 0x3a8, *(*param_2 + 0x3b0), *(pcVar29 + 0x28) + *(pcVar29 + 0x30)
                                           , *(pcVar29 + 0x28) + *(pcVar29 + 0x30) + uStack_c4);
                                piVar10 = geo::codec::Allocator::instance()();
                                iVar11 = (**(*piVar10 + 0x10))(piVar10, uStack_c8 << 2, 8);
                                if (uStack_c8 != 0) {
                                    uVar19 = 0;
                                    uVar23 = 0;
                                    iVar16 = *(pcVar29 + 0x30);
                                    uVar15 = iVar16 + uStack_c4;
                                    do {
                                        if (uVar15 < uVar23 || uVar15 == uVar23) goto code_r0x0001938f1568;
                                        *(iVar11 + uVar19 * 4) = uVar23;
                                        uVar17 = uVar15 - iVar16;
                                        iVar25 = strnlen(*(pcVar30 + 0x28) + iVar16, uVar17);
                                        if (iVar25 + 1U < uVar17) {
                                            uVar17 = iVar25 + 1;
                                        }
                                        pcVar30 = pcVar29;
                                        iVar16 = uVar17 + iVar16;
                                        *(pcVar29 + 0x30) = iVar16;
                                        uVar23 = uVar23 + uVar17;
                                        uVar19 = uVar19 + 1;
                                    } while (uVar19 < uStack_c8);
                                }
                                uStack_cc = 0;
                                iVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                  (pcVar30, *0x8 + -0xcc);
                                if (iVar9 == 0) {
code_r0x0001938f1568:
                                    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                                    uVar32 = 0;
                                    iVar16 = 0;
                                }
                                else {
                                    uStack_d0 = 0;
                                    iVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                      (pcVar30, *0x8 + -0xd0);
                                    if ((iVar9 == 0) ||
                                       (uVar19 = *(pcVar30 + 0x30) + uStack_cc, 
                                       *(pcVar30 + 0x38) <= uVar19 && uVar19 != *(pcVar30 + 0x38)))
                                    goto code_r0x0001938f1568;
                                    *(pcVar30 + 0x30) = uVar19;
                                    uStack_d4 = 0;
                                    iVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                      (pcVar30, *0x8 + -0xd4);
                                    if (iVar9 == 0) goto code_r0x0001938f1568;
                                    uStack_d8 = 0;
                                    iVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                      (pcVar30, *0x8 + -0xd8);
                                    if (iVar9 == 0) goto code_r0x0001938f1568;
                                    if (*(pcVar30 + 0x38) <= *(pcVar30 + 0x30) + uStack_d4 &&
                                        *(pcVar30 + 0x30) + uStack_d4 != *(pcVar30 + 0x38)) {
                                        iVar33 = *0x8 + -0xc0;
                                        goto code_r0x0001938f1568;
                                    }
                                    std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::reserve(unsigned long)
                                              (*param_2 + 0x388);
                                    std::__1::__wrap_iter<char*> std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::insert<unsigned char*, 0>(std::__1::__wrap_iter<char const*>, unsigned char*, unsigned char*)
                                              (*param_2 + 0x388, *(*param_2 + 0x390), 
                                               *(pcVar30 + 0x28) + *(pcVar30 + 0x30), 
                                               *(pcVar30 + 0x28) + *(pcVar30 + 0x30) + uStack_d4);
                                    piVar10 = geo::codec::Allocator::instance()();
                                    iVar25 = (**(*piVar10 + 0x10))(piVar10, uStack_d8 << 2, 8);
                                    iVar33 = *(pcVar30 + 0x30);
                                    if (uStack_d8 != 0) {
                                        uVar19 = 0;
                                        uVar23 = 0;
                                        uVar15 = iVar33 + uStack_d4;
                                        do {
                                            if (uVar15 < uVar23 || uVar15 == uVar23) {
                                                uVar32 = **reloc.__stderrp;
                                                goto code_r0x0001938f1980;
                                            }
                                            *(iVar25 + uVar19 * 4) = uVar23;
                                            uVar17 = uVar15 - iVar33;
                                            iVar16 = strnlen(*(pcVar30 + 0x28) + iVar33, uVar17);
                                            if (iVar16 + 1U < uVar17) {
                                                uVar17 = iVar16 + 1;
                                            }
                                            iVar33 = uVar17 + iVar33;
                                            *(pcVar30 + 0x30) = iVar33;
                                            uVar23 = uVar23 + uVar17;
                                            uVar19 = uVar19 + 1;
                                        } while (uVar19 < uStack_d8);
                                    }
                                    uVar19 = iVar33 + 1;
                                    uVar15 = *(pcVar30 + 0x38);
                                    if (uVar19 < uVar15 || uVar19 == uVar15) {
                                        puVar28 = *(pcVar30 + 0x28) + iVar33;
                                        uVar1 = *puVar28;
                                        *(pcVar30 + 0x30) = uVar19;
                                        uVar19 = iVar33 + 2;
                                        if (uVar15 <= uVar19 && uVar19 != uVar15) {
                                            uVar32 = **reloc.__stderrp;
                                            goto code_r0x0001938f1980;
                                        }
                                        uVar2 = puVar28[1];
                                        *(pcVar30 + 0x30) = uVar19;
                                        uVar19 = iVar33 + 3;
                                        if (uVar15 <= uVar19 && uVar19 != uVar15) {
                                            uVar32 = **reloc.__stderrp;
                                            goto code_r0x0001938f1980;
                                        }
                                        uVar3 = puVar28[2];
                                        *(pcVar30 + 0x30) = uVar19;
                                        uVar19 = iVar33 + 4;
                                        if (uVar15 <= uVar19 && uVar19 != uVar15) {
                                            uVar32 = **reloc.__stderrp;
                                            goto code_r0x0001938f1980;
                                        }
                                        uVar4 = puVar28[3];
                                        *(pcVar30 + 0x30) = uVar19;
                                        uVar19 = iVar33 + 5;
                                        if (uVar15 <= uVar19 && uVar19 != uVar15) {
                                            uVar32 = **reloc.__stderrp;
                                            goto code_r0x0001938f1980;
                                        }
                                        uVar21 = puVar28[4];
                                        *(pcVar30 + 0x30) = uVar19;
                                        uVar19 = iVar33 + 6;
                                        if (uVar15 <= uVar19 && uVar19 != uVar15) {
                                            uVar32 = **reloc.__stderrp;
                                            goto code_r0x0001938f1980;
                                        }
                                        uVar5 = puVar28[5];
                                        *(pcVar30 + 0x30) = uVar19;
                                        uStack_dc = 0;
                                        uVar19 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                           (pcVar30, *0x8 + -0xdc);
                                        if ((uVar19 & 1) == 0) {
                                            uVar32 = **reloc.__stderrp;
                                            goto code_r0x0001938f1980;
                                        }
                                        piVar10 = geo::codec::Allocator::instance()();
                                        iVar16 = (**(*piVar10 + 0x10))(piVar10, uStack_dc << 2, 8);
                                        iVar33 = *param_2;
                                        uVar19 = uStack_dc;
                                        if (uStack_dc != 0) {
                                            uVar15 = 0;
                                            uVar23 = 0;
                                            iVar27 = *(iVar33 + 0x358);
                                            uVar17 = *(iVar33 + 0x360);
                                            do {
                                                if (uVar17 <= uVar23) {
                                                    uVar32 = **reloc.__stderrp;
                                                    goto code_r0x0001938f1eb8;
                                                }
                                                *(iVar16 + uVar15 * 4) = uVar23;
                                                iVar12 = iVar27 + uVar23;
                                                uVar19 = uVar17 - iVar12;
                                                iVar12 = strnlen(iVar12, uVar19);
                                                if (iVar12 + 1U < uVar19) {
                                                    uVar19 = iVar12 + 1;
                                                }
                                                uVar23 = uVar23 + uVar19;
                                                uVar15 = uVar15 + 1;
                                                uVar19 = uStack_dc;
                                            } while (uVar15 < uVar19);
                                        }
                                        std::__1::vector<GeoCodecsLocalizationTableEntry, geo::StdAllocator<GeoCodecsLocalizationTableEntry, geo::codec::Allocator> >::resize(unsigned long)
                                                  (iVar33 + 0x438, uVar19);
                                        uVar19 = *(pcVar30 + 0x30);
                                        if (uVar19 <= *(pcVar30 + 0x38)) {
                                            piVar10 = pcVar30 + 8;
                                            *piVar10 = *(pcVar30 + 0x28) + uVar19;
                                            pcVar30[0x20] = '\x01';
                                            *(pcVar30 + 0x10) = *(pcVar30 + 0x38) - uVar19;
                                            *(pcVar30 + 0x18) = 0;
                                            iVar33 = *param_2;
                                            if (*(iVar33 + 0x3f7) < '\0') {
                                                uVar15 = *(iVar33 + 1000);
                                            }
                                            else {
                                                uVar15 = *(iVar33 + 0x3f7);
                                            }
                                            if (uStack_dc == 0) {
                                                uVar15 = 0;
                                            }
                                            else {
                                                uStack_198 = 0;
                                                do {
                                                    acStack_df[2] = '\0';
                                                    iVar9 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                      (piVar10, *0x8 + -0xdd);
                                                    if (iVar9 == 0) {
code_r0x0001938f1eac:
                                                        uVar32 = **reloc.__stderrp;
                                                        goto code_r0x0001938f1eb8;
                                                    }
                                                    if (acStack_df[2] != '\0') {
                                                        uVar19 = *(pcVar30 + 0x18) + uVar2;
                                                        if (*(pcVar30 + 0x10) * 8 <= uVar19 &&
                                                            uVar19 != *(pcVar30 + 0x10) * 8) goto code_r0x0001938f1eac;
                                                        *(pcVar30 + 0x18) = uVar19;
                                                    }
                                                    uStack_98 = 0;
                                                    uVar19 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                       (piVar10, *0x8 + -0x98, uVar4);
                                                    uStack_1a8 = uStack_98;
                                                    if ((uVar19 & 1) == 0) {
                                                        uVar32 = **reloc.__stderrp;
                                                        goto code_r0x0001938f1eb8;
                                                    }
                                                    uVar31 = uStack_98;
                                                    uStack_98 = uVar31 + 1;
                                                    if (CARRY4(uVar31, 1)) {
                                                        uStack_190 = 0;
                                                        uStack_1a0 = 0;
                                                        uStack_184 = 0;
                                                    }
                                                    else {
                                                        uStack_1ac = 0;
                                                        uStack_184 = 0;
                                                        uStack_1a0 = 0;
                                                        uStack_190 = 0;
                                                        bVar7 = false;
                                                        do {
                                                            acStack_df[1] = '\0';
                                                            uVar19 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (piVar10, *0x8 + -0xde);
                                                            if ((uVar19 & 1) == 0) {
                                                                uVar32 = **reloc.__stderrp;
                                                                goto code_r0x0001938f1eb8;
                                                            }
                                                            if (acStack_df[1] == '\0') {
                                                                uVar19 = 0xffffffffffffffff;
                                                            }
                                                            else {
                                                                uStack_a0 = 0;
                                                                iVar9 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar10, *0x8 + -0xa0, uVar3);
                                                            if ((iVar9 == 0) || (uStack_d8 <= uStack_a0))
                                                            goto code_r0x0001938f1eac;
                                                            uVar19 = *(iVar25 + uStack_a0 * 4);
                                                            }
                                                            acStack_df[0] = '\0';
                                                            uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (piVar10, *0x8 + -0xdf);
                                                            if ((uVar23 & 1) == 0) {
                                                                uVar32 = **reloc.__stderrp;
                                                                goto code_r0x0001938f1eb8;
                                                            }
                                                            if (acStack_df[0] == '\0') {
                                                                uVar23 = 0xffffffffffffffff;
                                                            }
                                                            else {
                                                                uStack_a0 = 0;
                                                                iVar9 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar10, *0x8 + -0xa0, uVar1);
                                                            if ((iVar9 == 0) || (uStack_c8 <= uStack_a0))
                                                            goto code_r0x0001938f1eac;
                                                            uVar23 = *(iVar11 + uStack_a0 * 4);
                                                            }
                                                            uStack_e1 = 0;
                                                            iVar9 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                              (piVar10, *0x8 + -0xe1);
                                                            if (iVar9 == 0) goto code_r0x0001938f1eac;
                                                            if (uStack_e1 != '\0') {
                                                                if ((uVar21 == 0) ||
                                                                   (iVar9 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                                      (piVar10, *0x8 + -0xe0), 
                                                                   iVar9 == 0)) goto code_r0x0001938f1eac;
                                                                if (1 < uVar21) {
                                                                    uVar17 = *(pcVar30 + 0x18) + uVar21 + -1;
                                                                    if (*(pcVar30 + 0x10) * 8 <= uVar17 &&
                                                                        uVar17 != *(pcVar30 + 0x10) * 8)
                                                                    goto code_r0x0001938f1eac;
                                                                    *(pcVar30 + 0x18) = uVar17;
                                                                }
                                                            }
                                                            uStack_a0 = 0;
                                                            iVar9 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar10, *0x8 + -0xa0, uVar5);
                                                            if (iVar9 == 0) {
                                                                uVar32 = **reloc.__stderrp;
                                                                goto code_r0x0001938f1eb8;
                                                            }
                                                            uVar31 = uStack_a0;
                                                            if (uVar31 == 0) {
                                                                bVar8 = false;
                                                            }
                                                            else {
                                                                bVar8 = false;
                                                                do {
                                                                    uStack_e8 = 0;
                                                                    iVar9 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar10, *0x8 + -0xe8, uVar1);
                                                            if ((iVar9 == 0) || (uStack_c8 <= uStack_e8))
                                                            goto code_r0x0001938f1eac;
                                                            if (bVar7) {
                                                                bVar7 = true;
                                                            }
                                                            else {
                                                                iVar27 = *param_2;
                                                                iVar33 = *(iVar27 + 0x3a8) + *(iVar11 + uStack_e8 * 4);
                                                                uVar17 = strnlen(iVar33, *(iVar27 + 0x3b0) - iVar33);
                                                                if (uVar17 != uVar15) {
                                                                    bVar7 = false;
                                                                }
                                                                else {
                                                                    piVar14 = iVar27 + 0x3e0;
                                                                    if (*(iVar27 + 0x3f7) < '\0') {
                                                                        piVar14 = *piVar14;
                                                                    }
                                                                    iVar9 = strncmp(piVar14, iVar33, uVar15);
                                                                    bVar7 = iVar9 == 0;
                                                                    bVar8 = bVar7;
                                                                }
                                                            }
                                                            uVar31 = uVar31 + -1;
                                                            } while (uVar31 != 0);
                                                            }
                                                            uVar31 = uStack_1ac;
                                                            bVar8 = bVar8 | uVar31 == 0;
                                                            uVar17 = uStack_190;
                                                            uStack_190 = uVar19;
                                                            if (!bVar8) {
                                                                uStack_190 = uVar17;
                                                            }
                                                            uVar19 = uStack_1a0;
                                                            uStack_1a0 = uVar23;
                                                            if (!bVar8) {
                                                                uStack_1a0 = uVar19;
                                                            }
                                                            uVar18 = uStack_e1._1_1_ != '\0';
                                                            if (!bVar8) {
                                                                uVar18 = uStack_184;
                                                            }
                                                            uStack_184 = uVar18;
                                                            uStack_1ac = uVar31 + 1;
                                                        } while (uVar31 != uStack_1a8);
                                                    }
                                                    uVar19 = *(iVar16 + uStack_198 * 4);
                                                    iVar27 = *param_2;
                                                    iVar33 = *(iVar27 + 0x438);
                                                    *(iVar33 + uStack_198 * 0x20) = uVar19;
                                                    if ((uStack_184 == 0) || (uStack_190 == 0xffffffffffffffff)) {
                                                        *(iVar33 + uStack_198 * 0x20 + 8) = uStack_190;
                                                    }
                                                    else {
                                                        iVar20 = *(*0x8 + -0x88);
                                                        *(iVar33 + uStack_198 * 0x20 + 8) = iVar20 - *(*0x8 + -0x90);
                                                        iVar33 = *(iVar27 + 0x388) + uStack_190;
                                                        iVar13 = strnlen(iVar33, *(iVar27 + 0x390) - iVar33);
                                                        iVar12 = *(iVar27 + 0x358) + uVar19;
                                                        iVar27 = strnlen(iVar12, *(iVar27 + 0x360) - iVar12);
                                                        std::__1::__wrap_iter<char*> std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::insert<char const*, 0>(std::__1::__wrap_iter<char const*>, char const*, char const*)
                                                                  (*0x8 + -0x90, iVar20, iVar33, iVar33 + iVar13);
                                                        uStack_a0._0_1_ = 10;
                                                        std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::push_back[abi:v160006](char&&)
                                                                  (*0x8 + -0x90, *0x8 + -0xa0);
                                                        std::__1::__wrap_iter<char*> std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::insert<char const*, 0>(std::__1::__wrap_iter<char const*>, char const*, char const*)
                                                                  (*0x8 + -0x90, *(*0x8 + -0x88), iVar12, 
                                                                   iVar12 + iVar27);
                                                        uStack_a0._0_1_ = 0;
                                                        std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::push_back[abi:v160006](char&&)
                                                                  (*0x8 + -0x90, *0x8 + -0xa0);
                                                        iVar27 = *param_2;
                                                    }
                                                    if (uStack_1a0 == 0xffffffffffffffff) {
                                                        iVar33 = 0;
                                                    }
                                                    else {
                                                        iVar33 = *(iVar27 + 0x3a8) + uStack_1a0;
                                                    }
                                                    iVar27 = *(iVar27 + 0x438) + uStack_198 * 0x20;
                                                    *(iVar27 + 0x10) = iVar33;
                                                    uVar31 = 0xffffffff >> -1 + 0x20;
                                                    *(iVar27 + 0x18) = *(iVar27 + 0x18) & ~uVar31 | uStack_184 & uVar31;
                                                    uStack_198 = uStack_198 + 1;
                                                } while (uStack_198 < uStack_dc);
                                                uVar15 = *(pcVar30 + 0x18);
                                                uVar19 = *(pcVar30 + 0x30);
                                                iVar33 = *param_2;
                                            }
                                            iVar27 = uVar19 + (uVar15 >> 3);
                                            if ((uVar15 & 7) != 0) {
                                                iVar27 = iVar27 + 1;
                                            }
                                            *(pcVar30 + 0x30) = iVar27;
                                            pcVar30[0x20] = '\0';
                                            void std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::assign<std::__1::__wrap_iter<char*>, 0>(std::__1::__wrap_iter<char*>, std::__1::__wrap_iter<char*>)
                                                      (iVar33 + 0x3f8, *(*0x8 + -0x90), *(*0x8 + -0x88));
                                            uVar32 = 1;
                                            if (iVar25 == 0) goto code_r0x0001938f1edc;
                                            goto code_r0x0001938f19a8;
                                        }
                                        uVar32 = **reloc.__stderrp;
code_r0x0001938f1eb8:
                                        fprintf(uVar32, 0x8ff + 0x193b8a000);
                                        uVar32 = 0;
                                        if (iVar25 != 0) goto code_r0x0001938f19a8;
code_r0x0001938f1edc:
                                        iVar33 = *0x8 + -0xc0;
                                    }
                                    else {
                                        uVar32 = **reloc.__stderrp;
code_r0x0001938f1980:
                                        fprintf(uVar32, 0x8ff + 0x193b8a000);
                                        iVar16 = 0;
                                        uVar32 = 0;
                                        if (iVar25 == 0) goto code_r0x0001938f1edc;
code_r0x0001938f19a8:
                                        piVar10 = geo::codec::Allocator::instance()();
                                        iVar33 = *0x8 + -0xc0;
                                        (**(*piVar10 + 0x28))(piVar10, iVar25, 0);
                                    }
                                }
                                if (iVar11 != 0) {
                                    piVar10 = geo::codec::Allocator::instance()();
                                    (**(*piVar10 + 0x28))(piVar10, iVar11, 0);
                                }
                                if (iVar16 != 0) {
                                    piVar10 = geo::codec::Allocator::instance()();
                                    (**(*piVar10 + 0x28))(piVar10, iVar16, 0);
                                }
                                goto code_r0x0001938f1018;
                            }
                        }
                    }
                    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                    uVar32 = 0;
                }
                else {
                    uVar32 = 1;
                }
code_r0x0001938f1018:
                if (param_1 != NULL) {
                    if (*pcVar30 != '\0') {
                        piVar10 = geo::codec::Allocator::instance()();
                        (**(*piVar10 + 0x28))(piVar10, *(pcVar30 + 0x28), 0);
                    }
                    piVar10 = geo::codec::Allocator::instance()();
                    (**(*piVar10 + 0x28))(piVar10, pcVar30, 0);
                }
            }
            uVar19 = uStack_c0;
            iVar25 = iStack_b8;
            iVar11 = std::__1::chrono::steady_clock::now()();
            iVar16 = *(iVar33 + 0x18);
            *(iVar33 + 0x20) = uVar19;
            if (uVar19 != 0) {
                *(iVar33 + 0x28) = *0x8 + -0xa0;
                iVar25 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                                   (iVar25 + 0x778, *0x8 + -0xa0, 0x74c + 0x193af9000, *0x8 + -0x98, *0x8 + -0xe8);
                iVar11 = SUB168(SEXT816(iVar11 - iVar16) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
                *(iVar25 + 0x20) = ((iVar11 >> 7) - (iVar11 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
            }
            piVar10 = piStack_b0;
            if (piVar10 != NULL) {
                LOAcquire();
                tmp_ldXn = piStack_b0[1];
                iVar11 = tmp_ldXn;
                tmp_stXn = iVar11 + -1;
                iVar11 = tmp_stXn;
                piStack_b0[1] = iVar11;
                iVar11 = tmp_ldXn;
                LORelease();
                if (iVar11 == 0) {
                    (**(*piVar10 + 0x10))(piVar10);
                    std::__1::__shared_weak_count::__release_weak()(piVar10);
                }
            }
            iVar11 = *(iVar33 + 0x30);
            if (iVar11 != 0) {
                *(iVar33 + 0x38) = iVar11;
                (**(**(iVar33 + 0x48) + 0x28))(*(iVar33 + 0x48), iVar11, *(iVar33 + 0x40) - iVar11);
            }
        }
    }
    if ((param_1 != NULL) && (pcVar24 != NULL)) {
        if (*pcVar24 != '\0') {
            piVar10 = geo::codec::Allocator::instance()();
            (**(*piVar10 + 0x28))(piVar10, *(pcVar24 + 0x28), 0);
        }
        piVar10 = geo::codec::Allocator::instance()();
        (**(*piVar10 + 0x28))(piVar10, pcVar24, 0);
    }
    if ((param_1 != NULL) && (pcVar26 != NULL)) {
        if (*pcVar26 != '\0') {
            piVar10 = geo::codec::Allocator::instance()();
            (**(*piVar10 + 0x28))(piVar10, *(pcVar26 + 0x28), 0);
        }
        piVar10 = geo::codec::Allocator::instance()();
        (**(*piVar10 + 0x28))(piVar10, pcVar26, 0);
    }
    iVar11 = aiStack_128[0];
    iVar27 = aiStack_128[1];
    iVar16 = std::__1::chrono::steady_clock::now()();
    iVar25 = iStack_110;
    uStack_c0 = iVar11;
    if (iVar11 != 0) {
        *(iVar33 + 0x30) = *0x8 + -0xc0;
        iVar11 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar27 + 0x778, *0x8 + -0xc0, 0x74c + 0x193af9000, *0x8 + -0x90, *0x8 + -0x98);
        iVar16 = SUB168(SEXT816(iVar16 - iVar25) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar11 + 0x20) = ((iVar16 >> 7) - (iVar16 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    iVar11 = iStack_108;
    piVar10 = piStack_118;
    if (piVar10 == NULL) {
code_r0x0001938f12f4:
        iVar25 = iStack_100;
        iVar16 = std::__1::chrono::steady_clock::now()();
        uStack_c0 = iVar11;
        if (iVar11 == 0) goto code_r0x0001938f1370;
    }
    else {
        LOAcquire();
        tmp_ldXn = piStack_118[1];
        iVar16 = tmp_ldXn;
        tmp_stXn = iVar16 + -1;
        iVar16 = tmp_stXn;
        piStack_118[1] = iVar16;
        iVar16 = tmp_ldXn;
        LORelease();
        if (iVar16 != 0) goto code_r0x0001938f12f4;
        (**(*piVar10 + 0x10))(piVar10);
        std::__1::__shared_weak_count::__release_weak()(piVar10);
        iVar11 = iStack_108;
        iVar25 = iStack_100;
        iVar16 = std::__1::chrono::steady_clock::now()();
        uStack_c0 = iVar11;
        if (iVar11 == 0) goto code_r0x0001938f1370;
    }
    iVar11 = iStack_f0;
    *(iVar33 + 0x30) = *0x8 + -0xc0;
    iVar33 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iVar25 + 0x778, *0x8 + -0xc0, 0x74c + 0x193af9000, *0x8 + -0x90, aiStack_128);
    iVar11 = SUB168(SEXT816(iVar16 - iVar11) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar33 + 0x20) = ((iVar11 >> 7) - (iVar11 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x0001938f1370:
    piVar10 = piStack_f8;
    if (piVar10 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_f8[1];
        iVar33 = tmp_ldXn;
        tmp_stXn = iVar33 + -1;
        iVar33 = tmp_stXn;
        piStack_f8[1] = iVar33;
        iVar33 = tmp_ldXn;
        LORelease();
        if (iVar33 == 0) {
            (**(*piVar10 + 0x10))(piVar10);
            std::__1::__shared_weak_count::__release_weak()(piVar10);
        }
    }
    if (**reloc.__stack_chk_guard != aiStack_90[4]) {
    // WARNING: Subroutine does not return
        __stack_chk_fail();
    }
    return uVar32;
}
