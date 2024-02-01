
void geo::codec::_readStyleAttributeRasters(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&, bool)
               (int64_t *param_1, int64_t *param_2, code param_3)

{
    code cVar1;
    int64_t *piVar2;
    code **ppcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int16_t *piVar10;
    code *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iStack_c0;
    uchar auStack_b2 [2];
    int64_t *apiStack_b0 [2];
    uchar uStack_99;
    int64_t iStack_98;
    uchar uStack_89;
    int64_t *apiStack_88 [5];
    code **ppcStack_60;
    ulong uStack_58;
    code **ppcStack_40;
    int64_t iStack_38;
    
    iStack_38 = **reloc.__stack_chk_guard;
    auStack_b2[0] = 0x1;
    uVar4 = param_1[1];
    auStack_b2[1] = param_3;
    apiStack_b0[0] = param_1;
    if (uVar4 == 0) {
        iVar13 = 0;
    }
    else {
        iVar5 = *param_1;
        if (uVar4 < 4) {
            uVar6 = 0;
            iVar13 = 0;
code_r0x0001939135c0:
            iVar7 = uVar4 - uVar6;
            piVar10 = iVar5 + uVar6 * 0x10;
            do {
                if (*piVar10 == 0x9a) {
                    iVar13 = iVar13 + 1;
                }
                iVar7 = iVar7 + -1;
                piVar10 = piVar10 + 8;
            } while (iVar7 != 0);
        }
        else {
            iVar7 = 0;
            iVar9 = 0;
            iVar8 = 0;
            iVar13 = 0;
            uVar6 = uVar4 & 0xfffffffffffffffc;
            piVar10 = iVar5 + 0x20;
            uVar12 = uVar6;
            do {
                if (piVar10[-0x10] == 0x9a) {
                    iVar7 = iVar7 + 1;
                }
                if (piVar10[-8] == 0x9a) {
                    iVar9 = iVar9 + 1;
                }
                if (*piVar10 == 0x9a) {
                    iVar8 = iVar8 + 1;
                }
                if (piVar10[8] == 0x9a) {
                    iVar13 = iVar13 + 1;
                }
                piVar10 = piVar10 + 0x20;
                uVar12 = uVar12 + -4;
            } while (uVar12 != 0);
            iVar13 = iVar13 + iVar8 + iVar9 + iVar7;
            if (uVar4 != uVar6) goto code_r0x0001939135c0;
        }
        iStack_c0 = iVar13;
        if (iVar13 != 0) {
            *(*param_2 + 0xb18) = 0;
            piVar2 = geo::codec::Allocator::instance()();
            apiStack_88[1] = (**(*piVar2 + 0x18))(piVar2, iVar13, 0x18);
            iVar13 = *param_2;
            *(iVar13 + 0xb10) = apiStack_88[1];
            ppcVar3 = operator new(unsigned long)(0x38);
            pcVar11 = typeinfo for geo::Allocator + 0x9f0 + 0x10;
            *ppcVar3 = pcVar11;
            ppcVar3[1] = param_2;
            ppcVar3[2] = apiStack_88 + 1;
            ppcVar3[3] = &iStack_c0;
            ppcVar3[4] = auStack_b2 + 1;
            ppcVar3[5] = apiStack_b0;
            ppcVar3[6] = auStack_b2;
            uVar4 = param_1[1];
            ppcStack_60 = ppcVar3;
            if (uVar4 != 0) {
                uVar12 = 0;
                do {
                    if (*(*param_1 + uVar12 * 0x10) == 0x9a) {
                        uStack_58 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                              (param_1, uVar12, 0x9a, iVar13 + 0x778);
                        (**(*ppcVar3 + 0x30))(ppcVar3, *0x8 + -0x58);
                        uVar4 = param_1[1];
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 <= uVar4 && uVar4 != uVar12);
                pcVar11 = *ppcVar3;
            }
            (**(pcVar11 + 0x28))(ppcVar3);
            cVar1 = auStack_b2[0];
            goto code_r0x000193913910;
        }
        if (uVar4 < 4) {
            uVar6 = 0;
            iVar13 = 0;
        }
        else {
            iVar7 = 0;
            iVar9 = 0;
            iVar8 = 0;
            iVar13 = 0;
            uVar6 = uVar4 & 0xfffffffffffffffc;
            piVar10 = iVar5 + 0x20;
            uVar12 = uVar6;
            do {
                if (piVar10[-0x10] == 0x66) {
                    iVar7 = iVar7 + 1;
                }
                if (piVar10[-8] == 0x66) {
                    iVar9 = iVar9 + 1;
                }
                if (*piVar10 == 0x66) {
                    iVar8 = iVar8 + 1;
                }
                if (piVar10[8] == 0x66) {
                    iVar13 = iVar13 + 1;
                }
                piVar10 = piVar10 + 0x20;
                uVar12 = uVar12 + -4;
            } while (uVar12 != 0);
            iVar13 = iVar13 + iVar8 + iVar9 + iVar7;
            if (uVar4 == uVar6) goto code_r0x0001939137c8;
        }
        iVar7 = uVar4 - uVar6;
        piVar10 = iVar5 + uVar6 * 0x10;
        do {
            if (*piVar10 == 0x66) {
                iVar13 = iVar13 + 1;
            }
            iVar7 = iVar7 + -1;
            piVar10 = piVar10 + 8;
        } while (iVar7 != 0);
    }
code_r0x0001939137c8:
    *(*param_2 + 0xb18) = 0;
    iStack_98 = iVar13;
    uStack_89 = param_3;
    apiStack_88[0] = param_1;
    piVar2 = geo::codec::Allocator::instance()();
    apiStack_b0[1] = (**(*piVar2 + 0x18))(piVar2, iVar13, 0x18);
    iVar13 = *param_2;
    *(iVar13 + 0xb10) = apiStack_b0[1];
    uStack_99 = 0x1;
    ppcVar3 = operator new(unsigned long)(0x38);
    pcVar11 = typeinfo for geo::Allocator + 0x960 + 0x10;
    *ppcVar3 = pcVar11;
    ppcVar3[1] = param_2;
    ppcVar3[2] = apiStack_b0 + 1;
    ppcVar3[3] = &iStack_98;
    ppcVar3[4] = &uStack_89;
    ppcVar3[5] = apiStack_88;
    ppcVar3[6] = &uStack_99;
    uVar4 = param_1[1];
    ppcStack_40 = ppcVar3;
    if (uVar4 != 0) {
        uVar12 = 0;
        do {
            if (*(*param_1 + uVar12 * 0x10) == 0x66) {
                apiStack_88[1] =
                     geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                               (param_1, uVar12, 0x66, iVar13 + 0x778);
                (**(*ppcVar3 + 0x30))(ppcVar3, apiStack_88 + 1);
                uVar4 = param_1[1];
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 <= uVar4 && uVar4 != uVar12);
        pcVar11 = *ppcVar3;
    }
    (**(pcVar11 + 0x28))(ppcVar3);
    cVar1 = uStack_99;
code_r0x000193913910:
    if (**reloc.__stack_chk_guard == iStack_38) {
        return;
    }
    // WARNING: Subroutine does not return
    __stack_chk_fail(cVar1 != 0x0);
}
