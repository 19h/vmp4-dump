
ulong geo::codec::decodePointCloud(VMP4Chapter*, unsigned int const&, GeoCodecsPointCloud&)
                (int64_t param_1, uint32_t *param_2, int64_t *param_3)

{
    uint64_t uVar1;
    uint *puVar2;
    uint *puVar3;
    code *UNRECOVERED_JUMPTABLE;
    int32_t iVar4;
    int64_t *piVar5;
    ulong *puVar6;
    int64_t **ppiVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t **appiStack_128 [3];
    int64_t *piStack_110;
    int64_t *apiStack_108 [4];
    int64_t *apiStack_e8 [2];
    int64_t iStack_d8;
    int64_t *piStack_d0;
    int64_t aiStack_c8 [3];
    int64_t *piStack_b0;
    int64_t iStack_a8;
    uint uStack_a0;
    uint uStack_9c;
    int64_t iStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t *piStack_80;
    int64_t *piStack_78;
    int64_t ***pppiStack_70;
    uchar uStack_68;
    
    uVar16 = *param_2;
    iVar17 = *(param_1 + 0x30);
    uVar1 = iVar17 + uVar16;
    if (*(param_1 + 0x38) <= uVar1 && uVar1 != *(param_1 + 0x38)) {
        return 0;
    }
    piVar5 = operator new(unsigned long)(0x40);
    puVar6 = operator new(unsigned long)(0xf8);
    puVar6[0x1e] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x17] = 0;
    puVar6[0x16] = 0;
    puVar6[0x19] = 0;
    puVar6[0x18] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    puVar6[0x15] = 0;
    puVar6[0x14] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    *(puVar6 + 0x4c) = 0x3f800000;
    *(puVar6 + 0x1a) = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    *(piVar5 + 7) = 0;
    piVar5[6] = 0;
    iVar10 = *(param_1 + 0x28);
    *piVar5 = puVar6;
    piVar5[1] = iVar10 + iVar17;
    piVar5[2] = uVar16;
    piVar5[3] = uVar16;
    piStack_78 = piVar5;
    iVar4 = mgcl::gpcc::Decoder::parseMetadata()(*0x8 + -0x78);
    piVar5 = piStack_78;
    if (iVar4 != 0) {
        piStack_78 = NULL;
        if (piVar5 == NULL) {
            return 0;
        }
        if (piVar5[4] != 0) {
            piVar5[5] = piVar5[4];
            operator delete(void*)();
        }
        iVar17 = *piVar5;
        *piVar5 = 0;
        if (iVar17 != 0) {
            std::__1::default_delete<gcl::gpcc::Decoder::Impl>::operator()[abi:v160006](gcl::gpcc::Decoder::Impl*) const
                      (piVar5);
        }
        operator delete(void*)(piVar5);
        return 0;
    }
    iVar10 = *(piStack_78 + 7);
    std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)
              (*0x8 + -0x98, iVar10 * 3);
    iStack_a8 = iStack_98;
    uStack_a0 = iStack_90 - iStack_98 >> 2;
    uStack_9c = 3;
    iVar18 = piStack_78[4];
    iVar17 = piStack_78[5];
    aiStack_c8[0] = 0;
    aiStack_c8[1] = 0;
    aiStack_c8[2] = 0;
    piStack_b0 = geo::codec::Allocator::instance()();
    uVar16 = iVar17 - iVar18;
    uVar1 = (uVar16 << 0x3f - (-1 + 0x24)) >> -0x20 + 0x40;
    apiStack_e8[0] = aiStack_c8;
    apiStack_e8[1] = (apiStack_e8[1] >> 8) << 8;
    iVar17 = uVar1 * 0x10;
    if ((uVar16 & 0xffffffff0) == 0) {
        iVar18 = aiStack_c8[1] - aiStack_c8[0];
        if (aiStack_c8[1] - aiStack_c8[0] != 0) goto code_r0x0001938ebf14;
code_r0x0001938ebf90:
        iVar9 = 0;
    }
    else {
        if ((uVar1 << 2) >> 0x3e != 0) {
            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::__throw_length_error[abi:v160006]() const
                      (aiStack_c8);
            goto code_r0x0001938ec420;
        }
        aiStack_c8[0] = (**(*piStack_b0 + 0x10))(piStack_b0, iVar17, 4);
        iVar18 = 0;
        aiStack_c8[1] = aiStack_c8[0] + uVar1 * 0x10;
        do {
            if (aiStack_c8[0] + iVar18 != NULL) {
                *(aiStack_c8[0] + iVar18) = 0;
            }
            iVar18 = iVar18 + 4;
        } while (iVar17 - iVar18 != 0);
        iVar18 = aiStack_c8[1] - aiStack_c8[0];
        aiStack_c8[2] = aiStack_c8[1];
        if (iVar18 == 0) goto code_r0x0001938ebf90;
code_r0x0001938ebf14:
        uVar11 = 0;
        uVar12 = 0;
        iVar9 = 0;
        iVar13 = piStack_78[4];
        uVar14 = piStack_78[5] - iVar13 >> 4;
        do {
            uVar15 = uVar11 & 0x7fffffff;
            puVar2 = iVar13 + uVar15 * 0x10;
            if (uVar14 < uVar15 || uVar14 == uVar15) {
                puVar2 = NULL;
            }
            puVar3 = aiStack_c8[0] + uVar12 * 4;
            *puVar3 = *puVar2;
            puVar3[1] = puVar2[1];
            puVar3[2] = puVar2[2];
            puVar3[3] = puVar2[3];
            iVar9 = iVar9 + puVar2[2] * iVar10;
            uVar12 = uVar12 + 4;
            uVar11 = uVar11 + 1;
        } while (uVar12 < iVar18 >> 2);
    }
    std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::vector(unsigned long)(apiStack_e8, iVar9);
    apiStack_108[0] = NULL;
    apiStack_108[1] = NULL;
    apiStack_108[2] = NULL;
    apiStack_108[3] = geo::codec::Allocator::instance()();
    uVar12 = uVar16 * 0x10000000;
    appiStack_128[0] = apiStack_108;
    appiStack_128[1] = (appiStack_128[1] >> 8) << 8;
    if (uVar12 >> 0x20 != 0) {
        if (uVar12 < 0) {
            std::__1::vector<mgcl::gpcc::IntArrayBuffer, geo::StdAllocator<mgcl::gpcc::IntArrayBuffer, geo::codec::Allocator> >::__throw_length_error[abi:v160006]() const
                      ();
            goto code_r0x0001938ec420;
        }
        apiStack_108[0] = (**(*apiStack_108[3] + 0x10))(apiStack_108[3], iVar17, 8);
        apiStack_108[1] = apiStack_108[0] + uVar1 * 2;
        piVar5 = apiStack_108[0];
        do {
            if (piVar5 != NULL) {
                *piVar5 = 0;
                piVar5[1] = 0;
            }
            piVar5 = piVar5 + 2;
            iVar17 = iVar17 + -0x10;
            apiStack_108[2] = apiStack_108[1];
        } while (iVar17 != 0);
    }
    appiStack_128[0] = NULL;
    appiStack_128[1] = NULL;
    appiStack_128[2] = NULL;
    piStack_110 = geo::codec::Allocator::instance()();
    pppiStack_70 = appiStack_128;
    uStack_68 = 0;
    if (uVar12 >> 0x20 != 0) {
        if (uVar12 < 0) {
            std::__1::vector<mgcl::gpcc::IntArrayBuffer*, geo::StdAllocator<mgcl::gpcc::IntArrayBuffer*, geo::codec::Allocator> >::__throw_length_error[abi:v160006]() const
                      ();
code_r0x0001938ec420:
    // WARNING: Treating indirect jump as call
            UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x1938ec424);
            uVar8 = (*UNRECOVERED_JUMPTABLE)();
            return uVar8;
        }
        iVar17 = uVar1 * 8;
        appiStack_128[0] = (**(*piStack_110 + 0x10))(piStack_110, iVar17, 8);
        appiStack_128[1] = appiStack_128[0] + uVar1;
        ppiVar7 = appiStack_128[0];
        do {
            if (ppiVar7 != NULL) {
                *ppiVar7 = NULL;
            }
            ppiVar7 = ppiVar7 + 1;
            iVar17 = iVar17 + -8;
            appiStack_128[2] = appiStack_128[1];
        } while (iVar17 != 0);
    }
    if ((uVar16 & 0xffffffff0) != 0) {
        iVar17 = 0;
        uVar16 = 0;
        iVar18 = 0;
        if (uVar1 < 2) {
            uVar1 = 1;
        }
        do {
            iVar4 = *(aiStack_c8[0] + iVar17 + 8);
            iVar9 = iVar4 * iVar10;
            piVar5 = apiStack_108[0] + iVar17;
            *piVar5 = apiStack_e8[0] + iVar18 * 4;
            *(piVar5 + 1) = iVar9;
            *(piVar5 + 0xc) = iVar4;
            appiStack_128[0][uVar16] = apiStack_108[0] + iVar17;
            iVar18 = iVar9 + iVar18;
            uVar16 = uVar16 + 1;
            iVar17 = iVar17 + 0x10;
        } while (uVar1 != uVar16);
    }
    iVar4 = mgcl::gpcc::Decoder::decode(mgcl::gpcc::IntArrayBuffer&, mgcl::gpcc::IntArrayBuffer* const*, unsigned long)
                      (*0x8 + -0x78, &iStack_a8, appiStack_128[0], appiStack_128[1] - appiStack_128[0] >> 3);
    if (iVar4 == 0) {
        uVar1 = *(piStack_78 + 7) * 3;
        uVar16 = iStack_90 - iStack_98 >> 2;
        if (uVar1 < uVar16 || uVar1 - uVar16 == 0) {
            if (uVar1 < uVar16) {
                iStack_90 = iStack_98 + *(piStack_78 + 7) * 0xc;
            }
        }
        else {
            std::__1::vector<int, geo::StdAllocator<int, geo::codec::Allocator> >::__append(unsigned long)
                      (*0x8 + -0x98, uVar1 - uVar16);
        }
        iVar17 = *param_3;
        if (iVar17 != 0) {
            param_3[1] = iVar17;
            (**(*param_3[3] + 0x28))(param_3[3], iVar17, param_3[2] - iVar17);
            *param_3 = 0;
            param_3[1] = 0;
            param_3[2] = 0;
        }
        param_3[1] = iStack_90;
        *param_3 = iStack_98;
        param_3[2] = iStack_88;
        iStack_98 = 0;
        iStack_90 = 0;
        iStack_88 = 0;
        iVar17 = param_3[4];
        if (iVar17 != 0) {
            param_3[5] = iVar17;
            (**(*param_3[7] + 0x28))(param_3[7], iVar17, param_3[6] - iVar17);
            param_3[4] = 0;
            param_3[5] = 0;
            param_3[6] = 0;
        }
        iVar17 = param_3[8];
        param_3[5] = apiStack_e8[1];
        param_3[4] = apiStack_e8[0];
        param_3[6] = iStack_d8;
        apiStack_e8[0] = NULL;
        apiStack_e8[1] = NULL;
        iStack_d8 = 0;
        if (iVar17 != 0) {
            param_3[9] = iVar17;
            (**(*param_3[0xb] + 0x28))(param_3[0xb], iVar17, param_3[10] - iVar17);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
        }
        param_3[9] = aiStack_c8[1];
        param_3[8] = aiStack_c8[0];
        param_3[10] = aiStack_c8[2];
        aiStack_c8[0] = 0;
        aiStack_c8[1] = 0;
        aiStack_c8[2] = 0;
        if (appiStack_128[0] == NULL) goto code_r0x0001938ec2b0;
    }
    else if (appiStack_128[0] == NULL) goto code_r0x0001938ec2b0;
    appiStack_128[1] = appiStack_128[0];
    (**(*piStack_110 + 0x28))(piStack_110, appiStack_128[0], appiStack_128[2] - appiStack_128[0]);
code_r0x0001938ec2b0:
    if (apiStack_108[0] != NULL) {
        apiStack_108[1] = apiStack_108[0];
        (**(*apiStack_108[3] + 0x28))(apiStack_108[3], apiStack_108[0], apiStack_108[2] - apiStack_108[0]);
    }
    if (apiStack_e8[0] != NULL) {
        apiStack_e8[1] = apiStack_e8[0];
        (**(*piStack_d0 + 0x28))(piStack_d0, apiStack_e8[0], iStack_d8 - apiStack_e8[0]);
    }
    if (aiStack_c8[0] != 0) {
        aiStack_c8[1] = aiStack_c8[0];
        (**(*piStack_b0 + 0x28))(piStack_b0, aiStack_c8[0], aiStack_c8[2] - aiStack_c8[0]);
    }
    if (iStack_98 != 0) {
        iStack_90 = iStack_98;
        (**(*piStack_80 + 0x28))(piStack_80, iStack_98, iStack_88 - iStack_98);
    }
    piVar5 = piStack_78;
    piStack_78 = NULL;
    if (piVar5 != NULL) {
        iVar17 = piVar5[4];
        if (iVar17 != 0) {
            piVar5[5] = iVar17;
            operator delete(void*)();
        }
        iVar17 = *piVar5;
        *piVar5 = 0;
        if (iVar17 != 0) {
            std::__1::default_delete<gcl::gpcc::Decoder::Impl>::operator()[abi:v160006](gcl::gpcc::Decoder::Impl*) const
                      (piVar5);
        }
        operator delete(void*)(piVar5);
    }
    if (iVar4 != 0) {
        return 0;
    }
    *(param_1 + 0x30) = *(param_1 + 0x30) + *param_2;
    return 1;
}
