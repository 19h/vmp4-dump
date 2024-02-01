
ulong geo::codec::DepthDequantizer::readInfo(VMP4Chapter*)(uint *param_1, int64_t param_2)

{
    uint64_t uVar1;
    uint *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    iVar3 = *(param_2 + 0x30);
    uVar4 = *(param_2 + 0x38);
    uVar1 = iVar3 + 4;
    if (uVar4 <= uVar1 && uVar1 != uVar4) {
        return 0;
    }
    puVar2 = *(param_2 + 0x28) + iVar3;
    *param_1 = *puVar2;
    *(param_2 + 0x30) = uVar1;
    if (uVar4 <= iVar3 + 8U && iVar3 + 8U != uVar4) {
        return 0;
    }
    param_1[1] = puVar2[1];
    iVar3 = *(param_2 + 0x30);
    *(param_2 + 0x30) = iVar3 + 4;
    if (*(param_2 + 0x38) <= iVar3 + 8U && iVar3 + 8U != *(param_2 + 0x38)) {
        return 0;
    }
    param_1[2] = *(*(param_2 + 0x28) + iVar3 + 4);
    *(param_2 + 0x30) = *(param_2 + 0x30) + 4;
    *(param_1 + 3) = 1;
    return 1;
}
