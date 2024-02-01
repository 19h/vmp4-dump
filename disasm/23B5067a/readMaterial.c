
ulong geo::codec::readMaterial(VMP4Chapter*, GeoCodecsDaVinciMaterial*, bool)
                (int64_t param_1, int64_t *param_2, int32_t param_3)

{
    uint64_t uVar1;
    uchar *puVar2;
    int64_t iVar3;
    uint uVar4;
    char cVar5;
    uint16_t uVar6;
    code *UNRECOVERED_JUMPTABLE;
    int64_t *piVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint *puVar13;
    
    if (param_3 != 0) {
        uVar10 = *(param_1 + 0x30) + 2;
        if (*(param_1 + 0x38) <= uVar10 && uVar10 != *(param_1 + 0x38)) {
            return 0;
        }
        *(param_2 + 0x12) = *(*(param_1 + 0x28) + *(param_1 + 0x30));
        *(param_1 + 0x30) = uVar10;
        piVar7 = geo::codec::Allocator::instance()();
        iVar8 = (**(*piVar7 + 0x10))(piVar7, *(param_2 + 0x12) << 3, 8);
        param_2[1] = iVar8;
        uVar10 = *(param_2 + 0x12);
        if (uVar10 != 0) {
            uVar11 = *(param_1 + 0x38);
            puVar13 = iVar8 + 4;
            uVar12 = *(param_1 + 0x30);
            do {
                uVar1 = uVar12 + 2;
                if (uVar11 <= uVar1 && uVar1 != uVar11) {
                    return 0;
                }
                uVar6 = *(*(param_1 + 0x28) + uVar12);
                *(param_1 + 0x30) = uVar1;
                uVar1 = uVar12 + 6;
                if (uVar11 <= uVar1 && uVar1 != uVar11) {
                    return 0;
                }
                uVar4 = *(*(param_1 + 0x28) + uVar12 + 2);
                *(param_1 + 0x30) = uVar1;
                puVar13[-1] = uVar6;
                *puVar13 = uVar4;
                puVar13 = puVar13 + 2;
                uVar10 = uVar10 + -1;
                uVar12 = uVar1;
            } while (uVar10 != 0);
        }
    }
    uVar10 = *(param_1 + 0x30) + 2;
    if (uVar10 < *(param_1 + 0x38) || uVar10 == *(param_1 + 0x38)) {
        *(param_2 + 2) = *(*(param_1 + 0x28) + *(param_1 + 0x30));
        *(param_1 + 0x30) = uVar10;
        piVar7 = geo::codec::Allocator::instance()();
        iVar8 = (**(*piVar7 + 0x10))(piVar7, *(param_2 + 2) << 5, 8);
        *param_2 = iVar8;
        if (*(param_2 + 2) == 0) {
            return 1;
        }
        uVar10 = *(param_1 + 0x30) + 1;
        if (uVar10 < *(param_1 + 0x38) || uVar10 == *(param_1 + 0x38)) {
            puVar2 = *param_2 + 0;
            puVar2[2] = *(*(param_1 + 0x28) + *(param_1 + 0x30));
            iVar8 = *(param_1 + 0x30);
            *(param_1 + 0x30) = iVar8 + 1;
            if (iVar8 + 2U < *(param_1 + 0x38) || iVar8 + 2U == *(param_1 + 0x38)) {
                puVar2[3] = *(*(param_1 + 0x28) + iVar8 + 1);
                iVar8 = *(param_1 + 0x30);
                uVar12 = *(param_1 + 0x38);
                *(param_1 + 0x30) = iVar8 + 1;
                uVar10 = iVar8 + 2;
                if (uVar10 < uVar12 || uVar10 == uVar12) {
                    iVar3 = *(param_1 + 0x28) + iVar8;
                    cVar5 = *(iVar3 + 1);
                    *(param_1 + 0x30) = uVar10;
                    if (cVar5 == '\0') {
                        *puVar2 = 0;
                        puVar2[1] = 1;
                    }
                    else {
                        *puVar2 = 1;
                        if (uVar12 <= iVar8 + 3U && iVar8 + 3U != uVar12) {
                            return 0;
                        }
                        puVar2[1] = *(iVar3 + 2);
                        *(param_1 + 0x30) = *(param_1 + 0x30) + 1;
                    }
                    piVar7 = geo::codec::Allocator::instance()();
                    uVar9 = (**(*piVar7 + 0x10))(piVar7, puVar2[1], 8);
                    *(puVar2 + 8) = uVar9;
                    piVar7 = geo::codec::Allocator::instance()();
                    uVar9 = (**(*piVar7 + 0x10))(piVar7, puVar2[1], 8);
                    *(puVar2 + 0x10) = uVar9;
                    uVar10 = puVar2[2];
                    if (puVar2[2] < 6) {
                        if (5 < uVar10) {
                            uVar10 = 0;
                        }
                        iVar8 = 0xb40 + 0x1938ea000;
                        do {
                            uVar10 = *(iVar8 + uVar10 * 4);
                            iVar8 = 0x1938ea844;
                            uVar10 = uVar10 + 0x1938ea844;
                            switch(uVar10) {
                            case 0x1938eab44:
                                goto code_r0x0001938eab44;
                            }
                        } while( true );
                    }
                }
            }
        }
    }
    return 0;
code_r0x0001938eab44:
    // WARNING: Treating indirect jump as call
    UNRECOVERED_JUMPTABLE = UndefinedInstructionException(0x1c, 0x1938eab44);
    uVar9 = (*UNRECOVERED_JUMPTABLE)();
    return uVar9;
}
