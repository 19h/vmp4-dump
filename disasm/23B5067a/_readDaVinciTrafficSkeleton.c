
uint64_t geo::codec::_readDaVinciTrafficSkeleton(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, uint64_t *param_2, int64_t *param_3)

{
    uchar (*pauVar1) [16];
    ulong *puVar2;
    float *pfVar3;
    float *pfVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    uint16_t uVar7;
    uchar auVar8 [16];
    uchar auVar9 [16];
    uchar auVar10 [16];
    uchar auVar11 [16];
    uchar auVar12 [16];
    uchar auVar13 [16];
    uchar auVar14 [16];
    float fVar15;
    code *UNRECOVERED_JUMPTABLE;
    bool bVar16;
    bool bVar17;
    int32_t iVar18;
    ulong uVar19;
    int64_t *piVar20;
    int64_t iVar21;
    uint64_t uVar22;
    uint32_t uVar23;
    int64_t iVar24;
    ulong uVar25;
    uint64_t uVar26;
    ulong *puVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    uint64_t *puVar30;
    uint64_t *puVar31;
    uint32_t uVar32;
    char *pcVar33;
    int64_t iVar34;
    int64_t iVar35;
    uint64_t uVar36;
    uint64_t uVar37;
    float fVar42;
    uchar auVar38 [12];
    uchar auVar39 [12];
    uchar auVar40 [12];
    uchar auVar41 [12];
    float fVar43;
    float fVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    uint uVar49;
    float8 fVar50;
    float8 fVar51;
    float8 fVar52;
    float fVar53;
    float8 fVar54;
    float8 fVar55;
    float8 fVar56;
    float8 fVar57;
    float8 fVar58;
    float8 fVar59;
    float8 fVar60;
    float8 fVar61;
    float8 fVar62;
    float8 fVar63;
    float8 fVar64;
    float8 fVar65;
    uchar auVar66 [16];
    float fVar67;
    float8 fVar68;
    float8 fVar69;
    float8 fVar70;
    uchar in_q17 [16];
    uchar auVar71 [16];
    float fVar72;
    float fVar76;
    uchar auVar73 [12];
    uchar auVar74 [16];
    float fVar77;
    float fVar78;
    uchar auVar75 [16];
    uchar auVar79 [16];
    uchar auVar80 [16];
    float fVar81;
    float fVar82;
    float fVar83;
    float fVar84;
    float fVar85;
    float fVar86;
    float fVar87;
    float fVar88;
    float fVar89;
    float fVar90;
    float fVar91;
    float fVar92;
    float fVar93;
    float fVar94;
    float fVar95;
    float fVar96;
    float fVar97;
    float fVar98;
    float fVar99;
    float fVar100;
    float fVar101;
    uchar auVar102 [16];
    uchar auVar103 [16];
    float fVar104;
    float fVar106;
    float fVar107;
    uchar auVar105 [16];
    float fVar108;
    uchar auVar109 [16];
    uchar auVar110 [16];
    int64_t aiStack_318 [4];
    int64_t iStack_2f8;
    int64_t iStack_2f0;
    int64_t iStack_2e8;
    int64_t iStack_2e0;
    uint64_t uStack_2d8;
    int64_t iStack_2d0;
    int32_t iStack_2c4;
    uint64_t uStack_2c0;
    int64_t iStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a8;
    ulong uStack_2a0;
    uint64_t *puStack_298;
    int64_t iStack_290;
    int64_t *piStack_288;
    uint64_t uStack_280;
    int64_t iStack_278;
    int64_t aiStack_270 [4];
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_198;
    int64_t iStack_190;
    int64_t iStack_188;
    int64_t iStack_180;
    int64_t iStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    int64_t iStack_160;
    uint64_t uStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    int64_t iStack_140;
    ulong uStack_138;
    uint uStack_12c;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    int64_t *piStack_100;
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    uchar auStack_e8 [8];
    ulong uStack_e0;
    ulong uStack_d8;
    ushort uStack_d0;
    uint32_t uStack_ce;
    ushort uStack_ca;
    uint32_t uStack_c8;
    ushort uStack_c4;
    uint32_t auStack_c2 [2];
    int64_t iStack_b8;
    
    iStack_b8 = **reloc.__stack_chk_guard;
    iStack_108 = *param_3;
    uVar26 = param_1[1];
    if (uVar26 != 0) {
        uVar22 = 0;
        do {
            if (*(*param_1 + uVar22 * 0x10) == 0x98) {
                pcVar33 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar22, 0x98, iStack_108 + 0x778);
                iStack_110 = 0x48c + 0x193b8a000;
                iStack_108 = *param_3;
                piStack_100 = param_3[1];
                if (piStack_100 != NULL) goto code_r0x00019391a2f8;
                goto code_r0x00019391a304;
            }
            uVar22 = uVar22 + 1;
        } while (uVar22 <= uVar26 && uVar26 != uVar22);
    }
    pcVar33 = NULL;
    iStack_110 = 0x48c + 0x193b8a000;
    piStack_100 = param_3[1];
    if (piStack_100 != NULL) {
code_r0x00019391a2f8:
        tmp_ldXn = piStack_100[1];
        iVar24 = tmp_ldXn;
        tmp_stXn = iVar24 + 1;
        iVar24 = tmp_stXn;
        piStack_100[1] = iVar24;
        uVar19 = tmp_ldXn;
    }
code_r0x00019391a304:
    iStack_f8 = std::__1::chrono::steady_clock::now()();
    if (pcVar33 == NULL) {
        uVar26 = 1;
        goto code_r0x00019391a4f8;
    }
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_12c = 0;
    uVar26 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar33, *0x8 + -0x114);
    if ((uVar26 & 1) == 0) {
        uVar19 = **reloc.__stderrp;
        uVar25 = 0x2948;
code_r0x00019391a470:
        *(*0x8 + -0x318) = uVar25;
        fprintf(uVar19, 0x8ff + 0x193b8a000);
        uVar26 = 0;
        if (param_1 == NULL) goto code_r0x00019391a4f8;
    }
    else {
        uVar26 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar33, *0x8 + -0x118);
        if ((uVar26 & 1) == 0) {
            uVar19 = **reloc.__stderrp;
            uVar25 = 0x2949;
            goto code_r0x00019391a470;
        }
        uVar26 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar33, *0x8 + -0x11c);
        if ((uVar26 & 1) == 0) {
            uVar19 = **reloc.__stderrp;
            uVar25 = 0x294a;
            goto code_r0x00019391a470;
        }
        uVar26 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar33, *0x8 + -0x120);
        if ((uVar26 & 1) == 0) {
            uVar19 = **reloc.__stderrp;
            uVar25 = 0x294b;
            goto code_r0x00019391a470;
        }
        uVar26 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar33, *0x8 + -0x124);
        if ((uVar26 & 1) == 0) {
            uVar19 = **reloc.__stderrp;
            uVar25 = 0x294c;
            goto code_r0x00019391a470;
        }
        uVar26 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar33, *0x8 + -0x128);
        if ((uVar26 & 1) == 0) {
            uVar19 = **reloc.__stderrp;
            uVar25 = 0x294d;
            goto code_r0x00019391a470;
        }
        uVar26 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar33, *0x8 + -300);
        if ((uVar26 & 1) == 0) {
            uVar19 = **reloc.__stderrp;
            uVar25 = 0x294e;
            goto code_r0x00019391a470;
        }
        iVar24 = *(pcVar33 + 0x30);
        uVar22 = *(pcVar33 + 0x38);
        uVar26 = iVar24 + 1;
        if (uVar22 <= uVar26 && uVar26 != uVar22) {
            uVar19 = **reloc.__stderrp;
            uVar25 = 0x2950;
            goto code_r0x00019391a470;
        }
        uVar5 = *(*(pcVar33 + 0x28) + iVar24);
        *(pcVar33 + 0x30) = uVar26;
        uVar26 = iVar24 + 2;
        if (uVar22 <= uVar26 && uVar26 != uVar22) {
            uVar19 = **reloc.__stderrp;
            uVar25 = 0x2951;
            goto code_r0x00019391a470;
        }
        uVar6 = (*(pcVar33 + 0x28) + iVar24)[1];
        *(pcVar33 + 0x30) = uVar26;
        uVar23 = uStack_118._4_4_;
        iStack_148 = 0;
        iStack_140 = 0;
        iStack_150 = 0;
        if (uVar23 != 0) {
            iVar21 = uVar23 << 2;
            iStack_150 = operator new(unsigned long)(iVar21);
            iVar24 = iStack_150 + uVar23 * 4;
            iStack_140 = iVar24;
            bzero(iStack_150, iVar21);
            iStack_148 = iVar24;
        }
        uStack_138 = 0;
        uVar23 = uStack_118;
        iStack_168 = 0;
        iStack_160 = 0;
        iStack_170 = 0;
        if (uVar23 != 0) {
            iVar21 = uVar23 << 3;
            iStack_170 = operator new(unsigned long)(iVar21);
            iVar24 = iStack_170 + uVar23 * 8;
            iStack_160 = iVar24;
            bzero(iStack_170, iVar21);
            iStack_168 = iVar24;
        }
        uStack_158 = 0;
        uVar23 = uStack_120._4_4_;
        iStack_188 = 0;
        iStack_180 = 0;
        iStack_190 = 0;
        if (uVar23 != 0) {
            iVar21 = uVar23 << 2;
            iStack_190 = operator new(unsigned long)(iVar21);
            iVar24 = iStack_190 + uVar23 * 4;
            iStack_180 = iVar24;
            bzero(iStack_190, iVar21);
            iStack_188 = iVar24;
        }
        iStack_178 = 0;
        uVar26 = uStack_120;
        iStack_1a8 = 0;
        iStack_1a0 = 0;
        iStack_1b0 = 0;
        if (uStack_120 == 0) {
            iStack_198 = 0;
            iStack_1d0 = 0;
            iStack_1c8 = 0;
            iStack_1c0 = 0;
        }
        else {
            iStack_1b0 = operator new(unsigned long)(uVar26 << 3);
            iVar24 = iStack_1b0 + uVar26 * 8;
            iStack_1a0 = iVar24;
            bzero(iStack_1b0, uVar26 << 3);
            iStack_198 = 0;
            iStack_1a8 = iVar24;
            iStack_1d0 = operator new(unsigned long)(uVar26 << 2);
            iVar24 = iStack_1d0 + uVar26 * 4;
            iStack_1c0 = iVar24;
            bzero(iStack_1d0, uVar26 << 2);
            iStack_1c8 = iVar24;
        }
        iStack_1b8 = 0;
        uVar23 = uStack_128._4_4_;
        iStack_1e8 = 0;
        iStack_1e0 = 0;
        iStack_1f0 = 0;
        if (uVar23 != 0) {
            iVar21 = uVar23 << 2;
            iStack_1f0 = operator new(unsigned long)(iVar21);
            iVar24 = iStack_1f0 + uVar23 * 4;
            iStack_1e0 = iVar24;
            bzero(iStack_1f0, iVar21);
            iStack_1e8 = iVar24;
        }
        iStack_1d8 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uVar26 = fcn.1938de984(pcVar33, *0x8 + -0x210, uStack_128, uStack_12c, *0x8 + -0x150);
        if ((uVar26 & 1) == 0) {
            uVar19 = **reloc.__stderrp;
            uVar25 = 0x2962;
code_r0x00019391b304:
            *(*0x8 + -0x318) = uVar25;
            fprintf(uVar19, 0x8ff + 0x193b8a000);
code_r0x00019391b31c:
            uVar23 = 0;
            uVar29 = 0;
        }
        else {
            uVar26 = fcn.1938dece4(pcVar33, *0x8 + -0x230, uStack_128, uStack_12c, *0x8 + -0x170);
            if ((uVar26 & 1) == 0) {
                uVar19 = **reloc.__stderrp;
                uVar25 = 0x2963;
                goto code_r0x00019391b304;
            }
            uVar26 = fcn.1938de984(pcVar33, *0x8 + -0x210, uStack_128, uStack_12c, *0x8 + -400);
            if ((uVar26 & 1) == 0) {
                uVar19 = **reloc.__stderrp;
                uVar25 = 0x2964;
                goto code_r0x00019391b304;
            }
            uVar26 = fcn.1938dee94(pcVar33, *0x8 + -0x250, uStack_128, uStack_12c, *0x8 + -0x1b0);
            if ((uVar26 & 1) == 0) {
                uVar19 = **reloc.__stderrp;
                uVar25 = 0x2965;
                goto code_r0x00019391b304;
            }
            uVar26 = fcn.1938de984(pcVar33, *0x8 + -0x210, uStack_128, uStack_12c, *0x8 + -0x1d0);
            if ((uVar26 & 1) == 0) {
                uVar19 = **reloc.__stderrp;
                uVar25 = 0x2966;
                goto code_r0x00019391b304;
            }
            uVar26 = fcn.1938de984(pcVar33, *0x8 + -0x210, uStack_128, uStack_12c, *0x8 + -0x1f0);
            if ((uVar26 & 1) == 0) {
                uVar19 = **reloc.__stderrp;
                uVar25 = 0x2967;
                goto code_r0x00019391b304;
            }
            iVar21 = *param_3;
            iStack_2b8 = *(iVar21 + 0x20);
            iVar24 = *(iVar21 + 0x28) - iStack_2b8;
            if (iVar24 == 0) {
                uVar23 = 0;
                uVar29 = 1;
            }
            else {
                uStack_2b0 = *(iStack_2b8 + 0x88);
                if (uStack_2b0 == 0) {
                    uVar19 = **reloc.__stderrp;
                    uVar25 = 0x2973;
                    goto code_r0x00019391b304;
                }
                if (uStack_118._4_4_ == 0) {
                    uVar29 = 0;
                    uVar23 = 1;
                }
                else {
                    uStack_2a8 = 0;
                    iStack_2c4 = 0;
                    uStack_2c0 = 0;
                    iStack_2d0 = 1L << (uVar5 & 0x3f);
                    iStack_2f8 = iVar21 + 0xb48;
                    iStack_2e8 = *(iVar21 + 0x318);
                    iStack_2f0 = *(iStack_2e8 + 0x20);
                    aiStack_318[3] = iVar24 >> 8;
                    puVar2 = *0x8 + -0x280 + 0x10;
                    uStack_2d8 = iStack_2d0 + -1;
                    fVar65 = ~(-1 << (uVar6 & 0x1f));
                    fVar15 = 1.0 / (iStack_2d0 + -1);
                    aiStack_318[2] = iStack_2b8 + 0x88;
                    iStack_2e0 = -1;
                    uStack_2a0 = NEON_fmov(0x3f800000, 4);
                    fVar67 = 1.0;
                    fVar68 = 1.0 / fVar65;
                    do {
                        *puVar2 = 0;
                        puVar2[1] = 0;
                        puVar2[2] = 0;
                        aiStack_270[3] = geo::codec::Allocator::instance()();
                        uVar23 = *(iStack_150 + uStack_2a8 * 4);
                        if (uStack_2b0 < uVar23 || uStack_2b0 == uVar23) {
                            uVar22 = uStack_2c0;
                            uVar26 = uStack_2b0;
                            do {
                                uVar22 = uVar22 + 1;
                                if (aiStack_318[3] < uVar22 || aiStack_318[3] == uVar22) {
                                    uVar19 = **reloc.__stderrp;
                                    *(*0x8 + -0x318) = 0x297d;
                                    fprintf(uVar19, 0x8ff + 0x193b8a000);
                                    GeoCodecsTrafficSkeleton::~GeoCodecsTrafficSkeleton()(*0x8 + -0x278);
                                    goto code_r0x00019391b31c;
                                }
                                iVar18 = uVar26;
                                uVar29 = iVar18 + *(aiStack_318[2] + uVar22 * 0x100);
                                uVar26 = uVar29;
                            } while (uVar29 < uVar23 || uVar29 == uVar23);
                        }
                        else {
                            uVar22 = uStack_2c0;
                            uVar26 = uStack_2b0;
                            iVar18 = iStack_2c4;
                        }
                        iStack_278 = CONCAT44(uVar23 - iVar18, uVar22 & 0xffffffff);
                        uStack_2a8 = uStack_2a8 + 1;
                        uVar37 = uStack_2d8;
                        uVar36 = iStack_2e0 + uStack_2a8 * iStack_2d0;
                        iStack_2c4 = iVar18;
                        uStack_2c0 = uVar22;
                        uStack_2b0 = uVar26;
                        *(&stack0x00000000 + -0x280) = uVar36;
                        iVar34 = iStack_170;
                        uVar26 = *(iVar34 + uStack_158 * 8);
                        iVar21 = iStack_190;
                        iVar24 = iStack_178;
                        do {
                            uStack_158 = uStack_158 + 1;
                            iStack_178 = iVar24 + 1;
                            uVar29 = *(iVar21 + iVar24 * 4);
                            if (uVar29 != 0) {
                                auVar66 = ZEXT416((uVar26 & uVar37) * fVar15);
                                do {
                                    fcn.19393573c(puVar2);
                                    iVar24 = iStack_198;
                                    iStack_198 = iVar24 + 1;
                                    *(aiStack_270[1] + -0x18) = *(iStack_1b0 + iVar24 * 8);
                                    *(aiStack_270[1] + -0x20) = auVar66._0_4_;
                                    iVar24 = iStack_1b8;
                                    iStack_1b8 = iVar24 + 1;
                                    uVar28 = *(iStack_1d0 + iVar24 * 4);
                                    uVar32 = (uVar28 >> 3 | uVar28 << -3 + 0x20) & 1;
                                    *(aiStack_270[1] + -6) = uVar32;
                                    *(aiStack_270[1] + -7) = (uVar28 >> 2 | uVar28 << -2 + 0x20) & 1;
                                    *(aiStack_270[1] + -8) = ((uVar28 >> 5 | uVar28 << -5 + 0x20) & 1) != uVar32;
                                    *(aiStack_270[1] + -5) = (uVar28 >> 4 | uVar28 << -4 + 0x20) & 1;
                                    uVar26 = uVar29 + uStack_158 + -1;
                                    if (uVar26 < uStack_118) {
                                        if (iStack_168 - iStack_170 >> 3 <= uVar26) {
                                            std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__throw_out_of_range[abi:v160006]() const
                                                      ();
    // WARNING: Treating indirect jump as call
                                            UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x19391b414);
                                            uVar26 = (*UNRECOVERED_JUMPTABLE)();
                                            return uVar26;
                                        }
                                        puVar30 = iStack_170 + (uVar29 + uStack_158) * 8 + -8;
                                        puVar31 = &stack0x00000000 + -0x280;
                                        if (*puVar30 <= uVar36) {
                                            puVar31 = puVar30;
                                        }
                                    }
                                    else {
                                        puVar31 = &stack0x00000000 + -0x280;
                                    }
                                    *(aiStack_270[1] + -0x1c) = (*puVar31 & uVar37) * fVar15;
                                    if ((uVar28 & 1) == 0) {
                                        uVar29 = 0;
                                    }
                                    else {
                                        iVar24 = iStack_1d8;
                                        iStack_1d8 = iVar24 + 1;
                                        uVar29 = *(iStack_1f0 + iVar24 * 4);
                                    }
                                    *(aiStack_270[1] + -0x10) = uVar29 * fVar68;
                                    fVar50 = fVar65;
                                    if ((uVar28 >> 1 & 1) != 0) {
                                        iVar24 = iStack_1d8;
                                        iStack_1d8 = iVar24 + 1;
                                        fVar50 = NEON_ucvtf(*(iStack_1f0 + iVar24 * 4));
                                    }
                                    *(aiStack_270[1] + -0xc) = fVar50 * fVar68;
                                    iVar24 = iStack_178;
                                    iVar21 = iStack_190;
                                    iStack_178 = iVar24 + 1;
                                    uVar29 = *(iVar21 + iVar24 * 4);
                                } while (uVar29 != 0);
                                iVar34 = iStack_170;
                            }
                        } while ((uStack_158 < iStack_168 - iVar34 >> 3) &&
                                (uVar26 = *(iVar34 + uStack_158 * 8),  iVar24 = iStack_178, 
                                uVar26 < uVar36 || uVar26 == uVar36));
                        piStack_288 = iStack_2f0 +
                                      (*(iStack_2b8 + (uStack_2c0 & 0xffffffff) * 0x100 + 0x80) + (uVar23 - iVar18)) *
                                      0x10;
                        iVar24 = *(iStack_2e8 + 8);
                        iVar21 = *piStack_288;
                        iVar34 = piStack_288[1];
                        puVar31 = iVar24 + iVar21 * 8;
                        uVar26 = iVar34 + -1;
                        if (uVar26 == 0) {
                            fVar50 = 0.0;
                        }
                        else {
                            auVar66._0_8_ = *puVar31;
                            auVar66._8_8_ = 0;
                            uVar23 = iVar34 + -1;
                            fVar50 = 0.0;
                            if ((uVar23 < 0x10) || (!(iVar34 + -2 != -1) || iVar34 + -2 >> 0x20 != 0)) {
                                uVar29 = 0;
                            }
                            else {
                                in_q17._8_8_ = auVar66._0_8_;
                                uVar49 = auVar66._0_8_;
                                auVar73._0_8_ = CONCAT44(uVar49, uVar49);
                                auVar73._8_4_ = uVar49;
                                auVar71._0_12_ = auVar73;
                                auVar71._12_4_ = uVar49;
                                uVar29 = uVar23 & 0xfffffff0;
                                fVar50 = 0.0;
                                fVar69 = 0.0;
                                fVar51 = 0.0;
                                fVar70 = 0.0;
                                iVar34 = iVar24 + iVar21 * 8 + 0x48;
                                fVar61 = 0.0;
                                fVar62 = 0.0;
                                fVar59 = 0.0;
                                fVar60 = 0.0;
                                fVar52 = 0.0;
                                fVar54 = 0.0;
                                fVar63 = 0.0;
                                fVar64 = 0.0;
                                fVar55 = 0.0;
                                fVar56 = 0.0;
                                fVar57 = 0.0;
                                fVar58 = 0.0;
                                uVar32 = uVar29;
                                do {
                                    tmp_ldXn = iVar34 + -0x40;
                                    pfVar3 = tmp_ldXn;
                                    auVar79._0_4_ = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    auVar80._0_4_ = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    auVar79._4_4_ = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    auVar80._4_4_ = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    auVar79._8_4_ = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    auVar80._8_4_ = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    auVar79._12_4_ = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    auVar80._12_4_ = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    tmp_ldXn = iVar34 + -0x20;
                                    pfVar3 = tmp_ldXn;
                                    fVar81 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar89 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar83 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar90 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar85 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar91 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar87 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar92 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    tmp_ldXn = iVar34;
                                    pfVar3 = tmp_ldXn;
                                    fVar93 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar97 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar94 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar98 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar95 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar99 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar96 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    pfVar3 = tmp_ldXn;
                                    fVar100 = *pfVar3;
                                    iVar35 = tmp_ldXn;
                                    tmp_ldXn = iVar35 + 4;
                                    puVar27 = tmp_ldXn;
                                    pauVar1 = iVar34 + 0x30;
                                    auVar74 = NEON_ext(auVar71, auVar79, 0xc, 1);
                                    fVar48 = *puVar27;
                                    fVar42 = puVar27[1];
                                    fVar44 = **pauVar1;
                                    fVar46 = *(iVar34 + 0x38);
                                    auVar71 = NEON_ext(in_q17, auVar80, 0xc, 1);
                                    fVar53 = *puVar27 >> 0x20;
                                    fVar43 = puVar27[1] >> 0x20;
                                    fVar45 = **pauVar1 >> 0x20;
                                    fVar47 = *(iVar34 + 0x38) >> 0x20;
                                    auVar102._4_4_ = fVar83;
                                    auVar102._0_4_ = fVar81;
                                    auVar102._8_4_ = fVar85;
                                    auVar102._12_4_ = fVar87;
                                    auVar102 = NEON_ext(auVar79, auVar102, 0xc, 1);
                                    auVar103._4_4_ = fVar83;
                                    auVar103._0_4_ = fVar81;
                                    auVar103._8_4_ = fVar85;
                                    auVar103._12_4_ = fVar87;
                                    auVar105._4_4_ = fVar94;
                                    auVar105._0_4_ = fVar93;
                                    auVar105._8_4_ = fVar95;
                                    auVar105._12_4_ = fVar96;
                                    auVar103 = NEON_ext(auVar103, auVar105, 0xc, 1);
                                    auVar8._4_4_ = fVar94;
                                    auVar8._0_4_ = fVar93;
                                    auVar8._8_4_ = fVar95;
                                    auVar8._12_4_ = fVar96;
                                    auVar14._4_4_ = fVar42;
                                    auVar14._0_4_ = fVar48;
                                    auVar14._8_4_ = fVar44;
                                    auVar14._12_4_ = fVar46;
                                    auVar105 = NEON_ext(auVar8, auVar14, 0xc, 1);
                                    auVar109._4_4_ = fVar90;
                                    auVar109._0_4_ = fVar89;
                                    auVar109._8_4_ = fVar91;
                                    auVar109._12_4_ = fVar92;
                                    auVar109 = NEON_ext(auVar80, auVar109, 0xc, 1);
                                    auVar110._4_4_ = fVar90;
                                    auVar110._0_4_ = fVar89;
                                    auVar110._8_4_ = fVar91;
                                    auVar110._12_4_ = fVar92;
                                    auVar10._4_4_ = fVar98;
                                    auVar10._0_4_ = fVar97;
                                    auVar10._8_4_ = fVar99;
                                    auVar10._12_4_ = fVar100;
                                    auVar110 = NEON_ext(auVar110, auVar10, 0xc, 1);
                                    auVar11._4_4_ = fVar98;
                                    auVar11._0_4_ = fVar97;
                                    auVar11._8_4_ = fVar99;
                                    auVar11._12_4_ = fVar100;
                                    auVar13._4_4_ = fVar43;
                                    auVar13._0_4_ = fVar53;
                                    auVar13._8_4_ = fVar45;
                                    auVar13._12_4_ = fVar47;
                                    auVar66 = NEON_ext(auVar11, auVar13, 0xc, 1);
                                    fVar82 = auVar66._0_4_ - fVar53;
                                    fVar84 = auVar66._4_4_ - fVar43;
                                    fVar86 = auVar66._8_4_ - fVar45;
                                    fVar88 = auVar66._12_4_ - fVar47;
                                    fVar72 = auVar74._0_4_ - auVar79._0_4_;
                                    fVar76 = auVar74._4_4_ - auVar79._4_4_;
                                    fVar77 = auVar74._8_4_ - auVar79._8_4_;
                                    fVar78 = auVar74._12_4_ - auVar79._12_4_;
                                    fVar101 = auVar102._0_4_ - fVar81;
                                    fVar83 = auVar102._4_4_ - fVar83;
                                    fVar85 = auVar102._8_4_ - fVar85;
                                    fVar87 = auVar102._12_4_ - fVar87;
                                    fVar93 = auVar103._0_4_ - fVar93;
                                    fVar94 = auVar103._4_4_ - fVar94;
                                    fVar95 = auVar103._8_4_ - fVar95;
                                    fVar96 = auVar103._12_4_ - fVar96;
                                    fVar104 = auVar105._0_4_ - fVar48;
                                    fVar106 = auVar105._4_4_ - fVar42;
                                    fVar107 = auVar105._8_4_ - fVar44;
                                    fVar108 = auVar105._12_4_ - fVar46;
                                    fVar81 = auVar71._0_4_ - auVar80._0_4_;
                                    auVar38._0_4_ = fVar81 * fVar81;
                                    fVar81 = auVar71._4_4_ - auVar80._4_4_;
                                    auVar38._4_4_ = fVar81 * fVar81;
                                    fVar81 = auVar71._8_4_ - auVar80._8_4_;
                                    auVar38._8_4_ = fVar81 * fVar81;
                                    fVar81 = auVar71._12_4_ - auVar80._12_4_;
                                    auVar75._0_4_ = fVar72 * fVar72 + auVar38._0_4_;
                                    auVar75._4_4_ = fVar76 * fVar76 + auVar38._4_4_;
                                    auVar75._8_4_ = fVar77 * fVar77 + auVar38._8_4_;
                                    auVar75._12_4_ = fVar78 * fVar78 + fVar81 * fVar81;
                                    fVar81 = auVar109._0_4_ - fVar89;
                                    auVar39._0_4_ = fVar81 * fVar81;
                                    fVar81 = auVar109._4_4_ - fVar90;
                                    auVar39._4_4_ = fVar81 * fVar81;
                                    fVar81 = auVar109._8_4_ - fVar91;
                                    auVar39._8_4_ = fVar81 * fVar81;
                                    fVar81 = auVar109._12_4_ - fVar92;
                                    fVar72 = auVar110._0_4_ - fVar97;
                                    auVar40._0_4_ = fVar72 * fVar72;
                                    fVar72 = auVar110._4_4_ - fVar98;
                                    auVar40._4_4_ = fVar72 * fVar72;
                                    fVar72 = auVar110._8_4_ - fVar99;
                                    auVar40._8_4_ = fVar72 * fVar72;
                                    fVar72 = auVar110._12_4_ - fVar100;
                                    auVar41._0_4_ = fVar82 * fVar82;
                                    auVar41._4_4_ = fVar84 * fVar84;
                                    auVar41._8_4_ = fVar86 * fVar86;
                                    auVar66 = NEON_fsqrt(auVar75, 4);
                                    auVar74._4_4_ = fVar83 * fVar83 + auVar39._4_4_;
                                    auVar74._0_4_ = fVar101 * fVar101 + auVar39._0_4_;
                                    auVar74._8_4_ = fVar85 * fVar85 + auVar39._8_4_;
                                    auVar74._12_4_ = fVar87 * fVar87 + fVar81 * fVar81;
                                    auVar71 = NEON_fsqrt(auVar74, 4);
                                    auVar9._4_4_ = fVar94 * fVar94 + auVar40._4_4_;
                                    auVar9._0_4_ = fVar93 * fVar93 + auVar40._0_4_;
                                    auVar9._8_4_ = fVar95 * fVar95 + auVar40._8_4_;
                                    auVar9._12_4_ = fVar96 * fVar96 + fVar72 * fVar72;
                                    auVar102 = NEON_fsqrt(auVar9, 4);
                                    auVar12._4_4_ = fVar106 * fVar106 + auVar41._4_4_;
                                    auVar12._0_4_ = fVar104 * fVar104 + auVar41._0_4_;
                                    auVar12._8_4_ = fVar107 * fVar107 + auVar41._8_4_;
                                    auVar12._12_4_ = fVar108 * fVar108 + fVar88 * fVar88;
                                    auVar103 = NEON_fsqrt(auVar12, 4);
                                    fVar51 = fVar51 + auVar66._8_8_;
                                    fVar70 = fVar70 + (auVar66._8_8_ >> 0x20);
                                    fVar50 = fVar50 + auVar66._0_8_;
                                    fVar69 = fVar69 + (auVar66._0_8_ >> 0x20);
                                    fVar59 = fVar59 + auVar71._8_8_;
                                    fVar60 = fVar60 + (auVar71._8_8_ >> 0x20);
                                    fVar61 = fVar61 + auVar71._0_8_;
                                    fVar62 = fVar62 + (auVar71._0_8_ >> 0x20);
                                    fVar63 = fVar63 + auVar102._8_8_;
                                    fVar64 = fVar64 + (auVar102._8_8_ >> 0x20);
                                    fVar52 = fVar52 + auVar102._0_8_;
                                    fVar54 = fVar54 + (auVar102._0_8_ >> 0x20);
                                    fVar57 = fVar57 + auVar103._8_8_;
                                    fVar58 = fVar58 + (auVar103._8_8_ >> 0x20);
                                    fVar55 = fVar55 + auVar103._0_8_;
                                    fVar56 = fVar56 + (auVar103._0_8_ >> 0x20);
                                    iVar34 = iVar34 + 0x80;
                                    in_q17._12_4_ = fVar47;
                                    in_q17._8_4_ = fVar45;
                                    in_q17._0_8_ = CONCAT44(fVar43, fVar53);
                                    auVar71._12_4_ = fVar46;
                                    auVar71._8_4_ = fVar44;
                                    auVar71._0_8_ = CONCAT44(fVar42, fVar48);
                                    uVar32 = uVar32 + -0x10;
                                } while (uVar32 != 0);
                                fVar50 = fVar55 + fVar52 + fVar61 + fVar50 + fVar57 + fVar63 + fVar59 + fVar51 +
                                         fVar56 + fVar54 + fVar62 + fVar69 + fVar58 + fVar64 + fVar60 + fVar70;
                                if (uVar23 == uVar29) goto code_r0x00019391abd4;
                                auVar66 = NEON_ext(*pauVar1, *pauVar1, 8, 1);
                            }
                            uVar23 = uVar29 + 1;
                            do {
                                uVar36 = puVar31[uVar23];
                                fVar48 = auVar66._0_4_ - uVar36;
                                fVar53 = auVar66._4_4_ - (uVar36 >> 0x20);
                                fVar50 = fVar50 + SQRT(fVar48 * fVar48 + fVar53 * fVar53);
                                uVar22 = uVar23;
                                uVar23 = uVar23 + 1;
                                auVar66._8_8_ = 0;
                                auVar66._0_8_ = uVar36;
                            } while (uVar22 <= uVar26 && uVar26 != uVar22);
                        }
code_r0x00019391abd4:
                        puStack_298 = puVar31;
                        if (aiStack_270[1] == aiStack_270[0]) {
                            uVar26 = 0;
                        }
                        else {
                            uVar22 = 0;
                            uVar36 = 0;
                            iStack_290 = iVar24 + iVar21 * 8 + 8;
                            fVar69 = 0.0;
                            do {
                                iVar24 = aiStack_270[0];
                                pfVar3 = aiStack_270[0] + uVar22 * 0x20;
                                fVar48 = *pfVar3;
                                bVar16 = false;
                                bVar17 = false;
                                if (fVar48 >= 0.0) {
                                    bVar16 = fVar48 < fVar67;
                                    bVar17 = fVar48 == fVar67;
                                }
                                if (bVar17 || bVar16 != (fVar48 < 0.0 && false)) {
                                    fVar48 = pfVar3[1];
                                    bVar16 = false;
                                    bVar17 = false;
                                    if (fVar48 >= 0.0) {
                                        bVar16 = fVar48 < fVar67;
                                        bVar17 = fVar48 == fVar67;
                                    }
                                    if (!bVar17 && bVar16 == (fVar48 < 0.0 && false)) goto code_r0x00019391accc;
                                }
                                else {
code_r0x00019391accc:
                                    if (*0x1d66e0538 != -1) {
                                        dispatch_once(0x538 + 0x1d66e0000, typeinfo for geo::Allocator + 0x28);
                                        uVar19 = *__MergedGlobals;
                                        iVar18 = os_log_type_enabled(uVar19, 0x10);
                                        if (iVar18 != 0) goto code_r0x00019391acf4;
                                    }
                                    else {
                                        uVar19 = *__MergedGlobals;
                                        iVar18 = os_log_type_enabled(uVar19, 0x10);
                                        if (iVar18 != 0) {
code_r0x00019391acf4:
                                            iVar21 = iVar24 + uVar22 * 0x20;
                                            fVar48 = *pfVar3;
                                            fVar53 = *(iVar21 + 4);
                                            uVar7 = *(param_2 + 1);
                                            uVar26 = *param_2;
                                            auStack_f0 = CONCAT44(auStack_f0._4_4_, 0x600) | 0x8000000;
                                            *(*0x8 + -0xec) = *(iVar21 + 8);
                                            auStack_e8._0_6_ = CONCAT24(0x800, auStack_e8._0_4_);
                                            *(*0x8 + -0xe2) = fVar48;
                                            uStack_e0 = CONCAT26(0x800, uStack_e0);
                                            uStack_d0 = 0x400;
                                            *(*0x8 + -0xce) = (uVar26 >> 0xe | uVar26 << -0xe + 0x40) & 0x3ffffff;
                                            uStack_ca = 0x400;
                                            uStack_c4 = 0x400;
                                            *(*0x8 + -0xc2) = (uVar26 >> 8 | uVar26 << -8 + 0x20) & 0x3f;
                                            uStack_d8 = fVar53;
                                            uStack_c8 = (uVar26 >> 0x28 & 0xffffff | uVar7 << -8 + 0x20 & 0xff000000) &
                                                        0x3ffffff;
                                            _os_log_impl(segment.__TEXT, uVar19, 0x10, 0x2d7 + 0x193ba3000, *0x8 + -0xf0
                                                         , 0x32);
                                        }
                                    }
                                }
                                fVar70 = *pfVar3;
                                fVar51 = NEON_fnmsub(fVar50, fVar70, fVar69);
                                iVar24 = iVar24 + uVar22 * 0x20;
                                fVar48 = *(iVar24 + 4);
                                *pfVar3 = 0.0;
                                if ((uVar36 < piStack_288[1] + -1) && (0.0 <= fVar51)) {
                                    uVar26 = puStack_298[uVar36];
                                    while( true ) {
                                        uVar37 = puVar31[uVar36 + 1];
                                        fVar53 = uVar26 - uVar37;
                                        fVar42 = (uVar26 >> 0x20) - (uVar37 >> 0x20);
                                        fVar53 = SQRT(fVar53 * fVar53 + fVar42 * fVar42);
                                        fVar54 = fVar53;
                                        fVar52 = fVar51;
                                        fVar51 = fVar52 - fVar54;
                                        if ((0.0 < fVar53) && (fVar51 <= 0.0)) break;
                                        uVar36 = uVar36 + 1;
                                        fVar69 = fVar69 + fVar54;
                                        if ((piStack_288[1] + -1 <= uVar36) || (uVar26 = uVar37,  fVar51 < 0.0))
                                        goto code_r0x00019391ae38;
                                    }
                                    *pfVar3 = fVar52 / fVar54 + uVar36;
                                }
code_r0x00019391ae38:
                                if (0.0 < fVar51) {
                                    if (*0x1d66e0538 != -1) {
                                        dispatch_once(0x538 + 0x1d66e0000, typeinfo for geo::Allocator + 0x28);
                                        uVar19 = *__MergedGlobals;
                                        iVar18 = os_log_type_enabled(uVar19, 0x10);
                                        if (iVar18 != 0) goto code_r0x00019391ae68;
                                    }
                                    else {
                                        uVar19 = *__MergedGlobals;
                                        iVar18 = os_log_type_enabled(uVar19, 0x10);
                                        if (iVar18 != 0) {
code_r0x00019391ae68:
                                            uVar7 = *(param_2 + 1);
                                            uVar26 = *param_2;
                                            auStack_f0 = CONCAT44(auStack_f0._4_4_, 0x600) | 0x8000000;
                                            *(*0x8 + -0xec) = *(iVar24 + 8);
                                            auStack_e8._0_6_ = CONCAT24(0x800, auStack_e8._0_4_);
                                            *(*0x8 + -0xe2) = fVar70;
                                            uStack_e0 = CONCAT26(0x800, uStack_e0);
                                            uStack_d0 = 0x400;
                                            *(*0x8 + -0xce) = (uVar26 >> 0xe | uVar26 << -0xe + 0x40) & 0x3ffffff;
                                            uStack_ca = 0x400;
                                            uStack_c4 = 0x400;
                                            *(*0x8 + -0xc2) = (uVar26 >> 8 | uVar26 << -8 + 0x20) & 0x3f;
                                            uStack_d8 = fVar48;
                                            uStack_c8 = (uVar26 >> 0x28 & 0xffffff | uVar7 << -8 + 0x20 & 0xff000000) &
                                                        0x3ffffff;
                                            _os_log_impl(segment.__TEXT, uVar19, 0x10, 0x351 + 0x193ba3000, *0x8 + -0xf0
                                                         , 0x32);
                                        }
                                    }
                                }
                                fVar52 = NEON_fnmsub(fVar50, *(iVar24 + 4), fVar69);
                                *(iVar24 + 4) = 0;
                                puVar27 = iStack_290 + uVar36 * 8;
                                fVar51 = 0x88e368f1 | 0x3ee4f8b500000000;
                                uVar26 = uVar36;
                                do {
                                    uVar37 = uVar26;
                                    fVar54 = fVar52;
                                    if ((piStack_288[1] + -1 <= uVar37) || (fVar54 < 0.0)) {
                                        fVar52 = fVar54;
                                        goto code_r0x00019391af9c;
                                    }
                                    fVar53 = puVar27[-1] - *puVar27;
                                    fVar42 = (puVar27[-1] >> 0x20) - (*puVar27 >> 0x20);
                                    fVar53 = SQRT(fVar53 * fVar53 + fVar42 * fVar42);
                                    fVar52 = fVar54 - fVar53;
                                    puVar27 = puVar27 + 1;
                                    bVar16 = false;
                                    bVar17 = false;
                                    if (fVar53 != 0.0 && fVar53 >= 0.0) {
                                        bVar16 = fVar52 < fVar51;
                                        bVar17 = fVar52 == fVar51;
                                    }
                                    uVar26 = uVar37 + 1;
                                } while (!bVar17 && bVar16 == ((fVar53 == 0.0 || fVar53 < 0.0) && false));
                                *(iVar24 + 4) = (fVar54 / fVar53 + uVar37) - *pfVar3;
code_r0x00019391af9c:
                                if (fVar51 < fVar52) {
                                    if (*0x1d66e0538 != -1) {
                                        dispatch_once(0x538 + 0x1d66e0000, typeinfo for geo::Allocator + 0x28);
                                        uVar19 = *__MergedGlobals;
                                        iVar18 = os_log_type_enabled(uVar19, 0x10);
                                        if (iVar18 != 0) goto code_r0x00019391ac04;
                                    }
                                    else {
                                        uVar19 = *__MergedGlobals;
                                        iVar18 = os_log_type_enabled(uVar19, 0x10);
                                        if (iVar18 != 0) {
code_r0x00019391ac04:
                                            uVar7 = *(param_2 + 1);
                                            uVar26 = *param_2;
                                            auStack_f0 = CONCAT44(auStack_f0._4_4_, 0x600) | 0x8000000;
                                            *(*0x8 + -0xec) = *(iVar24 + 8);
                                            auStack_e8._0_6_ = CONCAT24(0x800, auStack_e8._0_4_);
                                            *(*0x8 + -0xe2) = fVar70;
                                            uStack_e0 = CONCAT26(0x800, uStack_e0);
                                            uStack_d0 = 0x400;
                                            *(*0x8 + -0xce) = (uVar26 >> 0xe | uVar26 << -0xe + 0x40) & 0x3ffffff;
                                            uStack_ca = 0x400;
                                            uStack_c4 = 0x400;
                                            *(*0x8 + -0xc2) = (uVar26 >> 8 | uVar26 << -8 + 0x20) & 0x3f;
                                            uStack_d8 = fVar48;
                                            uStack_c8 = (uVar26 >> 0x28 & 0xffffff | uVar7 << -8 + 0x20 & 0xff000000) &
                                                        0x3ffffff;
                                            _os_log_impl(segment.__TEXT, uVar19, 0x10, 0x3bc + 0x193ba3000, *0x8 + -0xf0
                                                         , 0x32);
                                        }
                                    }
                                }
                                uVar22 = uVar22 + 1;
                                uVar26 = aiStack_270[1] - aiStack_270[0] >> 5;
                            } while (uVar22 < uVar26);
                        }
                        if (uVar26 != 0) {
                            iVar24 = 0;
                            do {
                                fVar50 = uStack_d8;
                                pfVar3 = aiStack_270[0] + iVar24;
                                if (*(pfVar3 + 0x1a) != '\0') {
                                    *pfVar3 = pfVar3[1] + *pfVar3;
                                    pfVar3[1] = -pfVar3[1];
                                }
                                if (*(pfVar3 + 0x19) == '\0') {
                                    pfVar4 = aiStack_270[0] + iVar24;
                                    auStack_e8 = -*(pfVar4 + 2);
                                    auStack_f0 = CONCAT44(-pfVar4[1], pfVar4[1] + *pfVar4);
                                    uStack_e0 = NEON_rev64(CONCAT44((uStack_2a0 >> 0x20) - (*(pfVar4 + 4) >> 0x20), 
                                                                    uStack_2a0 - *(pfVar4 + 4)), 4);
                                    uStack_d8._0_2_ = *(pfVar4 + 6) == '\0';
                                    uStack_d8._0_3_ = CONCAT12(*(pfVar3 + 0x1a), uStack_d8);
                                    void std::__1::vector<GeoCodecsTrafficSkeletonRecord, geo::StdAllocator<GeoCodecsTrafficSkeletonRecord, geo::codec::Allocator> >::emplace_back<GeoCodecsTrafficSkeletonRecord&>(GeoCodecsTrafficSkeletonRecord&)
                                              (puVar2, *0x8 + -0xf0);
                                }
                                iVar24 = iVar24 + 0x20;
                                uVar26 = uVar26 + -1;
                            } while (uVar26 != 0);
                        }
                        void std::__1::vector<GeoCodecsTrafficSkeleton, geo::StdAllocator<GeoCodecsTrafficSkeleton, geo::codec::Allocator> >::emplace_back<GeoCodecsTrafficSkeleton&>(GeoCodecsTrafficSkeleton&)
                                  (iStack_2f8, *0x8 + -0x278);
                        GeoCodecsTrafficSkeleton::~GeoCodecsTrafficSkeleton()(*0x8 + -0x278);
                        uVar29 = 0;
                        uVar23 = 1;
                    } while (uStack_2a8 < uStack_118._4_4_);
                }
            }
        }
        mgcl::ints::IntDecompressor<long long>::~IntDecompressor()(*0x8 + -0x250);
        mgcl::ints::IntDecompressor<unsigned long long>::~IntDecompressor()(*0x8 + -0x230);
        mgcl::ints::IntDecompressor<unsigned int>::~IntDecompressor()(*0x8 + -0x210);
        if (iStack_1f0 != 0) {
            iStack_1e8 = iStack_1f0;
            operator delete(void*)();
        }
        if (iStack_1d0 != 0) {
            iStack_1c8 = iStack_1d0;
            operator delete(void*)();
        }
        if (iStack_1b0 != 0) {
            iStack_1a8 = iStack_1b0;
            operator delete(void*)();
        }
        if (iStack_190 != 0) {
            iStack_188 = iStack_190;
            operator delete(void*)();
        }
        if (iStack_170 != 0) {
            iStack_168 = iStack_170;
            operator delete(void*)();
        }
        if (iStack_150 != 0) {
            iStack_148 = iStack_150;
            operator delete(void*)();
        }
        uVar26 = uVar23 | uVar29;
        if (param_1 == NULL) goto code_r0x00019391a4f8;
    }
    if (*pcVar33 != '\0') {
        piVar20 = geo::codec::Allocator::instance()();
        (**(*piVar20 + 0x28))(piVar20, *(pcVar33 + 0x28), 0);
    }
    piVar20 = geo::codec::Allocator::instance()();
    (**(*piVar20 + 0x28))(piVar20, pcVar33, 0);
code_r0x00019391a4f8:
    iVar24 = iStack_110;
    iVar35 = iStack_108;
    iVar21 = std::__1::chrono::steady_clock::now()();
    iVar34 = iStack_f8;
    iStack_278 = iVar24;
    if (iVar24 != 0) {
        auStack_f0 = *0x8 + -0x278;
        iVar24 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar35 + 0x778, *0x8 + -0x278, 0x74c + 0x193af9000, *0x8 + -0xf0, *0x8 + -0x150);
        iVar21 = SUB168(SEXT816(iVar21 - iVar34) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar24 + 0x20) = ((iVar21 >> 7) - (iVar21 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar20 = piStack_100;
    if (piStack_100 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_100[1];
        iVar24 = tmp_ldXn;
        tmp_stXn = iVar24 + -1;
        iVar24 = tmp_stXn;
        piStack_100[1] = iVar24;
        iVar24 = tmp_ldXn;
        LORelease();
        if (iVar24 == 0) {
            (**(*piVar20 + 0x10))(piVar20);
            std::__1::__shared_weak_count::__release_weak()(piVar20);
        }
    }
    if (**reloc.__stack_chk_guard == iStack_b8) {
        return uVar26;
    }
    // WARNING: Subroutine does not return
    __stack_chk_fail();
}
