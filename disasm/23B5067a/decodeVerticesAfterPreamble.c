
ulong geo::codec::decodeVerticesAfterPreamble(VMP4Chapter*, VertexChapterPreamble const*, GeoCodecsCurveVertexPool**, GeoCodecsVertexPool**, bool, bool)
                (int64_t param_1, uint32_t *param_2, int64_t *param_3, int64_t *param_4, int32_t param_5)

{
    uint64_t *puVar1;
    uint uVar2;
    char cVar3;
    uint8_t uVar4;
    char cVar5;
    int32_t iVar6;
    int32_t iVar7;
    int32_t iVar8;
    int64_t *piVar9;
    uchar *puVar10;
    ulong uVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    uint32_t uVar24;
    int64_t iVar25;
    float *pfVar26;
    uint64_t uVar27;
    int64_t iVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    float fVar32;
    float8 fVar33;
    int64_t iStack_a8;
    int32_t iStack_9c;
    uint uStack_98;
    int32_t iStack_94;
    char cStack_8d;
    int32_t iStack_8c;
    int32_t iStack_88;
    char cStack_81;
    int64_t iStack_80;
    uchar uStack_71;
    
    uVar24 = *param_2;
    if (uVar24 == 0) {
        return 1;
    }
    uVar17 = param_2[1];
    uVar27 = uVar17;
    if (uVar17 == 0) {
        return 1;
    }
    *param_3 = 0;
    *param_4 = 0;
    if (((uVar17 >> 0x14 | uVar17 << -0x14 + 0x40 & 0xfff) & 0xfff) != 0 || uVar24 >> 0x14 != 0) {
        return 0;
    }
    cVar3 = *(param_2 + 6);
    piVar9 = geo::codec::Allocator::instance()();
    if (cVar3 == '\0') {
        puVar10 = (**(*piVar9 + 0x18))(piVar9, 1, 0x48);
        *param_4 = puVar10;
        if (puVar10 == NULL) {
            return 0;
        }
        *puVar10 = param_2[2];
        *(puVar10 + 0x10) = uVar27;
        piVar9 = geo::codec::Allocator::instance()();
        uVar11 = (**(*piVar9 + 0x10))(piVar9, uVar27 << 3, 8);
        *(*param_4 + 8) = uVar11;
        if (*(*param_4 + 8) == 0) {
            return 0;
        }
        *(*param_4 + 0x28) = *param_2;
        piVar9 = geo::codec::Allocator::instance()();
        uVar11 = (**(*piVar9 + 0x10))(piVar9, *param_2 << 4, 8);
        *(*param_4 + 0x20) = uVar11;
        if (*(*param_4 + 0x20) == 0) {
            return 0;
        }
    }
    else {
        puVar10 = (**(*piVar9 + 0x18))(piVar9, 1, 0x30);
        *param_3 = puVar10;
        *puVar10 = param_2[2];
        *(puVar10 + 0x10) = uVar27;
        piVar9 = geo::codec::Allocator::instance()();
        uVar11 = (**(*piVar9 + 0x10))(piVar9, uVar27 * 0xc, 8);
        *(*param_3 + 8) = uVar11;
        if (*(*param_3 + 8) == 0) {
            return 0;
        }
        *(*param_3 + 0x28) = *param_2;
        piVar9 = geo::codec::Allocator::instance()();
        uVar11 = (**(*piVar9 + 0x10))(piVar9, *param_2 << 4, 8);
        *(*param_3 + 0x20) = uVar11;
        if (*(*param_3 + 0x20) == 0) {
            return 0;
        }
    }
    uVar17 = 0;
    uVar24 = 0;
    uVar18 = 0;
    uVar22 = 0;
    uVar19 = 0;
    piVar9 = param_1 + 8;
    uVar23 = uVar27;
    do {
        iVar25 = uVar27 - uVar23;
        iVar6 = -1;
        if (uVar18 == 0) {
            uVar16 = param_2[2];
            uVar13 = *(param_1 + 0x18);
            uVar15 = *(param_1 + 0x10) * 8;
            if (uVar15 <= uVar13 + uVar16 && uVar13 + uVar16 != uVar15) {
                return 0;
            }
            uVar24 = 0;
            iVar7 = 8;
            if (param_2[2] == 0) {
                uVar17 = 0;
                uVar16 = param_2[4];
                if (uVar15 <= uVar13 + uVar16 && uVar13 + uVar16 != uVar15) {
                    return 0;
                }
            }
            else {
                iVar14 = *piVar9;
                uVar21 = uVar16;
                do {
                    uVar30 = 8 - (uVar13 & 7);
                    uVar31 = uVar21;
                    if (uVar30 <= uVar21) {
                        uVar31 = uVar30;
                    }
                    uVar17 = uVar31;
                    uVar24 = *(iVar14 + (uVar13 >> 3)) >> ((iVar7 - (uVar13 & 7)) - uVar17 & 0x1f) &
                             (iVar6 << (uVar17 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar17 & 0x1f);
                    uVar13 = uVar31 + uVar13;
                    *(param_1 + 0x18) = uVar13;
                    uVar21 = uVar21 - uVar31;
                } while (uVar21 != 0);
                if (uVar15 <= uVar13 + uVar16 && uVar13 + uVar16 != uVar15) {
                    return 0;
                }
                uVar17 = 0;
                do {
                    uVar31 = 8 - (uVar13 & 7);
                    uVar21 = uVar16;
                    if (uVar31 <= uVar16) {
                        uVar21 = uVar31;
                    }
                    uVar18 = uVar21;
                    uVar17 = *(iVar14 + (uVar13 >> 3)) >> ((iVar7 - (uVar13 & 7)) - uVar18 & 0x1f) &
                             (iVar6 << (uVar18 & 0x1f) ^ 0xffffffff) | uVar17 << (uVar18 & 0x1f);
                    uVar13 = uVar21 + uVar13;
                    *(param_1 + 0x18) = uVar13;
                    uVar16 = uVar16 - uVar21;
                } while (uVar16 != 0);
                uVar16 = param_2[4];
                if (uVar15 <= uVar13 + uVar16 && uVar13 + uVar16 != uVar15) {
                    return 0;
                }
            }
            uVar18 = 0;
            if (uVar16 != 0) {
                iVar14 = *piVar9;
                do {
                    uVar31 = 8 - (uVar13 & 7);
                    uVar21 = uVar16;
                    if (uVar31 <= uVar16) {
                        uVar21 = uVar31;
                    }
                    uVar19 = uVar21;
                    uVar18 = *(iVar14 + (uVar13 >> 3)) >> ((iVar7 - (uVar13 & 7)) - uVar19 & 0x1f) &
                             (iVar6 << (uVar19 & 0x1f) ^ 0xffffffff) | uVar18 << (uVar19 & 0x1f);
                    uVar13 = uVar21 + uVar13;
                    *(param_1 + 0x18) = uVar13;
                    uVar16 = uVar16 - uVar21;
                } while (uVar16 != 0);
            }
            uVar16 = param_2[5];
            if (uVar15 <= uVar13 + uVar16 && uVar13 + uVar16 != uVar15) {
                return 0;
            }
            uVar19 = 0;
            if (param_2[5] != 0) {
                iVar14 = *piVar9;
                do {
                    uVar21 = 8 - (uVar13 & 7);
                    uVar15 = uVar16;
                    if (uVar21 <= uVar16) {
                        uVar15 = uVar21;
                    }
                    uVar20 = uVar15;
                    uVar19 = *(iVar14 + (uVar13 >> 3)) >> ((iVar7 - (uVar13 & 7)) - uVar20 & 0x1f) &
                             (iVar6 << (uVar20 & 0x1f) ^ 0xffffffff) | uVar19 << (uVar20 & 0x1f);
                    uVar13 = uVar15 + uVar13;
                    *(param_1 + 0x18) = uVar13;
                    uVar16 = uVar16 - uVar15;
                } while (uVar16 != 0);
            }
            if (*param_2 <= uVar22) {
                return 0;
            }
            if (*(param_2 + 6) == '\0') {
                piVar12 = *(*param_4 + 0x20) + uVar22 * 0x10;
                *piVar12 = iVar25;
                piVar12[1] = uVar18 + 1;
                fVar32 = ~(iVar6 << (param_2[3] & 0x1f));
                pfVar26 = *(*param_4 + 8) + iVar25 * 8;
                *pfVar26 = uVar24 / fVar32;
                pfVar26[1] = uVar17 / fVar32;
                uVar22 = uVar22 + 1;
            }
            else {
                piVar12 = *(*param_3 + 0x20) + uVar22 * 0x10;
                *piVar12 = iVar25;
                piVar12[1] = uVar18 + 1;
                fVar32 = ~(iVar6 << (param_2[3] & 0x1f));
                pfVar26 = *(*param_3 + 8) + iVar25 * 0xc;
                *pfVar26 = uVar24 / fVar32;
                pfVar26[1] = uVar17 / fVar32;
                *(pfVar26 + 2) = 0;
                uVar22 = uVar22 + 1;
            }
        }
        else {
            if (uVar19 == 0) {
                return 0;
            }
            uVar16 = uVar19;
            uVar13 = *(param_1 + 0x18);
            uVar15 = *(param_1 + 0x10) * 8;
            if (uVar15 <= uVar13 + uVar16 && uVar13 + uVar16 != uVar15) {
                return 0;
            }
            uVar20 = 0;
            iVar14 = *piVar9;
            uVar21 = uVar16;
            do {
                uVar30 = 8 - (uVar13 & 7);
                uVar31 = uVar21;
                if (uVar30 <= uVar21) {
                    uVar31 = uVar30;
                }
                uVar29 = uVar31;
                uVar20 = *(iVar14 + (uVar13 >> 3)) >> ((8 - (uVar13 & 7)) - uVar29 & 0x1f) &
                         (iVar6 << (uVar29 & 0x1f) ^ 0xffffffff) | uVar20 << (uVar29 & 0x1f);
                uVar13 = uVar31 + uVar13;
                *(param_1 + 0x18) = uVar13;
                uVar21 = uVar21 - uVar31;
            } while (uVar21 != 0);
            if (uVar15 <= uVar13 + uVar16 && uVar13 + uVar16 != uVar15) {
                return 0;
            }
            uVar29 = 0;
            iVar7 = (uVar20 << (-uVar19 & 0x1f)) >> (-uVar19 & 0x1f);
            do {
                uVar31 = 8 - (uVar13 & 7);
                uVar21 = uVar16;
                if (uVar31 <= uVar16) {
                    uVar21 = uVar31;
                }
                uVar20 = uVar21;
                uVar29 = *(iVar14 + (uVar13 >> 3)) >> ((8 - (uVar13 & 7)) - uVar20 & 0x1f) &
                         (iVar6 << (uVar20 & 0x1f) ^ 0xffffffff) | uVar29 << (uVar20 & 0x1f);
                uVar13 = uVar21 + uVar13;
                *(param_1 + 0x18) = uVar13;
                uVar16 = uVar16 - uVar21;
            } while (uVar16 != 0);
            iVar8 = (uVar29 << (-uVar19 & 0x1f)) >> (-uVar19 & 0x1f);
            if (*(param_2 + 6) == '\0') {
                uVar24 = iVar7 + uVar24;
                uVar17 = iVar8 + uVar17;
                fVar32 = ~(iVar6 << (param_2[3] & 0x1f));
                uVar18 = uVar18 + -1;
                pfVar26 = *(*param_4 + 8) + iVar25 * 8;
                *pfVar26 = uVar24 / fVar32;
                pfVar26[1] = uVar17 / fVar32;
            }
            else {
                uVar16 = uVar13 + 1;
                if (uVar15 <= uVar16 && uVar16 != uVar15) {
                    return 0;
                }
                uVar4 = *(iVar14 + (uVar13 >> 3));
                *(param_1 + 0x18) = uVar16;
                uVar24 = iVar7 + uVar24;
                uVar17 = iVar8 + uVar17;
                fVar32 = ~(iVar6 << (param_2[3] & 0x1f));
                pfVar26 = *(*param_3 + 8) + iVar25 * 0xc;
                *pfVar26 = uVar24 / fVar32;
                pfVar26[1] = uVar17 / fVar32;
                uVar18 = uVar18 + -1;
                *(pfVar26 + 2) = uVar4 >> (7 & (uVar13 ^ 0xffffffff)) & 1;
                *(pfVar26 + 9) = 0;
            }
        }
        uVar23 = uVar23 + -1;
    } while (uVar23 != 0);
    if (param_5 == 0) {
        iVar25 = *(param_1 + 0x30) + (*(param_1 + 0x18) >> 3);
        if ((*(param_1 + 0x18) & 7) != 0) {
            iVar25 = iVar25 + 1;
        }
        *(param_1 + 0x30) = iVar25;
        *(param_1 + 0x20) = 0;
        if (*(param_2 + 6) != '\0') goto code_r0x0001938e5d90;
    }
    else {
        iVar6 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, &uStack_71);
        if (iVar6 == 0) {
            return 0;
        }
        iVar25 = *(param_1 + 0x30) + (*(param_1 + 0x18) >> 3);
        if ((*(param_1 + 0x18) & 7) != 0) {
            iVar25 = iVar25 + 1;
        }
        *(param_1 + 0x30) = iVar25;
        *(param_1 + 0x20) = 0;
        uVar27 = iVar25 + 1;
        if (*(param_1 + 0x38) <= uVar27 && uVar27 != *(param_1 + 0x38)) {
            return 0;
        }
        cVar5 = *(*(param_1 + 0x28) + iVar25);
        *(param_1 + 0x30) = uVar27;
        cVar3 = *(param_2 + 6);
        if (cVar5 != '\0') {
            piVar12 = geo::codec::Allocator::instance()();
            if (cVar3 == '\0') {
                uVar11 = (**(*piVar12 + 0x10))(piVar12, *(*param_4 + 0x10) << 2, 8);
                *(*param_4 + 0x18) = uVar11;
                iVar25 = *param_4;
            }
            else {
                uVar11 = (**(*piVar12 + 0x10))(piVar12, *(*param_3 + 0x10) << 2, 8);
                *(*param_3 + 0x18) = uVar11;
                iVar25 = *param_3;
            }
            iVar25 = *(iVar25 + 0x18);
            if (iVar25 == 0) {
                return 0;
            }
            iStack_80 = 0;
            uVar27 = *(param_1 + 0x30) + 8;
            if (*(param_1 + 0x38) <= uVar27 && uVar27 != *(param_1 + 0x38)) {
                return 0;
            }
            fVar33 = *(*(param_1 + 0x28) + *(param_1 + 0x30));
            *(param_1 + 0x30) = uVar27;
            iVar6 = geo::codec::chapterReadVarInt64(VMP4Chapter*, long long*)(param_1, &iStack_80);
            if (iVar6 == 0) {
                return 0;
            }
            uVar27 = *(param_1 + 0x30);
            if (uVar27 <= *(param_1 + 0x38)) {
                *(param_1 + 0x20) = 1;
                *(param_1 + 0x10) = *(param_1 + 0x38) - uVar27;
                *(param_1 + 0x18) = 0;
                *(param_1 + 8) = *(param_1 + 0x28) + uVar27;
            }
            cStack_81 = '\0';
            uVar27 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, &cStack_81);
            if ((uVar27 & 1) == 0) {
                return 0;
            }
            if (cStack_81 != '\0') {
                iStack_80 = -iStack_80;
            }
            iStack_8c = 0;
            iStack_88 = 0;
            iVar6 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar9, &iStack_88, 6);
            if (iVar6 == 0) {
                return 0;
            }
            iVar6 = iStack_88;
            iVar7 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar9, &iStack_8c, 6);
            if (iVar7 == 0) {
                return 0;
            }
            if (*param_2 != 0) {
                uVar27 = 0;
                iVar7 = iStack_8c;
                iStack_a8 = iStack_80;
                do {
                    if (*(param_2 + 6) == '\0') {
                        iVar14 = *param_4;
                    }
                    else {
                        iVar14 = *param_3;
                    }
                    puVar1 = *(iVar14 + 0x20) + uVar27 * 0x10;
                    uVar22 = *puVar1;
                    uVar23 = puVar1[1];
                    if (*(iVar14 + 0x10) <= uVar23 + uVar22 && uVar23 + uVar22 != *(iVar14 + 0x10)) {
                        return 0;
                    }
                    cStack_8d = '\0';
                    iVar8 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar9, &cStack_8d);
                    if (iVar8 == 0) {
                        return 0;
                    }
                    if (cStack_8d == '\0') {
                        if (uVar22 < uVar22 + uVar23) {
                            memset_pattern16(iVar25 + uVar22 * 4, 0x7a0 + 0x193af9000, uVar23 << 2);
                        }
                    }
                    else {
                        iStack_94 = 0;
                        uVar13 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                           (piVar9, &iStack_94, iVar6 + 1);
                        if ((uVar13 & 1) == 0) {
                            return 0;
                        }
                        iVar14 = iStack_94;
                        *(iVar25 + uVar22 * 4) = fVar33 * (iStack_a8 + iVar14);
                        uStack_98 = 0;
                        iVar8 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar9, &uStack_98, iVar7 + 1)
                        ;
                        if (iVar8 == 0) {
                            return 0;
                        }
                        if (uVar22 + 1 < uVar22 + uVar23) {
                            uVar2 = uStack_98;
                            iVar28 = uVar23 + -1;
                            pfVar26 = iVar25 + 4 + uVar22 * 4;
                            do {
                                iStack_9c = 0;
                                iVar8 = BitstreamUnpackSigned(Bitstream*, int*, unsigned long)
                                                  (piVar9, &iStack_9c, uVar2);
                                if (iVar8 == 0) {
                                    return 0;
                                }
                                iVar14 = iStack_9c + iVar14;
                                *pfVar26 = fVar33 * (iStack_a8 + iVar14);
                                iVar28 = iVar28 + -1;
                                pfVar26 = pfVar26 + 1;
                            } while (iVar28 != 0);
                        }
                    }
                    uVar27 = uVar27 + 1;
                } while (uVar27 < *param_2);
            }
            iVar25 = *(param_1 + 0x30) + (*(param_1 + 0x18) >> 3);
            if ((*(param_1 + 0x18) & 7) != 0) {
                iVar25 = iVar25 + 1;
            }
            *(param_1 + 0x30) = iVar25;
            *(param_1 + 0x20) = 0;
            return 1;
        }
        if (cVar3 != '\0') {
code_r0x0001938e5d90:
            iVar25 = *param_3;
            goto code_r0x0001938e5da0;
        }
    }
    iVar25 = *param_4;
code_r0x0001938e5da0:
    *(iVar25 + 0x18) = 0;
    return 1;
}
