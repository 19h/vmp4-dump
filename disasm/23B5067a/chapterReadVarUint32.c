
ulong geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(int64_t param_1, uint32_t *param_2)

{
    uint64_t uVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    
    iVar6 = *(param_1 + 0x30);
    uVar5 = *(param_1 + 0x38);
    uVar1 = iVar6 + 1;
    if (uVar5 <= uVar1 && uVar1 != uVar5) {
        *param_2 = 0;
        return 0;
    }
    puVar2 = *(param_1 + 0x28) + iVar6;
    uVar3 = *puVar2;
    *(param_1 + 0x30) = uVar1;
    uVar4 = uVar3 & 0x7f;
    if (uVar3 < '\0') {
        uVar1 = iVar6 + 2;
        if (uVar5 <= uVar1 && uVar1 != uVar5) {
            *param_2 = uVar4;
            return 0;
        }
        uVar3 = puVar2[1];
        *(param_1 + 0x30) = uVar1;
        uVar4 = uVar4 & 0xffffc07f | (uVar3 & 0x7f) << -0x19 + 0x20 & 0x3f80;
        if (uVar3 < 0) {
            uVar1 = iVar6 + 3;
            if (uVar5 <= uVar1 && uVar1 != uVar5) {
                *param_2 = uVar4;
                return 0;
            }
            uVar3 = puVar2[2];
            *(param_1 + 0x30) = uVar1;
            uVar4 = uVar4 & 0xffe03fff | (uVar3 & 0x7f) << -0x12 + 0x20 & 0x1fc000;
            if (uVar3 < 0) {
                uVar1 = iVar6 + 4;
                if (uVar5 <= uVar1 && uVar1 != uVar5) {
                    *param_2 = uVar4;
                    return 0;
                }
                uVar3 = puVar2[3];
                *(param_1 + 0x30) = uVar1;
                uVar4 = uVar4 & 0xf01fffff | (uVar3 & 0x7f) << -0xb + 0x20 & 0xfe00000;
                if (uVar3 < 0) {
                    uVar1 = iVar6 + 5;
                    if (uVar5 <= uVar1 && uVar1 != uVar5) {
                        *param_2 = uVar4;
                        return 0;
                    }
                    uVar3 = puVar2[4];
                    *(param_1 + 0x30) = uVar1;
                    uVar4 = uVar4 & 0xfffffff | uVar3 << -4 + 0x20 & 0xf0000000;
                    if (uVar3 < 0) {
                        uVar1 = iVar6 + 6;
                        if (uVar5 <= uVar1 && uVar1 != uVar5) {
                            *param_2 = uVar4;
                            return 0;
                        }
                        uVar3 = puVar2[5];
                        *(param_1 + 0x30) = uVar1;
                        if (uVar3 < '\0') {
                            uVar1 = iVar6 + 7;
                            if (uVar5 <= uVar1 && uVar1 != uVar5) {
                                *param_2 = uVar4;
                                return 0;
                            }
                            uVar3 = puVar2[6];
                            *(param_1 + 0x30) = uVar1;
                            if (uVar3 < '\0') {
                                uVar1 = iVar6 + 8;
                                if (uVar5 <= uVar1 && uVar1 != uVar5) {
                                    *param_2 = uVar4;
                                    return 0;
                                }
                                uVar3 = puVar2[7];
                                *(param_1 + 0x30) = uVar1;
                                if (uVar3 < '\0') {
                                    uVar1 = iVar6 + 9;
                                    if (uVar5 <= uVar1 && uVar1 != uVar5) {
                                        *param_2 = uVar4;
                                        return 0;
                                    }
                                    uVar3 = puVar2[8];
                                    *(param_1 + 0x30) = uVar1;
                                    if (uVar3 < '\0') {
                                        uVar1 = iVar6 + 10;
                                        if (uVar5 <= uVar1 && uVar1 != uVar5) {
                                            *param_2 = uVar4;
                                            return 0;
                                        }
                                        uVar3 = puVar2[9];
                                        *(param_1 + 0x30) = uVar1;
                                        if (uVar3 < '\0') {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *param_2 = uVar4;
    return 1;
}
