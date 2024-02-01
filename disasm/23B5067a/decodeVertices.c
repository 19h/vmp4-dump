
ulong geo::codec::decodeVertices(VMP4Chapter*, GeoCodecsCurveVertexPool**, GeoCodecsVertexPool**, bool)
                (int64_t param_1, ulong param_2, ulong param_3, ulong param_4)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uchar auStack_60 [8];
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint8_t uStack_48;
    
    uVar4 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_1, auStack_60);
    if ((uVar4 != 0) &&
       (uVar4 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_1, auStack_60 | 4),  uVar4 != 0)) {
        uVar6 = *(param_1 + 0x30);
        iVar7 = *(param_1 + 0x38) - uVar6;
        if (*(param_1 + 0x38) < uVar6) {
            uVar5 = *(param_1 + 0x18);
            uVar6 = *(param_1 + 0x10) * 8;
            if (uVar6 <= uVar5 + 6 && uVar5 + 6 != uVar6) {
                return 0;
            }
        }
        else {
            uVar5 = 0;
            *(param_1 + 0x20) = 1;
            *(param_1 + 0x10) = iVar7;
            *(param_1 + 0x18) = 0;
            *(param_1 + 8) = *(param_1 + 0x28) + uVar6;
            uVar6 = iVar7 * 8;
            if (uVar6 <= 6 && uVar6 != 6) {
                return 0;
            }
        }
        uStack_58 = 0;
        iVar7 = *(param_1 + 8);
        uVar8 = 6;
        do {
            uVar9 = 8 - (uVar5 & 7);
            uVar1 = uVar8;
            if (uVar9 <= uVar8) {
                uVar1 = uVar9;
            }
            uVar3 = uVar1;
            uStack_58 = *(iVar7 + (uVar5 >> 3)) >> ((8 - (uVar5 & 7)) - uVar3 & 0x1f) &
                        (-1 << (uVar3 & 0x1f) ^ 0xffffffff) | uStack_58 << (uVar3 & 0x1f);
            uVar5 = uVar1 + uVar5;
            *(param_1 + 0x18) = uVar5;
            uVar8 = uVar8 - uVar1;
        } while (uVar8 != 0);
        if (uVar5 + 6 < uVar6 || uVar5 + 6 == uVar6) {
            uStack_50 = 0;
            uVar8 = 6;
            do {
                uVar9 = 8 - (uVar5 & 7);
                uVar1 = uVar8;
                if (uVar9 <= uVar8) {
                    uVar1 = uVar9;
                }
                uVar3 = uVar1;
                uStack_50 = *(iVar7 + (uVar5 >> 3)) >> ((8 - (uVar5 & 7)) - uVar3 & 0x1f) &
                            (-1 << (uVar3 & 0x1f) ^ 0xffffffff) | uStack_50 << (uVar3 & 0x1f);
                uVar5 = uVar1 + uVar5;
                *(param_1 + 0x18) = uVar5;
                uVar8 = uVar8 - uVar1;
            } while (uVar8 != 0);
            if (uVar5 + 4 < uVar6 || uVar5 + 4 == uVar6) {
                uStack_4c = 0;
                uVar8 = 4;
                do {
                    uVar9 = 8 - (uVar5 & 7);
                    uVar1 = uVar8;
                    if (uVar9 <= uVar8) {
                        uVar1 = uVar9;
                    }
                    uVar3 = uVar1;
                    uStack_4c = *(iVar7 + (uVar5 >> 3)) >> ((8 - (uVar5 & 7)) - uVar3 & 0x1f) &
                                (-1 << (uVar3 & 0x1f) ^ 0xffffffff) | uStack_4c << (uVar3 & 0x1f);
                    uVar5 = uVar1 + uVar5;
                    *(param_1 + 0x18) = uVar5;
                    uVar8 = uVar8 - uVar1;
                } while (uVar8 != 0);
                uVar8 = uVar5 + 1;
                if (uVar8 < uVar6 || uVar8 == uVar6) {
                    uVar2 = *(iVar7 + (uVar5 >> 3));
                    *(param_1 + 0x18) = uVar8;
                    uStack_48 = uVar2 >> (7 & (uVar5 ^ 0xffffffff)) & 1;
                    uStack_54 = uStack_58;
                    uVar4 = geo::codec::decodeVerticesAfterPreamble(VMP4Chapter*, VertexChapterPreamble const*, GeoCodecsCurveVertexPool**, GeoCodecsVertexPool**, bool, bool)
                                      (param_1, auStack_60, param_2, param_3, param_4);
                    return uVar4;
                }
            }
            return 0;
        }
        uVar4 = 0;
    }
    return uVar4;
}
