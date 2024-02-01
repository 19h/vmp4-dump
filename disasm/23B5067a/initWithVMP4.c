
ulong -[GEOVectorTile initWithVMP4:localizationData:tileKey:]
                (uint64_t param_1, ulong param_2, ulong param_3, ulong param_4, uint8_t *param_5)

{
    int64_t *piVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint uVar4;
    ulong uVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uchar auVar19 [16];
    uchar auStack_120 [16];
    uint64_t auStack_110 [3];
    uint16_t uStack_f8;
    uint8_t uStack_f6;
    int64_t aiStack_f0 [2];
    ulong uStack_e0;
    char cStack_d9;
    ulong uStack_d8;
    uchar uStack_d0;
    int64_t aiStack_c8 [3];
    int64_t *piStack_b0;
    int64_t aiStack_a8 [3];
    int64_t *piStack_90;
    int64_t iStack_88;
    int64_t iStack_70;
    
    iStack_70 = **reloc.__stack_chk_guard;
    uVar5 = objc_retain(param_3);
    uVar6 = objc_retain(param_4);
    auStack_110[1] = *0x1d6cae8f8;
    auStack_110[0] = param_1;
    iVar7 = objc_msgSendSuper2(auStack_110, 0xdc8 + 0x1cf0d5000);
    if (iVar7 == 0) {
        uVar9 = 0;
        goto code_r0x0001930aec58;
    }
    uVar8 = objc_retainAutorelease(uVar6);
    uVar9 = _objc_msgSend$bytes();
    uVar10 = _objc_msgSend$length(uVar8);
    uVar9 = geo::codec::PBDataReaderObjC::PBDataReaderObjC(unsigned char const*, unsigned long)
                      (auStack_120, uVar9, uVar10);
    aiStack_f0[0] = 0;
    aiStack_f0[1] = 0;
    uStack_e0 = 0;
    uStack_d8 = 0x400000;
    piStack_b0 = NULL;
    uStack_d0 = 1;
    uVar2 = *param_5;
    if ((uVar2 & 0x7f) == 0x13) {
        uVar14 = *(param_5 + 1);
        uStack_f8 = (uVar14 >> 0x37 | uVar14 << -0x37 + 0x40) & 1;
        auStack_110[2] =
             (uVar14 & 0x7fffff80000000) << 9 & 0xffffff8000000000 | (uVar14 >> 6) << -0x32 + 0x40 & 0x7fffffc000 |
             uVar14 << -0x18 + 0x20 & 0x3f00;
        uStack_f6 = 0;
code_r0x0001930ae97c:
code_r0x0001930ae980:
        auStack_110[2] = auStack_110[2] | uVar2;
    }
    else {
        if ((uVar2 & 0x7f) == 0x10) {
            uVar14 = *(param_5 + 1);
            uVar17 = *(param_5 + 9);
            auStack_110[2] =
                 (uVar14 & 0xffffff00000000) << 8 & 0xffffff0000000000 |
                 ((uVar14 >> 6 | uVar14 << -6 + 0x40) & 0x3ffffff) << -0x32 + 0x40 & 0xffffffc000 |
                 uVar14 << -0x18 + 0x20 & 0x3f00;
            uStack_f6 = (uVar17 << 5 & 0xf00000 & 0xfff00000 |
                        ((uVar17 >> 0xb | uVar17 << -0xb + 0x20) & 0xf) << -0x10 + 0x20 & 0xf0000) >> 0x10;
            uStack_f8 = uVar14 >> 0x38 & 3 |
                        (uVar14 >> 0x3d & 7 | uVar17 << -0x1d + 0x20 & 0xfffffff8) << -0x1e + 0x20 & 0xfffffffc;
            goto code_r0x0001930ae980;
        }
        uVar14 = *(param_5 + 1);
        if ((uVar2 & 0x7f) == 0x14) {
            uVar3 = uVar14 >> 0x38;
            uStack_f8 = (uVar3 | uVar14 << -0x38 + 0x40) & 3;
            auStack_110[2] =
                 (uVar14 & 0xffffff00000000) << 8 & 0xffffff0000000000 |
                 ((uVar14 >> 6 | uVar14 << -6 + 0x40) & 0x3ffffff) << -0x32 + 0x40 & 0xffffffc000 |
                 uVar14 << -0x18 + 0x20 & 0x3f00;
            uStack_f6 = (uVar3 >> 2 | uVar14 << -0x3a + 0x40) & 0xf;
            goto code_r0x0001930ae97c;
        }
        uVar18 = (*(param_5 + 0xd) & 0xffff | param_5[0xf] << -0x10 + 0x20 & 0xffff0000) << -0x20 + 0x40 &
                 0xffffffff00000000;
        uVar16 = *(param_5 + 9) & 0xffffffff | uVar18;
        uVar17 = uVar18 >> 0x20;
        uVar18 = CONCAT44((uVar18 >> 0x30 | uVar16 << -0x30 + 0x40) & 0xff, uVar17 >> 2) & *0x193ae32d0;
        uVar9 = 0;
        uVar17 = uVar17 & 0xffffff & 0xfff00003 | uVar18 << 2;
        auStack_110[2] = (uVar14 >> 0x20 | uVar16 << -0x20 + 0x40) & 0xffffffffffffff00 | uVar2;
        uStack_f8 = uVar17;
        uStack_f6 = (uVar17 | (uVar18 >> 0x20) << 0x10) >> 0x10;
    }
    _objc_msgSend$modernManager(uVar9, *0x1d6ca68f0);
    auVar19 = objc_retainAutoreleasedReturnValue();
    _objc_msgSend$languageForTileKey:(auVar19._0_8_, auVar19._8_8_, param_5);
    objc_retainAutoreleasedReturnValue();
    uVar9 = objc_retainAutorelease();
    iVar11 = _objc_msgSend$UTF8String();
    objc_release(uVar9);
    objc_release(auVar19._0_8_);
    iVar13 = 0x30f + 0x193afb000;
    if (iVar11 != 0) {
        iVar13 = iVar11;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B7v160006IDnEEPKc(aiStack_a8, iVar13);
    aiStack_f0[1] = aiStack_a8[1];
    aiStack_f0[0] = aiStack_a8[0];
    uStack_e0 = aiStack_a8[2];
    piVar1 = *0x8 + -200;
    aiStack_a8[0] = 0x920 + 0x1db962000 + 0x10;
    if (piStack_b0 == piVar1) {
        iStack_88 = 0x920 + 0x1db962000 + 0x10;
        piStack_90 = NULL;
        (**(aiStack_c8[0] + 0x18))(piVar1, aiStack_a8);
        (**(*piStack_b0 + 0x20))();
        piStack_b0 = NULL;
        piStack_90 = aiStack_a8;
        (**(iStack_88 + 0x18))(*0x8 + -0x88, piVar1);
        (**(iStack_88 + 0x20))(*0x8 + -0x88);
    }
    else {
        aiStack_c8[0] = 0x920 + 0x1db962000 + 0x10;
        piStack_90 = piStack_b0;
    }
    piStack_b0 = piVar1;
    std::__1::__function::__value_func<std::__1::unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > ()>::~__value_func[abi:v160006]()
              (aiStack_a8);
    uVar9 = objc_retainAutorelease(uVar5);
    uVar10 = _objc_msgSend$bytes();
    uVar9 = _objc_msgSend$length(uVar9);
    uVar8 = objc_retainAutorelease(uVar8);
    uVar12 = _objc_msgSend$bytes();
    uVar8 = _objc_msgSend$length(uVar8);
    geo::codec::initWithVMP4AndLocData(unsigned char*, unsigned long, unsigned char const*, unsigned long, GeoCodecsTileKey const*, geo::codec::PBDataReaderInterface&, GeoCodecsVMP4DecodingOptions const&)
              (uVar10, uVar9, uVar12, uVar8, auStack_110 + 2, auStack_120, aiStack_f0);
    iVar11 = aiStack_a8[0];
    iVar15 = aiStack_a8[1];
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    iVar13 = *(iVar7 + 0x10);
    *(iVar7 + 8) = iVar11;
    *(iVar7 + 0x10) = iVar15;
    if (iVar13 != 0) {
        std::__1::__shared_weak_count::__release_shared[abi:v160006]()();
    }
    if (aiStack_a8[1] != 0) {
        std::__1::__shared_weak_count::__release_shared[abi:v160006]()();
    }
    if (*(iVar7 + 8) == 0) {
        uVar9 = 0;
    }
    else {
        _objc_msgSend$modernManager(*0x1d6ca68f0);
        uVar9 = objc_retainAutoreleasedReturnValue();
        _objc_msgSend$activeTileGroup();
        auVar19 = objc_retainAutoreleasedReturnValue();
        _objc_msgSend$activeTileSetForKey:(auVar19._0_8_, auVar19._8_8_, param_5);
        uVar8 = objc_retainAutoreleasedReturnValue();
        uVar4 = _objc_msgSend$version();
        **(iVar7 + 8) = uVar4;
        objc_release(uVar8);
        objc_release(auVar19._0_8_);
        objc_release(uVar9);
        _objc_msgSend$initVariables(iVar7);
        uVar9 = objc_retain(iVar7);
    }
    std::__1::__function::__value_func<std::__1::unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > ()>::~__value_func[abi:v160006]()
              (piVar1);
    if (cStack_d9 < '\0') {
        operator delete(void*)(aiStack_f0[0]);
    }
    geo::codec::PBDataReaderObjC::~PBDataReaderObjC()(auStack_120);
code_r0x0001930aec58:
    objc_release(uVar6);
    objc_release(uVar5);
    objc_release(iVar7);
    if (**reloc.__stack_chk_guard == iStack_70) {
        return uVar9;
    }
    // WARNING: Subroutine does not return
    __stack_chk_fail();
}
