
uint32_t geo::codec::_readRoadNetwork(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, ulong param_2, int64_t *param_3)

{
    int64_t *piVar1;
    char *pcVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    char cVar7;
    uint8_t uVar8;
    uchar uVar9;
    uint8_t uVar10;
    bool bVar11;
    int32_t iVar12;
    int32_t iVar13;
    int32_t iVar14;
    uint32_t uVar15;
    ulong uVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    int64_t iVar19;
    uint64_t uVar20;
    uchar uVar21;
    uint uVar22;
    uint64_t uVar23;
    int64_t iVar24;
    uint64_t uVar25;
    int64_t iVar26;
    int32_t *piVar27;
    ulong *puVar28;
    int64_t iVar29;
    uint8_t *puVar30;
    int64_t iVar31;
    float *pfVar32;
    uint *puVar33;
    uchar (*pauVar34) [16];
    uint32_t uVar35;
    uint64_t uVar36;
    uint64_t uVar37;
    int64_t iVar38;
    ulong *puVar39;
    int64_t iVar40;
    int64_t *piVar41;
    ulong **ppuVar42;
    uint64_t uVar43;
    float8 fVar44;
    uchar auVar45 [16];
    uchar auVar46 [16];
    uchar auVar47 [16];
    uchar auVar48 [16];
    uchar auVar49 [16];
    uchar auVar50 [16];
    uchar auVar51 [16];
    uchar auVar52 [16];
    uchar auVar53 [16];
    uchar auVar54 [16];
    uchar auVar55 [16];
    uchar auVar56 [16];
    int64_t iStack_148;
    char *pcStack_120;
    ulong *apuStack_118 [4];
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    uint32_t auStack_d0 [3];
    char cStack_c1;
    uint32_t uStack_c0;
    char cStack_b9;
    uint32_t uStack_b8;
    uint uStack_b4;
    uint uStack_ae;
    uint uStack_aa;
    uint8_t auStack_a6 [2];
    uint32_t uStack_a4;
    ulong uStack_a0;
    int64_t *piStack_98;
    int64_t *piStack_90;
    ulong *puStack_88;
    int64_t iStack_80;
    int64_t *piStack_78;
    int64_t iStack_70;
    
    uVar23 = param_1[1];
    if (uVar23 == 0) {
code_r0x000193910524:
        uVar15 = 1;
code_r0x000193910528:
        return uVar15 & 1;
    }
    uVar20 = 0;
    while (*(*param_1 + uVar20 * 0x10) != 0x87) {
        uVar20 = uVar20 + 1;
        if (uVar23 < uVar20 || uVar23 == uVar20) goto code_r0x000193910524;
    }
    pcStack_120 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                            (param_1, uVar20, 0x87, *param_3 + 0x778);
    if (pcStack_120 == NULL) goto code_r0x000193910524;
    puStack_88 = 0x31b + 0x193b8a000;
    iStack_80 = *param_3;
    piStack_78 = param_3[1];
    if (piStack_78 != NULL) {
        tmp_ldXn = piStack_78[1];
        iVar24 = tmp_ldXn;
        tmp_stXn = iVar24 + 1;
        iVar24 = tmp_stXn;
        piStack_78[1] = iVar24;
        uVar16 = tmp_ldXn;
    }
    iStack_70 = std::__1::chrono::steady_clock::now()();
    piStack_98 = NULL;
    piStack_90 = NULL;
    uStack_a0 = 0;
    uStack_a4 = 0;
    auStack_a6[1] = 0;
    auStack_a6[0] = 1;
    uStack_aa = 0;
    uStack_ae = 0;
    iVar24 = *param_3;
    uVar23 = fcn.1938e6038(param_1, 0x33, iVar24 + 0x4b0, iVar24 + 0x4b8, iVar24 + 0x4d0, iVar24 + 0x4d8, iVar24 + 0x778
                          );
    if ((uVar23 & 1) == 0) {
        uVar16 = **reloc.__stderrp;
        goto code_r0x000193910570;
    }
    uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcStack_120, *0x8 + -0x9c);
    if ((uVar23 & 1) == 0) {
        uVar16 = **reloc.__stderrp;
        goto code_r0x000193910570;
    }
    uVar23 = *(pcStack_120 + 0x30);
    if (*(pcStack_120 + 0x38) < uVar23) {
        uVar16 = **reloc.__stderrp;
        goto code_r0x000193910570;
    }
    piVar17 = pcStack_120 + 8;
    *piVar17 = *(pcStack_120 + 0x28) + uVar23;
    pcStack_120[0x20] = '\x01';
    *(pcStack_120 + 0x10) = *(pcStack_120 + 0x38) - uVar23;
    *(pcStack_120 + 0x18) = 0;
    iVar40 = *param_3;
    iVar24 = *(iVar40 + 0x20);
    uVar23 = uStack_a0._4_4_;
    iVar38 = *(iVar40 + 0x28);
    uVar20 = iVar38 - iVar24 >> 8;
    if (uVar23 <= uVar20) {
        if (uVar23 <= uVar20 && uVar20 != uVar23) {
            iVar24 = iVar24 + uVar23 * 0x100;
            if (iVar38 != iVar24) {
                do {
                    piVar41 = *(iVar38 + -0x90);
                    if (piVar41 != NULL) {
                        LOAcquire();
                        tmp_ldXn = piVar41[1];
                        iVar29 = tmp_ldXn;
                        tmp_stXn = iVar29 + -1;
                        iVar29 = tmp_stXn;
                        piVar41[1] = iVar29;
                        iVar29 = tmp_ldXn;
                        LORelease();
                        if (iVar29 == 0) {
                            (**(*piVar41 + 0x10))(piVar41);
                            std::__1::__shared_weak_count::__release_weak()(piVar41);
                        }
                    }
                    iVar29 = iVar38 + -0x100;
                    if (*(iVar38 + -0xf8) != 0) {
                        std::__1::__shared_weak_count::__release_weak()();
                    }
                    iVar38 = iVar29;
                } while (iVar29 != iVar24);
            }
            *(iVar40 + 0x28) = iVar24;
        }
    }
    else {
        std::__1::vector<GeoCodecsMultiSectionFeature, geo::StdAllocator<GeoCodecsMultiSectionFeature, geo::codec::Allocator> >::__append(unsigned long)
                  (iVar40 + 0x20, uVar23 - uVar20);
    }
    piVar18 = operator new(unsigned long)(0x40);
    piVar18[1] = 0;
    piVar18[2] = 0;
    *piVar18 = 0xc00 + 0x1db961000 + 0x10;
    puVar39 = malloc(0x100);
    piVar41 = piStack_90;
    piStack_98 = piVar18 + 3;
    *piStack_98 = puVar39;
    piVar18[5] = 0;
    piVar18[6] = 0;
    piVar18[4] = 0;
    *(piVar18 + 0x37) = 0;
    if (puVar39 != NULL) {
        puVar39[0x1d] = 0xffffffffffffffff;
        puVar39[0x1c] = 0xffffffffffffffff;
        puVar39[0x1f] = 0xffffffffffffffff;
        puVar39[0x1e] = 0xffffffffffffffff;
        puVar39[0x19] = 0xffffffffffffffff;
        puVar39[0x18] = 0xffffffffffffffff;
        puVar39[0x1b] = 0xffffffffffffffff;
        puVar39[0x1a] = 0xffffffffffffffff;
        puVar39[0x15] = 0xffffffffffffffff;
        puVar39[0x14] = 0xffffffffffffffff;
        puVar39[0x17] = 0xffffffffffffffff;
        puVar39[0x16] = 0xffffffffffffffff;
        puVar39[0x11] = 0xffffffffffffffff;
        puVar39[0x10] = 0xffffffffffffffff;
        puVar39[0x13] = 0xffffffffffffffff;
        puVar39[0x12] = 0xffffffffffffffff;
        puVar39[0xd] = 0xffffffffffffffff;
        puVar39[0xc] = 0xffffffffffffffff;
        puVar39[0xf] = 0xffffffffffffffff;
        puVar39[0xe] = 0xffffffffffffffff;
        puVar39[9] = 0xffffffffffffffff;
        puVar39[8] = 0xffffffffffffffff;
        puVar39[0xb] = 0xffffffffffffffff;
        puVar39[10] = 0xffffffffffffffff;
        puVar39[5] = 0xffffffffffffffff;
        puVar39[4] = 0xffffffffffffffff;
        puVar39[7] = 0xffffffffffffffff;
        puVar39[6] = 0xffffffffffffffff;
        puVar39[1] = 0xffffffffffffffff;
        *puVar39 = 0xffffffffffffffff;
        puVar39[3] = 0xffffffffffffffff;
        puVar39[2] = 0xffffffffffffffff;
    }
    *puVar39 = *0x193af9838;
    *(piVar18 + 0x39) = 0x101;
    piStack_90 = piVar18;
    if (piVar41 != NULL) {
        LOAcquire();
        tmp_ldXn = piVar41[1];
        iVar24 = tmp_ldXn;
        tmp_stXn = iVar24 + -1;
        iVar24 = tmp_stXn;
        piVar41[1] = iVar24;
        iVar24 = tmp_ldXn;
        LORelease();
        if (iVar24 == 0) {
            (**(*piVar41 + 0x10))(piVar41);
            std::__1::__shared_weak_count::__release_weak()(piVar41);
        }
    }
    FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
              (*param_3 + 0x458, *0x8 + -0x98);
    uVar23 = *(pcStack_120 + 0x18);
    if (uVar23 + 5 < *(pcStack_120 + 0x10) * 8 || uVar23 + 5 == *(pcStack_120 + 0x10) * 8) {
        uVar15 = 0;
        iVar24 = *piVar17;
        uVar20 = 5;
        do {
            uVar37 = 8 - (uVar23 & 7);
            uVar25 = uVar20;
            if (uVar37 <= uVar20) {
                uVar25 = uVar37;
            }
            uVar35 = uVar25;
            uVar15 = *(iVar24 + (uVar23 >> 3)) >> ((8 - (uVar23 & 7)) - uVar35 & 0x1f) &
                     (-1 << (uVar35 & 0x1f) ^ 0xffffffff) | uVar15 << (uVar35 & 0x1f);
            uVar23 = uVar25 + uVar23;
            *(pcStack_120 + 0x18) = uVar23;
            uVar20 = uVar20 - uVar25;
        } while (uVar20 != 0);
        if (uStack_a0._4_4_ == 0) {
            iVar13 = 0;
        }
        else {
            iVar13 = 0;
            iVar24 = 0;
            uVar23 = 0;
            uVar15 = uVar15 + 1;
            do {
                uVar25 = *(pcStack_120 + 0x18);
                uVar20 = uVar25 + uVar15;
                if (*(pcStack_120 + 0x10) * 8 <= uVar20 && uVar20 != *(pcStack_120 + 0x10) * 8) {
                    uVar16 = **reloc.__stderrp;
                    goto code_r0x000193910570;
                }
                uVar20 = 0;
                if (uVar15 != 0) {
                    iVar38 = *piVar17;
                    uVar37 = uVar15;
                    do {
                        uVar36 = 8 - (uVar25 & 7);
                        uVar43 = uVar37;
                        if (uVar36 <= uVar37) {
                            uVar43 = uVar36;
                        }
                        uVar35 = uVar43;
                        uVar20 = *(iVar38 + (uVar25 >> 3)) >> ((8 - (uVar25 & 7)) - uVar35 & 0x1f) &
                                 (-1 << (uVar35 & 0x1f) ^ 0xffffffff) | uVar20 << (uVar35 & 0x1f);
                        uVar25 = uVar43 + uVar25;
                        *(pcStack_120 + 0x18) = uVar25;
                        uVar37 = uVar37 - uVar43;
                    } while (uVar37 != 0);
                }
                iVar40 = *param_3;
                iVar38 = *(iVar40 + 0x20);
                piVar41 = iVar38 + uVar23 * 0x100;
                *(piVar41 + 0xf) = 1;
                iVar29 = param_3[1];
                if (iVar29 != 0) {
                    tmp_ldXn = *(iVar29 + 0x10);
                    iVar19 = tmp_ldXn;
                    tmp_stXn = iVar19 + 1;
                    uVar16 = tmp_stXn;
                    *(iVar29 + 0x10) = uVar16;
                    uVar16 = tmp_ldXn;
                }
                iVar19 = piVar41[1];
                *piVar41 = iVar40;
                piVar41[1] = iVar29;
                if (iVar19 != 0) {
                    std::__1::__shared_weak_count::__release_weak()();
                }
                if (piStack_90 != NULL) {
                    tmp_ldXn = piStack_90[1];
                    iVar40 = tmp_ldXn;
                    tmp_stXn = iVar40 + 1;
                    iVar40 = tmp_stXn;
                    piStack_90[1] = iVar40;
                    uVar16 = tmp_ldXn;
                }
                piVar18 = piVar41[0xe];
                piVar41[0xd] = piStack_98;
                piVar41[0xe] = piStack_90;
                if (piVar18 != NULL) {
                    LOAcquire();
                    tmp_ldXn = piVar18[1];
                    iVar40 = tmp_ldXn;
                    tmp_stXn = iVar40 + -1;
                    iVar40 = tmp_stXn;
                    piVar18[1] = iVar40;
                    iVar40 = tmp_ldXn;
                    LORelease();
                    if (iVar40 == 0) {
                        (**(*piVar18 + 0x10))(piVar18);
                        std::__1::__shared_weak_count::__release_weak()(piVar18);
                    }
                }
                iVar38 = iVar38 + uVar23 * 0x100;
                *(iVar38 + 0x80) = iVar24;
                *(iVar38 + 0x88) = uVar20;
                iVar24 = iVar24 + uVar20;
                iVar13 = uVar20 + iVar13;
                uVar23 = uVar23 + 1;
            } while (uVar23 < uStack_a0._4_4_);
        }
        piVar41 = geo::codec::Allocator::instance()();
        iVar24 = (**(*piVar41 + 0x18))(piVar41, iVar13, 8);
        if (iVar24 == 0) {
            uVar16 = **reloc.__stderrp;
code_r0x000193910e74:
            fprintf(uVar16, 0x8ff + 0x193b8a000);
            goto code_r0x00019391058c;
        }
        uVar23 = geo::codec::decodeSectionEncoding(Bitstream*, GeoCodecsVertexPool**, bool, GeoCodecsTileKey const*, GeoCodecsVectorTileRawPoint*)
                           (piVar17, *param_3 + 0x318, 0, param_2, iVar24);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
            goto code_r0x000193910e74;
        }
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xa8);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
            goto code_r0x000193910e74;
        }
        cVar7 = uStack_aa._2_1_;
        if (cVar7 != '\0') {
            uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, *0x8 + -0xa0, 3);
            if ((uVar23 & 1) == 0) {
                uVar16 = **reloc.__stderrp;
                goto code_r0x000193910e74;
            }
            iVar13 = uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_, iVar13);
            uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, *0x8 + -0xa4, iVar13);
            if ((uVar23 & 1) == 0) {
                uVar16 = **reloc.__stderrp;
                goto code_r0x000193910e74;
            }
            uVar15 = uStack_a4 + 1;
            uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
            uStack_a4 = uVar15;
            uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, &uStack_f0, 4);
            if ((uVar23 & 1) != 0) {
                iVar14 = uStack_f0;
                piVar41 = geo::codec::Allocator::instance()();
                iVar38 = (**(*piVar41 + 0x10))(piVar41, uVar15 << -0x3e + 0x40 & 0x3fffffffc, 8);
                if (uVar15 == 0) {
code_r0x000193910cb0:
                    uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xa5);
                    if ((uVar23 & 1) == 0) {
                        uVar16 = **reloc.__stderrp;
                    }
                    else {
                        uVar8 = auStack_a6[1];
                        if ((uVar8 == 0) ||
                           (uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xa6),  (uVar23 & 1) != 0))
                        {
                            if (uStack_a0._4_4_ != 0) {
                                iVar40 = 0;
                                uVar23 = 0;
                                uVar9 = auStack_a6[0];
                                do {
                                    apuStack_118[0] = (apuStack_118[0] >> 0x20) << 0x20;
                                    uVar20 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                       (piVar17, apuStack_118, iVar13);
                                    if ((uVar20 & 1) == 0) {
                                        uVar16 = **reloc.__stderrp;
                                        goto code_r0x0001939110ac;
                                    }
                                    uVar15 = apuStack_118[0];
                                    uStack_f8 = CONCAT71(uStack_f8._1_7_, uVar9);
                                    uVar21 = uVar9;
                                    if ((uVar8 == 0) && (uVar21 = uVar9,  *(iVar38 + uVar15 * 4) != 0)) {
                                        iVar14 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, &uStack_f8);
                                        if (iVar14 == 0) {
                                            uVar16 = **reloc.__stderrp;
                                            goto code_r0x0001939110ac;
                                        }
                                        uVar21 = uStack_f8;
                                    }
                                    iVar29 = *(*param_3 + 0x20) + iVar40;
                                    *(iVar29 + 0xda) = uVar15;
                                    *(iVar29 + 0xdd) = uVar15;
                                    *(iVar29 + 0xdb) = uVar21;
                                    *(iVar29 + 0xde) = uVar21;
                                    uVar23 = uVar23 + 1;
                                    iVar40 = iVar40 + 0x100;
                                } while (uVar23 < uStack_a0._4_4_);
                            }
                            uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xa7);
                            if ((uVar23 & 1) == 0) goto code_r0x00019391109c;
                            goto code_r0x000193910d58;
                        }
                        uVar16 = **reloc.__stderrp;
                    }
                }
                else {
                    iVar40 = 0;
                    while( true ) {
                        apuStack_118[0] = (apuStack_118[0] >> 0x20) << 0x20;
                        iVar12 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                           (piVar17, apuStack_118, iVar14 + 1);
                        if (iVar12 == 0) break;
                        *(iVar38 + iVar40) = apuStack_118[0];
                        iVar40 = iVar40 + 4;
                        if (uVar15 * 4 - iVar40 == 0) goto code_r0x000193910cb0;
                    }
                    uVar16 = **reloc.__stderrp;
                }
                goto code_r0x0001939110ac;
            }
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            iVar38 = 0;
code_r0x0001939110c4:
            iVar40 = 0;
            goto code_r0x000193910598;
        }
        iVar38 = 0;
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xa7);
        if ((uVar23 & 1) == 0) {
code_r0x00019391109c:
            uVar16 = **reloc.__stderrp;
code_r0x0001939110ac:
            fprintf(uVar16, 0x8ff + 0x193b8a000);
            goto code_r0x0001939110c4;
        }
code_r0x000193910d58:
        piVar41 = piVar17;
        if (uStack_aa._3_1_ != '\0') {
            uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
            uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar41, &uStack_f0, 5);
            if ((uVar23 & 1) == 0) {
                uVar16 = **reloc.__stderrp;
                goto code_r0x0001939110ac;
            }
            if (uStack_a0._4_4_ != 0) {
                uVar23 = 0;
                iVar13 = uStack_f0;
                iVar40 = 0xe0;
                do {
                    apuStack_118[0] = (apuStack_118[0] >> 0x20) << 0x20;
                    iVar14 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                       (piVar41, apuStack_118, iVar13 + 1);
                    if (iVar14 == 0) {
                        uVar16 = **reloc.__stderrp;
                        goto code_r0x0001939110ac;
                    }
                    *(*(*param_3 + 0x20) + iVar40) = apuStack_118[0];
                    uVar23 = uVar23 + 1;
                    iVar40 = iVar40 + 0x100;
                } while (uVar23 < uStack_a0._4_4_);
            }
        }
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar41, *0x8 + -0xa9);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
            goto code_r0x0001939110ac;
        }
        if ((uStack_aa._1_1_ != '\0') && (uStack_a0._4_4_ != 0)) {
            uVar23 = 0;
            iVar40 = 0x98;
            do {
                uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
                iVar13 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar41, &uStack_f0, 2);
                if (iVar13 == 0) {
                    uVar16 = **reloc.__stderrp;
                    goto code_r0x0001939110ac;
                }
                if (uStack_f0 < 4) {
                    uVar22 = *(0xd30 + 0x193afa000 + uStack_f0 * 4);
                }
                else {
                    uVar22 = 0xff;
                }
                *(*(*param_3 + 0x20) + iVar40) = uVar22;
                uVar23 = uVar23 + 1;
                iVar40 = iVar40 + 0x100;
            } while (uVar23 < uStack_a0._4_4_);
        }
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar41, *0x8 + -0xaa);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
            goto code_r0x0001939110ac;
        }
        if ((uStack_aa != '\0') && (uStack_a0._4_4_ != 0)) {
            iVar40 = 0;
            uVar23 = 0;
            do {
                uStack_f0 = (uStack_f0 >> 8) << 8;
                iVar13 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, &uStack_f0);
                if (iVar13 == 0) {
                    uVar16 = **reloc.__stderrp;
                    goto code_r0x0001939110ac;
                }
                iVar29 = *(*param_3 + 0x20) + iVar40;
                geo::codec::accumulateStyleAttributeValue(FeatureStyleAttributesSet*, std::__1::shared_ptr<FeatureStyleAttributes> const&, GeoCodecsFeature*, unsigned int, int)
                          (*param_3 + 0x458, iVar29 + 0x68, iVar29, 0x18, uStack_f0);
                uVar23 = uVar23 + 1;
                iVar40 = iVar40 + 0x100;
            } while (uVar23 < uStack_a0._4_4_);
        }
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xab);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
            goto code_r0x0001939110ac;
        }
        if (uStack_ae._3_1_ != '\0') {
            uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
            uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, &uStack_f0, 2);
            if ((uVar23 & 1) == 0) {
                uVar16 = **reloc.__stderrp;
                goto code_r0x0001939110ac;
            }
            if (uStack_a0._4_4_ != 0) {
                uVar23 = 0;
                iVar13 = uStack_f0;
                do {
                    uStack_b4 = (uStack_b4 >> 8) << 8;
                    uVar20 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xb4);
                    if ((uVar20 & 1) == 0) {
                        uVar16 = **reloc.__stderrp;
                        goto code_r0x0001939110ac;
                    }
                    if (uStack_b4 != '\0') {
                        apuStack_118[0] = (apuStack_118[0] >> 0x20) << 0x20;
                        uVar20 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                           (piVar17, apuStack_118, iVar13 + 1);
                        if ((uVar20 & 1) == 0) {
                            uVar16 = **reloc.__stderrp;
                            goto code_r0x0001939110ac;
                        }
                        uVar20 = apuStack_118[0] + 1;
                        if (!CARRY4(apuStack_118[0], 1)) {
                            iVar40 = *(*param_3 + 0x20) + uVar23 * 0x100;
                            do {
                                uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                                uVar25 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                   (piVar17, &uStack_f8, iVar13 + 1);
                                if ((uVar25 & 1) == 0) {
                                    uVar16 = **reloc.__stderrp;
                                    goto code_r0x0001939110ac;
                                }
                                if (uStack_f8 == 0) {
                                    geo::codec::accumulateStyleAttributeValue(FeatureStyleAttributesSet*, std::__1::shared_ptr<FeatureStyleAttributes> const&, GeoCodecsFeature*, unsigned int, int)
                                              (*param_3 + 0x458, iVar40 + 0x68, iVar40, 0xc, 0);
                                }
                                uVar20 = uVar20 + -1;
                            } while (uVar20 != 0);
                        }
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 < uStack_a0._4_4_);
            }
        }
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xac);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
            goto code_r0x0001939110ac;
        }
        if (uStack_ae._2_1_ != '\0') {
            apuStack_118[0] = (apuStack_118[0] >> 0x20) << 0x20;
            uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, apuStack_118, 2);
            if ((uVar23 & 1) == 0) {
                uVar16 = **reloc.__stderrp;
            }
            else {
                iVar13 = apuStack_118[0];
                uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, &uStack_f8, 5);
                if ((uVar23 & 1) == 0) {
                    uVar16 = **reloc.__stderrp;
                }
                else {
                    if (uStack_a0._4_4_ == 0) goto code_r0x000193911444;
                    uVar23 = 0;
                    iVar14 = uStack_f8;
                    while( true ) {
                        uStack_c0 = (uStack_c0 >> 8) << 8;
                        uVar20 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xc0);
                        if ((uVar20 & 1) == 0) {
                            uVar16 = **reloc.__stderrp;
                            goto code_r0x0001939110ac;
                        }
                        if (uStack_c0 == '\0') goto code_r0x0001939112a4;
                        uStack_b4 = 0;
                        uVar20 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                           (piVar17, *0x8 + -0xb4, iVar13 + 1);
                        if ((uVar20 & 1) == 0) break;
                        uStack_f0 = NULL;
                        uVar15 = uStack_b4;
                        uVar20 = geo::codec::_makeSpaceForLabels(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                           (uVar15, &uStack_f0, param_3);
                        if ((uVar20 & 1) == 0) {
                            uVar16 = **reloc.__stderrp;
                            goto code_r0x0001939110ac;
                        }
                        if (uVar15 != 0) {
                            iVar29 = *(*param_3 + 0x358);
                            iVar40 = *(*param_3 + 0x360);
                            ppuVar42 = uStack_f0;
                            uStack_b8 = 0;
                            iVar12 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                               (piVar17, *0x8 + -0xb8, iVar14 + 1);
                            if (iVar12 != 0) {
                                piVar18 = uStack_b8;
                                piVar41 = iVar40 - iVar29;
                                if ((piVar18 <= piVar41 && piVar41 != piVar18) &&
                                   (iVar40 = *param_3,  ppuVar42 < *(iVar40 + 0x420))) {
                                    piVar1 = *(iVar40 + 0x418) + ppuVar42 * 0x18;
                                    *piVar1 = iVar29 + piVar18;
                                    *(piVar1 + 2) = 0;
                                    uVar16 = geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                       (piVar18, *(iVar40 + 0x378), *(iVar40 + 0x380));
                                    iVar40 = *param_3;
                                    iVar19 = *(iVar40 + 0x418);
                                    *(iVar19 + ppuVar42 * 0x18 + 8) = uVar16;
                                    iVar40 = *(iVar40 + 0x20) + uVar23 * 0x100;
                                    *(iVar40 + 0x18) = ppuVar42;
                                    *(iVar40 + 0x20) = 1;
                                    *(iVar40 + 0x10) = *(iVar19 + ppuVar42 * 0x18);
                                    if (uVar15 != 1) {
                                        iVar19 = uVar15 + -1;
                                        iVar40 = ppuVar42 * 0x18;
                                        uVar20 = ppuVar42 + 1;
                                        do {
                                            uStack_b8 = 0;
                                            uVar25 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                               (piVar17, *0x8 + -0xb8, iVar14 + 1);
                                            if ((((uVar25 & 1) == 0) ||
                                                (piVar18 = uStack_b8,  piVar41 < piVar18 || piVar41 == piVar18)) ||
                                               (iVar26 = *param_3,  *(iVar26 + 0x420) <= uVar20))
                                            goto code_r0x000193911894;
                                            iVar31 = *(iVar26 + 0x418) + iVar40;
                                            *(iVar31 + 0x18) = iVar29 + piVar18;
                                            *(iVar31 + 0x28) = 0;
                                            uVar16 = geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                               (piVar18, *(iVar26 + 0x378), *(iVar26 + 0x380));
                                            *(*(*param_3 + 0x418) + iVar40 + 0x20) = uVar16;
                                            iVar40 = iVar40 + 0x18;
                                            uVar20 = uVar20 + 1;
                                            iVar19 = iVar19 + -1;
                                        } while (iVar19 != 0);
                                    }
                                    goto code_r0x0001939112a4;
                                }
                            }
code_r0x000193911894:
                            uVar16 = **reloc.__stderrp;
                            goto code_r0x0001939110ac;
                        }
code_r0x0001939112a4:
                        uVar23 = uVar23 + 1;
                        if (uStack_a0._4_4_ <= uVar23) goto code_r0x000193911444;
                    }
                    uVar16 = **reloc.__stderrp;
                }
            }
            goto code_r0x0001939110ac;
        }
code_r0x000193911444:
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xad);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
            goto code_r0x0001939110ac;
        }
        if (uStack_ae._1_1_ != '\0') {
            uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
            uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, &uStack_f0, 3);
            if ((uVar23 & 1) == 0) {
                uVar16 = **reloc.__stderrp;
                goto code_r0x0001939110ac;
            }
            if (uStack_a0._4_4_ != 0) {
                uVar23 = 0;
                iVar13 = uStack_f0;
                iVar40 = 0x90;
                do {
                    apuStack_118[0] = (apuStack_118[0] >> 0x20) << 0x20;
                    iVar14 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                       (piVar17, apuStack_118, iVar13 + 1);
                    if (iVar14 == 0) {
                        uVar16 = **reloc.__stderrp;
                        goto code_r0x0001939110ac;
                    }
                    *(*(*param_3 + 0x20) + iVar40) = apuStack_118[0];
                    uVar23 = uVar23 + 1;
                    iVar40 = iVar40 + 0x100;
                } while (uVar23 < uStack_a0._4_4_);
            }
        }
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xae);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
            goto code_r0x0001939110ac;
        }
        if (uStack_ae != '\0') {
            uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
            uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, &uStack_f0, 3);
            if ((uVar23 & 1) == 0) {
                uVar16 = **reloc.__stderrp;
                goto code_r0x0001939110ac;
            }
            if (uStack_a0._4_4_ != 0) {
                uVar23 = 0;
                iVar13 = uStack_f0;
                iVar40 = 0x94;
                do {
                    apuStack_118[0] = (apuStack_118[0] >> 0x20) << 0x20;
                    iVar14 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                       (piVar17, apuStack_118, iVar13 + 1);
                    if (iVar14 == 0) {
                        uVar16 = **reloc.__stderrp;
                        goto code_r0x0001939110ac;
                    }
                    *(*(*param_3 + 0x20) + iVar40) = apuStack_118[0];
                    uVar23 = uVar23 + 1;
                    iVar40 = iVar40 + 0x100;
                } while (uVar23 < uStack_a0._4_4_);
            }
        }
        if (*(pcStack_120 + 0x40) < 0x34) {
code_r0x000193911790:
            iVar40 = 0;
code_r0x000193911794:
            if (cVar7 != '\0') {
                uVar23 = uStack_a0._4_4_;
                if (uStack_a0._4_4_ != 0) {
                    puVar30 = *(*param_3 + 0x20) + 0xdd;
                    do {
                        iVar13 = *(iVar38 + puVar30[-3] * 4);
                        puVar30[-4] = iVar13 + 1 != 0;
                        puVar30[-3] = iVar13;
                        iVar13 = *(iVar38 + *puVar30 * 4);
                        puVar30[-1] = iVar13 + 1 != 0;
                        *puVar30 = iVar13;
                        puVar30 = puVar30 + 0x100;
                        uVar23 = uVar23 + -1;
                    } while (uVar23 != 0);
                }
                if (*(pcStack_120 + 0x40) < 0x3b) goto code_r0x0001939117fc;
                uStack_b8 = (uStack_b8 >> 8) << 8;
                uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xb8);
                if ((uVar23 & 1) == 0) {
                    uVar16 = **reloc.__stderrp;
                    goto code_r0x000193911e98;
                }
                if (uStack_b8 == '\0') goto code_r0x0001939117fc;
                uStack_c0 = (uStack_c0 >> 8) << 8;
                uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xc0);
                if ((uVar23 & 1) != 0) {
                    if (uStack_c0 != '\0') {
                        uStack_f0 = uStack_f0._4_4_ << 0x20;
                        iVar13 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(piVar17, &uStack_f0);
                        if (iVar13 != 0) {
                            if (uStack_a0._4_4_ != 0) {
                                uVar23 = 0;
                                puVar33 = *(*param_3 + 0x20) + 0xe4;
                                do {
                                    *puVar33 = uStack_f0;
                                    uVar23 = uVar23 + 1;
                                    puVar33 = puVar33 + 0x40;
                                } while (uVar23 < uStack_a0._4_4_);
                            }
                            goto code_r0x0001939117fc;
                        }
                        uVar16 = **reloc.__stderrp;
                        goto code_r0x000193911e98;
                    }
                    uStack_f0 = uStack_f0._4_4_ << 0x20;
                    uVar23 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)(piVar17, &uStack_f0, 5);
                    if ((uVar23 & 1) == 0) {
                        uVar16 = **reloc.__stderrp;
                        goto code_r0x000193911e98;
                    }
                    apuStack_118[0] = (apuStack_118[0] >> 0x20) << 0x20;
                    uVar23 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)(piVar17, apuStack_118, 5)
                    ;
                    if ((uVar23 & 1) == 0) {
                        uVar16 = **reloc.__stderrp;
                        goto code_r0x000193911e98;
                    }
                    uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                    uVar22 = uStack_f0;
                    uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, &uStack_f8, uVar22);
                    if ((uVar23 & 1) == 0) {
                        uVar16 = **reloc.__stderrp;
                        goto code_r0x000193911e98;
                    }
                    piVar18 = geo::codec::Allocator::instance()();
                    uVar15 = uStack_f8;
                    iStack_148 = (**(*piVar18 + 0x10))(piVar18, uVar15 * 4, 8);
                    if (uVar15 != 0) {
                        iVar29 = 0;
                        uVar3 = apuStack_118[0];
                        while (uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                  (piVar17, iStack_148 + iVar29, uVar3),  (uVar23 & 1) != 0) {
                            iVar29 = iVar29 + 4;
                            if (uVar15 * 4 - iVar29 == 0) goto code_r0x000193911c5c;
                        }
                        uVar16 = **reloc.__stderrp;
                        goto code_r0x0001939124a4;
                    }
code_r0x000193911c5c:
                    uVar23 = uStack_a0._4_4_;
                    if (uStack_a0._4_4_ == 0) goto code_r0x000193911800;
                    iVar29 = 0;
                    uVar20 = 0;
                    while (piVar41 = *(*param_3 + 0x20),  (*(piVar41 + iVar29 + 0xd9) | *(piVar41 + iVar29 + 0xdc)) == 0
                          ) {
code_r0x000193911cec:
                        uVar20 = uVar20 + 1;
                        iVar29 = iVar29 + 0x100;
                        if (uVar23 <= uVar20) goto code_r0x000193911800;
                    }
                    uStack_b4 = 0;
                    iVar13 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, *0x8 + -0xb4, uVar22);
                    if (iVar13 != 0) {
                        if (uStack_b4 < uVar15 || uStack_b4 == uVar15) {
                            if (uStack_b4 < uVar15) {
                                *(piVar41 + iVar29 + 0xe4) = *(iStack_148 + uStack_b4 * 4);
                            }
                            uVar23 = uStack_a0._4_4_;
                            goto code_r0x000193911cec;
                        }
                    }
code_r0x000193912498:
                    uVar16 = **reloc.__stderrp;
                    goto code_r0x0001939124a4;
                }
                uVar16 = **reloc.__stderrp;
code_r0x000193911e98:
                fprintf(uVar16, 0x8ff + 0x193b8a000);
                iStack_148 = 0;
code_r0x0001939124bc:
                uVar15 = 0;
                goto code_r0x00019391059c;
            }
code_r0x0001939117fc:
            iStack_148 = 0;
code_r0x000193911800:
            iVar29 = *(pcStack_120 + 0x30) + (*(pcStack_120 + 0x18) >> 3);
            if ((*(pcStack_120 + 0x18) & 7) != 0) {
                iVar29 = iVar29 + 1;
            }
            *(pcStack_120 + 0x30) = iVar29;
            pcStack_120[0x20] = '\0';
            if (*(pcStack_120 + 0x40) < 0x48) goto code_r0x00019391255c;
            uVar23 = iVar29 + 1;
            uVar20 = *(pcStack_120 + 0x38);
            if (uVar20 <= uVar23 && uVar23 != uVar20) {
                uVar16 = **reloc.__stderrp;
                goto code_r0x0001939124a4;
            }
            pcVar2 = *(pcStack_120 + 0x28) + iVar29;
            cVar7 = *pcVar2;
            *(pcStack_120 + 0x30) = uVar23;
            if (cVar7 != '\0') {
                uVar23 = iVar29 + 9;
                if (uVar23 < uVar20 || uVar23 == uVar20) {
                    fVar44 = *(pcVar2 + 1);
                    *(pcStack_120 + 0x30) = uVar23;
                    uVar23 = iVar29 + 10;
                    if (uVar23 < uVar20 || uVar23 == uVar20) {
                        cVar7 = pcVar2[9];
                        *(pcStack_120 + 0x30) = uVar23;
                        uStack_b4 = 0;
                        uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                           (pcStack_120, *0x8 + -0xb4);
                        if ((uVar23 & 1) == 0) {
                            uVar16 = **reloc.__stderrp;
                        }
                        else {
                            uVar15 = -uStack_b4;
                            if (cVar7 != '\x01') {
                                uVar15 = uStack_b4;
                            }
                            uStack_b8 = 0;
                            uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                               (pcStack_120, *0x8 + -0xb8);
                            if ((uVar23 & 1) == 0) {
                                uVar16 = **reloc.__stderrp;
                            }
                            else {
                                iVar29 = *(pcStack_120 + 0x30);
                                uVar23 = iVar29 + uStack_b8;
                                if (uVar23 < *(pcStack_120 + 0x38) || uVar23 == *(pcStack_120 + 0x38)) {
                                    iVar19 = *(pcStack_120 + 0x28);
                                    *(pcStack_120 + 0x30) = uVar23;
                                    piVar41 = *(*(*param_3 + 0x318) + 0x10);
                                    apuStack_118[0] = NULL;
                                    uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                                    std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long, int const&)
                                              (&uStack_f0, piVar41, &uStack_f8);
                                    fcn.1938cdbb8(&uStack_f8);
                                    iVar13 = mgcl::iarray::Decoder::decompress(unsigned char const*, unsigned long, unsigned long&, int*)
                                                       (&uStack_f8, iVar19 + iVar29, uStack_b8, apuStack_118, uStack_f0)
                                    ;
                                    if (iVar13 == 0) {
                                        piVar17 = geo::codec::Allocator::instance()();
                                        iVar29 = (**(*piVar17 + 0x10))(piVar17, piVar41 << 2, 8);
                                        if (iVar29 == 0) {
                                            uVar16 = **reloc.__stderrp;
                                            goto code_r0x000193911e50;
                                        }
                                        if (piVar41 != NULL) {
                                            if (piVar41 < 0x10) {
                                                piVar18 = NULL;
                                            }
                                            else {
                                                piVar18 = piVar41 & 0xfffffffffffffff0;
                                                pauVar34 = uStack_f0 + 4;
                                                puVar39 = iVar29 + 0x20;
                                                piVar17 = piVar18;
                                                do {
                                                    auVar45 = pauVar34[-2];
                                                    auVar46 = pauVar34[-1];
                                                    auVar47 = *pauVar34;
                                                    auVar49 = pauVar34[1];
                                                    auVar50._0_8_ = auVar45._0_4_ + uVar15;
                                                    auVar50._8_8_ = auVar45._4_4_ + uVar15;
                                                    auVar50 = NEON_scvtf(auVar50, 8);
                                                    auVar52._0_8_ = auVar45._8_4_ + uVar15;
                                                    auVar52._8_8_ = auVar45._12_4_ + uVar15;
                                                    auVar45 = NEON_scvtf(auVar52, 8);
                                                    auVar51._0_8_ = auVar46._0_4_ + uVar15;
                                                    auVar51._8_8_ = auVar46._4_4_ + uVar15;
                                                    auVar52 = NEON_scvtf(auVar51, 8);
                                                    auVar54._0_8_ = auVar46._8_4_ + uVar15;
                                                    auVar54._8_8_ = auVar46._12_4_ + uVar15;
                                                    auVar46 = NEON_scvtf(auVar54, 8);
                                                    auVar53._0_8_ = auVar47._0_4_ + uVar15;
                                                    auVar53._8_8_ = auVar47._4_4_ + uVar15;
                                                    auVar54 = NEON_scvtf(auVar53, 8);
                                                    auVar56._0_8_ = auVar47._8_4_ + uVar15;
                                                    auVar56._8_8_ = auVar47._12_4_ + uVar15;
                                                    auVar47 = NEON_scvtf(auVar56, 8);
                                                    auVar55._0_8_ = auVar49._0_4_ + uVar15;
                                                    auVar55._8_8_ = auVar49._4_4_ + uVar15;
                                                    auVar56 = NEON_scvtf(auVar55, 8);
                                                    auVar48._0_8_ = auVar49._8_4_ + uVar15;
                                                    auVar48._8_8_ = auVar49._12_4_ + uVar15;
                                                    auVar49 = NEON_scvtf(auVar48, 8);
                                                    puVar39[-3] = CONCAT44(auVar45._8_8_ * fVar44, 
                                                                           auVar45._0_8_ * fVar44);
                                                    puVar39[-4] = CONCAT44(auVar50._8_8_ * fVar44, 
                                                                           auVar50._0_8_ * fVar44);
                                                    puVar39[-1] = CONCAT44(auVar46._8_8_ * fVar44, 
                                                                           auVar46._0_8_ * fVar44);
                                                    puVar39[-2] = CONCAT44(auVar52._8_8_ * fVar44, 
                                                                           auVar52._0_8_ * fVar44);
                                                    puVar39[1] = CONCAT44(auVar47._8_8_ * fVar44, auVar47._0_8_ * fVar44
                                                                         );
                                                    *puVar39 = CONCAT44(auVar54._8_8_ * fVar44, auVar54._0_8_ * fVar44);
                                                    puVar39[3] = CONCAT44(auVar49._8_8_ * fVar44, auVar49._0_8_ * fVar44
                                                                         );
                                                    puVar39[2] = CONCAT44(auVar56._8_8_ * fVar44, auVar56._0_8_ * fVar44
                                                                         );
                                                    piVar17 = piVar17 + -0x10;
                                                    pauVar34 = pauVar34[4];
                                                    puVar39 = puVar39 + 8;
                                                } while (piVar17 != NULL);
                                                if (piVar41 == piVar18) goto code_r0x00019391221c;
                                            }
                                            iVar19 = piVar41 - piVar18;
                                            auVar45._8_8_ = 0;
                                            auVar45._0_8_ = fVar44;
                                            piVar27 = uStack_f0 + piVar18 * 4;
                                            pfVar32 = iVar29 + piVar18 * 4;
                                            do {
                                                *pfVar32 = SUB168(auVar45, 0) * (*piVar27 + uVar15);
                                                iVar19 = iVar19 + -1;
                                                piVar27 = piVar27 + 1;
                                                pfVar32 = pfVar32 + 1;
                                            } while (iVar19 != 0);
                                        }
code_r0x00019391221c:
                                        iVar13 = 0;
                                        *(*(*param_3 + 0x318) + 0x18) = iVar29;
                                        bVar11 = true;
                                    }
                                    else {
                                        uVar16 = **reloc.__stderrp;
code_r0x000193911e50:
                                        fprintf(uVar16, 0x8ff + 0x193b8a000);
                                        bVar11 = false;
                                        iVar13 = 6;
                                    }
                                    mgcl::iarray::Decoder::~Decoder()(&uStack_f8);
                                    std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                              (&uStack_f0);
                                    if (bVar11) {
                                        uVar23 = *(pcStack_120 + 0x30);
                                        uVar20 = *(pcStack_120 + 0x38);
                                        goto code_r0x000193912250;
                                    }
                                    goto code_r0x000193912548;
                                }
                                uVar16 = **reloc.__stderrp;
                            }
                        }
                    }
                    else {
                        uVar16 = **reloc.__stderrp;
                    }
                }
                else {
                    uVar16 = **reloc.__stderrp;
                }
code_r0x0001939124a4:
                fprintf(uVar16, 0x8ff + 0x193b8a000);
                goto code_r0x0001939124bc;
            }
code_r0x000193912250:
            uVar25 = uVar23 + 1;
            if (uVar20 <= uVar25 && uVar25 != uVar20) {
                uVar16 = **reloc.__stderrp;
                goto code_r0x0001939124a4;
            }
            cVar7 = *(*(pcStack_120 + 0x28) + uVar23);
            *(pcStack_120 + 0x30) = uVar25;
            if (cVar7 != '\0') {
                uStack_b4 = 0;
                uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcStack_120, *0x8 + -0xb4);
                if ((uVar23 & 1) == 0) {
                    uVar16 = **reloc.__stderrp;
                }
                else {
                    iVar29 = *(pcStack_120 + 0x30);
                    uVar23 = iVar29 + uStack_b4;
                    if (uVar23 < *(pcStack_120 + 0x38) || uVar23 == *(pcStack_120 + 0x38)) {
                        iVar26 = *(pcStack_120 + 0x28);
                        *(pcStack_120 + 0x30) = uVar23;
                        uStack_f0 = NULL;
                        uStack_e8 = 0;
                        uStack_e0 = 0;
                        uStack_d8 = geo::codec::Allocator::instance()();
                        std::__1::vector<GeoCodecsVectorTileRawPoint, geo::StdAllocator<GeoCodecsVectorTileRawPoint, geo::codec::Allocator> >::reserve(unsigned long)
                                  (&uStack_f0, *(*param_3 + 0x28) - *(*param_3 + 0x20) >> 8);
                        iVar19 = *(*param_3 + 0x20);
                        if (*(*param_3 + 0x28) == iVar19) {
                            uVar23 = 0;
                        }
                        else {
                            uVar20 = 0;
                            iVar31 = 0x80;
                            do {
                                std::__1::vector<GeoCodecsVectorTileRawPoint, geo::StdAllocator<GeoCodecsVectorTileRawPoint, geo::codec::Allocator> >::push_back[abi:v160006](GeoCodecsVectorTileRawPoint const&)
                                          (&uStack_f0, iVar24 + (*(iVar19 + iVar31) << 3));
                                uVar20 = uVar20 + 1;
                                iVar19 = *(*param_3 + 0x20);
                                uVar23 = *(*param_3 + 0x28) - iVar19 >> 8;
                                iVar31 = iVar31 + 0x100;
                            } while (uVar20 < uVar23);
                        }
                        uStack_f8 = 0;
                        std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >::vector(unsigned long, unsigned long long const&)
                                  (apuStack_118, uVar23, &uStack_f8);
                        piVar41 = mgcl::muid::decompress(char const*, unsigned long, int const*, int, unsigned long long*, int, unsigned long)
                                            (iVar26 + iVar29, uStack_b4, uStack_f0, 8, apuStack_118[0], 8, 
                                             apuStack_118[1] - apuStack_118[0] >> 3);
                        if (piVar41 == 0) {
                            iVar19 = *(*param_3 + 0x20);
                            iVar29 = *(*param_3 + 0x28) - iVar19;
                            if (iVar29 != 0) {
                                uVar23 = iVar29 >> 8;
                                if (uVar23 < 2) {
                                    uVar23 = 1;
                                }
                                puVar39 = iVar19 + 0xe8;
                                puVar28 = apuStack_118[0];
                                do {
                                    *puVar39 = *puVar28;
                                    puVar39 = puVar39 + 0x20;
                                    uVar23 = uVar23 + -1;
                                    puVar28 = puVar28 + 1;
                                } while (uVar23 != 0);
                            }
                            iVar13 = 0;
                        }
                        else {
                            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                            iVar13 = 6;
                        }
                        std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                  (apuStack_118);
                        std::__1::vector<GeoCodecsVectorTileRawPoint, geo::StdAllocator<GeoCodecsVectorTileRawPoint, geo::codec::Allocator> >::~vector[abi:v160006]()
                                  (&uStack_f0);
                        if (piVar41 == 0) goto code_r0x000193912428;
                        goto code_r0x000193912548;
                    }
                    uVar16 = **reloc.__stderrp;
                }
                goto code_r0x0001939124a4;
            }
code_r0x000193912428:
            if (*(pcStack_120 + 0x40) < 0x49) {
code_r0x00019391255c:
                uVar15 = geo::codec::_readConnectivity(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                   (param_1, param_3);
                goto code_r0x00019391059c;
            }
            uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
            uStack_b4 = 0;
            uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcStack_120, &uStack_f8);
            if (((uVar23 & 1) == 0) ||
               (iVar13 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcStack_120, *0x8 + -0xb4), 
               iVar13 == 0)) goto code_r0x000193912498;
            uVar23 = *(pcStack_120 + 0x30) + 1;
            if (uVar23 < *(pcStack_120 + 0x38) || uVar23 == *(pcStack_120 + 0x38)) {
                cVar7 = *(*(pcStack_120 + 0x28) + *(pcStack_120 + 0x30));
                *(pcStack_120 + 0x30) = uVar23;
                if (cVar7 == '\0') goto code_r0x00019391255c;
                uStack_b8 = 0;
                uVar23 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcStack_120, *0x8 + -0xb8);
                if ((uVar23 & 1) == 0) {
                    uVar16 = **reloc.__stderrp;
                }
                else {
                    iVar29 = *(pcStack_120 + 0x30);
                    uVar23 = iVar29 + uStack_b8;
                    if (uVar23 < *(pcStack_120 + 0x38) || uVar23 == *(pcStack_120 + 0x38)) {
                        iVar31 = *(pcStack_120 + 0x28);
                        *(pcStack_120 + 0x30) = uVar23;
                        iVar26 = *(*param_3 + 0x20);
                        iVar19 = *(*param_3 + 0x28);
                        uVar23 = iVar19 - iVar26 >> 8;
                        uStack_f0 = NULL;
                        std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::vector(unsigned long, unsigned long long const&)
                                  (apuStack_118, uVar23, &uStack_f0);
                        uStack_e8 = 0;
                        uStack_f0 = NULL;
                        uStack_d8 = 0;
                        uStack_e0 = 0;
                        piVar41 = mgcl::ints::IntDecompressor<unsigned long long>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, unsigned long long*)
                                            (&uStack_f0, iVar31 + iVar29, uStack_b8, uStack_f8, uStack_b4, uVar23, 
                                             apuStack_118[0]);
                        if (piVar41 == 0) {
                            if (iVar19 != iVar26) {
                                iVar29 = *(*param_3 + 0x20);
                                if (uVar23 < 2) {
                                    uVar23 = 1;
                                }
                                if (uVar23 < 4) {
                                    uVar25 = 0;
                                }
                                else {
                                    uVar25 = uVar23 & 0xfffffffffffffffc;
                                    puVar39 = apuStack_118[0] + 2;
                                    iVar19 = iVar29;
                                    uVar20 = uVar25;
                                    do {
                                        uVar10 = *(puVar39 + -1);
                                        uVar8 = *puVar39;
                                        uVar6 = *(puVar39 + 1);
                                        *(iVar19 + 0xf0) = *(puVar39 + -2) & 1;
                                        *(iVar19 + 0x1f0) = uVar10 & 1;
                                        *(iVar19 + 0x2f0) = uVar8 & 1;
                                        *(iVar19 + 0x3f0) = uVar6 & 1;
                                        iVar19 = iVar19 + 0x400;
                                        puVar39 = puVar39 + 4;
                                        uVar20 = uVar20 + -4;
                                    } while (uVar20 != 0);
                                    if (uVar23 == uVar25) goto code_r0x000193912714;
                                }
                                puVar30 = iVar29 + uVar25 * 0x100 + 0xf0;
                                iVar29 = uVar23 - uVar25;
                                puVar39 = apuStack_118[0] + uVar25;
                                do {
                                    *puVar30 = *puVar39 & 1;
                                    puVar30 = puVar30 + 0x100;
                                    iVar29 = iVar29 + -1;
                                    puVar39 = puVar39 + 1;
                                } while (iVar29 != 0);
                            }
code_r0x000193912714:
                            iVar13 = 0;
                        }
                        else {
                            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                            iVar13 = 6;
                        }
                        mgcl::ints::IntDecompressor<unsigned long long>::~IntDecompressor()(&uStack_f0);
                        if (apuStack_118[0] != NULL) {
                            apuStack_118[1] = apuStack_118[0];
                            operator delete(void*)();
                        }
                        if (piVar41 != 0) goto code_r0x000193912548;
                        goto code_r0x00019391255c;
                    }
                    uVar16 = **reloc.__stderrp;
                }
            }
            else {
                uVar16 = **reloc.__stderrp;
            }
            fprintf(uVar16, 0x8ff + 0x193b8a000);
            iVar13 = 6;
code_r0x000193912548:
            uVar15 = piVar41;
            if (iVar13 == 6) goto code_r0x0001939124bc;
            if (iVar13 == 0) goto code_r0x00019391255c;
            goto code_r0x0001939106cc;
        }
        uStack_f0 = (uStack_f0 >> 8) << 8;
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, &uStack_f0);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
            goto code_r0x0001939110ac;
        }
        if (uStack_f0 != '\0') {
            bool geo::codec::decodeAttributeSet<GeoCodecsFeature>(signed char, Bitstream*, unsigned int, FeatureStyleAttributesSet*, GeoCodecsFeature*, unsigned long)
                      (1, piVar17, uStack_a0._4_4_, *param_3 + 0x458, *(*param_3 + 0x20), 0x100);
        }
        if (*(pcStack_120 + 0x40) < 0x35) goto code_r0x000193911790;
        cStack_b9 = '\0';
        uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xb9);
        if ((uVar23 & 1) == 0) {
            uVar16 = **reloc.__stderrp;
        }
        else {
            if (cStack_b9 == '\0') {
                iVar40 = 0;
code_r0x000193911a38:
                if ((*(pcStack_120 + 0x40) < 0x37) || (cVar7 == '\0')) goto code_r0x000193911794;
                apuStack_118[0] = (apuStack_118[0] >> 8) << 8;
                uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, apuStack_118);
                iStack_148._0_4_ = uStack_a4;
                if ((uVar23 & 1) == 0) {
                    uVar16 = **reloc.__stderrp;
                }
                else if ((apuStack_118[0] == '\0') || (uStack_a0._4_4_ == 0)) {
code_r0x000193911d70:
                    uStack_f8 = (uStack_f8 >> 8) << 8;
                    uVar23 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, &uStack_f8);
                    if ((uVar23 & 1) == 0) {
                        uVar16 = **reloc.__stderrp;
                    }
                    else {
                        if (uStack_f8 == '\0') goto code_r0x000193911794;
                        uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
                        iVar13 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                           (piVar17, &uStack_f0, uStack_a0);
                        if (iVar13 != 0) {
                            if (uStack_f0 < uStack_a4) {
                                *(iVar38 + uStack_f0 * 4) = 0xffffffff;
                                goto code_r0x000193911794;
                            }
                        }
code_r0x0001939120cc:
                        uVar16 = **reloc.__stderrp;
                    }
                }
                else {
                    iVar29 = 0;
                    uVar23 = 0;
                    uVar22 = uStack_a0;
                    uVar9 = auStack_a6[0];
                    uVar8 = auStack_a6[1];
                    piVar41 = uVar8;
                    while( true ) {
                        uStack_f8 = (uStack_f8 >> 8) << 8;
                        uVar20 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, &uStack_f8);
                        if ((uVar20 & 1) == 0) break;
                        if (uStack_f8 != '\0') {
                            uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
                            iVar13 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                               (piVar17, &uStack_f0, uVar22);
                            if (iVar13 != 0) {
                                uVar15 = uStack_f0;
                                if (uVar15 < iStack_148) {
                                    uStack_b4 = CONCAT31(uStack_b4._1_3_, uVar9);
                                    uVar21 = uVar9;
                                    if ((uVar8 == 0) && (uVar21 = uVar9,  *(iVar38 + uVar15 * 4) != 0)) {
                                        iVar13 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xb4);
                                        if (iVar13 == 0) {
                                            uVar16 = **reloc.__stderrp;
                                            goto code_r0x0001939120d8;
                                        }
                                        uVar21 = uStack_b4;
                                    }
                                    iVar19 = *(*param_3 + 0x20) + iVar29;
                                    *(iVar19 + 0xdd) = uVar15;
                                    *(iVar19 + 0xde) = uVar21;
                                    goto code_r0x000193911b20;
                                }
                            }
                            goto code_r0x0001939120cc;
                        }
code_r0x000193911b20:
                        uVar23 = uVar23 + 1;
                        iVar29 = iVar29 + 0x100;
                        if (uStack_a0._4_4_ <= uVar23) goto code_r0x000193911d70;
                    }
                    uVar16 = **reloc.__stderrp;
                }
code_r0x0001939120d8:
                fprintf(uVar16, 0x8ff + 0x193b8a000);
                goto code_r0x000193910598;
            }
            apuStack_118[0] = (apuStack_118[0] >> 0x20) << 0x20;
            uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, apuStack_118, 5);
            if ((uVar23 & 1) == 0) {
                uVar16 = **reloc.__stderrp;
            }
            else {
                iVar13 = apuStack_118[0];
                uStack_f8 = (uStack_f8 >> 0x20) << 0x20;
                uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, &uStack_f8, 5);
                if ((uVar23 & 1) == 0) {
                    uVar16 = **reloc.__stderrp;
                }
                else {
                    uVar15 = uStack_f8;
                    piVar41 = uVar15;
                    uStack_b4 = 0;
                    uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, *0x8 + -0xb4, 5);
                    if ((uVar23 & 1) == 0) {
                        uVar16 = **reloc.__stderrp;
                    }
                    else {
                        uVar35 = uStack_b4;
                        uStack_b8 = 0;
                        uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, *0x8 + -0xb8);
                        if ((uVar23 & 1) == 0) {
                            uVar16 = **reloc.__stderrp;
                            goto code_r0x000193911ec8;
                        }
                        uVar4 = uStack_b8;
                        uStack_c0 = 0;
                        uVar23 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar17, *0x8 + -0xc0, 5);
                        if ((uVar23 & 1) != 0) {
                            uVar5 = uStack_c0;
                            piVar18 = geo::codec::Allocator::instance()();
                            uVar23 = uVar4 + 1;
                            iVar40 = (**(*piVar18 + 0x10))(piVar18, uVar23 << -0x3e + 0x40 & 0x3fffffffc, 8);
                            if (iVar40 == 0) {
                                uVar16 = **reloc.__stderrp;
                            }
                            else {
                                if (uVar23 != 0) {
                                    iVar29 = 0;
                                    do {
                                        uStack_f0 = (uStack_f0 >> 0x20) << 0x20;
                                        iVar14 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                           (piVar17, &uStack_f0, uVar5 + 1);
                                        if (iVar14 == 0) {
                                            uVar16 = **reloc.__stderrp;
                                            goto code_r0x0001939120d8;
                                        }
                                        *(iVar40 + iVar29) = uStack_f0;
                                        iVar29 = iVar29 + 4;
                                    } while (uVar23 * 4 - iVar29 != 0);
                                }
                                if (uStack_a0._4_4_ == 0) goto code_r0x000193911a38;
                                uVar20 = 0;
                                piVar41 = uVar15 + 1;
                                iVar19 = *(*param_3 + 0x358);
                                iVar29 = *(*param_3 + 0x360);
                                while( true ) {
                                    cStack_c1 = '\0';
                                    uVar25 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar17, *0x8 + -0xc1);
                                    if ((uVar25 & 1) == 0) break;
                                    if (cStack_c1 != '\0') {
                                        iVar26 = *(*param_3 + 0x20);
                                        auStack_d0[2] = 0;
                                        uVar25 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                           (piVar17, auStack_d0 + 2, iVar13 + 1);
                                        if ((uVar25 & 1) == 0) {
                                            uVar16 = **reloc.__stderrp;
                                        }
                                        else {
                                            uStack_f0 = NULL;
                                            uVar15 = auStack_d0[2];
                                            uVar37 = uVar15;
                                            uVar25 = geo::codec::_makeSpaceForShields(unsigned long, unsigned long*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                                               (uVar37, &uStack_f0, param_3);
                                            if ((uVar25 & 1) != 0) {
                                                iVar26 = iVar26 + uVar20 * 0x100;
                                                *(iVar26 + 0x28) = uStack_f0;
                                                *(iVar26 + 0x30) = uVar37;
                                                if (uVar15 != 0) {
                                                    iVar26 = uStack_f0 << 5;
                                                    do {
                                                        auStack_d0[1] = 0;
                                                        iVar14 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar17, auStack_d0 + 1, piVar41);
                                                        if ((iVar14 == 0) ||
                                                           (uVar43 = auStack_d0[1],  uVar25 = iVar29 - iVar19, 
                                                           uVar25 < uVar43 || uVar25 == uVar43))
                                                        goto code_r0x0001939120cc;
                                                        auStack_d0[0] = 0;
                                                        uVar25 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar17, auStack_d0, uVar35 + 1);
                                                        if (((uVar25 & 1) == 0) ||
                                                           (uVar15 = auStack_d0[0],  uVar23 <= uVar15))
                                                        goto code_r0x0001939120cc;
                                                        iVar31 = *param_3;
                                                        piVar18 = *(iVar31 + 0x428) + iVar26;
                                                        *piVar18 = iVar19 + uVar43;
                                                        *(piVar18 + 2) = 0;
                                                        uVar16 = 
                                                            geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                                                                      (uVar43, *(iVar31 + 0x378), *(iVar31 + 0x380));
                                                        iVar31 = *(*param_3 + 0x428) + iVar26;
                                                        *(iVar31 + 8) = uVar16;
                                                        *(iVar31 + 0x18) = *(iVar40 + uVar15 * 4);
                                                        iVar26 = iVar26 + 0x20;
                                                        uVar15 = uVar37 + -1;
                                                        uVar37 = uVar15;
                                                    } while (uVar15 != 0);
                                                }
                                                goto code_r0x000193911f54;
                                            }
                                            uVar16 = **reloc.__stderrp;
                                        }
                                        goto code_r0x0001939120d8;
                                    }
code_r0x000193911f54:
                                    uVar20 = uVar20 + 1;
                                    if (uStack_a0._4_4_ <= uVar20) goto code_r0x000193911a38;
                                }
                                uVar16 = **reloc.__stderrp;
                            }
                            goto code_r0x0001939120d8;
                        }
                        uVar16 = **reloc.__stderrp;
                    }
                }
            }
        }
code_r0x000193911ec8:
        fprintf(uVar16, 0x8ff + 0x193b8a000);
        iVar40 = 0;
    }
    else {
        uVar16 = **reloc.__stderrp;
code_r0x000193910570:
        fprintf(uVar16, 0x8ff + 0x193b8a000);
        iVar24 = 0;
code_r0x00019391058c:
        iVar40 = 0;
        iVar38 = 0;
    }
code_r0x000193910598:
    iStack_148 = 0;
    uVar15 = 0;
code_r0x00019391059c:
    piVar17 = geo::codec::Allocator::instance()();
    (**(*piVar17 + 0x28))(piVar17, iVar38, 0);
    piVar17 = geo::codec::Allocator::instance()();
    (**(*piVar17 + 0x28))(piVar17, iVar40, 0);
    piVar17 = geo::codec::Allocator::instance()();
    (**(*piVar17 + 0x28))(piVar17, iStack_148, 0);
    piVar17 = geo::codec::Allocator::instance()();
    (**(*piVar17 + 0x28))(piVar17, iVar24, 0);
    if (*pcStack_120 != '\0') {
        piVar17 = geo::codec::Allocator::instance()();
        (**(*piVar17 + 0x28))(piVar17, *(pcStack_120 + 0x28), 0);
    }
    piVar17 = geo::codec::Allocator::instance()();
    (**(*piVar17 + 0x28))(piVar17, pcStack_120, 0);
code_r0x0001939106cc:
    piVar17 = piStack_90;
    if (piVar17 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_90[1];
        iVar24 = tmp_ldXn;
        tmp_stXn = iVar24 + -1;
        iVar24 = tmp_stXn;
        piStack_90[1] = iVar24;
        iVar24 = tmp_ldXn;
        LORelease();
        if (iVar24 == 0) {
            (**(*piVar17 + 0x10))(piVar17);
            std::__1::__shared_weak_count::__release_weak()(piVar17);
        }
    }
    puVar39 = puStack_88;
    iVar40 = iStack_80;
    iVar24 = std::__1::chrono::steady_clock::now()();
    iVar38 = iStack_70;
    apuStack_118[0] = puVar39;
    if (puVar39 != NULL) {
        uStack_f0 = apuStack_118;
        iVar40 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar40 + 0x778, apuStack_118, 0x74c + 0x193af9000, &uStack_f0, *0x8 + -0x98);
        iVar24 = SUB168(SEXT816(iVar24 - iVar38) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar40 + 0x20) = ((iVar24 >> 7) - (iVar24 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar17 = piStack_78;
    if (piVar17 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_78[1];
        iVar24 = tmp_ldXn;
        tmp_stXn = iVar24 + -1;
        iVar24 = tmp_stXn;
        piStack_78[1] = iVar24;
        iVar24 = tmp_ldXn;
        LORelease();
        if (iVar24 == 0) {
            (**(*piVar17 + 0x10))(piVar17);
            std::__1::__shared_weak_count::__release_weak()(piVar17);
        }
    }
    goto code_r0x000193910528;
}
