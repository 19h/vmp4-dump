
ulong geo::codec::ECEFDequantizer::readInfo(VMP4Chapter*, bool)(ushort *param_1, int64_t param_2, int32_t param_3)

{
    uint *puVar1;
    int32_t iVar2;
    int32_t iVar3;
    int32_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    float fVar10;
    
    iVar8 = *(param_2 + 0x30);
    uVar6 = *(param_2 + 0x38);
    uVar9 = iVar8 + 4;
    if (uVar6 <= uVar9 && uVar9 != uVar6) {
        return 0;
    }
    iVar7 = *(param_2 + 0x28);
    puVar1 = iVar7 + iVar8;
    *(param_1 + 8) = *puVar1;
    *(param_2 + 0x30) = uVar9;
    uVar9 = iVar8 + 6;
    if (uVar6 <= uVar9 && uVar9 != uVar6) {
        return 0;
    }
    *param_1 = *(puVar1 + 1);
    *(param_2 + 0x30) = uVar9;
    uVar9 = iVar8 + 10;
    if (uVar6 <= uVar9 && uVar9 != uVar6) {
        return 0;
    }
    *(param_1 + 10) = *(puVar1 + 6);
    *(param_2 + 0x30) = uVar9;
    uVar9 = iVar8 + 0xc;
    if (uVar6 <= uVar9 && uVar9 != uVar6) {
        return 0;
    }
    param_1[1] = *(puVar1 + 10);
    *(param_2 + 0x30) = uVar9;
    uVar9 = iVar8 + 0x10;
    if (uVar6 <= uVar9 && uVar9 != uVar6) {
        return 0;
    }
    *(param_1 + 0xc) = puVar1[3];
    *(param_2 + 0x30) = uVar9;
    uVar9 = iVar8 + 0x12;
    if (uVar6 <= uVar9 && uVar9 != uVar6) {
        return 0;
    }
    param_1[2] = *(puVar1 + 4);
    *(param_2 + 0x30) = uVar9;
    if (param_3 != 0) {
        uVar9 = iVar8 + 0x16;
        if (uVar6 <= uVar9 && uVar9 != uVar6) {
            return 0;
        }
        *(param_1 + 4) = *(puVar1 + 0x12);
        *(param_2 + 0x30) = uVar9;
        *(param_1 + 0x39) = 1;
    }
    if (uVar6 <= uVar9 + 1 && uVar9 + 1 != uVar6) {
        return 0;
    }
    uVar5 = *(iVar7 + uVar9);
    *(param_1 + 6) = uVar5;
    iVar8 = *(param_2 + 0x30);
    uVar6 = *(param_2 + 0x38);
    *(param_2 + 0x30) = iVar8 + 1;
    uVar9 = iVar8 + 5;
    if (uVar6 <= uVar9 && uVar9 != uVar6) {
        return 0;
    }
    iVar7 = *(param_2 + 0x28) + iVar8;
    iVar2 = *(iVar7 + 1);
    *(param_1 + 0xe) = iVar2;
    *(param_2 + 0x30) = uVar9;
    uVar9 = iVar8 + 9;
    if (uVar6 <= uVar9 && uVar9 != uVar6) {
        return 0;
    }
    iVar3 = *(iVar7 + 5);
    *(param_1 + 0x10) = iVar3;
    *(param_2 + 0x30) = uVar9;
    uVar9 = iVar8 + 0xd;
    if (uVar6 <= uVar9 && uVar9 != uVar6) {
        return 0;
    }
    iVar4 = *(iVar7 + 9);
    *(param_1 + 0x12) = iVar4;
    *(param_2 + 0x30) = uVar9;
    fVar10 = 1 << (uVar5 & 0x1f);
    *(param_1 + 0x14) = iVar2 * fVar10;
    *(param_1 + 0x16) = iVar3 * fVar10;
    *(param_1 + 0x18) = iVar4 * fVar10;
    *(param_1 + 0x1a) = fVar10;
    *(param_1 + 0x1c) = 1;
    return 1;
}
