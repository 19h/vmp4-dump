
uint32_t geo::codec::_readAnnotationLabels(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    uint32_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    char *pcVar5;
    int64_t *piVar6;
    float8 *pfVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint *puVar14;
    uint8_t *puVar15;
    ulong uVar16;
    uint32_t uVar17;
    uint8_t *puVar18;
    int64_t iVar19;
    uint64_t uVar20;
    int32_t iVar21;
    uint32_t uVar22;
    uint32_t *puVar23;
    uint32_t *puVar24;
    float8 *pfVar25;
    uint32_t *puVar26;
    uint32_t uVar27;
    int64_t iVar28;
    int64_t iVar29;
    float8 fVar30;
    uint64_t auStack_2c8 [2];
    int64_t iStack_2b8;
    int64_t iStack_2b0;
    int64_t iStack_298;
    int64_t iStack_290;
    int64_t iStack_288;
    int64_t iStack_270;
    int64_t aiStack_268 [3];
    float8 *pfStack_250;
    float8 *pfStack_248;
    float8 *pfStack_240;
    int64_t iStack_238;
    float8 *pfStack_230;
    float8 *pfStack_228;
    float8 *pfStack_220;
    int64_t iStack_218;
    int64_t iStack_210;
    int64_t iStack_208;
    int64_t iStack_200;
    int64_t iStack_1f8;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    float8 *pfStack_1d0;
    float8 *pfStack_1c8;
    float8 *pfStack_1c0;
    int64_t iStack_1b8;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    int64_t iStack_1a0;
    uint64_t uStack_198;
    int64_t iStack_190;
    int64_t iStack_188;
    int64_t iStack_180;
    int64_t iStack_178;
    float8 *pfStack_170;
    float8 *pfStack_168;
    float8 *pfStack_160;
    int64_t iStack_158;
    float8 *pfStack_150;
    float8 *pfStack_148;
    float8 *pfStack_140;
    int64_t iStack_138;
    ulong auStack_130 [4];
    ulong auStack_110 [4];
    ulong auStack_f0 [4];
    ulong auStack_d0 [4];
    uint32_t uStack_b0;
    uint32_t uStack_ac;
    uint32_t *puStack_a8;
    uint32_t *puStack_a0;
    uint32_t uStack_84;
    uint32_t uStack_80;
    uint32_t uStack_7c;
    ulong uStack_78;
    
    uVar12 = param_1[1];
    if (uVar12 != 0) {
        uVar10 = 0;
        do {
            if (*(*param_1 + uVar10 * 0x10) == 0xa0) {
                pcVar5 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar10, 0xa0, *param_2 + 0x778);
                if (pcVar5 != NULL) {
                    uStack_78 = 0;
                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x74);
                    if ((uVar12 & 1) == 0) {
                        uVar16 = **reloc.__stderrp;
                        uVar9 = 0x2c13;
                    }
                    else {
                        uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x78);
                        if ((uVar12 & 1) == 0) {
                            uVar16 = **reloc.__stderrp;
                            uVar9 = 0x2c14;
                        }
                        else {
                            uStack_7c = 0;
                            uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x7c)
                            ;
                            if ((uVar12 & 1) == 0) {
                                uVar16 = **reloc.__stderrp;
                                uVar9 = 0x2c17;
                            }
                            else {
                                uStack_80 = 0;
                                uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                   (pcVar5, *0x8 + -0x80);
                                if ((uVar12 & 1) == 0) {
                                    uVar16 = **reloc.__stderrp;
                                    uVar9 = 0x2c19;
                                }
                                else {
                                    uStack_84 = 0;
                                    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                       (pcVar5, *0x8 + -0x84);
                                    if ((uVar12 & 1) != 0) {
                                        fcn.193936974(*0x8 + -0xa8, uStack_84);
                                        puVar26 = puStack_a0;
                                        puVar23 = puStack_a8;
                                        if ((puStack_a0 - puVar23 >> 2) * (0xaaaaaaaaaaaa0000 | 0xaaab) - uStack_84 != 0
                                           ) {
                                            uVar16 = 0x2c1f;
                                            goto code_r0x00019391e248;
                                        }
                                        if (puStack_a8 != puStack_a0) {
                                            uVar27 = 0;
                                            goto code_r0x00019391e05c;
                                        }
                                        uVar27 = 0;
                                        goto code_r0x00019391e1a0;
                                    }
                                    uVar16 = **reloc.__stderrp;
                                    uVar9 = 0x2c1d;
                                }
                            }
                        }
                    }
                    *(*0x8 + -0x2c8) = uVar9;
                    fprintf(uVar16, 0x8ff + 0x193b8a000);
                    goto code_r0x00019391e124;
                }
                break;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 <= uVar12 && uVar12 != uVar10);
    }
    uVar27 = 1;
    goto code_r0x00019391e088;
    while( true ) {
        puVar23 = puVar23 + 3;
        uVar27 = *puVar24 + uVar27;
        if (puVar23 == puVar26) break;
code_r0x00019391e05c:
        puVar24 = puVar23 + 1;
        *puVar23 = uVar27;
        uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, puVar24);
        if ((uVar12 & 1) == 0) {
            uVar16 = 0x2c23;
            goto code_r0x00019391e248;
        }
    }
code_r0x00019391e1a0:
    uStack_ac = 0;
    uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0xac);
    if ((uVar12 & 1) == 0) {
        uVar9 = **reloc.__stderrp;
        uVar16 = 0x2c28;
code_r0x00019391e254:
        *(*0x8 + -0x2c8) = uVar16;
        fprintf(uVar9, 0x8ff + 0x193b8a000);
        std::__1::vector<geo::codec::_readAnnotationLabels(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)::ValueArraySpan, geo::StdAllocator<geo::codec::_readAnnotationLabels(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)::ValueArraySpan, geo::codec::Allocator> >::~vector[abi:v160006]()
                  (*0x8 + -0xa8);
        uVar22 = 0;
        uVar27 = 0;
        cVar2 = *pcVar5;
joined_r0x00019391e27c:
        if (cVar2 != '\0') {
code_r0x00019391e130:
            uVar27 = uVar22;
            piVar6 = geo::codec::Allocator::instance()();
            (**(*piVar6 + 0x28))(piVar6, *(pcVar5 + 0x28), 0);
        }
    }
    else {
        uStack_b0 = 0;
        uVar12 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0xb0);
        if ((uVar12 & 1) == 0) {
            uVar16 = 0x2c2a;
code_r0x00019391e248:
            uVar9 = **reloc.__stderrp;
            goto code_r0x00019391e254;
        }
        uVar22 = uStack_b0;
        if (uVar22 == 0) {
            uVar16 = 0x2c2b;
            goto code_r0x00019391e248;
        }
        *(*0x8 + -200) = 0;
        *(*0x8 + -0xd0) = 0;
        *(*0x8 + -0xb8) = 0;
        *(*0x8 + -0xc0) = 0;
        *(*0x8 + -0xe8) = 0;
        *(*0x8 + -0xf0) = 0;
        *(*0x8 + -0xd8) = 0;
        *(*0x8 + -0xe0) = 0;
        *(*0x8 + -0x108) = 0;
        *(*0x8 + -0x110) = 0;
        *(*0x8 + -0xf8) = 0;
        *(*0x8 + -0x100) = 0;
        *(*0x8 + -0x128) = 0;
        *(*0x8 + -0x130) = 0;
        *(*0x8 + -0x118) = 0;
        *(*0x8 + -0x120) = 0;
        uVar12 = uStack_7c;
        pfStack_148 = NULL;
        pfStack_140 = NULL;
        pfStack_150 = NULL;
        if (uStack_7c == 0) {
            pfVar7 = NULL;
        }
        else {
            pfVar7 = operator new(unsigned long)(uVar12 << 1);
            pfVar25 = pfVar7 + uVar12 * 2;
            pfStack_150 = pfVar7;
            pfStack_140 = pfVar25;
            bzero(pfVar7, uVar12 << 1);
            pfStack_148 = pfVar25;
        }
        iStack_138 = 0;
        if (uVar12 != pfStack_148 - pfVar7 >> 1) {
            uVar16 = **reloc.__stderrp;
            uVar9 = 0x2c34;
code_r0x00019391e314:
            *(*0x8 + -0x2c8) = uVar9;
            fprintf(uVar16, 0x8ff + 0x193b8a000);
            iVar21 = 6;
        }
        else {
            uVar12 = fcn.1938df044(pcVar5, *0x8 + -0xf0, uStack_78._4_4_, uStack_78, *0x8 + -0x150);
            if ((uVar12 & 1) == 0) {
                uVar16 = **reloc.__stderrp;
                uVar9 = 0x2c35;
                goto code_r0x00019391e314;
            }
            uVar12 = uStack_7c;
            pfStack_168 = NULL;
            pfStack_160 = NULL;
            pfStack_170 = NULL;
            if (uStack_7c == 0) {
                pfVar7 = NULL;
            }
            else {
                pfVar7 = operator new(unsigned long)(uVar12 << 2);
                pfVar25 = pfVar7 + uVar12 * 4;
                pfStack_170 = pfVar7;
                pfStack_160 = pfVar25;
                bzero(pfVar7, uVar12 << 2);
                pfStack_168 = pfVar25;
            }
            iStack_158 = 0;
            if (uVar12 != pfStack_168 - pfVar7 >> 2) {
                uVar16 = **reloc.__stderrp;
                uVar9 = 0x2c38;
code_r0x00019391e410:
                *(*0x8 + -0x2c8) = uVar9;
                fprintf(uVar16, 0x8ff + 0x193b8a000);
                iVar21 = 6;
            }
            else {
                uVar12 = fcn.1938de984(pcVar5, *0x8 + -0x110, uStack_78._4_4_, uStack_78, *0x8 + -0x170);
                if ((uVar12 & 1) == 0) {
                    uVar16 = **reloc.__stderrp;
                    uVar9 = 0x2c39;
                    goto code_r0x00019391e410;
                }
                pfVar7 = uStack_7c;
                iStack_188 = 0;
                iStack_180 = 0;
                iStack_190 = 0;
                if (uStack_7c == 0) {
                    iVar8 = 0;
                }
                else {
                    iVar8 = operator new(unsigned long)(pfVar7);
                    iStack_190 = iVar8;
                    iStack_180 = iVar8 + pfVar7;
                    bzero(iVar8, pfVar7);
                    iStack_188 = iVar8 + pfVar7;
                }
                iStack_178 = 0;
                if (iStack_188 - iVar8 != pfVar7) {
                    uVar16 = **reloc.__stderrp;
                    uVar9 = 0x2c3c;
code_r0x00019391e4cc:
                    *(*0x8 + -0x2c8) = uVar9;
                    fprintf(uVar16, 0x8ff + 0x193b8a000);
                    iVar21 = 6;
                }
                else {
                    uVar12 = fcn.1938df1f4(pcVar5, *0x8 + -0xd0, uStack_78._4_4_, uStack_78, *0x8 + -400);
                    if ((uVar12 & 1) == 0) {
                        uVar16 = **reloc.__stderrp;
                        uVar9 = 0x2c3d;
                        goto code_r0x00019391e4cc;
                    }
                    pfVar7 = uStack_80;
                    iStack_1a8 = 0;
                    iStack_1a0 = 0;
                    iStack_1b0 = 0;
                    if (uStack_80 == 0) {
                        iVar8 = 0;
                    }
                    else {
                        iVar8 = operator new(unsigned long)(pfVar7);
                        iStack_1b0 = iVar8;
                        iStack_1a0 = iVar8 + pfVar7;
                        bzero(iVar8, pfVar7);
                        iStack_1a8 = iVar8 + pfVar7;
                    }
                    uStack_198 = 0;
                    if (iStack_1a8 - iVar8 != pfVar7) {
                        uVar16 = **reloc.__stderrp;
                        uVar9 = 0x2c40;
code_r0x00019391e58c:
                        *(*0x8 + -0x2c8) = uVar9;
                        fprintf(uVar16, 0x8ff + 0x193b8a000);
                        iVar21 = 6;
                    }
                    else {
                        uVar12 = fcn.1938df1f4(pcVar5, *0x8 + -0xd0, uStack_78._4_4_, uStack_78, *0x8 + -0x1b0);
                        if ((uVar12 & 1) == 0) {
                            uVar16 = **reloc.__stderrp;
                            uVar9 = 0x2c41;
                            goto code_r0x00019391e58c;
                        }
                        uVar12 = uStack_80;
                        pfStack_1c8 = NULL;
                        pfStack_1c0 = NULL;
                        pfStack_1d0 = NULL;
                        if (uStack_80 == 0) {
                            pfVar7 = NULL;
                        }
                        else {
                            pfVar7 = operator new(unsigned long)(uVar12 << 2);
                            pfVar25 = pfVar7 + uVar12 * 4;
                            pfStack_1d0 = pfVar7;
                            pfStack_1c0 = pfVar25;
                            bzero(pfVar7, uVar12 << 2);
                            pfStack_1c8 = pfVar25;
                        }
                        iStack_1b8 = 0;
                        if (uVar12 != pfStack_1c8 - pfVar7 >> 2) {
                            uVar16 = **reloc.__stderrp;
                            uVar9 = 0x2c44;
code_r0x00019391e648:
                            *(*0x8 + -0x2c8) = uVar9;
                            fprintf(uVar16, 0x8ff + 0x193b8a000);
                            iVar21 = 6;
                        }
                        else {
                            uVar12 = fcn.1938de984(pcVar5, *0x8 + -0x110, uStack_78._4_4_, uStack_78, *0x8 + -0x1d0);
                            if ((uVar12 & 1) == 0) {
                                uVar16 = **reloc.__stderrp;
                                uVar9 = 0x2c45;
                                goto code_r0x00019391e648;
                            }
                            pfVar7 = uStack_80;
                            iStack_1e8 = 0;
                            iStack_1e0 = 0;
                            iStack_1f0 = 0;
                            if (uStack_80 == 0) {
                                iVar8 = 0;
                            }
                            else {
                                iVar8 = operator new(unsigned long)(pfVar7);
                                iStack_1f0 = iVar8;
                                iStack_1e0 = iVar8 + pfVar7;
                                bzero(iVar8, pfVar7);
                                iStack_1e8 = iVar8 + pfVar7;
                            }
                            iStack_1d8 = 0;
                            if (iStack_1e8 - iVar8 != pfVar7) {
                                uVar16 = **reloc.__stderrp;
                                uVar9 = 0x2c48;
code_r0x00019391e704:
                                *(*0x8 + -0x2c8) = uVar9;
                                fprintf(uVar16, 0x8ff + 0x193b8a000);
                                iVar21 = 6;
                            }
                            else {
                                uVar12 = fcn.1938df1f4(pcVar5, *0x8 + -0xd0, uStack_78._4_4_, uStack_78, *0x8 + -0x1f0);
                                if ((uVar12 & 1) == 0) {
                                    uVar16 = **reloc.__stderrp;
                                    uVar9 = 0x2c49;
                                    goto code_r0x00019391e704;
                                }
                                pfVar7 = uStack_ac;
                                iStack_208 = 0;
                                iStack_200 = 0;
                                iStack_210 = 0;
                                if (uStack_ac == 0) {
                                    iVar8 = 0;
                                }
                                else {
                                    iVar8 = operator new(unsigned long)(pfVar7);
                                    iStack_210 = iVar8;
                                    iStack_200 = iVar8 + pfVar7;
                                    bzero(iVar8, pfVar7);
                                    iStack_208 = iVar8 + pfVar7;
                                }
                                iStack_1f8 = 0;
                                if (iStack_208 - iVar8 != pfVar7) {
                                    uVar16 = **reloc.__stderrp;
                                    uVar9 = 0x2c4c;
code_r0x00019391e7c4:
                                    *(*0x8 + -0x2c8) = uVar9;
                                    fprintf(uVar16, 0x8ff + 0x193b8a000);
                                    iVar21 = 6;
                                }
                                else {
                                    uVar12 = fcn.1938df1f4(pcVar5, *0x8 + -0xd0, uStack_78._4_4_, uStack_78, 
                                                           *0x8 + -0x210);
                                    if ((uVar12 & 1) == 0) {
                                        uVar16 = **reloc.__stderrp;
                                        uVar9 = 0x2c4d;
                                        goto code_r0x00019391e7c4;
                                    }
                                    uVar12 = uStack_ac;
                                    pfStack_228 = NULL;
                                    pfStack_220 = NULL;
                                    pfStack_230 = NULL;
                                    if (uStack_ac == 0) {
                                        pfVar7 = NULL;
                                    }
                                    else {
                                        pfVar7 = operator new(unsigned long)(uVar12 << 2);
                                        pfVar25 = pfVar7 + uVar12 * 4;
                                        pfStack_230 = pfVar7;
                                        pfStack_220 = pfVar25;
                                        bzero(pfVar7, uVar12 << 2);
                                        pfStack_228 = pfVar25;
                                    }
                                    iStack_218 = 0;
                                    if (uVar12 != pfStack_228 - pfVar7 >> 2) {
                                        uVar16 = **reloc.__stderrp;
                                        uVar9 = 0x2c50;
code_r0x00019391e884:
                                        *(*0x8 + -0x2c8) = uVar9;
                                        fprintf(uVar16, 0x8ff + 0x193b8a000);
                                        iVar21 = 6;
                                    }
                                    else {
                                        uVar12 = fcn.1938de984(pcVar5, *0x8 + -0x110, uStack_78._4_4_, uStack_78, 
                                                               *0x8 + -0x230);
                                        if ((uVar12 & 1) == 0) {
                                            uVar16 = **reloc.__stderrp;
                                            uVar9 = 0x2c51;
                                            goto code_r0x00019391e884;
                                        }
                                        uVar12 = uStack_ac;
                                        pfStack_248 = NULL;
                                        pfStack_240 = NULL;
                                        pfStack_250 = NULL;
                                        if (uStack_ac == 0) {
                                            pfVar7 = NULL;
                                        }
                                        else {
                                            pfVar7 = operator new(unsigned long)(uVar12 << 1);
                                            pfVar25 = pfVar7 + uVar12 * 2;
                                            pfStack_250 = pfVar7;
                                            pfStack_240 = pfVar25;
                                            bzero(pfVar7, uVar12 << 1);
                                            pfStack_248 = pfVar25;
                                        }
                                        iStack_238 = 0;
                                        if (uVar12 != pfStack_248 - pfVar7 >> 1) {
                                            uVar16 = **reloc.__stderrp;
                                            uVar9 = 0x2c54;
code_r0x00019391ea7c:
                                            *(*0x8 + -0x2c8) = uVar9;
                                            fprintf(uVar16, 0x8ff + 0x193b8a000);
                                            iVar21 = 6;
                                        }
                                        else {
                                            uVar12 = fcn.1938df044(pcVar5, *0x8 + -0xf0, uStack_78._4_4_, uStack_78, 
                                                                   *0x8 + -0x250);
                                            if ((uVar12 & 1) == 0) {
                                                uVar16 = **reloc.__stderrp;
                                                uVar9 = 0x2c55;
                                                goto code_r0x00019391ea7c;
                                            }
                                            pfVar7 = uVar27;
                                            std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::vector(unsigned long)
                                                      (&stack0x00000000 + -0x270, pfVar7);
                                            if (pfVar7 != *(&stack0x00000000 + -0x268) - *(&stack0x00000000 + -0x270) >>
                                                          3) {
                                                uVar16 = **reloc.__stderrp;
                                                uVar9 = 0x2c58;
code_r0x00019391ead4:
                                                *(*0x8 + -0x2c8) = uVar9;
                                                fprintf(uVar16, 0x8ff + 0x193b8a000);
                                                iVar21 = 6;
                                            }
                                            else {
                                                puVar26 = puStack_a8;
                                                if (puStack_a8 != puStack_a0) {
                                                    do {
                                                        uVar12 = 
                                                            bool geo::codec::decodeIntCompressorArray<long long>(VMP4Chapter*, mgcl::ints::IntDecompressor<long long>*, unsigned int, unsigned int, unsigned long, long long*)
                                                                      (pcVar5, *0x8 + -0x130, uStack_78._4_4_, uStack_78
                                                                       , puVar26[1], 
                                                                       *(&stack0x00000000 + -0x270) + *puVar26 * 8);
                                                        if ((uVar12 & 1) == 0) {
                                                            uVar16 = **reloc.__stderrp;
                                                            uVar9 = 0x2c5a;
                                                            goto code_r0x00019391ead4;
                                                        }
                                                        puVar26 = puVar26 + 3;
                                                    } while (puVar26 != puStack_a0);
                                                }
                                                std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::vector(unsigned long)
                                                          (*0x8 + -0x290, uStack_7c);
                                                uVar12 = iStack_288 - iStack_290 >> 2;
                                                if (uVar12 != uStack_7c) {
                                                    uVar16 = **reloc.__stderrp;
                                                    uVar9 = 0x2c5f;
code_r0x00019391eb04:
                                                    *(*0x8 + -0x2c8) = uVar9;
                                                    fprintf(uVar16, 0x8ff + 0x193b8a000);
                                                    iVar21 = 6;
                                                }
                                                else {
                                                    iStack_298 = 0;
                                                    uVar12 = 
                                                            geo::codec::_makeSpaceForLabels(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                                                      (uVar12, *0x8 + -0x298, param_2);
                                                    if ((uVar12 & 1) == 0) {
                                                        uVar16 = **reloc.__stderrp;
                                                        uVar9 = 0x2c61;
                                                        goto code_r0x00019391eb04;
                                                    }
                                                    uVar12 = uStack_7c;
                                                    if (uStack_7c != 0) {
                                                        uVar10 = 0;
                                                        iVar28 = *(*param_2 + 0x358);
                                                        auStack_2c8[1] = *(*param_2 + 0x360) - iVar28;
                                                        iVar29 = iStack_298;
                                                        iVar8 = iVar29 * 0x18;
                                                        do {
                                                            iVar13 = iStack_158;
                                                            iStack_158 = iVar13 + 1;
                                                            uVar12 = *(pfStack_170 + iVar13 * 4);
                                                            if (auStack_2c8[1] < uVar12 || auStack_2c8[1] == uVar12) {
                                                                uVar16 = **reloc.__stderrp;
                                                                uVar9 = 0x2c67;
                                                                goto code_r0x00019391eb04;
                                                            }
                                                            iVar13 = *param_2;
                                                            if (*(iVar13 + 0x420) <= iVar29 + uVar10) {
                                                                uVar16 = **reloc.__stderrp;
                                                                uVar9 = 0x2c68;
                                                                goto code_r0x00019391eb04;
                                                            }
                                                            piVar6 = *(iVar13 + 0x418) + iVar8;
                                                            *piVar6 = iVar28 + uVar12;
                                                            *(piVar6 + 2) = 0;
                                                            iVar13 = 
                                                            geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                                      (uVar12, *(iVar13 + 0x378), *(iVar13 + 0x380));
                                                            piVar6[1] = iVar13;
                                                            *(iStack_290 + uVar10 * 4) = iVar29 + uVar10;
                                                            uVar10 = uVar10 + 1;
                                                            uVar12 = uStack_7c;
                                                            iVar8 = iVar8 + 0x18;
                                                        } while (uVar10 < uVar12);
                                                    }
                                                    fcn.193936a60(*0x8 + -0x2b8, uVar12);
                                                    if ((iStack_2b0 - iStack_2b8 >> 3) * (0xcccccccccccc0000 | 0xcccd) -
                                                        uStack_7c != 0) {
                                                        uVar16 = 0x2c73;
code_r0x00019391eec0:
                                                        uVar9 = **reloc.__stderrp;
                                                        *(*0x8 + -0x2c8) = uVar16;
                                                        fprintf(uVar9, 0x8ff + 0x193b8a000);
                                                        iVar21 = 6;
                                                    }
                                                    else {
                                                        if (uStack_7c != 0) {
                                                            uVar12 = 0;
                                                            do {
                                                                puVar14 = iStack_2b8 + uVar12 * 0x28;
                                                                iVar8 = iStack_138;
                                                                iStack_138 = iVar8 + 1;
                                                                *(puVar14 + 1) = *(pfStack_150 + iVar8 * 2);
                                                                *puVar14 = *(iStack_290 + uVar12 * 4);
                                                                iVar8 = iStack_178;
                                                                iStack_178 = iVar8 + 1;
                                                                uVar10 = *(iStack_190 + iVar8);
                                                                fcn.193936bcc(puVar14 + 2, uVar10);
                                                                puVar15 = *(puVar14 + 2);
                                                                puVar18 = *(puVar14 + 4);
                                                                if (uVar10 != puVar18 - puVar15 >> 3) {
                                                                    uVar16 = 0x2c7a;
                                                                    goto code_r0x00019391eec0;
                                                                }
                                                                if (puVar15 != puVar18) {
                                                                    uVar20 = iStack_1a8 - iStack_1b0;
                                                                    uVar10 = uStack_198;
                                                                    if (uStack_198 < uVar20 || uStack_198 == uVar20) {
                                                                        uVar10 = uVar20;
                                                                    }
                                                                    do {
                                                                        if (uVar10 == uStack_198) {
                                                                            uVar16 = 0x2c7c;
                                                                            goto code_r0x00019391eec0;
                                                                        }
                                                                        uVar20 = uStack_198 + 1;
                                                                        puVar15[1] = *(iStack_1b0 + uStack_198);
                                                                        iVar8 = iStack_1b8;
                                                                        iStack_1b8 = iVar8 + 1;
                                                                        *(puVar15 + 4) = *(pfStack_1d0 + iVar8 * 4);
                                                                        iVar8 = iStack_1d8;
                                                                        iStack_1d8 = iVar8 + 1;
                                                                        uVar3 = *(iStack_1f0 + iVar8);
                                                                        *puVar15 = uVar3;
                                                                        uStack_198 = uVar20;
                                                                        if (uStack_84 < uVar3 || uStack_84 == uVar3) {
                                                                            uVar16 = 0x2c80;
                                                                            goto code_r0x00019391eec0;
                                                                        }
                                                                        puVar15 = puVar15 + 8;
                                                                    } while (puVar15 != puVar18);
                                                                }
                                                                uVar12 = uVar12 + 1;
                                                            } while (uVar12 < uStack_7c);
                                                        }
                                                        std::__1::vector<GeoCodecsAnnotation, geo::StdAllocator<GeoCodecsAnnotation, geo::codec::Allocator> >::resize(unsigned long)
                                                                  (*param_2 + 0x218, uStack_ac);
                                                        iVar8 = *param_2;
                                                        if (uStack_ac != *(iVar8 + 0x220) - *(iVar8 + 0x218) >> 4) {
                                                            uVar16 = 0x2c85;
                                                            goto code_r0x00019391eec0;
                                                        }
                                                        std::__1::vector<GeoCodecsAnnotationValue, geo::StdAllocator<GeoCodecsAnnotationValue, geo::codec::Allocator> >::resize(unsigned long)
                                                                  (iVar8 + 0x238, pfVar7);
                                                        iVar8 = *param_2;
                                                        iVar28 = *(iVar8 + 0x238);
                                                        if (pfVar7 != *(iVar8 + 0x240) - iVar28 >> 4) {
                                                            uVar16 = 0x2c88;
                                                            goto code_r0x00019391eec0;
                                                        }
                                                        uVar17 = uStack_ac;
                                                        if (uVar17 != 0) {
                                                            uVar12 = 0;
                                                            uVar17 = 0;
                                                            iVar19 = *(iVar8 + 0x218);
                                                            iVar29 = iStack_1f8;
                                                            iVar13 = iStack_218;
                                                            do {
                                                                iStack_1f8 = iVar29 + 1;
                                                                iStack_218 = iVar13 + 1;
                                                                uVar10 = *(pfStack_230 + iVar13 * 4);
                                                                if (*(iStack_210 + iVar29) == '\x01') {
                                                                    if (*(iVar8 + 0x28) - *(iVar8 + 0x20) >> 8 <= uVar10
                                                                       ) {
                                                                        uVar16 = 0x2c9f;
                                                                        goto code_r0x00019391eec0;
                                                                    }
                                                                    iVar29 = *(iVar8 + 0x20) + uVar10 * 0x100;
                                                                    if (*(iVar29 + 0xf8) == '\0') {
                                                                        *(iVar29 + 0xf4) = uVar12;
                                                                    }
                                                                    *(iVar29 + 0xf8) = *(iVar29 + 0xf8) + '\x01';
                                                                }
                                                                else if (*(iStack_210 + iVar29) == '\0') {
                                                                    if (*(iVar8 + 0x200) - *(iVar8 + 0x1f8) >> 8 <=
                                                                        uVar10) {
                                                                        uVar16 = 0x2c94;
                                                                        goto code_r0x00019391eec0;
                                                                    }
                                                                    iVar29 = *(iVar8 + 0x1f8) + uVar10 * 0x100;
                                                                    if (*(iVar29 + 0xec) == '\0') {
                                                                        *(iVar29 + 0xe8) = uVar12;
                                                                    }
                                                                    *(iVar29 + 0xec) = *(iVar29 + 0xec) + '\x01';
                                                                }
                                                                iVar29 = iStack_238;
                                                                iStack_238 = iVar29 + 1;
                                                                uVar4 = *(pfStack_250 + iVar29 * 2);
                                                                if (uStack_7c < uVar4 || uStack_7c == uVar4) {
                                                                    uVar16 = 0x2cad;
                                                                    goto code_r0x00019391eec0;
                                                                }
                                                                puVar14 = iStack_2b8 + uVar4 * 0x28;
                                                                *(iVar19 + uVar12 * 0x10) = *puVar14;
                                                                iVar29 = iVar19 + uVar12 * 0x10;
                                                                *(iVar29 + 4) = *(puVar14 + 1);
                                                                *(iVar29 + 8) = uVar17;
                                                                puVar15 = *(puVar14 + 2);
                                                                uVar10 = *(puVar14 + 4) - puVar15;
                                                                *(iVar29 + 0xc) = uVar10 >> 3;
                                                                if (uVar10 == 0) {
                                                                    uVar11 = 0L << -3 + 0x40 & 0xff;
                                                                }
                                                                else {
                                                                    uVar10 = uVar10 >> 3;
                                                                    iVar13 = *(&stack0x00000000 + -0x270);
                                                                    if (uVar10 < 2) {
                                                                        uVar10 = 1;
                                                                    }
                                                                    pfVar25 = iVar28 + 8 + (uVar17 << 4);
                                                                    do {
                                                                        *(pfVar25 + -1) = puVar15[1];
                                                                        puVar26 = puStack_a8 + *puVar15 * 3;
                                                                        uVar11 = puVar26[2];
                                                                        if (puVar26[1] <= puVar26[2]) {
                                                                            uVar16 = 0x2cb7;
                                                                            pfVar7 = pfVar25;
                                                                            goto code_r0x00019391eec0;
                                                                        }
                                                                        uVar1 = *puVar26;
                                                                        puStack_a8[*puVar15 * 3 + 2] = uVar11 + 1;
                                                                        fVar30 = NEON_ucvtf(*(puVar15 + 4));
                                                                        pfVar7 = pfVar25 + 2;
                                                                        *pfVar25 = *(iVar13 + (uVar1 + uVar11) * 8) *
                                                                                   1000.0 * fVar30 * (1.0 / uVar22);
                                                                        puVar15 = puVar15 + 8;
                                                                        uVar10 = uVar10 + -1;
                                                                        pfVar25 = pfVar7;
                                                                    } while (uVar10 != 0);
                                                                    uVar11 = *(iVar29 + 0xc);
                                                                }
                                                                uVar17 = uVar17 + uVar11;
                                                                uVar12 = uVar12 + 1;
                                                                iVar29 = iStack_1f8;
                                                                iVar13 = iStack_218;
                                                            } while (uVar12 < uStack_ac);
                                                        }
                                                        if (uVar17 != uVar27) {
                                                            uVar16 = 0x2cbc;
                                                            goto code_r0x00019391eec0;
                                                        }
                                                        iVar21 = 0;
                                                    }
                                                    fcn.1939370d0(*0x8 + -0x2b8);
                                                }
                                                std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                          (*0x8 + -0x290);
                                            }
                                            std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                      (&stack0x00000000 + -0x270);
                                        }
                                        if (pfStack_250 != NULL) {
                                            pfStack_248 = pfStack_250;
                                            operator delete(void*)();
                                        }
                                    }
                                    if (pfStack_230 != NULL) {
                                        pfStack_228 = pfStack_230;
                                        operator delete(void*)();
                                    }
                                }
                                if (iStack_210 != 0) {
                                    iStack_208 = iStack_210;
                                    operator delete(void*)();
                                }
                            }
                            if (iStack_1f0 != 0) {
                                iStack_1e8 = iStack_1f0;
                                operator delete(void*)();
                            }
                        }
                        if (pfStack_1d0 != NULL) {
                            pfStack_1c8 = pfStack_1d0;
                            operator delete(void*)();
                        }
                    }
                    if (iStack_1b0 != 0) {
                        iStack_1a8 = iStack_1b0;
                        operator delete(void*)();
                    }
                }
                if (iStack_190 != 0) {
                    iStack_188 = iStack_190;
                    operator delete(void*)();
                }
            }
            if (pfStack_170 != NULL) {
                pfStack_168 = pfStack_170;
                operator delete(void*)();
            }
        }
        uVar27 = pfVar7;
        if (pfStack_150 != NULL) {
            pfStack_148 = pfStack_150;
            operator delete(void*)();
        }
        mgcl::ints::IntDecompressor<long long>::~IntDecompressor()(*0x8 + -0x130);
        mgcl::ints::IntDecompressor<unsigned int>::~IntDecompressor()(*0x8 + -0x110);
        mgcl::ints::IntDecompressor<unsigned short>::~IntDecompressor()(*0x8 + -0xf0);
        mgcl::ints::IntDecompressor<unsigned char>::~IntDecompressor()(*0x8 + -0xd0);
        std::__1::vector<geo::codec::_readAnnotationLabels(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)::ValueArraySpan, geo::StdAllocator<geo::codec::_readAnnotationLabels(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)::ValueArraySpan, geo::codec::Allocator> >::~vector[abi:v160006]()
                  (*0x8 + -0xa8);
        if (iVar21 != 6) {
            if (iVar21 != 0) goto code_r0x00019391e088;
            uVar22 = 1;
            uVar27 = 1;
            cVar2 = *pcVar5;
            goto joined_r0x00019391e27c;
        }
code_r0x00019391e124:
        uVar22 = 0;
        uVar27 = 0;
        if (*pcVar5 != '\0') goto code_r0x00019391e130;
    }
    piVar6 = geo::codec::Allocator::instance()();
    (**(*piVar6 + 0x28))(piVar6, pcVar5, 0);
code_r0x00019391e088:
    return uVar27 & 1;
}
