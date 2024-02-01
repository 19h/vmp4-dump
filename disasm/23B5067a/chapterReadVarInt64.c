
ulong geo::codec::chapterReadVarInt64(VMP4Chapter*, long long*)(int64_t param_1, uint64_t *param_2)

{
    uint64_t uVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    
    iVar6 = *(param_1 + 0x30);
    uVar5 = *(param_1 + 0x38);
    uVar4 = iVar6 + 1;
    if (uVar5 <= uVar4 && uVar4 != uVar5) {
        *param_2 = 0;
        return 0;
    }
    puVar2 = *(param_1 + 0x28) + iVar6;
    uVar3 = *puVar2;
    *(param_1 + 0x30) = uVar4;
    uVar4 = uVar3 & 0x7f;
    if (uVar3 < '\0') {
        uVar1 = iVar6 + 2;
        if (uVar5 <= uVar1 && uVar1 != uVar5) {
            *param_2 = uVar4;
            return 0;
        }
        uVar3 = puVar2[1];
        *(param_1 + 0x30) = uVar1;
        uVar4 = uVar4 & 0xffffffffffffc07f | (uVar3 & 0x7f) << -0x39 + 0x40 & 0x3f80;
        if (uVar3 < 0) {
            uVar1 = iVar6 + 3;
            if (uVar5 <= uVar1 && uVar1 != uVar5) {
                *param_2 = uVar4;
                return 0;
            }
            uVar3 = puVar2[2];
            *(param_1 + 0x30) = uVar1;
            uVar4 = uVar4 & 0xffffffffffe03fff | (uVar3 & 0x7f) << -0x32 + 0x40 & 0x1fc000;
            if (uVar3 < 0) {
                uVar1 = iVar6 + 4;
                if (uVar5 <= uVar1 && uVar1 != uVar5) {
                    *param_2 = uVar4;
                    return 0;
                }
                uVar3 = puVar2[3];
                *(param_1 + 0x30) = uVar1;
                uVar4 = uVar4 & 0xfffffffff01fffff | (uVar3 & 0x7f) << -0x2b + 0x40 & 0xfe00000;
                if (uVar3 < 0) {
                    uVar1 = iVar6 + 5;
                    if (uVar5 <= uVar1 && uVar1 != uVar5) {
                        *param_2 = uVar4;
                        return 0;
                    }
                    uVar3 = puVar2[4];
                    *(param_1 + 0x30) = uVar1;
                    uVar4 = uVar4 & 0xfffffff80fffffff | (uVar3 & 0x7f) << -0x24 + 0x40 & 0x7f0000000;
                    if (uVar3 < 0) {
                        uVar1 = iVar6 + 6;
                        if (uVar5 <= uVar1 && uVar1 != uVar5) {
                            *param_2 = uVar4;
                            return 0;
                        }
                        uVar3 = puVar2[5];
                        *(param_1 + 0x30) = uVar1;
                        uVar4 = uVar4 & 0xfffffc07ffffffff | (uVar3 & 0x7f) << -0x1d + 0x40 & 0x3f800000000;
                        if (uVar3 < 0) {
                            uVar1 = iVar6 + 7;
                            if (uVar5 <= uVar1 && uVar1 != uVar5) {
                                *param_2 = uVar4;
                                return 0;
                            }
                            uVar3 = puVar2[6];
                            *(param_1 + 0x30) = uVar1;
                            uVar4 = uVar4 & 0xfffe03ffffffffff | (uVar3 & 0x7f) << -0x16 + 0x40 & 0x1fc0000000000;
                            if (uVar3 < 0) {
                                uVar1 = iVar6 + 8;
                                if (uVar5 <= uVar1 && uVar1 != uVar5) {
                                    *param_2 = uVar4;
                                    return 0;
                                }
                                uVar3 = puVar2[7];
                                *(param_1 + 0x30) = uVar1;
                                uVar4 = uVar4 & 0xff01ffffffffffff | (uVar3 & 0x7f) << -0xf + 0x40 & 0xfe000000000000;
                                if (uVar3 < 0) {
                                    uVar1 = iVar6 + 9;
                                    if (uVar5 <= uVar1 && uVar1 != uVar5) {
                                        *param_2 = uVar4;
                                        return 0;
                                    }
                                    uVar3 = puVar2[8];
                                    *(param_1 + 0x30) = uVar1;
                                    uVar4 = uVar4 & 0x80ffffffffffffff |
                                            (uVar3 & 0x7f) << -8 + 0x40 & 0x7f00000000000000;
                                    if (uVar3 < 0) {
                                        uVar1 = iVar6 + 10;
                                        if (uVar5 <= uVar1 && uVar1 != uVar5) {
                                            *param_2 = uVar4;
                                            return 0;
                                        }
                                        uVar3 = puVar2[9];
                                        *(param_1 + 0x30) = uVar1;
                                        if (-1 < uVar3) {
                                            *param_2 = uVar4 & 0x7fffffffffffffff |
                                                       uVar3 << -1 + 0x40 & 0x8000000000000000;
                                            return 1;
                                        }
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
    *param_2 = uVar4;
    return 1;
}
