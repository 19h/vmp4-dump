
ulong geo::codec::_readLineAttributesOld(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, uint64_t *param_2, int64_t *param_3)

{
    char cVar1;
    char cVar2;
    uint8_t uVar3;
    bool bVar4;
    int32_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    char *pcVar12;
    int64_t *piVar13;
    ulong uVar14;
    int64_t iVar15;
    uint32_t uVar16;
    float8 fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float8 fVar22;
    uint64_t uStack_1c0;
    uint8_t auStack_1a4 [4];
    int64_t *apiStack_1a0 [4];
    int64_t *apiStack_180 [4];
    int64_t *apiStack_160 [4];
    int64_t *apiStack_140 [4];
    int64_t *apiStack_120 [4];
    uint32_t uStack_fc;
    ulong uStack_f8;
    uint uStack_f0;
    ulong uStack_ec;
    ulong uStack_e4;
    uint uStack_dc;
    uint32_t uStack_d8;
    uint32_t uStack_d4;
    int64_t *piStack_d0;
    int64_t iStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    int64_t **ppiStack_b0;
    ulong uStack_a8;
    uint32_t uStack_a0;
    ushort uStack_9c;
    int64_t iStack_9a;
    ushort uStack_92;
    int64_t iStack_90;
    int64_t iStack_88;
    
    iStack_88 = **reloc.__stack_chk_guard;
    iStack_c8 = *param_3;
    uVar10 = param_1[1];
    if (uVar10 != 0) {
        uVar8 = 0;
        do {
            if (*(*param_1 + uVar8 * 0x10) == 0x94) {
                pcVar12 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar8, 0x94, iStack_c8 + 0x778);
                piStack_d0 = 0x479 + 0x193b8a000;
                iStack_c8 = *param_3;
                piStack_c0 = param_3[1];
                if (piStack_c0 != NULL) goto code_r0x00019391d42c;
                goto code_r0x00019391d438;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 <= uVar10 && uVar10 != uVar8);
    }
    pcVar12 = NULL;
    piStack_d0 = 0x479 + 0x193b8a000;
    piStack_c0 = param_3[1];
    if (piStack_c0 != NULL) {
code_r0x00019391d42c:
        tmp_ldXn = piStack_c0[1];
        iVar6 = tmp_ldXn;
        tmp_stXn = iVar6 + 1;
        iVar6 = tmp_stXn;
        piStack_c0[1] = iVar6;
        uVar14 = tmp_ldXn;
    }
code_r0x00019391d438:
    iVar6 = std::__1::chrono::steady_clock::now()();
    iStack_b8 = iVar6;
    if (pcVar12 == NULL) {
        uVar14 = 1;
code_r0x00019391d594:
        piVar13 = piStack_d0;
        iVar15 = iStack_c8;
        iVar6 = iStack_b8;
        iVar7 = std::__1::chrono::steady_clock::now()();
        apiStack_120[0] = piVar13;
        if (piVar13 == NULL) goto code_r0x00019391d610;
    }
    else {
        if (*(*param_3 + 0xb70) != *(*param_3 + 0xb68)) {
            uVar14 = 1;
            if (param_1 == NULL) goto code_r0x00019391d594;
code_r0x00019391d52c:
            if (*pcVar12 != '\0') {
                piVar13 = geo::codec::Allocator::instance()();
                (**(*piVar13 + 0x28))(piVar13, *(pcVar12 + 0x28), 0);
            }
            piVar13 = geo::codec::Allocator::instance()();
            (**(*piVar13 + 0x28))(piVar13, pcVar12, 0);
            goto code_r0x00019391d594;
        }
        uStack_d4 = 0;
        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar12, *0x8 + -0xd4);
        if ((uVar10 & 1) == 0) {
            uVar14 = **reloc.__stderrp;
code_r0x00019391d50c:
            fprintf(uVar14, 0x8ff + 0x193b8a000);
            uVar14 = 0;
            if (param_1 == NULL) goto code_r0x00019391d594;
            goto code_r0x00019391d52c;
        }
        uStack_d8 = 0;
        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar12, *0x8 + -0xd8);
        if ((uVar10 & 1) == 0) {
            uVar14 = **reloc.__stderrp;
            goto code_r0x00019391d50c;
        }
        if (uStack_d4 < uStack_d8) {
            uVar14 = **reloc.__stderrp;
            goto code_r0x00019391d50c;
        }
        if (uStack_d8 == 2) {
            uStack_dc = 0;
            uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar12, *0x8 + -0xdc);
            if ((uVar10 & 1) == 0) {
                uVar14 = **reloc.__stderrp;
            }
            else {
                uStack_e4 = 0;
                uStack_ec = 0;
                uStack_f0 = 0;
                uStack_f8 = 0;
                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar12, *0x8 + -0xe0);
                if ((uVar10 & 1) == 0) {
                    uVar14 = **reloc.__stderrp;
                }
                else {
                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar12, *0x8 + -0xe4);
                    if ((uVar10 & 1) == 0) {
                        uVar14 = **reloc.__stderrp;
                    }
                    else {
                        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar12, *0x8 + -0xe8);
                        if ((uVar10 & 1) == 0) {
                            uVar14 = **reloc.__stderrp;
                        }
                        else {
                            uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                               (pcVar12, *0x8 + -0xec);
                            if ((uVar10 & 1) == 0) {
                                uVar14 = **reloc.__stderrp;
                            }
                            else {
                                uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                   (pcVar12, &uStack_f0);
                                if ((uVar10 & 1) == 0) {
                                    uVar14 = **reloc.__stderrp;
                                }
                                else {
                                    uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                       (pcVar12, &uStack_f8 + 4);
                                    if ((uVar10 & 1) == 0) {
                                        uVar14 = **reloc.__stderrp;
                                    }
                                    else {
                                        uVar10 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                           (pcVar12, &uStack_f8);
                                        if ((uVar10 & 1) == 0) {
                                            uVar14 = **reloc.__stderrp;
                                        }
                                        else {
                                            uVar10 = *(pcVar12 + 0x30);
                                            if (*(pcVar12 + 0x38) < uVar10) {
                                                uVar14 = **reloc.__stderrp;
                                            }
                                            else {
                                                piVar13 = pcVar12 + 8;
                                                *piVar13 = *(pcVar12 + 0x28) + uVar10;
                                                pcVar12[0x20] = '\x01';
                                                *(pcVar12 + 0x10) = *(pcVar12 + 0x38) - uVar10;
                                                *(pcVar12 + 0x18) = 0;
                                                uStack_fc = 0;
                                                uVar10 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                                   (piVar13, &uStack_fc, 5);
                                                if ((uVar10 & 1) != 0) {
                                                    uStack_fc = uStack_fc + 1;
                                                    uVar16 = uStack_fc;
                                                    apiStack_120[0] = NULL;
                                                    apiStack_120[1] = NULL;
                                                    apiStack_120[2] = NULL;
                                                    apiStack_120[3] = geo::codec::Allocator::instance()();
                                                    apiStack_140[0] = NULL;
                                                    apiStack_140[1] = NULL;
                                                    apiStack_140[2] = NULL;
                                                    apiStack_140[3] = geo::codec::Allocator::instance()();
                                                    apiStack_160[0] = NULL;
                                                    apiStack_160[1] = NULL;
                                                    apiStack_160[2] = NULL;
                                                    apiStack_160[3] = geo::codec::Allocator::instance()();
                                                    apiStack_180[0] = NULL;
                                                    apiStack_180[1] = NULL;
                                                    apiStack_180[2] = NULL;
                                                    apiStack_180[3] = geo::codec::Allocator::instance()();
                                                    apiStack_1a0[0] = NULL;
                                                    apiStack_1a0[1] = NULL;
                                                    apiStack_1a0[2] = NULL;
                                                    apiStack_1a0[3] = geo::codec::Allocator::instance()();
                                                    uVar10 = 
                                                            geo::codec::adaptiveDeltaEncoderDecode(Bitstream*, unsigned long, std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >&)
                                                                      (piVar13, uStack_e4, apiStack_120);
                                                    if ((uVar10 & 1) == 0) {
                                                        uVar14 = **reloc.__stderrp;
code_r0x00019391daec:
                                                        fprintf(uVar14, 0x8ff + 0x193b8a000);
code_r0x00019391db04:
                                                        uVar14 = 0;
                                                    }
                                                    else {
                                                        uVar10 = 
                                                            geo::codec::adaptiveDeltaEncoderDecode(Bitstream*, unsigned long, std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >&)
                                                                      (piVar13, uStack_ec._4_4_, apiStack_140);
                                                        if ((uVar10 & 1) == 0) {
                                                            uVar14 = **reloc.__stderrp;
                                                            goto code_r0x00019391daec;
                                                        }
                                                        uVar10 = 
                                                            geo::codec::adaptiveDeltaEncoderDecode(Bitstream*, unsigned long, std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >&)
                                                                      (piVar13, uStack_ec, apiStack_160);
                                                        if ((uVar10 & 1) == 0) {
                                                            uVar14 = **reloc.__stderrp;
                                                            goto code_r0x00019391daec;
                                                        }
                                                        uVar10 = 
                                                            geo::codec::adaptiveDeltaEncoderDecode(Bitstream*, unsigned long, std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >&)
                                                                      (piVar13, uStack_f0, apiStack_180);
                                                        if ((uVar10 & 1) == 0) {
                                                            uVar14 = **reloc.__stderrp;
                                                            goto code_r0x00019391daec;
                                                        }
                                                        uVar10 = 
                                                            geo::codec::adaptiveDeltaEncoderDecode(Bitstream*, unsigned long, std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >&)
                                                                      (piVar13, uStack_f8._4_4_, apiStack_1a0);
                                                        if ((uVar10 & 1) == 0) {
                                                            uVar14 = **reloc.__stderrp;
                                                            goto code_r0x00019391daec;
                                                        }
                                                        if ((apiStack_120[0] != apiStack_120[1]) &&
                                                           (piVar9 = apiStack_120[1] + -8, 
                                                           apiStack_120[0] <= piVar9 && piVar9 != apiStack_120[0])) {
                                                            piVar11 = apiStack_120[0] + 1;
                                                            do {
                                                                iVar6 = piVar11[-1];
                                                                piVar11[-1] = *piVar9;
                                                                *piVar9 = iVar6;
                                                                bVar4 = piVar11 < piVar9 + -1;
                                                                piVar11 = piVar11 + 1;
                                                                piVar9 = piVar9 + -1;
                                                            } while (bVar4);
                                                        }
                                                        piVar9 = apiStack_140[1] + -8;
                                                        bVar4 = !(apiStack_140[0] != apiStack_140[1]);
                                                        if ((!bVar4 && apiStack_140[0] <= piVar9) &&
                                                            (bVar4 || piVar9 != apiStack_140[0])) {
                                                            piVar11 = apiStack_140[0] + 1;
                                                            do {
                                                                iVar6 = piVar11[-1];
                                                                piVar11[-1] = *piVar9;
                                                                *piVar9 = iVar6;
                                                                bVar4 = piVar11 < piVar9 + -1;
                                                                piVar11 = piVar11 + 1;
                                                                piVar9 = piVar9 + -1;
                                                            } while (bVar4);
                                                        }
                                                        piVar9 = apiStack_160[1] + -8;
                                                        bVar4 = !(apiStack_160[0] != apiStack_160[1]);
                                                        if ((!bVar4 && apiStack_160[0] <= piVar9) &&
                                                            (bVar4 || piVar9 != apiStack_160[0])) {
                                                            piVar11 = apiStack_160[0] + 1;
                                                            do {
                                                                iVar6 = piVar11[-1];
                                                                piVar11[-1] = *piVar9;
                                                                *piVar9 = iVar6;
                                                                bVar4 = piVar11 < piVar9 + -1;
                                                                piVar11 = piVar11 + 1;
                                                                piVar9 = piVar9 + -1;
                                                            } while (bVar4);
                                                        }
                                                        piVar9 = apiStack_180[1] + -8;
                                                        bVar4 = !(apiStack_180[0] != apiStack_180[1]);
                                                        if ((!bVar4 && apiStack_180[0] <= piVar9) &&
                                                            (bVar4 || piVar9 != apiStack_180[0])) {
                                                            piVar11 = apiStack_180[0] + 1;
                                                            do {
                                                                iVar6 = piVar11[-1];
                                                                piVar11[-1] = *piVar9;
                                                                *piVar9 = iVar6;
                                                                bVar4 = piVar11 < piVar9 + -1;
                                                                piVar11 = piVar11 + 1;
                                                                piVar9 = piVar9 + -1;
                                                            } while (bVar4);
                                                        }
                                                        piVar9 = apiStack_1a0[1] + -8;
                                                        bVar4 = !(apiStack_1a0[0] != apiStack_1a0[1]);
                                                        if ((!bVar4 && apiStack_1a0[0] <= piVar9) &&
                                                            (bVar4 || piVar9 != apiStack_1a0[0])) {
                                                            piVar11 = apiStack_1a0[0] + 1;
                                                            do {
                                                                iVar6 = piVar11[-1];
                                                                piVar11[-1] = *piVar9;
                                                                *piVar9 = iVar6;
                                                                bVar4 = piVar11 < piVar9 + -1;
                                                                piVar11 = piVar11 + 1;
                                                                piVar9 = piVar9 + -1;
                                                            } while (bVar4);
                                                        }
                                                        iVar7 = *(*param_3 + 0x318);
                                                        std::__1::vector<GeoCodecsRoadOffsets, geo::StdAllocator<GeoCodecsRoadOffsets, geo::codec::Allocator> >::reserve(unsigned long)
                                                                  (*param_3 + 0xb68, *(iVar7 + 0x10));
                                                        iVar6 = *param_3;
                                                        uStack_1c0 = *(iVar6 + 0x20);
                                                        iVar15 = *(iVar6 + 0x28) - uStack_1c0;
                                                        if (iVar15 + -1 < 0 == SBORROW8(iVar15, 1)) {
                                                            fVar22 = 1.0 / ~(-1 << (uVar16 & 0x1f));
                                                            do {
                                                                iVar15 = *(uStack_1c0 + 0x80);
                                                                if (iVar15 < *(uStack_1c0 + 0x88) + iVar15) {
                                                                    piVar9 = *(iVar7 + 0x20) + iVar15 * 0x10;
                                                                    do {
                                                                        auStack_1a4[3] = '\0';
                                                                        uVar10 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                                           (piVar13, auStack_1a4 + 3);
                                                                        if ((uVar10 & 1) == 0) {
                                                                            uVar14 = **reloc.__stderrp;
                                                                            goto code_r0x00019391daec;
                                                                        }
                                                                        if (auStack_1a4[3] == '\0') {
                                                                            iVar6 = *piVar9;
                                                                            if (iVar6 < piVar9[1] + iVar6) {
                                                                                uVar10 = *(iVar7 + 8) + iVar6 * 8;
                                                                                do {
                                                                                    ppiStack_b0 = NULL;
                                                                                    uStack_a8 = 0;
                                                                                    
                                                            void std::__1::vector<GeoCodecsRoadOffsets, geo::StdAllocator<GeoCodecsRoadOffsets, geo::codec::Allocator> >::emplace_back<GeoCodecsRoadOffsets>(GeoCodecsRoadOffsets&&)
                                                                      (*param_3 + 0xb68, *0x8 + -0xb0);
                                                            uVar10 = uVar10 + 8;
                                                            } while (uVar10 < *(iVar7 + 8) + (piVar9[1] + *piVar9) * 8);
                                                            }
                                                            }
                                                            else {
                                                                apiStack_120[1] = apiStack_120[1] + -1;
                                                                iVar6 = *apiStack_120[1];
                                                                iVar15 = piVar9[1];
                                                                if (iVar6 != iVar15) {
                                                                    if (*0x1d66e0538 != -1) {
                                                                        dispatch_once(0x538 + 0x1d66e0000, 
                                                                                      typeinfo for geo::Allocator + 0x28
                                                                                     );
                                                                        uVar14 = *__MergedGlobals;
                                                                        iVar5 = os_log_type_enabled(uVar14, 0x10);
                                                                    }
                                                                    else {
                                                                        uVar14 = *__MergedGlobals;
                                                                        iVar5 = os_log_type_enabled(uVar14, 0x10);
                                                                    }
                                                                    if (iVar5 != 0) {
                                                                        uVar10 = *param_2;
                                                                        ppiStack_b0._0_4_ = 0x500 | 0x4000000;
                                                                        ppiStack_b0 = CONCAT44((uVar10 >> 0xe |
                                                                                               uVar10 << -0xe + 0x40) &
                                                                                               0x3ffffff, 
                                                                                               ppiStack_b0._0_4_);
                                                                        uStack_a0 = (uVar10 >> 8 | uVar10 << -8 + 0x20)
                                                                                    & 0x3f;
                                                                        uStack_a8._0_2_ = 0x400;
                                                                        uStack_a8._0_6_ =
                                                                             CONCAT42(uVar10 >> 0x28 & 0xffffff |
                                                                                      *(param_2 + 1) << -8 + 0x20 &
                                                                                      0xff000000, uStack_a8) &
                                                                             0x3ffffffffff;
                                                                        uStack_a8 = CONCAT26(0x400, uStack_a8);
                                                                        uStack_9c = 0x800;
                                                                        uStack_92 = 0x800;
                                                                        iStack_9a = iVar15;
                                                                        iStack_90 = iVar6;
                                                                        _os_log_impl(segment.__TEXT, uVar14, 0x10, 
                                                                                     0x426 + 0x193ba3000, *0x8 + -0xb0, 
                                                                                     0x28);
                                                                    }
                                                                    goto code_r0x00019391db04;
                                                                }
                                                                auStack_1a4[2] = '\0';
                                                                uVar10 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                                   (piVar13, auStack_1a4 + 2);
                                                                if ((uVar10 & 1) == 0) {
                                                                    uVar14 = **reloc.__stderrp;
                                                                    goto code_r0x00019391daec;
                                                                }
                                                                auStack_1a4[1] = '\0';
                                                                uVar10 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                                   (piVar13, auStack_1a4 + 1);
                                                                if ((uVar10 & 1) == 0) {
                                                                    uVar14 = **reloc.__stderrp;
                                                                    goto code_r0x00019391daec;
                                                                }
                                                                auStack_1a4[0] = 0;
                                                                uVar10 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                                   (piVar13, auStack_1a4);
                                                                uVar3 = auStack_1a4[0];
                                                                if ((uVar10 & 1) == 0) {
                                                                    uVar14 = **reloc.__stderrp;
                                                                    goto code_r0x00019391daec;
                                                                }
                                                                iVar6 = *piVar9;
                                                                if (iVar6 < piVar9[1] + iVar6) {
                                                                    uVar10 = *(iVar7 + 8) + iVar6 * 8;
                                                                    cVar1 = auStack_1a4[2];
                                                                    cVar2 = auStack_1a4[1];
                                                                    do {
                                                                        ppiStack_b0 = NULL;
                                                                        uStack_a8 = 0;
                                                                        auStack_1a4[3] = cVar1;
                                                                        if (cVar1 == '\0') {
                                                                            uVar8 = 
                                                            BitstreamUnpackFlag(Bitstream*, bool*)
                                                                      (piVar13, auStack_1a4 + 3);
                                                            if ((uVar8 & 1) == 0) {
                                                                uVar14 = **reloc.__stderrp;
                                                                goto code_r0x00019391daec;
                                                            }
                                                            if (auStack_1a4[3] != '\0') goto code_r0x00019391dc6c;
                                                            }
                                                            else {
code_r0x00019391dc6c:
                                                                apiStack_140[1] = apiStack_140[1] + -1;
                                                                fVar17 = NEON_ucvtf(uStack_f8);
                                                                if (cVar2 == '\0') {
                                                                    fVar18 = 0.0;
                                                                }
                                                                else {
                                                                    apiStack_160[1] = apiStack_160[1] + -1;
                                                                    fVar18 = *apiStack_160[1] * fVar17 * fVar22;
                                                                }
                                                                fVar19 = fVar17 * *apiStack_140[1] * fVar22;
                                                                if (uVar3 == 0) {
                                                                    apiStack_180[1] = apiStack_180[1] + -1;
                                                                    if (cVar2 == '\0') {
                                                                        fVar21 = 0.0;
                                                                    }
                                                                    else {
                                                                        apiStack_1a0[1] = apiStack_1a0[1] + -1;
                                                                        fVar21 = *apiStack_1a0[1] * fVar17 * fVar22;
                                                                    }
                                                                    fVar20 = fVar19;
                                                                    fVar19 = *apiStack_180[1] * fVar17 * fVar22;
                                                                    ppiStack_b0._0_4_ = (fVar18 + fVar20) * 0.5;
                                                                    fVar18 = fVar21;
                                                                }
                                                                fVar18 = (fVar18 + fVar19) * 0.5;
                                                                ppiStack_b0 = CONCAT44(ppiStack_b0._0_4_, 
                                                                                       ppiStack_b0._0_4_);
                                                                uStack_a8 = CONCAT44(fVar18, fVar18);
                                                            }
                                                            fcn.19393612c(*param_3 + 0xb68, *0x8 + -0xb0);
                                                            uVar10 = uVar10 + 8;
                                                            } while (uVar10 < *(iVar7 + 8) + (piVar9[1] + *piVar9) * 8);
                                                            }
                                                            }
                                                            piVar9 = piVar9 + 2;
                                                            } while (piVar9 < *(iVar7 + 0x20) +
                                                                              (*(uStack_1c0 + 0x88) +
                                                                              *(uStack_1c0 + 0x80)) * 0x10);
                                                            iVar6 = *param_3;
                                                            }
                                                            uVar10 = uStack_1c0;
                                                            uVar14 = 1;
                                                            uStack_1c0 = uVar10 + 0x100;
                                                            } while (uVar10 + 0x100 < *(iVar6 + 0x28));
                                                        }
                                                        else {
                                                            uVar14 = 1;
                                                        }
                                                    }
                                                    std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                              (apiStack_1a0);
                                                    std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                              (apiStack_180);
                                                    std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                              (apiStack_160);
                                                    std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                              (apiStack_140);
                                                    std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                              (apiStack_120);
                                                    if (param_1 == NULL) goto code_r0x00019391d594;
                                                    goto code_r0x00019391d52c;
                                                }
                                                uVar14 = **reloc.__stderrp;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            goto code_r0x00019391d50c;
        }
        uVar14 = 1;
        piVar13 = 0x479 + 0x193b8a000;
        iVar15 = iStack_c8;
        iVar7 = std::__1::chrono::steady_clock::now()();
        apiStack_120[0] = piVar13;
        if (0x479 + 0x193b8a000 == NULL) goto code_r0x00019391d610;
    }
    ppiStack_b0 = apiStack_120;
    iVar15 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iVar15 + 0x778, apiStack_120, 0x74c + 0x193af9000, *0x8 + -0xb0, apiStack_140);
    iVar6 = SUB168(SEXT816(iVar7 - iVar6) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar15 + 0x20) = ((iVar6 >> 7) - (iVar6 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x00019391d610:
    piVar13 = piStack_c0;
    if (piVar13 != NULL) {
        LOAcquire();
        tmp_ldXn = piStack_c0[1];
        iVar6 = tmp_ldXn;
        tmp_stXn = iVar6 + -1;
        iVar6 = tmp_stXn;
        piStack_c0[1] = iVar6;
        iVar6 = tmp_ldXn;
        LORelease();
        if (iVar6 == 0) {
            (**(*piVar13 + 0x10))(piVar13);
            std::__1::__shared_weak_count::__release_weak()(piVar13);
        }
    }
    if (**reloc.__stack_chk_guard == iStack_88) {
        return uVar14;
    }
    // WARNING: Subroutine does not return
    __stack_chk_fail();
}
