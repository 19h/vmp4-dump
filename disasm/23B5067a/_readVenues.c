
ulong geo::codec::_readVenues(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, ulong param_2, int64_t *param_3)

{
    uchar *puVar1;
    uint8_t uVar2;
    float *pfVar3;
    bool bVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int32_t iVar7;
    uint32_t uVar8;
    int32_t iVar9;
    char *pcVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    code **ppcVar16;
    ulong uVar17;
    code *pcVar18;
    uint64_t uVar19;
    float *pfVar20;
    uint64_t *puVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    int64_t iVar25;
    int64_t iVar26;
    uint64_t uVar27;
    ulong *puVar28;
    uint64_t uVar29;
    uint8_t *puVar30;
    ulong *puVar31;
    uint64_t uVar32;
    int64_t iVar33;
    ulong *puVar34;
    uint64_t uVar35;
    uint64_t uVar36;
    uint64_t uVar37;
    uint64_t uVar38;
    int64_t iVar39;
    int64_t iVar40;
    ulong *puVar41;
    int64_t *piVar42;
    int64_t *piVar43;
    int64_t *piVar44;
    int32_t iVar45;
    uint64_t uVar46;
    ulong uVar47;
    uint64_t *puVar48;
    float8 fVar49;
    float fVar50;
    float fVar53;
    uchar auVar51 [16];
    uchar auVar52 [16];
    float fVar54;
    ulong uVar55;
    ulong uVar56;
    ulong uVar57;
    ulong uVar58;
    float fVar59;
    float fVar60;
    float fVar61;
    float fVar62;
    float fVar63;
    float fVar64;
    float fVar65;
    float fVar66;
    float fVar67;
    float fVar68;
    float fVar69;
    float fVar70;
    float fVar71;
    float fVar72;
    float fVar73;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    int64_t iStack_f0;
    int64_t iStack_e8;
    ulong uStack_d8;
    int64_t iStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uint8_t **ppuStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a0;
    char cStack_91;
    uint32_t uStack_90;
    int32_t iStack_8c;
    uint64_t uStack_88;
    uint64_t uStack_80;
    
    uVar27 = param_1[1];
    if (uVar27 == 0) {
        return 1;
    }
    uVar19 = 0;
    while (*(*param_1 + uVar19 * 0x10) != 0x89) {
        uVar19 = uVar19 + 1;
        if (uVar27 < uVar19 || uVar27 == uVar19) {
            return 1;
        }
    }
    pcVar10 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                        (param_1, uVar19, 0x89, *param_3 + 0x778);
    if (pcVar10 == NULL) {
        return 1;
    }
    iStack_a0 = *param_3;
    piVar43 = param_3[1];
    if (piVar43 != NULL) {
        tmp_ldXn = piVar43[1];
        iVar11 = tmp_ldXn;
        tmp_stXn = iVar11 + 1;
        iVar11 = tmp_stXn;
        piVar43[1] = iVar11;
        uVar47 = tmp_ldXn;
    }
    iStack_e8 = std::__1::chrono::steady_clock::now()();
    uVar27 = *(pcVar10 + 0x30);
    iVar11 = *(pcVar10 + 0x38) - uVar27;
    if (uVar27 <= *(pcVar10 + 0x38)) {
        iVar40 = *param_3;
        iStack_d0 = *(iVar40 + 0x358);
        iVar12 = *(iVar40 + 0x360);
        puVar30 = *(pcVar10 + 0x28) + uVar27;
        ppuStack_b8 = pcVar10 + 8;
        *ppuStack_b8 = puVar30;
        pcVar10[0x20] = '\x01';
        puVar48 = pcVar10 + 0x18;
        *puVar48 = 0;
        *(pcVar10 + 0x10) = iVar11;
        uVar27 = iVar11 * 8;
        if (uVar27 != 0) {
            uVar2 = *puVar30;
            *puVar48 = 5;
            uVar19 = (uVar2 >> 3) + 6;
            if (uVar19 < uVar27 || uVar19 == uVar27) {
                uStack_d8 = param_2;
                uVar46 = 0;
                uStack_c8 = iVar12 - iStack_d0;
                uStack_c0 = (uVar2 >> 3) + 1;
                uVar27 = 5;
                uVar19 = uStack_c0;
                do {
                    uVar35 = 8 - (uVar27 & 7);
                    uVar29 = uVar19;
                    if (uVar35 <= uVar19) {
                        uVar29 = uVar35;
                    }
                    uVar24 = uVar29;
                    uVar46 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar24 & 0x3f) & ~(-1 << (uVar24 & 0x1f)) |
                             uVar46 << (uVar24 & 0x1f);
                    uVar27 = uVar29 + uVar27;
                    *puVar48 = uVar27;
                    uVar19 = uVar19 - uVar29;
                } while (uVar19 != 0);
                iVar11 = *(iVar40 + 0xb8);
                puVar28 = *(iVar40 + 0xc0);
                uVar27 = (puVar28 - iVar11 >> 3) * (0x914c1bad | 0x14c1bacf00000000);
                if (uVar46 <= uVar27) {
                    if (uVar46 <= uVar27 && uVar27 - uVar46 != 0) {
                        puVar31 = iVar11 + uVar46 * 0x128;
                        if (puVar28 != puVar31) {
                            piVar44 = puVar28 + -0x120;
                            do {
                                piVar42 = piVar44[0xd];
                                if (piVar42 != NULL) {
                                    LOAcquire();
                                    tmp_ldXn = piVar42[1];
                                    iVar11 = tmp_ldXn;
                                    tmp_stXn = iVar11 + -1;
                                    iVar11 = tmp_stXn;
                                    piVar42[1] = iVar11;
                                    iVar11 = tmp_ldXn;
                                    LORelease();
                                    if (iVar11 == 0) {
                                        (**(*piVar42 + 0x10))(piVar42);
                                        std::__1::__shared_weak_count::__release_weak()(piVar42);
                                    }
                                }
                                if (*piVar44 != 0) {
                                    std::__1::__shared_weak_count::__release_weak()();
                                }
                                puVar28 = piVar44 + -8;
                                piVar44 = piVar44 + -0x128;
                            } while (puVar28 != puVar31);
                        }
                        goto code_r0x0001938f6a70;
                    }
                }
                else if ((*(iVar40 + 200) - puVar28 >> 3) * (0x914c1bad | 0x14c1bacf00000000) < uVar46 - uVar27) {
                    uVar29 = (*(iVar40 + 200) - iVar11 >> 3) * (0x914c1bad | 0x14c1bacf00000000);
                    uVar19 = uVar29 * 2;
                    if (uVar19 < uVar46 || uVar19 - uVar46 == 0) {
                        uVar19 = uVar46;
                    }
                    if ((0x5306eb3e | 0x6eb3e400000000) <= uVar29) {
                        uVar19 = 0xa60dd67c | 0xdd67c800000000;
                    }
                    iVar13 = (**(**(iVar40 + 0xd0) + 0x10))(*(iVar40 + 0xd0), uVar19 * 0x128, 8);
                    puVar31 = iVar13 + uVar27 * 0x128;
                    iVar11 = iVar13 + uVar46 * 0x128;
                    iVar12 = uVar46 * 0x128 + uVar27 * -0x128;
                    puVar28 = puVar31;
                    do {
                        if (puVar28 != NULL) {
                            puVar28[0x24] = 0;
                            puVar28[0x21] = 0;
                            puVar28[0x20] = 0;
                            puVar28[0x23] = 0;
                            puVar28[0x22] = 0;
                            puVar28[0x1d] = 0;
                            puVar28[0x1c] = 0;
                            puVar28[0x1f] = 0;
                            puVar28[0x1e] = 0;
                            puVar28[0x19] = 0;
                            puVar28[0x18] = 0;
                            puVar28[0x1b] = 0;
                            puVar28[0x1a] = 0;
                            puVar28[0x15] = 0;
                            puVar28[0x14] = 0;
                            puVar28[0x17] = 0;
                            puVar28[0x16] = 0;
                            puVar28[0x11] = 0;
                            puVar28[0x10] = 0;
                            puVar28[0x13] = 0;
                            puVar28[0x12] = 0;
                            puVar28[0xd] = 0;
                            puVar28[0xc] = 0;
                            puVar28[0xf] = 0;
                            puVar28[0xe] = 0;
                            puVar28[9] = 0;
                            puVar28[8] = 0;
                            puVar28[0xb] = 0;
                            puVar28[10] = 0;
                            puVar28[5] = 0;
                            puVar28[4] = 0;
                            puVar28[7] = 0;
                            puVar28[6] = 0;
                            puVar28[1] = 0;
                            *puVar28 = 0;
                            puVar28[3] = 0;
                            puVar28[2] = 0;
                        }
                        puVar28 = puVar28 + 0x25;
                        iVar12 = iVar12 + -0x128;
                    } while (iVar12 != 0);
                    iVar12 = iVar13 + uVar19 * 0x128;
                    puVar28 = *(iVar40 + 0xb8);
                    puVar41 = *(iVar40 + 0xc0);
                    if (puVar41 == puVar28) {
                        *(iVar40 + 0xb8) = puVar31;
                        *(iVar40 + 0xc0) = iVar11;
                        iVar11 = *(iVar40 + 200);
                        *(iVar40 + 200) = iVar12;
                    }
                    else {
                        puVar31 = puVar41 + -0x128;
                        puVar41 = uVar27 * 0x128 + iVar13 + -0x128;
                        do {
                            puVar34 = puVar41;
                            *puVar34 = *puVar31;
                            puVar34[1] = puVar31[1];
                            *puVar31 = 0;
                            puVar31[1] = 0;
                            uVar17 = puVar31[3];
                            uVar47 = puVar31[2];
                            auVar51 = *(puVar31 + 4);
                            puVar34[5] = auVar51._8_8_;
                            puVar34[4] = auVar51._0_8_;
                            uVar56 = puVar31[9];
                            uVar55 = puVar31[8];
                            auVar51 = *(puVar31 + 10);
                            uVar58 = puVar31[7];
                            uVar57 = puVar31[6];
                            puVar34[0xc] = puVar31[0xc];
                            puVar34[9] = uVar56;
                            puVar34[8] = uVar55;
                            puVar34[0xb] = auVar51._8_8_;
                            puVar34[10] = auVar51._0_8_;
                            puVar34[7] = uVar58;
                            puVar34[6] = uVar57;
                            puVar34[3] = uVar17;
                            puVar34[2] = uVar47;
                            puVar34[0xd] = puVar31[0xd];
                            puVar34[0xe] = puVar31[0xe];
                            puVar31[0xd] = 0;
                            puVar31[0xe] = 0;
                            *(puVar34 + 0xf) = *(puVar31 + 0xf);
                            uVar17 = puVar31[0x11];
                            uVar47 = puVar31[0x10];
                            auVar51 = *(puVar31 + 0x12);
                            uVar55 = puVar31[0x14];
                            uVar57 = puVar31[0x17];
                            uVar56 = puVar31[0x16];
                            puVar34[0x15] = puVar31[0x15];
                            puVar34[0x14] = uVar55;
                            puVar34[0x17] = uVar57;
                            puVar34[0x16] = uVar56;
                            puVar34[0x11] = uVar17;
                            puVar34[0x10] = uVar47;
                            puVar34[0x13] = auVar51._8_8_;
                            puVar34[0x12] = auVar51._0_8_;
                            uVar17 = puVar31[0x19];
                            uVar47 = puVar31[0x18];
                            auVar51 = *(puVar31 + 0x1a);
                            uVar56 = puVar31[0x1d];
                            uVar55 = puVar31[0x1c];
                            uVar57 = *(puVar31 + 0xe9);
                            *(puVar34 + 0xf1) = *(puVar31 + 0xf1);
                            *(puVar34 + 0xe9) = uVar57;
                            puVar34[0x1b] = auVar51._8_8_;
                            puVar34[0x1a] = auVar51._0_8_;
                            puVar34[0x1d] = uVar56;
                            puVar34[0x1c] = uVar55;
                            puVar34[0x19] = uVar17;
                            puVar34[0x18] = uVar47;
                            uVar17 = puVar31[0x21];
                            uVar47 = puVar31[0x20];
                            auVar51 = *(puVar31 + 0x22);
                            puVar34[0x24] = puVar31[0x24];
                            puVar34[0x21] = uVar17;
                            puVar34[0x20] = uVar47;
                            puVar34[0x23] = auVar51._8_8_;
                            puVar34[0x22] = auVar51._0_8_;
                            bVar4 = puVar31 != puVar28;
                            puVar31 = puVar31 + -0x128;
                            puVar41 = puVar34 + -0x128;
                        } while (bVar4);
                        puVar41 = *(iVar40 + 0xb8);
                        puVar28 = *(iVar40 + 0xc0);
                        *(iVar40 + 0xb8) = puVar34;
                        *(iVar40 + 0xc0) = iVar11;
                        iVar11 = *(iVar40 + 200);
                        *(iVar40 + 200) = iVar12;
                        if (puVar28 != puVar41) {
                            piVar44 = puVar28 + -0x120;
                            do {
                                piVar42 = piVar44[0xd];
                                if (piVar42 != NULL) {
                                    LOAcquire();
                                    tmp_ldXn = piVar42[1];
                                    iVar12 = tmp_ldXn;
                                    tmp_stXn = iVar12 + -1;
                                    iVar12 = tmp_stXn;
                                    piVar42[1] = iVar12;
                                    iVar12 = tmp_ldXn;
                                    LORelease();
                                    if (iVar12 == 0) {
                                        (**(*piVar42 + 0x10))(piVar42);
                                        std::__1::__shared_weak_count::__release_weak()(piVar42);
                                    }
                                }
                                if (*piVar44 != 0) {
                                    std::__1::__shared_weak_count::__release_weak()();
                                }
                                puVar28 = piVar44 + -8;
                                piVar44 = piVar44 + -0x128;
                            } while (puVar28 != puVar41);
                        }
                    }
                    if (puVar41 != NULL) {
                        (**(**(iVar40 + 0xd0) + 0x28))(*(iVar40 + 0xd0), puVar41, iVar11 - puVar41);
                    }
                }
                else {
                    puVar31 = puVar28 + (uVar46 - uVar27) * 0x25;
                    iVar11 = uVar46 * 0x128 + uVar27 * -0x128;
                    do {
                        if (puVar28 != NULL) {
                            puVar28[0x24] = 0;
                            puVar28[0x21] = 0;
                            puVar28[0x20] = 0;
                            puVar28[0x23] = 0;
                            puVar28[0x22] = 0;
                            puVar28[0x1d] = 0;
                            puVar28[0x1c] = 0;
                            puVar28[0x1f] = 0;
                            puVar28[0x1e] = 0;
                            puVar28[0x19] = 0;
                            puVar28[0x18] = 0;
                            puVar28[0x1b] = 0;
                            puVar28[0x1a] = 0;
                            puVar28[0x15] = 0;
                            puVar28[0x14] = 0;
                            puVar28[0x17] = 0;
                            puVar28[0x16] = 0;
                            puVar28[0x11] = 0;
                            puVar28[0x10] = 0;
                            puVar28[0x13] = 0;
                            puVar28[0x12] = 0;
                            puVar28[0xd] = 0;
                            puVar28[0xc] = 0;
                            puVar28[0xf] = 0;
                            puVar28[0xe] = 0;
                            puVar28[9] = 0;
                            puVar28[8] = 0;
                            puVar28[0xb] = 0;
                            puVar28[10] = 0;
                            puVar28[5] = 0;
                            puVar28[4] = 0;
                            puVar28[7] = 0;
                            puVar28[6] = 0;
                            puVar28[1] = 0;
                            *puVar28 = 0;
                            puVar28[3] = 0;
                            puVar28[2] = 0;
                        }
                        puVar28 = puVar28 + 0x25;
                        iVar11 = iVar11 + -0x128;
                    } while (iVar11 != 0);
code_r0x0001938f6a70:
                    *(iVar40 + 0xc0) = puVar31;
                }
                tmp_ldWn = *(0x290 + 0x1d6cc0000);
                uVar24 = tmp_ldWn;
                if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
                    ppcVar16 = operator new(unsigned long)(0x108);
                    ppcVar16[1] = 0x61 + 0x193b8a000;
                    ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                    ppcVar16[3] = 0x61 + 0x193b8a000;
                    pcVar18 = *0x193af97f0;
                    ppcVar16[5] = *0x193af97f8;
                    ppcVar16[4] = pcVar18;
                    *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                0xfa8 + 0x10;
                    ppcVar16[8] = NULL;
                    ppcVar16[7] = NULL;
                    ppcVar16[10] = NULL;
                    ppcVar16[9] = NULL;
                    ppcVar16[0xc] = NULL;
                    ppcVar16[0xb] = NULL;
                    ppcVar16[0xe] = NULL;
                    ppcVar16[0xd] = NULL;
                    ppcVar16[0x10] = NULL;
                    ppcVar16[0xf] = NULL;
                    ppcVar16[0x12] = NULL;
                    ppcVar16[0x11] = NULL;
                    ppcVar16[0x14] = NULL;
                    ppcVar16[0x13] = NULL;
                    ppcVar16[0x16] = NULL;
                    ppcVar16[0x15] = NULL;
                    ppcVar16[0x18] = NULL;
                    ppcVar16[0x17] = NULL;
                    ppcVar16[0x1a] = NULL;
                    ppcVar16[0x19] = NULL;
                    ppcVar16[0x1c] = NULL;
                    ppcVar16[0x1b] = NULL;
                    ppcVar16[0x1e] = NULL;
                    ppcVar16[0x1d] = NULL;
                    ppcVar16[0x1f] = NULL;
                    uVar47 = pthread_rwlock_init(ppcVar16 + 7, 0);
                    if (uVar47 != 0) {
                        geo::read_write_lock::logFailure(int, char const*)(uVar47, 0x85 + 0x193b8a000);
                    }
                    pcVar18 = malloc_create_zone(0, 0);
                    ppcVar16[6] = pcVar18;
                    malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                    pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                    ppcVar16[0x20] = pcVar18;
                    *geo::codec::Allocator::instance()::alloc = ppcVar16;
                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                }
                iStack_b0 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                      (*geo::codec::Allocator::instance()::alloc, 
                                       (*(*param_3 + 0xc0) - *(*param_3 + 0xb8) >> 3) *
                                       (0x8a60dd68 | 0xa60dd67c00000000), 8);
                tmp_ldWn = *(0x290 + 0x1d6cc0000);
                uVar24 = tmp_ldWn;
                if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
                    ppcVar16 = operator new(unsigned long)(0x108);
                    ppcVar16[1] = 0x61 + 0x193b8a000;
                    ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                    ppcVar16[3] = 0x61 + 0x193b8a000;
                    pcVar18 = *0x193af97f0;
                    ppcVar16[5] = *0x193af97f8;
                    ppcVar16[4] = pcVar18;
                    *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                0xfa8 + 0x10;
                    ppcVar16[8] = NULL;
                    ppcVar16[7] = NULL;
                    ppcVar16[10] = NULL;
                    ppcVar16[9] = NULL;
                    ppcVar16[0xc] = NULL;
                    ppcVar16[0xb] = NULL;
                    ppcVar16[0xe] = NULL;
                    ppcVar16[0xd] = NULL;
                    ppcVar16[0x10] = NULL;
                    ppcVar16[0xf] = NULL;
                    ppcVar16[0x12] = NULL;
                    ppcVar16[0x11] = NULL;
                    ppcVar16[0x14] = NULL;
                    ppcVar16[0x13] = NULL;
                    ppcVar16[0x16] = NULL;
                    ppcVar16[0x15] = NULL;
                    ppcVar16[0x18] = NULL;
                    ppcVar16[0x17] = NULL;
                    ppcVar16[0x1a] = NULL;
                    ppcVar16[0x19] = NULL;
                    ppcVar16[0x1c] = NULL;
                    ppcVar16[0x1b] = NULL;
                    ppcVar16[0x1e] = NULL;
                    ppcVar16[0x1d] = NULL;
                    ppcVar16[0x1f] = NULL;
                    uVar47 = pthread_rwlock_init(ppcVar16 + 7, 0);
                    if (uVar47 != 0) {
                        geo::read_write_lock::logFailure(int, char const*)(uVar47, 0x85 + 0x193b8a000);
                    }
                    pcVar18 = malloc_create_zone(0, 0);
                    ppcVar16[6] = pcVar18;
                    malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                    pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                    ppcVar16[0x20] = pcVar18;
                    *geo::codec::Allocator::instance()::alloc = ppcVar16;
                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                }
                iVar11 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                   (*geo::codec::Allocator::instance()::alloc, 
                                    (*(*param_3 + 0xc0) - *(*param_3 + 0xb8) >> 3) * (0x8a60dd68 | 0xa60dd67c00000000), 
                                    8);
                if (iStack_b0 == 0) {
                    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                    uVar47 = 0;
                    iStack_f0 = 0;
                    iVar12 = 0;
                }
                else {
                    if (iVar11 == 0) {
                        uVar47 = **reloc.__stderrp;
                        goto code_r0x0001938f6f50;
                    }
                    if (uVar46 == 0) {
                        uVar27 = *(pcVar10 + 0x18);
                        uVar19 = *(pcVar10 + 0x10) << 3;
                    }
                    else {
                        uVar29 = 0;
                        do {
                            iVar12 = *param_3;
                            iVar40 = param_3[1];
                            iVar13 = *(iVar12 + 0xb8);
                            if (iVar40 != 0) {
                                tmp_ldXn = *(iVar40 + 0x10);
                                iVar14 = tmp_ldXn;
                                tmp_stXn = iVar14 + 1;
                                uVar47 = tmp_stXn;
                                *(iVar40 + 0x10) = uVar47;
                                uVar47 = tmp_ldXn;
                            }
                            piVar44 = iVar13 + uVar29 * 0x128;
                            iVar14 = piVar44[1];
                            *piVar44 = iVar12;
                            piVar44[1] = iVar40;
                            if (iVar14 != 0) {
                                std::__1::__shared_weak_count::__release_weak()();
                            }
                            uVar27 = *(pcVar10 + 0x18);
                            uVar19 = *(pcVar10 + 0x10) * 8;
                            if (uVar19 <= uVar27 + 0x40 && uVar27 + 0x40 != uVar19) {
                                fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                                uVar47 = 0;
                                iStack_f0 = 0;
                                iVar12 = 0;
                                goto code_r0x0001938f6fc4;
                            }
                            uVar32 = 0;
                            puVar30 = *ppuStack_b8;
                            uVar35 = 0x40;
                            do {
                                uVar37 = 8 - (uVar27 & 7);
                                uVar36 = uVar35;
                                if (uVar37 <= uVar35) {
                                    uVar36 = uVar37;
                                }
                                uVar32 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar36 & 0x3f) &
                                         (-1L << (uVar36 & 0x3f) ^ 0xffffffffffffffffU) | uVar32 << (uVar36 & 0x3f);
                                uVar27 = uVar36 + uVar27;
                                *puVar48 = uVar27;
                                uVar35 = uVar35 - uVar36;
                            } while (uVar35 != 0);
                            *(iVar13 + uVar29 * 0x128 + 0x100) = uVar32;
                            if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938f6f78:
                                uVar47 = **reloc.__stderrp;
code_r0x0001938f6f9c:
                                fprintf(uVar47, 0x8ff + 0x193b8a000);
                                uVar47 = 0;
                                iStack_f0 = 0;
                                iVar12 = 0;
                                goto code_r0x0001938f6fc4;
                            }
                            uVar24 = 0;
                            uVar35 = 5;
                            do {
                                uVar36 = 8 - (uVar27 & 7);
                                uVar32 = uVar35;
                                if (uVar36 <= uVar35) {
                                    uVar32 = uVar36;
                                }
                                uVar8 = uVar32;
                                uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                         (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                uVar27 = uVar32 + uVar27;
                                *puVar48 = uVar27;
                                uVar35 = uVar35 - uVar32;
                            } while (uVar35 != 0);
                            uVar24 = uVar24 + 1;
                            uVar35 = uVar24;
                            if (uVar19 <= uVar27 + uVar35 && uVar27 + uVar35 != uVar19) goto code_r0x0001938f6f78;
                            iVar7 = 8;
                            if (uVar24 != 0) {
                                uVar8 = 0;
                                do {
                                    uVar36 = 8 - (uVar27 & 7);
                                    uVar32 = uVar35;
                                    if (uVar36 <= uVar35) {
                                        uVar32 = uVar36;
                                    }
                                    uVar24 = uVar32;
                                    uVar8 = puVar30[uVar27 >> 3] >> ((iVar7 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                            (-1 << (uVar24 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar24 & 0x1f);
                                    uVar27 = uVar32 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar35 = uVar35 - uVar32;
                                } while (uVar35 != 0);
                                if (uVar8 == 0) {
                                    uVar24 = 0;
                                }
                                else {
                                    uVar35 = uVar27 + 1;
                                    if (uVar19 <= uVar35 && uVar35 != uVar19) goto code_r0x0001938f6f78;
                                    uVar2 = puVar30[uVar27 >> 3];
                                    *puVar48 = uVar35;
                                    uVar24 = -uVar8;
                                    if ((uVar2 >> (7 & (uVar27 ^ 0xffffffff)) & 1) == 0) {
                                        uVar24 = uVar8;
                                    }
                                    uVar27 = uVar35;
                                }
                            }
                            if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938f6f8c:
                                uVar47 = **reloc.__stderrp;
                                goto code_r0x0001938f6f9c;
                            }
                            uVar8 = 0;
                            uVar35 = 5;
                            do {
                                uVar36 = 8 - (uVar27 & 7);
                                uVar32 = uVar35;
                                if (uVar36 <= uVar35) {
                                    uVar32 = uVar36;
                                }
                                uVar5 = uVar32;
                                uVar8 = puVar30[uVar27 >> 3] >> ((iVar7 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                        (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar5 & 0x1f);
                                uVar27 = uVar32 + uVar27;
                                *puVar48 = uVar27;
                                uVar35 = uVar35 - uVar32;
                            } while (uVar35 != 0);
                            uVar35 = uVar8 + 1;
                            if (uVar19 <= uVar27 + uVar35 && uVar27 + uVar35 != uVar19) goto code_r0x0001938f6f8c;
                            if (uVar8 + 1 == 0) {
code_r0x0001938f6bc0:
                                uVar5 = 0;
                            }
                            else {
                                uVar8 = 0;
                                do {
                                    uVar36 = 8 - (uVar27 & 7);
                                    uVar32 = uVar35;
                                    if (uVar36 <= uVar35) {
                                        uVar32 = uVar36;
                                    }
                                    uVar5 = uVar32;
                                    uVar8 = puVar30[uVar27 >> 3] >> ((iVar7 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                            (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar5 & 0x1f);
                                    uVar36 = uVar32 + uVar27;
                                    uVar27 = uVar36;
                                    *puVar48 = uVar27;
                                    uVar35 = uVar35 - uVar32;
                                } while (uVar35 != 0);
                                if (uVar8 == 0) goto code_r0x0001938f6bc0;
                                uVar27 = uVar36 + 1;
                                if (uVar19 <= uVar27 && uVar27 != uVar19) goto code_r0x0001938f6f8c;
                                uVar2 = puVar30[uVar36 >> 3];
                                *puVar48 = uVar27;
                                uVar5 = -uVar8;
                                if ((uVar2 >> (7 & (uVar36 ^ 0xffffffff)) & 1) == 0) {
                                    uVar5 = uVar8;
                                }
                            }
                            iVar12 = uVar29 * 8;
                            *(iStack_b0 + iVar12) = uVar24;
                            uVar29 = uVar29 + 1;
                            *(iVar11 + iVar12) = uVar5;
                        } while (uVar29 != uVar46);
                    }
                    if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938f6f40:
                        uVar47 = **reloc.__stderrp;
code_r0x0001938f6f50:
                        fprintf(uVar47, 0x8ff + 0x193b8a000);
                        uVar47 = 0;
                        iStack_f0 = 0;
                        iVar12 = 0;
                    }
                    else {
                        uVar24 = 0;
                        puVar30 = *ppuStack_b8;
                        uVar46 = 5;
                        do {
                            uVar35 = 8 - (uVar27 & 7);
                            uVar29 = uVar46;
                            if (uVar35 <= uVar46) {
                                uVar29 = uVar35;
                            }
                            uVar8 = uVar29;
                            uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                     (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                            uVar27 = uVar29 + uVar27;
                            *puVar48 = uVar27;
                            uVar46 = uVar46 - uVar29;
                        } while (uVar46 != 0);
                        uVar46 = uVar24 + 1;
                        if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19) goto code_r0x0001938f6f40;
                        uVar8 = 0;
                        if (uVar24 + 1 != 0) {
                            do {
                                uVar35 = 8 - (uVar27 & 7);
                                uVar29 = uVar46;
                                if (uVar35 <= uVar46) {
                                    uVar29 = uVar35;
                                }
                                uVar24 = uVar29;
                                uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                        (-1 << (uVar24 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar24 & 0x1f);
                                uVar27 = uVar29 + uVar27;
                                *puVar48 = uVar27;
                                uVar46 = uVar46 - uVar29;
                            } while (uVar46 != 0);
                        }
                        if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
                            uVar47 = **reloc.__stderrp;
                            goto code_r0x0001938f6f50;
                        }
                        uVar24 = 0;
                        uVar46 = 5;
                        do {
                            uVar35 = 8 - (uVar27 & 7);
                            uVar29 = uVar46;
                            if (uVar35 <= uVar46) {
                                uVar29 = uVar35;
                            }
                            uVar5 = uVar29;
                            uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                     (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar5 & 0x1f);
                            uVar27 = uVar29 + uVar27;
                            *puVar48 = uVar27;
                            uVar46 = uVar46 - uVar29;
                        } while (uVar46 != 0);
                        if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
                            uVar47 = **reloc.__stderrp;
                            goto code_r0x0001938f6f50;
                        }
                        uVar5 = 0;
                        uStack_100 = uVar24 + 1;
                        uVar46 = 5;
                        do {
                            uVar35 = 8 - (uVar27 & 7);
                            uVar29 = uVar46;
                            if (uVar35 <= uVar46) {
                                uVar29 = uVar35;
                            }
                            uVar6 = uVar29;
                            uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                    (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                            uVar27 = uVar29 + uVar27;
                            *puVar48 = uVar27;
                            uVar46 = uVar46 - uVar29;
                        } while (uVar46 != 0);
                        if (uVar8 != 0) {
                            uVar6 = 0;
                            do {
                                uVar19 = *(pcVar10 + 0x18);
                                uVar46 = *(pcVar10 + 0x10) * 8;
                                uVar27 = uVar19 + uStack_c0;
                                if (uVar46 <= uVar27 && uVar27 != uVar46) {
code_r0x0001938f7630:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f6f50;
                                }
                                uVar29 = 0;
                                puVar30 = *ppuStack_b8;
                                uVar27 = uStack_c0;
                                do {
                                    uVar32 = 8 - (uVar19 & 7);
                                    uVar35 = uVar27;
                                    if (uVar32 <= uVar27) {
                                        uVar35 = uVar32;
                                    }
                                    uVar22 = uVar35;
                                    uVar29 = puVar30[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar22 & 0x3f) &
                                             ~(-1 << (uVar22 & 0x1f)) | uVar29 << (uVar22 & 0x1f);
                                    uVar19 = uVar35 + uVar19;
                                    *puVar48 = uVar19;
                                    uVar27 = uVar27 - uVar35;
                                } while (uVar27 != 0);
                                if (uVar46 <= uVar19 + uStack_100 && uVar19 + uStack_100 != uVar46)
                                goto code_r0x0001938f7630;
                                uVar22 = 0;
                                if (uVar24 + 1 != 0) {
                                    puVar30 = *ppuStack_b8;
                                    uVar27 = uStack_100;
                                    do {
                                        uVar35 = 8 - (uVar19 & 7);
                                        uVar46 = uVar27;
                                        if (uVar35 <= uVar27) {
                                            uVar46 = uVar35;
                                        }
                                        uVar23 = uVar46;
                                        uVar22 = puVar30[uVar19 >> 3] >> ((8 - (uVar19 & 7)) - uVar23 & 0x1f) &
                                                 (-1 << (uVar23 & 0x1f) ^ 0xffffffff) | uVar22 << (uVar23 & 0x1f);
                                        uVar19 = uVar46 + uVar19;
                                        *puVar48 = uVar19;
                                        uVar27 = uVar27 - uVar46;
                                    } while (uVar27 != 0);
                                }
                                iVar12 = *param_3;
                                uVar27 = (*(iVar12 + 0xc0) - *(iVar12 + 0xb8) >> 3) * (0x914c1bad | 0x14c1bacf00000000);
                                if (uVar27 < uVar29 || uVar27 - uVar29 == 0) goto code_r0x0001938f7630;
                                if (*(iVar12 + 0x200) - *(iVar12 + 0x1f8) >> 8 <= uVar22) goto code_r0x0001938f7630;
                                iVar40 = *(iVar12 + 0xb8) + uVar29 * 0x128;
                                iVar12 = *(iVar12 + 0x1f8) + uVar22 * 0x100;
                                *(iVar12 + 0xa0) = *(iVar40 + 0x100);
                                *(iVar40 + 0x108) = *(iVar12 + 0x80);
                                uVar6 = uVar6 + 1;
                            } while (uVar6 != uVar8);
                            uVar27 = *(pcVar10 + 0x18);
                            uVar19 = *(pcVar10 + 0x10) << 3;
                        }
                        if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
                            uVar47 = **reloc.__stderrp;
                            goto code_r0x0001938f6f50;
                        }
                        uVar24 = 0;
                        uStack_110 = uVar5 + 1;
                        puVar30 = *ppuStack_b8;
                        uVar46 = 5;
                        do {
                            uVar35 = 8 - (uVar27 & 7);
                            uVar29 = uVar46;
                            if (uVar35 <= uVar46) {
                                uVar29 = uVar35;
                            }
                            uVar8 = uVar29;
                            uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                     (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                            uVar27 = uVar29 + uVar27;
                            *puVar48 = uVar27;
                            uVar46 = uVar46 - uVar29;
                        } while (uVar46 != 0);
                        uStack_108 = uVar24 + 1;
                        if (uVar19 <= uVar27 + uStack_108 && uVar27 + uStack_108 != uVar19) {
                            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                            uVar47 = 0;
                            iStack_f0 = 0;
                            iVar12 = 0;
                        }
                        else {
                            uVar8 = 0;
                            if (uVar24 + 1 != 0) {
                                uVar19 = uStack_108;
                                do {
                                    uVar29 = 8 - (uVar27 & 7);
                                    uVar46 = uVar19;
                                    if (uVar29 <= uVar19) {
                                        uVar46 = uVar29;
                                    }
                                    uVar24 = uVar46;
                                    uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                            (-1 << (uVar24 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar24 & 0x1f);
                                    uVar27 = uVar46 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar19 = uVar19 - uVar46;
                                } while (uVar19 != 0);
                            }
                            iVar40 = *param_3;
                            uVar19 = uVar8;
                            iVar12 = *(iVar40 + 0xd8);
                            puVar28 = *(iVar40 + 0xe0);
                            uVar27 = (puVar28 - iVar12 >> 4) * (0x286bca1b | 0x86bca1af00000000);
                            if (uVar19 <= uVar27) {
                                if (uVar19 <= uVar27 && uVar27 - uVar19 != 0) {
                                    puVar41 = iVar12 + uVar19 * 0x130;
                                    puVar31 = puVar28;
                                    if (puVar28 != puVar41) {
                                        piVar44 = puVar28 + -0x128;
                                        do {
                                            piVar42 = piVar44[0xd];
                                            if (piVar42 != NULL) {
                                                LOAcquire();
                                                tmp_ldXn = piVar42[1];
                                                iVar12 = tmp_ldXn;
                                                tmp_stXn = iVar12 + -1;
                                                iVar12 = tmp_stXn;
                                                piVar42[1] = iVar12;
                                                iVar12 = tmp_ldXn;
                                                LORelease();
                                                if (iVar12 == 0) {
                                                    (**(*piVar42 + 0x10))(piVar42);
                                                    std::__1::__shared_weak_count::__release_weak()(piVar42);
                                                }
                                            }
                                            if (*piVar44 != 0) {
                                                std::__1::__shared_weak_count::__release_weak()();
                                            }
                                            puVar28 = piVar44 + -8;
                                            piVar44 = piVar44 + -0x130;
                                        } while (puVar28 != puVar41);
                                        puVar31 = puVar41;
                                    }
                                    goto code_r0x0001938f7878;
                                }
                            }
                            else if ((*(iVar40 + 0xe8) - puVar28 >> 4) * (0x286bca1b | 0x86bca1af00000000) <
                                     uVar19 - uVar27) {
                                uVar29 = (*(iVar40 + 0xe8) - iVar12 >> 4) * (0x286bca1b | 0x86bca1af00000000);
                                uVar46 = uVar29 * 2;
                                if (uVar46 < uVar19 || uVar46 - uVar19 == 0) {
                                    uVar46 = uVar19;
                                }
                                if ((0xf286bca1 | 0x6bca1a00000000) <= uVar29) {
                                    uVar46 = 0xe50d7943 | 0xd7943500000000;
                                }
                                iVar14 = (**(**(iVar40 + 0xf0) + 0x10))(*(iVar40 + 0xf0), uVar46 * 0x130, 8);
                                puVar28 = iVar14 + uVar27 * 0x130;
                                iVar12 = iVar14 + uVar19 * 0x130;
                                iVar13 = uVar19 * 0x130 + uVar27 * -0x130;
                                puVar31 = puVar28;
                                do {
                                    if (puVar31 != NULL) {
                                        puVar31[0x23] = 0;
                                        puVar31[0x22] = 0;
                                        puVar31[0x25] = 0;
                                        puVar31[0x24] = 0;
                                        puVar31[0x1f] = 0;
                                        puVar31[0x1e] = 0;
                                        puVar31[0x21] = 0;
                                        puVar31[0x20] = 0;
                                        puVar31[0x1b] = 0;
                                        puVar31[0x1a] = 0;
                                        puVar31[0x1d] = 0;
                                        puVar31[0x1c] = 0;
                                        puVar31[0x17] = 0;
                                        puVar31[0x16] = 0;
                                        puVar31[0x19] = 0;
                                        puVar31[0x18] = 0;
                                        puVar31[0x13] = 0;
                                        puVar31[0x12] = 0;
                                        puVar31[0x15] = 0;
                                        puVar31[0x14] = 0;
                                        puVar31[0xf] = 0;
                                        puVar31[0xe] = 0;
                                        puVar31[0x11] = 0;
                                        puVar31[0x10] = 0;
                                        puVar31[0xb] = 0;
                                        puVar31[10] = 0;
                                        puVar31[0xd] = 0;
                                        puVar31[0xc] = 0;
                                        puVar31[7] = 0;
                                        puVar31[6] = 0;
                                        puVar31[9] = 0;
                                        puVar31[8] = 0;
                                        puVar31[3] = 0;
                                        puVar31[2] = 0;
                                        puVar31[5] = 0;
                                        puVar31[4] = 0;
                                        puVar31[1] = 0;
                                        *puVar31 = 0;
                                    }
                                    puVar31 = puVar31 + 0x26;
                                    iVar13 = iVar13 + -0x130;
                                } while (iVar13 != 0);
                                iVar13 = iVar14 + uVar46 * 0x130;
                                puVar31 = *(iVar40 + 0xd8);
                                puVar41 = *(iVar40 + 0xe0);
                                if (puVar41 == puVar31) {
                                    *(iVar40 + 0xd8) = puVar28;
                                    *(iVar40 + 0xe0) = iVar12;
                                    iVar12 = *(iVar40 + 0xe8);
                                    *(iVar40 + 0xe8) = iVar13;
                                }
                                else {
                                    puVar28 = puVar41 + -0x130;
                                    puVar41 = uVar27 * 0x130 + iVar14 + -0x130;
                                    do {
                                        puVar34 = puVar41;
                                        *puVar34 = *puVar28;
                                        puVar34[1] = puVar28[1];
                                        *puVar28 = 0;
                                        puVar28[1] = 0;
                                        uVar17 = puVar28[3];
                                        uVar47 = puVar28[2];
                                        auVar51 = *(puVar28 + 4);
                                        puVar34[5] = auVar51._8_8_;
                                        puVar34[4] = auVar51._0_8_;
                                        uVar56 = puVar28[9];
                                        uVar55 = puVar28[8];
                                        auVar51 = *(puVar28 + 10);
                                        uVar58 = puVar28[7];
                                        uVar57 = puVar28[6];
                                        puVar34[0xc] = puVar28[0xc];
                                        puVar34[9] = uVar56;
                                        puVar34[8] = uVar55;
                                        puVar34[0xb] = auVar51._8_8_;
                                        puVar34[10] = auVar51._0_8_;
                                        puVar34[7] = uVar58;
                                        puVar34[6] = uVar57;
                                        puVar34[3] = uVar17;
                                        puVar34[2] = uVar47;
                                        puVar34[0xd] = puVar28[0xd];
                                        puVar34[0xe] = puVar28[0xe];
                                        puVar28[0xd] = 0;
                                        puVar28[0xe] = 0;
                                        *(puVar34 + 0xf) = *(puVar28 + 0xf);
                                        uVar17 = puVar28[0x11];
                                        uVar47 = puVar28[0x10];
                                        auVar51 = *(puVar28 + 0x12);
                                        uVar55 = puVar28[0x14];
                                        uVar57 = puVar28[0x17];
                                        uVar56 = puVar28[0x16];
                                        puVar34[0x15] = puVar28[0x15];
                                        puVar34[0x14] = uVar55;
                                        puVar34[0x17] = uVar57;
                                        puVar34[0x16] = uVar56;
                                        puVar34[0x11] = uVar17;
                                        puVar34[0x10] = uVar47;
                                        puVar34[0x13] = auVar51._8_8_;
                                        puVar34[0x12] = auVar51._0_8_;
                                        uVar17 = puVar28[0x19];
                                        uVar47 = puVar28[0x18];
                                        auVar51 = *(puVar28 + 0x1a);
                                        uVar56 = puVar28[0x1d];
                                        uVar55 = puVar28[0x1c];
                                        uVar57 = *(puVar28 + 0xe9);
                                        *(puVar34 + 0xf1) = *(puVar28 + 0xf1);
                                        *(puVar34 + 0xe9) = uVar57;
                                        puVar34[0x1b] = auVar51._8_8_;
                                        puVar34[0x1a] = auVar51._0_8_;
                                        puVar34[0x1d] = uVar56;
                                        puVar34[0x1c] = uVar55;
                                        puVar34[0x19] = uVar17;
                                        puVar34[0x18] = uVar47;
                                        uVar17 = puVar28[0x21];
                                        uVar47 = puVar28[0x20];
                                        auVar51 = *(puVar28 + 0x22);
                                        uVar56 = puVar28[0x25];
                                        uVar55 = puVar28[0x24];
                                        puVar34[0x23] = auVar51._8_8_;
                                        puVar34[0x22] = auVar51._0_8_;
                                        puVar34[0x25] = uVar56;
                                        puVar34[0x24] = uVar55;
                                        puVar34[0x21] = uVar17;
                                        puVar34[0x20] = uVar47;
                                        bVar4 = puVar28 != puVar31;
                                        puVar28 = puVar28 + -0x130;
                                        puVar41 = puVar34 + -0x130;
                                    } while (bVar4);
                                    puVar41 = *(iVar40 + 0xd8);
                                    puVar28 = *(iVar40 + 0xe0);
                                    *(iVar40 + 0xd8) = puVar34;
                                    *(iVar40 + 0xe0) = iVar12;
                                    iVar12 = *(iVar40 + 0xe8);
                                    *(iVar40 + 0xe8) = iVar13;
                                    if (puVar28 != puVar41) {
                                        piVar44 = puVar28 + -0x128;
                                        do {
                                            piVar42 = piVar44[0xd];
                                            if (piVar42 != NULL) {
                                                LOAcquire();
                                                tmp_ldXn = piVar42[1];
                                                iVar13 = tmp_ldXn;
                                                tmp_stXn = iVar13 + -1;
                                                iVar13 = tmp_stXn;
                                                piVar42[1] = iVar13;
                                                iVar13 = tmp_ldXn;
                                                LORelease();
                                                if (iVar13 == 0) {
                                                    (**(*piVar42 + 0x10))(piVar42);
                                                    std::__1::__shared_weak_count::__release_weak()(piVar42);
                                                }
                                            }
                                            if (*piVar44 != 0) {
                                                std::__1::__shared_weak_count::__release_weak()();
                                            }
                                            puVar28 = piVar44 + -8;
                                            piVar44 = piVar44 + -0x130;
                                        } while (puVar28 != puVar41);
                                    }
                                }
                                if (puVar41 != NULL) {
                                    (**(**(iVar40 + 0xf0) + 0x28))(*(iVar40 + 0xf0), puVar41, iVar12 - puVar41);
                                }
                            }
                            else {
                                puVar31 = puVar28 + (uVar19 - uVar27) * 0x26;
                                iVar12 = uVar19 * 0x130 + uVar27 * -0x130;
                                do {
                                    if (puVar28 != NULL) {
                                        puVar28[0x23] = 0;
                                        puVar28[0x22] = 0;
                                        puVar28[0x25] = 0;
                                        puVar28[0x24] = 0;
                                        puVar28[0x1f] = 0;
                                        puVar28[0x1e] = 0;
                                        puVar28[0x21] = 0;
                                        puVar28[0x20] = 0;
                                        puVar28[0x1b] = 0;
                                        puVar28[0x1a] = 0;
                                        puVar28[0x1d] = 0;
                                        puVar28[0x1c] = 0;
                                        puVar28[0x17] = 0;
                                        puVar28[0x16] = 0;
                                        puVar28[0x19] = 0;
                                        puVar28[0x18] = 0;
                                        puVar28[0x13] = 0;
                                        puVar28[0x12] = 0;
                                        puVar28[0x15] = 0;
                                        puVar28[0x14] = 0;
                                        puVar28[0xf] = 0;
                                        puVar28[0xe] = 0;
                                        puVar28[0x11] = 0;
                                        puVar28[0x10] = 0;
                                        puVar28[0xb] = 0;
                                        puVar28[10] = 0;
                                        puVar28[0xd] = 0;
                                        puVar28[0xc] = 0;
                                        puVar28[7] = 0;
                                        puVar28[6] = 0;
                                        puVar28[9] = 0;
                                        puVar28[8] = 0;
                                        puVar28[3] = 0;
                                        puVar28[2] = 0;
                                        puVar28[5] = 0;
                                        puVar28[4] = 0;
                                        puVar28[1] = 0;
                                        *puVar28 = 0;
                                    }
                                    puVar28 = puVar28 + 0x26;
                                    iVar12 = iVar12 + -0x130;
                                } while (iVar12 != 0);
code_r0x0001938f7878:
                                *(iVar40 + 0xe0) = puVar31;
                            }
                            tmp_ldWn = *(0x290 + 0x1d6cc0000);
                            uVar24 = tmp_ldWn;
                            if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0))
                            {
                                ppcVar16 = operator new(unsigned long)(0x108);
                                ppcVar16[1] = 0x61 + 0x193b8a000;
                                ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                                ppcVar16[3] = 0x61 + 0x193b8a000;
                                pcVar18 = *0x193af97f0;
                                ppcVar16[5] = *0x193af97f8;
                                ppcVar16[4] = pcVar18;
                                *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                            0xfa8 + 0x10;
                                ppcVar16[8] = NULL;
                                ppcVar16[7] = NULL;
                                ppcVar16[10] = NULL;
                                ppcVar16[9] = NULL;
                                ppcVar16[0xc] = NULL;
                                ppcVar16[0xb] = NULL;
                                ppcVar16[0xe] = NULL;
                                ppcVar16[0xd] = NULL;
                                ppcVar16[0x10] = NULL;
                                ppcVar16[0xf] = NULL;
                                ppcVar16[0x12] = NULL;
                                ppcVar16[0x11] = NULL;
                                ppcVar16[0x14] = NULL;
                                ppcVar16[0x13] = NULL;
                                ppcVar16[0x16] = NULL;
                                ppcVar16[0x15] = NULL;
                                ppcVar16[0x18] = NULL;
                                ppcVar16[0x17] = NULL;
                                ppcVar16[0x1a] = NULL;
                                ppcVar16[0x19] = NULL;
                                ppcVar16[0x1c] = NULL;
                                ppcVar16[0x1b] = NULL;
                                ppcVar16[0x1e] = NULL;
                                ppcVar16[0x1d] = NULL;
                                ppcVar16[0x1f] = NULL;
                                uVar47 = pthread_rwlock_init(ppcVar16 + 7, 0);
                                if (uVar47 != 0) {
                                    geo::read_write_lock::logFailure(int, char const*)(uVar47, 0x85 + 0x193b8a000);
                                }
                                pcVar18 = malloc_create_zone(0, 0);
                                ppcVar16[6] = pcVar18;
                                malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                                pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                ppcVar16[0x20] = pcVar18;
                                *geo::codec::Allocator::instance()::alloc = ppcVar16;
                                __cxa_guard_release(0x290 + 0x1d6cc0000);
                            }
                            iStack_f0 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                                  (*geo::codec::Allocator::instance()::alloc, 
                                                   (*(*param_3 + 0xe0) - *(*param_3 + 0xd8) >> 4) *
                                                   (0xa1af286c | 0x1af286bc00000000), 8);
                            tmp_ldWn = *(0x290 + 0x1d6cc0000);
                            uVar24 = tmp_ldWn;
                            if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0))
                            {
                                ppcVar16 = operator new(unsigned long)(0x108);
                                ppcVar16[1] = 0x61 + 0x193b8a000;
                                ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                                ppcVar16[3] = 0x61 + 0x193b8a000;
                                pcVar18 = *0x193af97f0;
                                ppcVar16[5] = *0x193af97f8;
                                ppcVar16[4] = pcVar18;
                                *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                            0xfa8 + 0x10;
                                ppcVar16[8] = NULL;
                                ppcVar16[7] = NULL;
                                ppcVar16[10] = NULL;
                                ppcVar16[9] = NULL;
                                ppcVar16[0xc] = NULL;
                                ppcVar16[0xb] = NULL;
                                ppcVar16[0xe] = NULL;
                                ppcVar16[0xd] = NULL;
                                ppcVar16[0x10] = NULL;
                                ppcVar16[0xf] = NULL;
                                ppcVar16[0x12] = NULL;
                                ppcVar16[0x11] = NULL;
                                ppcVar16[0x14] = NULL;
                                ppcVar16[0x13] = NULL;
                                ppcVar16[0x16] = NULL;
                                ppcVar16[0x15] = NULL;
                                ppcVar16[0x18] = NULL;
                                ppcVar16[0x17] = NULL;
                                ppcVar16[0x1a] = NULL;
                                ppcVar16[0x19] = NULL;
                                ppcVar16[0x1c] = NULL;
                                ppcVar16[0x1b] = NULL;
                                ppcVar16[0x1e] = NULL;
                                ppcVar16[0x1d] = NULL;
                                ppcVar16[0x1f] = NULL;
                                uVar47 = pthread_rwlock_init(ppcVar16 + 7, 0);
                                if (uVar47 != 0) {
                                    geo::read_write_lock::logFailure(int, char const*)(uVar47, 0x85 + 0x193b8a000);
                                }
                                pcVar18 = malloc_create_zone(0, 0);
                                ppcVar16[6] = pcVar18;
                                malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                                pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                ppcVar16[0x20] = pcVar18;
                                *geo::codec::Allocator::instance()::alloc = ppcVar16;
                                __cxa_guard_release(0x290 + 0x1d6cc0000);
                            }
                            iVar12 = (**(**geo::codec::Allocator::instance()::alloc + 0x10))
                                               (*geo::codec::Allocator::instance()::alloc, 
                                                (*(*param_3 + 0xe0) - *(*param_3 + 0xd8) >> 4) *
                                                (0xa1af286c | 0x1af286bc00000000), 8);
                            iVar40 = *param_3;
                            iVar13 = *(iVar40 + 0xd8);
                            if (*(iVar40 + 0xe0) == iVar13) {
                                uVar27 = *(pcVar10 + 0x18);
                                uVar19 = *(pcVar10 + 0x10) << 3;
                            }
                            else {
                                uVar46 = 0;
                                do {
                                    iVar14 = param_3[1];
                                    if (iVar14 != 0) {
                                        tmp_ldXn = *(iVar14 + 0x10);
                                        iVar15 = tmp_ldXn;
                                        tmp_stXn = iVar15 + 1;
                                        uVar47 = tmp_stXn;
                                        *(iVar14 + 0x10) = uVar47;
                                        uVar47 = tmp_ldXn;
                                    }
                                    piVar44 = iVar13 + uVar46 * 0x130;
                                    iVar15 = piVar44[1];
                                    *piVar44 = iVar40;
                                    piVar44[1] = iVar14;
                                    if (iVar15 != 0) {
                                        std::__1::__shared_weak_count::__release_weak()();
                                    }
                                    uVar27 = *(pcVar10 + 0x18);
                                    uVar19 = *(pcVar10 + 0x10) * 8;
                                    uVar29 = uStack_c0;
                                    if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19)
                                    goto code_r0x0001938f8168;
                                    uVar35 = 0;
                                    puVar30 = *ppuStack_b8;
                                    do {
                                        uVar36 = 8 - (uVar27 & 7);
                                        uVar32 = uVar29;
                                        if (uVar36 <= uVar29) {
                                            uVar32 = uVar36;
                                        }
                                        uVar24 = uVar32;
                                        uVar35 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar24 & 0x3f) &
                                                 ~(-1 << (uVar24 & 0x1f)) | uVar35 << (uVar24 & 0x1f);
                                        uVar27 = uVar32 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar32;
                                    } while (uVar29 != 0);
                                    iVar13 = iVar13 + uVar46 * 0x130;
                                    *(iVar13 + 0x128) = uVar35;
                                    if (uVar19 <= uVar27 + 0x40 && uVar27 + 0x40 != uVar19) goto code_r0x0001938f8168;
                                    uVar35 = 0;
                                    puVar30 = *ppuStack_b8;
                                    uVar29 = 0x40;
                                    do {
                                        uVar36 = 8 - (uVar27 & 7);
                                        uVar32 = uVar29;
                                        if (uVar36 <= uVar29) {
                                            uVar32 = uVar36;
                                        }
                                        uVar35 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar32 & 0x3f) &
                                                 (-1L << (uVar32 & 0x3f) ^ 0xffffffffffffffffU) |
                                                 uVar35 << (uVar32 & 0x3f);
                                        uVar27 = uVar32 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar32;
                                    } while (uVar29 != 0);
                                    *(iVar13 + 0x100) = uVar35;
                                    if (uVar19 <= uVar27 + 0x40 && uVar27 + 0x40 != uVar19) goto code_r0x0001938f8168;
                                    uVar35 = 0;
                                    uVar29 = 0x40;
                                    do {
                                        uVar36 = 8 - (uVar27 & 7);
                                        uVar32 = uVar29;
                                        if (uVar36 <= uVar29) {
                                            uVar32 = uVar36;
                                        }
                                        iVar7 = 8;
                                        uVar35 = puVar30[uVar27 >> 3] >> ((iVar7 - (uVar27 & 7)) - uVar32 & 0x3f) &
                                                 (-1L << (uVar32 & 0x3f) ^ 0xffffffffffffffffU) |
                                                 uVar35 << (uVar32 & 0x3f);
                                        uVar27 = uVar32 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar32;
                                    } while (uVar29 != 0);
                                    *(iVar13 + 0x108) = uVar35;
                                    if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) goto code_r0x0001938f8168;
                                    uVar24 = 0;
                                    uVar29 = 5;
                                    do {
                                        uVar32 = 8 - (uVar27 & 7);
                                        uVar35 = uVar29;
                                        if (uVar32 <= uVar29) {
                                            uVar35 = uVar32;
                                        }
                                        uVar8 = uVar35;
                                        uVar24 = puVar30[uVar27 >> 3] >> ((iVar7 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                 (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                        uVar27 = uVar35 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar35;
                                    } while (uVar29 != 0);
                                    uVar29 = uVar24 + 1;
                                    if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19)
                                    goto code_r0x0001938f8168;
                                    uVar8 = 0;
                                    iVar45 = 8;
                                    iVar9 = -1;
                                    if (uVar24 + 1 != 0) {
                                        do {
                                            uVar32 = 8 - (uVar27 & 7);
                                            uVar35 = uVar29;
                                            if (uVar32 <= uVar29) {
                                                uVar35 = uVar32;
                                            }
                                            uVar24 = uVar35;
                                            uVar8 = puVar30[uVar27 >> 3] >> ((iVar45 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                                    (iVar9 << (uVar24 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar24 & 0x1f);
                                            uVar27 = uVar35 + uVar27;
                                            *puVar48 = uVar27;
                                            uVar29 = uVar29 - uVar35;
                                        } while (uVar29 != 0);
                                        if (uVar8 != 0) {
                                            uVar29 = uVar27 + 1;
                                            if (uVar19 <= uVar29 && uVar29 != uVar19) goto code_r0x0001938f8168;
                                            uVar2 = puVar30[uVar27 >> 3];
                                            *puVar48 = uVar29;
                                            uVar24 = -uVar8;
                                            if ((uVar2 >> (7 & (uVar27 ^ 0xffffffff)) & 1) == 0) {
                                                uVar24 = uVar8;
                                            }
                                            uVar8 = uVar24;
                                            uVar27 = uVar29;
                                            if (uVar24 != 0x7ffe && 0x7ffd < uVar24) goto code_r0x0001938f8168;
                                        }
                                    }
                                    *(iVar13 + 0x110) = uVar8;
                                    if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) goto code_r0x0001938f8168;
                                    uVar24 = 0;
                                    uVar29 = 5;
                                    do {
                                        uVar32 = 8 - (uVar27 & 7);
                                        uVar35 = uVar29;
                                        if (uVar32 <= uVar29) {
                                            uVar35 = uVar32;
                                        }
                                        uVar8 = uVar35;
                                        uVar24 = puVar30[uVar27 >> 3] >> ((iVar45 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                 (iVar9 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                        uVar27 = uVar35 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar35;
                                    } while (uVar29 != 0);
                                    uVar29 = uVar24 + 1;
                                    if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19)
                                    goto code_r0x0001938f8168;
                                    uVar8 = 0;
                                    if (uVar24 + 1 != 0) {
                                        do {
                                            uVar32 = 8 - (uVar27 & 7);
                                            uVar35 = uVar29;
                                            if (uVar32 <= uVar29) {
                                                uVar35 = uVar32;
                                            }
                                            uVar24 = uVar35;
                                            uVar8 = puVar30[uVar27 >> 3] >> ((iVar45 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                                    (iVar9 << (uVar24 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar24 & 0x1f);
                                            uVar27 = uVar35 + uVar27;
                                            *puVar48 = uVar27;
                                            uVar29 = uVar29 - uVar35;
                                        } while (uVar29 != 0);
                                    }
                                    *(iStack_f0 + uVar46 * 4) = uVar8;
                                    if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) goto code_r0x0001938f8168;
                                    uVar24 = 0;
                                    uVar29 = 5;
                                    do {
                                        uVar32 = 8 - (uVar27 & 7);
                                        uVar35 = uVar29;
                                        if (uVar32 <= uVar29) {
                                            uVar35 = uVar32;
                                        }
                                        uVar8 = uVar35;
                                        uVar24 = puVar30[uVar27 >> 3] >> ((iVar45 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                 (iVar9 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                        uVar27 = uVar35 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar35;
                                    } while (uVar29 != 0);
                                    uVar29 = uVar24 + 1;
                                    if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19)
                                    goto code_r0x0001938f8168;
                                    uVar8 = 0;
                                    if (uVar24 + 1 != 0) {
                                        do {
                                            uVar32 = 8 - (uVar27 & 7);
                                            uVar35 = uVar29;
                                            if (uVar32 <= uVar29) {
                                                uVar35 = uVar32;
                                            }
                                            uVar24 = uVar35;
                                            uVar8 = puVar30[uVar27 >> 3] >> ((iVar7 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                                    (iVar9 << (uVar24 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar24 & 0x1f);
                                            uVar27 = uVar35 + uVar27;
                                            *puVar48 = uVar27;
                                            uVar29 = uVar29 - uVar35;
                                        } while (uVar29 != 0);
                                    }
                                    *(iVar12 + uVar46 * 4) = uVar8;
                                    uVar46 = uVar46 + 1;
                                    iVar40 = *param_3;
                                    iVar13 = *(iVar40 + 0xd8);
                                    uVar29 = (*(iVar40 + 0xe0) - iVar13 >> 4) * (0x286bca1b | 0x86bca1af00000000);
                                } while (uVar46 <= uVar29 && uVar29 - uVar46 != 0);
                            }
                            if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938f7e3c:
                                uVar47 = **reloc.__stderrp;
code_r0x0001938f8174:
                                fprintf(uVar47, 0x8ff + 0x193b8a000);
                                uVar47 = 0;
                            }
                            else {
                                uVar24 = 0;
                                puVar30 = *ppuStack_b8;
                                uVar46 = 5;
                                do {
                                    uVar35 = 8 - (uVar27 & 7);
                                    uVar29 = uVar46;
                                    if (uVar35 <= uVar46) {
                                        uVar29 = uVar35;
                                    }
                                    uVar8 = uVar29;
                                    uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                             (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                    uVar27 = uVar29 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar29;
                                } while (uVar46 != 0);
                                uVar46 = uVar24 + 1;
                                if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19) goto code_r0x0001938f7e3c;
                                if (uVar24 + 1 != 0) {
                                    uVar24 = 0;
                                    do {
                                        uVar35 = 8 - (uVar27 & 7);
                                        uVar29 = uVar46;
                                        if (uVar35 <= uVar46) {
                                            uVar29 = uVar35;
                                        }
                                        uVar8 = uVar29;
                                        uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                 (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                        uVar27 = uVar29 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar46 = uVar46 - uVar29;
                                    } while (uVar46 != 0);
                                    if (uVar24 != 0) {
                                        uVar8 = 0;
                                        iVar40 = *param_3;
                                        do {
                                            if (uVar19 <= uVar27 + uStack_108 && uVar27 + uStack_108 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar46 = uStack_108;
                                            if (uVar46 != 0) {
                                                uVar46 = 0;
                                                uVar29 = uStack_108;
                                                do {
                                                    uVar32 = 8 - (uVar27 & 7);
                                                    uVar35 = uVar29;
                                                    if (uVar32 <= uVar29) {
                                                        uVar35 = uVar32;
                                                    }
                                                    uVar5 = uVar35;
                                                    uVar46 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f)
                                                             & (-1 << (uVar5 & 0x1f) ^ 0xffffffff) |
                                                             uVar46 << (uVar5 & 0x1f);
                                                    uVar27 = uVar35 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar35;
                                                } while (uVar29 != 0);
                                            }
                                            if (uVar19 <= uVar27 + uStack_100 && uVar27 + uStack_100 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar29 = uStack_100;
                                            if (uVar29 != 0) {
                                                uVar29 = 0;
                                                uVar35 = uStack_100;
                                                do {
                                                    uVar36 = 8 - (uVar27 & 7);
                                                    uVar32 = uVar35;
                                                    if (uVar36 <= uVar35) {
                                                        uVar32 = uVar36;
                                                    }
                                                    uVar5 = uVar32;
                                                    uVar29 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f)
                                                             & (-1 << (uVar5 & 0x1f) ^ 0xffffffff) |
                                                             uVar29 << (uVar5 & 0x1f);
                                                    uVar27 = uVar32 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar35 = uVar35 - uVar32;
                                                } while (uVar35 != 0);
                                            }
                                            uVar35 = (*(iVar40 + 0xe0) - *(iVar40 + 0xd8) >> 4) *
                                                     (0x286bca1b | 0x86bca1af00000000);
                                            if (uVar35 < uVar46 || uVar35 - uVar46 == 0) goto code_r0x0001938f8168;
                                            if (*(iVar40 + 0x200) - *(iVar40 + 0x1f8) >> 8 <= uVar29)
                                            goto code_r0x0001938f8168;
                                            iVar14 = *(iVar40 + 0xd8) + uVar46 * 0x130;
                                            iVar13 = *(iVar40 + 0x1f8) + uVar29 * 0x100;
                                            *(iVar13 + 0xa8) = *(iVar14 + 0x100);
                                            *(iVar13 + 0xa0) = *(*(iVar40 + 0xb8) + *(iVar14 + 0x128) * 0x128 + 0x100);
                                            uVar8 = uVar8 + 1;
                                        } while (uVar8 != uVar24);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar24 = 0;
                                uVar46 = 5;
                                do {
                                    uVar35 = 8 - (uVar27 & 7);
                                    uVar29 = uVar46;
                                    if (uVar35 <= uVar46) {
                                        uVar29 = uVar35;
                                    }
                                    uVar8 = uVar29;
                                    uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                             (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                    uVar27 = uVar29 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar29;
                                } while (uVar46 != 0);
                                uStack_118 = uVar24 + 1;
                                if (uVar19 <= uVar27 + uStack_118 && uVar27 + uStack_118 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                if (uStack_118 == 0) {
                                    uVar8 = 0;
                                    uVar24 = 0;
                                }
                                else {
                                    uVar24 = 0;
                                    uVar46 = uStack_118;
                                    do {
                                        uVar35 = 8 - (uVar27 & 7);
                                        uVar29 = uVar46;
                                        if (uVar35 <= uVar46) {
                                            uVar29 = uVar35;
                                        }
                                        uVar8 = uVar29;
                                        uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                 (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                        uVar27 = uVar29 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar46 = uVar46 - uVar29;
                                    } while (uVar46 != 0);
                                    if (uVar19 <= uVar27 + uStack_118 && uVar27 + uStack_118 != uVar19) {
                                        uVar47 = **reloc.__stderrp;
                                        goto code_r0x0001938f8174;
                                    }
                                    uVar8 = 0;
                                    uVar19 = uStack_118;
                                    do {
                                        uVar29 = 8 - (uVar27 & 7);
                                        uVar46 = uVar19;
                                        if (uVar29 <= uVar19) {
                                            uVar46 = uVar29;
                                        }
                                        uVar5 = uVar46;
                                        uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                                (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar5 & 0x1f);
                                        uVar27 = uVar46 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar19 = uVar19 - uVar46;
                                    } while (uVar19 != 0);
                                }
                                *(*param_3 + 0xf8) = uVar24 + uVar8;
                                tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                uVar8 = tmp_ldWn;
                                if (((uVar8 & 1) == 0) &&
                                   (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
                                    ppcVar16 = operator new(unsigned long)(0x108);
                                    ppcVar16[1] = 0x61 + 0x193b8a000;
                                    ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                                    ppcVar16[3] = 0x61 + 0x193b8a000;
                                    pcVar18 = *0x193af97f0;
                                    ppcVar16[5] = *0x193af97f8;
                                    ppcVar16[4] = pcVar18;
                                    *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l
                                                + 0xfa8 + 0x10;
                                    ppcVar16[8] = NULL;
                                    ppcVar16[7] = NULL;
                                    ppcVar16[10] = NULL;
                                    ppcVar16[9] = NULL;
                                    ppcVar16[0xc] = NULL;
                                    ppcVar16[0xb] = NULL;
                                    ppcVar16[0xe] = NULL;
                                    ppcVar16[0xd] = NULL;
                                    ppcVar16[0x10] = NULL;
                                    ppcVar16[0xf] = NULL;
                                    ppcVar16[0x12] = NULL;
                                    ppcVar16[0x11] = NULL;
                                    ppcVar16[0x14] = NULL;
                                    ppcVar16[0x13] = NULL;
                                    ppcVar16[0x16] = NULL;
                                    ppcVar16[0x15] = NULL;
                                    ppcVar16[0x18] = NULL;
                                    ppcVar16[0x17] = NULL;
                                    ppcVar16[0x1a] = NULL;
                                    ppcVar16[0x19] = NULL;
                                    ppcVar16[0x1c] = NULL;
                                    ppcVar16[0x1b] = NULL;
                                    ppcVar16[0x1e] = NULL;
                                    ppcVar16[0x1d] = NULL;
                                    ppcVar16[0x1f] = NULL;
                                    uVar47 = pthread_rwlock_init(ppcVar16 + 7, 0);
                                    if (uVar47 != 0) {
                                        geo::read_write_lock::logFailure(int, char const*)(uVar47, 0x85 + 0x193b8a000);
                                    }
                                    pcVar18 = malloc_create_zone(0, 0);
                                    ppcVar16[6] = pcVar18;
                                    malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                                    pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                    ppcVar16[0x20] = pcVar18;
                                    *geo::codec::Allocator::instance()::alloc = ppcVar16;
                                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                                }
                                iVar40 = (**(**geo::codec::Allocator::instance()::alloc + 0x18))
                                                   (*geo::codec::Allocator::instance()::alloc, *(*param_3 + 0xf8), 0x40)
                                ;
                                iVar13 = *param_3;
                                *(iVar13 + 0x100) = iVar40;
                                if (iVar40 == 0) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar27 = *(pcVar10 + 0x18);
                                uVar19 = *(pcVar10 + 0x10) * 8;
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar8 = 0;
                                puVar30 = *ppuStack_b8;
                                uVar46 = 5;
                                do {
                                    uVar35 = 8 - (uVar27 & 7);
                                    uVar29 = uVar46;
                                    if (uVar35 <= uVar46) {
                                        uVar29 = uVar35;
                                    }
                                    uVar5 = uVar29;
                                    uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                            (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar5 & 0x1f);
                                    uVar27 = uVar29 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar29;
                                } while (uVar46 != 0);
                                uStack_120 = uVar8 + 1;
                                if (uVar24 == 0) {
                                    uVar46 = 0;
                                }
                                else {
                                    uVar29 = 0;
                                    uVar46 = uVar24;
                                    do {
                                        if (uVar19 <= uVar27 + uStack_c0 && uVar27 + uStack_c0 != uVar19)
                                        goto code_r0x0001938f8168;
                                        uVar32 = 0;
                                        uVar35 = uStack_c0;
                                        do {
                                            uVar37 = 8 - (uVar27 & 7);
                                            uVar36 = uVar35;
                                            if (uVar37 <= uVar35) {
                                                uVar36 = uVar37;
                                            }
                                            uVar24 = uVar36;
                                            uVar32 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar24 & 0x3f) &
                                                     ~(-1 << (uVar24 & 0x1f)) | uVar32 << (uVar24 & 0x1f);
                                            uVar27 = uVar36 + uVar27;
                                            *puVar48 = uVar27;
                                            uVar35 = uVar35 - uVar36;
                                        } while (uVar35 != 0);
                                        uVar35 = (*(iVar13 + 0xc0) - *(iVar13 + 0xb8) >> 3) *
                                                 (0x914c1bad | 0x14c1bacf00000000);
                                        if (uVar35 < uVar32 || uVar35 - uVar32 == 0) goto code_r0x0001938f8168;
                                        iVar14 = iVar40 + uVar29 * 0x40;
                                        *(iVar14 + 0x30) = uVar32;
                                        *(iVar14 + 0xd) = 1;
                                        if (uVar19 <= uVar27 + 0x40 && uVar27 + 0x40 != uVar19)
                                        goto code_r0x0001938f8168;
                                        uVar32 = 0;
                                        uVar35 = 0x40;
                                        do {
                                            uVar37 = 8 - (uVar27 & 7);
                                            uVar36 = uVar35;
                                            if (uVar37 <= uVar35) {
                                                uVar36 = uVar37;
                                            }
                                            uVar32 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar36 & 0x3f) &
                                                     (-1L << (uVar36 & 0x3f) ^ 0xffffffffffffffffU) |
                                                     uVar32 << (uVar36 & 0x3f);
                                            uVar27 = uVar36 + uVar27;
                                            *puVar48 = uVar27;
                                            uVar35 = uVar35 - uVar36;
                                        } while (uVar35 != 0);
                                        *(iVar40 + uVar29 * 0x40) = uVar32;
                                        if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) goto code_r0x0001938f8168;
                                        uVar24 = 0;
                                        uVar35 = 5;
                                        do {
                                            uVar36 = 8 - (uVar27 & 7);
                                            uVar32 = uVar35;
                                            if (uVar36 <= uVar35) {
                                                uVar32 = uVar36;
                                            }
                                            uVar8 = uVar32;
                                            iVar7 = 8;
                                            uVar24 = puVar30[uVar27 >> 3] >> ((iVar7 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                     (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                            uVar36 = uVar32 + uVar27;
                                            uVar27 = uVar36;
                                            *puVar48 = uVar27;
                                            uVar35 = uVar35 - uVar32;
                                        } while (uVar35 != 0);
                                        uVar27 = uVar24 + 1;
                                        if (uVar19 <= uVar36 + uVar27 && uVar36 + uVar27 != uVar19)
                                        goto code_r0x0001938f8168;
                                        uVar8 = 0;
                                        iVar9 = -1;
                                        if (uVar24 + 1 != 0) {
                                            do {
                                                uVar32 = 8 - (uVar36 & 7);
                                                uVar35 = uVar27;
                                                if (uVar32 <= uVar27) {
                                                    uVar35 = uVar32;
                                                }
                                                uVar24 = uVar35;
                                                uVar8 = puVar30[uVar36 >> 3] >> ((iVar7 - (uVar36 & 7)) - uVar24 & 0x1f)
                                                        & (iVar9 << (uVar24 & 0x1f) ^ 0xffffffff) |
                                                        uVar8 << (uVar24 & 0x1f);
                                                uVar36 = uVar35 + uVar36;
                                                *puVar48 = uVar36;
                                                uVar27 = uVar27 - uVar35;
                                            } while (uVar27 != 0);
                                            if (uVar8 != 0) {
                                                uVar27 = uVar36 + 1;
                                                if (uVar19 <= uVar27 && uVar27 != uVar19) goto code_r0x0001938f8168;
                                                uVar2 = puVar30[uVar36 >> 3];
                                                *puVar48 = uVar27;
                                                uVar24 = -uVar8;
                                                if ((uVar2 >> (7 & (uVar36 ^ 0xffffffff)) & 1) == 0) {
                                                    uVar24 = uVar8;
                                                }
                                                uVar8 = uVar24;
                                                uVar36 = uVar27;
                                                if (uVar24 != 0x7ffe && 0x7ffd < uVar24) goto code_r0x0001938f8168;
                                            }
                                        }
                                        *(iVar14 + 8) = uVar8;
                                        uVar27 = uVar36 + 1;
                                        if (uVar19 <= uVar27 && uVar27 != uVar19) {
                                            uVar47 = **reloc.__stderrp;
                                            goto code_r0x0001938f8174;
                                        }
                                        uVar2 = puVar30[uVar36 >> 3];
                                        *puVar48 = uVar27;
                                        if ((uVar2 >> (7 & (uVar36 ^ 0xffffffff)) & 1) != 0) {
                                            if (uVar19 <= uVar27 + uStack_120 && uVar27 + uStack_120 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar35 = uStack_120;
                                            if (uVar35 == 0) {
                                                uVar24 = 0;
                                            }
                                            else {
                                                uVar35 = 0;
                                                uVar32 = uStack_120;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar32;
                                                    if (uVar37 <= uVar32) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar24 = uVar36;
                                                    uVar35 = puVar30[uVar27 >> 3] >>
                                                             ((iVar7 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                                             (iVar9 << (uVar24 & 0x1f) ^ 0xffffffff) |
                                                             uVar35 << (uVar24 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar32 = uVar32 - uVar36;
                                                } while (uVar32 != 0);
                                                if (uVar19 <= uVar27 + uStack_120 && uVar27 + uStack_120 != uVar19)
                                                goto code_r0x0001938f8168;
                                                uVar24 = 0;
                                                uVar32 = uStack_120;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar32;
                                                    if (uVar37 <= uVar32) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar8 = uVar36;
                                                    uVar24 = puVar30[uVar27 >> 3] >>
                                                             ((iVar7 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                             (iVar9 << (uVar8 & 0x1f) ^ 0xffffffff) |
                                                             uVar24 << (uVar8 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar32 = uVar32 - uVar36;
                                                } while (uVar32 != 0);
                                            }
                                            if ((uStack_c8 < uVar35 || uStack_c8 == uVar35) ||
                                               (uVar32 = uVar24,  uStack_c8 < uVar32 || uStack_c8 == uVar32))
                                            goto code_r0x0001938f8168;
                                            *(iVar14 + 0x20) = iStack_d0 + uVar35;
                                            iVar15 = iStack_d0 + uVar32;
                                        }
                                        else {
                                            *(iVar14 + 0x20) = 0x30f + 0x193afb000;
                                            iVar15 = 0x30f + 0x193afb000;
                                        }
                                        *(iVar14 + 0x18) = iVar15;
                                        uVar29 = uVar29 + 1;
                                    } while (uVar29 != uVar46);
                                }
                                uVar29 = *(iVar13 + 0xf8);
                                if (uVar46 <= uVar29 && uVar29 != uVar46) {
                                    do {
                                        if (uVar19 <= uVar27 + uStack_108 && uVar27 + uStack_108 != uVar19)
                                        goto code_r0x0001938f8168;
                                        iVar7 = -1;
                                        if (uStack_108 == 0) {
                                            uVar24 = 0;
                                        }
                                        else {
                                            uVar24 = 0;
                                            uVar35 = uStack_108;
                                            do {
                                                uVar36 = 8 - (uVar27 & 7);
                                                uVar32 = uVar35;
                                                if (uVar36 <= uVar35) {
                                                    uVar32 = uVar36;
                                                }
                                                uVar8 = uVar32;
                                                uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                         (iVar7 << (uVar8 & 0x1f) ^ 0xffffffff) |
                                                         uVar24 << (uVar8 & 0x1f);
                                                uVar27 = uVar32 + uVar27;
                                                *puVar48 = uVar27;
                                                uVar35 = uVar35 - uVar32;
                                            } while (uVar35 != 0);
                                        }
                                        uVar32 = uVar24;
                                        iVar14 = *(iVar13 + 0xd8);
                                        uVar35 = (*(iVar13 + 0xe0) - iVar14 >> 4) * (0x286bca1b | 0x86bca1af00000000);
                                        if (uVar35 < uVar32 || uVar35 - uVar32 == 0) goto code_r0x0001938f8168;
                                        iVar15 = iVar40 + uVar46 * 0x40;
                                        *(iVar15 + 0x38) = uVar32;
                                        *(iVar15 + 0x30) = *(iVar14 + uVar32 * 0x130 + 0x128);
                                        *(iVar15 + 0xd) = 0;
                                        if (uVar19 <= uVar27 + 0x40 && uVar27 + 0x40 != uVar19)
                                        goto code_r0x0001938f8168;
                                        uVar32 = 0;
                                        uVar35 = 0x40;
                                        do {
                                            uVar37 = 8 - (uVar27 & 7);
                                            uVar36 = uVar35;
                                            if (uVar37 <= uVar35) {
                                                uVar36 = uVar37;
                                            }
                                            uVar32 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar36 & 0x3f) &
                                                     (-1L << (uVar36 & 0x3f) ^ 0xffffffffffffffffU) |
                                                     uVar32 << (uVar36 & 0x3f);
                                            uVar27 = uVar36 + uVar27;
                                            *puVar48 = uVar27;
                                            uVar35 = uVar35 - uVar36;
                                        } while (uVar35 != 0);
                                        *(iVar40 + uVar46 * 0x40) = uVar32;
                                        if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) goto code_r0x0001938f8168;
                                        uVar24 = 0;
                                        uVar35 = 5;
                                        do {
                                            uVar36 = 8 - (uVar27 & 7);
                                            uVar32 = uVar35;
                                            if (uVar36 <= uVar35) {
                                                uVar32 = uVar36;
                                            }
                                            uVar8 = uVar32;
                                            iVar9 = 8;
                                            uVar24 = puVar30[uVar27 >> 3] >> ((iVar9 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                     (iVar7 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                            uVar36 = uVar32 + uVar27;
                                            uVar27 = uVar36;
                                            *puVar48 = uVar27;
                                            uVar35 = uVar35 - uVar32;
                                        } while (uVar35 != 0);
                                        uVar27 = uVar24 + 1;
                                        if (uVar19 <= uVar36 + uVar27 && uVar36 + uVar27 != uVar19)
                                        goto code_r0x0001938f8168;
                                        uVar8 = 0;
                                        if (uVar24 + 1 != 0) {
                                            do {
                                                uVar32 = 8 - (uVar36 & 7);
                                                uVar35 = uVar27;
                                                if (uVar32 <= uVar27) {
                                                    uVar35 = uVar32;
                                                }
                                                uVar24 = uVar35;
                                                uVar8 = puVar30[uVar36 >> 3] >> ((iVar9 - (uVar36 & 7)) - uVar24 & 0x1f)
                                                        & (iVar7 << (uVar24 & 0x1f) ^ 0xffffffff) |
                                                        uVar8 << (uVar24 & 0x1f);
                                                uVar36 = uVar35 + uVar36;
                                                *puVar48 = uVar36;
                                                uVar27 = uVar27 - uVar35;
                                            } while (uVar27 != 0);
                                            if (uVar8 != 0) {
                                                uVar27 = uVar36 + 1;
                                                if (uVar19 <= uVar27 && uVar27 != uVar19) goto code_r0x0001938f8168;
                                                uVar2 = puVar30[uVar36 >> 3];
                                                *puVar48 = uVar27;
                                                uVar24 = -uVar8;
                                                if ((uVar2 >> (7 & (uVar36 ^ 0xffffffff)) & 1) == 0) {
                                                    uVar24 = uVar8;
                                                }
                                                uVar8 = uVar24;
                                                uVar36 = uVar27;
                                                if (uVar24 != 0x7ffe && 0x7ffd < uVar24) goto code_r0x0001938f8168;
                                            }
                                        }
                                        *(iVar15 + 8) = uVar8;
                                        uVar27 = uVar36 + 1;
                                        if (uVar19 <= uVar27 && uVar27 != uVar19) {
                                            uVar47 = **reloc.__stderrp;
                                            goto code_r0x0001938f8174;
                                        }
                                        uVar2 = puVar30[uVar36 >> 3];
                                        *puVar48 = uVar27;
                                        if ((uVar2 >> (7 & (uVar36 ^ 0xffffffff)) & 1) != 0) {
                                            if (uVar19 <= uVar27 + uStack_120 && uVar27 + uStack_120 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar35 = uStack_120;
                                            if (uVar35 == 0) {
                                                uVar24 = 0;
                                            }
                                            else {
                                                uVar35 = 0;
                                                uVar32 = uStack_120;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar32;
                                                    if (uVar37 <= uVar32) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar24 = uVar36;
                                                    uVar35 = puVar30[uVar27 >> 3] >>
                                                             ((iVar9 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                                             (iVar7 << (uVar24 & 0x1f) ^ 0xffffffff) |
                                                             uVar35 << (uVar24 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar32 = uVar32 - uVar36;
                                                } while (uVar32 != 0);
                                                if (uVar19 <= uVar27 + uStack_120 && uVar27 + uStack_120 != uVar19)
                                                goto code_r0x0001938f8168;
                                                uVar24 = 0;
                                                uVar32 = uStack_120;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar32;
                                                    if (uVar37 <= uVar32) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar8 = uVar36;
                                                    uVar24 = puVar30[uVar27 >> 3] >>
                                                             ((iVar9 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                             (iVar7 << (uVar8 & 0x1f) ^ 0xffffffff) |
                                                             uVar24 << (uVar8 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar32 = uVar32 - uVar36;
                                                } while (uVar32 != 0);
                                            }
                                            if ((uStack_c8 < uVar35 || uStack_c8 == uVar35) ||
                                               (uVar32 = uVar24,  uStack_c8 < uVar32 || uStack_c8 == uVar32))
                                            goto code_r0x0001938f8168;
                                            *(iVar15 + 0x20) = iStack_d0 + uVar35;
                                            iVar14 = iStack_d0 + uVar32;
                                        }
                                        else {
                                            *(iVar15 + 0x20) = 0x30f + 0x193afb000;
                                            iVar14 = 0x30f + 0x193afb000;
                                        }
                                        *(iVar15 + 0x18) = iVar14;
                                        uVar46 = uVar46 + 1;
                                    } while (uVar46 <= uVar29 && uVar29 != uVar46);
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938f8c4c:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar24 = 0;
                                uVar46 = 5;
                                do {
                                    uVar32 = 8 - (uVar27 & 7);
                                    uVar35 = uVar46;
                                    if (uVar32 <= uVar46) {
                                        uVar35 = uVar32;
                                    }
                                    uVar8 = uVar35;
                                    uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                             (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                    uVar27 = uVar35 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar35;
                                } while (uVar46 != 0);
                                uVar46 = uVar24 + 1;
                                if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19) goto code_r0x0001938f8c4c;
                                if (uVar24 + 1 != 0) {
                                    uVar24 = 0;
                                    do {
                                        uVar32 = 8 - (uVar27 & 7);
                                        uVar35 = uVar46;
                                        if (uVar32 <= uVar46) {
                                            uVar35 = uVar32;
                                        }
                                        uVar8 = uVar35;
                                        uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                 (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                        uVar27 = uVar35 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar46 = uVar46 - uVar35;
                                    } while (uVar46 != 0);
                                    if (uVar24 != 0) {
                                        uVar8 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uStack_118 && uVar27 + uStack_118 != uVar19)
                                            goto code_r0x0001938f8168;
                                            if (uStack_118 == 0) {
                                                uVar5 = 0;
                                            }
                                            else {
                                                uVar5 = 0;
                                                uVar46 = uStack_118;
                                                do {
                                                    uVar32 = 8 - (uVar27 & 7);
                                                    uVar35 = uVar46;
                                                    if (uVar32 <= uVar46) {
                                                        uVar35 = uVar32;
                                                    }
                                                    uVar6 = uVar35;
                                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f)
                                                            & (-1 << (uVar6 & 0x1f) ^ 0xffffffff) |
                                                            uVar5 << (uVar6 & 0x1f);
                                                    uVar27 = uVar35 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar46 = uVar46 - uVar35;
                                                } while (uVar46 != 0);
                                            }
                                            uVar46 = uVar5;
                                            if ((uVar29 < uVar46 || uVar29 == uVar46) ||
                                               (uVar19 <= uVar27 + uStack_110 && uVar27 + uStack_110 != uVar19))
                                            goto code_r0x0001938f8168;
                                            if (uStack_110 == 0) {
                                                uVar5 = 0;
                                            }
                                            else {
                                                uVar5 = 0;
                                                uVar35 = uStack_110;
                                                do {
                                                    uVar36 = 8 - (uVar27 & 7);
                                                    uVar32 = uVar35;
                                                    if (uVar36 <= uVar35) {
                                                        uVar32 = uVar36;
                                                    }
                                                    uVar6 = uVar32;
                                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f)
                                                            & (-1 << (uVar6 & 0x1f) ^ 0xffffffff) |
                                                            uVar5 << (uVar6 & 0x1f);
                                                    uVar27 = uVar32 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar35 = uVar35 - uVar32;
                                                } while (uVar35 != 0);
                                            }
                                            uVar35 = uVar5;
                                            iVar14 = *(iVar13 + 0x60);
                                            uVar32 = (*(iVar13 + 0x68) - iVar14 >> 4) *
                                                     (0x286bca1b | 0x86bca1af00000000);
                                            if (uVar32 < uVar35 || uVar32 - uVar35 == 0) goto code_r0x0001938f8168;
                                            iVar15 = iVar40 + uVar46 * 0x40;
                                            *(iVar15 + 0xc) = 1;
                                            *(iVar15 + 0x10) = uVar35;
                                            iVar14 = iVar14 + uVar35 * 0x130;
                                            *(iVar14 + 0x10b) = 3;
                                            *(iVar14 + 0x128) = uVar46;
                                            uVar8 = uVar8 + 1;
                                        } while (uVar8 != uVar24);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938f94f0:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar24 = 0;
                                uVar46 = 5;
                                do {
                                    uVar32 = 8 - (uVar27 & 7);
                                    uVar35 = uVar46;
                                    if (uVar32 <= uVar46) {
                                        uVar35 = uVar32;
                                    }
                                    uVar8 = uVar35;
                                    uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                             (-1 << (uVar8 & 0x1f) ^ 0xffffffffU) | uVar24 << (uVar8 & 0x1f);
                                    uVar27 = uVar35 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar35;
                                } while (uVar46 != 0);
                                uVar46 = uVar24 + 1;
                                if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19) goto code_r0x0001938f94f0;
                                if (uVar24 + 1 != 0) {
                                    uVar24 = 0;
                                    do {
                                        uVar32 = 8 - (uVar27 & 7);
                                        uVar35 = uVar46;
                                        if (uVar32 <= uVar46) {
                                            uVar35 = uVar32;
                                        }
                                        uVar8 = uVar35;
                                        uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                 (-1 << (uVar8 & 0x1f) ^ 0xffffffffU) | uVar24 << (uVar8 & 0x1f);
                                        uVar27 = uVar35 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar46 = uVar46 - uVar35;
                                    } while (uVar46 != 0);
                                    if (uVar24 != 0) {
                                        uVar8 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uStack_118 && uVar27 + uStack_118 != uVar19)
                                            goto code_r0x0001938f8168;
                                            if (uStack_118 == 0) {
                                                uVar5 = 0;
                                            }
                                            else {
                                                uVar5 = 0;
                                                uVar46 = uStack_118;
                                                do {
                                                    uVar32 = 8 - (uVar27 & 7);
                                                    uVar35 = uVar46;
                                                    if (uVar32 <= uVar46) {
                                                        uVar35 = uVar32;
                                                    }
                                                    uVar6 = uVar35;
                                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f)
                                                            & (-1 << (uVar6 & 0x1f) ^ 0xffffffff) |
                                                            uVar5 << (uVar6 & 0x1f);
                                                    uVar27 = uVar35 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar46 = uVar46 - uVar35;
                                                } while (uVar46 != 0);
                                            }
                                            uVar46 = uVar5;
                                            if ((uVar29 < uVar46 || uVar29 == uVar46) ||
                                               (uVar19 <= uVar27 + uStack_100 && uVar27 + uStack_100 != uVar19))
                                            goto code_r0x0001938f8168;
                                            if (uStack_100 == 0) {
                                                uVar5 = 0;
                                            }
                                            else {
                                                uVar5 = 0;
                                                uVar35 = uStack_100;
                                                do {
                                                    uVar36 = 8 - (uVar27 & 7);
                                                    uVar32 = uVar35;
                                                    if (uVar36 <= uVar35) {
                                                        uVar32 = uVar36;
                                                    }
                                                    uVar6 = uVar32;
                                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f)
                                                            & (-1 << (uVar6 & 0x1f) ^ 0xffffffff) |
                                                            uVar5 << (uVar6 & 0x1f);
                                                    uVar27 = uVar32 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar35 = uVar35 - uVar32;
                                                } while (uVar35 != 0);
                                            }
                                            if (*(iVar13 + 0x200) - *(iVar13 + 0x1f8) >> 8 <= uVar5)
                                            goto code_r0x0001938f8168;
                                            puVar28 = iVar40 + uVar46 * 0x40;
                                            iVar26 = puVar28[7];
                                            iVar15 = *(iVar13 + 0xd8);
                                            iVar14 = *(iVar13 + 0x1f8) + uVar5 * 0x100;
                                            *(iVar14 + 0xb0) = *puVar28;
                                            *(iVar14 + 0xc0) = *(puVar28 + 1);
                                            iVar15 = iVar15 + iVar26 * 0x130;
                                            *(iVar14 + 0xa8) = *(iVar15 + 0x100);
                                            *(iVar14 + 0xa0) = *(*(iVar13 + 0xb8) + *(iVar15 + 0x128) * 0x128 + 0x100);
                                            uVar8 = uVar8 + 1;
                                        } while (uVar8 != uVar24);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938f9798:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar24 = 0;
                                uVar46 = 5;
                                do {
                                    uVar35 = 8 - (uVar27 & 7);
                                    uVar29 = uVar46;
                                    if (uVar35 <= uVar46) {
                                        uVar29 = uVar35;
                                    }
                                    uVar8 = uVar29;
                                    uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                             (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                    uVar27 = uVar29 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar29;
                                } while (uVar46 != 0);
                                uVar46 = uVar24 + 1;
                                if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19) goto code_r0x0001938f9798;
                                uVar8 = 0;
                                if (uVar24 + 1 != 0) {
                                    do {
                                        uVar29 = 8 - (uVar27 & 7);
                                        uVar19 = uVar46;
                                        if (uVar29 <= uVar46) {
                                            uVar19 = uVar29;
                                        }
                                        uVar24 = uVar19;
                                        uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                                (-1 << (uVar24 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar24 & 0x1f);
                                        uVar27 = uVar19 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar46 = uVar46 - uVar19;
                                    } while (uVar46 != 0);
                                }
                                *(iVar13 + 0x108) = uVar8;
                                tmp_ldWn = *(0x290 + 0x1d6cc0000);
                                uVar24 = tmp_ldWn;
                                if (((uVar24 & 1) == 0) &&
                                   (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
                                    ppcVar16 = operator new(unsigned long)(0x108);
                                    ppcVar16[1] = 0x61 + 0x193b8a000;
                                    ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                                    ppcVar16[3] = 0x61 + 0x193b8a000;
                                    pcVar18 = *0x193af97f0;
                                    ppcVar16[5] = *0x193af97f8;
                                    ppcVar16[4] = pcVar18;
                                    *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l
                                                + 0xfa8 + 0x10;
                                    ppcVar16[8] = NULL;
                                    ppcVar16[7] = NULL;
                                    ppcVar16[10] = NULL;
                                    ppcVar16[9] = NULL;
                                    ppcVar16[0xc] = NULL;
                                    ppcVar16[0xb] = NULL;
                                    ppcVar16[0xe] = NULL;
                                    ppcVar16[0xd] = NULL;
                                    ppcVar16[0x10] = NULL;
                                    ppcVar16[0xf] = NULL;
                                    ppcVar16[0x12] = NULL;
                                    ppcVar16[0x11] = NULL;
                                    ppcVar16[0x14] = NULL;
                                    ppcVar16[0x13] = NULL;
                                    ppcVar16[0x16] = NULL;
                                    ppcVar16[0x15] = NULL;
                                    ppcVar16[0x18] = NULL;
                                    ppcVar16[0x17] = NULL;
                                    ppcVar16[0x1a] = NULL;
                                    ppcVar16[0x19] = NULL;
                                    ppcVar16[0x1c] = NULL;
                                    ppcVar16[0x1b] = NULL;
                                    ppcVar16[0x1e] = NULL;
                                    ppcVar16[0x1d] = NULL;
                                    ppcVar16[0x1f] = NULL;
                                    uVar47 = pthread_rwlock_init(ppcVar16 + 7, 0);
                                    if (uVar47 != 0) {
                                        geo::read_write_lock::logFailure(int, char const*)(uVar47, 0x85 + 0x193b8a000);
                                    }
                                    pcVar18 = malloc_create_zone(0, 0);
                                    ppcVar16[6] = pcVar18;
                                    malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                                    pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                                    ppcVar16[0x20] = pcVar18;
                                    *geo::codec::Allocator::instance()::alloc = ppcVar16;
                                    __cxa_guard_release(0x290 + 0x1d6cc0000);
                                }
                                iVar40 = (**(**geo::codec::Allocator::instance()::alloc + 0x18))
                                                   (*geo::codec::Allocator::instance()::alloc, *(*param_3 + 0x108), 0x38
                                                   );
                                iVar13 = *param_3;
                                *(iVar13 + 0x110) = iVar40;
                                uVar27 = *(pcVar10 + 0x18);
                                uVar19 = *(pcVar10 + 0x10) * 8;
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar24 = 0;
                                puVar30 = *ppuStack_b8;
                                uVar46 = 5;
                                do {
                                    uVar35 = 8 - (uVar27 & 7);
                                    uVar29 = uVar46;
                                    if (uVar35 <= uVar46) {
                                        uVar29 = uVar35;
                                    }
                                    uVar8 = uVar29;
                                    uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                             (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                    uVar27 = uVar29 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar29;
                                } while (uVar46 != 0);
                                uVar24 = uVar24 + 1;
                                uVar46 = uVar24;
                                if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar35 = 0;
                                uVar29 = uVar46;
                                if (uVar24 != 0) {
                                    do {
                                        uVar36 = 8 - (uVar27 & 7);
                                        uVar32 = uVar29;
                                        if (uVar36 <= uVar29) {
                                            uVar32 = uVar36;
                                        }
                                        uVar8 = uVar32;
                                        uVar35 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x3f) &
                                                 ~(-1 << (uVar8 & 0x1f)) | uVar35 << (uVar8 & 0x1f);
                                        uVar27 = uVar32 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar32;
                                        uVar29 = uVar29;
                                    } while (uVar29 != 0);
                                    if (uVar35 != 0) {
                                        uVar29 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uStack_118 && uVar27 + uStack_118 != uVar19)
                                            goto code_r0x0001938f8168;
                                            if (uStack_118 == 0) {
                                                uVar8 = 0;
                                            }
                                            else {
                                                uVar8 = 0;
                                                uVar32 = uStack_118;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar32;
                                                    if (uVar37 <= uVar32) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar5 = uVar36;
                                                    uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f)
                                                            & (-1 << (uVar5 & 0x1f) ^ 0xffffffff) |
                                                            uVar8 << (uVar5 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar32 = uVar32 - uVar36;
                                                } while (uVar32 != 0);
                                            }
                                            uVar32 = uVar8;
                                            if ((*(iVar13 + 0xf8) < uVar32 || *(iVar13 + 0xf8) == uVar32) ||
                                               (*(iVar13 + 0x108) < uVar29 || *(iVar13 + 0x108) == uVar29))
                                            goto code_r0x0001938f8168;
                                            puVar21 = iVar40 + uVar29 * 0x38;
                                            *(puVar21 + 1) = 1;
                                            puVar21[6] = uVar32;
                                            *(puVar21 + 4) = 0;
                                            if (uVar19 <= uVar27 + 0x40 && uVar27 + 0x40 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar36 = 0;
                                            uVar32 = 0x40;
                                            do {
                                                uVar38 = 8 - (uVar27 & 7);
                                                uVar37 = uVar32;
                                                if (uVar38 <= uVar32) {
                                                    uVar37 = uVar38;
                                                }
                                                uVar36 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar37 & 0x3f) &
                                                         (-1L << (uVar37 & 0x3f) ^ 0xffffffffffffffffU) |
                                                         uVar36 << (uVar37 & 0x3f);
                                                uVar27 = uVar37 + uVar27;
                                                *puVar48 = uVar27;
                                                uVar32 = uVar32 - uVar37;
                                            } while (uVar32 != 0);
                                            *puVar21 = uVar36;
                                            uVar29 = uVar29 + 1;
                                        } while (uVar29 != uVar35);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938f9b3c:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar8 = 0;
                                uVar29 = 5;
                                do {
                                    uVar36 = 8 - (uVar27 & 7);
                                    uVar32 = uVar29;
                                    if (uVar36 <= uVar29) {
                                        uVar32 = uVar36;
                                    }
                                    uVar5 = uVar32;
                                    uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                            (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar5 & 0x1f);
                                    uVar27 = uVar32 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar29 = uVar29 - uVar32;
                                } while (uVar29 != 0);
                                uVar29 = uVar8 + 1;
                                if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19) goto code_r0x0001938f9b3c;
                                if (uVar8 + 1 != 0) {
                                    uVar8 = 0;
                                    do {
                                        uVar36 = 8 - (uVar27 & 7);
                                        uVar32 = uVar29;
                                        if (uVar36 <= uVar29) {
                                            uVar32 = uVar36;
                                        }
                                        uVar5 = uVar32;
                                        uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                                (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar5 & 0x1f);
                                        uVar27 = uVar32 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar32;
                                    } while (uVar29 != 0);
                                    if (uVar8 != 0) {
                                        uVar5 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar6 = 0;
                                            uVar29 = uVar46;
                                            if (uVar24 != 0) {
                                                do {
                                                    uVar36 = 8 - (uVar27 & 7);
                                                    uVar32 = uVar29;
                                                    if (uVar36 <= uVar29) {
                                                        uVar32 = uVar36;
                                                    }
                                                    uVar22 = uVar32;
                                                    uVar6 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar22 & 0x1f)
                                                            & (-1 << (uVar22 & 0x1f) ^ 0xffffffff) |
                                                            uVar6 << (uVar22 & 0x1f);
                                                    uVar27 = uVar32 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar32;
                                                    uVar29 = uVar29;
                                                } while (uVar29 != 0);
                                            }
                                            if (uVar19 <= uVar27 + uStack_110 && uVar27 + uStack_110 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar29 = uStack_110;
                                            if (uVar29 != 0) {
                                                uVar29 = 0;
                                                uVar32 = uStack_110;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar32;
                                                    if (uVar37 <= uVar32) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar22 = uVar36;
                                                    uVar29 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar22 & 0x1f) &
                                                             (-1 << (uVar22 & 0x1f) ^ 0xffffffff) |
                                                             uVar29 << (uVar22 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar32 = uVar32 - uVar36;
                                                } while (uVar32 != 0);
                                            }
                                            if (uVar35 <= uVar6) goto code_r0x0001938f8168;
                                            uVar32 = (*(iVar13 + 0x68) - *(iVar13 + 0x60) >> 4) *
                                                     (0x286bca1b | 0x86bca1af00000000);
                                            if (uVar32 < uVar29 || uVar32 - uVar29 == 0) goto code_r0x0001938f8168;
                                            iVar14 = *(iVar13 + 0x60) + uVar29 * 0x130;
                                            *(iVar14 + 0x10b) = 2;
                                            *(iVar14 + 0x128) = uVar6;
                                            uVar5 = uVar5 + 1;
                                        } while (uVar5 != uVar8);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar24 = 0;
                                uVar46 = 5;
                                do {
                                    uVar32 = 8 - (uVar27 & 7);
                                    uVar29 = uVar46;
                                    if (uVar32 <= uVar46) {
                                        uVar29 = uVar32;
                                    }
                                    uVar8 = uVar29;
                                    uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                             (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                    uVar27 = uVar29 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar29;
                                } while (uVar46 != 0);
                                uVar24 = uVar24 + 1;
                                uVar46 = uVar24;
                                if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar8 = 0;
                                uVar32 = uVar35;
                                uVar29 = uVar46;
                                if (uVar24 != 0) {
                                    do {
                                        uVar37 = 8 - (uVar27 & 7);
                                        uVar36 = uVar29;
                                        if (uVar37 <= uVar29) {
                                            uVar36 = uVar37;
                                        }
                                        uVar5 = uVar36;
                                        uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                                (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar5 & 0x1f);
                                        uVar27 = uVar36 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar36;
                                        uVar29 = uVar29;
                                    } while (uVar29 != 0);
                                    if (uVar8 != 0) {
                                        uVar5 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uStack_118 && uVar27 + uStack_118 != uVar19)
                                            goto code_r0x0001938f8168;
                                            if (uStack_118 == 0) {
                                                uVar6 = 0;
                                            }
                                            else {
                                                uVar6 = 0;
                                                uVar29 = uStack_118;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar29;
                                                    if (uVar37 <= uVar29) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar22 = uVar36;
                                                    uVar6 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar22 & 0x1f)
                                                            & (-1 << (uVar22 & 0x1f) ^ 0xffffffff) |
                                                            uVar6 << (uVar22 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar36;
                                                } while (uVar29 != 0);
                                            }
                                            uVar29 = uVar6;
                                            if ((*(iVar13 + 0xf8) < uVar29 || *(iVar13 + 0xf8) == uVar29) ||
                                               (*(iVar13 + 0x108) < uVar32 || *(iVar13 + 0x108) == uVar32))
                                            goto code_r0x0001938f8168;
                                            puVar21 = iVar40 + uVar32 * 0x38;
                                            *(puVar21 + 1) = 2;
                                            puVar21[6] = uVar29;
                                            *(puVar21 + 4) = 0;
                                            if (uVar19 <= uVar27 + 0x40 && uVar27 + 0x40 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar36 = 0;
                                            uVar29 = 0x40;
                                            do {
                                                uVar38 = 8 - (uVar27 & 7);
                                                uVar37 = uVar29;
                                                if (uVar38 <= uVar29) {
                                                    uVar37 = uVar38;
                                                }
                                                uVar36 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar37 & 0x3f) &
                                                         (-1L << (uVar37 & 0x3f) ^ 0xffffffffffffffffU) |
                                                         uVar36 << (uVar37 & 0x3f);
                                                uVar27 = uVar37 + uVar27;
                                                *puVar48 = uVar27;
                                                uVar29 = uVar29 - uVar37;
                                            } while (uVar29 != 0);
                                            *puVar21 = uVar36;
                                            uVar5 = uVar5 + 1;
                                            uVar32 = uVar32 + 1;
                                        } while (uVar5 != uVar8);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938fa184:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar5 = 0;
                                uVar29 = 5;
                                do {
                                    uVar37 = 8 - (uVar27 & 7);
                                    uVar36 = uVar29;
                                    if (uVar37 <= uVar29) {
                                        uVar36 = uVar37;
                                    }
                                    uVar6 = uVar36;
                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                            (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                    uVar27 = uVar36 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar29 = uVar29 - uVar36;
                                } while (uVar29 != 0);
                                uVar29 = uVar5 + 1;
                                if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19) goto code_r0x0001938fa184;
                                if (uVar5 + 1 != 0) {
                                    uVar5 = 0;
                                    do {
                                        uVar37 = 8 - (uVar27 & 7);
                                        uVar36 = uVar29;
                                        if (uVar37 <= uVar29) {
                                            uVar36 = uVar37;
                                        }
                                        uVar6 = uVar36;
                                        uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                                (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                        uVar27 = uVar36 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar36;
                                    } while (uVar29 != 0);
                                    if (uVar5 != 0) {
                                        uVar6 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar22 = 0;
                                            uVar29 = uVar46;
                                            if (uVar24 != 0) {
                                                do {
                                                    uVar36 = 8 - (uVar27 & 7);
                                                    uVar35 = uVar29;
                                                    if (uVar36 <= uVar29) {
                                                        uVar35 = uVar36;
                                                    }
                                                    uVar23 = uVar35;
                                                    uVar22 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar22 << (uVar23 & 0x1f);
                                                    uVar27 = uVar35 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar35;
                                                    uVar29 = uVar29;
                                                } while (uVar29 != 0);
                                            }
                                            if (uVar19 <= uVar27 + uStack_100 && uVar27 + uStack_100 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar29 = uStack_100;
                                            if (uVar29 != 0) {
                                                uVar29 = 0;
                                                uVar35 = uStack_100;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar35;
                                                    if (uVar37 <= uVar35) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar23 = uVar36;
                                                    uVar29 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar29 << (uVar23 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar35 = uVar35 - uVar36;
                                                } while (uVar35 != 0);
                                            }
                                            if (uVar8 <= uVar22) goto code_r0x0001938f8168;
                                            iVar14 = *(iVar13 + 0x1f8);
                                            if (*(iVar13 + 0x200) - iVar14 >> 8 <= uVar29) goto code_r0x0001938f8168;
                                            puVar31 = iVar40 + uVar35 * 0x38 + uVar22 * 0x38;
                                            *(puVar31 + 4) = 1;
                                            puVar31[5] = uVar29;
                                            puVar28 = *(iVar13 + 0x100) + puVar31[6] * 0x40;
                                            iVar15 = *(iVar13 + 0xd8) + puVar28[7] * 0x130;
                                            iVar14 = iVar14 + uVar29 * 0x100;
                                            *(iVar14 + 0xa0) = *(*(iVar13 + 0xb8) + *(iVar15 + 0x128) * 0x128 + 0x100);
                                            *(iVar14 + 0xa8) = *(iVar15 + 0x100);
                                            *(iVar14 + 0xb0) = *puVar28;
                                            *(iVar14 + 0xb8) = *puVar31;
                                            *(iVar14 + 0xc0) = *(puVar28 + 1);
                                            *(iVar14 + 0xc4) = 2;
                                            uVar6 = uVar6 + 1;
                                        } while (uVar6 != uVar5);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938fa4f0:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar5 = 0;
                                uVar29 = 5;
                                do {
                                    uVar36 = 8 - (uVar27 & 7);
                                    uVar35 = uVar29;
                                    if (uVar36 <= uVar29) {
                                        uVar35 = uVar36;
                                    }
                                    uVar6 = uVar35;
                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                            (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                    uVar27 = uVar35 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar29 = uVar29 - uVar35;
                                } while (uVar29 != 0);
                                uVar29 = uVar5 + 1;
                                if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19) goto code_r0x0001938fa4f0;
                                if (uVar5 + 1 != 0) {
                                    uVar5 = 0;
                                    do {
                                        uVar36 = 8 - (uVar27 & 7);
                                        uVar35 = uVar29;
                                        if (uVar36 <= uVar29) {
                                            uVar35 = uVar36;
                                        }
                                        uVar6 = uVar35;
                                        uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                                (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                        uVar27 = uVar35 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar35;
                                    } while (uVar29 != 0);
                                    if (uVar5 != 0) {
                                        uVar6 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar22 = 0;
                                            uVar29 = uVar46;
                                            if (uVar24 != 0) {
                                                do {
                                                    uVar36 = 8 - (uVar27 & 7);
                                                    uVar35 = uVar29;
                                                    if (uVar36 <= uVar29) {
                                                        uVar35 = uVar36;
                                                    }
                                                    uVar23 = uVar35;
                                                    uVar22 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar22 << (uVar23 & 0x1f);
                                                    uVar27 = uVar35 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar35;
                                                    uVar29 = uVar29;
                                                } while (uVar29 != 0);
                                            }
                                            if (uVar19 <= uVar27 + uStack_110 && uVar27 + uStack_110 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar29 = uStack_110;
                                            if (uVar29 != 0) {
                                                uVar29 = 0;
                                                uVar35 = uStack_110;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar35;
                                                    if (uVar37 <= uVar35) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar23 = uVar36;
                                                    uVar29 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar29 << (uVar23 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar35 = uVar35 - uVar36;
                                                } while (uVar35 != 0);
                                            }
                                            if (uVar8 <= uVar22) goto code_r0x0001938f8168;
                                            uVar35 = (*(iVar13 + 0x68) - *(iVar13 + 0x60) >> 4) *
                                                     (0x286bca1b | 0x86bca1af00000000);
                                            if (uVar35 < uVar29 || uVar35 - uVar29 == 0) goto code_r0x0001938f8168;
                                            iVar14 = *(iVar13 + 0x60) + uVar29 * 0x130;
                                            *(iVar14 + 0x10b) = 2;
                                            *(iVar14 + 0x128) = uVar22 + uVar35;
                                            uVar6 = uVar6 + 1;
                                        } while (uVar6 != uVar5);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar24 = 0;
                                uVar46 = 5;
                                do {
                                    uVar35 = 8 - (uVar27 & 7);
                                    uVar29 = uVar46;
                                    if (uVar35 <= uVar46) {
                                        uVar29 = uVar35;
                                    }
                                    uVar8 = uVar29;
                                    uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                             (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                    uVar27 = uVar29 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar29;
                                } while (uVar46 != 0);
                                uVar24 = uVar24 + 1;
                                uVar46 = uVar24;
                                if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar8 = 0;
                                uVar35 = uVar32;
                                uVar29 = uVar46;
                                if (uVar24 != 0) {
                                    do {
                                        uVar37 = 8 - (uVar27 & 7);
                                        uVar36 = uVar29;
                                        if (uVar37 <= uVar29) {
                                            uVar36 = uVar37;
                                        }
                                        uVar5 = uVar36;
                                        uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                                (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar5 & 0x1f);
                                        uVar27 = uVar36 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar36;
                                        uVar29 = uVar29;
                                    } while (uVar29 != 0);
                                    if (uVar8 != 0) {
                                        uVar5 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uStack_118 && uVar27 + uStack_118 != uVar19)
                                            goto code_r0x0001938f8168;
                                            if (uStack_118 == 0) {
                                                uVar6 = 0;
                                            }
                                            else {
                                                uVar6 = 0;
                                                uVar29 = uStack_118;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar29;
                                                    if (uVar37 <= uVar29) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar22 = uVar36;
                                                    uVar6 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar22 & 0x1f)
                                                            & (-1 << (uVar22 & 0x1f) ^ 0xffffffff) |
                                                            uVar6 << (uVar22 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar36;
                                                } while (uVar29 != 0);
                                            }
                                            uVar29 = uVar6;
                                            if ((*(iVar13 + 0xf8) < uVar29 || *(iVar13 + 0xf8) == uVar29) ||
                                               (*(iVar13 + 0x108) < uVar35 || *(iVar13 + 0x108) == uVar35))
                                            goto code_r0x0001938f8168;
                                            puVar21 = iVar40 + uVar35 * 0x38;
                                            *(puVar21 + 1) = 3;
                                            puVar21[6] = uVar29;
                                            *(puVar21 + 4) = 0;
                                            if (uVar19 <= uVar27 + 0x40 && uVar27 + 0x40 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar36 = 0;
                                            uVar29 = 0x40;
                                            do {
                                                uVar38 = 8 - (uVar27 & 7);
                                                uVar37 = uVar29;
                                                if (uVar38 <= uVar29) {
                                                    uVar37 = uVar38;
                                                }
                                                uVar36 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar37 & 0x3f) &
                                                         (-1L << (uVar37 & 0x3f) ^ 0xffffffffffffffffU) |
                                                         uVar36 << (uVar37 & 0x3f);
                                                uVar27 = uVar37 + uVar27;
                                                *puVar48 = uVar27;
                                                uVar29 = uVar29 - uVar37;
                                            } while (uVar29 != 0);
                                            *puVar21 = uVar36;
                                            uVar5 = uVar5 + 1;
                                            uVar35 = uVar35 + 1;
                                        } while (uVar5 != uVar8);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938fa950:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar5 = 0;
                                uVar29 = 5;
                                do {
                                    uVar37 = 8 - (uVar27 & 7);
                                    uVar36 = uVar29;
                                    if (uVar37 <= uVar29) {
                                        uVar36 = uVar37;
                                    }
                                    uVar6 = uVar36;
                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                            (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                    uVar27 = uVar36 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar29 = uVar29 - uVar36;
                                } while (uVar29 != 0);
                                uVar29 = uVar5 + 1;
                                if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19) goto code_r0x0001938fa950;
                                if (uVar5 + 1 != 0) {
                                    uVar5 = 0;
                                    do {
                                        uVar37 = 8 - (uVar27 & 7);
                                        uVar36 = uVar29;
                                        if (uVar37 <= uVar29) {
                                            uVar36 = uVar37;
                                        }
                                        uVar6 = uVar36;
                                        uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                                (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                        uVar27 = uVar36 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar36;
                                    } while (uVar29 != 0);
                                    if (uVar5 != 0) {
                                        uVar6 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar22 = 0;
                                            uVar29 = uVar46;
                                            if (uVar24 != 0) {
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar29;
                                                    if (uVar37 <= uVar29) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar23 = uVar36;
                                                    uVar22 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar22 << (uVar23 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar36;
                                                    uVar29 = uVar29;
                                                } while (uVar29 != 0);
                                            }
                                            if (uVar19 <= uVar27 + uStack_100 && uVar27 + uStack_100 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar29 = uStack_100;
                                            if (uVar29 != 0) {
                                                uVar29 = 0;
                                                uVar36 = uStack_100;
                                                do {
                                                    uVar38 = 8 - (uVar27 & 7);
                                                    uVar37 = uVar36;
                                                    if (uVar38 <= uVar36) {
                                                        uVar37 = uVar38;
                                                    }
                                                    uVar23 = uVar37;
                                                    uVar29 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar29 << (uVar23 & 0x1f);
                                                    uVar27 = uVar37 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar36 = uVar36 - uVar37;
                                                } while (uVar36 != 0);
                                            }
                                            if (uVar8 <= uVar22) goto code_r0x0001938f8168;
                                            iVar14 = *(iVar13 + 0x1f8);
                                            if (*(iVar13 + 0x200) - iVar14 >> 8 <= uVar29) goto code_r0x0001938f8168;
                                            puVar31 = iVar40 + uVar32 * 0x38 + uVar22 * 0x38;
                                            *(puVar31 + 4) = 1;
                                            puVar31[5] = uVar29;
                                            puVar28 = *(iVar13 + 0x100) + puVar31[6] * 0x40;
                                            iVar15 = *(iVar13 + 0xd8) + puVar28[7] * 0x130;
                                            iVar14 = iVar14 + uVar29 * 0x100;
                                            *(iVar14 + 0xa0) = *(*(iVar13 + 0xb8) + *(iVar15 + 0x128) * 0x128 + 0x100);
                                            *(iVar14 + 0xa8) = *(iVar15 + 0x100);
                                            *(iVar14 + 0xb0) = *puVar28;
                                            *(iVar14 + 0xb8) = *puVar31;
                                            *(iVar14 + 0xc0) = *(puVar28 + 1);
                                            *(iVar14 + 0xc4) = 3;
                                            uVar6 = uVar6 + 1;
                                        } while (uVar6 != uVar5);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938fabb8:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar5 = 0;
                                uVar29 = 5;
                                do {
                                    uVar37 = 8 - (uVar27 & 7);
                                    uVar36 = uVar29;
                                    if (uVar37 <= uVar29) {
                                        uVar36 = uVar37;
                                    }
                                    uVar6 = uVar36;
                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                            (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                    uVar27 = uVar36 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar29 = uVar29 - uVar36;
                                } while (uVar29 != 0);
                                uVar29 = uVar5 + 1;
                                if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19) goto code_r0x0001938fabb8;
                                if (uVar5 + 1 != 0) {
                                    uVar5 = 0;
                                    do {
                                        uVar37 = 8 - (uVar27 & 7);
                                        uVar36 = uVar29;
                                        if (uVar37 <= uVar29) {
                                            uVar36 = uVar37;
                                        }
                                        uVar6 = uVar36;
                                        uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                                (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                        uVar27 = uVar36 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar36;
                                    } while (uVar29 != 0);
                                    if (uVar5 != 0) {
                                        uVar6 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar22 = 0;
                                            uVar29 = uVar46;
                                            if (uVar24 != 0) {
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar29;
                                                    if (uVar37 <= uVar29) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar23 = uVar36;
                                                    uVar22 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar22 << (uVar23 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar36;
                                                    uVar29 = uVar29;
                                                } while (uVar29 != 0);
                                            }
                                            if (uVar19 <= uVar27 + uStack_110 && uVar27 + uStack_110 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar29 = uStack_110;
                                            if (uVar29 != 0) {
                                                uVar29 = 0;
                                                uVar36 = uStack_110;
                                                do {
                                                    uVar38 = 8 - (uVar27 & 7);
                                                    uVar37 = uVar36;
                                                    if (uVar38 <= uVar36) {
                                                        uVar37 = uVar38;
                                                    }
                                                    uVar23 = uVar37;
                                                    uVar29 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar29 << (uVar23 & 0x1f);
                                                    uVar27 = uVar37 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar36 = uVar36 - uVar37;
                                                } while (uVar36 != 0);
                                            }
                                            if (uVar8 <= uVar22) goto code_r0x0001938f8168;
                                            uVar36 = (*(iVar13 + 0x68) - *(iVar13 + 0x60) >> 4) *
                                                     (0x286bca1b | 0x86bca1af00000000);
                                            if (uVar36 < uVar29 || uVar36 - uVar29 == 0) goto code_r0x0001938f8168;
                                            iVar14 = *(iVar13 + 0x60) + uVar29 * 0x130;
                                            *(iVar14 + 0x10b) = 2;
                                            *(iVar14 + 0x128) = uVar22 + uVar32;
                                            uVar6 = uVar6 + 1;
                                        } while (uVar6 != uVar5);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar24 = 0;
                                uVar46 = 5;
                                do {
                                    uVar32 = 8 - (uVar27 & 7);
                                    uVar29 = uVar46;
                                    if (uVar32 <= uVar46) {
                                        uVar29 = uVar32;
                                    }
                                    uVar8 = uVar29;
                                    uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                             (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                    uVar27 = uVar29 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar46 = uVar46 - uVar29;
                                } while (uVar46 != 0);
                                uVar24 = uVar24 + 1;
                                uVar46 = uVar24;
                                if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar8 = 0;
                                uVar29 = uVar46;
                                if (uVar24 != 0) {
                                    do {
                                        uVar36 = 8 - (uVar27 & 7);
                                        uVar32 = uVar29;
                                        if (uVar36 <= uVar29) {
                                            uVar32 = uVar36;
                                        }
                                        uVar5 = uVar32;
                                        uVar8 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar5 & 0x1f) &
                                                (-1 << (uVar5 & 0x1f) ^ 0xffffffff) | uVar8 << (uVar5 & 0x1f);
                                        uVar27 = uVar32 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar32;
                                        uVar29 = uVar29;
                                    } while (uVar29 != 0);
                                    if (uVar8 != 0) {
                                        uVar5 = 0;
                                        uVar29 = uVar35;
                                        do {
                                            if (uVar19 <= uVar27 + uStack_118 && uVar27 + uStack_118 != uVar19)
                                            goto code_r0x0001938f8168;
                                            if (uStack_118 == 0) {
                                                uVar6 = 0;
                                            }
                                            else {
                                                uVar6 = 0;
                                                uVar32 = uStack_118;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar32;
                                                    if (uVar37 <= uVar32) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar22 = uVar36;
                                                    uVar6 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar22 & 0x1f)
                                                            & (-1 << (uVar22 & 0x1f) ^ 0xffffffff) |
                                                            uVar6 << (uVar22 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar32 = uVar32 - uVar36;
                                                } while (uVar32 != 0);
                                            }
                                            uVar32 = uVar6;
                                            if ((*(iVar13 + 0xf8) < uVar32 || *(iVar13 + 0xf8) == uVar32) ||
                                               (*(iVar13 + 0x108) < uVar29 || *(iVar13 + 0x108) == uVar29))
                                            goto code_r0x0001938f8168;
                                            puVar21 = iVar40 + uVar29 * 0x38;
                                            *(puVar21 + 1) = 4;
                                            puVar21[6] = uVar32;
                                            *(puVar21 + 4) = 0;
                                            if (uVar19 <= uVar27 + 0x40 && uVar27 + 0x40 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar36 = 0;
                                            uVar32 = 0x40;
                                            do {
                                                uVar38 = 8 - (uVar27 & 7);
                                                uVar37 = uVar32;
                                                if (uVar38 <= uVar32) {
                                                    uVar37 = uVar38;
                                                }
                                                uVar36 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar37 & 0x3f) &
                                                         (-1L << (uVar37 & 0x3f) ^ 0xffffffffffffffffU) |
                                                         uVar36 << (uVar37 & 0x3f);
                                                uVar27 = uVar37 + uVar27;
                                                *puVar48 = uVar27;
                                                uVar32 = uVar32 - uVar37;
                                            } while (uVar32 != 0);
                                            *puVar21 = uVar36;
                                            uVar5 = uVar5 + 1;
                                            uVar29 = uVar29 + 1;
                                        } while (uVar5 != uVar8);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938fb114:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar5 = 0;
                                uVar29 = 5;
                                do {
                                    uVar36 = 8 - (uVar27 & 7);
                                    uVar32 = uVar29;
                                    if (uVar36 <= uVar29) {
                                        uVar32 = uVar36;
                                    }
                                    uVar6 = uVar32;
                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                            (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                    uVar27 = uVar32 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar29 = uVar29 - uVar32;
                                } while (uVar29 != 0);
                                uVar29 = uVar5 + 1;
                                if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19) goto code_r0x0001938fb114;
                                if (uVar5 + 1 != 0) {
                                    uVar5 = 0;
                                    do {
                                        uVar36 = 8 - (uVar27 & 7);
                                        uVar32 = uVar29;
                                        if (uVar36 <= uVar29) {
                                            uVar32 = uVar36;
                                        }
                                        uVar6 = uVar32;
                                        uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                                (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                        uVar27 = uVar32 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar32;
                                    } while (uVar29 != 0);
                                    if (uVar5 != 0) {
                                        uVar6 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar22 = 0;
                                            uVar29 = uVar46;
                                            if (uVar24 != 0) {
                                                do {
                                                    uVar36 = 8 - (uVar27 & 7);
                                                    uVar32 = uVar29;
                                                    if (uVar36 <= uVar29) {
                                                        uVar32 = uVar36;
                                                    }
                                                    uVar23 = uVar32;
                                                    uVar22 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar22 << (uVar23 & 0x1f);
                                                    uVar27 = uVar32 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar32;
                                                    uVar29 = uVar29;
                                                } while (uVar29 != 0);
                                            }
                                            if (uVar19 <= uVar27 + uStack_100 && uVar27 + uStack_100 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar29 = uStack_100;
                                            if (uVar29 != 0) {
                                                uVar29 = 0;
                                                uVar32 = uStack_100;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar32;
                                                    if (uVar37 <= uVar32) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar23 = uVar36;
                                                    uVar29 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar29 << (uVar23 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar32 = uVar32 - uVar36;
                                                } while (uVar32 != 0);
                                            }
                                            if (uVar8 <= uVar22) goto code_r0x0001938f8168;
                                            iVar14 = *(iVar13 + 0x1f8);
                                            if (*(iVar13 + 0x200) - iVar14 >> 8 <= uVar29) goto code_r0x0001938f8168;
                                            puVar31 = iVar40 + uVar35 * 0x38 + uVar22 * 0x38;
                                            *(puVar31 + 4) = 1;
                                            puVar31[5] = uVar29;
                                            puVar28 = *(iVar13 + 0x100) + puVar31[6] * 0x40;
                                            iVar15 = *(iVar13 + 0xd8) + puVar28[7] * 0x130;
                                            iVar14 = iVar14 + uVar29 * 0x100;
                                            *(iVar14 + 0xa0) = *(*(iVar13 + 0xb8) + *(iVar15 + 0x128) * 0x128 + 0x100);
                                            *(iVar14 + 0xa8) = *(iVar15 + 0x100);
                                            *(iVar14 + 0xb0) = *puVar28;
                                            *(iVar14 + 0xb8) = *puVar31;
                                            *(iVar14 + 0xc0) = *(puVar28 + 1);
                                            *(iVar14 + 0xc4) = 4;
                                            uVar6 = uVar6 + 1;
                                        } while (uVar6 != uVar5);
                                    }
                                }
                                if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938fb37c:
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                uVar5 = 0;
                                uVar29 = 5;
                                do {
                                    uVar36 = 8 - (uVar27 & 7);
                                    uVar32 = uVar29;
                                    if (uVar36 <= uVar29) {
                                        uVar32 = uVar36;
                                    }
                                    uVar6 = uVar32;
                                    uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                            (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                    uVar27 = uVar32 + uVar27;
                                    *puVar48 = uVar27;
                                    uVar29 = uVar29 - uVar32;
                                } while (uVar29 != 0);
                                uVar29 = uVar5 + 1;
                                if (uVar19 <= uVar27 + uVar29 && uVar27 + uVar29 != uVar19) goto code_r0x0001938fb37c;
                                if (uVar5 + 1 != 0) {
                                    uVar5 = 0;
                                    do {
                                        uVar36 = 8 - (uVar27 & 7);
                                        uVar32 = uVar29;
                                        if (uVar36 <= uVar29) {
                                            uVar32 = uVar36;
                                        }
                                        uVar6 = uVar32;
                                        uVar5 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar6 & 0x1f) &
                                                (-1 << (uVar6 & 0x1f) ^ 0xffffffff) | uVar5 << (uVar6 & 0x1f);
                                        uVar27 = uVar32 + uVar27;
                                        *puVar48 = uVar27;
                                        uVar29 = uVar29 - uVar32;
                                    } while (uVar29 != 0);
                                    if (uVar5 != 0) {
                                        uVar6 = 0;
                                        do {
                                            if (uVar19 <= uVar27 + uVar46 && uVar27 + uVar46 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar22 = 0;
                                            uVar29 = uVar46;
                                            if (uVar24 != 0) {
                                                do {
                                                    uVar36 = 8 - (uVar27 & 7);
                                                    uVar32 = uVar29;
                                                    if (uVar36 <= uVar29) {
                                                        uVar32 = uVar36;
                                                    }
                                                    uVar23 = uVar32;
                                                    uVar22 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar22 << (uVar23 & 0x1f);
                                                    uVar27 = uVar32 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar29 = uVar29 - uVar32;
                                                    uVar29 = uVar29;
                                                } while (uVar29 != 0);
                                            }
                                            if (uVar19 <= uVar27 + uStack_110 && uVar27 + uStack_110 != uVar19)
                                            goto code_r0x0001938f8168;
                                            uVar29 = uStack_110;
                                            if (uVar29 != 0) {
                                                uVar29 = 0;
                                                uVar32 = uStack_110;
                                                do {
                                                    uVar37 = 8 - (uVar27 & 7);
                                                    uVar36 = uVar32;
                                                    if (uVar37 <= uVar32) {
                                                        uVar36 = uVar37;
                                                    }
                                                    uVar23 = uVar36;
                                                    uVar29 = puVar30[uVar27 >> 3] >>
                                                             ((8 - (uVar27 & 7)) - uVar23 & 0x1f) &
                                                             (-1 << (uVar23 & 0x1f) ^ 0xffffffff) |
                                                             uVar29 << (uVar23 & 0x1f);
                                                    uVar27 = uVar36 + uVar27;
                                                    *puVar48 = uVar27;
                                                    uVar32 = uVar32 - uVar36;
                                                } while (uVar32 != 0);
                                            }
                                            if (uVar8 <= uVar22) goto code_r0x0001938f8168;
                                            uVar32 = (*(iVar13 + 0x68) - *(iVar13 + 0x60) >> 4) *
                                                     (0x286bca1b | 0x86bca1af00000000);
                                            if (uVar32 < uVar29 || uVar32 - uVar29 == 0) goto code_r0x0001938f8168;
                                            iVar40 = *(iVar13 + 0x60) + uVar29 * 0x130;
                                            *(iVar40 + 0x10b) = 2;
                                            *(iVar40 + 0x128) = uVar22 + uVar35;
                                            uVar6 = uVar6 + 1;
                                        } while (uVar6 != uVar5);
                                    }
                                }
                                if (*(iVar13 + 0xc0) != *(iVar13 + 0xb8)) {
                                    uVar29 = 0;
                                    uVar46 = 0;
                                    iVar13 = *param_3;
                                    do {
                                        if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938fb7b4:
                                            uVar47 = **reloc.__stderrp;
                                            goto code_r0x0001938f8174;
                                        }
                                        uVar24 = 0;
                                        uVar35 = 5;
                                        do {
                                            uVar36 = 8 - (uVar27 & 7);
                                            uVar32 = uVar35;
                                            if (uVar36 <= uVar35) {
                                                uVar32 = uVar36;
                                            }
                                            uVar8 = uVar32;
                                            uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                     (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                            uVar27 = uVar32 + uVar27;
                                            *puVar48 = uVar27;
                                            uVar35 = uVar35 - uVar32;
                                        } while (uVar35 != 0);
                                        uVar35 = uVar24 + 1;
                                        if (uVar19 <= uVar27 + uVar35 && uVar27 + uVar35 != uVar19)
                                        goto code_r0x0001938fb7b4;
                                        uVar32 = 0;
                                        if (uVar24 + 1 != 0) {
                                            do {
                                                uVar37 = 8 - (uVar27 & 7);
                                                uVar36 = uVar35;
                                                if (uVar37 <= uVar35) {
                                                    uVar36 = uVar37;
                                                }
                                                uVar24 = uVar36;
                                                uVar32 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                                         (-1 << (uVar24 & 0x1f) ^ 0xffffffff) |
                                                         uVar32 << (uVar24 & 0x1f);
                                                uVar27 = uVar36 + uVar27;
                                                *puVar48 = uVar27;
                                                uVar35 = uVar35 - uVar36;
                                            } while (uVar35 != 0);
                                        }
                                        iVar40 = *(iVar13 + 0xb8);
                                        iVar14 = iVar40 + uVar29 * 0x128;
                                        *(iVar14 + 0x80) = uVar46;
                                        *(iVar14 + 0x88) = uVar32;
                                        uVar46 = uVar32 + uVar46;
                                        uVar29 = uVar29 + 1;
                                        uVar35 = (*(iVar13 + 0xc0) - iVar40 >> 3) * (0x914c1bad | 0x14c1bacf00000000);
                                    } while (uVar29 <= uVar35 && uVar35 - uVar29 != 0);
                                }
                                else {
                                    uVar46 = 0;
                                }
                                if (*(iVar13 + 0xe0) != *(iVar13 + 0xd8)) {
                                    uVar29 = 0;
                                    iVar13 = *param_3;
                                    do {
                                        if (uVar19 <= uVar27 + 5 && uVar27 + 5 != uVar19) {
code_r0x0001938fbc14:
                                            uVar47 = **reloc.__stderrp;
                                            goto code_r0x0001938f8174;
                                        }
                                        uVar24 = 0;
                                        uVar35 = 5;
                                        do {
                                            uVar36 = 8 - (uVar27 & 7);
                                            uVar32 = uVar35;
                                            if (uVar36 <= uVar35) {
                                                uVar32 = uVar36;
                                            }
                                            uVar8 = uVar32;
                                            uVar24 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar8 & 0x1f) &
                                                     (-1 << (uVar8 & 0x1f) ^ 0xffffffff) | uVar24 << (uVar8 & 0x1f);
                                            uVar27 = uVar32 + uVar27;
                                            *puVar48 = uVar27;
                                            uVar35 = uVar35 - uVar32;
                                        } while (uVar35 != 0);
                                        uVar35 = uVar24 + 1;
                                        if (uVar19 <= uVar27 + uVar35 && uVar27 + uVar35 != uVar19)
                                        goto code_r0x0001938fbc14;
                                        uVar32 = 0;
                                        if (uVar24 + 1 != 0) {
                                            do {
                                                uVar37 = 8 - (uVar27 & 7);
                                                uVar36 = uVar35;
                                                if (uVar37 <= uVar35) {
                                                    uVar36 = uVar37;
                                                }
                                                uVar24 = uVar36;
                                                uVar32 = puVar30[uVar27 >> 3] >> ((8 - (uVar27 & 7)) - uVar24 & 0x1f) &
                                                         (-1 << (uVar24 & 0x1f) ^ 0xffffffff) |
                                                         uVar32 << (uVar24 & 0x1f);
                                                uVar27 = uVar36 + uVar27;
                                                *puVar48 = uVar27;
                                                uVar35 = uVar35 - uVar36;
                                            } while (uVar35 != 0);
                                        }
                                        iVar40 = *(iVar13 + 0xd8);
                                        iVar14 = iVar40 + uVar29 * 0x130;
                                        *(iVar14 + 0x80) = uVar46;
                                        *(iVar14 + 0x88) = uVar32;
                                        uVar46 = uVar32 + uVar46;
                                        uVar29 = uVar29 + 1;
                                        uVar35 = (*(iVar13 + 0xe0) - iVar40 >> 4) * (0x286bca1b | 0x86bca1af00000000);
                                    } while (uVar29 <= uVar35 && uVar35 - uVar29 != 0);
                                }
                                iVar7 = geo::codec::decodeSectionEncoding(Bitstream*, GeoCodecsVertexPool**, bool, GeoCodecsTileKey const*, GeoCodecsVectorTileRawPoint*)
                                                  (ppuStack_b8, iVar13 + 0x348, 0, uStack_d8, 0);
                                if (iVar7 == 0) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                iVar40 = *param_3;
                                iVar14 = *(iVar40 + 0xb8);
                                iVar13 = *(iVar40 + 0xc0);
                                iVar15 = SUB168(SEXT816(iVar13 - iVar14) * SEXT816(0x83759f23 | 0x3759f22900000000), 8);
                                uVar27 = (iVar15 >> 6) - (iVar15 >> 0x3f);
                                if (iVar13 - iVar14 != 0) {
                                    uVar19 = 0;
                                    uVar46 = *(*(iVar40 + 0x348) + 0x28);
                                    do {
                                        iVar15 = iVar14 + uVar19 * 0x128;
                                        uVar29 = *(iVar15 + 0x88) + *(iVar15 + 0x80);
                                        if (uVar46 <= uVar29 && uVar29 != uVar46) {
                                            uVar47 = **reloc.__stderrp;
                                            goto code_r0x0001938f8174;
                                        }
                                        uVar19 = uVar19 + 1;
                                    } while (uVar19 <= uVar27 && uVar27 != uVar19);
                                }
                                iVar26 = *(iVar40 + 0xd8);
                                iVar33 = *(iVar40 + 0xe0);
                                iVar15 = iVar33 - iVar26;
                                if (iVar15 != 0) {
                                    uVar19 = 0;
                                    uVar46 = (iVar15 >> 4) * (0x286bca1b | 0x86bca1af00000000);
                                    uVar29 = *(*(iVar40 + 0x348) + 0x28);
                                    do {
                                        iVar15 = iVar26 + uVar19 * 0x130;
                                        uVar35 = *(iVar15 + 0x88) + *(iVar15 + 0x80);
                                        if (uVar29 <= uVar35 && uVar35 != uVar29) {
                                            uVar47 = **reloc.__stderrp;
                                            goto code_r0x0001938f8174;
                                        }
                                        uVar19 = uVar19 + 1;
                                    } while (uVar19 <= uVar46 && uVar46 - uVar19 != 0);
                                }
                                if (iVar13 != iVar14) {
                                    uVar19 = 0;
                                    puVar30 = *(iVar40 + 0x348);
                                    fVar49 = ~(-1 << (*puVar30 & 0x1f));
                                    if (uVar27 < 2) {
                                        uVar27 = 1;
                                    }
                                    auVar51 = NEON_fmov(0x3ff0000000000000, 8);
                                    do {
                                        iVar15 = iVar14 + uVar19 * 0x128;
                                        uVar46 = *(iVar15 + 0x80);
                                        uVar29 = *(iVar15 + 0x88) + uVar46;
                                        if (uVar46 < uVar29) {
                                            auVar52._0_8_ = *(iStack_b0 + uVar19 * 8);
                                            tmp_ldXn = iVar11 + uVar19 * 8;
                                            puVar28 = tmp_ldXn;
                                            auVar52._8_8_ = *puVar28;
                                            iVar15 = tmp_ldXn;
                                            tmp_ldXn = iVar15 + 8;
                                            auVar52 = NEON_scvtf(auVar52, 8);
                                            fVar50 = auVar52._0_8_ * (auVar51._0_8_ / fVar49);
                                            fVar53 = auVar52._8_8_ * (auVar51._8_8_ / fVar49);
                                            uVar32 = *(puVar30 + 0x28);
                                            uVar35 = uVar46;
                                            if (uVar46 < uVar32 || uVar46 == uVar32) {
                                                uVar35 = uVar32;
                                            }
                                            do {
                                                if (uVar46 == uVar35) {
code_r0x0001938fbc64:
                                                    uVar47 = **reloc.__stderrp;
                                                    goto code_r0x0001938f8174;
                                                }
                                                uVar32 = *(*(puVar30 + 0x20) + uVar46 * 0x10);
                                                if (*(puVar30 + 0x10) <= uVar32) goto code_r0x0001938fbc64;
                                                uVar36 = *(*(puVar30 + 0x20) + uVar46 * 0x10 + 8);
                                                if (uVar36 != 0) {
                                                    iVar15 = *(puVar30 + 8);
                                                    if ((uVar36 < 0xc) ||
                                                       (uVar38 = iVar15 + uVar32 * 8,  iVar39 = (uVar36 + -1) * 8, 
                                                       iVar25 = iVar15 + uVar32 * 8,  uVar37 = iVar25 + 4, 
                                                       (uVar38 + iVar39 < uVar38 || uVar37 + iVar39 < uVar37) ||
                                                       uVar36 + -1 >> 0x3d != 0)) {
                                                        uVar37 = 0;
                                                    }
                                                    else {
                                                        uVar37 = uVar36 & 0xfffffffffffffff8;
                                                        iVar25 = iVar25 + 0x20;
                                                        uVar38 = uVar37;
                                                        do {
                                                            tmp_ldXn = iVar25 + -0x20;
                                                            pfVar20 = tmp_ldXn;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar61 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar54 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar62 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar59 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar63 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar60 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar64 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            tmp_ldXn = iVar25;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar65 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar69 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar66 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar70 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar67 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar71 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar68 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar72 = *pfVar3;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            tmp_ldXn = iVar25 + -0x20;
                                                            pfVar3 = tmp_ldXn;
                                                            *pfVar3 = *pfVar20 + fVar50;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar61 + fVar53;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar54 + fVar50;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar62 + fVar53;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar59 + fVar50;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar63 + fVar53;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar60 + fVar50;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar64 + fVar53;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            tmp_ldXn = iVar25;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar65 + fVar50;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar69 + fVar53;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar66 + fVar50;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar70 + fVar53;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar67 + fVar50;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar71 + fVar53;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar68 + fVar50;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar72 + fVar53;
                                                            iVar39 = tmp_ldXn;
                                                            tmp_ldXn = iVar39 + 4;
                                                            iVar25 = iVar25 + 0x40;
                                                            uVar38 = uVar38 + -8;
                                                        } while (uVar38 != 0);
                                                        if (uVar36 == uVar37) goto code_r0x0001938fb9f8;
                                                    }
                                                    iVar25 = uVar36 - uVar37;
                                                    puVar28 = iVar15 + uVar37 * 8 + uVar32 * 8;
                                                    do {
                                                        *puVar28 = CONCAT44((*puVar28 >> 0x20) + fVar53, 
                                                                            *puVar28 + fVar50);
                                                        iVar25 = iVar25 + -1;
                                                        puVar28 = puVar28 + 1;
                                                    } while (iVar25 != 0);
                                                }
code_r0x0001938fb9f8:
                                                uVar46 = uVar46 + 1;
                                            } while (uVar46 != uVar29);
                                        }
                                        uVar19 = uVar19 + 1;
                                    } while (uVar19 != uVar27);
                                }
                                if (iVar33 != iVar26) {
                                    uVar27 = 0;
                                    iVar13 = *param_3;
                                    do {
                                        iVar26 = iVar26 + uVar27 * 0x130;
                                        iVar14 = *(iVar26 + 0x128) * 8;
                                        iVar15 = *(iStack_b0 + iVar14);
                                        iVar14 = *(iVar11 + iVar14);
                                        puVar30 = *(iVar13 + 0x348);
                                        fVar50 = ~(-1 << (*puVar30 & 0x1f));
                                        uVar19 = *(iVar26 + 0x80);
                                        uVar46 = *(iVar26 + 0x88) + uVar19;
                                        if ((uVar19 < uVar46) && (iVar13 = *(puVar30 + 0x20),  iVar13 != 0)) {
                                            fVar53 = iVar15 / ~(-1 << (**(iVar40 + 0x348) & 0x1f));
                                            fVar54 = iVar14 / fVar50;
                                            uVar29 = *(puVar30 + 0x28);
                                            do {
                                                if (((uVar19 <= uVar29 && uVar29 != uVar19) &&
                                                    (uVar35 = *(iVar13 + uVar19 * 0x10),  uVar35 < *(puVar30 + 0x10)))
                                                   && (uVar32 = *(iVar13 + uVar19 * 0x10 + 8),  uVar32 != 0)) {
                                                    iVar40 = *(puVar30 + 8);
                                                    if ((uVar32 < 0xc) ||
                                                       (uVar37 = iVar40 + uVar35 * 8,  iVar25 = (uVar32 + -1) * 8, 
                                                       iVar33 = iVar40 + uVar35 * 8,  uVar36 = iVar33 + 4, 
                                                       (uVar37 + iVar25 < uVar37 || uVar36 + iVar25 < uVar36) ||
                                                       uVar32 + -1 >> 0x3d != 0)) {
                                                        uVar36 = 0;
                                                    }
                                                    else {
                                                        uVar36 = uVar32 & 0xfffffffffffffff8;
                                                        iVar33 = iVar33 + 0x20;
                                                        uVar37 = uVar36;
                                                        do {
                                                            tmp_ldXn = iVar33 + -0x20;
                                                            pfVar20 = tmp_ldXn;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar62 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar59 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar63 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar60 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar64 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar61 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar65 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            tmp_ldXn = iVar33;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar66 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar70 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar67 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar71 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar68 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar72 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar69 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar3 = tmp_ldXn;
                                                            fVar73 = *pfVar3;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            tmp_ldXn = iVar33 + -0x20;
                                                            pfVar3 = tmp_ldXn;
                                                            *pfVar3 = *pfVar20 + fVar53;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar62 + fVar54;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar59 + fVar53;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar63 + fVar54;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar60 + fVar53;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar64 + fVar54;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar61 + fVar53;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar65 + fVar54;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            tmp_ldXn = iVar33;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar66 + fVar53;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar70 + fVar54;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar67 + fVar53;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar71 + fVar54;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar68 + fVar53;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar72 + fVar54;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar69 + fVar53;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            pfVar20 = tmp_ldXn;
                                                            *pfVar20 = fVar73 + fVar54;
                                                            iVar25 = tmp_ldXn;
                                                            tmp_ldXn = iVar25 + 4;
                                                            iVar33 = iVar33 + 0x40;
                                                            uVar37 = uVar37 + -8;
                                                        } while (uVar37 != 0);
                                                        if (uVar32 == uVar36) goto code_r0x0001938fbb1c;
                                                    }
                                                    pfVar20 = iVar40 + uVar36 * 8 + uVar35 * 8 + 4;
                                                    iVar40 = uVar32 - uVar36;
                                                    do {
                                                        pfVar20[-1] = pfVar20[-1] + fVar53;
                                                        *pfVar20 = *pfVar20 + fVar54;
                                                        pfVar20 = pfVar20 + 2;
                                                        iVar40 = iVar40 + -1;
                                                    } while (iVar40 != 0);
                                                }
code_r0x0001938fbb1c:
                                                uVar19 = uVar19 + 1;
                                            } while (uVar19 != uVar46);
                                        }
                                        uVar24 = *(iVar12 + uVar27 * 4);
                                        *(iVar26 + 0x114) = (iVar15 + *(iStack_f0 + uVar27 * 4)) / fVar50;
                                        *(iVar26 + 0x118) = (iVar14 + uVar24) / fVar50;
                                        uVar27 = uVar27 + 1;
                                        iVar40 = *param_3;
                                        iVar26 = *(iVar40 + 0xd8);
                                        iVar13 = iVar40;
                                    } while (uVar27 < (*(iVar40 + 0xe0) - iVar26 >> 4) *
                                                      (0x286bca1b | 0x86bca1af00000000));
                                    iVar14 = *(iVar40 + 0xb8);
                                    iVar13 = *(iVar40 + 0xc0);
                                }
                                if (iVar13 != iVar14) {
                                    uVar27 = 0;
                                    iVar40 = 0x118;
                                    do {
                                        uStack_88 = (uStack_88 >> 8) << 8;
                                        uVar19 = BitstreamUnpackFlag(Bitstream*, bool*)(ppuStack_b8, *0x8 + -0x88);
                                        if ((uVar19 & 1) == 0) {
                                            uVar47 = **reloc.__stderrp;
                                            goto code_r0x0001938f8174;
                                        }
                                        if (uStack_88 != '\0') {
                                            uStack_80 = (uStack_80 >> 0x20) << 0x20;
                                            iVar7 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                              (ppuStack_b8, *0x8 + -0x80, uStack_120);
                                            if (iVar7 == 0) goto code_r0x0001938f8168;
                                            uVar19 = uStack_80;
                                            if (uStack_c8 < uVar19 || uStack_c8 == uVar19) goto code_r0x0001938f8168;
                                            iVar13 = *param_3;
                                            iVar14 = *(iVar13 + 0xb8);
                                            *(iVar14 + iVar40) = iStack_d0 + uVar19;
                                        }
                                        else {
                                            iVar13 = *param_3;
                                            iVar14 = *(iVar13 + 0xb8);
                                        }
                                        uVar27 = uVar27 + 1;
                                        iVar40 = iVar40 + 0x128;
                                    } while (uVar27 < (*(iVar13 + 0xc0) - iVar14 >> 3) *
                                                      (0x914c1bad | 0x14c1bacf00000000));
                                }
                                iStack_8c = 0;
                                iVar7 = BitstreamUnpackVar32(Bitstream*, unsigned int*)(ppuStack_b8, *0x8 + -0x8c);
                                if (iVar7 == 0) {
                                    uVar47 = **reloc.__stderrp;
                                    goto code_r0x0001938f8174;
                                }
                                iVar7 = iStack_8c;
                                if (iVar7 != 0) {
                                    do {
                                        uStack_80 = (uStack_80 >> 0x20) << 0x20;
                                        uStack_88 = (uStack_88 >> 0x20) << 0x20;
                                        iVar9 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                          (ppuStack_b8, *0x8 + -0x80, uStack_118);
                                        if (iVar9 == 0) goto code_r0x0001938f8168;
                                        uVar27 = uStack_80;
                                        if ((*(*param_3 + 0xf8) < uVar27 || *(*param_3 + 0xf8) == uVar27) ||
                                           (iVar9 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                              (ppuStack_b8, *0x8 + -0x88, uStack_110),  iVar9 == 0))
                                        goto code_r0x0001938f8168;
                                        uVar19 = uStack_88;
                                        iVar40 = *(*param_3 + 0x60);
                                        uVar46 = (*(*param_3 + 0x68) - iVar40 >> 4) * (0x286bca1b | 0x86bca1af00000000);
                                        if (uVar46 < uVar19 || uVar46 - uVar19 == 0) goto code_r0x0001938f8168;
                                        iVar40 = iVar40 + uVar19 * 0x130;
                                        *(iVar40 + 0x10b) = 3;
                                        *(iVar40 + 0x128) = uVar27;
                                        iVar7 = iVar7 + -1;
                                    } while (iVar7 != 0);
                                }
                                uVar24 = *(pcVar10 + 0x40);
                                if (0x3b < *(pcVar10 + 0x40)) {
                                    iVar13 = *param_3;
                                    iVar14 = *(iVar13 + 0xc0);
                                    iVar40 = iVar14;
                                    if (iVar14 != *(iVar13 + 0xb8)) {
                                        uVar27 = 0;
                                        iVar40 = 0x120;
                                        do {
                                            uStack_88 = (uStack_88 >> 8) << 8;
                                            uVar19 = BitstreamUnpackFlag(Bitstream*, bool*)(ppuStack_b8, *0x8 + -0x88);
                                            if ((uVar19 & 1) == 0) {
                                                uVar47 = **reloc.__stderrp;
                                                goto code_r0x0001938f8174;
                                            }
                                            if (uStack_88 != '\0') {
                                                uStack_80 = (uStack_80 >> 0x20) << 0x20;
                                                iVar7 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                  (ppuStack_b8, *0x8 + -0x80, uStack_120);
                                                if (iVar7 == 0) goto code_r0x0001938f8168;
                                                uVar19 = uStack_80;
                                                if (uStack_c8 < uVar19 || uStack_c8 == uVar19)
                                                goto code_r0x0001938f8168;
                                                iVar13 = *param_3;
                                                iVar14 = *(iVar13 + 0xb8);
                                                *(iVar14 + iVar40) = iStack_d0 + uVar19;
                                            }
                                            else {
                                                iVar13 = *param_3;
                                                iVar14 = *(iVar13 + 0xb8);
                                            }
                                            uVar27 = uVar27 + 1;
                                            iVar40 = iVar40 + 0x128;
                                        } while (uVar27 < (*(iVar13 + 0xc0) - iVar14 >> 3) *
                                                          (0x914c1bad | 0x14c1bacf00000000));
                                        uVar24 = *(pcVar10 + 0x40);
                                        iVar40 = *(iVar13 + 0xc0);
                                    }
                                    if (0x3c < uVar24) {
                                        if (iVar40 != iVar14) {
                                            uVar27 = 0;
                                            iVar40 = 0x4d;
                                            do {
                                                uStack_80 = (uStack_80 >> 8) << 8;
                                                iVar7 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                  (ppuStack_b8, *0x8 + -0x80);
                                                if (iVar7 == 0) goto code_r0x0001938f8168;
                                                if (uStack_80 != '\0') {
                                                    puVar1 = *(*param_3 + 0xb8) + iVar40;
                                                    *puVar1 = 1;
                                                    uVar19 = 
                                                            BitstreamUnpack64(Bitstream*, unsigned long long*, unsigned long)
                                                                      (ppuStack_b8, puVar1 + 3, 0x40);
                                                    if ((uVar19 & 1) == 0) goto code_r0x0001938f8168;
                                                }
                                                uVar27 = uVar27 + 1;
                                                iVar13 = *param_3;
                                                iVar40 = iVar40 + 0x128;
                                            } while (uVar27 < (*(iVar13 + 0xc0) - *(iVar13 + 0xb8) >> 3) *
                                                              (0x914c1bad | 0x14c1bacf00000000));
                                        }
                                        if (*(iVar13 + 0xe0) != *(iVar13 + 0xd8)) {
                                            uVar27 = 0;
                                            iVar40 = 0x4d;
                                            do {
                                                uStack_80 = (uStack_80 >> 8) << 8;
                                                iVar7 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                  (ppuStack_b8, *0x8 + -0x80);
                                                if (iVar7 == 0) goto code_r0x0001938f8168;
                                                if (uStack_80 != '\0') {
                                                    puVar1 = *(*param_3 + 0xd8) + iVar40;
                                                    *puVar1 = 1;
                                                    iVar7 = BitstreamUnpack64(Bitstream*, unsigned long long*, unsigned long)
                                                                      (ppuStack_b8, puVar1 + 3, 0x40);
                                                    if (iVar7 == 0) goto code_r0x0001938f8168;
                                                }
                                                uVar27 = uVar27 + 1;
                                                iVar40 = iVar40 + 0x130;
                                            } while (uVar27 < (*(*param_3 + 0xe0) - *(*param_3 + 0xd8) >> 4) *
                                                              (0x286bca1b | 0x86bca1af00000000));
                                        }
                                        if (0x42 < *(pcVar10 + 0x40)) {
                                            uStack_80 = (uStack_80 >> 0x20) << 0x20;
                                            iVar7 = BitstreamUnpackVar32(Bitstream*, unsigned int*)
                                                              (ppuStack_b8, *0x8 + -0x80);
                                            if (iVar7 == 0) {
                                                uVar47 = **reloc.__stderrp;
                                                goto code_r0x0001938f8174;
                                            }
                                            iVar7 = uStack_80;
                                            if (iVar7 != 0) {
                                                do {
                                                    uStack_88 = (uStack_88 >> 0x20) << 0x20;
                                                    iVar9 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                      (ppuStack_b8, *0x8 + -0x88, uStack_100);
                                                    if (iVar9 == 0) goto code_r0x0001938f8168;
                                                    uVar24 = uStack_88;
                                                    iVar40 = *(*param_3 + 0x1f8);
                                                    if (*(*param_3 + 0x200) - iVar40 >> 8 <= uVar24)
                                                    goto code_r0x0001938f8168;
                                                    uStack_90 = 0;
                                                    iVar9 = BitstreamUnpackSignedVar32(Bitstream*, int*)
                                                                      (ppuStack_b8, *0x8 + -0x90);
                                                    if ((iVar9 == 0) || (0xfffe <= uStack_90 + 0x7fff))
                                                    goto code_r0x0001938f8168;
                                                    iVar40 = iVar40 + uVar24 * 0x100;
                                                    *(iVar40 + 0xc2) = uStack_90;
                                                    *(iVar40 + 0xf8) = 1;
                                                    iVar7 = iVar7 + -1;
                                                } while (iVar7 != 0);
                                            }
                                            if (0x44 < *(pcVar10 + 0x40)) {
                                                uStack_90 = (uStack_90 >> 8) << 8;
                                                uVar27 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                   (ppuStack_b8, *0x8 + -0x90);
                                                if ((uVar27 & 1) == 0) {
                                                    uVar47 = **reloc.__stderrp;
                                                    goto code_r0x0001938f8174;
                                                }
                                                if (uStack_90 != '\0') {
                                                    uStack_80 = (uStack_80 >> 0x20) << 0x20;
                                                    iVar7 = BitstreamUnpackVar32(Bitstream*, unsigned int*)
                                                                      (ppuStack_b8, *0x8 + -0x80);
                                                    if (iVar7 == 0) {
                                                        uVar47 = **reloc.__stderrp;
                                                        goto code_r0x0001938f8174;
                                                    }
                                                    iVar40 = *param_3;
                                                    if (*(iVar40 + 0xc0) != *(iVar40 + 0xb8)) {
                                                        uVar27 = 0;
                                                        fVar50 = NEON_ucvtf(uStack_80);
                                                        do {
                                                            cStack_91 = '\0';
                                                            uVar19 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (ppuStack_b8, *0x8 + -0x91);
                                                            if ((uVar19 & 1) == 0) {
                                                                uVar47 = **reloc.__stderrp;
                                                                goto code_r0x0001938f8174;
                                                            }
                                                            if (cStack_91 != '\0') {
                                                                iVar40 = *(*param_3 + 0xb8) + uVar27 * 0x128;
                                                                *(iVar40 + 0x110) = 1;
                                                                uStack_88 = (uStack_88 >> 0x20) << 0x20;
                                                                iVar7 = BitstreamUnpackSignedVar32(Bitstream*, int*)
                                                                                  (ppuStack_b8, *0x8 + -0x88);
                                                                if (iVar7 == 0) {
                                                                    uVar47 = **reloc.__stderrp;
                                                                    goto code_r0x0001938f8174;
                                                                }
                                                                *(iVar40 + 0x114) = uStack_88 * (1.0 / fVar50);
                                                            }
                                                            uVar27 = uVar27 + 1;
                                                            iVar40 = *param_3;
                                                            uVar19 = (*(iVar40 + 0xc0) - *(iVar40 + 0xb8) >> 3) *
                                                                     (0x914c1bad | 0x14c1bacf00000000);
                                                        } while (uVar27 <= uVar19 && uVar19 - uVar27 != 0);
                                                    }
                                                    if (*(iVar40 + 0xe0) != *(iVar40 + 0xd8)) {
                                                        uVar27 = 0;
                                                        fVar50 = NEON_ucvtf(uStack_80);
                                                        iVar13 = 0x120;
                                                        do {
                                                            cStack_91 = '\0';
                                                            uVar19 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (ppuStack_b8, *0x8 + -0x91);
                                                            if ((uVar19 & 1) == 0) {
                                                                uVar47 = **reloc.__stderrp;
                                                                goto code_r0x0001938f8174;
                                                            }
                                                            if (cStack_91 != '\0') {
                                                                iVar40 = *(*param_3 + 0xd8);
                                                                *(iVar40 + iVar13 + -4) = 1;
                                                                uStack_88 = (uStack_88 >> 0x20) << 0x20;
                                                                iVar7 = BitstreamUnpackSignedVar32(Bitstream*, int*)
                                                                                  (ppuStack_b8, *0x8 + -0x88);
                                                                if (iVar7 == 0) {
                                                                    uVar47 = **reloc.__stderrp;
                                                                    goto code_r0x0001938f8174;
                                                                }
                                                                *(iVar40 + iVar13) = uStack_88 * (1.0 / fVar50);
                                                            }
                                                            uVar27 = uVar27 + 1;
                                                            iVar40 = *param_3;
                                                            iVar13 = iVar13 + 0x130;
                                                        } while (uVar27 < (*(iVar40 + 0xe0) - *(iVar40 + 0xd8) >> 4) *
                                                                          (0x286bca1b | 0x86bca1af00000000));
                                                    }
                                                    if (*(iVar40 + 0xf8) != 0) {
                                                        uVar27 = 0;
                                                        fVar50 = NEON_ucvtf(uStack_80);
                                                        do {
                                                            cStack_91 = '\0';
                                                            uVar19 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (ppuStack_b8, *0x8 + -0x91);
                                                            if ((uVar19 & 1) == 0) {
                                                                uVar47 = **reloc.__stderrp;
                                                                goto code_r0x0001938f8174;
                                                            }
                                                            if (cStack_91 != '\0') {
                                                                iVar40 = *(*param_3 + 0x100) + uVar27 * 0x40;
                                                                *(iVar40 + 0x28) = 1;
                                                                uStack_88 = (uStack_88 >> 0x20) << 0x20;
                                                                iVar7 = BitstreamUnpackSignedVar32(Bitstream*, int*)
                                                                                  (ppuStack_b8, *0x8 + -0x88);
                                                                if (iVar7 == 0) {
                                                                    uVar47 = **reloc.__stderrp;
                                                                    goto code_r0x0001938f8174;
                                                                }
                                                                *(iVar40 + 0x2c) = uStack_88 * (1.0 / fVar50);
                                                            }
                                                            uVar27 = uVar27 + 1;
                                                        } while (uVar27 <= *(*param_3 + 0xf8) &&
                                                                 *(*param_3 + 0xf8) != uVar27);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                uVar47 = 1;
                            }
                        }
                    }
code_r0x0001938f6fc4:
                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                    uVar24 = tmp_ldWn;
                    if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
                        ppcVar16 = operator new(unsigned long)(0x108);
                        ppcVar16[1] = 0x61 + 0x193b8a000;
                        ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                        ppcVar16[3] = 0x61 + 0x193b8a000;
                        pcVar18 = *0x193af97f0;
                        ppcVar16[5] = *0x193af97f8;
                        ppcVar16[4] = pcVar18;
                        *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                    0xfa8 + 0x10;
                        ppcVar16[8] = NULL;
                        ppcVar16[7] = NULL;
                        ppcVar16[10] = NULL;
                        ppcVar16[9] = NULL;
                        ppcVar16[0xc] = NULL;
                        ppcVar16[0xb] = NULL;
                        ppcVar16[0xe] = NULL;
                        ppcVar16[0xd] = NULL;
                        ppcVar16[0x10] = NULL;
                        ppcVar16[0xf] = NULL;
                        ppcVar16[0x12] = NULL;
                        ppcVar16[0x11] = NULL;
                        ppcVar16[0x14] = NULL;
                        ppcVar16[0x13] = NULL;
                        ppcVar16[0x16] = NULL;
                        ppcVar16[0x15] = NULL;
                        ppcVar16[0x18] = NULL;
                        ppcVar16[0x17] = NULL;
                        ppcVar16[0x1a] = NULL;
                        ppcVar16[0x19] = NULL;
                        ppcVar16[0x1c] = NULL;
                        ppcVar16[0x1b] = NULL;
                        ppcVar16[0x1e] = NULL;
                        ppcVar16[0x1d] = NULL;
                        ppcVar16[0x1f] = NULL;
                        uVar17 = pthread_rwlock_init(ppcVar16 + 7, 0);
                        if (uVar17 != 0) {
                            geo::read_write_lock::logFailure(int, char const*)(uVar17, 0x85 + 0x193b8a000);
                        }
                        pcVar18 = malloc_create_zone(0, 0);
                        ppcVar16[6] = pcVar18;
                        malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                        pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                        ppcVar16[0x20] = pcVar18;
                        *geo::codec::Allocator::instance()::alloc = ppcVar16;
                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                    }
                    (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                              (*geo::codec::Allocator::instance()::alloc, iStack_b0, 0);
                }
                if (iVar11 != 0) {
                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                    uVar24 = tmp_ldWn;
                    if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
                        ppcVar16 = operator new(unsigned long)(0x108);
                        ppcVar16[1] = 0x61 + 0x193b8a000;
                        ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                        ppcVar16[3] = 0x61 + 0x193b8a000;
                        pcVar18 = *0x193af97f0;
                        ppcVar16[5] = *0x193af97f8;
                        ppcVar16[4] = pcVar18;
                        *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                    0xfa8 + 0x10;
                        ppcVar16[8] = NULL;
                        ppcVar16[7] = NULL;
                        ppcVar16[10] = NULL;
                        ppcVar16[9] = NULL;
                        ppcVar16[0xc] = NULL;
                        ppcVar16[0xb] = NULL;
                        ppcVar16[0xe] = NULL;
                        ppcVar16[0xd] = NULL;
                        ppcVar16[0x10] = NULL;
                        ppcVar16[0xf] = NULL;
                        ppcVar16[0x12] = NULL;
                        ppcVar16[0x11] = NULL;
                        ppcVar16[0x14] = NULL;
                        ppcVar16[0x13] = NULL;
                        ppcVar16[0x16] = NULL;
                        ppcVar16[0x15] = NULL;
                        ppcVar16[0x18] = NULL;
                        ppcVar16[0x17] = NULL;
                        ppcVar16[0x1a] = NULL;
                        ppcVar16[0x19] = NULL;
                        ppcVar16[0x1c] = NULL;
                        ppcVar16[0x1b] = NULL;
                        ppcVar16[0x1e] = NULL;
                        ppcVar16[0x1d] = NULL;
                        ppcVar16[0x1f] = NULL;
                        uVar17 = pthread_rwlock_init(ppcVar16 + 7, 0);
                        if (uVar17 != 0) {
                            geo::read_write_lock::logFailure(int, char const*)(uVar17, 0x85 + 0x193b8a000);
                        }
                        pcVar18 = malloc_create_zone(0, 0);
                        ppcVar16[6] = pcVar18;
                        malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                        pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                        ppcVar16[0x20] = pcVar18;
                        *geo::codec::Allocator::instance()::alloc = ppcVar16;
                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                    }
                    (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                              (*geo::codec::Allocator::instance()::alloc, iVar11, 0);
                }
                if (iStack_f0 != 0) {
                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                    uVar24 = tmp_ldWn;
                    if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
                        ppcVar16 = operator new(unsigned long)(0x108);
                        ppcVar16[1] = 0x61 + 0x193b8a000;
                        ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                        ppcVar16[3] = 0x61 + 0x193b8a000;
                        pcVar18 = *0x193af97f0;
                        ppcVar16[5] = *0x193af97f8;
                        ppcVar16[4] = pcVar18;
                        *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                    0xfa8 + 0x10;
                        ppcVar16[8] = NULL;
                        ppcVar16[7] = NULL;
                        ppcVar16[10] = NULL;
                        ppcVar16[9] = NULL;
                        ppcVar16[0xc] = NULL;
                        ppcVar16[0xb] = NULL;
                        ppcVar16[0xe] = NULL;
                        ppcVar16[0xd] = NULL;
                        ppcVar16[0x10] = NULL;
                        ppcVar16[0xf] = NULL;
                        ppcVar16[0x12] = NULL;
                        ppcVar16[0x11] = NULL;
                        ppcVar16[0x14] = NULL;
                        ppcVar16[0x13] = NULL;
                        ppcVar16[0x16] = NULL;
                        ppcVar16[0x15] = NULL;
                        ppcVar16[0x18] = NULL;
                        ppcVar16[0x17] = NULL;
                        ppcVar16[0x1a] = NULL;
                        ppcVar16[0x19] = NULL;
                        ppcVar16[0x1c] = NULL;
                        ppcVar16[0x1b] = NULL;
                        ppcVar16[0x1e] = NULL;
                        ppcVar16[0x1d] = NULL;
                        ppcVar16[0x1f] = NULL;
                        uVar17 = pthread_rwlock_init(ppcVar16 + 7, 0);
                        if (uVar17 != 0) {
                            geo::read_write_lock::logFailure(int, char const*)(uVar17, 0x85 + 0x193b8a000);
                        }
                        pcVar18 = malloc_create_zone(0, 0);
                        ppcVar16[6] = pcVar18;
                        malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                        pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                        ppcVar16[0x20] = pcVar18;
                        *geo::codec::Allocator::instance()::alloc = ppcVar16;
                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                    }
                    (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                              (*geo::codec::Allocator::instance()::alloc, iStack_f0, 0);
                }
                if (iVar12 != 0) {
                    tmp_ldWn = *(0x290 + 0x1d6cc0000);
                    uVar24 = tmp_ldWn;
                    if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
                        ppcVar16 = operator new(unsigned long)(0x108);
                        ppcVar16[1] = 0x61 + 0x193b8a000;
                        ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
                        ppcVar16[3] = 0x61 + 0x193b8a000;
                        pcVar18 = *0x193af97f0;
                        ppcVar16[5] = *0x193af97f8;
                        ppcVar16[4] = pcVar18;
                        *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l +
                                    0xfa8 + 0x10;
                        ppcVar16[8] = NULL;
                        ppcVar16[7] = NULL;
                        ppcVar16[10] = NULL;
                        ppcVar16[9] = NULL;
                        ppcVar16[0xc] = NULL;
                        ppcVar16[0xb] = NULL;
                        ppcVar16[0xe] = NULL;
                        ppcVar16[0xd] = NULL;
                        ppcVar16[0x10] = NULL;
                        ppcVar16[0xf] = NULL;
                        ppcVar16[0x12] = NULL;
                        ppcVar16[0x11] = NULL;
                        ppcVar16[0x14] = NULL;
                        ppcVar16[0x13] = NULL;
                        ppcVar16[0x16] = NULL;
                        ppcVar16[0x15] = NULL;
                        ppcVar16[0x18] = NULL;
                        ppcVar16[0x17] = NULL;
                        ppcVar16[0x1a] = NULL;
                        ppcVar16[0x19] = NULL;
                        ppcVar16[0x1c] = NULL;
                        ppcVar16[0x1b] = NULL;
                        ppcVar16[0x1e] = NULL;
                        ppcVar16[0x1d] = NULL;
                        ppcVar16[0x1f] = NULL;
                        uVar17 = pthread_rwlock_init(ppcVar16 + 7, 0);
                        if (uVar17 != 0) {
                            geo::read_write_lock::logFailure(int, char const*)(uVar17, 0x85 + 0x193b8a000);
                        }
                        pcVar18 = malloc_create_zone(0, 0);
                        ppcVar16[6] = pcVar18;
                        malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
                        pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
                        ppcVar16[0x20] = pcVar18;
                        *geo::codec::Allocator::instance()::alloc = ppcVar16;
                        __cxa_guard_release(0x290 + 0x1d6cc0000);
                    }
                    (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                              (*geo::codec::Allocator::instance()::alloc, iVar12, 0);
                }
                goto code_r0x0001938f6544;
            }
        }
    }
    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
    uVar47 = 0;
code_r0x0001938f6544:
    if (*pcVar10 != '\0') {
        tmp_ldWn = *(0x290 + 0x1d6cc0000);
        uVar24 = tmp_ldWn;
        if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
            ppcVar16 = operator new(unsigned long)(0x108);
            ppcVar16[1] = 0x61 + 0x193b8a000;
            ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
            ppcVar16[3] = 0x61 + 0x193b8a000;
            pcVar18 = *0x193af97f0;
            ppcVar16[5] = *0x193af97f8;
            ppcVar16[4] = pcVar18;
            *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l + 0xfa8 + 0x10;
            ppcVar16[8] = NULL;
            ppcVar16[7] = NULL;
            ppcVar16[10] = NULL;
            ppcVar16[9] = NULL;
            ppcVar16[0xc] = NULL;
            ppcVar16[0xb] = NULL;
            ppcVar16[0xe] = NULL;
            ppcVar16[0xd] = NULL;
            ppcVar16[0x10] = NULL;
            ppcVar16[0xf] = NULL;
            ppcVar16[0x12] = NULL;
            ppcVar16[0x11] = NULL;
            ppcVar16[0x14] = NULL;
            ppcVar16[0x13] = NULL;
            ppcVar16[0x16] = NULL;
            ppcVar16[0x15] = NULL;
            ppcVar16[0x18] = NULL;
            ppcVar16[0x17] = NULL;
            ppcVar16[0x1a] = NULL;
            ppcVar16[0x19] = NULL;
            ppcVar16[0x1c] = NULL;
            ppcVar16[0x1b] = NULL;
            ppcVar16[0x1e] = NULL;
            ppcVar16[0x1d] = NULL;
            ppcVar16[0x1f] = NULL;
            uVar17 = pthread_rwlock_init(ppcVar16 + 7, 0);
            if (uVar17 != 0) {
                geo::read_write_lock::logFailure(int, char const*)(uVar17, 0x85 + 0x193b8a000);
            }
            pcVar18 = malloc_create_zone(0, 0);
            ppcVar16[6] = pcVar18;
            malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
            pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
            ppcVar16[0x20] = pcVar18;
            *geo::codec::Allocator::instance()::alloc = ppcVar16;
            __cxa_guard_release(0x290 + 0x1d6cc0000);
        }
        (**(**geo::codec::Allocator::instance()::alloc + 0x28))
                  (*geo::codec::Allocator::instance()::alloc, *(pcVar10 + 0x28), 0);
    }
    tmp_ldWn = *(0x290 + 0x1d6cc0000);
    uVar24 = tmp_ldWn;
    if (((uVar24 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x290 + 0x1d6cc0000),  iVar7 != 0)) {
        ppcVar16 = operator new(unsigned long)(0x108);
        ppcVar16[1] = 0x61 + 0x193b8a000;
        ppcVar16[2] = 0xc36000000008 | 0x99af000000000000;
        ppcVar16[3] = 0x61 + 0x193b8a000;
        pcVar18 = *0x193af97f0;
        ppcVar16[5] = *0x193af97f8;
        ppcVar16[4] = pcVar18;
        *ppcVar16 = ___block_descriptor_48_e8_32s40s_e36_v32?0"GEOPDMapsIdentifier"8Q16^B24l + 0xfa8 + 0x10;
        ppcVar16[8] = NULL;
        ppcVar16[7] = NULL;
        ppcVar16[10] = NULL;
        ppcVar16[9] = NULL;
        ppcVar16[0xc] = NULL;
        ppcVar16[0xb] = NULL;
        ppcVar16[0xe] = NULL;
        ppcVar16[0xd] = NULL;
        ppcVar16[0x10] = NULL;
        ppcVar16[0xf] = NULL;
        ppcVar16[0x12] = NULL;
        ppcVar16[0x11] = NULL;
        ppcVar16[0x14] = NULL;
        ppcVar16[0x13] = NULL;
        ppcVar16[0x16] = NULL;
        ppcVar16[0x15] = NULL;
        ppcVar16[0x18] = NULL;
        ppcVar16[0x17] = NULL;
        ppcVar16[0x1a] = NULL;
        ppcVar16[0x19] = NULL;
        ppcVar16[0x1c] = NULL;
        ppcVar16[0x1b] = NULL;
        ppcVar16[0x1e] = NULL;
        ppcVar16[0x1d] = NULL;
        ppcVar16[0x1f] = NULL;
        uVar17 = pthread_rwlock_init(ppcVar16 + 7, 0);
        if (uVar17 != 0) {
            geo::read_write_lock::logFailure(int, char const*)(uVar17, 0x85 + 0x193b8a000);
        }
        pcVar18 = malloc_create_zone(0, 0);
        ppcVar16[6] = pcVar18;
        malloc_set_zone_name(pcVar18, 0x61 + 0x193b8a000);
        pcVar18 = os_log_create(0x6a + 0x193b8a000, 0x7e + 0x193b8a000);
        ppcVar16[0x20] = pcVar18;
        *geo::codec::Allocator::instance()::alloc = ppcVar16;
        __cxa_guard_release(0x290 + 0x1d6cc0000);
    }
    (**(**geo::codec::Allocator::instance()::alloc + 0x28))(*geo::codec::Allocator::instance()::alloc, pcVar10, 0);
    iVar11 = std::__1::chrono::steady_clock::now()();
    uStack_88 = 0x346 + 0x193b8a000;
    uStack_80 = *0x8 + -0x88;
    iVar12 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iStack_a0 + 0x778, *0x8 + -0x88, 0x74c + 0x193af9000, *0x8 + -0x80, *0x8 + -0x90);
    iVar11 = SUB168(SEXT816(iVar11 - iStack_e8) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar12 + 0x20) = ((iVar11 >> 7) - (iVar11 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
    if (piVar43 != NULL) {
        LOAcquire();
        tmp_ldXn = piVar43[1];
        iVar11 = tmp_ldXn;
        tmp_stXn = iVar11 + -1;
        iVar11 = tmp_stXn;
        piVar43[1] = iVar11;
        iVar11 = tmp_ldXn;
        LORelease();
        if (iVar11 == 0) {
            (**(*piVar43 + 0x10))(piVar43);
            std::__1::__shared_weak_count::__release_weak()(piVar43);
            return uVar47;
        }
        return uVar47;
    }
    return uVar47;
code_r0x0001938f8168:
    uVar47 = **reloc.__stderrp;
    goto code_r0x0001938f8174;
}
