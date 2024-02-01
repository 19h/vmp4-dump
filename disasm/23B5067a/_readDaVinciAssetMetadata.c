
uint64_t geo::codec::_readDaVinciAssetMetadata(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    code *UNRECOVERED_JUMPTABLE;
    int32_t iVar4;
    char *pcVar5;
    int64_t *piVar6;
    ulong *puVar7;
    ulong uVar8;
    int64_t **ppiVar9;
    uint64_t uVar10;
    int64_t **ppiVar11;
    uint64_t uVar12;
    uint16_t *puVar13;
    uint16_t *puVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong *puVar18;
    int64_t iVar19;
    bool bVar20;
    int64_t iVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint32_t uVar24;
    int64_t **ppiVar25;
    int64_t *piVar26;
    int64_t **ppiVar27;
    int64_t **ppiVar28;
    int64_t **ppiVar29;
    uint16_t *puVar30;
    ulong uVar31;
    ulong uVar32;
    ulong uVar33;
    ulong uVar34;
    ulong uVar35;
    ulong uVar36;
    uint64_t uStack_1a8;
    int64_t iStack_1a0;
    int64_t aiStack_198 [4];
    uint32_t uStack_174;
    int64_t aiStack_170 [5];
    int64_t aiStack_148 [4];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    int64_t aiStack_110 [4];
    int64_t aiStack_f0 [5];
    int64_t *piStack_c8;
    int64_t *piStack_c0;
    int64_t *piStack_b8;
    ulong uStack_b0;
    uint32_t uStack_a4;
    uint32_t uStack_a0;
    ulong uStack_9c;
    uint uStack_94;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t *piStack_80;
    int64_t iStack_78;
    
    uVar12 = param_1[1];
    if (uVar12 != 0) {
        uVar10 = 0;
        piVar26 = NULL;
        uVar24 = 0;
        do {
            if (*(*param_1 + uVar10 * 0x10) == 0x9c) {
                pcVar5 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar10, 0x9c, *param_2 + 0x778);
                if (pcVar5 != NULL) {
                    piVar6 = geo::codec::Allocator::instance()();
                    puVar7 = (**(*piVar6 + 0x10))(piVar6, 0x30, 0x30);
                    if (puVar7 != NULL) {
                        puVar7[1] = 0;
                        *puVar7 = puVar7 + 1;
                        puVar7[5] = 0;
                        puVar7[4] = 0;
                        puVar7[2] = 0;
                        puVar7[3] = puVar7 + 4;
                    }
                    iStack_88 = *param_2;
                    *(iStack_88 + 0x8c0) = puVar7;
                    iStack_90 = 0x550 + 0x193b8a000;
                    piStack_80 = param_2[1];
                    if (piStack_80 != NULL) {
                        tmp_ldXn = piStack_80[1];
                        iVar21 = tmp_ldXn;
                        tmp_stXn = iVar21 + 1;
                        iVar21 = tmp_stXn;
                        piStack_80[1] = iVar21;
                        uVar8 = tmp_ldXn;
                    }
                    iStack_78 = std::__1::chrono::steady_clock::now()();
                    uStack_94 = 0;
                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x94);
                    if ((uVar12 & 1) == 0) {
                        uVar8 = **reloc.__stderrp;
code_r0x00019391f4cc:
                        fprintf(uVar8, 0x8ff + 0x193b8a000);
                        goto code_r0x00019391f4e4;
                    }
                    uStack_9c = 0;
                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x98);
                    if ((uVar12 & 1) == 0) {
                        uVar8 = **reloc.__stderrp;
                        goto code_r0x00019391f4cc;
                    }
                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x9c);
                    if ((uVar12 & 1) == 0) {
                        uVar8 = **reloc.__stderrp;
                        goto code_r0x00019391f4cc;
                    }
                    uStack_a0 = 0;
                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0xa0);
                    if ((uVar12 & 1) == 0) {
                        uVar8 = **reloc.__stderrp;
                        goto code_r0x00019391f4cc;
                    }
                    uStack_a4 = 0;
                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0xa4);
                    if ((uVar12 & 1) == 0) {
                        uVar8 = **reloc.__stderrp;
                        goto code_r0x00019391f4cc;
                    }
                    uVar1 = uStack_a4;
                    piStack_c0 = NULL;
                    piStack_b8 = NULL;
                    piStack_c8 = NULL;
                    if (uVar1 != 0) {
                        iVar21 = uVar1 << 3;
                        piStack_c8 = operator new(unsigned long)(iVar21);
                        piVar6 = piStack_c8 + uVar1;
                        piStack_b8 = piVar6;
                        bzero(piStack_c8, iVar21);
                        piStack_c0 = piVar6;
                    }
                    uStack_b0 = 0;
                    aiStack_f0[1] = 0;
                    aiStack_f0[0] = 0;
                    aiStack_f0[3] = 0;
                    aiStack_f0[2] = 0;
                    uVar12 = fcn.1938dece4(pcVar5, aiStack_f0, uStack_9c._4_4_, uStack_9c, *0x8 + -200);
                    if ((uVar12 & 1) == 0) {
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        iVar4 = 6;
                        goto code_r0x00019391fcf8;
                    }
                    uVar1 = uStack_a0;
                    aiStack_110[1] = 0;
                    aiStack_110[2] = 0;
                    aiStack_110[0] = 0;
                    if (uVar1 != 0) {
                        iVar22 = uVar1 << 1;
                        aiStack_110[0] = operator new(unsigned long)(iVar22);
                        iVar21 = aiStack_110[0] + uVar1 * 2;
                        aiStack_110[2] = iVar21;
                        bzero(aiStack_110[0], iVar22);
                        aiStack_110[1] = iVar21;
                    }
                    aiStack_110[3] = 0;
                    uStack_128 = 0;
                    aiStack_148[3] = 0;
                    uStack_118 = 0;
                    uStack_120 = 0;
                    uVar12 = fcn.1938df044(pcVar5, aiStack_148 + 3, uStack_9c._4_4_, uStack_9c, aiStack_110);
                    if ((uVar12 & 1) == 0) {
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        iVar4 = 6;
                        goto code_r0x00019391fce0;
                    }
                    aiStack_148[0] = 0;
                    aiStack_148[1] = 0;
                    aiStack_148[2] = 0;
                    uVar1 = uStack_a0;
                    aiStack_170[1] = 0;
                    aiStack_170[2] = 0;
                    aiStack_170[0] = 0;
                    if (uVar1 != 0) {
                        iVar22 = uVar1 << 1;
                        aiStack_170[0] = operator new(unsigned long)(iVar22);
                        iVar21 = aiStack_170[0] + uVar1 * 2;
                        aiStack_170[2] = iVar21;
                        bzero(aiStack_170[0], iVar22);
                        aiStack_170[1] = iVar21;
                    }
                    aiStack_170[3] = 0;
                    uVar12 = fcn.1938df044(pcVar5, aiStack_148 + 3, uStack_9c._4_4_, uStack_9c, aiStack_170);
                    if ((uVar12 & 1) == 0) {
                        uVar8 = **reloc.__stderrp;
code_r0x00019391f724:
                        fprintf(uVar8, 0x8ff + 0x193b8a000);
                        iVar4 = 6;
                        uVar24 = 0;
                        goto code_r0x00019391f740;
                    }
                    uStack_174 = 0;
                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, &uStack_174);
                    if ((uVar12 & 1) == 0) {
                        uVar8 = **reloc.__stderrp;
                        goto code_r0x00019391f724;
                    }
                    uVar1 = uStack_174;
                    aiStack_198[1] = 0;
                    aiStack_198[2] = 0;
                    aiStack_198[0] = 0;
                    if (uVar1 != 0) {
                        iVar22 = uVar1 << 1;
                        aiStack_198[0] = operator new(unsigned long)(iVar22);
                        iVar21 = aiStack_198[0] + uVar1 * 2;
                        aiStack_198[2] = iVar21;
                        bzero(aiStack_198[0], iVar22);
                        aiStack_198[1] = iVar21;
                    }
                    aiStack_198[3] = 0;
                    uVar12 = fcn.1938df044(pcVar5, aiStack_148 + 3, uStack_9c._4_4_, uStack_9c, aiStack_198);
                    if ((uVar12 & 1) == 0) goto code_r0x00019391fc80;
                    fcn.1939340cc(aiStack_148, uStack_a0);
                    if (uStack_a0 != 0) {
                        uVar12 = 0;
                        uVar10 = 0;
                        do {
                            uVar3 = *(aiStack_170[0] + uVar12 * 2);
                            piVar26 = aiStack_148[0] + uVar12 * 0x18;
                            std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::resize(unsigned long)
                                      (piVar26, uVar3);
                            if (uVar3 != 0) {
                                uVar15 = 0;
                                uVar16 = aiStack_198[1] - aiStack_198[0] >> 1;
                                uVar17 = 0;
                                if (uVar10 <= uVar16) {
                                    uVar17 = uVar16 - uVar10;
                                }
                                do {
                                    if (uVar17 == uVar15) goto code_r0x00019391fc80;
                                    *(*piVar26 + uVar15 * 2) = *(aiStack_198[0] + uVar10 * 2 + uVar15 * 2);
                                    uVar15 = uVar15 + 1;
                                } while (uVar3 != uVar15);
                                uVar10 = uVar10 + uVar15;
                            }
                            iVar4 = 0;
                            uVar12 = uVar12 + 1;
                        } while (uVar12 < uStack_a0);
                        goto code_r0x00019391fca8;
                    }
                    iVar4 = 0;
                    if (aiStack_198[0] == 0) goto code_r0x00019391f740;
                    goto code_r0x00019391fcb0;
                }
                break;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 <= uVar12 && uVar12 != uVar10);
    }
    uVar24 = 1;
    goto code_r0x00019391f448;
code_r0x00019391fc80:
    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
    iVar4 = 6;
code_r0x00019391fca8:
    uVar24 = piVar26;
    if (aiStack_198[0] != 0) {
code_r0x00019391fcb0:
        aiStack_198[1] = aiStack_198[0];
        operator delete(void*)();
        uVar24 = uVar24;
    }
code_r0x00019391f740:
    if (aiStack_170[0] != 0) {
        aiStack_170[1] = aiStack_170[0];
        operator delete(void*)();
    }
    if (iVar4 == 0) {
        aiStack_170[1] = 0;
        aiStack_170[0] = 0;
        aiStack_170[3] = 0;
        aiStack_170[2] = 0;
        uVar12 = uStack_a0;
        aiStack_198[1] = 0;
        aiStack_198[2] = 0;
        aiStack_198[0] = 0;
        if (uStack_a0 != 0) {
            aiStack_198[0] = operator new(unsigned long)(uVar12);
            iVar21 = aiStack_198[0] + uVar12;
            aiStack_198[2] = iVar21;
            bzero(aiStack_198[0], uVar12);
            aiStack_198[1] = iVar21;
        }
        aiStack_198[3] = 0;
        iVar4 = fcn.1938df1f4(pcVar5, aiStack_170, uStack_9c._4_4_, uStack_9c, aiStack_198);
        if (iVar4 == 0) {
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            iVar4 = 6;
        }
        else if (uStack_a0 == 0) {
            iVar4 = 0;
        }
        else {
            uStack_1a8 = 0;
            do {
                piVar26 = piStack_c8[*(aiStack_110[0] + uStack_1a8 * 2)];
                uVar2 = *(aiStack_198[0] + uStack_1a8);
                iStack_1a0 = aiStack_148[0];
                ppiVar25 = *(*param_2 + 0x8c0);
                ppiVar29 = ppiVar25 + 1;
                ppiVar11 = *ppiVar29;
                ppiVar27 = ppiVar29;
                if (*ppiVar29 != NULL) {
                    do {
                        while( true ) {
                            ppiVar9 = ppiVar11;
                            ppiVar27 = ppiVar9;
                            if (uVar2 < *(ppiVar9 + 4)) break;
                            if (uVar2 <= *(ppiVar9 + 4)) {
                                goto code_r0x00019391f894;
                            }
                            ppiVar11 = ppiVar9[1];
                            if (ppiVar9[1] == NULL) {
                                ppiVar29 = ppiVar9 + 8;
                                goto code_r0x00019391f83c;
                            }
                        }
                        ppiVar29 = ppiVar9;
                        ppiVar11 = *ppiVar9;
                    } while (*ppiVar9 != NULL);
                }
code_r0x00019391f83c:
                ppiVar9 = operator new(unsigned long)(0x40);
                *(ppiVar9 + 4) = uVar2;
                ppiVar9[6] = NULL;
                ppiVar9[7] = NULL;
                ppiVar9[5] = NULL;
                *ppiVar9 = NULL;
                ppiVar9[1] = NULL;
                ppiVar9[2] = ppiVar27;
                *ppiVar29 = ppiVar9;
                ppiVar11 = ppiVar9;
                if (**ppiVar25 != NULL) {
                    *ppiVar25 = **ppiVar25;
                    ppiVar11 = *ppiVar29;
                }
                void std::__1::__tree_balance_after_insert[abi:v160006]<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*)
                          (ppiVar25[1], ppiVar11);
                ppiVar25[2] = ppiVar25[2] + 1;
code_r0x00019391f894:
                ppiVar29 = ppiVar9[6];
                if (ppiVar29 == ppiVar9[7]) {
                    ppiVar25 = ppiVar9[5];
                    uVar10 = ppiVar29 - ppiVar25;
                    iVar21 = uVar10 >> 3;
                    uVar12 = iVar21 + 1;
                    if (uVar12 >> 0x3d != 0) {
                        std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__throw_length_error[abi:v160006]() const
                                  ();
code_r0x00019391fd58:
    // WARNING: Treating indirect jump as call
                        UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x19391fd5c);
                        uVar12 = (*UNRECOVERED_JUMPTABLE)();
                        return uVar12;
                    }
                    uVar15 = uVar10 >> 2;
                    if (uVar15 < uVar12 || uVar15 == uVar12) {
                        uVar15 = uVar12;
                    }
                    if (0x7ffffffffffffff7 < uVar10) {
                        uVar15 = 0x1fffffffffffffff;
                    }
                    if (uVar15 == 0) {
                        iVar22 = 0;
                    }
                    else {
                        if (uVar15 >> 0x3d != 0) {
                            std::__throw_bad_array_new_length[abi:v160006]()();
                            goto code_r0x00019391fd58;
                        }
                        iVar22 = operator new(unsigned long)(uVar15 << 3);
                    }
                    ppiVar11 = iVar22 + iVar21 * 8;
                    ppiVar27 = ppiVar11 + 1;
                    *ppiVar11 = piVar26;
                    if (ppiVar29 != ppiVar25) {
                        uVar12 = ppiVar29 + (-8 - ppiVar25);
                        ppiVar28 = ppiVar29;
                        if ((0x57 < uVar12) && (0x3f < ppiVar29 + (-iVar22 - uVar10))) {
                            uVar12 = (uVar12 >> 3) + 1;
                            uVar17 = uVar12 & 0x3ffffffffffffff8;
                            ppiVar28 = ppiVar29 + -uVar17;
                            ppiVar11 = ppiVar11 + -uVar17;
                            puVar7 = ppiVar29 + -0x20;
                            puVar18 = iVar22 + iVar21 * 8 + -0x20;
                            uVar10 = uVar17;
                            do {
                                uVar32 = *puVar7;
                                uVar31 = puVar7[3];
                                uVar8 = puVar7[2];
                                uVar36 = puVar7[-3];
                                uVar35 = puVar7[-4];
                                uVar34 = puVar7[-1];
                                uVar33 = puVar7[-2];
                                puVar18[1] = puVar7[1];
                                *puVar18 = uVar32;
                                puVar18[3] = uVar31;
                                puVar18[2] = uVar8;
                                puVar18[-3] = uVar36;
                                puVar18[-4] = uVar35;
                                puVar18[-1] = uVar34;
                                puVar18[-2] = uVar33;
                                puVar7 = puVar7 + -0x40;
                                puVar18 = puVar18 + -0x40;
                                uVar10 = uVar10 + -8;
                            } while (uVar10 != 0);
                            if (uVar12 == uVar17) goto code_r0x00019391f99c;
                        }
                        do {
                            ppiVar28 = ppiVar28 + -1;
                            ppiVar11 = ppiVar11 + -1;
                            *ppiVar11 = *ppiVar28;
                        } while (ppiVar28 != ppiVar25);
                    }
code_r0x00019391f99c:
                    ppiVar9[5] = ppiVar11;
                    ppiVar9[6] = ppiVar27;
                    ppiVar9[7] = iVar22 + uVar15 * 8;
                    if (ppiVar25 != NULL) {
                        operator delete(void*)(ppiVar25);
                    }
                }
                else {
                    *ppiVar29 = piVar26;
                    ppiVar9[6] = ppiVar29 + 1;
                }
                puVar13 = *(iStack_1a0 + uStack_1a8 * 0x18 + 8);
                puVar14 = puVar13;
                for (puVar30 = *(iStack_1a0 + uStack_1a8 * 0x18); uVar24 = ppiVar25,  puVar30 != puVar14;
                    puVar30 = puVar30 + 1) {
                    piVar26 = piStack_c8[*puVar30];
                    ppiVar25 = *(*param_2 + 0x8c0);
                    ppiVar29 = ppiVar25 + 4;
                    ppiVar11 = *ppiVar29;
                    ppiVar27 = ppiVar29;
                    if (*ppiVar29 != NULL) {
                        do {
                            while( true ) {
                                ppiVar9 = ppiVar11;
                                ppiVar27 = ppiVar9;
                                if (uVar2 < *(ppiVar9 + 4)) break;
                                if (uVar2 <= *(ppiVar9 + 4)) {
                                    ppiVar29 = ppiVar9[6];
                                    if (ppiVar29 == ppiVar9[7]) goto code_r0x00019391fab0;
                                    goto code_r0x00019391f9e4;
                                }
                                ppiVar11 = ppiVar9[1];
                                if (ppiVar9[1] == NULL) {
                                    ppiVar29 = ppiVar9 + 8;
                                    goto code_r0x00019391fa54;
                                }
                            }
                            ppiVar29 = ppiVar9;
                            ppiVar11 = *ppiVar9;
                        } while (*ppiVar9 != NULL);
                    }
code_r0x00019391fa54:
                    ppiVar9 = operator new(unsigned long)(0x40);
                    *(ppiVar9 + 4) = uVar2;
                    ppiVar9[6] = NULL;
                    ppiVar9[7] = NULL;
                    ppiVar9[5] = NULL;
                    *ppiVar9 = NULL;
                    ppiVar9[1] = NULL;
                    ppiVar9[2] = ppiVar27;
                    *ppiVar29 = ppiVar9;
                    ppiVar11 = ppiVar9;
                    if (*ppiVar25[3] != NULL) {
                        ppiVar25[3] = *ppiVar25[3];
                        ppiVar11 = *ppiVar29;
                    }
                    void std::__1::__tree_balance_after_insert[abi:v160006]<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*)
                              (ppiVar25[4], ppiVar11);
                    ppiVar25[5] = ppiVar25[5] + 1;
                    ppiVar29 = ppiVar9[6];
                    if (ppiVar29 != ppiVar9[7]) {
code_r0x00019391f9e4:
                        *ppiVar29 = piVar26;
                        ppiVar9[6] = ppiVar29 + 1;
                    }
                    else {
code_r0x00019391fab0:
                        ppiVar25 = ppiVar9[5];
                        uVar10 = ppiVar29 - ppiVar25;
                        iVar21 = uVar10 >> 3;
                        uVar12 = iVar21 + 1;
                        if (uVar12 >> 0x3d != 0) {
                            std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__throw_length_error[abi:v160006]() const
                                      ();
                            goto code_r0x00019391fd58;
                        }
                        uVar15 = uVar10 >> 2;
                        if (uVar15 < uVar12 || uVar15 == uVar12) {
                            uVar15 = uVar12;
                        }
                        if (0x7ffffffffffffff7 < uVar10) {
                            uVar15 = 0x1fffffffffffffff;
                        }
                        if (uVar15 == 0) {
                            iVar22 = 0;
                        }
                        else {
                            if (uVar15 >> 0x3d != 0) {
                                std::__throw_bad_array_new_length[abi:v160006]()();
                                goto code_r0x00019391fd58;
                            }
                            iVar22 = operator new(unsigned long)(uVar15 << 3);
                        }
                        ppiVar11 = iVar22 + iVar21 * 8;
                        ppiVar27 = ppiVar11 + 1;
                        *ppiVar11 = piVar26;
                        if (ppiVar29 != ppiVar25) {
                            uVar12 = ppiVar29 + (-8 - ppiVar25);
                            ppiVar28 = ppiVar29;
                            if ((0x57 < uVar12) && (0x3f < ppiVar29 + (-iVar22 - uVar10))) {
                                uVar12 = (uVar12 >> 3) + 1;
                                uVar17 = uVar12 & 0x3ffffffffffffff8;
                                ppiVar28 = ppiVar29 + -uVar17;
                                ppiVar11 = ppiVar11 + -uVar17;
                                puVar7 = ppiVar29 + -0x20;
                                puVar18 = iVar22 + iVar21 * 8 + -0x20;
                                uVar10 = uVar17;
                                do {
                                    uVar32 = *puVar7;
                                    uVar31 = puVar7[3];
                                    uVar8 = puVar7[2];
                                    uVar36 = puVar7[-3];
                                    uVar35 = puVar7[-4];
                                    uVar34 = puVar7[-1];
                                    uVar33 = puVar7[-2];
                                    puVar18[1] = puVar7[1];
                                    *puVar18 = uVar32;
                                    puVar18[3] = uVar31;
                                    puVar18[2] = uVar8;
                                    puVar18[-3] = uVar36;
                                    puVar18[-4] = uVar35;
                                    puVar18[-1] = uVar34;
                                    puVar18[-2] = uVar33;
                                    puVar7 = puVar7 + -0x40;
                                    puVar18 = puVar18 + -0x40;
                                    uVar10 = uVar10 + -8;
                                } while (uVar10 != 0);
                                if (uVar12 == uVar17) goto code_r0x00019391fba0;
                            }
                            do {
                                ppiVar28 = ppiVar28 + -1;
                                ppiVar11 = ppiVar11 + -1;
                                *ppiVar11 = *ppiVar28;
                            } while (ppiVar28 != ppiVar25);
                        }
code_r0x00019391fba0:
                        ppiVar9[5] = ppiVar11;
                        ppiVar9[6] = ppiVar27;
                        ppiVar9[7] = iVar22 + uVar15 * 8;
                        if (ppiVar25 != NULL) {
                            operator delete(void*)(ppiVar25);
                        }
                    }
                    puVar14 = puVar13;
                }
                uStack_1a8 = uStack_1a8 + 1;
            } while (uStack_1a8 < uStack_a0);
            iVar4 = 0;
        }
        if (aiStack_198[0] != 0) {
            aiStack_198[1] = aiStack_198[0];
            operator delete(void*)();
        }
        mgcl::ints::IntDecompressor<unsigned char>::~IntDecompressor()(aiStack_170);
    }
    fcn.1939344b4(aiStack_148);
code_r0x00019391fce0:
    mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(aiStack_148 + 3);
    if (aiStack_110[0] != 0) {
        aiStack_110[1] = aiStack_110[0];
        operator delete(void*)();
    }
code_r0x00019391fcf8:
    mgcl::ints::IntDecompressor<unsigned long long>::~IntDecompressor()(aiStack_f0);
    if (piStack_c8 != NULL) {
        piStack_c0 = piStack_c8;
        operator delete(void*)();
    }
    if (iVar4 == 6) {
code_r0x00019391f4e4:
        bVar20 = false;
        if (*pcVar5 != '\0') {
code_r0x00019391f4f0:
            piVar26 = geo::codec::Allocator::instance()();
            (**(*piVar26 + 0x28))(piVar26, *(pcVar5 + 0x28), 0);
        }
code_r0x00019391f520:
        piVar26 = geo::codec::Allocator::instance()();
        (**(*piVar26 + 0x28))(piVar26, pcVar5, 0);
        if (bVar20) {
            uVar24 = 1;
        }
        else if (*(*param_2 + 0x8c0) == 0) {
            uVar24 = 0;
        }
        else {
            piVar26 = geo::codec::Allocator::instance()();
            iVar21 = *param_2;
            iVar22 = *(iVar21 + 0x8c0);
            if (iVar22 != 0) {
                std::__1::__tree<std::__1::__value_type<unsigned char, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > >, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > >, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > >, void*>*)
                          (iVar22 + 0x18, *(iVar22 + 0x20));
                std::__1::__tree<std::__1::__value_type<unsigned char, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > >, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > >, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > >, void*>*)
                          (iVar22, *(iVar22 + 8));
                (**(*piVar26 + 0x28))(piVar26, iVar22, 0x30);
                iVar21 = *param_2;
            }
            uVar24 = 0;
            *(iVar21 + 0x8c0) = 0;
        }
    }
    else if (iVar4 == 0) {
        bVar20 = true;
        if (*pcVar5 != '\0') goto code_r0x00019391f4f0;
        goto code_r0x00019391f520;
    }
    iVar21 = iStack_90;
    iVar23 = iStack_88;
    iVar22 = std::__1::chrono::steady_clock::now()();
    iVar19 = iStack_78;
    aiStack_f0[0] = iVar21;
    if (iVar21 != 0) {
        piStack_c8 = aiStack_f0;
        iVar21 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar23 + 0x778, aiStack_f0, 0x74c + 0x193af9000, *0x8 + -200, aiStack_110);
        iVar22 = SUB168(SEXT816(iVar22 - iVar19) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar21 + 0x20) = ((iVar22 >> 7) - (iVar22 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar26 = piStack_80;
    if (piVar26 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_80[1];
        iVar21 = tmp_ldXn;
        tmp_stXn = iVar21 + -1;
        iVar21 = tmp_stXn;
        piStack_80[1] = iVar21;
        iVar21 = tmp_ldXn;
        LORelease();
        if (iVar21 == 0) {
            (**(*piVar26 + 0x10))(piVar26);
            std::__1::__shared_weak_count::__release_weak()(piVar26);
        }
    }
code_r0x00019391f448:
    return uVar24 & 1;
}
