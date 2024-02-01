
uint64_t bool geo::codec::decodeIntCompressorArray<int>(VMP4Chapter*, mgcl::ints::IntDecompressor<int>*, unsigned int, unsigned int, geo::codec::FixedBuffer<int>&)
                   (int64_t param_1, int64_t param_2, ulong param_3, ulong param_4, int64_t *param_5)

{
    int32_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t uStack_44;
    
    iVar4 = *param_5;
    iVar5 = param_5[1];
    uStack_44 = 0;
    if (param_2 == 0) {
        return 0;
    }
    uVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_1, &uStack_44);
    if (uVar2 != 0) {
        iVar3 = *(param_1 + 0x30);
        uVar2 = iVar3 + uStack_44;
        if (uVar2 < *(param_1 + 0x38) || uVar2 == *(param_1 + 0x38)) {
            *(param_1 + 0x30) = uVar2;
            iVar1 = mgcl::ints::IntDecompressor<int>::decompress(unsigned char const*, unsigned long, int, int, unsigned long, int*)
                              (param_2, *(param_1 + 0x28) + iVar3, uStack_44, param_3, param_4, iVar5 - iVar4 >> 2, 
                               iVar4);
            return iVar1 == 0;
        }
        uVar2 = 0;
    }
    return uVar2;
}
