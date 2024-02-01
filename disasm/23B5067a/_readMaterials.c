
uint64_t geo::codec::_readMaterials(VMP4Chapter*, std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >&, std::__1::vector<VMP4Material, geo::StdAllocator<VMP4Material, geo::codec::Allocator> >&, std::__1::vector<unsigned long, geo::StdAllocator<unsigned long, geo::codec::Allocator> >&, FeatureStyleAttributesSet&, bool)
                   (int64_t param_1, int64_t *param_2, int64_t *param_3, uint64_t **param_4, int64_t param_5, 
                   int32_t param_6)

{
    char cVar1;
    uint16_t *puVar2;
    int64_t **ppiVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    code *UNRECOVERED_JUMPTABLE;
    int32_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong *puVar12;
    uint64_t *puVar13;
    uint64_t *puVar14;
    ulong *puVar15;
    uint64_t uVar16;
    int64_t iVar17;
    uint64_t *puVar18;
    int64_t **ppiVar19;
    uint64_t *puVar20;
    uint64_t uVar21;
    int64_t iVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    int64_t iVar25;
    uint32_t *puVar26;
    uint64_t uVar27;
    ulong *puVar28;
    ulong *puVar29;
    uint64_t *puVar30;
    uint32_t *puVar31;
    uint64_t uVar32;
    ulong *puVar33;
    ulong *puVar34;
    uint32_t uVar35;
    uint32_t uVar36;
    int64_t iVar37;
    int64_t **ppiVar38;
    uint64_t uVar39;
    int64_t **ppiVar40;
    ulong uVar41;
    ulong uVar42;
    ulong uVar43;
    ulong uVar44;
    ulong uVar45;
    ulong uVar46;
    uint32_t **ppuStack_70;
    int64_t *piStack_68;
    
    param_2[1] = *param_2;
    param_4[1] = *param_4;
    puVar15 = *param_3;
    param_3[1] = puVar15;
    uVar21 = *(param_1 + 0x30) + 2;
    if (*(param_1 + 0x38) <= uVar21 && uVar21 != *(param_1 + 0x38)) {
        uVar8 = **reloc.__stderrp;
code_r0x000193931300:
        fprintf(uVar8, 0x8ff + 0x193b8a000);
        return 0;
    }
    uVar6 = *(*(param_1 + 0x28) + *(param_1 + 0x30));
    uVar39 = uVar6;
    *(param_1 + 0x30) = uVar21;
    if (uVar39 == 0) {
code_r0x0001939306b0:
        iVar37 = *param_2;
        uVar21 = param_2[2] - iVar37 >> 3;
        if (uVar21 <= uVar39 && uVar39 != uVar21) {
code_r0x0001939306e0:
            uVar21 = param_2[1] - iVar37;
            iVar37 = (**(*param_2[3] + 0x10))(param_2[3], uVar39 * 8, 8);
            puVar15 = iVar37 + (uVar21 & 0xfffffffffffffff8);
            puVar12 = *param_2;
            puVar28 = param_2[1];
            puVar34 = puVar15;
            if (puVar28 - puVar12 != 0) {
                uVar16 = (puVar28 - puVar12) + -8;
                if ((0x57 < uVar16) && (puVar34 = puVar15,  0x3f < puVar28 + (-iVar37 - (uVar21 & 0xfffffffffffffff8))))
                {
                    uVar16 = (uVar16 >> 3) + 1;
                    uVar23 = uVar16 & 0x3ffffffffffffff8;
                    puVar34 = puVar15 + -uVar23;
                    puVar29 = puVar28 + -0x20;
                    puVar33 = iVar37 + (uVar21 >> 3) * 8 + -0x20;
                    uVar21 = uVar23;
                    do {
                        uVar42 = *puVar29;
                        uVar41 = puVar29[3];
                        uVar8 = puVar29[2];
                        uVar46 = puVar29[-3];
                        uVar45 = puVar29[-4];
                        uVar44 = puVar29[-1];
                        uVar43 = puVar29[-2];
                        puVar33[1] = puVar29[1];
                        *puVar33 = uVar42;
                        puVar33[3] = uVar41;
                        puVar33[2] = uVar8;
                        puVar33[-3] = uVar46;
                        puVar33[-4] = uVar45;
                        puVar33[-1] = uVar44;
                        puVar33[-2] = uVar43;
                        puVar29 = puVar29 + -0x40;
                        puVar33 = puVar33 + -0x40;
                        uVar21 = uVar21 + -8;
                    } while (uVar21 != 0);
                    puVar28 = puVar28 + -uVar23;
                    if (uVar16 == uVar23) goto code_r0x0001939307cc;
                }
                do {
                    puVar28 = puVar28 + -1;
                    puVar34 = puVar34 + -1;
                    *puVar34 = *puVar28;
                } while (puVar28 != puVar12);
            }
code_r0x0001939307cc:
            *param_2 = puVar34;
            param_2[1] = puVar15;
            iVar22 = param_2[2];
            param_2[2] = iVar37 + uVar39 * 8;
            if (puVar12 != NULL) {
                (**(*param_2[3] + 0x28))(param_2[3], puVar12, iVar22 - puVar12);
            }
        }
    }
    else {
        uVar21 = param_3[2] - puVar15;
        iVar37 = uVar39 * 0x10;
        if (uVar21 >> 4 <= uVar39 && uVar39 != uVar21 >> 4) {
            uVar16 = uVar21 >> 3;
            if (uVar16 < uVar39 || uVar16 == uVar39) {
                uVar16 = uVar39;
            }
            if (0x7fffffffffffffef < uVar21) {
                uVar16 = 0xfffffffffffffff;
            }
            iVar9 = (**(*param_3[3] + 0x10))(param_3[3], uVar16 << 4, 8);
            iVar22 = 0;
            iVar17 = iVar9 + iVar37;
            do {
                puVar15 = iVar9 + iVar22;
                if (puVar15 != NULL) {
                    *puVar15 = 0;
                    puVar15[1] = 0;
                }
                iVar22 = iVar22 + 0x10;
            } while (iVar37 - iVar22 != 0);
            iVar37 = iVar9 + uVar16 * 0x10;
            iVar25 = *param_3;
            iVar22 = param_3[1];
            if (iVar22 != iVar25) {
                do {
                    uVar8 = *(iVar22 + -0x10);
                    *(iVar9 + -8) = *(iVar22 + -8);
                    *(iVar9 + -0x10) = uVar8;
                    iVar9 = iVar9 + -0x10;
                    iVar22 = iVar22 + -0x10;
                } while (iVar22 != iVar25);
                iVar22 = *param_3;
            }
            *param_3 = iVar9;
            param_3[1] = iVar17;
            iVar17 = param_3[2];
            param_3[2] = iVar37;
            if (iVar22 != 0) {
                (**(*param_3[3] + 0x28))(param_3[3], iVar22, iVar17 - iVar22);
            }
            goto code_r0x0001939306b0;
        }
        puVar34 = puVar15 + uVar39 * 2;
        do {
            if (puVar15 != NULL) {
                *puVar15 = 0;
                puVar15[1] = 0;
            }
            puVar15 = puVar15 + 2;
            iVar37 = iVar37 + -0x10;
        } while (iVar37 != 0);
        param_3[1] = puVar34;
        iVar37 = *param_2;
        uVar21 = param_2[2] - iVar37 >> 3;
        if (uVar21 <= uVar39 && uVar39 != uVar21) goto code_r0x0001939306e0;
    }
    uVar21 = param_4[2] - *param_4 >> 3;
    if (uVar39 < uVar21 || uVar39 == uVar21) goto code_r0x000193930944;
    uVar21 = param_4[1] - *param_4;
    iVar37 = (**(*param_4[3] + 0x10))(param_4[3], uVar39 * 8, 8);
    puVar18 = iVar37 + (uVar21 & 0xfffffffffffffff8);
    puVar13 = *param_4;
    puVar30 = param_4[1];
    puVar20 = puVar18;
    if (puVar30 - puVar13 != 0) {
        uVar16 = (puVar30 - puVar13) + -8;
        if ((0x57 < uVar16) && (puVar20 = puVar18,  0x3f < puVar30 + (-iVar37 - (uVar21 & 0xfffffffffffffff8)))) {
            uVar16 = (uVar16 >> 3) + 1;
            uVar23 = uVar16 & 0x3ffffffffffffff8;
            puVar20 = puVar18 + -uVar23;
            puVar15 = puVar30 + -0x20;
            puVar34 = iVar37 + (uVar21 >> 3) * 8 + -0x20;
            uVar21 = uVar23;
            do {
                uVar42 = *puVar15;
                uVar41 = puVar15[3];
                uVar8 = puVar15[2];
                uVar46 = puVar15[-3];
                uVar45 = puVar15[-4];
                uVar44 = puVar15[-1];
                uVar43 = puVar15[-2];
                puVar34[1] = puVar15[1];
                *puVar34 = uVar42;
                puVar34[3] = uVar41;
                puVar34[2] = uVar8;
                puVar34[-3] = uVar46;
                puVar34[-4] = uVar45;
                puVar34[-1] = uVar44;
                puVar34[-2] = uVar43;
                puVar15 = puVar15 + -0x40;
                puVar34 = puVar34 + -0x40;
                uVar21 = uVar21 + -8;
            } while (uVar21 != 0);
            puVar30 = puVar30 + -uVar23;
            if (uVar16 == uVar23) goto code_r0x000193930908;
        }
        do {
            puVar30 = puVar30 + -1;
            puVar20 = puVar20 + -1;
            *puVar20 = *puVar30;
        } while (puVar30 != puVar13);
    }
code_r0x000193930908:
    *param_4 = puVar20;
    param_4[1] = puVar18;
    puVar18 = param_4[2];
    param_4[2] = iVar37 + uVar39 * 8;
    if (puVar13 != NULL) {
        (**(*param_4[3] + 0x28))(param_4[3], puVar13, puVar18 - puVar13);
    }
code_r0x000193930944:
    if (uVar6 == 0) {
        uVar21 = 1;
    }
    else {
        uVar21 = 0;
        do {
            iVar37 = *param_3;
            piVar11 = iVar37 + uVar21 * 0x10;
            if (param_6 == 0) {
                uVar23 = *(param_1 + 0x38);
                uVar16 = *(param_1 + 0x30) + 1;
                if (uVar23 <= uVar16 && uVar16 != uVar23) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                uVar5 = *(*(param_1 + 0x28) + *(param_1 + 0x30));
                *(param_1 + 0x30) = uVar16;
                puVar15 = *piVar11;
                *(iVar37 + uVar21 * 0x10 + 8) = uVar5 & 1;
                if ((uVar5 & 1) != 0) goto code_r0x000193930c1c;
                piVar10 = geo::codec::Allocator::instance()();
                iVar37 = (**(*piVar10 + 0x10))(piVar10, 0x28, 8);
                *piVar11 = iVar37;
                if (iVar37 == 0) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                iVar37 = *(param_1 + 0x30);
                uVar23 = *(param_1 + 0x38);
                uVar16 = iVar37 + 8;
                if (uVar23 <= uVar16 && uVar16 != uVar23) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                puVar34 = *(param_1 + 0x28) + iVar37;
                *puVar15 = *puVar34;
                *(param_1 + 0x30) = uVar16;
                uVar16 = iVar37 + 10;
                if (uVar23 <= uVar16 && uVar16 != uVar23) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                *(puVar15 + 1) = *(puVar34 + 1);
                *(param_1 + 0x30) = uVar16;
                piVar11 = geo::codec::Allocator::instance()();
                iVar37 = (**(*piVar11 + 0x10))(piVar11, 0x18, 8);
                puVar15[2] = iVar37;
                if (iVar37 == 0) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                uVar16 = geo::codec::readMaterial(VMP4Chapter*, GeoCodecsDaVinciMaterial*, bool)(param_1, iVar37, 0);
                if ((uVar16 & 1) == 0) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                uVar16 = *(param_1 + 0x30) + 2;
                if (*(param_1 + 0x38) <= uVar16 && uVar16 != *(param_1 + 0x38)) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                *(puVar15 + 10) = *(*(param_1 + 0x28) + *(param_1 + 0x30));
                *(param_1 + 0x30) = uVar16;
                piVar11 = geo::codec::Allocator::instance()();
                iVar37 = (**(*piVar11 + 0x10))(piVar11, *(puVar15 + 10) * 0x18, 8);
                puVar15[3] = iVar37;
                if (iVar37 == 0) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                if (*(puVar15 + 10) != 0) {
                    iVar37 = 0;
                    uVar16 = 0;
                    do {
                        uVar23 = geo::codec::readMaterial(VMP4Chapter*, GeoCodecsDaVinciMaterial*, bool)
                                           (param_1, puVar15[3] + iVar37, 1);
                        if ((uVar23 & 1) == 0) {
                            uVar8 = **reloc.__stderrp;
                            goto code_r0x000193931300;
                        }
                        uVar16 = uVar16 + 1;
                        iVar37 = iVar37 + 0x18;
                    } while (uVar16 < *(puVar15 + 10));
                }
                uVar16 = *(param_1 + 0x30) + 1;
                if (*(param_1 + 0x38) <= uVar16 && uVar16 != *(param_1 + 0x38)) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                *(puVar15 + 0xc) = *(*(param_1 + 0x28) + *(param_1 + 0x30));
                *(param_1 + 0x30) = *(param_1 + 0x30) + 1;
                piVar11 = geo::codec::Allocator::instance()();
                iVar37 = (**(*piVar11 + 0x10))(piVar11, *(puVar15 + 0xc) << 4, 8);
                puVar15[4] = iVar37;
                if (iVar37 == 0) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                if (*(puVar15 + 0xc) != '\0') {
                    iVar37 = 0;
                    uVar16 = 0;
                    do {
                        puVar26 = puVar15[4] + iVar37;
                        iVar7 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_1, puVar26);
                        if (iVar7 == 0) {
                            uVar8 = **reloc.__stderrp;
                            goto code_r0x000193931300;
                        }
                        piVar11 = geo::codec::Allocator::instance()();
                        uVar8 = (**(*piVar11 + 0x10))(piVar11, *puVar26, 8);
                        *(puVar26 + 2) = uVar8;
                        memcpy(uVar8, *(param_1 + 0x28) + *(param_1 + 0x30), *puVar26);
                        *(param_1 + 0x30) = *(param_1 + 0x30) + *puVar26;
                        uVar16 = uVar16 + 1;
                        iVar37 = iVar37 + 0x10;
                    } while (uVar16 < *(puVar15 + 0xc));
                }
            }
            else {
                *(piVar11 + 1) = param_6;
                uVar16 = *(param_1 + 0x30);
                uVar23 = *(param_1 + 0x38);
code_r0x000193930c1c:
                uVar27 = uVar16 + 8;
                if (uVar23 <= uVar27 && uVar27 != uVar23) {
                    uVar8 = **reloc.__stderrp;
                    goto code_r0x000193931300;
                }
                *piVar11 = *(*(param_1 + 0x28) + uVar16);
                *(param_1 + 0x30) = uVar27;
                if (*piVar11 != 0) {
                    void std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >::emplace_back<unsigned long long&>(unsigned long long&)
                              (param_2, piVar11);
                }
            }
            uVar16 = *(param_1 + 0x30) + 1;
            if (*(param_1 + 0x38) <= uVar16 && uVar16 != *(param_1 + 0x38)) {
                uVar8 = **reloc.__stderrp;
                goto code_r0x000193931300;
            }
            uVar5 = *(*(param_1 + 0x28) + *(param_1 + 0x30));
            *(param_1 + 0x30) = uVar16;
            piVar11 = operator new(unsigned long)(0x40);
            piVar11[1] = 0;
            piVar11[2] = 0;
            *piVar11 = 0xc00 + 0x1db961000 + 0x10;
            puVar15 = malloc(0x100);
            ppuStack_70 = piVar11 + 3;
            *ppuStack_70 = puVar15;
            piVar11[5] = 0;
            piVar11[6] = 0;
            piVar11[4] = 0;
            *(piVar11 + 0x37) = 0;
            if (puVar15 != NULL) {
                puVar15[0x1d] = 0xffffffffffffffff;
                puVar15[0x1c] = 0xffffffffffffffff;
                puVar15[0x1f] = 0xffffffffffffffff;
                puVar15[0x1e] = 0xffffffffffffffff;
                puVar15[0x19] = 0xffffffffffffffff;
                puVar15[0x18] = 0xffffffffffffffff;
                puVar15[0x1b] = 0xffffffffffffffff;
                puVar15[0x1a] = 0xffffffffffffffff;
                puVar15[0x15] = 0xffffffffffffffff;
                puVar15[0x14] = 0xffffffffffffffff;
                puVar15[0x17] = 0xffffffffffffffff;
                puVar15[0x16] = 0xffffffffffffffff;
                puVar15[0x11] = 0xffffffffffffffff;
                puVar15[0x10] = 0xffffffffffffffff;
                puVar15[0x13] = 0xffffffffffffffff;
                puVar15[0x12] = 0xffffffffffffffff;
                puVar15[0xd] = 0xffffffffffffffff;
                puVar15[0xc] = 0xffffffffffffffff;
                puVar15[0xf] = 0xffffffffffffffff;
                puVar15[0xe] = 0xffffffffffffffff;
                puVar15[9] = 0xffffffffffffffff;
                puVar15[8] = 0xffffffffffffffff;
                puVar15[0xb] = 0xffffffffffffffff;
                puVar15[10] = 0xffffffffffffffff;
                puVar15[5] = 0xffffffffffffffff;
                puVar15[4] = 0xffffffffffffffff;
                puVar15[7] = 0xffffffffffffffff;
                puVar15[6] = 0xffffffffffffffff;
                puVar15[1] = 0xffffffffffffffff;
                *puVar15 = 0xffffffffffffffff;
                puVar15[3] = 0xffffffffffffffff;
                puVar15[2] = 0xffffffffffffffff;
            }
            uVar35 = uVar5;
            piStack_68 = piVar11;
            if (uVar35 != 0) {
                uVar36 = 0;
code_r0x000193930cfc:
                iVar37 = *(param_1 + 0x30);
                uVar23 = *(param_1 + 0x38);
                uVar16 = iVar37 + 2;
                if (uVar16 < uVar23 || uVar16 == uVar23) {
                    puVar2 = *(param_1 + 0x28) + iVar37;
                    uVar6 = *puVar2;
                    *(param_1 + 0x30) = uVar16;
                    uVar16 = iVar37 + 6;
                    if (uVar23 <= uVar16 && uVar16 != uVar23) goto code_r0x000193930f78;
                    uVar4 = *(puVar2 + 1);
                    *(param_1 + 0x30) = uVar16;
                    uVar5 = *(ppuStack_70 + 0x21);
                    uVar16 = uVar5;
                    if (uVar5 == 0) {
                        puVar26 = *ppuStack_70;
code_r0x000193930d7c:
                        *(puVar26 + uVar16 * 2) = uVar6 & 0xffffffff | uVar4 << -0x20 + 0x40 & 0xffffffff00000000;
                        cVar1 = *(ppuStack_70 + 0x21) + '\x01';
                        *(ppuStack_70 + 0x21) = cVar1;
                        qsort(*ppuStack_70, cVar1, 8, 0xfb8 + 0x192f78000);
                    }
                    else {
                        puVar26 = *ppuStack_70;
                        if (uVar5 < 0x20) {
                            uVar23 = 0;
                            puVar31 = puVar26;
                            do {
                                if (*puVar31 == uVar6) goto code_r0x000193930ce8;
                                uVar23 = uVar23 + 1;
                                puVar31 = puVar31 + 2;
                            } while (uVar16 != uVar23);
                            goto code_r0x000193930d7c;
                        }
                        uVar23 = 0;
                        puVar31 = puVar26;
                        do {
                            if (*puVar31 == uVar6) goto code_r0x000193930ce8;
                            uVar23 = uVar23 + 1;
                            puVar31 = puVar31 + 2;
                        } while (uVar16 != uVar23);
                    }
                    goto code_r0x000193930cf0;
                }
code_r0x000193930f78:
                fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                uVar36 = 1;
                uVar35 = 1;
                if (piStack_68 != NULL) goto code_r0x000193931180;
                goto code_r0x000193930964;
            }
code_r0x000193930ddc:
            FeatureStyleAttributesSet::insert(std::__1::shared_ptr<FeatureStyleAttributes> const&)
                      (param_5, &ppuStack_70);
            ppiVar40 = param_5 + 8;
            ppiVar38 = *ppiVar40;
            ppiVar19 = ppiVar40;
            if (ppiVar38 == NULL) {
code_r0x000193930e40:
                std::__1::pair<std::__1::__tree_iterator<std::__1::shared_ptr<FeatureStyleAttributes>, std::__1::__tree_node<std::__1::shared_ptr<FeatureStyleAttributes>, void*>*, long>, bool> std::__1::__tree<std::__1::shared_ptr<FeatureStyleAttributes>, FeatureStyleAttributesSet::FeatureStyleAttributesCompare, std::__1::allocator<std::__1::shared_ptr<FeatureStyleAttributes> > >::__emplace_unique_key_args<std::__1::shared_ptr<FeatureStyleAttributes>, std::__1::shared_ptr<FeatureStyleAttributes> const&>(std::__1::shared_ptr<FeatureStyleAttributes> const&, std::__1::shared_ptr<FeatureStyleAttributes> const&)
                          (param_5, &ppuStack_70, &ppuStack_70);
                ppiVar19 = *(param_5 + 0x20);
                if (ppiVar19 < *(param_5 + 0x28)) {
                    if (ppiVar19 != NULL) {
                        *ppiVar19 = ppuStack_70;
                        ppiVar19[1] = piStack_68;
                        if (piStack_68 != NULL) {
                            tmp_ldXn = piStack_68[1];
                            iVar37 = tmp_ldXn;
                            tmp_stXn = iVar37 + 1;
                            iVar37 = tmp_stXn;
                            piStack_68[1] = iVar37;
                            uVar8 = tmp_ldXn;
                        }
                    }
                    ppiVar19 = ppiVar19 + 2;
                    *(param_5 + 0x20) = ppiVar19;
                }
                else {
                    fcn.1938eda8c(param_5 + 0x18, &ppuStack_70);
                    ppiVar19 = *(param_5 + 0x20);
                }
                uVar16 = (ppiVar19 - *(param_5 + 0x18) >> 4) + -1;
            }
            else {
                do {
                    iVar7 = FeatureStyleAttributesSet::FeatureStyleAttributesCompare::operator()(std::__1::shared_ptr<FeatureStyleAttributes> const&, std::__1::shared_ptr<FeatureStyleAttributes> const&) const
                                      (param_5 + 0x10, ppiVar38 + 4, &ppuStack_70);
                    ppiVar3 = ppiVar38 + 1;
                    if (iVar7 == 0) {
                        ppiVar3 = ppiVar38;
                    }
                    if (iVar7 == 0) {
                        ppiVar19 = ppiVar38;
                    }
                    ppiVar38 = *ppiVar3;
                    ppiVar19 = ppiVar19;
                } while (ppiVar38 != NULL);
                if ((ppiVar19 == ppiVar40) ||
                   (uVar16 = FeatureStyleAttributesSet::FeatureStyleAttributesCompare::operator()(std::__1::shared_ptr<FeatureStyleAttributes> const&, std::__1::shared_ptr<FeatureStyleAttributes> const&) const
                                       (param_5 + 0x10, &ppuStack_70, ppiVar19 + 0x20),  (uVar16 & 1) != 0))
                goto code_r0x000193930e40;
                piVar11 = *(param_5 + 0x18);
                iVar37 = *(param_5 + 0x20) - piVar11;
                if (iVar37 == 0) {
                    uVar16 = 0;
                }
                else {
                    uVar23 = iVar37 >> 4;
                    uVar5 = *(ppuStack_70 + 0x21);
                    if (uVar23 < 2) {
                        uVar23 = 1;
                    }
                    uVar27 = 0;
                    if (uVar5 == 0) {
                        do {
                            uVar16 = uVar27;
                            if (*(*piVar11 + 0x21) == '\0') break;
                            uVar27 = uVar27 + 1;
                            piVar11 = piVar11 + 2;
                            uVar16 = uVar23;
                        } while (uVar23 != uVar27);
                    }
                    else {
                        do {
                            if (uVar5 == *(piVar11[uVar27 * 2] + 0x21)) {
                                puVar31 = *ppuStack_70;
                                puVar26 = *piVar11[uVar27 * 2];
                                if ((*puVar31 == *puVar26) && (puVar31[1] == puVar26[1])) {
                                    uVar24 = 1;
                                    puVar26 = puVar26 + 3;
                                    puVar31 = puVar31 + 3;
                                    do {
                                        uVar16 = uVar27;
                                        if (uVar5 == uVar24) goto code_r0x000193930eb0;
                                        uVar32 = uVar24;
                                        if (puVar31[-1] != puVar26[-1]) break;
                                        uVar35 = *puVar31;
                                        uVar36 = *puVar26;
                                        uVar24 = uVar24 + 1;
                                        puVar26 = puVar26 + 2;
                                        puVar31 = puVar31 + 2;
                                    } while (uVar35 == uVar36);
                                    if (uVar5 <= uVar32) break;
                                }
                            }
                            uVar27 = uVar27 + 1;
                            uVar16 = uVar23;
                        } while (uVar27 != uVar23);
                    }
                }
            }
code_r0x000193930eb0:
            puVar18 = param_4[1];
            if (puVar18 < param_4[2]) {
                if (puVar18 != NULL) {
                    *puVar18 = uVar16;
                }
                uVar36 = 0;
                param_4[1] = puVar18 + 1;
                uVar35 = 0;
                if (piStack_68 != NULL) {
code_r0x000193931180:
                    uVar36 = uVar35;
                    piVar11 = piStack_68;
                    LOAcquire();
                    tmp_ldXn = piStack_68[1];
                    iVar37 = tmp_ldXn;
                    tmp_stXn = iVar37 + -1;
                    iVar37 = tmp_stXn;
                    piStack_68[1] = iVar37;
                    iVar37 = tmp_ldXn;
                    LORelease();
                    if (iVar37 == 0) {
                        (**(*piStack_68 + 0x10))(piStack_68);
                        std::__1::__shared_weak_count::__release_weak()(piVar11);
                    }
                }
            }
            else {
                iVar37 = puVar18 - *param_4 >> 3;
                uVar23 = iVar37 + 1;
                if (uVar23 >> 0x3d != 0) {
                    std::__1::vector<unsigned long, geo::StdAllocator<unsigned long, geo::codec::Allocator> >::__throw_length_error[abi:v160006]() const
                              ();
    // WARNING: Treating indirect jump as call
                    UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x193931338);
                    uVar21 = (*UNRECOVERED_JUMPTABLE)();
                    return uVar21;
                }
                uVar24 = param_4[2] - *param_4;
                uVar27 = uVar24 >> 2;
                if (uVar27 < uVar23 || uVar27 == uVar23) {
                    uVar27 = uVar23;
                }
                if (0x7ffffffffffffff7 < uVar24) {
                    uVar27 = 0x1fffffffffffffff;
                }
                if (uVar27 == 0) {
                    puVar20 = NULL;
                    puVar18 = iVar37 << 3;
                    puVar14 = *param_4;
                    puVar13 = param_4[1];
                    iVar37 = puVar13 - puVar14;
                    puVar30 = puVar18;
                    if (puVar13 - puVar14 != 0) goto code_r0x000193931020;
                }
                else {
                    iVar22 = (**(*param_4[3] + 0x10))(param_4[3], uVar27 << 3, 8);
                    puVar18 = iVar22 + iVar37 * 8;
                    puVar20 = iVar22 + uVar27 * 8;
                    if (iVar22 != 0) {
                        *puVar18 = uVar16;
                    }
                    puVar14 = *param_4;
                    puVar13 = param_4[1];
                    iVar37 = puVar13 - puVar14;
                    puVar30 = puVar18;
                    if (iVar37 != 0) {
code_r0x000193931020:
                        if (iVar37 + -8 < 0x38) {
                            puVar30 = puVar18;
                        }
                        else {
                            puVar30 = puVar18;
                            if (0x3f < puVar13 - puVar18) {
                                uVar16 = (iVar37 + -8 >> 3) + 1;
                                uVar27 = uVar16 & 0x3ffffffffffffff8;
                                puVar30 = puVar18 + -uVar27;
                                puVar15 = puVar13 + -0x20;
                                puVar34 = puVar18 + -0x20;
                                uVar23 = uVar27;
                                do {
                                    uVar42 = *puVar15;
                                    uVar41 = puVar15[3];
                                    uVar8 = puVar15[2];
                                    uVar46 = puVar15[-3];
                                    uVar45 = puVar15[-4];
                                    uVar44 = puVar15[-1];
                                    uVar43 = puVar15[-2];
                                    puVar34[1] = puVar15[1];
                                    *puVar34 = uVar42;
                                    puVar34[3] = uVar41;
                                    puVar34[2] = uVar8;
                                    puVar34[-3] = uVar46;
                                    puVar34[-4] = uVar45;
                                    puVar34[-1] = uVar44;
                                    puVar34[-2] = uVar43;
                                    puVar15 = puVar15 + -0x40;
                                    puVar34 = puVar34 + -0x40;
                                    uVar23 = uVar23 + -8;
                                } while (uVar23 != 0);
                                puVar13 = puVar13 + -uVar27;
                                if (uVar16 == uVar27) goto code_r0x000193931134;
                            }
                        }
                        do {
                            puVar13 = puVar13 + -1;
                            puVar30 = puVar30 + -1;
                            *puVar30 = *puVar13;
                        } while (puVar13 != puVar14);
                    }
                }
code_r0x000193931134:
                *param_4 = puVar30;
                param_4[1] = puVar18 + 1;
                puVar18 = param_4[2];
                param_4[2] = puVar20;
                if (puVar14 != NULL) {
                    (**(*param_4[3] + 0x28))(param_4[3], puVar14, puVar18 - puVar14);
                }
                uVar36 = 0;
                uVar35 = 0;
                if (piStack_68 != NULL) goto code_r0x000193931180;
            }
code_r0x000193930964:
            uVar21 = uVar21 + 1;
        } while ((uVar36 | uVar21 == uVar39) == 0);
        uVar21 = uVar36 ^ 1;
    }
    return uVar21;
code_r0x000193930ce8:
    puVar26[(uVar23 & 0xffffffff) * 2 + 1] = uVar4;
code_r0x000193930cf0:
    uVar36 = uVar36 + 1;
    if (uVar35 <= uVar36) goto code_r0x000193930ddc;
    goto code_r0x000193930cfc;
}
