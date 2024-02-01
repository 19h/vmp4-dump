
uint32_t geo::codec::_readLineAttributes(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    uint uVar1;
    uint uVar2;
    bool bVar3;
    int32_t iVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    char *pcVar11;
    int64_t iVar12;
    int64_t **ppiVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    float8 fVar19;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t aiStack_1b8 [4];
    uint32_t uStack_194;
    int64_t aiStack_190 [4];
    uint32_t uStack_16c;
    int64_t aiStack_168 [4];
    uint32_t uStack_144;
    int64_t aiStack_140 [4];
    uint32_t uStack_11c;
    uint64_t auStack_118 [4];
    uint32_t uStack_f8;
    uint32_t uStack_f4;
    int64_t aiStack_f0 [3];
    int64_t **ppiStack_d8;
    int64_t aiStack_d0 [3];
    int64_t **appiStack_b8 [2];
    ulong uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t *piStack_90;
    int64_t iStack_88;
    
    iStack_98 = *param_2;
    uVar10 = param_1[1];
    if (uVar10 != 0) {
        uVar8 = 0;
        do {
            if (*(*param_1 + uVar8 * 0x10) == 0x99) {
                pcVar11 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar8, 0x99, iStack_98 + 0x778);
                iStack_a0 = 0x4a4 + 0x193b8a000;
                iStack_98 = *param_2;
                piStack_90 = param_2[1];
                if (piStack_90 == NULL) goto code_r0x00019391c86c;
                goto code_r0x00019391c860;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 <= uVar10 && uVar10 != uVar8);
    }
    pcVar11 = NULL;
    iStack_a0 = 0x4a4 + 0x193b8a000;
    piStack_90 = param_2[1];
    if (piStack_90 != NULL) {
code_r0x00019391c860:
        tmp_ldXn = piStack_90[1];
        iVar15 = tmp_ldXn;
        tmp_stXn = iVar15 + 1;
        iVar15 = tmp_stXn;
        piStack_90[1] = iVar15;
        uVar5 = tmp_ldXn;
    }
code_r0x00019391c86c:
    iStack_88 = std::__1::chrono::steady_clock::now()();
    if (pcVar11 == NULL) {
        ppiVar13 = 0x1;
        goto code_r0x00019391c9fc;
    }
    uStack_a8 = 0;
    uVar10 = *(pcVar11 + 0x30) + 8;
    if (uVar10 < *(pcVar11 + 0x38) || uVar10 == *(pcVar11 + 0x38)) {
        fVar19 = *(*(pcVar11 + 0x28) + *(pcVar11 + 0x30));
        *(pcVar11 + 0x30) = uVar10;
        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar11, *0x8 + -0xa4);
        if ((uVar10 & 1) == 0) {
            uVar5 = **reloc.__stderrp;
            goto code_r0x00019391c974;
        }
        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar11, *0x8 + -0xa8);
        if ((uVar10 & 1) == 0) {
            uVar5 = **reloc.__stderrp;
            goto code_r0x00019391c974;
        }
        *(*0x8 + -200) = 0;
        *(*0x8 + -0xd0) = 0;
        *(*0x8 + -0xb8) = 0;
        *(*0x8 + -0xc0) = 0;
        *(*0x8 + -0xe8) = 0;
        *(*0x8 + -0xf0) = 0;
        *(*0x8 + -0xd8) = 0;
        *(&stack0x00000000 + -0xe0) = 0;
        uStack_f4 = 0;
        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar11, *0x8 + -0xf4);
        if ((uVar10 & 1) == 0) {
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            bVar3 = true;
        }
        else {
            uVar16 = uStack_f4;
            if (uVar16 == 0) {
                iVar7 = 0;
                iVar15 = 0;
            }
            else {
                iVar12 = uVar16 << 2;
                iVar7 = operator new(unsigned long)(iVar12);
                iVar15 = iVar7 + uVar16 * 4;
                bzero(iVar7, iVar12);
            }
            uVar1 = uStack_a8;
            uVar2 = uStack_a8._4_4_;
            auStack_118[0] = (auStack_118[0] >> 0x20) << 0x20;
            iVar4 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar11, auStack_118);
            if (iVar4 == 0) {
code_r0x00019391cb78:
                uVar5 = **reloc.__stderrp;
code_r0x00019391cb88:
                fprintf(uVar5, 0x8ff + 0x193b8a000);
                bVar3 = true;
            }
            else {
                iVar12 = *(pcVar11 + 0x30);
                uVar10 = iVar12 + auStack_118[0];
                if (*(pcVar11 + 0x38) <= uVar10 && uVar10 != *(pcVar11 + 0x38)) goto code_r0x00019391cb78;
                *(pcVar11 + 0x30) = uVar10;
                iVar4 = mgcl::ints::IntDecompressor<unsigned int>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, unsigned int*)
                                  (*0x8 + -0xd0, *(pcVar11 + 0x28) + iVar12, auStack_118[0], uVar2, uVar1, 
                                   iVar15 - iVar7 >> 2, iVar7);
                if (iVar4 != 0) goto code_r0x00019391cb78;
                uStack_f8 = 0;
                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar11, *0x8 + -0xf8);
                if ((uVar10 & 1) == 0) {
                    uVar5 = **reloc.__stderrp;
                    goto code_r0x00019391cb88;
                }
                uVar16 = uStack_f8;
                auStack_118[1] = 0;
                auStack_118[2] = 0;
                auStack_118[0] = 0;
                if (uVar16 != 0) {
                    iVar15 = uVar16 << 2;
                    auStack_118[0] = operator new(unsigned long)(iVar15);
                    uVar10 = auStack_118[0] + uVar16 * 4;
                    auStack_118[2] = uVar10;
                    bzero(auStack_118[0], iVar15);
                    auStack_118[1] = uVar10;
                }
                auStack_118[3] = 0;
                uVar10 = fcn.1938de984(pcVar11, *0x8 + -0xd0, uStack_a8._4_4_, uStack_a8, auStack_118);
                if ((uVar10 & 1) == 0) {
                    uVar5 = **reloc.__stderrp;
code_r0x00019391cef8:
                    fprintf(uVar5, 0x8ff + 0x193b8a000);
                    bVar3 = true;
                }
                else {
                    uStack_11c = 0;
                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar11, &uStack_11c);
                    if ((uVar10 & 1) == 0) {
                        uVar5 = **reloc.__stderrp;
                        goto code_r0x00019391cef8;
                    }
                    uVar16 = uStack_11c;
                    aiStack_140[1] = 0;
                    aiStack_140[2] = 0;
                    aiStack_140[0] = 0;
                    if (uVar16 != 0) {
                        iVar12 = uVar16 << 2;
                        aiStack_140[0] = operator new(unsigned long)(iVar12);
                        iVar15 = aiStack_140[0] + uVar16 * 4;
                        aiStack_140[2] = iVar15;
                        bzero(aiStack_140[0], iVar12);
                        aiStack_140[1] = iVar15;
                    }
                    aiStack_140[3] = 0;
                    uVar10 = bool geo::codec::decodeIntCompressorArray<int>(VMP4Chapter*, mgcl::ints::IntDecompressor<int>*, unsigned int, unsigned int, geo::codec::FixedBuffer<int>&)
                                       (pcVar11, *0x8 + -0xf0, uStack_a8._4_4_, uStack_a8, aiStack_140);
                    if ((uVar10 & 1) == 0) {
                        uVar5 = **reloc.__stderrp;
code_r0x00019391cf4c:
                        fprintf(uVar5, 0x8ff + 0x193b8a000);
                        bVar3 = true;
                    }
                    else {
                        uStack_144 = 0;
                        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar11, &uStack_144);
                        if ((uVar10 & 1) == 0) {
                            uVar5 = **reloc.__stderrp;
                            goto code_r0x00019391cf4c;
                        }
                        uVar16 = uStack_144;
                        aiStack_168[1] = 0;
                        aiStack_168[2] = 0;
                        aiStack_168[0] = 0;
                        if (uVar16 != 0) {
                            iVar12 = uVar16 << 2;
                            aiStack_168[0] = operator new(unsigned long)(iVar12);
                            iVar15 = aiStack_168[0] + uVar16 * 4;
                            aiStack_168[2] = iVar15;
                            bzero(aiStack_168[0], iVar12);
                            aiStack_168[1] = iVar15;
                        }
                        aiStack_168[3] = 0;
                        uVar10 = bool geo::codec::decodeIntCompressorArray<int>(VMP4Chapter*, mgcl::ints::IntDecompressor<int>*, unsigned int, unsigned int, geo::codec::FixedBuffer<int>&)
                                           (pcVar11, *0x8 + -0xf0, uStack_a8._4_4_, uStack_a8, aiStack_168);
                        if ((uVar10 & 1) == 0) {
                            uVar5 = **reloc.__stderrp;
code_r0x00019391d11c:
                            fprintf(uVar5, 0x8ff + 0x193b8a000);
                            bVar3 = true;
                        }
                        else {
                            uStack_16c = 0;
                            uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar11, &uStack_16c)
                            ;
                            if ((uVar10 & 1) == 0) {
                                uVar5 = **reloc.__stderrp;
                                goto code_r0x00019391d11c;
                            }
                            uVar16 = uStack_16c;
                            aiStack_190[1] = 0;
                            aiStack_190[2] = 0;
                            aiStack_190[0] = 0;
                            if (uVar16 != 0) {
                                iVar12 = uVar16 << 2;
                                aiStack_190[0] = operator new(unsigned long)(iVar12);
                                iVar15 = aiStack_190[0] + uVar16 * 4;
                                aiStack_190[2] = iVar15;
                                bzero(aiStack_190[0], iVar12);
                                aiStack_190[1] = iVar15;
                            }
                            aiStack_190[3] = 0;
                            uVar10 = bool geo::codec::decodeIntCompressorArray<int>(VMP4Chapter*, mgcl::ints::IntDecompressor<int>*, unsigned int, unsigned int, geo::codec::FixedBuffer<int>&)
                                               (pcVar11, *0x8 + -0xf0, uStack_a8._4_4_, uStack_a8, aiStack_190);
                            if ((uVar10 & 1) == 0) {
                                uVar5 = **reloc.__stderrp;
code_r0x00019391d170:
                                fprintf(uVar5, 0x8ff + 0x193b8a000);
                                bVar3 = true;
                            }
                            else {
                                uStack_194 = 0;
                                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                   (pcVar11, &uStack_194);
                                if ((uVar10 & 1) == 0) {
                                    uVar5 = **reloc.__stderrp;
                                    goto code_r0x00019391d170;
                                }
                                uVar16 = uStack_194;
                                aiStack_1b8[1] = 0;
                                aiStack_1b8[2] = 0;
                                aiStack_1b8[0] = 0;
                                if (uVar16 != 0) {
                                    iVar12 = uVar16 << 2;
                                    aiStack_1b8[0] = operator new(unsigned long)(iVar12);
                                    iVar15 = aiStack_1b8[0] + uVar16 * 4;
                                    aiStack_1b8[2] = iVar15;
                                    bzero(aiStack_1b8[0], iVar12);
                                    aiStack_1b8[1] = iVar15;
                                }
                                aiStack_1b8[3] = 0;
                                uVar10 = bool geo::codec::decodeIntCompressorArray<int>(VMP4Chapter*, mgcl::ints::IntDecompressor<int>*, unsigned int, unsigned int, geo::codec::FixedBuffer<int>&)
                                                   (pcVar11, *0x8 + -0xf0, uStack_a8._4_4_, uStack_a8, aiStack_1b8);
                                if ((uVar10 & 1) == 0) {
                                    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                                    bVar3 = true;
                                }
                                else {
                                    iVar15 = *param_2;
                                    uVar10 = *(iVar15 + 0x20);
                                    uVar8 = *(iVar15 + 0x28);
                                    iVar12 = uVar8 - uVar10;
                                    if (iVar12 + -1 < 0 == SBORROW8(iVar12, 1)) {
                                        iVar12 = 0;
                                        iVar15 = *(*(iVar15 + 0x318) + 0x20);
                                        do {
                                            if (*(uVar10 + 0x88) != 0) {
                                                uVar18 = 0;
                                                do {
                                                    uVar16 = *(iVar7 + iVar12 * 4);
                                                    iVar14 = iVar15 + *(uVar10 + 0x80) * 0x10 + (uVar18 << 4);
                                                    uStack_1c8 = 0;
                                                    uStack_1c0 = 0;
                                                    if ((uVar16 & 1) == 0) {
                                                        if (*(iVar14 + 8) != 0) {
                                                            uVar17 = 0;
                                                            do {
                                                                fcn.19393612c(*param_2 + 0xb68, &uStack_1c8);
                                                                uVar17 = uVar17 + 1;
                                                            } while (uVar17 < *(iVar14 + 8));
                                                        }
                                                    }
                                                    else {
                                                        auStack_118[3] = auStack_118[3] + 1;
                                                        if (*(iVar14 + 8) != 0) {
                                                            uVar17 = 0;
                                                            do {
                                                                if ((uVar16 >> 1 & 1) == 0) {
                                                                    if ((uVar16 >> 2 & 1) != 0)
                                                                    goto code_r0x00019391d09c;
code_r0x00019391d01c:
                                                                    if ((uVar16 >> 3 & 1) != 0)
                                                                    goto code_r0x00019391d0c8;
code_r0x00019391d020:
                                                                    if ((uVar16 >> 4 & 1) != 0) {
code_r0x00019391d024:
                                                                        iVar9 = aiStack_1b8[3];
                                                                        aiStack_1b8[3] = iVar9 + 1;
                                                                        uStack_1c0 = CONCAT44(fVar19 * *(aiStack_1b8[0]
                                                                                                        + iVar9 * 4), 
                                                                                              uStack_1c0);
                                                                    }
                                                                }
                                                                else {
                                                                    iVar9 = aiStack_140[3];
                                                                    aiStack_140[3] = iVar9 + 1;
                                                                    uStack_1c8 = CONCAT44(uStack_1c8._4_4_, 
                                                                                          fVar19 * *(aiStack_140[0] +
                                                                                                    iVar9 * 4));
                                                                    if ((uVar16 >> 2 & 1) == 0)
                                                                    goto code_r0x00019391d01c;
code_r0x00019391d09c:
                                                                    iVar9 = aiStack_168[3];
                                                                    aiStack_168[3] = iVar9 + 1;
                                                                    uStack_1c0 = CONCAT44(uStack_1c0._4_4_, 
                                                                                          fVar19 * *(aiStack_168[0] +
                                                                                                    iVar9 * 4));
                                                                    if ((uVar16 >> 3 & 1) == 0)
                                                                    goto code_r0x00019391d020;
code_r0x00019391d0c8:
                                                                    iVar9 = aiStack_190[3];
                                                                    aiStack_190[3] = iVar9 + 1;
                                                                    uStack_1c8 = CONCAT44(fVar19 * *(aiStack_190[0] +
                                                                                                    iVar9 * 4), 
                                                                                          uStack_1c8);
                                                                    if ((uVar16 >> 4 & 1) != 0)
                                                                    goto code_r0x00019391d024;
                                                                }
                                                                fcn.19393612c(*param_2 + 0xb68, &uStack_1c8);
                                                                uVar17 = uVar17 + 1;
                                                            } while (uVar17 < *(iVar14 + 8));
                                                        }
                                                    }
                                                    iVar12 = iVar12 + 1;
                                                    uVar18 = uVar18 + 1;
                                                } while (uVar18 < *(uVar10 + 0x88));
                                            }
                                            uVar10 = uVar10 + 0x100;
                                        } while (uVar10 < uVar8);
                                    }
                                    bVar3 = false;
                                }
                                if (aiStack_1b8[0] != 0) {
                                    aiStack_1b8[1] = aiStack_1b8[0];
                                    operator delete(void*)();
                                }
                            }
                            if (aiStack_190[0] != 0) {
                                aiStack_190[1] = aiStack_190[0];
                                operator delete(void*)();
                            }
                        }
                        if (aiStack_168[0] != 0) {
                            aiStack_168[1] = aiStack_168[0];
                            operator delete(void*)();
                        }
                    }
                    if (aiStack_140[0] != 0) {
                        aiStack_140[1] = aiStack_140[0];
                        operator delete(void*)();
                    }
                }
                if (auStack_118[0] != 0) {
                    auStack_118[1] = auStack_118[0];
                    operator delete(void*)();
                }
            }
            if (iVar7 != 0) {
                operator delete(void*)(iVar7);
            }
        }
        ppiVar13 = ppiStack_d8;
        ppiStack_d8 = NULL;
        if (ppiVar13 != NULL) {
            piVar6 = *ppiVar13;
            *ppiVar13 = NULL;
            if (piVar6 != NULL) {
                iVar15 = *piVar6;
                *piVar6 = 0;
                if (iVar15 != 0) {
                    if (*(iVar15 + 0x68) != 0) {
                        *(iVar15 + 0x70) = *(iVar15 + 0x68);
                        operator delete(void*)();
                    }
                    if (*(iVar15 + 0x50) != 0) {
                        *(iVar15 + 0x58) = *(iVar15 + 0x50);
                        operator delete(void*)();
                    }
                    operator delete(void*)(iVar15);
                }
                operator delete(void*)(piVar6);
            }
            operator delete(void*)(ppiVar13);
        }
        if (aiStack_f0[0] != 0) {
            aiStack_f0[1] = aiStack_f0[0];
            operator delete(void*)();
        }
        ppiVar13 = appiStack_b8[0];
        appiStack_b8[0] = NULL;
        if (ppiVar13 != NULL) {
            piVar6 = *ppiVar13;
            *ppiVar13 = NULL;
            if (piVar6 != NULL) {
                iVar15 = *piVar6;
                *piVar6 = 0;
                if (iVar15 != 0) {
                    if (*(iVar15 + 0x68) != 0) {
                        *(iVar15 + 0x70) = *(iVar15 + 0x68);
                        operator delete(void*)();
                    }
                    if (*(iVar15 + 0x50) != 0) {
                        *(iVar15 + 0x58) = *(iVar15 + 0x50);
                        operator delete(void*)();
                    }
                    operator delete(void*)(iVar15);
                }
                operator delete(void*)(piVar6);
            }
            operator delete(void*)(ppiVar13);
        }
        if (aiStack_d0[0] != 0) {
            aiStack_d0[1] = aiStack_d0[0];
            operator delete(void*)();
        }
        if (bVar3) goto code_r0x00019391c98c;
        if ((bVar3) || (ppiVar13 = 0x1,  param_1 == NULL)) goto code_r0x00019391c9fc;
    }
    else {
        uVar5 = **reloc.__stderrp;
code_r0x00019391c974:
        fprintf(uVar5, 0x8ff + 0x193b8a000);
code_r0x00019391c98c:
        ppiVar13 = NULL;
        if (param_1 == NULL) goto code_r0x00019391c9fc;
    }
    if (*pcVar11 != '\0') {
        piVar6 = geo::codec::Allocator::instance()();
        (**(*piVar6 + 0x28))(piVar6, *(pcVar11 + 0x28), 0);
    }
    piVar6 = geo::codec::Allocator::instance()();
    (**(*piVar6 + 0x28))(piVar6, pcVar11, 0);
code_r0x00019391c9fc:
    iVar15 = iStack_a0;
    iVar14 = iStack_98;
    iVar7 = std::__1::chrono::steady_clock::now()();
    iVar12 = iStack_88;
    aiStack_f0[0] = iVar15;
    if (iVar15 != 0) {
        aiStack_d0[0] = *0x8 + -0xf0;
        iVar15 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar14 + 0x778, *0x8 + -0xf0, 0x74c + 0x193af9000, *0x8 + -0xd0, auStack_118);
        iVar7 = SUB168(SEXT816(iVar7 - iVar12) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar15 + 0x20) = ((iVar7 >> 7) - (iVar7 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar6 = piStack_90;
    if (piVar6 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_90[1];
        iVar15 = tmp_ldXn;
        tmp_stXn = iVar15 + -1;
        iVar15 = tmp_stXn;
        piStack_90[1] = iVar15;
        iVar15 = tmp_ldXn;
        LORelease();
        if (iVar15 == 0) {
            (**(*piVar6 + 0x10))(piVar6);
            std::__1::__shared_weak_count::__release_weak()(piVar6);
        }
    }
    return ppiVar13 & 1;
}
