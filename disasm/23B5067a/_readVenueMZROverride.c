
ulong geo::codec::_readVenueMZROverride(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char *pcVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t *piVar14;
    int64_t iVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong uVar19;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t *piStack_48;
    
    uVar13 = param_1[1];
    if (uVar13 == 0) {
        return 1;
    }
    uVar10 = 0;
    while (*(*param_1 + uVar10 * 0x10) != 0x88) {
        uVar10 = uVar10 + 1;
        if (uVar13 < uVar10 || uVar13 == uVar10) {
            return 1;
        }
    }
    pcVar4 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                       (param_1, uVar10, 0x88, *param_2 + 0x778);
    if (pcVar4 == NULL) {
        return 1;
    }
    iVar15 = *param_2;
    piVar14 = param_2[1];
    if (piVar14 != NULL) {
        tmp_ldXn = piVar14[1];
        iVar8 = tmp_ldXn;
        tmp_stXn = iVar8 + 1;
        iVar8 = tmp_stXn;
        piVar14[1] = iVar8;
        uVar19 = tmp_ldXn;
    }
    iVar5 = std::__1::chrono::steady_clock::now()();
    uVar13 = *(pcVar4 + 0x30);
    iVar8 = *(pcVar4 + 0x38) - uVar13;
    if (*(pcVar4 + 0x38) < uVar13) {
        uVar10 = *(pcVar4 + 0x18);
        uVar16 = *(pcVar4 + 0x10) * 8;
        if (uVar16 <= uVar10 + 5 && uVar10 + 5 != uVar16) goto code_r0x00019390c458;
code_r0x00019390c3ec:
        uVar3 = 0;
        iVar8 = *(pcVar4 + 8);
        uVar17 = 5;
        do {
            uVar6 = 8 - (uVar10 & 7);
            uVar11 = uVar17;
            if (uVar6 <= uVar17) {
                uVar11 = uVar6;
            }
            uVar2 = uVar11;
            uVar3 = *(iVar8 + (uVar10 >> 3)) >> ((8 - (uVar10 & 7)) - uVar2 & 0x1f) &
                    (-1 << (uVar2 & 0x1f) ^ 0xffffffff) | uVar3 << (uVar2 & 0x1f);
            uVar10 = uVar11 + uVar10;
            *(pcVar4 + 0x18) = uVar10;
            uVar17 = uVar17 - uVar11;
        } while (uVar17 != 0);
        uVar17 = uVar3 + 1;
        if (uVar16 <= uVar10 + uVar17 && uVar10 + uVar17 != uVar16) goto code_r0x00019390c458;
        uVar2 = 0;
        if (uVar3 + 1 != 0) {
            do {
                uVar6 = 8 - (uVar10 & 7);
                uVar11 = uVar17;
                if (uVar6 <= uVar17) {
                    uVar11 = uVar6;
                }
                uVar3 = uVar11;
                uVar2 = *(iVar8 + (uVar10 >> 3)) >> ((8 - (uVar10 & 7)) - uVar3 & 0x1f) &
                        (-1 << (uVar3 & 0x1f) ^ 0xffffffff) | uVar2 << (uVar3 & 0x1f);
                uVar6 = uVar10;
                uVar10 = uVar11 + uVar6;
                *(pcVar4 + 0x18) = uVar11 + uVar6;
                uVar17 = uVar17 - uVar11;
            } while (uVar17 != 0);
        }
        if (uVar16 <= uVar10 + 5 && uVar10 + 5 != uVar16) goto code_r0x00019390c458;
        uVar3 = 0;
        uVar17 = 5;
        do {
            uVar6 = 8 - (uVar10 & 7);
            uVar11 = uVar17;
            if (uVar6 <= uVar17) {
                uVar11 = uVar6;
            }
            uVar9 = uVar11;
            uVar3 = *(iVar8 + (uVar10 >> 3)) >> ((8 - (uVar10 & 7)) - uVar9 & 0x1f) &
                    (-1 << (uVar9 & 0x1f) ^ 0xffffffffU) | uVar3 << (uVar9 & 0x1f);
            uVar10 = uVar11 + uVar10;
            *(pcVar4 + 0x18) = uVar10;
            uVar17 = uVar17 - uVar11;
        } while (uVar17 != 0);
        if (uVar2 != 0) {
            iVar18 = *param_2;
            uVar17 = uVar3 + 1;
            if (CARRY4(uVar3, 1)) {
                if ((uVar16 <= uVar10 + uVar17 && uVar10 + uVar17 != uVar16) || (*(iVar18 + 0x200) == *(iVar18 + 0x1f8))
                   ) goto code_r0x00019390c458;
                *(*(iVar18 + 0x1f8) + 0xf3) = 1;
            }
            else {
                uVar3 = 0;
                do {
                    if (uVar16 <= uVar10 + uVar17 && uVar10 + uVar17 != uVar16) goto code_r0x00019390c458;
                    uVar6 = 0;
                    uVar11 = uVar17;
                    do {
                        uVar12 = 8 - (uVar10 & 7);
                        uVar1 = uVar11;
                        if (uVar12 <= uVar11) {
                            uVar1 = uVar12;
                        }
                        uVar9 = uVar1;
                        uVar6 = *(iVar8 + (uVar10 >> 3)) >> ((8 - (uVar10 & 7)) - uVar9 & 0x3f) &
                                ~(-1 << (uVar9 & 0x1f)) | uVar6 << (uVar9 & 0x1f);
                        uVar10 = uVar1 + uVar10;
                        *(pcVar4 + 0x18) = uVar10;
                        uVar11 = uVar11 - uVar1;
                    } while (uVar11 != 0);
                    if (*(iVar18 + 0x200) - *(iVar18 + 0x1f8) >> 8 <= uVar6) goto code_r0x00019390c458;
                    *(*(iVar18 + 0x1f8) + uVar6 * 0x100 + 0xf3) = 1;
                    uVar3 = uVar3 + 1;
                } while (uVar3 != uVar2);
            }
        }
        iVar8 = uVar13 + (uVar10 >> 3);
        if ((uVar10 & 7) != 0) {
            iVar8 = iVar8 + 1;
        }
        *(pcVar4 + 0x30) = iVar8;
        pcVar4[0x20] = '\0';
        uVar19 = 1;
        if (*pcVar4 == '\0') goto code_r0x00019390c4b8;
    }
    else {
        uVar10 = 0;
        pcVar4[0x20] = '\x01';
        *(pcVar4 + 0x10) = iVar8;
        *(pcVar4 + 0x18) = 0;
        *(pcVar4 + 8) = *(pcVar4 + 0x28) + uVar13;
        uVar16 = iVar8 * 8;
        if (5 < uVar16 || uVar16 == 5) goto code_r0x00019390c3ec;
code_r0x00019390c458:
        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
        uVar19 = 0;
        if (*pcVar4 == '\0') goto code_r0x00019390c4b8;
    }
    piVar7 = geo::codec::Allocator::instance()();
    (**(*piVar7 + 0x28))(piVar7, *(pcVar4 + 0x28), 0);
code_r0x00019390c4b8:
    piVar7 = geo::codec::Allocator::instance()();
    (**(*piVar7 + 0x28))(piVar7, pcVar4, 0);
    iVar8 = std::__1::chrono::steady_clock::now()();
    piStack_48 = &iStack_58;
    iStack_58 = 0x32e + 0x193b8a000;
    iVar15 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iVar15 + 0x778, &iStack_58, 0x74c + 0x193af9000, *0x8 + -0x48, auStack_50);
    iVar8 = SUB168(SEXT816(iVar8 - iVar5) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar15 + 0x20) = ((iVar8 >> 7) - (iVar8 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    if (piVar14 == NULL) {
        return uVar19;
    }
    LOAcquire();
    tmp_ldXn = piVar14[1];
    iVar15 = tmp_ldXn;
    tmp_stXn = iVar15 + -1;
    iVar15 = tmp_stXn;
    piVar14[1] = iVar15;
    iVar15 = tmp_ldXn;
    LORelease();
    if (iVar15 == 0) {
        (**(*piVar14 + 0x10))(piVar14);
        std::__1::__shared_weak_count::__release_weak()(piVar14);
        return uVar19;
    }
    return uVar19;
}
