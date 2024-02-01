
ulong geo::codec::_readHillShadeRaster(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    uint8_t uVar1;
    int32_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    uint uStack_48;
    uint32_t uStack_44;
    
    uVar7 = param_1[1];
    if (uVar7 != 0) {
        uVar6 = 0;
        do {
            if (*(*param_1 + uVar6 * 0x10) == 0x9e) {
                pcVar3 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                   (param_1, uVar6, 0x9e, *param_2 + 0x778);
                if (pcVar3 == NULL) {
                    return 1;
                }
                uStack_44 = 0;
                uVar7 = *(pcVar3 + 0x30) + 1;
                if (uVar7 < *(pcVar3 + 0x38) || uVar7 == *(pcVar3 + 0x38)) {
                    uVar1 = *(*(pcVar3 + 0x28) + *(pcVar3 + 0x30));
                    *(pcVar3 + 0x30) = uVar7;
                    iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, *param_2 + 0xb98);
                    if ((iVar2 != 0) &&
                       (iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, &uStack_44), 
                       iVar2 != 0)) {
                        if (uStack_44 != 0) {
                            piVar5 = geo::codec::Allocator::instance()();
                            iVar4 = (**(*piVar5 + 0x10))(piVar5, uStack_44, 8);
                            if (iVar4 != 0) {
                                uVar6 = uStack_44;
                                uVar7 = *(pcVar3 + 0x30) + uVar6;
                                if (uVar7 < *(pcVar3 + 0x38) || uVar7 == *(pcVar3 + 0x38)) {
                                    memcpy(iVar4, *(pcVar3 + 0x28) + *(pcVar3 + 0x30), uVar6);
                                    *(pcVar3 + 0x30) = *(pcVar3 + 0x30) + uVar6;
                                    iVar8 = *param_2;
                                    *(iVar8 + 0xb9c) = uStack_44;
                                    *(iVar8 + 0xba0) = iVar4;
                                    goto code_r0x00019392109c;
                                }
                            }
                        }
                        else {
code_r0x00019392109c:
                            if ((uVar1 | 2) == 2) {
                                uVar9 = 1;
                                goto code_r0x000193920ff8;
                            }
                            uStack_48 = 0;
                            iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar3, &uStack_48);
                            if (iVar2 != 0) {
                                uVar7 = *(pcVar3 + 0x30) + 1;
                                if (uVar7 < *(pcVar3 + 0x38) || uVar7 == *(pcVar3 + 0x38)) {
                                    uVar1 = *(*(pcVar3 + 0x28) + *(pcVar3 + 0x30));
                                    *(pcVar3 + 0x30) = uVar7;
                                    iVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                      (pcVar3, *param_2 + 0xb90);
                                    if (iVar2 != 0) {
                                        *(*param_2 + 0xba8) = uVar1;
                                        uVar9 = 1;
                                        if ((5 < uVar1) || ((1 << (uVar1 & 0x1f) & 0x2a) == 0))
                                        goto code_r0x000193920ff8;
                                        piVar5 = geo::codec::Allocator::instance()();
                                        iVar4 = (**(*piVar5 + 0x10))(piVar5, *(*param_2 + 0xb90), 8);
                                        iVar8 = *param_2;
                                        *(iVar8 + 0xb88) = iVar4;
                                        if (iVar4 != 0) {
                                            uVar6 = *(iVar8 + 0xb90);
                                            uVar7 = *(pcVar3 + 0x30) + uVar6;
                                            if (uVar7 < *(pcVar3 + 0x38) || uVar7 == *(pcVar3 + 0x38)) {
                                                memcpy(iVar4, *(pcVar3 + 0x28) + *(pcVar3 + 0x30), uVar6);
                                                *(pcVar3 + 0x30) = *(pcVar3 + 0x30) + uVar6;
                                                uVar9 = 1;
                                                goto code_r0x000193920ff8;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                uVar9 = 0;
code_r0x000193920ff8:
                if (*pcVar3 != '\0') {
                    piVar5 = geo::codec::Allocator::instance()();
                    (**(*piVar5 + 0x28))(piVar5, *(pcVar3 + 0x28), 0);
                }
                piVar5 = geo::codec::Allocator::instance()();
                (**(*piVar5 + 0x28))(piVar5, pcVar3, 0);
                return uVar9;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar7 && uVar7 != uVar6);
    }
    return 1;
}
