
ulong geo::codec::_decodeDaVinciRenderables(VMP4Chapter*, std::__1::unordered_map<unsigned int, std::__1::vector<geo::Transform<float>, geo::StdAllocator<geo::Transform<float>, geo::codec::Allocator> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, std::__1::vector<geo::Transform<float>, geo::StdAllocator<geo::Transform<float>, geo::codec::Allocator> > > > > const&, std::__1::unordered_map<unsigned int, std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> > > > >&, GeoCodecsDaVinciRenderable**, unsigned short&, std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >&, unsigned long&)
                (int64_t param_1, int64_t *param_2, ulong param_3, int64_t *param_4, uint *param_5, int64_t *param_6, 
                int64_t *param_7)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int32_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    uint *puVar9;
    ulong *puVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    int64_t *piVar14;
    ulong *puVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong *puVar18;
    ulong *puVar19;
    uint32_t *puVar20;
    int64_t **ppiVar21;
    uint64_t uVar22;
    int64_t iVar23;
    int64_t *piVar24;
    uint32_t *puVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    ulong *puVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    int64_t iVar32;
    uint32_t uVar33;
    int64_t *piVar34;
    int64_t iVar35;
    int64_t *piVar36;
    ushort uVar37;
    float fVar38;
    ulong uVar39;
    ulong uVar40;
    float fVar41;
    ulong uVar42;
    ulong uVar43;
    ulong uVar44;
    ulong uVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    uint uVar49;
    uint uVar50;
    float fVar51;
    uint uVar52;
    uint uVar53;
    float fVar54;
    uint uVar55;
    int32_t iVar56;
    uchar auVar57 [16];
    ulong uStack_218;
    int64_t *piStack_210;
    int64_t iStack_208;
    uint64_t uStack_200;
    int64_t *piStack_1f8;
    uint64_t uStack_1f0;
    uint *puStack_1e8;
    int64_t *piStack_1e0;
    int64_t iStack_1d8;
    uchar *puStack_1d0;
    code *pcStack_1c8;
    int64_t iStack_1c0;
    ulong uStack_1b8;
    int64_t iStack_1b0;
    int64_t *piStack_1a8;
    int32_t iStack_1a0;
    uint uStack_19c;
    int64_t *piStack_198;
    uint *puStack_190;
    ulong uStack_188;
    int64_t *piStack_180;
    ulong *puStack_178;
    int64_t *piStack_170;
    uint uStack_168;
    uint uStack_164;
    uint uStack_160;
    uint uStack_158;
    uint uStack_154;
    uint uStack_150;
    uint uStack_148;
    uint uStack_144;
    uint uStack_140;
    uint uStack_138;
    uint uStack_134;
    uint uStack_130;
    int32_t aiStack_128 [5];
    uint uStack_114;
    uint uStack_100;
    uint uStack_ec;
    int32_t *piStack_e8;
    float fStack_e0;
    uint uStack_dc;
    float fStack_d8;
    float fStack_d4;
    float fStack_d0;
    uint uStack_cc;
    float fStack_c8;
    float fStack_c4;
    float fStack_c0;
    uint uStack_bc;
    uint uStack_b8;
    uint uStack_b4;
    uint uStack_b0;
    uint uStack_ac;
    
    *param_7 = 0;
    uVar22 = *(param_1 + 0x30) + 2;
    if (*(param_1 + 0x38) <= uVar22 && uVar22 != *(param_1 + 0x38)) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1db9;
code_r0x0001939316f0:
        iStack_1c0 = 0x7bc + 0x193b8a000;
        fprintf(uVar5, 0x8ff + 0x193b8a000);
        return 0;
    }
    uVar3 = *(*(param_1 + 0x28) + *(param_1 + 0x30));
    uVar12 = uVar3;
    *param_5 = uVar3;
    *(param_1 + 0x30) = uVar22;
    param_6[1] = *param_6;
    uVar22 = param_6[2] - *param_6 >> 3;
    uStack_188 = param_3;
    if (uVar12 < uVar22 || uVar12 == uVar22) goto code_r0x000193931888;
    puVar6 = (**(*param_6[3] + 0x10))(param_6[3], uVar12 * 8, 8);
    puVar10 = *param_6;
    puVar18 = param_6[1];
    puVar15 = puVar6;
    if (puVar18 - puVar10 != 0) {
        uVar22 = (puVar18 - puVar10) + -8;
        if (uVar22 < 0x38) {
        }
        else if (0x3f < puVar18 - puVar6) {
            uVar22 = (uVar22 >> 3) + 1;
            uVar26 = uVar22 & 0x3ffffffffffffff8;
            puVar15 = puVar6 + -uVar26;
            puVar19 = puVar18 + -0x20;
            puVar28 = puVar6 + -0x20;
            uVar30 = uVar26;
            do {
                uVar40 = *puVar19;
                uVar39 = puVar19[3];
                uVar5 = puVar19[2];
                uVar45 = puVar19[-3];
                uVar44 = puVar19[-4];
                uVar43 = puVar19[-1];
                uVar42 = puVar19[-2];
                puVar28[1] = puVar19[1];
                *puVar28 = uVar40;
                puVar28[3] = uVar39;
                puVar28[2] = uVar5;
                puVar28[-3] = uVar45;
                puVar28[-4] = uVar44;
                puVar28[-1] = uVar43;
                puVar28[-2] = uVar42;
                puVar19 = puVar19 + -0x40;
                puVar28 = puVar28 + -0x40;
                uVar30 = uVar30 + -8;
            } while (uVar30 != 0);
            puVar18 = puVar18 + -uVar26;
            if (uVar22 == uVar26) goto code_r0x00019393184c;
        }
        do {
            puVar18 = puVar18 + -1;
            puVar15 = puVar15 + -1;
            *puVar15 = *puVar18;
        } while (puVar18 != puVar10);
    }
code_r0x00019393184c:
    *param_6 = puVar15;
    param_6[1] = puVar6;
    iVar16 = param_6[2];
    param_6[2] = puVar6 + uVar12;
    if (puVar10 != NULL) {
        (**(*param_6[3] + 0x28))(param_6[3], puVar10, iVar16 - puVar10);
    }
code_r0x000193931888:
    piVar7 = geo::codec::Allocator::instance()();
    iVar16 = (**(*piVar7 + 0x18))(piVar7, *param_5, 0x30);
    *param_4 = iVar16;
    if (*param_5 == 0) {
        return 1;
    }
    piVar7 = NULL;
    puStack_178 = aiStack_128 | 4;
    piStack_180 = param_2;
code_r0x0001939318d4:
    while( true ) {
        iVar23 = *(param_1 + 0x30);
        uVar12 = *(param_1 + 0x38);
        uVar22 = iVar23 + 1;
        if (uVar12 <= uVar22 && uVar22 != uVar12) {
            uVar5 = **reloc.__stderrp;
            uStack_1b8 = 0x1dc3;
            goto code_r0x0001939316f0;
        }
        iVar35 = *param_4;
        iVar17 = *(param_1 + 0x28);
        puVar1 = iVar17 + iVar23;
        uVar2 = *puVar1;
        *(param_1 + 0x30) = uVar22;
        iVar32 = iVar35 + piVar7 * 0x30;
        *(iVar32 + 0x2d) = uVar2 & 1;
        if ((uVar2 & 1) != 0) break;
        uVar22 = iVar23 + 3;
        if (uVar12 <= uVar22 && uVar22 != uVar12) {
            uVar5 = **reloc.__stderrp;
            uStack_1b8 = 0x1ddb;
            goto code_r0x0001939316f0;
        }
        uVar3 = *(puVar1 + 1);
        *(param_1 + 0x30) = uVar22;
        *(iVar32 + 0x18) = uVar3;
        if ((uVar2 >> 1 & 1) != 0) goto code_r0x0001939319a4;
code_r0x000193931adc:
        *(iVar32 + 0x10) = 0;
        uVar30 = uVar22;
        if ((uVar2 >> 4 & 1) == 0) goto code_r0x000193931ae4;
code_r0x0001939319c4:
        if (uVar12 <= uVar30 + 1 && uVar30 + 1 != uVar12) {
            uVar5 = **reloc.__stderrp;
            uStack_1b8 = 0x1de7;
            goto code_r0x0001939316f0;
        }
        *(iVar32 + 0x2c) = *(iVar17 + uVar30);
        uVar30 = *(param_1 + 0x30) + 1;
        *(param_1 + 0x30) = uVar30;
        piVar36 = iVar35 + piVar7 * 0x30;
        if ((uVar2 >> 2 & 1) != 0) goto code_r0x0001939319f0;
code_r0x000193931af4:
        *(iVar32 + 0x2a) = 1;
        piVar8 = geo::codec::Allocator::instance()(iVar16);
        puVar9 = (**(*piVar8 + 0x18))(piVar8, 1, 0x30);
        *piVar36 = puVar9;
        *puVar9 = 0x3f800000;
        puVar9[5] = 0x3f800000;
        puVar9[10] = 0x3f800000;
        piVar7 = piVar7 + 1;
        iVar16 = 1;
        if (*param_5 <= piVar7) {
            return 1;
        }
    }
    if (*(param_1 + 0x40) < 0x11) {
        uVar22 = iVar23 + 5;
        if (uVar12 <= uVar22 && uVar22 != uVar12) {
            uVar5 = **reloc.__stderrp;
            uStack_1b8 = 0x1dcf;
            goto code_r0x0001939316f0;
        }
        *(iVar32 + 0x18) = *(puVar1 + 1);
    }
    else {
        uVar22 = iVar23 + 9;
        if (uVar12 <= uVar22 && uVar22 != uVar12) {
            uVar5 = **reloc.__stderrp;
            uStack_1b8 = 0x1dcd;
            goto code_r0x0001939316f0;
        }
        *(iVar32 + 0x18) = *(puVar1 + 1);
    }
    *(param_1 + 0x30) = uVar22;
    iVar16 = void std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >::emplace_back<unsigned long long&>(unsigned long long&)
                       (param_6);
    iVar23 = *(param_1 + 0x30);
    uVar12 = *(param_1 + 0x38);
    if (*(param_1 + 0x40) < 0x15) {
        uVar22 = iVar23 + 2;
        if (uVar22 < uVar12 || uVar22 == uVar12) {
            iVar17 = *(param_1 + 0x28);
            *(iVar32 + 0x28) = *(iVar17 + iVar23);
            *(param_1 + 0x30) = uVar22;
            *(iVar32 + 0x20) = 0;
            if ((uVar2 >> 1 & 1) != 0) goto code_r0x0001939319a4;
            goto code_r0x000193931adc;
        }
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1dd6;
    }
    else {
        uVar22 = iVar23 + 8;
        if (uVar22 < uVar12 || uVar22 == uVar12) {
            iVar17 = *(param_1 + 0x28);
            *(iVar32 + 0x20) = *(iVar17 + iVar23);
            *(param_1 + 0x30) = uVar22;
            if ((uVar2 >> 1 & 1) == 0) goto code_r0x000193931adc;
code_r0x0001939319a4:
            uVar30 = uVar22 + 8;
            if (uVar12 <= uVar30 && uVar30 != uVar12) {
                uVar5 = **reloc.__stderrp;
                uStack_1b8 = 0x1de1;
            }
            else {
                *(iVar32 + 0x10) = *(iVar17 + uVar22);
                *(param_1 + 0x30) = uVar30;
                if ((uVar2 >> 4 & 1) != 0) goto code_r0x0001939319c4;
code_r0x000193931ae4:
                *(iVar32 + 0x2c) = 0;
                piVar36 = iVar35 + piVar7 * 0x30;
                if ((uVar2 >> 2 & 1) == 0) goto code_r0x000193931af4;
code_r0x0001939319f0:
                piVar8 = piStack_180;
                uVar22 = uVar30 + 2;
                piStack_170 = piVar36;
                if (*(param_1 + 0x38) <= uVar22 && uVar22 != *(param_1 + 0x38)) {
                    uVar5 = **reloc.__stderrp;
                    uStack_1b8 = 0x1dee;
                }
                else {
                    *(iVar32 + 0x2a) = *(*(param_1 + 0x28) + uVar30);
                    *(param_1 + 0x30) = uVar22;
                    piVar36 = geo::codec::Allocator::instance()(iVar16);
                    iVar16 = (**(*piVar36 + 0x18))(piVar36, *(iVar32 + 0x2a), 0x30);
                    *piStack_170 = iVar16;
                    piVar36 = geo::codec::Allocator::instance()();
                    uVar5 = (**(*piVar36 + 0x18))(piVar36, *(iVar32 + 0x2a), 1);
                    *(iVar32 + 8) = uVar5;
                    iVar4 = piVar7;
                    if ((uVar2 >> 3 & 1) != 0) {
                        uVar22 = *(iVar32 + 0x2a);
                        goto code_r0x000193931b5c;
                    }
                    piVar36 = piVar8[1];
                    if (piVar36 != NULL) {
                        uVar5 = NEON_cnt(piVar36, 1);
                        uVar37 = NEON_uaddlv(uVar5, 1);
                        uVar33 = CONCAT62(uVar5 >> 0x10, uVar37) & 0xffffffff;
                        if (uVar33 < 2) {
                            piVar14 = piVar36 + 0xffffU & piVar7;
                        }
                        else {
                            piVar14 = piVar7;
                            if (piVar36 < piVar7 || piVar36 == piVar7) {
                                uVar22 = 0;
                                if (piVar36 != NULL) {
                                    uVar22 = piVar7 / piVar36;
                                }
                                piVar14 = piVar7 - uVar22 * piVar36;
                            }
                        }
                        ppiVar21 = *(*piVar8 + piVar14 * 8);
                        if ((ppiVar21 != NULL) && (ppiVar21 = *ppiVar21,  ppiVar21 != NULL)) {
                            if (1 < uVar33) {
                                do {
                                    piVar34 = ppiVar21[1];
                                    if (piVar34 == piVar7) {
                                        if (*(ppiVar21 + 2) == iVar4) goto code_r0x000193932144;
                                    }
                                    else {
                                        if (piVar36 <= piVar34) {
                                            uVar22 = 0;
                                            if (piVar36 != NULL) {
                                                uVar22 = piVar34 / piVar36;
                                            }
                                            piVar34 = piVar34 - uVar22 * piVar36;
                                        }
                                        if (piVar34 != piVar14) goto code_r0x000193932228;
                                    }
                                    ppiVar21 = *ppiVar21;
                                    if (ppiVar21 == NULL) goto code_r0x000193932228;
                                } while( true );
                            }
                            do {
                                if (ppiVar21[1] == piVar7) {
                                    if (*(ppiVar21 + 2) == iVar4) goto code_r0x000193932144;
                                }
                                else if ((ppiVar21[1] & piVar36 + -1) != piVar14) break;
                                ppiVar21 = *ppiVar21;
                                if (ppiVar21 == NULL) break;
                            } while( true );
                        }
                    }
code_r0x000193932228:
                    uVar5 = **reloc.__stderrp;
                    uStack_1b8 = 0x1df4;
                }
            }
        }
        else {
            uVar5 = **reloc.__stderrp;
            uStack_1b8 = 0x1dd4;
        }
    }
    goto code_r0x0001939316f0;
code_r0x000193932144:
    if (uVar33 < 2) {
        piVar14 = piVar36 + 0xffffU & piVar7;
    }
    else {
        piVar14 = piVar7;
        if (piVar36 < piVar7 || piVar36 == piVar7) {
            uVar22 = 0;
            if (piVar36 != NULL) {
                uVar22 = piVar7 / piVar36;
            }
            piVar14 = piVar7 - uVar22 * piVar36;
        }
    }
    ppiVar21 = *(*piVar8 + piVar14 * 8);
    piVar34 = param_7;
    if ((ppiVar21 != NULL) && (ppiVar21 = *ppiVar21,  ppiVar21 != NULL)) {
        uVar22 = *(iVar32 + 0x2a);
        if (1 < uVar33) {
            do {
                piVar24 = ppiVar21[1];
                if (piVar24 != piVar7) {
                    if (piVar36 <= piVar24) {
                        uVar12 = 0;
                        if (piVar36 != NULL) {
                            uVar12 = piVar24 / piVar36;
                        }
                        piVar24 = piVar24 - uVar12 * piVar36;
                    }
                    if (piVar24 != piVar14) goto code_r0x0001939323e0;
                }
                else if (*(ppiVar21 + 2) == iVar4) goto code_r0x0001939321bc;
                ppiVar21 = *ppiVar21;
                if (ppiVar21 == NULL) goto code_r0x0001939323e0;
            } while( true );
        }
        do {
            if (ppiVar21[1] != piVar7) {
                if ((ppiVar21[1] & piVar36 + -1) != piVar14) break;
            }
            else if (*(ppiVar21 + 2) == iVar4) goto code_r0x0001939321bc;
            ppiVar21 = *ppiVar21;
            if (ppiVar21 == NULL) break;
        } while( true );
    }
code_r0x0001939323e0:
    std::__1::__throw_out_of_range[abi:v160006](char const*)(0xb1a + 0x193b8a000);
code_r0x0001939323ec:
    std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::__throw_length_error[abi:v160006]() const
              (piVar8 + 3);
    ___clang_call_terminate();
    auVar57 = ___clang_call_terminate();
    iVar16 = auVar57._0_8_;
    pcStack_1c8 = 
    geo::codec::_decodeMaterialModifiers(VMP4Chapter*, std::__1::shared_ptr<geo::codec::VectorTile> const&);
    uStack_218 = 0;
    piStack_210 = piVar7;
    iStack_208 = param_1;
    uStack_200 = uVar2;
    piStack_1f8 = piVar34;
    uStack_1f0 = uVar30;
    puStack_1e8 = param_5;
    piStack_1e0 = param_6;
    iStack_1d8 = iVar32;
    puStack_1d0 = &stack0xfffffffffffffff0;
    iVar4 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(iVar16, &uStack_218 + 4);
    if (iVar4 == 0) goto code_r0x000193932458;
    if (uStack_218._4_4_ == 0) {
        uVar33 = 0;
        goto code_r0x0001939324a0;
    }
    uVar22 = *(iVar16 + 0x30) + 1;
    if (*(iVar16 + 0x38) <= uVar22 && uVar22 != *(iVar16 + 0x38)) goto code_r0x000193932458;
    uVar33 = *(*(iVar16 + 0x28) + *(iVar16 + 0x30));
    *(iVar16 + 0x30) = uVar22;
    iVar4 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(iVar16, &uStack_218);
    if (iVar4 == 0) goto code_r0x000193932458;
    iVar4 = uStack_218;
    if (iVar4 == 0) goto code_r0x0001939324a0;
    uVar12 = *(iVar16 + 0x38);
    uVar22 = *(iVar16 + 0x30) + 1;
    goto code_r0x000193932584;
code_r0x0001939321bc:
    if ((ppiVar21[4] - ppiVar21[3] >> 3) * (0xcccccccccccc0000 | 0xcccd) - uVar22 != 0) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1df5;
        goto code_r0x0001939316f0;
    }
code_r0x000193931b5c:
    piStack_198 = param_4;
    puStack_190 = param_5;
    if (uVar22 == 0) {
code_r0x000193932070:
        *param_7 = (*(param_1 + 0x30) - uVar30) + *param_7;
        param_4 = piStack_198;
        param_5 = puStack_190;
        piVar7 = piVar7 + 1;
        iVar16 = 1;
        if (*param_5 <= piVar7) {
            return 1;
        }
        goto code_r0x0001939318d4;
    }
    uVar22 = 0;
code_r0x000193931ccc:
    if ((uVar2 >> 3 & 1) == 0) {
        piVar36 = piVar8[1];
        piVar34 = param_7;
        if (piVar36 != NULL) {
            uVar5 = NEON_cnt(piVar36, 1);
            uVar37 = NEON_uaddlv(uVar5, 1);
            uVar33 = CONCAT62(uVar5 >> 0x10, uVar37) & 0xffffffff;
            if (uVar33 < 2) {
                piVar14 = piVar36 + 0xffffU & piVar7;
            }
            else {
                piVar14 = piVar7;
                if (piVar36 < piVar7 || piVar36 == piVar7) {
                    uVar12 = 0;
                    if (piVar36 != NULL) {
                        uVar12 = piVar7 / piVar36;
                    }
                    piVar14 = piVar7 - uVar12 * piVar36;
                }
            }
            ppiVar21 = *(*piVar8 + piVar14 * 8);
            if ((ppiVar21 != NULL) && (ppiVar21 = *ppiVar21,  ppiVar21 != NULL)) {
                if (1 < uVar33) {
                    do {
                        piVar24 = ppiVar21[1];
                        if (piVar24 != piVar7) {
                            if (piVar36 <= piVar24) {
                                uVar12 = 0;
                                if (piVar36 != NULL) {
                                    uVar12 = piVar24 / piVar36;
                                }
                                piVar24 = piVar24 - uVar12 * piVar36;
                            }
                            if (piVar24 != piVar14) goto code_r0x0001939323e0;
                        }
                        else if (*(ppiVar21 + 2) == iVar4) goto code_r0x000193931b6c;
                        ppiVar21 = *ppiVar21;
                        if (ppiVar21 == NULL) goto code_r0x0001939323e0;
                    } while( true );
                }
                do {
                    if (ppiVar21[1] != piVar7) {
                        if ((ppiVar21[1] & piVar36 + -1) != piVar14) break;
                    }
                    else if (*(ppiVar21 + 2) == iVar4) goto code_r0x000193931b6c;
                    ppiVar21 = *ppiVar21;
                    if (ppiVar21 == NULL) break;
                } while( true );
            }
        }
        goto code_r0x0001939323e0;
    }
    iVar16 = *(param_1 + 0x30);
    uVar26 = *(param_1 + 0x38);
    uVar12 = iVar16 + 4;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1dff;
        goto code_r0x0001939316f0;
    }
    puVar9 = *(param_1 + 0x28) + iVar16;
    uVar55 = *puVar9;
    *(param_1 + 0x30) = uVar12;
    uVar12 = iVar16 + 8;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1e00;
        goto code_r0x0001939316f0;
    }
    uVar49 = puVar9[1];
    *(param_1 + 0x30) = uVar12;
    uVar12 = iVar16 + 0xc;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1e01;
        goto code_r0x0001939316f0;
    }
    uVar50 = puVar9[2];
    *(param_1 + 0x30) = uVar12;
    uVar12 = iVar16 + 0x10;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1e03;
        goto code_r0x0001939316f0;
    }
    iVar56 = puVar9[3];
    *(param_1 + 0x30) = uVar12;
    uVar12 = iVar16 + 0x14;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1e04;
        goto code_r0x0001939316f0;
    }
    uVar52 = puVar9[4];
    *(param_1 + 0x30) = uVar12;
    uVar12 = iVar16 + 0x18;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1e05;
        goto code_r0x0001939316f0;
    }
    uVar53 = puVar9[5];
    *(param_1 + 0x30) = uVar12;
    uVar12 = iVar16 + 0x1c;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1e07;
        goto code_r0x0001939316f0;
    }
    fVar54 = puVar9[6];
    *(param_1 + 0x30) = uVar12;
    uVar12 = iVar16 + 0x20;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1e08;
        goto code_r0x0001939316f0;
    }
    fVar51 = puVar9[7];
    *(param_1 + 0x30) = uVar12;
    uVar12 = iVar16 + 0x24;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1e09;
        goto code_r0x0001939316f0;
    }
    fVar47 = puVar9[8];
    *(param_1 + 0x30) = uVar12;
    uVar12 = iVar16 + 0x28;
    if (uVar26 <= uVar12 && uVar12 != uVar26) {
        uVar5 = **reloc.__stderrp;
        uStack_1b8 = 0x1e0a;
        goto code_r0x0001939316f0;
    }
    fVar48 = puVar9[9];
    *(param_1 + 0x30) = uVar12;
    if (0x13 < *(param_1 + 0x40)) {
        uVar12 = iVar16 + 0x2a;
        if (uVar26 <= uVar12 && uVar12 != uVar26) {
            uVar5 = **reloc.__stderrp;
            uStack_1b8 = 0x1e0e;
            goto code_r0x0001939316f0;
        }
        uVar3 = *(puVar9 + 10);
        param_5 = uVar3;
        *(param_1 + 0x30) = uVar12;
        if (uVar3 == 0) goto code_r0x000193931b8c;
        piStack_e8 = aiStack_128;
        iStack_1a0 = iVar56;
        uStack_19c = uVar55;
        aiStack_128[0] = iVar4;
        piVar8 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> > >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> > >, std::__1::equal_to<unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> > > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&)
                           (uStack_188, aiStack_128, 0x96c + 0x193af9000, &piStack_e8, &uStack_168);
        puVar13 = piVar8[4];
        if (puVar13 < piVar8[5]) {
            if (puVar13 != NULL) {
                *puVar13 = uVar3;
            }
            piVar8[4] = puVar13 + 1;
            piVar8 = piStack_180;
            uVar55 = uStack_19c;
            iVar56 = iStack_1a0;
        }
        else {
            piVar34 = puVar13 - piVar8[3] >> 2;
            uVar12 = piVar34 + 1;
            piStack_1a8 = param_7;
            if (uVar12 >> 0x3e != 0) goto code_r0x0001939323ec;
            uVar31 = piVar8[5] - piVar8[3];
            uVar26 = uVar31 >> 1;
            if (uVar26 < uVar12 || uVar26 == uVar12) {
                uVar26 = uVar12;
            }
            if (0x7ffffffffffffffb < uVar31) {
                uVar26 = 0x3fffffffffffffff;
            }
            if (uVar26 == 0) {
                puVar13 = piVar34 << 2;
            }
            else {
                iStack_1b0 = uVar26 << 2;
                iVar16 = (**(*piVar8[6] + 0x10))(piVar8[6], iStack_1b0, 4);
                puVar13 = iVar16 + piVar34 * 4;
                uVar26 = iVar16 + iStack_1b0;
                if (iVar16 != 0) {
                    *puVar13 = uVar3;
                }
            }
            param_7 = piStack_1a8;
            puVar11 = piVar8[3];
            puVar25 = piVar8[4];
            puVar20 = puVar13;
            if (puVar25 - puVar11 != 0) {
                uVar12 = (puVar25 - puVar11) + -4;
                if (uVar12 < 0x3c) {
                }
                else if (0x3f < puVar25 - puVar13) {
                    uVar12 = (uVar12 >> 2) + 1;
                    uVar27 = uVar12 & 0x7ffffffffffffff0;
                    puVar20 = puVar13 + -uVar27;
                    puVar15 = puVar25 + -0x20;
                    puVar18 = puVar13 + -0x20;
                    uVar31 = uVar27;
                    do {
                        uVar40 = *puVar15;
                        uVar39 = puVar15[3];
                        uVar5 = puVar15[2];
                        uVar45 = puVar15[-3];
                        uVar44 = puVar15[-4];
                        uVar43 = puVar15[-1];
                        uVar42 = puVar15[-2];
                        puVar18[1] = puVar15[1];
                        *puVar18 = uVar40;
                        puVar18[3] = uVar39;
                        puVar18[2] = uVar5;
                        puVar18[-3] = uVar45;
                        puVar18[-4] = uVar44;
                        puVar18[-1] = uVar43;
                        puVar18[-2] = uVar42;
                        puVar15 = puVar15 + -0x40;
                        puVar18 = puVar18 + -0x40;
                        uVar31 = uVar31 + -0x10;
                    } while (uVar31 != 0);
                    puVar25 = puVar25 + -uVar27;
                    if (uVar12 == uVar27) goto code_r0x000193932024;
                }
                do {
                    puVar25 = puVar25 + -1;
                    puVar20 = puVar20 + -1;
                    *puVar20 = *puVar25;
                } while (puVar25 != puVar11);
            }
code_r0x000193932024:
            piVar8[3] = puVar20;
            piVar8[4] = puVar13 + 1;
            iVar16 = piVar8[5];
            piVar8[5] = uVar26;
            if (puVar11 != NULL) {
                (**(*piVar8[6] + 0x28))(piVar8[6], puVar11, iVar16 - puVar11);
            }
            piVar8 = piStack_180;
            uVar55 = uStack_19c;
            iVar56 = iStack_1a0;
        }
    }
code_r0x000193931b8c:
    *(*(iVar32 + 8) + uVar22) = 0;
    fVar38 = fVar51 + fVar51;
    fStack_d4 = (fVar47 + fVar47) * fVar47;
    fVar46 = fVar54 + fVar54;
    fVar41 = (fVar47 + fVar47) * fVar48;
    fStack_d8 = fVar46 * fVar51 - fVar41;
    piStack_e8 = CONCAT44(fVar41 + fVar46 * fVar51, 1.0 - (fVar38 * fVar51 + fStack_d4));
    fStack_c0 = NEON_fmsub(fVar46, fVar54, 0x3f800000);
    fStack_d4 = fStack_c0 - fStack_d4;
    fStack_c8 = fVar47 * fVar46 + fVar48 * fVar38;
    fStack_c4 = fVar47 * fVar38 - fVar48 * fVar46;
    fStack_e0 = fVar47 * fVar46 - fVar48 * fVar38;
    fStack_d0 = fVar47 * fVar38 + fVar48 * fVar46;
    fStack_c0 = fStack_c0 - fVar38 * fVar51;
    uStack_dc = 0;
    uStack_cc = 0;
    param_5 = *piStack_170 + uVar22 * 0x30;
    uStack_bc = 0;
    uStack_ac = 0x3f800000;
    puStack_178[6] = 0;
    puStack_178[3] = 0;
    puStack_178[2] = 0;
    puStack_178[5] = 0;
    puStack_178[4] = 0;
    puStack_178[1] = 0;
    *puStack_178 = 0;
    uStack_ec = 0x3f800000;
    aiStack_128[0] = iVar56;
    uStack_114 = uVar52;
    uStack_100 = uVar53;
    uStack_b8 = uVar55;
    uStack_b4 = uVar49;
    uStack_b0 = uVar50;
    gm::Matrix<float, 4, 4> gm::operator*<float, 4, 4, 4>(gm::Matrix<float, 4, 4> const&, gm::Matrix<float, 4, 4> const&)
              (&piStack_e8, aiStack_128);
    *param_5 = uStack_168;
    param_5[1] = uStack_158;
    param_5[2] = uStack_148;
    param_5[3] = uStack_138;
    param_5[4] = uStack_164;
    param_5[5] = uStack_154;
    param_5[6] = uStack_144;
    param_5[7] = uStack_134;
    param_5[8] = uStack_160;
    param_5[9] = uStack_150;
    param_5[10] = uStack_140;
    param_5[0xb] = uStack_130;
    uVar22 = uVar22 + 1;
    if (*(iVar32 + 0x2a) <= uVar22) goto code_r0x000193932070;
    goto code_r0x000193931ccc;
code_r0x000193931b6c:
    piVar36 = ppiVar21[3] + uVar22 * 5;
    fVar51 = *(piVar36 + 2);
    fVar47 = *(piVar36 + 0x14);
    uVar49 = *(piVar36 + 4);
    uVar50 = *(piVar36 + 1);
    fVar54 = *(piVar36 + 0xc);
    fVar48 = *(piVar36 + 3);
    uVar52 = *(piVar36 + 4);
    uVar53 = *(piVar36 + 0x24);
    uVar55 = *piVar36;
    iVar56 = *(piVar36 + 0x1c);
    goto code_r0x000193931b8c;
    while( true ) {
        *(iVar16 + 0x30) = uVar22;
        uVar30 = uVar22 + 1;
        if (uVar12 <= uVar30 && uVar30 != uVar12) goto code_r0x000193932458;
        *(iVar16 + 0x30) = uVar30;
        uVar22 = uVar22 + 2;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) break;
code_r0x000193932584:
        if (uVar12 <= uVar22 && uVar22 != uVar12) goto code_r0x000193932458;
    }
code_r0x0001939324a0:
    iVar17 = *auVar57._8_8_;
    uVar22 = uStack_218._4_4_;
    puVar15 = *(iVar17 + 0x840);
    iVar23 = *(iVar17 + 0x838);
    uVar12 = puVar15 - iVar23 >> 4;
    if (uVar22 <= uVar12) {
        if (uVar22 > uVar12 || uVar12 == uVar22) goto code_r0x00019393266c;
        *(iVar17 + 0x840) = iVar23 + uVar22 * 0x10;
        if (uVar22 == 0) goto code_r0x000193932840;
code_r0x000193932670:
        if ((uVar33 < 9) && ((1 << (uVar33 & 0x1f) & 0x116) != 0)) {
            iVar23 = 0;
            uVar12 = 0;
            uVar5 = 1;
            do {
                iVar17 = *(*auVar57._8_8_ + 0x838);
                if (uVar33 == 4) {
                    uVar26 = *(iVar16 + 0x38);
                    uVar30 = *(iVar16 + 0x30) + 4;
                    if (uVar26 <= uVar30 && uVar30 != uVar26) goto code_r0x000193932458;
                    iVar32 = *(iVar16 + 0x28);
                    uVar29 = *(iVar32 + *(iVar16 + 0x30));
                    uVar31 = uVar29;
                    *(iVar16 + 0x30) = uVar30;
                    *(iVar17 + iVar23) = uVar31;
                    if ((uVar29 & 1) != 0) goto code_r0x00019393276c;
                }
                else if (uVar33 == 2) {
                    uVar26 = *(iVar16 + 0x38);
                    uVar30 = *(iVar16 + 0x30) + 2;
                    if (uVar26 <= uVar30 && uVar30 != uVar26) goto code_r0x000193932458;
                    iVar32 = *(iVar16 + 0x28);
                    uVar3 = *(iVar32 + *(iVar16 + 0x30));
                    uVar31 = uVar3;
                    *(iVar16 + 0x30) = uVar30;
                    *(iVar17 + iVar23) = uVar31;
                    if ((uVar3 & 1) != 0) goto code_r0x00019393276c;
                }
                else if (uVar33 != 1) {
                    uVar26 = *(iVar16 + 0x38);
                    uVar30 = *(iVar16 + 0x30) + 8;
                    if (uVar26 <= uVar30 && uVar30 != uVar26) goto code_r0x000193932458;
                    iVar32 = *(iVar16 + 0x28);
                    uVar31 = *(iVar32 + *(iVar16 + 0x30));
                    *(iVar16 + 0x30) = uVar30;
                    *(iVar17 + iVar23) = uVar31;
                    if ((uVar31 & 1) != 0) goto code_r0x00019393276c;
                }
                else {
                    uVar26 = *(iVar16 + 0x38);
                    uVar30 = *(iVar16 + 0x30) + 1;
                    if (uVar26 <= uVar30 && uVar30 != uVar26) goto code_r0x000193932458;
                    iVar32 = *(iVar16 + 0x28);
                    uVar2 = *(iVar32 + *(iVar16 + 0x30));
                    uVar31 = uVar2;
                    *(iVar16 + 0x30) = uVar30;
                    *(iVar17 + iVar23) = uVar31;
                    if ((uVar2 & 1) != 0) {
code_r0x00019393276c:
                        *(iVar17 + iVar23 + 0xc) = 1;
                    }
                }
                uVar29 = uVar31;
                if ((uVar29 >> 2 & 1) == 0) {
                    if ((uVar29 >> 1 & 1) != 0) {
code_r0x00019393278c:
                        if (uVar26 <= uVar30 + 1 && uVar30 + 1 != uVar26) goto code_r0x000193932458;
                        *(iVar17 + iVar23 + 8) = *(iVar32 + uVar30);
                        iVar32 = *(iVar16 + 0x30);
                        *(iVar16 + 0x30) = iVar32 + 1;
                        if (*(iVar16 + 0x38) <= iVar32 + 2U && iVar32 + 2U != *(iVar16 + 0x38))
                        goto code_r0x000193932458;
                        *(iVar17 + iVar23 + 9) = *(*(iVar16 + 0x28) + iVar32 + 1);
                        iVar32 = *(iVar16 + 0x30);
                        *(iVar16 + 0x30) = iVar32 + 1;
                        if (*(iVar16 + 0x38) <= iVar32 + 2U && iVar32 + 2U != *(iVar16 + 0x38))
                        goto code_r0x000193932458;
                        *(iVar17 + iVar23 + 10) = *(*(iVar16 + 0x28) + iVar32 + 1);
                        iVar32 = *(iVar16 + 0x30);
                        *(iVar16 + 0x30) = iVar32 + 1;
                        if (*(iVar16 + 0x38) <= iVar32 + 2U && iVar32 + 2U != *(iVar16 + 0x38))
                        goto code_r0x000193932458;
                        *(iVar17 + iVar23 + 0xb) = *(*(iVar16 + 0x28) + iVar32 + 1);
                        *(iVar16 + 0x30) = *(iVar16 + 0x30) + 1;
                        uVar22 = uStack_218._4_4_;
                    }
                }
                else {
                    *(iVar17 + iVar23 + 0xd) = 1;
                    if ((uVar29 >> 1 & 1) != 0) goto code_r0x00019393278c;
                }
                uVar12 = uVar12 + 1;
                iVar23 = iVar23 + 0x10;
            } while (uVar12 < uVar22);
        }
        else {
code_r0x000193932458:
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            uVar5 = 0;
        }
    }
    else {
        uVar26 = uVar22 - uVar12;
        uVar30 = *(iVar17 + 0x848) - puVar15 >> 4;
        if (uVar26 < uVar30 || uVar26 == uVar30) {
            puVar18 = puVar15 + uVar26 * 2;
            iVar23 = uVar22 * 0x10 + uVar12 * -0x10;
            do {
                if (puVar15 != NULL) {
                    *puVar15 = 0;
                    puVar15[1] = 0;
                }
                puVar15 = puVar15 + 2;
                iVar23 = iVar23 + -0x10;
            } while (iVar23 != 0);
            *(iVar17 + 0x840) = puVar18;
            uVar22 = uStack_218._4_4_;
            if (uVar22 != 0) goto code_r0x000193932670;
        }
        else {
            uVar26 = *(iVar17 + 0x848) - iVar23;
            uVar30 = uVar26 >> 3;
            if (uVar30 < uVar22 || uVar30 == uVar22) {
                uVar30 = uVar22;
            }
            if (0x7fffffffffffffef < uVar26) {
                uVar30 = 0xfffffffffffffff;
            }
            iVar32 = (**(**(iVar17 + 0x850) + 0x10))(*(iVar17 + 0x850), uVar30 << 4, 8);
            puVar15 = iVar32 + uVar12 * 0x10;
            iVar23 = uVar22 * 0x10 + uVar12 * -0x10;
            puVar18 = puVar15;
            do {
                if (puVar18 != NULL) {
                    *puVar18 = 0;
                    puVar18[1] = 0;
                }
                puVar18 = puVar18 + 2;
                iVar23 = iVar23 + -0x10;
            } while (iVar23 != 0);
            iVar23 = *(iVar17 + 0x840);
            iVar35 = *(iVar17 + 0x838);
            if (iVar23 != iVar35) {
                do {
                    uVar5 = *(iVar23 + -0x10);
                    puVar15[-1] = *(iVar23 + -8);
                    puVar15[-2] = uVar5;
                    puVar15 = puVar15 + -0x10;
                    iVar23 = iVar23 + -0x10;
                } while (iVar23 != iVar35);
                iVar23 = *(iVar17 + 0x838);
            }
            *(iVar17 + 0x838) = puVar15;
            *(iVar17 + 0x840) = iVar32 + uVar22 * 0x10;
            iVar35 = *(iVar17 + 0x848);
            *(iVar17 + 0x848) = iVar32 + uVar30 * 0x10;
            if (iVar23 != 0) {
                (**(**(iVar17 + 0x850) + 0x28))(*(iVar17 + 0x850), iVar23, iVar35 - iVar23);
            }
            uVar22 = uStack_218._4_4_;
code_r0x00019393266c:
            if (uVar22 != 0) goto code_r0x000193932670;
        }
code_r0x000193932840:
        uVar5 = 1;
    }
    return uVar5;
}
