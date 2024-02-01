
// WARNING: Type propagation algorithm not settling

int32_t geo::codec::_readDaVinciMetadata(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                  (int64_t *param_1, int64_t *param_2)

{
    uchar *puVar1;
    uchar uVar2;
    uchar uVar3;
    char cVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    char *pcVar7;
    int64_t *piVar8;
    uint32_t *puVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uchar *puVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    uint8_t *puVar20;
    uint8_t *puVar21;
    uint64_t uVar22;
    int64_t iVar23;
    uchar *puVar24;
    uint8_t *puVar25;
    int32_t iVar26;
    uint32_t uVar27;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t *piStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t *piStack_48;
    
    uVar13 = param_1[1];
    if (uVar13 == 0) {
        return 1;
    }
    uVar11 = 0;
    while (*(*param_1 + uVar11 * 0x10) != 0x67) {
        uVar11 = uVar11 + 1;
        if (uVar13 < uVar11 || uVar13 == uVar11) {
            return 1;
        }
    }
    pcVar7 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                       (param_1, uVar11, 0x67, *param_2 + 0x778);
    if (pcVar7 == NULL) {
        return 1;
    }
    uVar13 = *(pcVar7 + 0x30) + 4;
    if (*(pcVar7 + 0x38) <= uVar13 && uVar13 != *(pcVar7 + 0x38)) {
        return 1;
    }
    uVar27 = *(*(pcVar7 + 0x28) + *(pcVar7 + 0x30));
    iStack_78 = 0x435 + 0x193b8a000;
    *(pcVar7 + 0x30) = uVar13;
    iStack_70 = *param_2;
    piStack_68 = param_2[1];
    if (piStack_68 != NULL) {
        tmp_ldXn = piStack_68[1];
        iVar14 = tmp_ldXn;
        tmp_stXn = iVar14 + 1;
        iVar14 = tmp_stXn;
        piStack_68[1] = iVar14;
        uVar10 = tmp_ldXn;
    }
    iStack_60 = std::__1::chrono::steady_clock::now()();
    piVar8 = geo::codec::Allocator::instance()();
    puVar9 = (**(*piVar8 + 0x18))(piVar8, 1, 0x20);
    *(*param_2 + 0x8b8) = puVar9;
    if ((uVar27 & 0xff) != 0x44) {
        uVar10 = **reloc.__stderrp;
code_r0x000193919d0c:
        fprintf(uVar10, 0x8ff + 0x193b8a000);
        puVar24 = NULL;
        puVar25 = NULL;
        iVar26 = 0;
        if (*pcVar7 == '\0') goto code_r0x000193919d68;
    }
    else {
        if ((uVar27 & 0xff00) != 0x5600) {
            uVar10 = **reloc.__stderrp;
            goto code_r0x000193919d0c;
        }
        if ((uVar27 & 0xff0000) != 0x650000) {
            uVar10 = **reloc.__stderrp;
            goto code_r0x000193919d0c;
        }
        if (uVar27 >> 0x18 != 0x6d) {
            uVar10 = **reloc.__stderrp;
            goto code_r0x000193919d0c;
        }
        iVar14 = *(pcVar7 + 0x30);
        uVar11 = *(pcVar7 + 0x38);
        uVar13 = iVar14 + 4;
        if (uVar11 <= uVar13 && uVar13 != uVar11) {
            uVar10 = **reloc.__stderrp;
            goto code_r0x000193919d0c;
        }
        uVar27 = *(*(pcVar7 + 0x28) + iVar14);
        *(pcVar7 + 0x40) = uVar27;
        *(pcVar7 + 0x30) = uVar13;
        if (uVar27 < 0xf || uVar27 == 0xf) {
            uVar10 = **reloc.__stderrp;
            goto code_r0x000193919d0c;
        }
        if (uVar11 <= iVar14 + 8U && iVar14 + 8U != uVar11) {
            uVar10 = **reloc.__stderrp;
            goto code_r0x000193919d0c;
        }
        *puVar9 = (*(pcVar7 + 0x28) + iVar14)[1];
        iVar14 = *(pcVar7 + 0x30);
        *(pcVar7 + 0x30) = iVar14 + 4;
        if (*(pcVar7 + 0x38) <= iVar14 + 8U && iVar14 + 8U != *(pcVar7 + 0x38)) {
            uVar10 = **reloc.__stderrp;
            goto code_r0x000193919d0c;
        }
        *(*(*param_2 + 0x8b8) + 4) = *(*(pcVar7 + 0x28) + iVar14 + 4);
        iVar14 = *(pcVar7 + 0x30);
        *(pcVar7 + 0x30) = iVar14 + 4;
        uVar13 = iVar14 + 6;
        if (*(pcVar7 + 0x38) <= uVar13 && uVar13 != *(pcVar7 + 0x38)) {
            uVar10 = **reloc.__stderrp;
            goto code_r0x000193919d0c;
        }
        uVar6 = *(*(pcVar7 + 0x28) + iVar14 + 4);
        uVar11 = uVar6;
        *(*(*param_2 + 0x8b8) + 8) = uVar6;
        *(pcVar7 + 0x30) = uVar13;
        piVar8 = geo::codec::Allocator::instance()();
        uVar13 = uVar6 * uVar6;
        puVar24 = (**(*piVar8 + 0x10))(piVar8, uVar13 << -0x3f + 0x40 & 0x1fffffffe, 8);
        *(*(*param_2 + 0x8b8) + 0x10) = puVar24;
        uVar27 = uVar6;
        if (uVar27 != 0) {
            uVar12 = 0;
            puVar16 = puVar24;
            do {
                uVar18 = 0;
                do {
                    iVar14 = *(pcVar7 + 0x30);
                    uVar19 = *(pcVar7 + 0x38);
                    uVar17 = iVar14 + 1;
                    if (uVar19 <= uVar17 && uVar17 != uVar19) {
code_r0x00019391a184:
                        fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                        puVar25 = NULL;
                        iVar26 = 0;
                        if (*pcVar7 != '\0') goto code_r0x000193919d38;
                        goto code_r0x000193919d68;
                    }
                    uVar2 = *(*(pcVar7 + 0x28) + iVar14);
                    *(pcVar7 + 0x30) = uVar17;
                    uVar17 = iVar14 + 2;
                    if (uVar19 <= uVar17 && uVar17 != uVar19) goto code_r0x00019391a184;
                    uVar3 = (*(pcVar7 + 0x28) + iVar14)[1];
                    *(pcVar7 + 0x30) = uVar17;
                    puVar1 = puVar16 + 2;
                    *puVar16 = uVar2;
                    puVar16[1] = uVar3;
                    uVar18 = uVar18 + 1;
                    puVar16 = puVar1;
                } while (uVar18 < uVar27);
                uVar12 = uVar12 + 1;
                puVar16 = puVar1;
            } while (uVar12 < uVar27);
        }
        uVar17 = *(pcVar7 + 0x30);
        if (uVar17 <= *(pcVar7 + 0x38)) {
            pcVar7[0x20] = '\x01';
            *(pcVar7 + 0x10) = *(pcVar7 + 0x38) - uVar17;
            *(pcVar7 + 0x18) = 0;
            *(pcVar7 + 8) = *(pcVar7 + 0x28) + uVar17;
        }
        piVar8 = geo::codec::Allocator::instance()();
        puVar25 = (**(*piVar8 + 0x18))(piVar8, uVar13, 1);
        *(*(*param_2 + 0x8b8) + 0x18) = puVar25;
        if (uVar27 != 0) {
            uVar13 = 0;
            uVar15 = *(pcVar7 + 0x10) * 8;
            puVar21 = puVar25;
            uVar17 = uVar11;
            uVar19 = *(pcVar7 + 0x18);
            puVar20 = puVar25;
            do {
                do {
                    uVar22 = uVar19 + 1;
                    if (uVar15 <= uVar22 && uVar22 != uVar15) {
                        uVar10 = **reloc.__stderrp;
                        goto code_r0x00019391a1cc;
                    }
                    iVar14 = *(pcVar7 + 8);
                    uVar5 = *(iVar14 + (uVar19 >> 3));
                    *(pcVar7 + 0x18) = uVar22;
                    *puVar21 = *puVar21 | uVar5 >> (7 & (uVar19 ^ 0xffffffff)) & 1;
                    uVar17 = uVar17 + -1;
                    puVar21 = puVar21 + 1;
                    uVar17 = uVar17;
                    uVar19 = uVar22;
                } while (uVar17 != 0);
                uVar13 = uVar13 + 1;
                puVar20 = puVar20 + uVar11;
                puVar21 = puVar20;
                uVar17 = uVar11;
                uVar19 = uVar22;
            } while (uVar13 != uVar11);
            uVar17 = 0;
            puVar21 = puVar25;
            uVar19 = uVar11;
            puVar20 = puVar25;
code_r0x00019391a128:
            while( true ) {
                uVar13 = uVar22 + 1;
                if (uVar15 <= uVar13 && uVar13 != uVar15) break;
                uVar5 = *(iVar14 + (uVar22 >> 3));
                *(pcVar7 + 0x18) = uVar13;
                *puVar21 = *puVar21 | (uVar5 >> (7 & (uVar22 ^ 0xffffffff)) & 1) << 1;
                uVar19 = uVar19 + -1;
                puVar21 = puVar21 + 1;
                uVar19 = uVar19;
                uVar22 = uVar13;
                if (uVar19 == 0) goto code_r0x00019391a164;
            }
            uVar10 = **reloc.__stderrp;
code_r0x00019391a1cc:
            fprintf(uVar10, 0x8ff + 0x193b8a000);
            iVar26 = 0;
            cVar4 = *pcVar7;
            goto joined_r0x00019391a218;
        }
        uVar13 = *(pcVar7 + 0x18);
code_r0x00019391a1f8:
        iVar14 = *(pcVar7 + 0x30) + (uVar13 >> 3);
        if ((uVar13 & 7) != 0) {
            iVar14 = iVar14 + 1;
        }
        *(pcVar7 + 0x30) = iVar14;
        pcVar7[0x20] = '\0';
        iVar26 = 1;
        cVar4 = *pcVar7;
joined_r0x00019391a218:
        if (cVar4 == '\0') goto code_r0x000193919d68;
    }
code_r0x000193919d38:
    piVar8 = geo::codec::Allocator::instance()();
    (**(*piVar8 + 0x28))(piVar8, *(pcVar7 + 0x28), 0);
code_r0x000193919d68:
    piVar8 = geo::codec::Allocator::instance()();
    (**(*piVar8 + 0x28))(piVar8, pcVar7, 0);
    if (iVar26 == 0) {
        iVar14 = *param_2;
        iVar23 = *(iVar14 + 0x8b8);
        if (iVar23 != 0) {
            piVar8 = geo::codec::Allocator::instance()();
            (**(*piVar8 + 0x28))(piVar8, *(iVar23 + 0x18), 0);
            piVar8 = geo::codec::Allocator::instance()();
            (**(*piVar8 + 0x28))(piVar8, *(iVar23 + 0x10), 0);
            piVar8 = geo::codec::Allocator::instance()();
            (**(*piVar8 + 0x28))(piVar8, iVar23, 0);
            iVar14 = *param_2;
        }
        *(iVar14 + 0x8b8) = 0;
        piVar8 = geo::codec::Allocator::instance()();
        (**(*piVar8 + 0x28))(piVar8, puVar24, 0);
        piVar8 = geo::codec::Allocator::instance()();
        (**(*piVar8 + 0x28))(piVar8, puVar25, 0);
    }
    iVar14 = std::__1::chrono::steady_clock::now()();
    iStack_58 = iStack_78;
    if (iStack_78 != 0) {
        piStack_48 = &iStack_58;
        iVar23 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                           (iStack_70 + 0x778, &iStack_58, 0x74c + 0x193af9000, *0x8 + -0x48, auStack_50);
        iVar14 = SUB168(SEXT816(iVar14 - iStack_60) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
        *(iVar23 + 0x20) = ((iVar14 >> 7) - (iVar14 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    }
    if (piStack_68 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_68[1];
        iVar14 = tmp_ldXn;
        tmp_stXn = iVar14 + -1;
        iVar14 = tmp_stXn;
        piStack_68[1] = iVar14;
        iVar14 = tmp_ldXn;
        LORelease();
        if (iVar14 == 0) {
            (**(*piStack_68 + 0x10))(piStack_68);
            std::__1::__shared_weak_count::__release_weak()(piStack_68);
            return iVar26;
        }
        return iVar26;
    }
    return iVar26;
code_r0x00019391a164:
    uVar17 = uVar17 + 1;
    puVar20 = puVar20 + uVar11;
    puVar21 = puVar20;
    uVar19 = uVar11;
    uVar22 = uVar13;
    if (uVar17 == uVar11) goto code_r0x00019391a1f8;
    goto code_r0x00019391a128;
}
