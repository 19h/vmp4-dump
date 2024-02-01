
ulong geo::codec::_readTransitMZROverride(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint8_t uVar1;
    int32_t iVar2;
    char *pcVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint32_t uVar21;
    float fVar22;
    uint32_t uStack_ac;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t *piStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uchar auStack_80 [8];
    int64_t *piStack_78;
    
    uVar8 = param_1[1];
    if (uVar8 == 0) {
        return 1;
    }
    uVar7 = 0;
    while (*(*param_1 + uVar7 * 0x10) != 0x70) {
        uVar7 = uVar7 + 1;
        if (uVar8 < uVar7 || uVar8 == uVar7) {
            return 1;
        }
    }
    pcVar3 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                       (param_1, uVar7, 0x70, *param_2 + 0x778);
    if (pcVar3 == NULL) {
        return 1;
    }
    iStack_a8 = 0x2f1 + 0x193b8a000;
    iStack_a0 = *param_2;
    piStack_98 = param_2[1];
    if (piStack_98 != NULL) {
        tmp_ldXn = piStack_98[1];
        iVar20 = tmp_ldXn;
        tmp_stXn = iVar20 + 1;
        iVar20 = tmp_stXn;
        piStack_98[1] = iVar20;
        uVar4 = tmp_ldXn;
    }
    iStack_90 = std::__1::chrono::steady_clock::now()();
    uVar8 = *(pcVar3 + 0x30);
    iVar20 = *(pcVar3 + 0x38) - uVar8;
    if (*(pcVar3 + 0x38) < uVar8) {
        uVar7 = *(pcVar3 + 0x18);
        uVar8 = *(pcVar3 + 0x10) * 8;
        if (uVar8 <= uVar7 + 5 && uVar7 + 5 != uVar8) goto code_r0x00019390bc48;
code_r0x00019390bbdc:
        uVar12 = 0;
        piVar5 = pcVar3 + 8;
        iVar20 = *piVar5;
        uVar9 = 5;
        do {
            uVar17 = 8 - (uVar7 & 7);
            uVar11 = uVar9;
            if (uVar17 <= uVar9) {
                uVar11 = uVar17;
            }
            uVar13 = uVar11;
            uVar12 = *(iVar20 + (uVar7 >> 3)) >> ((8 - (uVar7 & 7)) - uVar13 & 0x1f) &
                     (-1 << (uVar13 & 0x1f) ^ 0xffffffff) | uVar12 << (uVar13 & 0x1f);
            uVar7 = uVar11 + uVar7;
            *(pcVar3 + 0x18) = uVar7;
            uVar9 = uVar9 - uVar11;
        } while (uVar9 != 0);
        uVar9 = uVar12 + 1;
        if (uVar8 <= uVar7 + uVar9 && uVar7 + uVar9 != uVar8) goto code_r0x00019390bc48;
        uVar13 = 0;
        if (uVar12 + 1 != 0) {
            do {
                uVar17 = 8 - (uVar7 & 7);
                uVar11 = uVar9;
                if (uVar17 <= uVar9) {
                    uVar11 = uVar17;
                }
                uVar12 = uVar11;
                uVar13 = *(iVar20 + (uVar7 >> 3)) >> ((8 - (uVar7 & 7)) - uVar12 & 0x1f) &
                         (-1 << (uVar12 & 0x1f) ^ 0xffffffff) | uVar13 << (uVar12 & 0x1f);
                uVar17 = uVar7;
                uVar7 = uVar11 + uVar17;
                *(pcVar3 + 0x18) = uVar11 + uVar17;
                uVar9 = uVar9 - uVar11;
            } while (uVar9 != 0);
        }
        if (uVar8 <= uVar7 + 5 && uVar7 + 5 != uVar8) {
            uVar4 = **reloc.__stderrp;
            goto code_r0x00019390bc58;
        }
        uVar12 = 0;
        uVar9 = 5;
        do {
            uVar17 = 8 - (uVar7 & 7);
            uVar11 = uVar9;
            if (uVar17 <= uVar9) {
                uVar11 = uVar17;
            }
            uVar14 = uVar11;
            uVar12 = *(iVar20 + (uVar7 >> 3)) >> ((8 - (uVar7 & 7)) - uVar14 & 0x1f) &
                     (-1 << (uVar14 & 0x1f) ^ 0xffffffff) | uVar12 << (uVar14 & 0x1f);
            uVar7 = uVar11 + uVar7;
            *(pcVar3 + 0x18) = uVar7;
            uVar9 = uVar9 - uVar11;
        } while (uVar9 != 0);
        if (uVar8 <= uVar7 + 5 && uVar7 + 5 != uVar8) {
            uVar4 = **reloc.__stderrp;
            goto code_r0x00019390bc58;
        }
        uVar14 = 0;
        uVar9 = 5;
        do {
            uVar17 = 8 - (uVar7 & 7);
            uVar11 = uVar9;
            if (uVar17 <= uVar9) {
                uVar11 = uVar17;
            }
            uVar15 = uVar11;
            uVar14 = *(iVar20 + (uVar7 >> 3)) >> ((8 - (uVar7 & 7)) - uVar15 & 0x1f) &
                     (-1 << (uVar15 & 0x1f) ^ 0xffffffff) | uVar14 << (uVar15 & 0x1f);
            uVar7 = uVar11 + uVar7;
            *(pcVar3 + 0x18) = uVar7;
            uVar9 = uVar9 - uVar11;
        } while (uVar9 != 0);
        if (uVar8 <= uVar7 + 5 && uVar7 + 5 != uVar8) {
code_r0x00019390bf58:
            uVar4 = **reloc.__stderrp;
            goto code_r0x00019390bc58;
        }
        uVar15 = 0;
        uVar14 = uVar14 + 1;
        uVar9 = 5;
        do {
            uVar17 = 8 - (uVar7 & 7);
            uVar11 = uVar9;
            if (uVar17 <= uVar9) {
                uVar11 = uVar17;
            }
            uVar10 = uVar11;
            uVar15 = *(iVar20 + (uVar7 >> 3)) >> ((8 - (uVar7 & 7)) - uVar10 & 0x1f) &
                     (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar15 << (uVar10 & 0x1f);
            uVar7 = uVar11 + uVar7;
            *(pcVar3 + 0x18) = uVar7;
            uVar9 = uVar9 - uVar11;
        } while (uVar9 != 0);
        uVar9 = uVar15 + 1;
        if (uVar8 <= uVar7 + uVar9 && uVar7 + uVar9 != uVar8) goto code_r0x00019390bf58;
        if (uVar15 + 1 == 0) {
code_r0x00019390c04c:
            uVar4 = **reloc.__stderrp;
            goto code_r0x00019390bc58;
        }
        uVar15 = 0;
        do {
            uVar17 = 8 - (uVar7 & 7);
            uVar11 = uVar9;
            if (uVar17 <= uVar9) {
                uVar11 = uVar17;
            }
            uVar10 = uVar11;
            uVar15 = *(iVar20 + (uVar7 >> 3)) >> ((8 - (uVar7 & 7)) - uVar10 & 0x1f) &
                     (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar15 << (uVar10 & 0x1f);
            uVar7 = uVar11 + uVar7;
            *(pcVar3 + 0x18) = uVar7;
            uVar9 = uVar9 - uVar11;
        } while (uVar9 != 0);
        if (uVar15 == 0) goto code_r0x00019390c04c;
        if (uVar8 <= uVar7 + 5 && uVar7 + 5 != uVar8) {
code_r0x00019390c038:
            uVar4 = **reloc.__stderrp;
            goto code_r0x00019390bc58;
        }
        uVar10 = 0;
        uVar9 = 5;
        do {
            uVar17 = 8 - (uVar7 & 7);
            uVar11 = uVar9;
            if (uVar17 <= uVar9) {
                uVar11 = uVar17;
            }
            uVar16 = uVar11;
            uVar10 = *(iVar20 + (uVar7 >> 3)) >> ((8 - (uVar7 & 7)) - uVar16 & 0x1f) &
                     (-1 << (uVar16 & 0x1f) ^ 0xffffffff) | uVar10 << (uVar16 & 0x1f);
            uVar7 = uVar11 + uVar7;
            *(pcVar3 + 0x18) = uVar7;
            uVar9 = uVar9 - uVar11;
        } while (uVar9 != 0);
        uVar9 = uVar10 + 1;
        if (uVar8 <= uVar7 + uVar9 && uVar7 + uVar9 != uVar8) goto code_r0x00019390c038;
        uVar16 = 0;
        if (uVar10 + 1 != 0) {
            do {
                uVar11 = 8 - (uVar7 & 7);
                uVar8 = uVar9;
                if (uVar11 <= uVar9) {
                    uVar8 = uVar11;
                }
                uVar10 = uVar8;
                uVar16 = *(iVar20 + (uVar7 >> 3)) >> ((8 - (uVar7 & 7)) - uVar10 & 0x1f) &
                         (-1 << (uVar10 & 0x1f) ^ 0xffffffff) | uVar16 << (uVar10 & 0x1f);
                uVar11 = uVar7;
                uVar7 = uVar8 + uVar11;
                *(pcVar3 + 0x18) = uVar8 + uVar11;
                uVar9 = uVar9 - uVar8;
            } while (uVar9 != 0);
        }
        uStack_ac = 0;
        uVar8 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar5, &uStack_ac, 5);
        if ((uVar8 & 1) == 0) {
            uVar4 = **reloc.__stderrp;
            goto code_r0x00019390bc58;
        }
        uVar10 = uStack_ac + 1;
        uStack_ac = uVar10;
        if (uVar13 != 0) {
            uVar21 = 0;
            do {
                uVar9 = *(pcVar3 + 0x18);
                uVar8 = uVar9 + 1;
                uVar7 = *(pcVar3 + 0x10) * 8;
                if (uVar7 <= uVar8 && uVar8 != uVar7) {
                    uVar4 = **reloc.__stderrp;
                    goto code_r0x00019390bc58;
                }
                uVar1 = *(*(pcVar3 + 8) + (uVar9 >> 3));
                *(pcVar3 + 0x18) = uVar8;
                if ((uVar1 >> (7 & (uVar9 ^ 0xffffffff)) & 1) == 0) {
                    piStack_78 = (piStack_78 >> 0x20) << 0x20;
                    iVar2 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar5, &piStack_78, uVar12 + 1);
                    if (iVar2 != 0) {
                        iVar20 = *(*param_2 + 0x1f8);
                        if (piStack_78 < *(*param_2 + 0x200) - iVar20 >> 8) {
                            iVar20 = iVar20 + piStack_78 * 0x100;
                            uVar8 = *(pcVar3 + 0x18);
                            uVar7 = *(pcVar3 + 0x10) << 3;
                            goto code_r0x00019390c1b8;
                        }
                    }
                    uVar4 = **reloc.__stderrp;
                    goto code_r0x00019390bc58;
                }
                uVar9 = uVar8 + uVar14;
                if (uVar7 <= uVar9 && uVar9 != uVar7) {
                    uVar4 = **reloc.__stderrp;
                    goto code_r0x00019390bc58;
                }
                uVar9 = uVar14;
                if (uVar14 == 0) {
                    iVar20 = 0;
                }
                else {
                    do {
                        uVar17 = 8 - (uVar8 & 7);
                        uVar11 = uVar9;
                        if (uVar17 <= uVar9) {
                            uVar11 = uVar17;
                        }
                        uVar8 = uVar11 + uVar8;
                        uVar9 = uVar9 - uVar11;
                        uVar9 = uVar9;
                    } while (uVar9 != 0);
                    iVar20 = 0;
                    *(pcVar3 + 0x18) = uVar8;
                }
code_r0x00019390c1b8:
                uVar9 = uVar8 + 1;
                if (uVar7 <= uVar9 && uVar9 != uVar7) {
                    uVar4 = **reloc.__stderrp;
                    goto code_r0x00019390bc58;
                }
                uVar1 = *(*(pcVar3 + 8) + (uVar8 >> 3));
                *(pcVar3 + 0x18) = uVar9;
                if ((uVar1 >> (7 & (uVar8 ^ 0xffffffff)) & 1) == 0) {
                    fVar22 = 100.0;
                }
                else {
                    piStack_78 = (piStack_78 >> 0x20) << 0x20;
                    iVar2 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar5, &piStack_78, uVar10);
                    if (iVar2 == 0) {
                        uVar4 = **reloc.__stderrp;
                        goto code_r0x00019390bc58;
                    }
                    fVar22 = (piStack_78 + uVar16) * (1.0 / uVar15);
                }
                if (iVar20 != 0) {
                    *(iVar20 + 200) = fVar22;
                }
                uVar21 = uVar21 + 1;
            } while (uVar21 != uVar13);
        }
        iVar20 = *(pcVar3 + 0x30) + (*(pcVar3 + 0x18) >> 3);
        if ((*(pcVar3 + 0x18) & 7) != 0) {
            iVar20 = iVar20 + 1;
        }
        *(pcVar3 + 0x30) = iVar20;
        pcVar3[0x20] = '\0';
        uVar4 = 1;
        if (*pcVar3 == '\0') goto code_r0x00019390bcac;
    }
    else {
        uVar7 = 0;
        pcVar3[0x20] = '\x01';
        *(pcVar3 + 0x10) = iVar20;
        *(pcVar3 + 0x18) = 0;
        *(pcVar3 + 8) = *(pcVar3 + 0x28) + uVar8;
        uVar8 = iVar20 * 8;
        if (5 < uVar8 || uVar8 == 5) goto code_r0x00019390bbdc;
code_r0x00019390bc48:
        uVar4 = **reloc.__stderrp;
code_r0x00019390bc58:
        fprintf(uVar4, 0x8ff + 0x193b8a000);
        uVar4 = 0;
        if (*pcVar3 == '\0') goto code_r0x00019390bcac;
    }
    piVar5 = geo::codec::Allocator::instance()();
    (**(*piVar5 + 0x28))(piVar5, *(pcVar3 + 0x28), 0);
code_r0x00019390bcac:
    piVar5 = geo::codec::Allocator::instance()();
    (**(*piVar5 + 0x28))(piVar5, pcVar3, 0);
    iVar20 = iStack_a8;
    iVar19 = iStack_a0;
    iVar6 = std::__1::chrono::steady_clock::now()();
    iVar18 = iStack_90;
    iStack_88 = iVar20;
    if (iVar20 != 0) {
        piStack_78 = &iStack_88;
        iVar20 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iVar19 + 0x778, &iStack_88, 0x74c + 0x193af9000, &piStack_78, auStack_80);
        iVar6 = SUB168(SEXT816(iVar6 - iVar18) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar20 + 0x20) = ((iVar6 >> 7) - (iVar6 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    piVar5 = piStack_98;
    if (piStack_98 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_98[1];
        iVar20 = tmp_ldXn;
        tmp_stXn = iVar20 + -1;
        iVar20 = tmp_stXn;
        piStack_98[1] = iVar20;
        iVar20 = tmp_ldXn;
        LORelease();
        if (iVar20 == 0) {
            (**(*piVar5 + 0x10))(piVar5);
            std::__1::__shared_weak_count::__release_weak()(piVar5);
            return uVar4;
        }
        return uVar4;
    }
    return uVar4;
}
