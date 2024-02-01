
ulong geo::codec::_readCoverage(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint8_t uVar1;
    char *pcVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong uVar10;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t *piStack_48;
    
    uVar7 = param_1[1];
    if (uVar7 != 0) {
        uVar6 = 0;
        do {
            if (*(*param_1 + uVar6 * 0x10) == 0x77) {
                pcVar2 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar6, 0x77, *param_2 + 0x778);
                if (pcVar2 == NULL) {
                    return 1;
                }
                iVar9 = *param_2;
                piVar8 = param_2[1];
                if (piVar8 != NULL) {
                    tmp_ldXn = piVar8[1];
                    iVar3 = tmp_ldXn;
                    tmp_stXn = iVar3 + 1;
                    iVar3 = tmp_stXn;
                    piVar8[1] = iVar3;
                    uVar10 = tmp_ldXn;
                }
                iVar3 = std::__1::chrono::steady_clock::now()();
                uVar6 = *(pcVar2 + 0x30);
                uVar7 = *(pcVar2 + 0x38) - uVar6;
                if (*(pcVar2 + 0x38) < uVar6) {
code_r0x00019390d848:
                    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                    uVar10 = 0;
                    if (*pcVar2 == '\0') goto code_r0x00019390d8a8;
                }
                else {
                    pcVar2[0x20] = '\x01';
                    *(pcVar2 + 0x10) = uVar7;
                    *(pcVar2 + 0x18) = 0;
                    *(pcVar2 + 8) = *(pcVar2 + 0x28) + uVar6;
                    if ((uVar7 & 0x1fffffffffffffff) == 0) goto code_r0x00019390d848;
                    uVar1 = *(*(pcVar2 + 0x28) + uVar6);
                    uVar10 = 1;
                    *(pcVar2 + 0x18) = 1;
                    *(*param_2 + 0x6b0) = uVar1 >> 7 & 0xff;
                    *(pcVar2 + 0x30) = uVar6 + 1;
                    pcVar2[0x20] = '\0';
                    if (*pcVar2 == '\0') goto code_r0x00019390d8a8;
                }
                piVar4 = geo::codec::Allocator::instance()();
                (**(*piVar4 + 0x28))(piVar4, *(pcVar2 + 0x28), 0);
code_r0x00019390d8a8:
                piVar4 = geo::codec::Allocator::instance()();
                (**(*piVar4 + 0x28))(piVar4, pcVar2, 0);
                iVar5 = std::__1::chrono::steady_clock::now()();
                piStack_48 = &iStack_58;
                iStack_58 = 0x30b + 0x193b8a000;
                iVar9 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                                  (iVar9 + 0x778, &iStack_58, 0x74c + 0x193af9000, *0x8 + -0x48, auStack_50);
                iVar3 = SUB168(SEXT816(iVar5 - iVar3) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
                *(iVar9 + 0x20) = ((iVar3 >> 7) - (iVar3 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
                if (piVar8 == NULL) {
                    return uVar10;
                }
                LOAcquire();
                tmp_ldXn = piVar8[1];
                iVar9 = tmp_ldXn;
                tmp_stXn = iVar9 + -1;
                iVar9 = tmp_stXn;
                piVar8[1] = iVar9;
                iVar9 = tmp_ldXn;
                LORelease();
                if (iVar9 == 0) {
                    (**(*piVar8 + 0x10))(piVar8);
                    std::__1::__shared_weak_count::__release_weak()(piVar8);
                    return uVar10;
                }
                return uVar10;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar7 && uVar7 != uVar6);
    }
    return 1;
}
