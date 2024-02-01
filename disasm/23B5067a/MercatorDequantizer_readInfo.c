
ulong geo::codec::MercatorDequantizer::readInfo(VMP4Chapter*)(ushort *param_1, int64_t param_2)

{
    uint64_t uVar1;
    ushort *puVar2;
    float fVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    float8 fVar8;
    int64_t iVar10;
    uchar auVar9 [16];
    ulong uVar11;
    uchar auVar12 [16];
    
    iVar6 = *(param_2 + 0x30);
    uVar7 = *(param_2 + 0x38);
    uVar1 = iVar6 + 2;
    if (uVar7 <= uVar1 && uVar1 != uVar7) {
        return 0;
    }
    puVar2 = *(param_2 + 0x28) + iVar6;
    *param_1 = *puVar2;
    *(param_2 + 0x30) = uVar1;
    uVar1 = iVar6 + 4;
    if (uVar7 <= uVar1 && uVar1 != uVar7) {
        return 0;
    }
    uVar4 = puVar2[1];
    param_1[1] = uVar4;
    *(param_2 + 0x30) = uVar1;
    uVar1 = iVar6 + 8;
    if (uVar7 <= uVar1 && uVar1 != uVar7) {
        return 0;
    }
    *(param_1 + 2) = *(puVar2 + 2);
    *(param_2 + 0x30) = uVar1;
    uVar1 = iVar6 + 10;
    if (uVar7 <= uVar1 && uVar1 != uVar7) {
        return 0;
    }
    param_1[4] = puVar2[4];
    *(param_2 + 0x30) = uVar1;
    uVar1 = iVar6 + 0xc;
    if (uVar7 <= uVar1 && uVar1 != uVar7) {
        return 0;
    }
    param_1[5] = puVar2[5];
    *(param_2 + 0x30) = uVar1;
    if (uVar7 <= iVar6 + 0x10U && iVar6 + 0x10U != uVar7) {
        return 0;
    }
    fVar3 = *(puVar2 + 6);
    *(param_1 + 6) = fVar3;
    iVar6 = *(param_2 + 0x30);
    uVar7 = *(param_2 + 0x38);
    *(param_2 + 0x30) = iVar6 + 4;
    fVar8 = 1.0 / fVar3;
    *(param_1 + 8) = fVar8;
    uVar1 = iVar6 + 6;
    if (uVar7 <= uVar1 && uVar1 != uVar7) {
        return 0;
    }
    iVar10 = *(param_2 + 0x28) + iVar6;
    param_1[0x14] = *(iVar10 + 4);
    *(param_2 + 0x30) = uVar1;
    uVar1 = iVar6 + 8;
    if (uVar7 <= uVar1 && uVar1 != uVar7) {
        return 0;
    }
    uVar5 = *(iVar10 + 6);
    param_1[0x15] = uVar5;
    *(param_2 + 0x30) = uVar1;
    uVar1 = iVar6 + 0xc;
    if (uVar7 <= uVar1 && uVar1 != uVar7) {
        return 0;
    }
    *(param_1 + 0x16) = *(iVar10 + 8);
    *(param_2 + 0x30) = uVar1;
    iVar6 = -1 + uVar4;
    iVar10 = -1 + uVar5;
    uVar11 = 0xffffffff;
    auVar9[0] = iVar6 & uVar11;
    auVar9[1] = iVar6 >> 8 & uVar11 >> 8;
    auVar9[2] = iVar6 >> 0x10 & uVar11 >> 0x10;
    auVar9[3] = iVar6 >> 0x18 & uVar11 >> 0x18;
    auVar9[4] = 0;
    auVar9[5] = 0;
    auVar9[6] = 0;
    auVar9[7] = 0;
    auVar9[8] = iVar10 & 0xff;
    auVar9[9] = iVar10 >> 8 & 0xff;
    auVar9[10] = iVar10 >> 0x10 & 0xff;
    auVar9[11] = iVar10 >> 0x18 & 0xff;
    auVar9[12] = 0;
    auVar9[13] = 0;
    auVar9[14] = 0;
    auVar9[15] = 0;
    auVar12._0_8_ = 1;
    auVar12._8_8_ = 1;
    auVar9 = NEON_ushl(auVar12, auVar9, 8);
    auVar9 = NEON_scvtf(auVar9, 8);
    auVar12 = NEON_fmov(0x3ff0000000000000, 8);
    *(param_1 + 0x10) = auVar12._8_8_ / auVar9._8_8_;
    *(param_1 + 0xc) = auVar12._0_8_ / auVar9._0_8_;
    *(param_1 + 8) = fVar8;
    *(param_1 + 0x18) = 1;
    return 1;
}
