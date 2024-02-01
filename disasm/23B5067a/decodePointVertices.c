
uchar * geo::codec::decodePointVertices(VMP4Chapter*)(int64_t param_1)

{
    uint uVar1;
    char cVar2;
    int32_t iVar3;
    int32_t iVar4;
    int64_t *piVar5;
    uchar *puVar6;
    int64_t *piVar7;
    float *pfVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    float fVar20;
    float8 fVar21;
    uchar auStack_9c [4];
    int32_t iStack_98;
    char cStack_91;
    uint uStack_90;
    char cStack_89;
    uint64_t uStack_88;
    int32_t iStack_80;
    char cStack_79;
    ulong uStack_78;
    
    piVar5 = geo::codec::Allocator::instance()();
    puVar6 = (**(*piVar5 + 0x18))(piVar5, 1, 0x48);
    uStack_78 = 0;
    cStack_79 = '\0';
    if (puVar6 == NULL) {
        return NULL;
    }
    iVar3 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_1, &uStack_78 + 4);
    if ((iVar3 != 0) &&
       (iVar3 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(param_1, &uStack_78),  iVar3 != 0)) {
        uVar12 = *(param_1 + 0x30);
        iVar11 = *(param_1 + 0x38) - uVar12;
        if (*(param_1 + 0x38) < uVar12) {
            uVar9 = *(param_1 + 0x18);
            uVar12 = *(param_1 + 0x10) * 8;
            if (uVar12 <= uVar9 + 6 && uVar9 + 6 != uVar12) goto code_r0x0001938e49a0;
        }
        else {
            uVar9 = 0;
            *(param_1 + 0x20) = 1;
            *(param_1 + 0x10) = iVar11;
            *(param_1 + 0x18) = 0;
            *(param_1 + 8) = *(param_1 + 0x28) + uVar12;
            uVar12 = iVar11 * 8;
            if (uVar12 < 6) goto code_r0x0001938e49a0;
        }
        uVar19 = 0;
        piVar5 = param_1 + 8;
        iVar11 = *piVar5;
        uVar13 = 6;
        do {
            uVar18 = 8 - (uVar9 & 7);
            uVar15 = uVar13;
            if (uVar18 <= uVar13) {
                uVar15 = uVar18;
            }
            uVar16 = uVar15;
            uVar19 = *(iVar11 + (uVar9 >> 3)) >> ((8 - (uVar9 & 7)) - uVar16 & 0x3f) & ~(-1 << (uVar16 & 0x1f)) |
                     uVar19 << (uVar16 & 0x1f);
            uVar9 = uVar15 + uVar9;
            *(param_1 + 0x18) = uVar9;
            uVar13 = uVar13 - uVar15;
        } while (uVar13 != 0);
        if (uVar9 + 6 < uVar12 || uVar9 + 6 == uVar12) {
            uVar16 = 0;
            uVar13 = 6;
            do {
                uVar18 = 8 - (uVar9 & 7);
                uVar15 = uVar13;
                if (uVar18 <= uVar13) {
                    uVar15 = uVar18;
                }
                uVar17 = uVar15;
                uVar16 = *(iVar11 + (uVar9 >> 3)) >> ((8 - (uVar9 & 7)) - uVar17 & 0x1f) &
                         (-1 << (uVar17 & 0x1f) ^ 0xffffffff) | uVar16 << (uVar17 & 0x1f);
                uVar9 = uVar15 + uVar9;
                *(param_1 + 0x18) = uVar9;
                uVar13 = uVar13 - uVar15;
            } while (uVar13 != 0);
            if (uVar9 + 4 < uVar12 || uVar9 + 4 == uVar12) {
                uVar17 = 0;
                uVar12 = 4;
                do {
                    uVar15 = 8 - (uVar9 & 7);
                    uVar13 = uVar12;
                    if (uVar15 <= uVar12) {
                        uVar13 = uVar15;
                    }
                    uVar14 = uVar13;
                    uVar17 = *(iVar11 + (uVar9 >> 3)) >> ((8 - (uVar9 & 7)) - uVar14 & 0x1f) &
                             (-1 << (uVar14 & 0x1f) ^ 0xffffffff) | uVar17 << (uVar14 & 0x1f);
                    uVar15 = uVar9;
                    uVar9 = uVar13 + uVar15;
                    *(param_1 + 0x18) = uVar13 + uVar15;
                    uVar12 = uVar12 - uVar13;
                } while (uVar12 != 0);
                iVar3 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar5, &cStack_79);
                if (iVar3 != 0) {
                    *puVar6 = uVar19;
                    uVar12 = uStack_78._4_4_;
                    if (uStack_78._4_4_ == 0) {
                        return puVar6;
                    }
                    uVar14 = uStack_78;
                    if (uVar14 == 0) {
                        return puVar6;
                    }
                    if ((((uVar14 >> 0x14 == 0) && (uStack_78._4_4_ == uStack_78)) && (uVar16 == 0)) &&
                       ((uVar17 == 0 && (cStack_79 == '\0')))) {
                        piVar7 = geo::codec::Allocator::instance()();
                        iVar11 = (**(*piVar7 + 0x10))(piVar7, uVar12 * 8, 8);
                        *(puVar6 + 8) = iVar11;
                        *(puVar6 + 0x10) = uVar12;
                        if (iVar11 != 0) {
                            iVar11 = 0;
                            fVar20 = 1.0 / ~(-1 << (uVar19 & 0x1f));
                            do {
                                uStack_88 = (uStack_88 >> 0x20) << 0x20;
                                iStack_80 = 0;
                                iVar3 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                  (piVar5, &uStack_88, uVar19);
                                if ((iVar3 == 0) ||
                                   (uVar9 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                      (piVar5, &iStack_80, uVar19),  (uVar9 & 1) == 0))
                                goto code_r0x0001938e49a0;
                                iVar10 = *(puVar6 + 8);
                                *(iVar10 + iVar11) = uStack_88 * fVar20;
                                (iVar10 + iVar11)[1] = iStack_80 * fVar20;
                                iVar11 = iVar11 + 8;
                            } while (uVar12 * 8 - iVar11 != 0);
                            iVar11 = *(param_1 + 0x30) + (*(param_1 + 0x18) >> 3);
                            if ((*(param_1 + 0x18) & 7) != 0) {
                                iVar11 = iVar11 + 1;
                            }
                            *(param_1 + 0x30) = iVar11;
                            *(param_1 + 0x20) = 0;
                            if (*(param_1 + 0x40) < 0x44) {
                                return puVar6;
                            }
                            uVar9 = iVar11 + 1;
                            if (uVar9 < *(param_1 + 0x38) || uVar9 == *(param_1 + 0x38)) {
                                cVar2 = *(*(param_1 + 0x28) + iVar11);
                                *(param_1 + 0x30) = uVar9;
                                if (cVar2 == '\0') {
                                    return puVar6;
                                }
                                piVar7 = geo::codec::Allocator::instance()();
                                pfVar8 = (**(*piVar7 + 0x10))(piVar7, uVar12 << 2, 8);
                                if (pfVar8 != NULL) {
                                    *(puVar6 + 0x18) = pfVar8;
                                    uVar9 = *(param_1 + 0x30) + 8;
                                    if (uVar9 < *(param_1 + 0x38) || uVar9 == *(param_1 + 0x38)) {
                                        fVar21 = *(*(param_1 + 0x28) + *(param_1 + 0x30));
                                        *(param_1 + 0x30) = uVar9;
                                        uStack_88 = 0;
                                        uVar9 = geo::codec::chapterReadVarInt64(VMP4Chapter*, long long*)
                                                          (param_1, &uStack_88);
                                        if ((uVar9 & 1) != 0) {
                                            uVar9 = *(param_1 + 0x30);
                                            if (uVar9 <= *(param_1 + 0x38)) {
                                                *(param_1 + 0x20) = 1;
                                                *(param_1 + 0x10) = *(param_1 + 0x38) - uVar9;
                                                *(param_1 + 0x18) = 0;
                                                *(param_1 + 8) = *(param_1 + 0x28) + uVar9;
                                            }
                                            cStack_89 = '\0';
                                            uVar9 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar5, &cStack_89);
                                            if ((uVar9 & 1) != 0) {
                                                if (cStack_89 != '\0') {
                                                    uStack_88 = -uStack_88;
                                                }
                                                iStack_80 = 0;
                                                uStack_90 = 0;
                                                iVar3 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                                  (piVar5, &iStack_80);
                                                if ((iVar3 != 0) &&
                                                   (iVar3 = BitstreamUnpackBitcount(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar5, &uStack_90),  iVar3 != 0)) {
                                                    iVar3 = iStack_80;
                                                    uVar9 = uStack_88;
                                                    uVar1 = uStack_90;
                                                    while( true ) {
                                                        cStack_91 = '\0';
                                                        iVar4 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                          (piVar5, &cStack_91);
                                                        if (iVar4 == 0) break;
                                                        if (cStack_91 == '\0') {
                                                            *pfVar8 = 3.402823e+38;
                                                        }
                                                        else {
                                                            iStack_98 = 0;
                                                            iVar4 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar5, &iStack_98, iVar3);
                                                            if (iVar4 == 0) break;
                                                            *pfVar8 = fVar21 * (uVar9 + iStack_98);
                                                            uVar13 = 
                                                            BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (piVar5, auStack_9c, uVar1);
                                                            if ((uVar13 & 1) == 0) break;
                                                        }
                                                        pfVar8 = pfVar8 + 1;
                                                        uVar12 = uVar12 + -1;
                                                        if (uVar12 == 0) {
                                                            iVar11 = *(param_1 + 0x30) + (*(param_1 + 0x18) >> 3);
                                                            if ((*(param_1 + 0x18) & 7) != 0) {
                                                                iVar11 = iVar11 + 1;
                                                            }
                                                            *(param_1 + 0x30) = iVar11;
                                                            *(param_1 + 0x20) = 0;
                                                            return puVar6;
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
                }
            }
        }
    }
code_r0x0001938e49a0:
    if (*(puVar6 + 8) != 0) {
        piVar5 = geo::codec::Allocator::instance()();
        (**(*piVar5 + 0x28))(piVar5, *(puVar6 + 8), 0);
    }
    piVar5 = geo::codec::Allocator::instance()();
    (**(*piVar5 + 0x28))(piVar5, puVar6, 0);
    return NULL;
}
