
uint32_t geo::codec::_readSupplementalFeatureIDs(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    char cVar1;
    int32_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    int64_t aiStack_1b8 [4];
    uint64_t uStack_198;
    int64_t aiStack_190 [4];
    int64_t aiStack_170 [4];
    uint64_t auStack_150 [4];
    uint64_t auStack_130 [4];
    int64_t aiStack_110 [4];
    ulong auStack_f0 [4];
    ulong auStack_d0 [4];
    ulong auStack_b0 [5];
    uint32_t uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    
    uVar8 = param_1[1];
    if (uVar8 != 0) {
        uVar7 = 0;
        do {
            if (*(*param_1 + uVar7 * 0x10) == 0xa2) {
                pcVar3 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar7, 0xa2, *param_2 + 0x778);
                if (pcVar3 != NULL) {
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_84 = 0;
                    iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, *0x8 + -0x74);
                    if ((((iVar2 == 0) ||
                         (iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, *0x8 + -0x78), 
                         iVar2 == 0)) ||
                        (iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, *0x8 + -0x7c), 
                        iVar2 == 0)) ||
                       ((iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, *0x8 + -0x80), 
                        iVar2 == 0 ||
                        (iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, *0x8 + -0x84), 
                        iVar2 == 0)))) {
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        goto code_r0x0001939252ac;
                    }
                    uVar14 = uStack_84;
                    iVar2 = uStack_80;
                    *(*0x8 + -0xa8) = 0;
                    *(*0x8 + -0xb0) = 0;
                    *(*0x8 + -0x98) = 0;
                    *(*0x8 + -0xa0) = 0;
                    *(*0x8 + -200) = 0;
                    *(*0x8 + -0xd0) = 0;
                    *(*0x8 + -0xb8) = 0;
                    *(*0x8 + -0xc0) = 0;
                    *(*0x8 + -0xe8) = 0;
                    *(*0x8 + -0xf0) = 0;
                    *(*0x8 + -0xd8) = 0;
                    *(&stack0x00000000 + -0xe0) = 0;
                    uVar8 = uStack_80._4_4_;
                    uVar13 = uStack_80._4_4_;
                    aiStack_110[1] = 0;
                    aiStack_110[2] = 0;
                    aiStack_110[0] = 0;
                    if (uStack_80._4_4_ == 0) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = operator new(unsigned long)(uVar8);
                        aiStack_110[0] = iVar4;
                        aiStack_110[2] = iVar4 + uVar8;
                        bzero(iVar4, uVar8);
                        aiStack_110[1] = iVar4 + uVar8;
                    }
                    aiStack_110[3] = 0;
                    if (aiStack_110[1] - iVar4 != uVar8) {
                        uVar6 = **reloc.__stderrp;
                    }
                    else {
                        uVar8 = fcn.1938df1f4(pcVar3, *0x8 + -0xb0, uStack_78._4_4_, uStack_78, aiStack_110);
                        if ((uVar8 & 1) != 0) {
                            uVar8 = uStack_80._4_4_;
                            auStack_130[1] = 0;
                            auStack_130[2] = 0;
                            auStack_130[0] = 0;
                            if (uStack_80._4_4_ == 0) {
                                uVar7 = 0;
                            }
                            else {
                                uVar7 = operator new(unsigned long)(uVar8 << 2);
                                uVar15 = uVar7 + uVar8 * 4;
                                auStack_130[0] = uVar7;
                                auStack_130[2] = uVar15;
                                bzero(uVar7, uVar8 << 2);
                                auStack_130[1] = uVar15;
                            }
                            auStack_130[3] = 0;
                            if (uVar8 != auStack_130[1] - uVar7 >> 2) {
                                uVar6 = **reloc.__stderrp;
                            }
                            else {
                                uVar8 = fcn.1938de984(pcVar3, *0x8 + -0xd0, uStack_78._4_4_, uStack_78, auStack_130);
                                if ((uVar8 & 1) != 0) {
                                    uVar8 = uStack_80._4_4_;
                                    auStack_150[1] = 0;
                                    auStack_150[2] = 0;
                                    auStack_150[0] = 0;
                                    if (uStack_80._4_4_ == 0) {
                                        uVar7 = 0;
                                    }
                                    else {
                                        uVar7 = operator new(unsigned long)(uVar8 << 2);
                                        uVar15 = uVar7 + uVar8 * 4;
                                        auStack_150[0] = uVar7;
                                        auStack_150[2] = uVar15;
                                        bzero(uVar7, uVar8 << 2);
                                        auStack_150[1] = uVar15;
                                    }
                                    auStack_150[3] = 0;
                                    if (uVar8 != auStack_150[1] - uVar7 >> 2) {
                                        uVar6 = **reloc.__stderrp;
                                    }
                                    else {
                                        uVar8 = fcn.1938de984(pcVar3, *0x8 + -0xd0, uStack_78._4_4_, uStack_78, 
                                                              auStack_150);
                                        if ((uVar8 & 1) != 0) {
                                            aiStack_170[0] = 0;
                                            aiStack_170[1] = 0;
                                            aiStack_170[2] = 0;
                                            uVar7 = uVar14 + iVar2;
                                            if (uVar14 + iVar2 == 0) {
                                                iVar4 = 0;
                                            }
                                            else {
                                                iVar4 = operator new(unsigned long)(uVar7 << 2);
                                                iVar9 = iVar4 + uVar7 * 4;
                                                aiStack_170[0] = iVar4;
                                                aiStack_170[2] = iVar9;
                                                bzero(iVar4, uVar7 << 2);
                                                aiStack_170[1] = iVar9;
                                            }
                                            aiStack_170[3] = 0;
                                            if (uVar7 != aiStack_170[1] - iVar4 >> 2) {
                                                uVar6 = **reloc.__stderrp;
                                            }
                                            else {
                                                uVar8 = fcn.1938de984(pcVar3, *0x8 + -0xd0, uStack_78._4_4_, uStack_78, 
                                                                      aiStack_170);
                                                if ((uVar8 & 1) != 0) {
                                                    uVar8 = uStack_80;
                                                    aiStack_190[1] = 0;
                                                    aiStack_190[2] = 0;
                                                    aiStack_190[0] = 0;
                                                    if (uStack_80 == 0) {
                                                        iVar4 = 0;
                                                    }
                                                    else {
                                                        iVar4 = operator new(unsigned long)(uVar8 << 3);
                                                        iVar9 = iVar4 + uVar8 * 8;
                                                        aiStack_190[0] = iVar4;
                                                        aiStack_190[2] = iVar9;
                                                        bzero(iVar4, uVar8 << 3);
                                                        aiStack_190[1] = iVar9;
                                                    }
                                                    aiStack_190[3] = 0;
                                                    if (uVar8 != aiStack_190[1] - iVar4 >> 3) {
                                                        uVar6 = **reloc.__stderrp;
                                                    }
                                                    else {
                                                        uVar8 = fcn.1938dece4(pcVar3, *0x8 + -0xf0, uStack_78._4_4_, 
                                                                              uStack_78, aiStack_190);
                                                        if ((uVar8 & 1) != 0) {
                                                            uVar8 = uStack_84;
                                                            aiStack_1b8[2] = 0;
                                                            aiStack_1b8[3] = 0;
                                                            aiStack_1b8[1] = 0;
                                                            if (uStack_84 == 0) {
                                                                iVar4 = 0;
                                                            }
                                                            else {
                                                                iVar4 = operator new(unsigned long)(uVar8 << 3);
                                                                iVar9 = iVar4 + uVar8 * 8;
                                                                aiStack_1b8[1] = iVar4;
                                                                aiStack_1b8[3] = iVar9;
                                                                bzero(iVar4, uVar8 << 3);
                                                                aiStack_1b8[2] = iVar9;
                                                            }
                                                            uStack_198 = 0;
                                                            if (uVar8 != aiStack_1b8[2] - iVar4 >> 3) {
                                                                uVar6 = **reloc.__stderrp;
                                                                goto code_r0x000193925908;
                                                            }
                                                            uVar8 = fcn.1938dece4(pcVar3, *0x8 + -0xf0, uStack_78._4_4_
                                                                                  , uStack_78, aiStack_1b8 + 1);
                                                            if ((uVar8 & 1) == 0) {
                                                                uVar6 = **reloc.__stderrp;
                                                                goto code_r0x000193925908;
                                                            }
                                                            iVar4 = *param_2;
                                                            std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >::reserve(unsigned long)
                                                                      (iVar4 + 0xc48, uVar7);
                                                            if (uStack_80._4_4_ == 0) goto code_r0x000193925890;
                                                            uVar8 = 0;
                                                            goto code_r0x00019392575c;
                                                        }
                                                        uVar6 = **reloc.__stderrp;
                                                    }
                                                    fprintf(uVar6, 0x8ff + 0x193b8a000);
                                                    iVar2 = 6;
                                                    goto code_r0x0001939256f8;
                                                }
                                                uVar6 = **reloc.__stderrp;
                                            }
                                            fprintf(uVar6, 0x8ff + 0x193b8a000);
                                            iVar2 = 6;
                                            goto code_r0x000193925638;
                                        }
                                        uVar6 = **reloc.__stderrp;
                                    }
                                    fprintf(uVar6, 0x8ff + 0x193b8a000);
                                    iVar2 = 6;
                                    goto code_r0x000193925578;
                                }
                                uVar6 = **reloc.__stderrp;
                            }
                            fprintf(uVar6, 0x8ff + 0x193b8a000);
                            iVar2 = 6;
                            goto code_r0x0001939254b8;
                        }
                        uVar6 = **reloc.__stderrp;
                    }
                    fprintf(uVar6, 0x8ff + 0x193b8a000);
                    iVar2 = 6;
                    goto code_r0x0001939253c8;
                }
                break;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 <= uVar8 && uVar8 != uVar7);
    }
    uVar13 = 1;
    goto code_r0x000193925240;
code_r0x00019392575c:
    do {
        iVar9 = aiStack_110[3];
        aiStack_110[3] = iVar9 + 1;
        cVar1 = *(aiStack_110[0] + iVar9);
        iVar9 = auStack_130[3];
        auStack_130[3] = iVar9 + 1;
        uVar16 = *(auStack_130[0] + iVar9 * 4);
        iVar12 = *(iVar4 + 0xc50);
        iVar9 = auStack_150[3];
        auStack_150[3] = iVar9 + 1;
        iVar11 = *(iVar4 + 0xc48);
        uVar14 = *(auStack_150[0] + iVar9 * 4);
        uVar15 = uVar14;
        if (uVar14 != 0) {
            do {
                uVar10 = aiStack_170[3];
                if (aiStack_170[1] - aiStack_170[0] >> 2 <= uVar10) goto code_r0x0001939258fc;
                aiStack_170[3] = uVar10 + 1;
                if ((*(aiStack_170[0] + uVar10 * 4) & 1) == 0) {
                    uVar10 = aiStack_190[3];
                    iVar9 = aiStack_190[0];
                    if (aiStack_190[1] - iVar9 >> 3 <= uVar10) goto code_r0x0001939258fc;
                    aiStack_190[3] = uVar10 + 1;
                }
                else {
                    uVar10 = uStack_198;
                    iVar9 = aiStack_1b8[1];
                    if (aiStack_1b8[2] - iVar9 >> 3 <= uVar10) goto code_r0x0001939258fc;
                    uStack_198 = uVar10 + 1;
                }
                aiStack_1b8[0] = *(iVar9 + uVar10 * 8);
                std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >::push_back[abi:v160006](unsigned long long const&)
                          (iVar4 + 0xc48, aiStack_1b8);
                uVar15 = uVar15 + -1;
            } while (uVar15 != 0);
        }
        if (cVar1 == '\0') {
            iVar9 = *(*param_2 + 0x1f8);
            if (*(*param_2 + 0x200) - iVar9 >> 8 <= uVar16) goto code_r0x0001939258fc;
code_r0x000193925864:
            iVar9 = iVar9 + uVar16 * 0x100;
            if (iVar9 != 0) {
                *(iVar9 + 0x48) = iVar12 - iVar11 >> 3;
                *(iVar9 + 0x4c) = uVar14;
            }
        }
        else if (cVar1 == '\x01') {
            iVar9 = *(*param_2 + 0x20);
            if (uVar16 < *(*param_2 + 0x28) - iVar9 >> 8) goto code_r0x000193925864;
code_r0x0001939258fc:
            uVar6 = **reloc.__stderrp;
            goto code_r0x000193925908;
        }
        uVar8 = uVar8 + 1;
    } while (uVar8 < uStack_80._4_4_);
code_r0x000193925890:
    if (uVar7 != *(iVar4 + 0xc50) - *(iVar4 + 0xc48) >> 3) {
        uVar6 = **reloc.__stderrp;
code_r0x000193925908:
        fprintf(uVar6, 0x8ff + 0x193b8a000);
        iVar2 = 6;
    }
    else {
        iVar2 = 0;
    }
    if (aiStack_1b8[1] != 0) {
        aiStack_1b8[2] = aiStack_1b8[1];
        operator delete(void*)();
    }
code_r0x0001939256f8:
    if (aiStack_190[0] != 0) {
        aiStack_190[1] = aiStack_190[0];
        operator delete(void*)();
    }
code_r0x000193925638:
    if (aiStack_170[0] != 0) {
        aiStack_170[1] = aiStack_170[0];
        operator delete(void*)();
    }
code_r0x000193925578:
    if (auStack_150[0] != 0) {
        auStack_150[1] = auStack_150[0];
        operator delete(void*)();
    }
code_r0x0001939254b8:
    uVar13 = uVar7;
    if (auStack_130[0] != 0) {
        auStack_130[1] = auStack_130[0];
        operator delete(void*)();
    }
code_r0x0001939253c8:
    if (aiStack_110[0] != 0) {
        aiStack_110[1] = aiStack_110[0];
        operator delete(void*)();
    }
    mgcl::ints::IntDecompressor<unsigned long long>::~IntDecompressor()(*0x8 + -0xf0);
    mgcl::ints::IntDecompressor<unsigned int>::~IntDecompressor()(*0x8 + -0xd0);
    mgcl::ints::IntDecompressor<unsigned char>::~IntDecompressor()(*0x8 + -0xb0);
    if (iVar2 == 6) {
code_r0x0001939252ac:
        uVar14 = 0;
        uVar13 = 0;
        if (*pcVar3 != '\0') {
code_r0x0001939252b8:
            uVar13 = uVar14;
            piVar5 = geo::codec::Allocator::instance()();
            (**(*piVar5 + 0x28))(piVar5, *(pcVar3 + 0x28), 0);
        }
    }
    else {
        if (iVar2 != 0) goto code_r0x000193925240;
        uVar14 = 1;
        uVar13 = 1;
        if (*pcVar3 != '\0') goto code_r0x0001939252b8;
    }
    piVar5 = geo::codec::Allocator::instance()();
    (**(*piVar5 + 0x28))(piVar5, pcVar3, 0);
code_r0x000193925240:
    return uVar13 & 1;
}
