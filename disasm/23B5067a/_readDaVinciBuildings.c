
ulong geo::codec::_readDaVinciBuildings(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, int64_t *param_2)

{
    int32_t *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    float8 *pfVar4;
    int64_t iVar5;
    int32_t *piVar6;
    int32_t *piVar7;
    int32_t *piVar8;
    uint32_t *puVar9;
    int32_t *piVar10;
    int32_t *piVar11;
    uint32_t *puVar12;
    int32_t *piVar13;
    int32_t *piVar14;
    uint32_t *puVar15;
    uint *puVar16;
    uchar auVar17 [16];
    float8 fVar18;
    code *UNRECOVERED_JUMPTABLE;
    int32_t iVar19;
    char *pcVar20;
    ulong *puVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    int64_t iVar24;
    uint64_t uVar25;
    ulong uVar26;
    int32_t iVar27;
    uint32_t *puVar28;
    uint32_t uVar29;
    uchar *puVar30;
    uint64_t uVar31;
    uchar uVar32;
    int32_t iVar33;
    uint32_t uVar34;
    uint64_t uVar35;
    float *pfVar36;
    uint32_t *puVar37;
    ulong uVar38;
    uint32_t *puVar39;
    int64_t iVar40;
    int64_t iVar41;
    int64_t iVar42;
    int32_t iVar43;
    int32_t iVar44;
    uint64_t uVar45;
    uint64_t uVar46;
    ulong uVar47;
    float8 fVar48;
    float8 fVar49;
    float8 fVar50;
    int32_t iVar51;
    float8 fVar52;
    uchar auVar53 [16];
    uchar auVar54 [16];
    uchar auVar55 [16];
    uchar auVar56 [16];
    int64_t aiStack_220 [4];
    char *pcStack_200;
    int32_t iStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    uint32_t *puStack_1d0;
    uint64_t uStack_1c8;
    int64_t iStack_1c0;
    ulong uStack_1b8;
    int64_t iStack_1b0;
    int64_t *piStack_1a8;
    int64_t iStack_1a0;
    ulong uStack_198;
    int64_t iStack_190;
    int64_t *piStack_188;
    int64_t iStack_180;
    ulong uStack_178;
    int64_t iStack_170;
    int64_t *piStack_168;
    int64_t iStack_160;
    int16_t iStack_158;
    int16_t iStack_156;
    float8 fStack_150;
    uchar auStack_148 [8];
    float8 fStack_140;
    int32_t iStack_134;
    uchar uStack_130;
    uint32_t uStack_124;
    ulong *puStack_120;
    int64_t iStack_118;
    int64_t *piStack_110;
    int64_t iStack_108;
    uint uStack_fc;
    int64_t iStack_f8;
    int64_t iStack_f0;
    ulong uStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    int32_t iStack_c4;
    uint32_t *puStack_c0;
    uint32_t *puStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    char cStack_a4;
    int64_t iStack_a0;
    uchar uStack_98;
    ulong *puStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    code **ppcStack_78;
    int64_t iStack_70;
    
    iStack_70 = **reloc.__stack_chk_guard;
    uVar25 = param_1[1];
    if (uVar25 != 0) {
        uVar23 = 0;
        do {
            if (*(*param_1 + uVar23 * 0x10) == 0x8e) {
                pcVar20 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar23, 0x8e, *param_2 + 0x778);
                if (pcVar20 != NULL) {
                    puStack_120 = 0x4ec + 0x193b8a000;
                    iStack_118 = *param_2;
                    piStack_110 = param_2[1];
                    if (piStack_110 != NULL) {
                        tmp_ldXn = piStack_110[1];
                        iVar24 = tmp_ldXn;
                        tmp_stXn = iVar24 + 1;
                        iVar24 = tmp_stXn;
                        piStack_110[1] = iVar24;
                        uVar38 = tmp_ldXn;
                    }
                    iStack_108 = std::__1::chrono::steady_clock::now()();
                    uStack_124 = 0;
                    uStack_130 = 0;
                    iStack_180 = 0;
                    uStack_178 = 0;
                    iStack_170 = 0;
                    piStack_168 = geo::codec::Allocator::instance()();
                    iStack_1a0 = 0;
                    uStack_198 = 0;
                    iStack_190 = 0;
                    piStack_188 = geo::codec::Allocator::instance()();
                    *(&stack0x00000000 + -0x1c0) = 0;
                    *(&stack0x00000000 + -0x1b8) = 0;
                    iStack_1b0 = 0;
                    piStack_1a8 = geo::codec::Allocator::instance()();
                    uVar25 = *(pcVar20 + 0x30) + 4;
                    if (*(pcVar20 + 0x38) <= uVar25 && uVar25 != *(pcVar20 + 0x38)) {
                        uVar38 = **reloc.__stderrp;
                        uVar26 = 0x2345;
                        goto code_r0x0001939190cc;
                    }
                    uVar34 = *(*(pcVar20 + 0x28) + *(pcVar20 + 0x30));
                    *(pcVar20 + 0x30) = uVar25;
                    if (4 < uVar34 + -0x10) {
                        uVar38 = **reloc.__stderrp;
                        uVar26 = 0x2346;
                        goto code_r0x0001939190cc;
                    }
                    uVar25 = geo::codec::MercatorDequantizer::readInfo(VMP4Chapter*)(*0x8 + -0x160, pcVar20);
                    if ((uVar25 & 1) == 0) {
                        uVar38 = **reloc.__stderrp;
                        uVar26 = 0x2348;
                        goto code_r0x0001939190cc;
                    }
                    uVar25 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar20, *0x8 + -0x124);
                    uVar29 = uStack_124;
                    if ((uVar25 & 1) == 0) {
                        uVar38 = **reloc.__stderrp;
                        uVar26 = 0x234a;
                        goto code_r0x0001939190cc;
                    }
                    iVar40 = *param_2;
                    *(iVar40 + 0x9c0) = 0x12 < uVar34 && uVar34 != 0x13;
                    iVar24 = *(pcVar20 + 0x28);
                    iVar41 = *(pcVar20 + 0x30);
                    uStack_a8 = 0x1010101;
                    cStack_a4 = '\0';
                    puStack_c0 = NULL;
                    puStack_b8 = NULL;
                    uStack_b0 = 0;
                    iStack_c4 = 0;
                    iStack_e0 = 0;
                    iStack_d8 = 0;
                    uStack_d0 = 0;
                    iStack_f8 = 0;
                    iStack_f0 = 0;
                    uStack_e8 = 0;
                    uStack_fc = 0;
                    ppcStack_78 = operator new(unsigned long)(0x40);
                    *ppcStack_78 = typeinfo for geo::Allocator + 0x8d0 + 0x10;
                    ppcStack_78[1] = *0x8 + -0xf9;
                    ppcStack_78[2] = *0x8 + -0xfa;
                    ppcStack_78[3] = *0x8 + -0xfb;
                    ppcStack_78[4] = iVar40 + 0x930;
                    ppcStack_78[5] = *0x8 + -0xe0;
                    ppcStack_78[6] = *0x8 + -0xfc;
                    ppcStack_78[7] = *0x8 + -0xf8;
                    iVar19 = mgcl::bldg::decompress(char const*, unsigned long, mgcl::bldg::BuildingCfg&, std::__1::vector<char, std::__1::allocator<char> >&, int&, std::__1::function<mgcl::bldg::ArrayBuffer (unsigned long, mgcl::gpcc::AttributeDescription const&)> const&)
                                       (iVar24 + iVar41, uVar29, *0x8 + -0xa8, *0x8 + -0xc0, *0x8 + -0xc4, *0x8 + -0x90)
                    ;
                    if (ppcStack_78 == *0x8 + -0x90) {
                        (*puStack_90[4])(*0x8 + -0x90);
                    }
                    else if (ppcStack_78 != NULL) {
                        (**(*ppcStack_78 + 0x28))();
                    }
                    if ((uStack_fc._2_1_ != '\0') && (uStack_fc._3_1_ == '\0')) {
                        iVar41 = *(iVar40 + 0x930);
                        *(iVar40 + 0x938) = iVar41;
                        iVar24 = *(iVar40 + 0x940) - iVar41;
                        if (iVar24 != 0) {
                            *(iVar40 + 0x930) = 0;
                            *(iVar40 + 0x938) = 0;
                            *(iVar40 + 0x940) = 0;
                            if (iVar41 != 0) {
                                (**(**(iVar40 + 0x948) + 0x28))(*(iVar40 + 0x948), iVar41, iVar24);
                            }
                        }
                    }
                    if (iVar19 == 0) {
                        iVar24 = *param_2;
                        uVar25 = iStack_c4;
                        iVar40 = *(iVar24 + 0x918);
                        uVar23 = (iVar40 - *(iVar24 + 0x910) >> 3) * (0xcccccccccccc0000 | 0xcccd);
                        if (uVar25 <= uVar23) {
                            if (uVar25 <= uVar23 && uVar23 - uVar25 != 0) {
                                iVar41 = *(iVar24 + 0x910) + uVar25 * 0x28;
                                if (iVar40 != iVar41) {
                                    do {
                                        piVar22 = *(iVar40 + -0x20);
                                        iVar40 = iVar40 + -0x28;
                                        if (piVar22 != NULL) {
                                            LOAcquire();
                                            tmp_ldXn = piVar22[1];
                                            iVar42 = tmp_ldXn;
                                            tmp_stXn = iVar42 + -1;
                                            iVar42 = tmp_stXn;
                                            piVar22[1] = iVar42;
                                            iVar42 = tmp_ldXn;
                                            LORelease();
                                            if (iVar42 == 0) {
                                                (**(*piVar22 + 0x10))(piVar22);
                                                std::__1::__shared_weak_count::__release_weak()(piVar22);
                                            }
                                        }
                                    } while (iVar40 != iVar41);
                                }
                                *(iVar24 + 0x918) = iVar41;
                            }
                        }
                        else {
                            std::__1::vector<GeoCodecsDaVinciBuilding, geo::StdAllocator<GeoCodecsDaVinciBuilding, geo::codec::Allocator> >::__append(unsigned long)
                                      (iVar24 + 0x910, uVar25 - uVar23);
                        }
                        puVar37 = puStack_c0;
                        iVar24 = puStack_b8 - puVar37;
                        if (iVar24 + -1 < 0 == SBORROW8(iVar24, 1)) {
                            uVar25 = 0;
                            iVar44 = 0;
                            iVar43 = 0;
                            puVar39 = puVar37;
                            do {
                                puVar28 = puVar39 + 6;
                                uVar34 = *puVar39;
                                if (uVar34 + -1 < 0 == SBORROW4(uVar34, 1)) {
                                    uVar29 = 0;
                                    puVar39 = puVar28;
                                    do {
                                        puVar28 = puVar39 + 4;
                                        uVar2 = *puVar39;
                                        if (-1 < uVar2) {
                                            iVar33 = uVar2 + 1;
                                            do {
                                                uVar3 = *puVar28;
                                                puVar28 = puVar28 + uVar3 * 3 + 1;
                                                iVar43 = uVar3 + iVar43;
                                                iVar33 = iVar33 + -1;
                                            } while (iVar33 != 0);
                                        }
                                        iVar44 = iVar44 + uVar2 + 1;
                                        uVar29 = uVar29 + 1;
                                        puVar39 = puVar28;
                                    } while (uVar29 != uVar34);
                                }
                                uVar25 = uVar34 + uVar25;
                                puVar39 = puVar28;
                            } while (puVar28 < puStack_b8);
                        }
                        else {
                            iVar43 = 0;
                            iVar44 = 0;
                            uVar25 = 0;
                        }
                        puStack_1d0 = puStack_b8;
                        pcStack_200 = pcVar20;
                        iStack_1f4 = iVar19;
                        piVar22 = geo::codec::Allocator::instance()();
                        iVar40 = (**(*piVar22 + 0x18))(piVar22, 0x14, uVar25);
                        aiStack_220[3] = uVar25;
                        piVar22 = geo::codec::Allocator::instance()();
                        iVar41 = (**(*piVar22 + 0x18))(piVar22, 8, iVar44);
                        puStack_90 = NULL;
                        iStack_88 = 0;
                        iStack_80 = 0;
                        ppcStack_78 = geo::codec::Allocator::instance()();
                        iStack_a0 = *0x8 + -0x90;
                        uStack_98 = 0;
                        if (iVar43 != 0) {
                            if (iVar43 < 0) {
                                std::__1::vector<GeoCodecsVectorTilePoint3D, geo::StdAllocator<GeoCodecsVectorTilePoint3D, geo::codec::Allocator> >::__throw_length_error[abi:v160006]() const
                                          ();
    // WARNING: Treating indirect jump as call
                                UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x1939192c0);
                                uVar38 = (*UNRECOVERED_JUMPTABLE)();
                                return uVar38;
                            }
                            iVar42 = iVar43 * 0xc;
                            puStack_90 = (**(*ppcStack_78 + 0x10))(ppcStack_78, iVar42, 4);
                            iStack_88 = puStack_90 + iVar42;
                            puVar21 = puStack_90;
                            do {
                                if (puVar21 != NULL) {
                                    *(puVar21 + 1) = 0;
                                    *puVar21 = 0;
                                }
                                puVar21 = puVar21 + 0xc;
                                iVar42 = iVar42 + -0xc;
                                iStack_80 = iStack_88;
                            } while (iVar42 != 0);
                        }
                        iStack_1f0 = *param_2;
                        *(iStack_1f0 + 0xc18) = cStack_a4;
                        if (iVar24 + -1 < 0 == SBORROW8(iVar24, 1)) {
                            uVar34 = 0;
                            iVar27 = 0;
                            iVar33 = 0;
                            iVar19 = 0;
                            iStack_1d8 = *(iStack_1f0 + 0x910);
                            iStack_1e0 = iStack_e0;
                            iStack_1e8 = iStack_f8;
                            iVar24 = iStack_134;
                            fVar48 = fStack_140 * (iStack_156 - iStack_158);
                            fVar49 = iStack_158;
                            do {
                                uStack_1c8 = uVar34;
                                uVar29 = *puVar37;
                                iVar42 = iStack_1d8 + uVar34 * 0x28;
                                *(iVar42 + 0x18) = *(puVar37 + 2);
                                *(iVar42 + 0x10) = *(puVar37 + 4);
                                *(iVar42 + 0x22) = uVar29;
                                *(iVar42 + 0x20) = iVar19;
                                *(iVar42 + 0x24) = 0;
                                if ((uStack_fc._1_1_ == '\0') || (*(iStack_e0 + uStack_1c8) == '\0')) {
                                    uVar32 = 4;
                                    if (uStack_fc != '\0') goto code_r0x000193918d3c;
                                }
                                else {
                                    *(iVar42 + 0x24) = 1;
                                    uVar32 = 5;
                                    if (uStack_fc != '\0') {
code_r0x000193918d3c:
                                        if (*(iStack_f8 + uStack_1c8) != '\0') {
                                            *(iVar42 + 0x24) = uVar32;
                                        }
                                    }
                                }
                                puVar37 = puVar37 + 6;
                                if (uVar29 + -1 < 0 == SBORROW4(uVar29, 1)) {
                                    uVar25 = 0;
                                    do {
                                        puVar30 = iVar40 + (uVar25 + iVar19) * 0x14;
                                        puVar30[1] = 0;
                                        *puVar30 = *(puVar37 + 1);
                                        fVar50 = NEON_fmadd(fVar48, puVar37[2] + iVar24, fVar49);
                                        *(puVar30 + 4) = fVar50 * fStack_150;
                                        if (cStack_a4 == '\0') {
                                            *(puVar30 + 8) = 0;
                                            *(puVar30 + 0xc) = iVar33;
                                            uVar34 = *puVar37;
                                            *(puVar30 + 0x10) = uVar34;
                                            if (uVar34 < 0) goto code_r0x000193918d68;
code_r0x000193918df8:
                                            puVar37 = puVar37 + 4;
                                            uVar46 = 0;
                                            uVar23 = uVar34 + 1;
                                            tmp_ldXn = *0x8 + -0x160 | 4;
                                            piVar1 = tmp_ldXn;
                                            iVar51 = *piVar1;
                                            iVar42 = tmp_ldXn;
                                            tmp_ldXn = iVar42 + 4;
                                            tmp_ldXn = *0x8 + -0x160 + 0x18;
                                            pfVar4 = tmp_ldXn;
                                            fVar50 = *pfVar4;
                                            iVar42 = tmp_ldXn;
                                            tmp_ldXn = iVar42 + 8;
                                            do {
                                                uVar34 = *puVar37;
                                                piVar1 = iVar41 + (uVar46 + iVar33) * 8;
                                                uVar35 = uVar34;
                                                *(piVar1 + 1) = uVar34;
                                                *piVar1 = iVar27;
                                                uVar31 = uVar34;
                                                if (uVar34 != 0 && -1 < uVar34 + 0) {
                                                    if (uVar34 < 4) {
                                                        uVar45 = 0;
                                                    }
                                                    else {
                                                        uVar45 = uVar35 & 0xfffffffc;
                                                        iVar42 = puStack_90 + iVar27 * 0xc;
                                                        uVar31 = uVar45;
                                                        puVar39 = puVar37 + 1;
                                                        do {
                                                            tmp_ldXn = puVar39;
                                                            piVar1 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            piVar6 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar28 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            piVar7 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            piVar8 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar9 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            piVar10 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            piVar11 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar12 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            piVar13 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            piVar14 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar15 = tmp_ldXn;
                                                            iVar5 = tmp_ldXn;
                                                            tmp_ldXn = iVar5 + 4;
                                                            puVar39 = tmp_ldXn;
                                                            auVar53._0_4_ = *piVar1 + iVar51;
                                                            auVar53._4_4_ = *piVar7 + iVar51;
                                                            auVar53._8_4_ = *piVar10 + iVar51;
                                                            auVar53._12_4_ = *piVar13 + iVar51;
                                                            auVar53 = NEON_scvtf(auVar53, 4);
                                                            fVar52 = fVar50 * auVar53._0_8_;
                                                            fVar18 = fVar50 * (auVar53._0_8_ >> 0x20);
                                                            auVar17._8_4_ = SUB84(fVar18, 0);
                                                            auVar17._0_8_ = fVar52;
                                                            auVar17._12_4_ = fVar18 >> 0x20;
                                                            uVar38 = CONCAT44(fVar50 * (auVar53._8_8_ >> 0x20), 
                                                                              fVar50 * auVar53._8_8_);
                                                            auVar55._0_4_ = *piVar6 + iVar51;
                                                            auVar55._4_4_ = *piVar8 + iVar51;
                                                            auVar55._8_4_ = *piVar11 + iVar51;
                                                            auVar55._12_4_ = *piVar14 + iVar51;
                                                            auVar53 = NEON_scvtf(auVar55, 4);
                                                            uVar26 = CONCAT44(fVar50 * (auVar53._8_8_ >> 0x20), 
                                                                              fVar50 * auVar53._8_8_);
                                                            auVar54._0_8_ = iVar24 + *puVar12;
                                                            auVar54._8_8_ = iVar24 + *puVar15;
                                                            auVar56._0_8_ = iVar24 + *puVar28;
                                                            auVar56._8_8_ = iVar24 + *puVar9;
                                                            auVar56 = NEON_ucvtf(auVar56, 8);
                                                            auVar55 = NEON_ucvtf(auVar54, 8);
                                                            uVar47 = CONCAT44((fVar49 + auVar55._8_8_ * fVar48) *
                                                                              fStack_150, 
                                                                              (fVar49 + auVar55._0_8_ * fVar48) *
                                                                              fStack_150);
                                                            tmp_ldXn = iVar42;
                                                            pfVar36 = tmp_ldXn;
                                                            *pfVar36 = fVar52;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            pfVar36 = tmp_ldXn;
                                                            *pfVar36 = fVar50 * auVar53._0_8_;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            pfVar36 = tmp_ldXn;
                                                            *pfVar36 = (fVar49 + auVar56._0_8_ * fVar48) * fStack_150;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            pfVar36 = tmp_ldXn;
                                                            *pfVar36 = auVar17._8_8_;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            pfVar36 = tmp_ldXn;
                                                            *pfVar36 = fVar50 * (auVar53._0_8_ >> 0x20);
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            pfVar36 = tmp_ldXn;
                                                            *pfVar36 = (fVar49 + auVar56._8_8_ * fVar48) * fStack_150;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            puVar16 = tmp_ldXn;
                                                            *puVar16 = uVar38;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            puVar16 = tmp_ldXn;
                                                            *puVar16 = uVar26;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            puVar16 = tmp_ldXn;
                                                            *puVar16 = uVar47;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            puVar16 = tmp_ldXn;
                                                            *puVar16 = uVar38 >> 0x20;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            puVar16 = tmp_ldXn;
                                                            *puVar16 = uVar26 >> 0x20;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            puVar16 = tmp_ldXn;
                                                            *puVar16 = uVar47 >> 0x20;
                                                            iVar42 = tmp_ldXn;
                                                            tmp_ldXn = iVar42 + 4;
                                                            iVar42 = tmp_ldXn;
                                                            uVar31 = uVar31 + -4;
                                                        } while (uVar31 != 0);
                                                        uVar31 = uVar35;
                                                        if (uVar45 == uVar35) goto code_r0x000193918e24;
                                                    }
                                                    iVar42 = uVar35 - uVar45;
                                                    pfVar36 = puStack_90 + (uVar45 + iVar27) * 0xc + 8;
                                                    puVar39 = puVar37 + uVar45 * 3;
                                                    do {
                                                        uVar38 = NEON_scvtf(CONCAT44((*(puVar39 + 1) >> 0x20) + iVar51, 
                                                                                     *(puVar39 + 1) + iVar51), 4);
                                                        *(pfVar36 + -2) =
                                                             CONCAT44(fVar50 * (uVar38 >> 0x20), fVar50 * uVar38);
                                                        fVar52 = NEON_fmadd(fVar48, puVar39[3] + iVar24, fVar49);
                                                        *pfVar36 = fVar52 * fStack_150;
                                                        iVar42 = iVar42 + -1;
                                                        uVar31 = uVar35;
                                                        pfVar36 = pfVar36 + 3;
                                                        puVar39 = puVar39 + 3;
                                                    } while (iVar42 != 0);
                                                }
code_r0x000193918e24:
                                                iVar27 = uVar34 + iVar27;
                                                puVar37 = puVar37 + 1 + uVar31 * 3;
                                                uVar46 = uVar46 + 1;
                                            } while (uVar46 != uVar23);
                                        }
                                        else {
                                            fVar50 = NEON_fmadd(fVar48, puVar37[3] + iVar24, fVar49);
                                            *(puVar30 + 8) = fVar50 * fStack_150;
                                            *(puVar30 + 0xc) = iVar33;
                                            uVar34 = *puVar37;
                                            *(puVar30 + 0x10) = uVar34;
                                            if (-1 < uVar34) goto code_r0x000193918df8;
code_r0x000193918d68:
                                            puVar37 = puVar37 + 4;
                                            uVar23 = uVar34 + 1;
                                        }
                                        iVar33 = uVar23 + iVar33;
                                        uVar25 = uVar25 + 1;
                                    } while (uVar25 != uVar29);
                                }
                                iVar19 = uVar29 + iVar19;
                                uVar34 = uStack_1c8 + 1;
                            } while (puVar37 < puStack_1d0);
                        }
                        iVar42 = iStack_1f0;
                        *(iVar42 + 0x908) = iVar40;
                        *(iVar42 + 0x900) = aiStack_220[3];
                        *(iVar42 + 0x8f8) = iVar41;
                        *(iVar42 + 0x8f0) = iVar44;
                        iVar24 = *(iVar42 + 0x8d0);
                        iVar19 = iStack_1f4;
                        if (iVar24 != 0) {
                            *(iVar42 + 0x8d8) = iVar24;
                            (**(**(iVar42 + 0x8e8) + 0x28))(*(iVar42 + 0x8e8), iVar24, *(iVar42 + 0x8e0) - iVar24);
                            *(iVar42 + 0x8d0) = 0;
                            *(iVar42 + 0x8d8) = 0;
                            *(iVar42 + 0x8e0) = 0;
                        }
                        *(iVar42 + 0x8d8) = iStack_88;
                        *(iVar42 + 0x8d0) = puStack_90;
                        *(iVar42 + 0x8e0) = iStack_80;
                        *(*param_2 + 0x8cc) = iVar43;
                        pcVar20 = pcStack_200;
                    }
                    if (iStack_f8 != 0) {
                        iStack_f0 = iStack_f8;
                        operator delete(void*)();
                    }
                    if (iStack_e0 != 0) {
                        iStack_d8 = iStack_e0;
                        operator delete(void*)();
                    }
                    if (puStack_c0 != NULL) {
                        operator delete(void*)();
                    }
                    if (iVar19 == 0) {
                        *(pcVar20 + 0x30) = *(pcVar20 + 0x30) + uStack_124;
                        iVar19 = geo::codec::_readMaterials(VMP4Chapter*, std::__1::vector<unsigned long long, geo::StdAllocator<unsigned long long, geo::codec::Allocator> >&, std::__1::vector<VMP4Material, geo::StdAllocator<VMP4Material, geo::codec::Allocator> >&, std::__1::vector<unsigned long, geo::StdAllocator<unsigned long, geo::codec::Allocator> >&, FeatureStyleAttributesSet&, bool)
                                           (pcVar20, &stack0x00000000 + -0x1c0, *0x8 + -0x1a0, *0x8 + -0x180, 
                                            *param_2 + 0x458, 1);
                        if (iVar19 == 0) {
                            uVar38 = **reloc.__stderrp;
                            uVar26 = 0x2354;
                            goto code_r0x0001939190cc;
                        }
                        iVar24 = *(*param_2 + 0x910);
                        uVar34 = (*(*param_2 + 0x918) - iVar24 >> 3) * 0xcccd;
                        uVar25 = uVar34 & 0xffff;
                        if ((uVar34 & 0xffff) != 0) {
                            puVar21 = iVar24 + 0x10;
                            do {
                                *puVar21 = *(iStack_1a0 + *puVar21 * 0x10);
                                uVar25 = uVar25 + -1;
                                puVar21 = puVar21 + 5;
                            } while (uVar25 != 0);
                        }
                        geo::codec::VectorTile::calculateBuildingTileBound()();
                        *(*param_2 + 0xc10) = fStack_150;
                        uVar38 = 1;
                    }
                    else {
                        uVar38 = **reloc.__stderrp;
                        uVar26 = 0x2350;
code_r0x0001939190cc:
                        *(*0x8 + -0x220) = 0x7bc + 0x193b8a000;
                        *(*0x8 + -0x218) = uVar26;
                        fprintf(uVar38, 0x8ff + 0x193b8a000);
                        uVar38 = 0;
                    }
                    if (*pcVar20 != '\0') {
                        piVar22 = geo::codec::Allocator::instance()();
                        (**(*piVar22 + 0x28))(piVar22, *(pcVar20 + 0x28), 0);
                    }
                    piVar22 = geo::codec::Allocator::instance()();
                    (**(*piVar22 + 0x28))(piVar22, pcVar20, 0);
                    iVar24 = *(&stack0x00000000 + -0x1c0);
                    if (iVar24 != 0) {
                        (**(*piStack_1a8 + 0x28))(piStack_1a8, iVar24, iStack_1b0 - iVar24);
                    }
                    if (iStack_1a0 != 0) {
                        (**(*piStack_188 + 0x28))(piStack_188, iStack_1a0, iStack_190 - iStack_1a0);
                    }
                    if (iStack_180 != 0) {
                        (**(*piStack_168 + 0x28))(piStack_168, iStack_180, iStack_170 - iStack_180);
                    }
                    puVar21 = puStack_120;
                    iVar41 = iStack_118;
                    iVar24 = std::__1::chrono::steady_clock::now()();
                    iVar40 = iStack_108;
                    puStack_90 = puVar21;
                    if (puVar21 != NULL) {
                        iStack_160 = *0x8 + -0x90;
                        iVar41 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                                           (iVar41 + 0x778, *0x8 + -0x90, 0x74c + 0x193af9000, *0x8 + -0x160, 
                                            *0x8 + -0x180);
                        iVar24 = SUB168(SEXT816(iVar24 - iVar40) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
                        *(iVar41 + 0x20) = ((iVar24 >> 7) - (iVar24 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
                    }
                    piVar22 = piStack_110;
                    if (piStack_110 != NULL) {
                        LOAcquire();
                        tmp_ldXn = piStack_110[1];
                        iVar24 = tmp_ldXn;
                        tmp_stXn = iVar24 + -1;
                        iVar24 = tmp_stXn;
                        piStack_110[1] = iVar24;
                        iVar24 = tmp_ldXn;
                        LORelease();
                        if (iVar24 == 0) {
                            (**(*piVar22 + 0x10))(piVar22);
                            std::__1::__shared_weak_count::__release_weak()(piVar22);
                        }
                    }
                    goto code_r0x0001939187d4;
                }
                break;
            }
            uVar23 = uVar23 + 1;
        } while (uVar23 <= uVar25 && uVar25 != uVar23);
    }
    uVar38 = 1;
code_r0x0001939187d4:
    if (**reloc.__stack_chk_guard != iStack_70) {
    // WARNING: Subroutine does not return
        __stack_chk_fail();
    }
    return uVar38;
}
