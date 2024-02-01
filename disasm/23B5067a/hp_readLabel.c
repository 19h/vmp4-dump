
ulong geo::codec::hp_readLabel(GeoCodecsFeature*, VMP4Chapter*, unsigned long*, char const*, unsigned long, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t param_1, ulong param_2, uint64_t *param_3, uint64_t param_4, int64_t *param_5)

{
    int32_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    
    uVar5 = *param_3;
    uStack_54 = 0;
    uVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_2, &uStack_54);
    if ((uVar2 & 1) == 0) {
        uVar3 = **reloc.__stderrp;
code_r0x00019392983c:
        fprintf(uVar3, 0x8ff + 0x193b8a000);
        return 0;
    }
    *(param_1 + 0x20) = uStack_54;
    *(param_1 + 0x18) = *param_3;
    if (uStack_54 != 0) {
        uVar6 = 0;
        do {
            uStack_5c = 0;
            uStack_58 = 0;
            iVar1 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_2, &uStack_58);
            if (((iVar1 == 0) ||
                (iVar1 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_2, &uStack_5c),  iVar1 == 0
                )) || (uVar2 = uStack_58,  param_4 <= uVar2)) {
code_r0x000193929830:
                uVar3 = **reloc.__stderrp;
                goto code_r0x00019392983c;
            }
            iVar4 = *param_5;
            if (*(iVar4 + 0x420) <= *param_3) goto code_r0x000193929830;
            *(*(iVar4 + 0x418) + *param_3 * 0x18) = *(iVar4 + 0x358) + uVar2;
            uVar3 = geo::codec::langLocaleForOffset(unsigned long, GeoCodecsLabelLanguageLocale*, unsigned long)
                              (uVar2, *(iVar4 + 0x378), *(iVar4 + 0x380));
            iVar4 = *(*param_5 + 0x418);
            uVar2 = *param_3;
            *(iVar4 + uVar2 * 0x18 + 8) = uVar3;
            *param_3 = uVar2 + 1;
            uVar6 = uVar6 + 1;
        } while (uVar6 < uStack_54);
        if (*(param_1 + 0x20) != 0) {
            uVar3 = *(iVar4 + uVar5 * 0x18);
            goto code_r0x000193929808;
        }
    }
    uVar3 = 0;
code_r0x000193929808:
    *(param_1 + 0x10) = uVar3;
    return 1;
}
