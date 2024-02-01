
uint32_t geo::codec::_readConnectivity(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    char *pcVar1;
    uint *puVar2;
    uint32_t uVar3;
    int32_t iVar4;
    int32_t iVar5;
    char *pcVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong uVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *puVar14;
    ulong *puVar15;
    uint32_t *puVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    int64_t iVar19;
    int64_t iVar20;
    ulong uStack_128;
    char cStack_120;
    unkbyte7 Stack_11f;
    int64_t iStack_118;
    uint32_t uStack_104;
    uint64_t auStack_100 [4];
    uint32_t auStack_e0 [2];
    int64_t iStack_d8;
    uint32_t uStack_c4;
    uint64_t *apuStack_c0 [5];
    uint32_t uStack_98;
    uint32_t uStack_94;
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    
    uVar12 = param_1[1];
    if (uVar12 != 0) {
        uVar11 = 0;
        do {
            if (*(*param_1 + uVar11 * 0x10) == 0x3c) {
                pcVar6 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar11, 0x3c, *param_2 + 0x778);
                if (pcVar6 != NULL) {
                    uStack_80 = 0x242 + 0x193b8a000;
                    iStack_78 = *param_2;
                    piStack_70 = param_2[1];
                    if (piStack_70 != NULL) {
                        tmp_ldXn = piStack_70[1];
                        iVar8 = tmp_ldXn;
                        tmp_stXn = iVar8 + 1;
                        iVar8 = tmp_stXn;
                        piStack_70[1] = iVar8;
                        uVar9 = tmp_ldXn;
                    }
                    iStack_68 = std::__1::chrono::steady_clock::now()();
                    uStack_88 = 0;
                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x84);
                    if ((uVar12 & 1) == 0) {
                        uVar9 = **reloc.__stderrp;
                        goto code_r0x00019392ffcc;
                    }
                    *(*param_2 + 0x2d0) = uStack_88._4_4_;
                    piVar7 = geo::codec::Allocator::instance()();
                    iVar8 = (**(*piVar7 + 0x18))(piVar7, *(*param_2 + 0x2d0), 0x10);
                    *(*param_2 + 0x2c8) = iVar8;
                    if (iVar8 == 0) {
                        uVar9 = **reloc.__stderrp;
                        goto code_r0x00019392ffcc;
                    }
                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x88);
                    if ((uVar12 & 1) == 0) {
                        uVar9 = **reloc.__stderrp;
                        goto code_r0x00019392ffcc;
                    }
                    *(*param_2 + 0x2b8) = uStack_88;
                    piVar7 = geo::codec::Allocator::instance()();
                    iVar8 = (**(*piVar7 + 0x18))(piVar7, *(*param_2 + 0x2b8), 0x20);
                    iVar13 = *param_2;
                    *(iVar13 + 0x2b0) = iVar8;
                    if (iVar8 == 0) {
                        uVar9 = **reloc.__stderrp;
                        goto code_r0x00019392ffcc;
                    }
                    if (*(iVar13 + 0x2b8) == 0) goto code_r0x00019392fcd0;
                    uVar12 = 0;
                    iVar8 = 0;
                    goto code_r0x00019392fc08;
                }
                break;
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 <= uVar12 && uVar12 != uVar11);
    }
    uVar18 = 1;
    goto code_r0x00019392fb98;
    while( true ) {
        *(iVar19 + uVar12 * 0x20) = apuStack_c0[0];
        *(iVar19 + uVar12 * 0x20 + 4) = iVar8;
        if (apuStack_c0[0] != 0) {
            iVar19 = 0;
            iVar20 = iVar8 << 4;
            do {
                auStack_100[0] = (auStack_100[0] >> 0x20) << 0x20;
                uVar11 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, auStack_100);
                if ((uVar11 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x00019392ffcc;
                }
                auStack_e0[0] = 0;
                uVar11 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, auStack_e0);
                if ((uVar11 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x00019392ffcc;
                }
                iVar13 = *param_2;
                puVar2 = *(iVar13 + 0x2c8) + iVar20;
                *puVar2 = uVar12;
                puVar2[1] = auStack_100[0];
                puVar2[2] = 0;
                puVar2[3] = auStack_e0[0];
                iVar19 = iVar19 + 1;
                iVar20 = iVar20 + 0x10;
            } while (iVar19 < apuStack_c0[0]);
            iVar8 = iVar8 + iVar19;
        }
        uVar12 = uVar12 + 1;
        if (*(iVar13 + 0x2b8) <= uVar12) break;
code_r0x00019392fc08:
        iVar19 = *(iVar13 + 0x2b0);
        apuStack_c0[0] = (apuStack_c0[0] >> 0x20) << 0x20;
        uVar11 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, apuStack_c0);
        if ((uVar11 & 1) == 0) {
            uVar9 = **reloc.__stderrp;
            goto code_r0x00019392ffcc;
        }
        iVar13 = *param_2;
        uVar11 = iVar8 + apuStack_c0[0];
        if (*(iVar13 + 0x2d0) <= uVar11 && uVar11 != *(iVar13 + 0x2d0)) {
            uVar9 = **reloc.__stderrp;
            goto code_r0x00019392ffcc;
        }
    }
code_r0x00019392fcd0:
    if (*(iVar13 + 0x2c8) != 0) {
        piVar7 = geo::codec::Allocator::instance()();
        iVar8 = (**(*piVar7 + 0x10))(piVar7, *(*param_2 + 0x2d0) << 3, 8);
        iVar13 = *param_2;
        *(iVar13 + 0x2d8) = iVar8;
        if (iVar8 != 0) {
            if (*(iVar13 + 0x2d0) == 0) {
                uVar12 = 0;
            }
            else {
                iVar8 = 0;
                uVar11 = 0;
                do {
                    *(*(iVar13 + 0x2d8) + uVar11 * 8) = *(iVar13 + 0x2c8) + iVar8;
                    uVar11 = uVar11 + 1;
                    iVar13 = *param_2;
                    uVar12 = *(iVar13 + 0x2d0);
                    iVar8 = iVar8 + 0x10;
                } while (uVar11 < uVar12);
                iVar8 = *(iVar13 + 0x2d8);
            }
            geo::codec::sortPointsOnRoad(GeoCodecsConnectivityPointOnRoad**, unsigned long)(iVar8, uVar12);
            goto code_r0x00019392fda0;
        }
        uVar9 = **reloc.__stderrp;
        goto code_r0x00019392ffcc;
    }
code_r0x00019392fda0:
    if (*(pcVar6 + 0x40) < 3) {
code_r0x000193930238:
        param_2 = 0x1;
        if (*pcVar6 != '\0') {
code_r0x00019392fff0:
            piVar7 = geo::codec::Allocator::instance()();
            (**(*piVar7 + 0x28))(piVar7, *(pcVar6 + 0x28), 0);
        }
code_r0x000193930020:
        piVar7 = geo::codec::Allocator::instance()();
        (**(*piVar7 + 0x28))(piVar7, pcVar6, 0);
    }
    else {
        uVar12 = *(pcVar6 + 0x30);
        if (uVar12 <= *(pcVar6 + 0x38)) {
            pcVar6[0x20] = '\x01';
            *(pcVar6 + 0x10) = *(pcVar6 + 0x38) - uVar12;
            *(pcVar6 + 0x18) = 0;
            *(pcVar6 + 8) = *(pcVar6 + 0x28) + uVar12;
        }
        pcVar1 = pcVar6 + 8;
        auStack_e0[0] = (auStack_e0[0] >> 8) << 8;
        uVar12 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar1, auStack_e0);
        if ((uVar12 & 1) == 0) {
            uVar9 = **reloc.__stderrp;
            goto code_r0x00019392ffcc;
        }
        if (auStack_e0[0] != '\0') {
            apuStack_c0[0] = (apuStack_c0[0] >> 0x20) << 0x20;
            uVar12 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(pcVar1, apuStack_c0, 5);
            if ((uVar12 & 1) == 0) {
                uVar9 = **reloc.__stderrp;
                goto code_r0x00019392ffcc;
            }
            if (*(*param_2 + 0x2b8) != 0) {
                uVar12 = 0;
                iVar5 = apuStack_c0[0];
                iVar8 = 8;
                do {
                    cStack_120 = '\0';
                    uVar11 = BitstreamUnpackFlag(Bitstream*, bool*)(pcVar1, &cStack_120);
                    if ((uVar11 & 1) == 0) {
                        uVar9 = **reloc.__stderrp;
                        goto code_r0x00019392ffcc;
                    }
                    iVar13 = *param_2;
                    if (cStack_120 != '\0') {
                        iVar19 = *(iVar13 + 0x2b0);
                        auStack_100[0] = (auStack_100[0] >> 0x20) << 0x20;
                        iVar4 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                          (pcVar1, auStack_100, iVar5 + 1);
                        if (iVar4 == 0) goto code_r0x00019392ffc0;
                        iVar13 = *param_2;
                        if (*(iVar13 + 0x200) - *(iVar13 + 0x1f8) >> 8 <= auStack_100[0]) goto code_r0x00019392ffc0;
                        *(iVar19 + iVar8) = *(iVar13 + 0x1f8) + auStack_100[0] * 0x100;
                    }
                    uVar12 = uVar12 + 1;
                    iVar8 = iVar8 + 0x20;
                } while (uVar12 < *(iVar13 + 0x2b8));
            }
        }
        iVar8 = *(pcVar6 + 0x30) + (*(pcVar6 + 0x18) >> 3);
        if ((*(pcVar6 + 0x18) & 7) != 0) {
            iVar8 = iVar8 + 1;
        }
        *(pcVar6 + 0x30) = iVar8;
        pcVar6[0x20] = '\0';
        if (*(pcVar6 + 0x40) < 0x47 || *(pcVar6 + 0x40) == 0x47) goto code_r0x000193930238;
        uStack_90 = 0;
        uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x8c);
        if (((uVar12 & 1) == 0) ||
           (iVar5 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x90),  iVar5 == 0)) {
code_r0x00019392ffc0:
            uVar9 = **reloc.__stderrp;
code_r0x00019392ffcc:
            fprintf(uVar9, 0x8ff + 0x193b8a000);
code_r0x00019392ffe4:
            param_2 = NULL;
            if (*pcVar6 != '\0') goto code_r0x00019392fff0;
            goto code_r0x000193930020;
        }
        uStack_94 = 0;
        uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x94);
        if ((uVar12 & 1) == 0) {
            uVar9 = **reloc.__stderrp;
            goto code_r0x00019392ffcc;
        }
        if (uStack_94 == 0) goto code_r0x000193930238;
        uStack_98 = 0;
        uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, *0x8 + -0x98);
        if ((uVar12 & 1) == 0) {
            uVar9 = **reloc.__stderrp;
            goto code_r0x00019392ffcc;
        }
        uVar18 = uStack_98;
        iVar8 = *(pcVar6 + 0x30);
        uVar12 = iVar8 + uVar18;
        if (*(pcVar6 + 0x38) <= uVar12 && uVar12 != *(pcVar6 + 0x38)) {
            uVar9 = **reloc.__stderrp;
            goto code_r0x00019392ffcc;
        }
        iVar13 = *(pcVar6 + 0x28);
        *(pcVar6 + 0x30) = uVar12;
        uVar3 = uStack_94;
        if (uVar3 == 0) {
            puVar10 = NULL;
        }
        else {
            iVar19 = uVar3 << 2;
            puVar10 = operator new(unsigned long)(iVar19);
            bzero(puVar10, iVar19);
        }
        apuStack_c0[1] = NULL;
        apuStack_c0[0] = NULL;
        apuStack_c0[3] = NULL;
        apuStack_c0[2] = NULL;
        iVar5 = mgcl::ints::IntDecompressor<unsigned int>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, unsigned int*)
                          (apuStack_c0, iVar13 + iVar8, uVar18, uStack_90._4_4_, uStack_90, uVar3, puVar10);
        if (iVar5 == 0) {
            uStack_c4 = 0;
            uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, &uStack_c4);
            if ((uVar12 & 1) == 0) {
                uVar9 = **reloc.__stderrp;
                goto code_r0x0001939301f8;
            }
            iVar8 = *(pcVar6 + 0x30);
            uVar12 = iVar8 + uStack_c4;
            if (*(pcVar6 + 0x38) <= uVar12 && uVar12 != *(pcVar6 + 0x38)) {
                uVar9 = **reloc.__stderrp;
                goto code_r0x0001939301f8;
            }
            iVar13 = *(pcVar6 + 0x28);
            *(pcVar6 + 0x30) = uVar12;
            auStack_100[0] = 0;
            std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::vector(unsigned long, unsigned long long const&)
                      (auStack_e0, uStack_94, auStack_100);
            auStack_100[1] = 0;
            auStack_100[0] = 0;
            auStack_100[3] = 0;
            auStack_100[2] = 0;
            iVar5 = mgcl::ints::IntDecompressor<unsigned long long>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, unsigned long long*)
                              (auStack_100, iVar13 + iVar8, uStack_c4, uStack_90._4_4_, uStack_90, uStack_94, 
                               CONCAT44(auStack_e0[1], auStack_e0[0]));
            if (iVar5 == 0) {
                uStack_104 = 0;
                uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar6, &uStack_104);
                if ((uVar12 & 1) == 0) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001939302ec;
                }
                iVar8 = *(pcVar6 + 0x30);
                uVar12 = iVar8 + uStack_104;
                if (*(pcVar6 + 0x38) <= uVar12 && uVar12 != *(pcVar6 + 0x38)) {
                    uVar9 = **reloc.__stderrp;
                    goto code_r0x0001939302ec;
                }
                iVar13 = *(pcVar6 + 0x28);
                *(pcVar6 + 0x30) = uVar12;
                uStack_128 = 0;
                std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::vector(unsigned long, unsigned long long const&)
                          (&cStack_120, uStack_94, &uStack_128);
                iVar5 = mgcl::ints::IntDecompressor<unsigned long long>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, unsigned long long*)
                                  (auStack_100, iVar13 + iVar8, uStack_104, uStack_90._4_4_, uStack_90, uStack_94, 
                                   CONCAT71(Stack_11f, cStack_120));
                if (iVar5 == 0) {
                    uVar12 = uStack_94;
                    if (uStack_94 != 0) {
                        iVar8 = *param_2;
                        uVar11 = *(iVar8 + 0x2b8);
                        puVar14 = CONCAT44(auStack_e0[1], auStack_e0[0]);
                        puVar15 = CONCAT71(Stack_11f, cStack_120);
                        puVar16 = puVar10;
                        do {
                            uVar17 = *puVar16;
                            if (uVar11 < uVar17 || uVar11 == uVar17) goto code_r0x000193930364;
                            iVar13 = *(iVar8 + 0x2b0) + uVar17 * 0x20;
                            *(iVar13 + 0x10) = *puVar14;
                            *(iVar13 + 0x18) = *puVar15;
                            puVar16 = puVar16 + 1;
                            uVar12 = uVar12 + -1;
                            puVar14 = puVar14 + 1;
                            puVar15 = puVar15 + 1;
                        } while (uVar12 != 0);
                    }
                    iVar5 = 0;
                }
                else {
code_r0x000193930364:
                    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                    iVar5 = 6;
                }
                if (CONCAT71(Stack_11f, cStack_120) != 0) {
                    iStack_118 = CONCAT71(Stack_11f, cStack_120);
                    operator delete(void*)();
                }
            }
            else {
                uVar9 = **reloc.__stderrp;
code_r0x0001939302ec:
                fprintf(uVar9, 0x8ff + 0x193b8a000);
                iVar5 = 6;
            }
            mgcl::ints::IntDecompressor<unsigned long long>::~IntDecompressor()(auStack_100);
            if (CONCAT44(auStack_e0[1], auStack_e0[0]) != 0) {
                iStack_d8 = CONCAT44(auStack_e0[1], auStack_e0[0]);
                operator delete(void*)();
            }
        }
        else {
            uVar9 = **reloc.__stderrp;
code_r0x0001939301f8:
            fprintf(uVar9, 0x8ff + 0x193b8a000);
            iVar5 = 6;
        }
        mgcl::ints::IntDecompressor<unsigned int>::~IntDecompressor()(apuStack_c0);
        if (puVar10 != NULL) {
            operator delete(void*)(puVar10);
        }
        if (iVar5 == 0) goto code_r0x000193930238;
        if (iVar5 == 6) goto code_r0x00019392ffe4;
    }
    uVar12 = uStack_80;
    uVar18 = param_2;
    iVar19 = iStack_78;
    iVar8 = std::__1::chrono::steady_clock::now()();
    iVar13 = iStack_68;
    auStack_100[0] = uVar12;
    if (uVar12 != 0) {
        apuStack_c0[0] = auStack_100;
        iVar19 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar19 + 0x778, auStack_100, 0x74c + 0x193af9000, apuStack_c0, auStack_e0);
        iVar8 = SUB168(SEXT816(iVar8 - iVar13) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar19 + 0x20) = ((iVar8 >> 7) - (iVar8 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar7 = piStack_70;
    if (piVar7 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_70[1];
        iVar8 = tmp_ldXn;
        tmp_stXn = iVar8 + -1;
        iVar8 = tmp_stXn;
        piStack_70[1] = iVar8;
        iVar8 = tmp_ldXn;
        LORelease();
        if (iVar8 == 0) {
            (**(*piVar7 + 0x10))(piVar7);
            std::__1::__shared_weak_count::__release_weak()(piVar7);
        }
    }
code_r0x00019392fb98:
    return uVar18 & 1;
}
