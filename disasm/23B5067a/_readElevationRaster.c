
ulong geo::codec::_readElevationRaster(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    char *pcVar11;
    ulong uVar12;
    int64_t iStack_70;
    int64_t *piStack_68;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t *piStack_48;
    
    iStack_70 = *param_2;
    uVar8 = param_1[1];
    if (uVar8 != 0) {
        uVar6 = 0;
        do {
            if (*(*param_1 + uVar6 * 0x10) == 0x65) {
                pcVar11 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar6, 0x65, iStack_70 + 0x778);
                iVar5 = 0x3ec + 0x193b8a000;
                iStack_70 = *param_2;
                piStack_68 = param_2[1];
                if (piStack_68 == NULL) goto code_r0x000193912f20;
                goto code_r0x000193912f14;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar8 && uVar8 != uVar6);
    }
    pcVar11 = NULL;
    iVar5 = 0x3ec + 0x193b8a000;
    piStack_68 = param_2[1];
    if (piStack_68 != NULL) {
code_r0x000193912f14:
        tmp_ldXn = piStack_68[1];
        iVar3 = tmp_ldXn;
        tmp_stXn = iVar3 + 1;
        iVar3 = tmp_stXn;
        piStack_68[1] = iVar3;
        uVar12 = tmp_ldXn;
    }
code_r0x000193912f20:
    iVar3 = std::__1::chrono::steady_clock::now()();
    if (pcVar11 == NULL) {
        uVar12 = 1;
        goto code_r0x000193913048;
    }
    iVar7 = *(pcVar11 + 0x30);
    uVar6 = *(pcVar11 + 0x38);
    uVar8 = iVar7 + 4;
    if (uVar8 < uVar6 || uVar8 == uVar6) {
        puVar1 = *(pcVar11 + 0x28) + iVar7;
        uVar2 = *puVar1;
        *(pcVar11 + 0x40) = uVar2;
        *(pcVar11 + 0x30) = uVar8;
        if ((uVar2 < 0x10) || (uVar8 = iVar7 + 6,  uVar6 <= uVar8 && uVar8 != uVar6)) goto code_r0x000193912fb4;
        iVar9 = *param_2;
        *(iVar9 + 0xb32) = *(puVar1 + 1);
        *(pcVar11 + 0x30) = uVar8;
        uVar8 = iVar7 + 8;
        if (uVar6 <= uVar8 && uVar8 != uVar6) goto code_r0x000193912fb4;
        *(iVar9 + 0xb30) = *(puVar1 + 6);
        *(pcVar11 + 0x30) = uVar8;
        if (uVar6 <= iVar7 + 0xcU && iVar7 + 0xcU != uVar6) goto code_r0x000193912fb4;
        *(iVar9 + 0xb34) = puVar1[2];
        iVar7 = *(pcVar11 + 0x30);
        uVar6 = *(pcVar11 + 0x38);
        *(pcVar11 + 0x30) = iVar7 + 4;
        uVar8 = iVar7 + 6;
        if (uVar6 <= uVar8 && uVar8 != uVar6) goto code_r0x000193912fb4;
        iVar9 = *param_2;
        iVar10 = *(pcVar11 + 0x28);
        *(iVar9 + 0xb38) = *(iVar10 + iVar7 + 4);
        *(pcVar11 + 0x30) = uVar8;
        uVar8 = iVar7 + 10;
        if (uVar6 <= uVar8 && uVar8 != uVar6) goto code_r0x000193912fb4;
        *(iVar9 + 0xb3c) = *(iVar10 + iVar7 + 6);
        *(pcVar11 + 0x30) = uVar8;
        piVar4 = geo::codec::Allocator::instance()();
        uVar12 = (**(*piVar4 + 0x10))(piVar4, *(*param_2 + 0xb3c), 8);
        iVar7 = *param_2;
        *(iVar7 + 0xb40) = uVar12;
        uVar6 = *(iVar7 + 0xb3c);
        uVar8 = *(pcVar11 + 0x30) + uVar6;
        if (*(pcVar11 + 0x38) <= uVar8 && uVar8 != *(pcVar11 + 0x38)) goto code_r0x000193912fb4;
        memcpy(uVar12, *(pcVar11 + 0x28) + *(pcVar11 + 0x30), uVar6);
        *(pcVar11 + 0x30) = *(pcVar11 + 0x30) + uVar6;
        uVar12 = 1;
        if (param_1 == NULL) goto code_r0x000193913048;
    }
    else {
code_r0x000193912fb4:
        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
        uVar12 = 0;
        if (param_1 == NULL) goto code_r0x000193913048;
    }
    if (*pcVar11 != '\0') {
        piVar4 = geo::codec::Allocator::instance()();
        (**(*piVar4 + 0x28))(piVar4, *(pcVar11 + 0x28), 0);
    }
    piVar4 = geo::codec::Allocator::instance()();
    (**(*piVar4 + 0x28))(piVar4, pcVar11, 0);
code_r0x000193913048:
    iVar7 = std::__1::chrono::steady_clock::now()();
    piStack_48 = &iStack_58;
    iStack_58 = iVar5;
    iVar5 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                      (iStack_70 + 0x778, &iStack_58, 0x74c + 0x193af9000, *0x8 + -0x48, auStack_50);
    iVar3 = SUB168(SEXT816(iVar7 - iVar3) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar5 + 0x20) = ((iVar3 >> 7) - (iVar3 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    if (piStack_68 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_68[1];
        iVar5 = tmp_ldXn;
        tmp_stXn = iVar5 + -1;
        iVar5 = tmp_stXn;
        piStack_68[1] = iVar5;
        iVar5 = tmp_ldXn;
        LORelease();
        if (iVar5 == 0) {
            (**(*piStack_68 + 0x10))(piStack_68);
            std::__1::__shared_weak_count::__release_weak()(piStack_68);
        }
    }
    return uVar12;
}
