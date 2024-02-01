
uint64_t geo::codec::_readRegionMetadata(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                   (int64_t *param_1, int64_t *param_2)

{
    ulong *puVar1;
    uint uVar2;
    uint uVar3;
    code *UNRECOVERED_JUMPTABLE;
    int32_t iVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *puVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    int64_t *piVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    int64_t iVar19;
    int64_t *piVar20;
    int64_t **ppiVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    int64_t iVar24;
    int64_t aiStack_e0 [3];
    int64_t **ppiStack_c8;
    uint32_t uStack_bc;
    int64_t aiStack_b8 [3];
    int64_t *piStack_a0;
    int64_t *piStack_98;
    int64_t *piStack_90;
    int64_t *piStack_88;
    ulong uStack_7c;
    ulong uStack_74;
    uint32_t uStack_6c;
    
    uVar11 = param_1[1];
    if (uVar11 != 0) {
        uVar8 = 0;
        do {
            if (*(*param_1 + uVar8 * 0x10) == 0xa8) {
                pcVar5 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar8, 0xa8, *param_2 + 0x778);
                if (pcVar5 != NULL) {
                    uStack_74 = 0;
                    uStack_7c = 0;
                    piStack_98 = NULL;
                    piStack_90 = NULL;
                    piStack_88 = NULL;
                    aiStack_b8[0] = 0;
                    aiStack_b8[1] = 0;
                    aiStack_b8[2] = 0;
                    piStack_a0 = geo::codec::Allocator::instance()();
                    uVar11 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x70);
                    if ((uVar11 & 1) == 0) {
                        uVar7 = **reloc.__stderrp;
                        goto code_r0x0001939238a8;
                    }
                    uVar11 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x74);
                    if ((uVar11 & 1) == 0) {
                        uVar7 = **reloc.__stderrp;
                        goto code_r0x0001939238a8;
                    }
                    uVar11 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x78);
                    if ((uVar11 & 1) == 0) {
                        uVar7 = **reloc.__stderrp;
                        goto code_r0x0001939238a8;
                    }
                    uVar11 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x7c);
                    if ((uVar11 & 1) == 0) {
                        uVar7 = **reloc.__stderrp;
                        goto code_r0x0001939238a8;
                    }
                    uVar18 = uStack_7c;
                    if (uVar18 == 0) goto code_r0x0001939239f0;
                    piStack_98 = operator new(unsigned long)(uVar18 * 0x18);
                    uVar11 = 0;
                    piStack_88 = piStack_98 + uVar18 * 3;
                    uStack_bc = 0;
                    piStack_90 = piStack_98;
                    goto code_r0x000193923578;
                }
                break;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 <= uVar11 && uVar11 != uVar8);
    }
    uVar18 = 1;
    goto code_r0x00019392382c;
code_r0x000193923578:
    uVar8 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, &uStack_bc);
    if ((uVar8 & 1) == 0) {
        uVar7 = **reloc.__stderrp;
code_r0x0001939238a8:
        fprintf(uVar7, 0x8ff + 0x193b8a000);
        goto code_r0x0001939238b4;
    }
    aiStack_e0[1] = 0;
    aiStack_e0[0] = 0;
    ppiStack_c8 = NULL;
    aiStack_e0[2] = 0;
    uVar8 = uStack_bc;
    if (uStack_bc == 0) {
        iVar6 = 0;
        iVar24 = 0;
        iVar19 = 0;
    }
    else {
        iVar24 = uVar8 << 3;
        iVar6 = operator new(unsigned long)(iVar24);
        iVar19 = iVar6 + uVar8 * 8;
        bzero(iVar6, iVar24);
        iVar24 = iVar6 + iVar24;
    }
    uVar2 = uStack_74;
    uVar3 = uStack_74._4_4_;
    uStack_6c = 0;
    iVar4 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar5, *0x8 + -0x6c);
    if (iVar4 == 0) {
code_r0x00019392361c:
        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
        if (iVar6 != 0) {
            operator delete(void*)(iVar6);
        }
        iVar19 = 0;
        iVar4 = 6;
    }
    else {
        iVar12 = *(pcVar5 + 0x30);
        uVar16 = iVar12 + uStack_6c;
        if (*(pcVar5 + 0x38) <= uVar16 && uVar16 != *(pcVar5 + 0x38)) goto code_r0x00019392361c;
        *(pcVar5 + 0x30) = uVar16;
        iVar4 = mgcl::ints::IntDecompressor<unsigned long long>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, unsigned long long*)
                          (aiStack_e0, *(pcVar5 + 0x28) + iVar12, uStack_6c, uVar3, uVar2, uVar8, iVar6);
        if (iVar4 != 0) goto code_r0x00019392361c;
        piVar22 = piStack_90;
        if (piVar22 < piStack_88) {
            iVar4 = 0;
            *piVar22 = iVar6;
            piStack_90[1] = iVar24;
            piStack_90[2] = iVar19;
            piStack_90 = piStack_90 + 3;
            iVar19 = 1;
        }
        else {
            piVar15 = piStack_98;
            iVar12 = (piVar22 - piVar15 >> 3) * (0xaaaaaaaaaaaa0000 | 0xaaab);
            uVar8 = iVar12 + 1;
            if ((0xaaaaaaaaaaaa | 0xaaa000000000000) <= uVar8 && uVar8 != (0xaaaaaaaaaaaa | 0xaaa000000000000)) {
                std::__1::vector<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >, std::__1::allocator<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > >::__throw_length_error[abi:v160006]() const
                          ();
code_r0x000193923bf8:
    // WARNING: Treating indirect jump as call
                UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x193923bfc);
                uVar11 = (*UNRECOVERED_JUMPTABLE)();
                return uVar11;
            }
            uVar17 = (piStack_88 - piVar15 >> 3) * (0xaaaaaaaaaaaa0000 | 0xaaab);
            uVar16 = uVar17 * 2;
            if (uVar16 < uVar8 || uVar16 - uVar8 == 0) {
                uVar16 = uVar8;
            }
            uVar8 = 0xaaaaaaaaaaaa | 0xaaa000000000000;
            if ((0x555555555555 | 0x555000000000000) <= uVar17) {
                uVar16 = uVar8;
            }
            if (uVar8 <= uVar16 && uVar16 != uVar8) {
                std::__throw_bad_array_new_length[abi:v160006]()();
                goto code_r0x000193923bf8;
            }
            iVar9 = operator new(unsigned long)((uVar16 + (uVar16 << 1)) * 8);
            piVar13 = iVar9 + iVar12 * 0x18;
            piVar13[1] = 0;
            piVar13[2] = 0;
            piStack_88 = iVar9 + uVar16 * 0x18;
            *piVar13 = iVar6;
            iVar9 = iVar9 + (piVar22 - piVar15);
            *(iVar9 + 8) = iVar24;
            *(iVar9 + 0x10) = iVar19;
            piVar20 = piVar13 + 3;
            if (piVar22 == piVar15) {
                piStack_98 = piVar13;
                piStack_90 = piVar20;
            }
            else {
                do {
                    piVar23 = piVar22 + -3;
                    piVar14 = piVar13 + -3;
                    *piVar14 = *piVar23;
                    piVar13[-2] = piVar22[-2];
                    piVar13[-1] = piVar22[-1];
                    *piVar23 = 0;
                    piVar22[-2] = 0;
                    piVar22[-1] = 0;
                    piVar13 = piVar14;
                    piVar22 = piVar23;
                } while (piVar23 != piVar15);
                piVar22 = piStack_98;
                piVar15 = piStack_90;
                piStack_98 = piVar14;
                piStack_90 = piVar20;
                if (piVar15 != piVar22) {
                    do {
                        piVar20 = piVar15 + -3;
                        if (*piVar20 != 0) {
                            piVar15[-2] = *piVar20;
                            operator delete(void*)();
                        }
                        piVar15 = piVar20;
                    } while (piVar20 != piVar22);
                }
            }
            if (piVar22 != NULL) {
                operator delete(void*)(piVar22);
            }
            iVar4 = 0;
            iVar19 = 1;
        }
    }
    ppiVar21 = ppiStack_c8;
    ppiStack_c8 = NULL;
    if (ppiVar21 != NULL) {
        piVar22 = *ppiVar21;
        *ppiVar21 = NULL;
        if (piVar22 != NULL) {
            iVar24 = *piVar22;
            *piVar22 = 0;
            if (iVar24 != 0) {
                if (*(iVar24 + 0x68) != 0) {
                    *(iVar24 + 0x70) = *(iVar24 + 0x68);
                    operator delete(void*)();
                }
                if (*(iVar24 + 0x50) != 0) {
                    *(iVar24 + 0x58) = *(iVar24 + 0x50);
                    operator delete(void*)();
                }
                operator delete(void*)(iVar24);
            }
            operator delete(void*)(piVar22);
        }
        operator delete(void*)(ppiVar21);
    }
    if (aiStack_e0[0] != 0) {
        aiStack_e0[1] = aiStack_e0[0];
        operator delete(void*)();
    }
    if (iVar19 != 0) goto code_r0x0001939236c8;
    if (iVar4 != 0) {
        if (iVar4 != 6) goto code_r0x000193923920;
        goto code_r0x0001939238b4;
    }
    goto code_r0x0001939239f0;
code_r0x0001939236c8:
    uVar11 = uVar11 + 1;
    if (uStack_7c <= uVar11) goto code_r0x0001939239f0;
    goto code_r0x000193923578;
code_r0x0001939239f0:
    uVar11 = uStack_7c._4_4_;
    if (uStack_7c._4_4_ == 0) {
        uVar11 = 0;
        iVar19 = 0;
        iVar24 = 0;
    }
    else {
        iVar24 = uVar11 << 3;
        iVar19 = operator new(unsigned long)(iVar24);
        bzero(iVar19, iVar24);
        iVar24 = iVar19 + iVar24;
    }
    if (uVar11 != iVar24 - iVar19 >> 3) {
        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
        iVar4 = 6;
    }
    else {
        aiStack_e0[1] = 0;
        aiStack_e0[0] = 0;
        ppiStack_c8 = NULL;
        aiStack_e0[2] = 0;
        iVar4 = bool geo::codec::decodeIntCompressorArray<unsigned long long>(VMP4Chapter*, mgcl::ints::IntDecompressor<unsigned long long>*, unsigned int, unsigned int, unsigned long, unsigned long long*)
                          (pcVar5, aiStack_e0, uStack_74._4_4_, uStack_74, uVar11, iVar19);
        if (iVar4 == 0) {
code_r0x000193923b7c:
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            iVar4 = 6;
        }
        else {
            std::__1::vector<GeoCodecsMultiPolygonFeature, geo::StdAllocator<GeoCodecsMultiPolygonFeature, geo::codec::Allocator> >::resize(unsigned long)
                      (aiStack_b8, uStack_7c._4_4_);
            uVar11 = aiStack_b8[1] - aiStack_b8[0] >> 7;
            if (uVar11 != uStack_7c._4_4_) goto code_r0x000193923b7c;
            if (uStack_7c._4_4_ != 0) {
                if (uStack_7c != 0) {
                    uVar8 = 0;
                    iVar12 = 0;
                    iVar24 = 0;
                    iVar6 = 0;
                    do {
                        uVar16 = 0;
                        uVar17 = *(iVar19 + uVar8 * 8);
                        puVar1 = aiStack_b8[0] + uVar8 * 0x80;
                        do {
                            if ((uVar17 & 1 << (uVar16 & 0x1f)) != 0) {
                                if (uVar16 == 0) {
                                    iVar9 = iVar6;
                                    iVar6 = iVar6 + 1;
                                    piVar22 = piStack_98;
                                    puVar10 = puVar1;
                                }
                                else if (uVar16 == 1) {
                                    iVar9 = iVar24;
                                    iVar24 = iVar24 + 1;
                                    piVar22 = piStack_98 + 3;
                                    puVar10 = puVar1 + 8;
                                }
                                else {
                                    if (uVar16 != 2) goto code_r0x000193923ae8;
                                    iVar9 = iVar12;
                                    puVar10 = puVar1 + 0x10;
                                    iVar12 = iVar12 + 1;
                                    piVar22 = piStack_98 + 6;
                                }
                                *puVar10 = *(*piVar22 + iVar9 * 8);
                            }
code_r0x000193923ae8:
                            uVar16 = uVar16 + 1;
                        } while (uStack_7c != uVar16);
                        uVar8 = uVar8 + 1;
                    } while (uVar8 != uVar11);
                }
            }
            iVar4 = 0;
        }
        mgcl::ints::IntDecompressor<unsigned long long>::~IntDecompressor()(aiStack_e0);
    }
    if (iVar19 != 0) {
        operator delete(void*)(iVar19);
    }
    if (iVar4 == 6) {
code_r0x0001939238b4:
        iVar19 = 0;
        if (*pcVar5 != '\0') {
code_r0x0001939238c0:
            piVar22 = geo::codec::Allocator::instance()();
            (**(*piVar22 + 0x28))(piVar22, *(pcVar5 + 0x28), 0);
        }
code_r0x0001939238f0:
        piVar22 = geo::codec::Allocator::instance()();
        (**(*piVar22 + 0x28))(piVar22, pcVar5, 0);
    }
    else if (iVar4 == 0) {
        std::__1::vector<GeoCodecsMultiPolygonFeature, geo::StdAllocator<GeoCodecsMultiPolygonFeature, geo::codec::Allocator> >::operator=[abi:v160006](std::__1::vector<GeoCodecsMultiPolygonFeature, geo::StdAllocator<GeoCodecsMultiPolygonFeature, geo::codec::Allocator> >&&)
                  (*param_2 + 0xc20, aiStack_b8);
        iVar19 = 1;
        if (*pcVar5 != '\0') goto code_r0x0001939238c0;
        goto code_r0x0001939238f0;
    }
code_r0x000193923920:
    uVar18 = iVar19;
    iVar19 = aiStack_b8[0];
    if (iVar19 != 0) {
        iVar24 = aiStack_b8[1];
        if (iVar24 != iVar19) {
            do {
                iVar24 = GeoCodecsMultiPolygonFeature::~GeoCodecsMultiPolygonFeature()(iVar24 + -0x80);
            } while (iVar24 != iVar19);
        }
        (**(*piStack_a0 + 0x28))(piStack_a0, iVar19, aiStack_b8[2] - iVar19);
    }
    piVar22 = piStack_98;
    if (piVar22 != NULL) {
        piVar15 = piStack_90;
        if (piVar15 != piVar22) {
            do {
                piVar20 = piVar15 + -3;
                if (*piVar20 != 0) {
                    piVar15[-2] = *piVar20;
                    operator delete(void*)();
                }
                piVar15 = piVar20;
            } while (piVar20 != piVar22);
        }
        operator delete(void*)(piStack_98);
    }
code_r0x00019392382c:
    return uVar18 & 1;
}
