
ulong geo::codec::_readDaVinciTrafficSkeletonOld(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                (int64_t *param_1, uint64_t *param_2, int64_t *param_3)

{
    uchar (*pauVar1) [16];
    float *pfVar2;
    int64_t *piVar3;
    uint64_t *puVar4;
    int32_t iVar5;
    uchar uVar6;
    uchar uVar7;
    uint16_t uVar8;
    uchar auVar9 [16];
    uchar auVar10 [16];
    uchar auVar11 [16];
    uchar auVar12 [16];
    uchar auVar13 [16];
    uchar auVar14 [16];
    uchar auVar15 [16];
    float fVar16;
    float fVar17;
    code *UNRECOVERED_JUMPTABLE;
    bool bVar18;
    bool bVar19;
    int32_t iVar20;
    ulong uVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    int64_t iVar24;
    ulong uVar25;
    ulong *puVar26;
    uint32_t uVar27;
    uint64_t uVar28;
    ulong *puVar29;
    uint32_t *puVar30;
    uint32_t uVar31;
    uint64_t uVar32;
    float *pfVar33;
    uint64_t uVar34;
    char *pcVar35;
    int64_t iVar36;
    int64_t iVar37;
    int64_t iVar38;
    uint32_t uVar39;
    uchar auVar40 [12];
    uchar auVar41 [12];
    uchar auVar42 [12];
    uchar auVar43 [12];
    float fVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    uint uVar48;
    float8 fVar49;
    float fVar50;
    float8 fVar51;
    float8 fVar52;
    float8 fVar53;
    float fVar54;
    float8 fVar55;
    float8 fVar56;
    float fVar57;
    float8 fVar58;
    float8 fVar59;
    float fVar60;
    float8 fVar61;
    float8 fVar62;
    float8 fVar63;
    float8 fVar64;
    float8 fVar65;
    float8 fVar66;
    uchar auVar67 [16];
    uchar auVar68 [16];
    float8 fVar69;
    float fVar70;
    float8 fVar71;
    uchar in_q17 [16];
    uchar auVar72 [16];
    float fVar73;
    float fVar77;
    uchar auVar74 [12];
    uchar auVar75 [16];
    float fVar78;
    float fVar79;
    uchar auVar76 [16];
    uchar auVar80 [16];
    uchar auVar81 [16];
    float fVar82;
    float fVar83;
    float fVar84;
    float fVar85;
    float fVar86;
    float fVar87;
    float fVar88;
    float fVar89;
    float fVar90;
    float fVar91;
    float fVar92;
    float fVar93;
    float fVar94;
    float fVar95;
    float fVar96;
    float fVar97;
    float fVar98;
    float fVar99;
    float fVar100;
    float fVar101;
    float fVar102;
    uchar auVar103 [16];
    uchar auVar104 [16];
    float fVar105;
    float fVar107;
    float fVar108;
    uchar auVar106 [16];
    float fVar109;
    uchar auVar110 [16];
    uchar auVar111 [16];
    int64_t aiStack_2c8 [4];
    int64_t iStack_2a8;
    uint64_t uStack_2a0;
    int64_t iStack_298;
    uint64_t uStack_290;
    int64_t iStack_288;
    int64_t iStack_280;
    uint64_t uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong *puStack_260;
    uint64_t uStack_258;
    int64_t iStack_250;
    uchar uStack_245;
    uint uStack_244;
    char acStack_23d [5];
    int64_t iStack_238;
    int64_t aiStack_230 [4];
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    uint32_t *puStack_1f0;
    int64_t iStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong auStack_1c0 [2];
    int64_t *apiStack_1b0 [4];
    int64_t aiStack_190 [4];
    int64_t aiStack_170 [4];
    uint32_t *apuStack_150 [4];
    uint32_t uStack_12c;
    uint32_t uStack_128;
    uint uStack_124;
    ulong uStack_120;
    uint32_t uStack_118;
    uint uStack_114;
    int64_t aiStack_110 [2];
    int64_t *piStack_100;
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    uchar auStack_e8 [6];
    uchar auStack_e2 [4];
    ushort uStack_de;
    uint uStack_dc;
    uchar uStack_d8;
    uchar uStack_d7;
    uint uStack_d6;
    uchar auStack_d2 [4];
    ushort uStack_ce;
    uint32_t uStack_cc;
    ushort uStack_c8;
    float8 fStack_c6;
    int64_t iStack_b8;
    
    iStack_b8 = **reloc.__stack_chk_guard;
    iVar24 = *param_3;
    uVar28 = param_1[1];
    if (uVar28 != 0) {
        uVar23 = 0;
        do {
            if (*(*param_1 + uVar23 * 0x10) == 0x92) {
                pcVar35 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                    (param_1, uVar23, 0x92, iVar24 + 0x778);
                iVar24 = *param_3;
                *(*0x8 + -0x110) = 0x461 + 0x193b8a000;
                *(*0x8 + -0x108) = iVar24;
                iVar24 = param_3[1];
                *(*0x8 + -0x100) = iVar24;
                if (iVar24 != 0) goto code_r0x00019391b608;
                goto code_r0x00019391b614;
            }
            uVar23 = uVar23 + 1;
        } while (uVar23 <= uVar28 && uVar28 != uVar23);
    }
    pcVar35 = NULL;
    *(*0x8 + -0x110) = 0x461 + 0x193b8a000;
    *(*0x8 + -0x108) = iVar24;
    iVar24 = param_3[1];
    *(*0x8 + -0x100) = iVar24;
    if (iVar24 != 0) {
code_r0x00019391b608:
        tmp_ldXn = *(iVar24 + 8);
        iVar36 = tmp_ldXn;
        tmp_stXn = iVar36 + 1;
        uVar21 = tmp_stXn;
        *(iVar24 + 8) = uVar21;
        uVar21 = tmp_ldXn;
    }
code_r0x00019391b614:
    uVar21 = std::__1::chrono::steady_clock::now()();
    *(*0x8 + -0xf8) = uVar21;
    if (pcVar35 == NULL) {
        uVar21 = 1;
        iVar38 = *(*0x8 + -0x110);
        iVar37 = *(*0x8 + -0x108);
        iVar24 = std::__1::chrono::steady_clock::now()();
        iVar36 = *(*0x8 + -0xf8);
        iStack_238 = iVar38;
        if (iVar38 == 0) goto code_r0x00019391b840;
    }
    else {
        if (*(*param_3 + 0xb50) == *(*param_3 + 0xb48)) {
            uVar28 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar35, pcVar35 + 0x40);
            if ((uVar28 & 1) == 0) {
                uVar21 = **reloc.__stderrp;
                uVar25 = 0x284b;
                goto code_r0x00019391b73c;
            }
            if (*(pcVar35 + 0x40) == 1) {
                *(*0x8 + -0x114) = 0;
                uVar28 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar35, *0x8 + -0x114);
                if ((uVar28 & 1) == 0) {
                    uVar21 = **reloc.__stderrp;
                    uVar25 = 0x2852;
                }
                else {
                    *(*0x8 + -0x118) = 0;
                    *(*0x8 + -0x120) = 0;
                    *(*0x8 + -0x124) = 0;
                    uVar28 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar35, *0x8 + -0x118);
                    if ((uVar28 & 1) == 0) {
                        uVar21 = **reloc.__stderrp;
                        uVar25 = 0x2859;
                    }
                    else {
                        uVar28 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar35, *0x8 + -0x11c);
                        if ((uVar28 & 1) == 0) {
                            uVar21 = **reloc.__stderrp;
                            uVar25 = 0x285a;
                        }
                        else {
                            uVar28 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                               (pcVar35, *0x8 + -0x120);
                            if ((uVar28 & 1) == 0) {
                                uVar21 = **reloc.__stderrp;
                                uVar25 = 0x285b;
                            }
                            else {
                                uVar28 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                                   (pcVar35, *0x8 + -0x124);
                                if ((uVar28 & 1) == 0) {
                                    uVar21 = **reloc.__stderrp;
                                    uVar25 = 0x285c;
                                }
                                else {
                                    uVar28 = *(pcVar35 + 0x30);
                                    if (*(pcVar35 + 0x38) < uVar28) {
                                        uVar21 = **reloc.__stderrp;
                                        uVar25 = 0x285d;
                                    }
                                    else {
                                        piVar22 = pcVar35 + 8;
                                        *piVar22 = *(pcVar35 + 0x28) + uVar28;
                                        pcVar35[0x20] = '\x01';
                                        *(pcVar35 + 0x10) = *(pcVar35 + 0x38) - uVar28;
                                        *(pcVar35 + 0x18) = 0;
                                        *(*0x8 + -300) = 0;
                                        *(*0x8 + -0x128) = 0;
                                        uVar28 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                           (piVar22, *0x8 + -0x128, 5);
                                        if ((uVar28 & 1) == 0) {
                                            uVar21 = **reloc.__stderrp;
                                            uVar25 = 0x2864;
                                        }
                                        else {
                                            iVar20 = *(*0x8 + -0x128);
                                            *(*0x8 + -0x128) = iVar20 + 1;
                                            uVar28 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                                               (piVar22, *0x8 + -300, 5);
                                            if ((uVar28 & 1) != 0) {
                                                iVar5 = *(*0x8 + -300);
                                                *(*0x8 + -300) = iVar5 + 1;
                                                iVar24 = *param_3;
                                                *(*0x8 + -0x150) = 0;
                                                *(*0x8 + -0x148) = 0;
                                                *(*0x8 + -0x140) = 0;
                                                uVar21 = geo::codec::Allocator::instance()();
                                                *(*0x8 + -0x138) = uVar21;
                                                *(*0x8 + -0x170) = 0;
                                                *(*0x8 + -0x168) = 0;
                                                *(*0x8 + -0x160) = 0;
                                                uVar21 = geo::codec::Allocator::instance()();
                                                *(*0x8 + -0x158) = uVar21;
                                                *(*0x8 + -400) = 0;
                                                *(*0x8 + -0x188) = 0;
                                                *(*0x8 + -0x180) = 0;
                                                uVar21 = geo::codec::Allocator::instance()();
                                                *(*0x8 + -0x178) = uVar21;
                                                *(*0x8 + -0x1b0) = 0;
                                                *(*0x8 + -0x1a8) = 0;
                                                *(*0x8 + -0x1a0) = 0;
                                                uVar21 = geo::codec::Allocator::instance()();
                                                *(*0x8 + -0x198) = uVar21;
                                                uVar28 = geo::codec::adaptiveDeltaEncoderDecode(Bitstream*, unsigned long, std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >&)
                                                                   (piVar22, *(*0x8 + -0x118), *0x8 + -0x150);
                                                if ((uVar28 & 1) == 0) {
                                                    uVar21 = **reloc.__stderrp;
                                                    uVar25 = 0x287f;
code_r0x00019391c5b0:
                                                    *(*0x8 + -0x2c8) = uVar25;
                                                    fprintf(uVar21, 0x8ff + 0x193b8a000);
                                                    uVar21 = 0;
                                                }
                                                else {
                                                    uVar28 = 
                                                            geo::codec::adaptiveDeltaEncoderDecode(Bitstream*, unsigned long, std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >&)
                                                                      (piVar22, *(*0x8 + -0x11c), *0x8 + -0x170);
                                                    if ((uVar28 & 1) == 0) {
                                                        uVar21 = **reloc.__stderrp;
                                                        uVar25 = 0x2880;
                                                        goto code_r0x00019391c5b0;
                                                    }
                                                    uVar28 = 
                                                            geo::codec::adaptiveDeltaEncoderDecode(Bitstream*, unsigned long, std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >&)
                                                                      (piVar22, *(*0x8 + -0x120), *0x8 + -400);
                                                    if ((uVar28 & 1) == 0) {
                                                        uVar21 = **reloc.__stderrp;
                                                        uVar25 = 0x2881;
                                                        goto code_r0x00019391c5b0;
                                                    }
                                                    uVar28 = 
                                                            geo::codec::adaptiveDeltaEncoderDecode(Bitstream*, unsigned long, std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >&)
                                                                      (piVar22, *(*0x8 + -0x124), *0x8 + -0x1b0);
                                                    if ((uVar28 & 1) == 0) {
                                                        uVar21 = **reloc.__stderrp;
                                                        uVar25 = 0x2882;
                                                        goto code_r0x00019391c5b0;
                                                    }
                                                    puVar29 = *(*0x8 + -0x150);
                                                    if ((puVar29 != *(*0x8 + -0x148)) &&
                                                       (puVar26 = *(*0x8 + -0x148) + -8, 
                                                       puVar29 <= puVar26 && puVar26 != puVar29)) {
                                                        puVar29 = puVar29 + 1;
                                                        do {
                                                            uVar21 = puVar29[-1];
                                                            puVar29[-1] = *puVar26;
                                                            *puVar26 = uVar21;
                                                            bVar19 = puVar29 < puVar26 + -1;
                                                            puVar29 = puVar29 + 1;
                                                            puVar26 = puVar26 + -1;
                                                        } while (bVar19);
                                                    }
                                                    puVar29 = *(*0x8 + -0x170);
                                                    puVar26 = *(*0x8 + -0x168) + -8;
                                                    bVar19 = !(puVar29 != *(*0x8 + -0x168));
                                                    if ((!bVar19 && puVar29 <= puVar26) &&
                                                        (bVar19 || puVar26 != puVar29)) {
                                                        puVar29 = puVar29 + 1;
                                                        do {
                                                            uVar21 = puVar29[-1];
                                                            puVar29[-1] = *puVar26;
                                                            *puVar26 = uVar21;
                                                            bVar19 = puVar29 < puVar26 + -1;
                                                            puVar29 = puVar29 + 1;
                                                            puVar26 = puVar26 + -1;
                                                        } while (bVar19);
                                                    }
                                                    puVar29 = *(*0x8 + -400);
                                                    puVar26 = *(*0x8 + -0x188) + -8;
                                                    bVar19 = !(puVar29 != *(*0x8 + -0x188));
                                                    if ((!bVar19 && puVar29 <= puVar26) &&
                                                        (bVar19 || puVar26 != puVar29)) {
                                                        puVar29 = puVar29 + 1;
                                                        do {
                                                            uVar21 = puVar29[-1];
                                                            puVar29[-1] = *puVar26;
                                                            *puVar26 = uVar21;
                                                            bVar19 = puVar29 < puVar26 + -1;
                                                            puVar29 = puVar29 + 1;
                                                            puVar26 = puVar26 + -1;
                                                        } while (bVar19);
                                                    }
                                                    puVar29 = *(*0x8 + -0x1b0);
                                                    puVar26 = *(*0x8 + -0x1a8) + -8;
                                                    bVar19 = !(puVar29 != *(*0x8 + -0x1a8));
                                                    if ((!bVar19 && puVar29 <= puVar26) &&
                                                        (bVar19 || puVar26 != puVar29)) {
                                                        puVar29 = puVar29 + 1;
                                                        do {
                                                            uVar21 = puVar29[-1];
                                                            puVar29[-1] = *puVar26;
                                                            *puVar26 = uVar21;
                                                            bVar19 = puVar29 < puVar26 + -1;
                                                            puVar29 = puVar29 + 1;
                                                            puVar26 = puVar26 + -1;
                                                        } while (bVar19);
                                                    }
                                                    iStack_1d0 = 0;
                                                    iStack_1c8 = 0;
                                                    *(*0x8 + -0x1c0) = 0;
                                                    uVar21 = geo::codec::Allocator::instance()();
                                                    *(*0x8 + -0x1b8) = uVar21;
                                                    puStack_1f0 = NULL;
                                                    iStack_1e8 = 0;
                                                    uStack_1e0 = 0;
                                                    uStack_1d8 = geo::codec::Allocator::instance()();
                                                    uStack_210 = 0;
                                                    uStack_208 = 0;
                                                    uStack_200 = 0;
                                                    uStack_1f8 = geo::codec::Allocator::instance()();
                                                    if (*(*0x8 + -0x118) == 0) {
                                                        uVar21 = 1;
                                                    }
                                                    else {
                                                        aiStack_2c8[2] = iVar24 + 0xb48;
                                                        uStack_290 = ~(-1 << (iVar20 + 1 & 0x1f));
                                                        iVar24 = *param_3;
                                                        iStack_2a8 = *(iVar24 + 0x318);
                                                        uStack_2a0 = 0;
                                                        aiStack_2c8[3] = *(iStack_2a8 + 0x20);
                                                        iStack_280 = *(iVar24 + 0x20);
                                                        iStack_288 = *(iVar24 + 0x28);
                                                        uStack_258 = iStack_288 - iStack_280 >> 8;
                                                        puStack_260 = *0x8 + -0x230;
                                                        fVar17 = uStack_290;
                                                        iStack_250 = iStack_280 + 0x88;
                                                        uVar25 = NEON_fmov(0x3f800000, 4);
                                                        fVar16 = 1.0 / ~(-1 << (iVar5 + 1 & 0x1f));
                                                        fVar70 = 1.0;
                                                        do {
                                                            puVar29 = puStack_260;
                                                            *puStack_260 = 0;
                                                            puStack_260[1] = 0;
                                                            puVar29[2] = 0;
                                                            aiStack_230[3] = geo::codec::Allocator::instance()();
                                                            uVar39 = *(*(*0x8 + -0x148) + -8);
                                                            *(*0x8 + -0x148) = *(*0x8 + -0x148) + -8;
                                                            if (iStack_288 == iStack_280) {
                                                                uStack_278 = 0;
                                                            }
                                                            else {
                                                                uStack_278 = 0;
                                                                do {
                                                                    uVar27 = *(iStack_250 + uStack_278 * 0x100);
                                                                    uVar31 = uVar39 - uVar27;
                                                                    if (uVar39 < uVar27) goto code_r0x00019391bc34;
                                                                    uStack_278 = uStack_278 + 1;
                                                                    uVar39 = uVar31;
                                                                } while (uStack_278 <= uStack_258 &&
                                                                         uStack_258 != uStack_278);
                                                                uStack_278 = 0;
                                                            }
code_r0x00019391bc34:
                                                            iStack_238 = CONCAT44(uVar39, uStack_278);
                                                            acStack_23d[4] = 0;
                                                            uVar28 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (piVar22, *0x8 + -0x239);
                                                            if ((uVar28 & 1) == 0) {
                                                                uVar21 = **reloc.__stderrp;
                                                                uVar25 = 0x28a4;
code_r0x00019391c674:
                                                                *(*0x8 + -0x2c8) = uVar25;
                                                                fprintf(uVar21, 0x8ff + 0x193b8a000);
                                                                GeoCodecsTrafficSkeleton::~GeoCodecsTrafficSkeleton()
                                                                          (*0x8 + -0x238);
                                                                uVar21 = 0;
                                                                break;
                                                            }
                                                            acStack_23d[3] = 0;
                                                            uStack_268 = CONCAT44(uStack_268._4_4_, acStack_23d[4]);
                                                            if ((acStack_23d[4] != 0) &&
                                                               (uVar28 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                                   (piVar22, *0x8 + -0x23a), 
                                                               (uVar28 & 1) == 0)) {
                                                                uVar21 = **reloc.__stderrp;
                                                                uVar25 = 0x28a7;
                                                                goto code_r0x00019391c674;
                                                            }
                                                            acStack_23d[2] = 0;
                                                            uVar28 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (piVar22, *0x8 + -0x23b);
                                                            if ((uVar28 & 1) == 0) {
                                                                uVar21 = **reloc.__stderrp;
                                                                uVar25 = 0x28ab;
                                                                goto code_r0x00019391c674;
                                                            }
                                                            acStack_23d[1] = 0;
                                                            uStack_270 = CONCAT44(uStack_270._4_4_, acStack_23d[2]);
                                                            if ((acStack_23d[2] != 0) &&
                                                               (uVar28 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                                   (piVar22, *0x8 + -0x23c), 
                                                               (uVar28 & 1) == 0)) {
                                                                uVar21 = **reloc.__stderrp;
                                                                uVar25 = 0x28ae;
                                                                goto code_r0x00019391c674;
                                                            }
                                                            if (iStack_1c8 != iStack_1d0) {
                                                                iStack_1c8 = iStack_1d0;
                                                            }
                                                            std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::resize(unsigned long)
                                                                      (*0x8 + -0x1f0, 0);
                                                            uVar6 = acStack_23d[3];
                                                            uVar7 = acStack_23d[1];
                                                            do {
                                                                acStack_23d[0] = '\0';
                                                                uVar21 = *(*(*0x8 + -0x168) + -8);
                                                                *(*0x8 + -0x168) = *(*0x8 + -0x168) + -8;
                                                                *(*0x8 + -0xf0) = uVar21;
                                                                
                                                            void std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::emplace_back<long long>(long long&&)
                                                                      (*0x8 + -0x1d0, *0x8 + -0xf0);
                                                            uVar28 = *(pcVar35 + 0x18);
                                                            if (*(pcVar35 + 0x10) * 8 <= uVar28 + 1 &&
                                                                uVar28 + 1 != *(pcVar35 + 0x10) * 8) {
                                                                uVar21 = **reloc.__stderrp;
                                                                uVar25 = 0x28b7;
                                                                goto code_r0x00019391c674;
                                                            }
                                                            while ((*(*piVar22 + (uVar28 >> 3)) >>
                                                                    (7 & (uVar28 ^ 0xffffffff)) & 1) != 0) {
                                                                fcn.19393573c(puStack_260);
                                                                iVar24 = aiStack_230[1];
                                                                *(iVar24 + -0x20) = *(iStack_1c8 + -8) * (1.0 / fVar17);
                                                                *(*0x8 + -0xf0) = 0;
                                                                uVar28 = BitstreamUnpackUnary(Bitstream*, unsigned int*)
                                                                                   (piVar22, *0x8 + -0xf0);
                                                                if ((uVar28 & 1) == 0) {
                                                                    uVar21 = **reloc.__stderrp;
                                                                    uVar25 = 0x28bd;
                                                                    goto code_r0x00019391c674;
                                                                }
                                                                uStack_244 = *(*0x8 + -0xf0) +
                                                                             (iStack_1c8 - iStack_1d0 >> 3) + -1;
                                                                
                                                            void std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::emplace_back<unsigned int>(unsigned int&&)
                                                                      (*0x8 + -0x1f0, *0x8 + -0x244);
                                                            uStack_244 = CONCAT31(uStack_244._1_3_, uVar6);
                                                            if ((uStack_268 == 0) &&
                                                               (uVar28 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                                   (piVar22, *0x8 + -0x244), 
                                                               (uVar28 & 1) == 0)) {
                                                                uVar21 = **reloc.__stderrp;
                                                                uVar25 = 0x28c2;
                                                                goto code_r0x00019391c674;
                                                            }
                                                            uVar21 = *(*(*0x8 + -0x188) + -8);
                                                            *(*0x8 + -0x188) = *(*0x8 + -0x188) + -8;
                                                            *(iVar24 + -0x18) = uVar21;
                                                            uStack_245 = uVar7;
                                                            if ((uStack_270 == 0) &&
                                                               (iVar20 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                                   (piVar22, *0x8 + -0x245), 
                                                               iVar20 == 0)) {
                                                                uVar25 = 0x28c8;
                                                                goto code_r0x00019391c668;
                                                            }
                                                            *(iVar24 + -8) = uStack_244;
                                                            *(iVar24 + -0x10) = 0;
                                                            iVar20 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (piVar22, *0x8 + -0x23d);
                                                            if (iVar20 == 0) {
                                                                uVar25 = 0x28d0;
                                                                goto code_r0x00019391c668;
                                                            }
                                                            if (acStack_23d[0] != '\0') {
                                                                iVar36 = *(*(*0x8 + -0x1a8) + -8);
                                                                *(*0x8 + -0x1a8) = *(*0x8 + -0x1a8) + -8;
                                                                *(iVar24 + -0x10) = iVar36 * fVar16;
                                                            }
                                                            *(iVar24 + -0xc) = 0x3f800000;
                                                            iVar20 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (piVar22, *0x8 + -0x23d);
                                                            if (iVar20 == 0) {
                                                                uVar25 = 0x28d6;
                                                                goto code_r0x00019391c668;
                                                            }
                                                            if (acStack_23d[0] != '\0') {
                                                                iVar36 = *(*(*0x8 + -0x1a8) + -8);
                                                                *(*0x8 + -0x1a8) = *(*0x8 + -0x1a8) + -8;
                                                                *(iVar24 + -0xc) = iVar36 * fVar16;
                                                            }
                                                            *(iVar24 + -7) = uStack_245;
                                                            *(iVar24 + -5) = 0;
                                                            uVar28 = *(pcVar35 + 0x18);
                                                            if (*(pcVar35 + 0x10) * 8 <= uVar28 + 1 &&
                                                                uVar28 + 1 != *(pcVar35 + 0x10) * 8) {
                                                                uVar25 = 0x28dc;
code_r0x00019391c668:
                                                                uVar21 = **reloc.__stderrp;
                                                                goto code_r0x00019391c674;
                                                            }
                                                            }
                                                            uVar28 = BitstreamUnpackFlag(Bitstream*, bool*)
                                                                               (piVar22, *0x8 + -0x23d);
                                                            if ((uVar28 & 1) == 0) {
                                                                uVar21 = **reloc.__stderrp;
                                                                uVar25 = 0x28de;
                                                                goto code_r0x00019391c674;
                                                            }
                                                            iVar24 = *(iStack_1c8 + -8);
                                                            } while (iVar24 - uStack_290 < 0 !=
                                                                     SBORROW8(iVar24, uStack_290));
                                                            iStack_298 = *(&stack0x00000000 + -0x230);
                                                            iVar36 = *(&stack0x00000000 + -0x228);
                                                            iVar24 = iVar36 - iStack_298;
                                                            uVar28 = iVar24 >> 5;
                                                            if (iVar24 != 0) {
                                                                puVar30 = puStack_1f0;
                                                                iVar24 = iStack_1e8 - puVar30 >> 2;
                                                                uVar32 = iStack_1c8 - iStack_1d0 >> 3;
                                                                uVar23 = uVar28;
                                                                if (uVar28 < 2) {
                                                                    uVar23 = 1;
                                                                }
                                                                pfVar33 = iStack_298 + 4;
                                                                do {
                                                                    if (iVar24 == 0) {
                                                                        
                                                            std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::__throw_out_of_range[abi:v160006]() const
                                                                      ();
code_r0x00019391c73c:
    // WARNING: Treating indirect jump as call
                                                            UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x19391c740);
                                                            uVar21 = (*UNRECOVERED_JUMPTABLE)();
                                                            return uVar21;
                                                            }
                                                            uVar34 = *puVar30;
                                                            if (uVar32 < uVar34 || uVar32 == uVar34) {
                                                                
                                                            std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::__throw_out_of_range[abi:v160006]() const
                                                                      ();
                                                            goto code_r0x00019391c73c;
                                                            }
                                                            *pfVar33 = *(iStack_1d0 + uVar34 * 8) * (1.0 / fVar17);
                                                            puVar30 = puVar30 + 1;
                                                            iVar24 = iVar24 + -1;
                                                            uVar23 = uVar23 + -1;
                                                            pfVar33 = pfVar33 + 8;
                                                            } while (uVar23 != 0);
                                                            }
                                                            piVar3 = aiStack_2c8[3] +
                                                                     (*(iStack_280 + uStack_278 * 0x100 + 0x80) + uVar39
                                                                     ) * 0x10;
                                                            iVar37 = *piVar3;
                                                            iVar24 = piVar3[1];
                                                            puVar4 = *(iStack_2a8 + 8) + iVar37 * 8;
                                                            uVar23 = iVar24 + -1;
                                                            if (uVar23 == 0) {
                                                                fVar69 = 0.0;
                                                            }
                                                            else {
                                                                auVar68._0_8_ = *puVar4;
                                                                auVar68._8_8_ = 0;
                                                                uVar39 = iVar24 + -1;
                                                                fVar69 = 0.0;
                                                                if ((uVar39 < 0x10) ||
                                                                   (!(iVar24 + -2 != -1) || iVar24 + -2 >> 0x20 != 0)) {
                                                                    uVar31 = 0;
                                                                }
                                                                else {
                                                                    in_q17._8_8_ = auVar68._0_8_;
                                                                    uVar48 = auVar68._0_8_;
                                                                    auVar74._0_8_ = CONCAT44(uVar48, uVar48);
                                                                    auVar74._8_4_ = uVar48;
                                                                    auVar72._0_12_ = auVar74;
                                                                    auVar72._12_4_ = uVar48;
                                                                    uVar31 = uVar39 & 0xfffffff0;
                                                                    fVar69 = 0.0;
                                                                    fVar49 = 0.0;
                                                                    fVar51 = 0.0;
                                                                    fVar71 = 0.0;
                                                                    iVar24 = *(iStack_2a8 + 8) + iVar37 * 8 + 0x48;
                                                                    fVar63 = 0.0;
                                                                    fVar64 = 0.0;
                                                                    fVar61 = 0.0;
                                                                    fVar62 = 0.0;
                                                                    fVar52 = 0.0;
                                                                    fVar53 = 0.0;
                                                                    fVar65 = 0.0;
                                                                    fVar66 = 0.0;
                                                                    fVar55 = 0.0;
                                                                    fVar56 = 0.0;
                                                                    fVar58 = 0.0;
                                                                    fVar59 = 0.0;
                                                                    uVar27 = uVar31;
                                                                    do {
                                                                        tmp_ldXn = iVar24 + -0x40;
                                                                        pfVar33 = tmp_ldXn;
                                                                        auVar80._0_4_ = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        auVar81._0_4_ = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        auVar80._4_4_ = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        auVar81._4_4_ = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        auVar80._8_4_ = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        auVar81._8_4_ = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        auVar80._12_4_ = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        auVar81._12_4_ = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        tmp_ldXn = iVar24 + -0x20;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar82 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar90 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar84 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar91 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar86 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar92 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar88 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar93 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        tmp_ldXn = iVar24;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar94 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar98 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar95 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar99 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar96 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar100 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar97 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        pfVar33 = tmp_ldXn;
                                                                        fVar101 = *pfVar33;
                                                                        iVar37 = tmp_ldXn;
                                                                        tmp_ldXn = iVar37 + 4;
                                                                        puVar29 = tmp_ldXn;
                                                                        pauVar1 = iVar24 + 0x30;
                                                                        auVar75 = NEON_ext(auVar72, auVar80, 0xc, 1);
                                                                        fVar47 = *puVar29;
                                                                        fVar54 = puVar29[1];
                                                                        fVar60 = **pauVar1;
                                                                        fVar45 = *(iVar24 + 0x38);
                                                                        auVar72 = NEON_ext(in_q17, auVar81, 0xc, 1);
                                                                        fVar50 = *puVar29 >> 0x20;
                                                                        fVar57 = puVar29[1] >> 0x20;
                                                                        fVar44 = **pauVar1 >> 0x20;
                                                                        fVar46 = *(iVar24 + 0x38) >> 0x20;
                                                                        auVar103._4_4_ = fVar84;
                                                                        auVar103._0_4_ = fVar82;
                                                                        auVar103._8_4_ = fVar86;
                                                                        auVar103._12_4_ = fVar88;
                                                                        auVar103 = NEON_ext(auVar80, auVar103, 0xc, 1);
                                                                        auVar104._4_4_ = fVar84;
                                                                        auVar104._0_4_ = fVar82;
                                                                        auVar104._8_4_ = fVar86;
                                                                        auVar104._12_4_ = fVar88;
                                                                        auVar106._4_4_ = fVar95;
                                                                        auVar106._0_4_ = fVar94;
                                                                        auVar106._8_4_ = fVar96;
                                                                        auVar106._12_4_ = fVar97;
                                                                        auVar104 = NEON_ext(auVar104, auVar106, 0xc, 1);
                                                                        auVar9._4_4_ = fVar95;
                                                                        auVar9._0_4_ = fVar94;
                                                                        auVar9._8_4_ = fVar96;
                                                                        auVar9._12_4_ = fVar97;
                                                                        auVar15._4_4_ = fVar54;
                                                                        auVar15._0_4_ = fVar47;
                                                                        auVar15._8_4_ = fVar60;
                                                                        auVar15._12_4_ = fVar45;
                                                                        auVar106 = NEON_ext(auVar9, auVar15, 0xc, 1);
                                                                        auVar110._4_4_ = fVar91;
                                                                        auVar110._0_4_ = fVar90;
                                                                        auVar110._8_4_ = fVar92;
                                                                        auVar110._12_4_ = fVar93;
                                                                        auVar110 = NEON_ext(auVar81, auVar110, 0xc, 1);
                                                                        auVar111._4_4_ = fVar91;
                                                                        auVar111._0_4_ = fVar90;
                                                                        auVar111._8_4_ = fVar92;
                                                                        auVar111._12_4_ = fVar93;
                                                                        auVar11._4_4_ = fVar99;
                                                                        auVar11._0_4_ = fVar98;
                                                                        auVar11._8_4_ = fVar100;
                                                                        auVar11._12_4_ = fVar101;
                                                                        auVar111 = NEON_ext(auVar111, auVar11, 0xc, 1);
                                                                        auVar12._4_4_ = fVar99;
                                                                        auVar12._0_4_ = fVar98;
                                                                        auVar12._8_4_ = fVar100;
                                                                        auVar12._12_4_ = fVar101;
                                                                        auVar14._4_4_ = fVar57;
                                                                        auVar14._0_4_ = fVar50;
                                                                        auVar14._8_4_ = fVar44;
                                                                        auVar14._12_4_ = fVar46;
                                                                        auVar68 = NEON_ext(auVar12, auVar14, 0xc, 1);
                                                                        fVar83 = auVar68._0_4_ - fVar50;
                                                                        fVar85 = auVar68._4_4_ - fVar57;
                                                                        fVar87 = auVar68._8_4_ - fVar44;
                                                                        fVar89 = auVar68._12_4_ - fVar46;
                                                                        fVar73 = auVar75._0_4_ - auVar80._0_4_;
                                                                        fVar77 = auVar75._4_4_ - auVar80._4_4_;
                                                                        fVar78 = auVar75._8_4_ - auVar80._8_4_;
                                                                        fVar79 = auVar75._12_4_ - auVar80._12_4_;
                                                                        fVar102 = auVar103._0_4_ - fVar82;
                                                                        fVar84 = auVar103._4_4_ - fVar84;
                                                                        fVar86 = auVar103._8_4_ - fVar86;
                                                                        fVar88 = auVar103._12_4_ - fVar88;
                                                                        fVar94 = auVar104._0_4_ - fVar94;
                                                                        fVar95 = auVar104._4_4_ - fVar95;
                                                                        fVar96 = auVar104._8_4_ - fVar96;
                                                                        fVar97 = auVar104._12_4_ - fVar97;
                                                                        fVar105 = auVar106._0_4_ - fVar47;
                                                                        fVar107 = auVar106._4_4_ - fVar54;
                                                                        fVar108 = auVar106._8_4_ - fVar60;
                                                                        fVar109 = auVar106._12_4_ - fVar45;
                                                                        fVar82 = auVar72._0_4_ - auVar81._0_4_;
                                                                        auVar40._0_4_ = fVar82 * fVar82;
                                                                        fVar82 = auVar72._4_4_ - auVar81._4_4_;
                                                                        auVar40._4_4_ = fVar82 * fVar82;
                                                                        fVar82 = auVar72._8_4_ - auVar81._8_4_;
                                                                        auVar40._8_4_ = fVar82 * fVar82;
                                                                        fVar82 = auVar72._12_4_ - auVar81._12_4_;
                                                                        auVar76._0_4_ = fVar73 * fVar73 + auVar40._0_4_;
                                                                        auVar76._4_4_ = fVar77 * fVar77 + auVar40._4_4_;
                                                                        auVar76._8_4_ = fVar78 * fVar78 + auVar40._8_4_;
                                                                        auVar76._12_4_ =
                                                                             fVar79 * fVar79 + fVar82 * fVar82;
                                                                        fVar82 = auVar110._0_4_ - fVar90;
                                                                        auVar41._0_4_ = fVar82 * fVar82;
                                                                        fVar82 = auVar110._4_4_ - fVar91;
                                                                        auVar41._4_4_ = fVar82 * fVar82;
                                                                        fVar82 = auVar110._8_4_ - fVar92;
                                                                        auVar41._8_4_ = fVar82 * fVar82;
                                                                        fVar82 = auVar110._12_4_ - fVar93;
                                                                        fVar73 = auVar111._0_4_ - fVar98;
                                                                        auVar42._0_4_ = fVar73 * fVar73;
                                                                        fVar73 = auVar111._4_4_ - fVar99;
                                                                        auVar42._4_4_ = fVar73 * fVar73;
                                                                        fVar73 = auVar111._8_4_ - fVar100;
                                                                        auVar42._8_4_ = fVar73 * fVar73;
                                                                        fVar73 = auVar111._12_4_ - fVar101;
                                                                        auVar43._0_4_ = fVar83 * fVar83;
                                                                        auVar43._4_4_ = fVar85 * fVar85;
                                                                        auVar43._8_4_ = fVar87 * fVar87;
                                                                        auVar68 = NEON_fsqrt(auVar76, 4);
                                                                        auVar75._4_4_ = fVar84 * fVar84 + auVar41._4_4_;
                                                                        auVar75._0_4_ =
                                                                             fVar102 * fVar102 + auVar41._0_4_;
                                                                        auVar75._8_4_ = fVar86 * fVar86 + auVar41._8_4_;
                                                                        auVar75._12_4_ =
                                                                             fVar88 * fVar88 + fVar82 * fVar82;
                                                                        auVar72 = NEON_fsqrt(auVar75, 4);
                                                                        auVar10._4_4_ = fVar95 * fVar95 + auVar42._4_4_;
                                                                        auVar10._0_4_ = fVar94 * fVar94 + auVar42._0_4_;
                                                                        auVar10._8_4_ = fVar96 * fVar96 + auVar42._8_4_;
                                                                        auVar10._12_4_ =
                                                                             fVar97 * fVar97 + fVar73 * fVar73;
                                                                        auVar103 = NEON_fsqrt(auVar10, 4);
                                                                        auVar13._4_4_ =
                                                                             fVar107 * fVar107 + auVar43._4_4_;
                                                                        auVar13._0_4_ =
                                                                             fVar105 * fVar105 + auVar43._0_4_;
                                                                        auVar13._8_4_ =
                                                                             fVar108 * fVar108 + auVar43._8_4_;
                                                                        auVar13._12_4_ =
                                                                             fVar109 * fVar109 + fVar89 * fVar89;
                                                                        auVar104 = NEON_fsqrt(auVar13, 4);
                                                                        fVar51 = fVar51 + auVar68._8_8_;
                                                                        fVar71 = fVar71 + (auVar68._8_8_ >> 0x20);
                                                                        fVar69 = fVar69 + auVar68._0_8_;
                                                                        fVar49 = fVar49 + (auVar68._0_8_ >> 0x20);
                                                                        fVar61 = fVar61 + auVar72._8_8_;
                                                                        fVar62 = fVar62 + (auVar72._8_8_ >> 0x20);
                                                                        fVar63 = fVar63 + auVar72._0_8_;
                                                                        fVar64 = fVar64 + (auVar72._0_8_ >> 0x20);
                                                                        fVar65 = fVar65 + auVar103._8_8_;
                                                                        fVar66 = fVar66 + (auVar103._8_8_ >> 0x20);
                                                                        fVar52 = fVar52 + auVar103._0_8_;
                                                                        fVar53 = fVar53 + (auVar103._0_8_ >> 0x20);
                                                                        fVar58 = fVar58 + auVar104._8_8_;
                                                                        fVar59 = fVar59 + (auVar104._8_8_ >> 0x20);
                                                                        fVar55 = fVar55 + auVar104._0_8_;
                                                                        fVar56 = fVar56 + (auVar104._0_8_ >> 0x20);
                                                                        iVar24 = iVar24 + 0x80;
                                                                        in_q17._12_4_ = fVar46;
                                                                        in_q17._8_4_ = fVar44;
                                                                        in_q17._0_8_ = CONCAT44(fVar57, fVar50);
                                                                        auVar72._12_4_ = fVar45;
                                                                        auVar72._8_4_ = fVar60;
                                                                        auVar72._0_8_ = CONCAT44(fVar54, fVar47);
                                                                        uVar27 = uVar27 + -0x10;
                                                                    } while (uVar27 != 0);
                                                                    fVar69 = fVar55 + fVar52 + fVar63 + fVar69 +
                                                                             fVar58 + fVar65 + fVar61 + fVar51 +
                                                                             fVar56 + fVar53 + fVar64 + fVar49 +
                                                                             fVar59 + fVar66 + fVar62 + fVar71;
                                                                    if (uVar39 == uVar31) goto code_r0x00019391bf84;
                                                                    auVar68 = NEON_ext(*pauVar1, *pauVar1, 8, 1);
                                                                }
                                                                uVar39 = uVar31 + 1;
                                                                do {
                                                                    uVar34 = puVar4[uVar39];
                                                                    fVar47 = auVar68._0_4_ - uVar34;
                                                                    fVar50 = auVar68._4_4_ - (uVar34 >> 0x20);
                                                                    fVar69 = fVar69 + SQRT(fVar47 * fVar47 +
                                                                                           fVar50 * fVar50);
                                                                    uVar32 = uVar39;
                                                                    uVar39 = uVar39 + 1;
                                                                    auVar68._8_8_ = 0;
                                                                    auVar68._0_8_ = uVar34;
                                                                } while (uVar32 <= uVar23 && uVar23 != uVar32);
                                                            }
code_r0x00019391bf84:
                                                            if (iVar36 != iStack_298) {
                                                                uStack_268 = 0;
                                                                uVar23 = 0;
                                                                auVar67._0_8_ = 0.0;
                                                                auVar67._8_8_ = 0;
                                                                do {
                                                                    uStack_270 = iStack_298 + uStack_268 * 0x20;
                                                                    fVar47 = *uStack_270;
                                                                    bVar19 = false;
                                                                    bVar18 = false;
                                                                    if (fVar47 >= 0.0) {
                                                                        bVar19 = fVar47 < fVar70;
                                                                        bVar18 = fVar47 == fVar70;
                                                                    }
                                                                    if (bVar18 || bVar19 != (fVar47 < 0.0 && false)) {
                                                                        fVar47 = uStack_270[1];
                                                                        bVar19 = false;
                                                                        bVar18 = false;
                                                                        if (fVar47 >= 0.0) {
                                                                            bVar19 = fVar47 < fVar70;
                                                                            bVar18 = fVar47 == fVar70;
                                                                        }
                                                                        if (!bVar18 && bVar19 == (fVar47 < 0.0 && false)
                                                                           ) goto code_r0x00019391c014;
                                                                    }
                                                                    else {
code_r0x00019391c014:
                                                                        if (*0x1d66e0538 != -1) {
                                                                            dispatch_once(0x538 + 0x1d66e0000, 
                                                                                          typeinfo for geo::Allocator +
                                                                                          0x28);
                                                                            uVar21 = *__MergedGlobals;
                                                                            iVar20 = os_log_type_enabled(uVar21, 0x10);
                                                                            if (iVar20 != 0) goto code_r0x00019391c03c;
                                                                        }
                                                                        else {
                                                                            uVar21 = *__MergedGlobals;
                                                                            iVar20 = os_log_type_enabled(uVar21, 0x10);
                                                                            if (iVar20 != 0) {
code_r0x00019391c03c:
                                                                                fVar47 = *uStack_270;
                                                                                fVar50 = *(iStack_298 +
                                                                                           uStack_268 * 0x20 + 4);
                                                                                uVar8 = *(param_2 + 1);
                                                                                uVar28 = *param_2;
                                                                                *(*0x8 + -0xf0) = 0x500 | 0x8000000;
                                                                                *(*0x8 + -0xec) = fVar47;
                                                                                *(*0x8 + -0xe4) = 0x800;
                                                                                *(*0x8 + -0xe2) = fVar50;
                                                                                *(*0x8 + -0xda) = 0x400;
                                                                                *(*0x8 + -0xd8) =
                                                                                     (uVar28 >> 0xe |
                                                                                     uVar28 << -0xe + 0x40) & 0x3ffffff;
                                                                                *(*0x8 + -0xd4) = 0x400;
                                                                                *(*0x8 + -0xd2) =
                                                                                     (uVar28 >> 0x28 & 0xffffff |
                                                                                     uVar8 << -8 + 0x20 & 0xff000000) &
                                                                                     0x3ffffff;
                                                                                *(*0x8 + -0xce) = 0x400;
                                                                                *(*0x8 + -0xcc) =
                                                                                     (uVar28 >> 8 | uVar28 << -8 + 0x20)
                                                                                     & 0x3f;
                                                                                _os_log_impl(segment.__TEXT, uVar21, 
                                                                                             0x10, 0x1f9 + 0x193ba3000, 
                                                                                             *0x8 + -0xf0, 0x28);
                                                                            }
                                                                        }
                                                                    }
                                                                    fVar49 = NEON_fnmsub(fVar69, *uStack_270, 
                                                                                         auVar67._0_8_);
                                                                    pfVar33 = puVar4 + (uVar23 << 3);
                                                                    pfVar2 = puVar4 + (uVar23 + 1 << 3);
                                                                    fVar54 = *pfVar2;
                                                                    fVar50 = pfVar2[1];
                                                                    fVar47 = *pfVar33 - fVar54;
                                                                    fVar57 = pfVar33[1] - fVar50;
                                                                    fVar47 = NEON_fmadd(fVar57, fVar57, fVar47 * fVar47)
                                                                    ;
                                                                    fVar51 = SQRT(fVar47);
                                                                    if (fVar51 < fVar49) {
                                                                        do {
                                                                            fVar49 = fVar49 - fVar51;
                                                                            auVar67._0_8_ = auVar67._0_8_ + fVar51;
                                                                            auVar67._8_8_ = 0;
                                                                            iVar20 = uVar23;
                                                                            uVar23 = iVar20 + 1;
                                                                            pfVar33 = puVar4 + (iVar20 + 2 << 3);
                                                                            fVar57 = *pfVar33;
                                                                            fVar60 = pfVar33[1];
                                                                            fVar47 = fVar54 - fVar57;
                                                                            fVar50 = fVar50 - fVar60;
                                                                            fVar47 = NEON_fmadd(fVar50, fVar50, 
                                                                                                fVar47 * fVar47);
                                                                            fVar51 = SQRT(fVar47);
                                                                            fVar50 = fVar60;
                                                                            fVar54 = fVar57;
                                                                        } while (fVar49 != fVar51 && fVar51 <= fVar49);
                                                                    }
                                                                    fVar71 = uVar23;
                                                                    fVar49 = fVar49 / fVar51 + fVar71;
                                                                    if (fVar49 < 0.0) {
                                                                        if (*0x1d66e0538 != -1) {
                                                                            dispatch_once(0x538 + 0x1d66e0000, 
                                                                                          typeinfo for geo::Allocator +
                                                                                          0x28);
                                                                            uVar21 = *__MergedGlobals;
                                                                            iVar20 = os_log_type_enabled(uVar21, 0x10);
                                                                            if (iVar20 != 0) goto code_r0x00019391c19c;
                                                                        }
                                                                        else {
                                                                            uVar21 = *__MergedGlobals;
                                                                            iVar20 = os_log_type_enabled(uVar21, 0x10);
                                                                            if (iVar20 != 0) {
code_r0x00019391c19c:
                                                                                uVar8 = *(param_2 + 1);
                                                                                uVar28 = *param_2;
                                                                                fVar47 = *uStack_270;
                                                                                fVar50 = *(iStack_298 +
                                                                                           uStack_268 * 0x20 + 4);
                                                                                *(*0x8 + -0xf0) = 0x600 | 0x8000000;
                                                                                *(*0x8 + -0xec) = fVar49;
                                                                                *(*0x8 + -0xe4) = 0x400;
                                                                                *(*0x8 + -0xe2) =
                                                                                     (uVar28 >> 0xe |
                                                                                     uVar28 << -0xe + 0x40) & 0x3ffffff;
                                                                                *(*0x8 + -0xde) = 0x400;
                                                                                *(*0x8 + -0xdc) =
                                                                                     (uVar28 >> 0x28 & 0xffffff |
                                                                                     uVar8 << -8 + 0x20 & 0xff000000) &
                                                                                     0x3ffffff;
                                                                                *(*0x8 + -0xd8) = 0x400;
                                                                                *(*0x8 + -0xd6) =
                                                                                     (uVar28 >> 8 | uVar28 << -8 + 0x20)
                                                                                     & 0x3f;
                                                                                *(*0x8 + -0xd2) = 0x800;
                                                                                *(*0x8 + -0xd0) = fVar47;
                                                                                *(*0x8 + -200) = 0x800;
                                                                                *(*0x8 + -0xc6) = fVar50;
                                                                                _os_log_impl(segment.__TEXT, uVar21, 
                                                                                             0x10, 0x269 + 0x193ba3000, 
                                                                                             *0x8 + -0xf0, 0x32);
                                                                            }
                                                                        }
                                                                    }
                                                                    *uStack_270 = fVar49;
                                                                    iVar24 = iStack_298 + uStack_268 * 0x20;
                                                                    fVar51 = NEON_fnmsub(fVar69, *(iVar24 + 4), 
                                                                                         auVar67._0_8_);
                                                                    pfVar33 = puVar4 + (uVar23 << 3);
                                                                    pfVar2 = puVar4 + (uVar23 + 1 << 3);
                                                                    fVar50 = *pfVar2;
                                                                    fVar54 = pfVar2[1];
                                                                    fVar47 = *pfVar33 - fVar50;
                                                                    fVar57 = pfVar33[1] - fVar54;
                                                                    fVar47 = NEON_fmadd(fVar57, fVar57, fVar47 * fVar47)
                                                                    ;
                                                                    fVar52 = SQRT(fVar47);
                                                                    if (fVar52 < fVar51) {
                                                                        do {
                                                                            fVar51 = fVar51 - fVar52;
                                                                            auVar67._0_8_ = auVar67._0_8_ + fVar52;
                                                                            auVar67._8_8_ = 0;
                                                                            iVar20 = uVar23;
                                                                            uVar23 = iVar20 + 1;
                                                                            pfVar33 = puVar4 + (iVar20 + 2 << 3);
                                                                            fVar57 = *pfVar33;
                                                                            fVar60 = pfVar33[1];
                                                                            fVar50 = fVar50 - fVar57;
                                                                            fVar54 = fVar54 - fVar60;
                                                                            fVar47 = NEON_fmadd(fVar54, fVar54, 
                                                                                                fVar50 * fVar50);
                                                                            fVar52 = SQRT(fVar47);
                                                                            fVar54 = fVar60;
                                                                            fVar50 = fVar57;
                                                                        } while (fVar51 != fVar52 && fVar52 <= fVar51);
                                                                        fVar71 = uVar23;
                                                                    }
                                                                    *(iVar24 + 4) = (fVar71 - fVar49) + fVar51 / fVar52;
                                                                    uStack_268 = uStack_268 + 1;
                                                                    iStack_298 = *(&stack0x00000000 + -0x230);
                                                                    uVar28 = *(&stack0x00000000 + -0x228) - iStack_298
                                                                             >> 5;
                                                                } while (uStack_268 < uVar28);
                                                            }
                                                            if (uVar28 != 0) {
                                                                iVar24 = 0;
                                                                do {
                                                                    pfVar33 = *(&stack0x00000000 + -0x230) + iVar24;
                                                                    if (*(pfVar33 + 0x19) == '\0') {
                                                                        *(*0x8 + -0xe8) = -*(pfVar33 + 2);
                                                                        fVar47 = pfVar33[1];
                                                                        *(*0x8 + -0xf0) = fVar47 + *pfVar33;
                                                                        *(*0x8 + -0xec) = -fVar47;
                                                                        uStack_d8 = *(pfVar33 + 6) == '\0';
                                                                        uVar21 = NEON_rev64(CONCAT44((uVar25 >> 0x20) -
                                                                                                     (*(pfVar33 + 4) >>
                                                                                                     0x20), uVar25 - *(
                                                            pfVar33 + 4)), 4);
                                                            *(&stack0x00000000 + -0xe0) = uVar21;
                                                            uStack_d7 = 0;
                                                            uStack_d6._1_1_ = 0;
                                                            void std::__1::vector<GeoCodecsTrafficSkeletonRecord, geo::StdAllocator<GeoCodecsTrafficSkeletonRecord, geo::codec::Allocator> >::emplace_back<GeoCodecsTrafficSkeletonRecord&>(GeoCodecsTrafficSkeletonRecord&)
                                                                      (puStack_260, *0x8 + -0xf0);
                                                            }
                                                            iVar24 = iVar24 + 0x20;
                                                            uVar28 = uVar28 + -1;
                                                            } while (uVar28 != 0);
                                                            }
                                                            void std::__1::vector<GeoCodecsTrafficSkeleton, geo::StdAllocator<GeoCodecsTrafficSkeleton, geo::codec::Allocator> >::emplace_back<GeoCodecsTrafficSkeleton&>(GeoCodecsTrafficSkeleton&)
                                                                      (aiStack_2c8[2], *0x8 + -0x238);
                                                            GeoCodecsTrafficSkeleton::~GeoCodecsTrafficSkeleton()
                                                                      (*0x8 + -0x238);
                                                            uStack_2a0 = uStack_2a0 + 1;
                                                            uVar21 = 1;
                                                        } while (uStack_2a0 < *(*0x8 + -0x118));
                                                    }
                                                    std::__1::vector<bool, geo::StdAllocator<bool, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                              (*0x8 + -0x210);
                                                    std::__1::vector<unsigned int, geo::StdAllocator<unsigned int, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                              (*0x8 + -0x1f0);
                                                    std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                              (*0x8 + -0x1d0);
                                                }
                                                std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                          (*0x8 + -0x1b0);
                                                std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                          (*0x8 + -400);
                                                std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                          (*0x8 + -0x170);
                                                std::__1::vector<long long, geo::StdAllocator<long long, geo::codec::Allocator> >::~vector[abi:v160006]()
                                                          (*0x8 + -0x150);
                                                if (false) {
                                                    iVar38 = *(*0x8 + -0x110);
                                                    iVar37 = *(*0x8 + -0x108);
                                                    iVar24 = std::__1::chrono::steady_clock::now()();
                                                    iVar36 = *(*0x8 + -0xf8);
                                                    iStack_238 = iVar38;
                                                    if (iVar38 == 0) goto code_r0x00019391b840;
                                                    goto code_r0x00019391b7d8;
                                                }
                                                goto code_r0x00019391b758;
                                            }
                                            uVar21 = **reloc.__stderrp;
                                            uVar25 = 0x2866;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
code_r0x00019391b73c:
                *(*0x8 + -0x2c8) = uVar25;
                fprintf(uVar21, 0x8ff + 0x193b8a000);
            }
            uVar21 = 0;
        }
        else {
            uVar21 = 1;
        }
code_r0x00019391b758:
        if (param_1 != NULL) {
            if (*pcVar35 != '\0') {
                piVar22 = geo::codec::Allocator::instance()();
                (**(*piVar22 + 0x28))(piVar22, *(pcVar35 + 0x28), 0);
            }
            piVar22 = geo::codec::Allocator::instance()();
            (**(*piVar22 + 0x28))(piVar22, pcVar35, 0);
        }
        iVar38 = *(*0x8 + -0x110);
        iVar37 = *(*0x8 + -0x108);
        iVar24 = std::__1::chrono::steady_clock::now()();
        iVar36 = *(*0x8 + -0xf8);
        iStack_238 = iVar38;
        if (iVar38 == 0) goto code_r0x00019391b840;
    }
code_r0x00019391b7d8:
    *(*0x8 + -0xf0) = *0x8 + -0x238;
    iVar37 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                       (iVar37 + 0x778, *0x8 + -0x238, 0x74c + 0x193af9000, *0x8 + -0xf0, *0x8 + -0x150);
    iVar24 = SUB168(SEXT816(iVar24 - iVar36) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
    *(iVar37 + 0x20) = ((iVar24 >> 7) - (iVar24 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
code_r0x00019391b840:
    piVar22 = *(*0x8 + -0x100);
    if (piVar22 != NULL) {
        LOAcquire();
        tmp_ldXn = piVar22[1];
        iVar24 = tmp_ldXn;
        tmp_stXn = iVar24 + -1;
        iVar24 = tmp_stXn;
        piVar22[1] = iVar24;
        iVar24 = tmp_ldXn;
        LORelease();
        if (iVar24 == 0) {
            (**(*piVar22 + 0x10))(piVar22);
            std::__1::__shared_weak_count::__release_weak()(piVar22);
        }
    }
    if (**reloc.__stack_chk_guard == iStack_b8) {
        return uVar21;
    }
    // WARNING: Subroutine does not return
    __stack_chk_fail();
}
