
ulong geo::codec::_decodeMaterialModifiers(VMP4Chapter*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t param_1, int64_t *param_2)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int32_t iVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *puVar11;
    int64_t iVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    int64_t iVar16;
    ulong uVar17;
    ulong uStack_58;
    
    uStack_58 = 0;
    iVar3 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_1, &uStack_58 + 4);
    if (iVar3 == 0) goto code_r0x000193932458;
    if (uStack_58._4_4_ == 0) {
        uVar15 = 0;
    }
    else {
        uVar9 = *(param_1 + 0x30) + 1;
        if (*(param_1 + 0x38) <= uVar9 && uVar9 != *(param_1 + 0x38)) goto code_r0x000193932458;
        uVar15 = *(*(param_1 + 0x28) + *(param_1 + 0x30));
        *(param_1 + 0x30) = uVar9;
        iVar3 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_1, &uStack_58);
        if (iVar3 == 0) goto code_r0x000193932458;
        iVar3 = uStack_58;
        if (iVar3 != 0) {
            uVar7 = *(param_1 + 0x38);
            uVar9 = *(param_1 + 0x30) + 1;
            do {
                if (uVar7 <= uVar9 && uVar9 != uVar7) goto code_r0x000193932458;
                *(param_1 + 0x30) = uVar9;
                uVar8 = uVar9 + 1;
                if (uVar7 <= uVar8 && uVar8 != uVar7) goto code_r0x000193932458;
                *(param_1 + 0x30) = uVar8;
                uVar9 = uVar9 + 2;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
    }
    iVar16 = *param_2;
    uVar9 = uStack_58._4_4_;
    puVar5 = *(iVar16 + 0x840);
    iVar6 = *(iVar16 + 0x838);
    uVar7 = puVar5 - iVar6 >> 4;
    if (uVar7 < uVar9) {
        uVar10 = uVar9 - uVar7;
        uVar8 = *(iVar16 + 0x848) - puVar5 >> 4;
        if (uVar8 <= uVar10 && uVar10 != uVar8) {
            uVar10 = *(iVar16 + 0x848) - iVar6;
            uVar8 = uVar10 >> 3;
            if (uVar8 < uVar9 || uVar8 == uVar9) {
                uVar8 = uVar9;
            }
            if (0x7fffffffffffffef < uVar10) {
                uVar8 = 0xfffffffffffffff;
            }
            iVar4 = (**(**(iVar16 + 0x850) + 0x10))(*(iVar16 + 0x850), uVar8 << 4, 8);
            puVar5 = iVar4 + uVar7 * 0x10;
            iVar6 = uVar9 * 0x10 + uVar7 * -0x10;
            puVar11 = puVar5;
            do {
                if (puVar11 != NULL) {
                    *puVar11 = 0;
                    puVar11[1] = 0;
                }
                puVar11 = puVar11 + 2;
                iVar6 = iVar6 + -0x10;
            } while (iVar6 != 0);
            iVar6 = *(iVar16 + 0x840);
            iVar12 = *(iVar16 + 0x838);
            if (iVar6 != iVar12) {
                do {
                    uVar17 = *(iVar6 + -0x10);
                    puVar5[-1] = *(iVar6 + -8);
                    puVar5[-2] = uVar17;
                    puVar5 = puVar5 + -0x10;
                    iVar6 = iVar6 + -0x10;
                } while (iVar6 != iVar12);
                iVar6 = *(iVar16 + 0x838);
            }
            *(iVar16 + 0x838) = puVar5;
            *(iVar16 + 0x840) = iVar4 + uVar9 * 0x10;
            iVar12 = *(iVar16 + 0x848);
            *(iVar16 + 0x848) = iVar4 + uVar8 * 0x10;
            if (iVar6 != 0) {
                (**(**(iVar16 + 0x850) + 0x28))(*(iVar16 + 0x850), iVar6, iVar12 - iVar6);
            }
            uVar9 = uStack_58._4_4_;
code_r0x00019393266c:
            if (uVar9 == 0) {
                return 1;
            }
        }
        else {
            puVar11 = puVar5 + uVar10 * 2;
            iVar6 = uVar9 * 0x10 + uVar7 * -0x10;
            do {
                if (puVar5 != NULL) {
                    *puVar5 = 0;
                    puVar5[1] = 0;
                }
                puVar5 = puVar5 + 2;
                iVar6 = iVar6 + -0x10;
            } while (iVar6 != 0);
            *(iVar16 + 0x840) = puVar11;
            uVar9 = uStack_58._4_4_;
            if (uVar9 == 0) {
                return 1;
            }
        }
    }
    else {
        if (uVar7 < uVar9 || uVar7 == uVar9) goto code_r0x00019393266c;
        *(iVar16 + 0x840) = iVar6 + uVar9 * 0x10;
        if (uVar9 == 0) {
            return 1;
        }
    }
    if ((uVar15 < 9) && ((1 << (uVar15 & 0x1f) & 0x116) != 0)) {
        iVar6 = 0;
        uVar7 = 0;
        do {
            iVar16 = *(*param_2 + 0x838);
            if (uVar15 == 4) {
                uVar10 = *(param_1 + 0x38);
                uVar8 = *(param_1 + 0x30) + 4;
                if (uVar10 <= uVar8 && uVar8 != uVar10) break;
                iVar4 = *(param_1 + 0x28);
                uVar13 = *(iVar4 + *(param_1 + 0x30));
                uVar14 = uVar13;
                *(param_1 + 0x30) = uVar8;
                *(iVar16 + iVar6) = uVar14;
                if ((uVar13 & 1) != 0) goto code_r0x00019393276c;
            }
            else if (uVar15 == 2) {
                uVar10 = *(param_1 + 0x38);
                uVar8 = *(param_1 + 0x30) + 2;
                if (uVar10 <= uVar8 && uVar8 != uVar10) break;
                iVar4 = *(param_1 + 0x28);
                uVar2 = *(iVar4 + *(param_1 + 0x30));
                uVar14 = uVar2;
                *(param_1 + 0x30) = uVar8;
                *(iVar16 + iVar6) = uVar14;
                if ((uVar2 & 1) != 0) goto code_r0x00019393276c;
            }
            else if (uVar15 != 1) {
                uVar10 = *(param_1 + 0x38);
                uVar8 = *(param_1 + 0x30) + 8;
                if (uVar10 <= uVar8 && uVar8 != uVar10) break;
                iVar4 = *(param_1 + 0x28);
                uVar14 = *(iVar4 + *(param_1 + 0x30));
                *(param_1 + 0x30) = uVar8;
                *(iVar16 + iVar6) = uVar14;
                if ((uVar14 & 1) != 0) goto code_r0x00019393276c;
            }
            else {
                uVar10 = *(param_1 + 0x38);
                uVar8 = *(param_1 + 0x30) + 1;
                if (uVar10 <= uVar8 && uVar8 != uVar10) break;
                iVar4 = *(param_1 + 0x28);
                uVar1 = *(iVar4 + *(param_1 + 0x30));
                uVar14 = uVar1;
                *(param_1 + 0x30) = uVar8;
                *(iVar16 + iVar6) = uVar14;
                if ((uVar1 & 1) != 0) {
code_r0x00019393276c:
                    *(iVar16 + iVar6 + 0xc) = 1;
                }
            }
            uVar13 = uVar14;
            if ((uVar13 >> 2 & 1) == 0) {
                if ((uVar13 >> 1 & 1) != 0) {
code_r0x00019393278c:
                    if (uVar10 <= uVar8 + 1 && uVar8 + 1 != uVar10) break;
                    *(iVar16 + iVar6 + 8) = *(iVar4 + uVar8);
                    iVar4 = *(param_1 + 0x30);
                    *(param_1 + 0x30) = iVar4 + 1;
                    if (*(param_1 + 0x38) <= iVar4 + 2U && iVar4 + 2U != *(param_1 + 0x38)) break;
                    *(iVar16 + iVar6 + 9) = *(*(param_1 + 0x28) + iVar4 + 1);
                    iVar4 = *(param_1 + 0x30);
                    *(param_1 + 0x30) = iVar4 + 1;
                    if (*(param_1 + 0x38) <= iVar4 + 2U && iVar4 + 2U != *(param_1 + 0x38)) break;
                    *(iVar16 + iVar6 + 10) = *(*(param_1 + 0x28) + iVar4 + 1);
                    iVar4 = *(param_1 + 0x30);
                    *(param_1 + 0x30) = iVar4 + 1;
                    if (*(param_1 + 0x38) <= iVar4 + 2U && iVar4 + 2U != *(param_1 + 0x38)) break;
                    *(iVar16 + iVar6 + 0xb) = *(*(param_1 + 0x28) + iVar4 + 1);
                    *(param_1 + 0x30) = *(param_1 + 0x30) + 1;
                    uVar9 = uStack_58._4_4_;
                }
            }
            else {
                *(iVar16 + iVar6 + 0xd) = 1;
                if ((uVar13 >> 1 & 1) != 0) goto code_r0x00019393278c;
            }
            uVar7 = uVar7 + 1;
            iVar6 = iVar6 + 0x10;
            if (uVar9 <= uVar7) {
                return 1;
            }
        } while( true );
    }
code_r0x000193932458:
    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
    return 0;
}
