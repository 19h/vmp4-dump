
void geo::codec::initWithVMP4AndLocData(unsigned char*, unsigned long, unsigned char const*, unsigned long, GeoCodecsTileKey const*, geo::codec::PBDataReaderInterface&, GeoCodecsVMP4DecodingOptions const&)
               (ulong param_1, code *param_2, uchar *param_3, int64_t param_4, ulong *param_5, ulong param_6, 
               int64_t param_7)

{
    ulong *puVar1;
    uint uVar2;
    bool bVar3;
    int32_t iVar4;
    ulong uVar5;
    int64_t *piVar6;
    code **ppcVar7;
    code *UNRECOVERED_JUMPTABLE;
    int64_t iVar8;
    code ***in_x8;
    uint64_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t iVar13;
    uchar *puVar14;
    int64_t *piVar15;
    uchar *puVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    int64_t *piVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int32_t iVar23;
    char *pcVar24;
    int64_t *piVar25;
    int64_t iVar26;
    int64_t iVar27;
    int64_t iVar28;
    int64_t iVar29;
    int64_t iVar30;
    int64_t iStack_168;
    code **appcStack_160 [2];
    int64_t aiStack_150 [2];
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    int64_t *apiStack_120 [13];
    ulong uStack_b8;
    ulong uStack_b0;
    char acStack_9a [2];
    int64_t iStack_98;
    code **ppcStack_90;
    code **ppcStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar auStack_70 [16];
    
    if (*(param_7 + 0x18) <= param_2 + param_4 && param_2 + param_4 != *(param_7 + 0x18)) {
        uVar5 = **reloc.__stderrp;
        if (param_5 == NULL) {
            iVar8 = 0x782 + 0x193b8a000;
        }
        else {
            iVar8 = 0x861 + 0x193b8a000;
        }
code_r0x0001938ef45c:
        fprintf(uVar5, iVar8);
        *in_x8 = NULL;
        in_x8[1] = NULL;
        return;
    }
    if ((param_2 < 0x4) || (iVar4 = strncmp(param_1, 0x8a6 + 0x193b8a000, 4),  iVar4 != 0)) {
        uVar5 = **reloc.__stderrp;
        iVar8 = 0x8ab + 0x193b8a000;
        goto code_r0x0001938ef45c;
    }
    iStack_168 = param_7;
    piVar6 = geo::codec::Allocator::instance()();
    ppcVar7 = (**(*piVar6 + 0x10))(piVar6, 0xcb0, 8);
    *ppcVar7 = typeinfo for geo::Allocator + 0x48 + 0x10;
    ppcVar7[1] = NULL;
    ppcVar7[2] = NULL;
    ppcVar7[3] = piVar6;
    bzero(ppcVar7 + 4, 0xc90);
    *(ppcVar7 + 4) = 0xffffffff;
    ppcVar7[7] = NULL;
    ppcVar7[6] = NULL;
    ppcVar7[9] = NULL;
    ppcVar7[8] = NULL;
    ppcVar7[10] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xb] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0xc] = NULL;
    ppcVar7[0xd] = NULL;
    ppcVar7[0xe] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xf] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x10] = NULL;
    ppcVar7[0x11] = NULL;
    ppcVar7[0x12] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x13] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x15] = NULL;
    ppcVar7[0x14] = NULL;
    ppcVar7[0x17] = NULL;
    ppcVar7[0x16] = NULL;
    ppcVar7[0x19] = NULL;
    ppcVar7[0x18] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x1a] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x1b] = NULL;
    ppcVar7[0x1c] = NULL;
    ppcVar7[0x1d] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x1e] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x1f] = NULL;
    ppcVar7[0x20] = NULL;
    ppcVar7[0x21] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x22] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x29] = NULL;
    *(ppcVar7 + 0x120) = 0;
    *(ppcVar7 + 0x118) = 0;
    *(ppcVar7 + 0x130) = 0;
    *(ppcVar7 + 0x128) = 0;
    *(ppcVar7 + 0x140) = 0;
    *(ppcVar7 + 0x138) = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x2a] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x2b] = NULL;
    ppcVar7[0x2c] = NULL;
    ppcVar7[0x2d] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x2e] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x2f] = NULL;
    ppcVar7[0x30] = NULL;
    ppcVar7[0x31] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x32] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x33] = NULL;
    ppcVar7[0x34] = NULL;
    ppcVar7[0x35] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x36] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x37] = NULL;
    ppcVar7[0x38] = NULL;
    ppcVar7[0x39] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x3a] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x3b] = NULL;
    ppcVar7[0x3c] = NULL;
    ppcVar7[0x3d] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x3e] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x3f] = NULL;
    ppcVar7[0x41] = NULL;
    ppcVar7[0x40] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x42] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x43] = NULL;
    ppcVar7[0x45] = NULL;
    ppcVar7[0x44] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x46] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x47] = NULL;
    ppcVar7[0x49] = NULL;
    ppcVar7[0x48] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x4a] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x4b] = NULL;
    ppcVar7[0x4d] = NULL;
    ppcVar7[0x4c] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x4e] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x4f] = NULL;
    *(ppcVar7 + 0x50) = 0;
    *(ppcVar7 + 0x290) = 0;
    *(ppcVar7 + 0x288) = 0;
    *(ppcVar7 + 0x2a0) = 0;
    *(ppcVar7 + 0x298) = 0;
    *(ppcVar7 + 0x55) = 0x3f800000;
    ppcVar7[0x57] = NULL;
    ppcVar7[0x56] = NULL;
    *(ppcVar7 + 0x58) = 0;
    ppcVar7[0x59] = NULL;
    ppcVar7[0x5b] = NULL;
    ppcVar7[0x5a] = NULL;
    ppcVar7[0x71] = NULL;
    *(ppcVar7 + 0x2f0) = 0;
    *(ppcVar7 + 0x2e8) = 0;
    *(ppcVar7 + 0x300) = 0;
    *(ppcVar7 + 0x2f8) = 0;
    *(ppcVar7 + 0x310) = 0;
    *(ppcVar7 + 0x308) = 0;
    *(ppcVar7 + 800) = 0;
    *(ppcVar7 + 0x318) = 0;
    *(ppcVar7 + 0x330) = 0;
    *(ppcVar7 + 0x328) = 0;
    *(ppcVar7 + 0x340) = 0;
    *(ppcVar7 + 0x338) = 0;
    *(ppcVar7 + 0x350) = 0;
    *(ppcVar7 + 0x348) = 0;
    *(ppcVar7 + 0x360) = 0;
    *(ppcVar7 + 0x358) = 0;
    *(ppcVar7 + 0x370) = 0;
    *(ppcVar7 + 0x368) = 0;
    *(ppcVar7 + 0x380) = 0;
    *(ppcVar7 + 0x378) = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x72] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x77] = NULL;
    *(ppcVar7 + 0x3a0) = 0;
    *(ppcVar7 + 0x398) = 0;
    *(ppcVar7 + 0x3b0) = 0;
    *(ppcVar7 + 0x3a8) = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x78] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x79] = NULL;
    ppcVar7[0x7b] = NULL;
    ppcVar7[0x7a] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x7c] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x85] = NULL;
    *(ppcVar7 + 0x3f0) = 0;
    *(ppcVar7 + 1000) = 0;
    *(ppcVar7 + 0x400) = 0;
    *(ppcVar7 + 0x3f8) = 0;
    *(ppcVar7 + 0x410) = 0;
    *(ppcVar7 + 0x408) = 0;
    *(ppcVar7 + 0x420) = 0;
    *(ppcVar7 + 0x418) = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x86] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x8d] = NULL;
    *(ppcVar7 + 0x440) = 0;
    *(ppcVar7 + 0x438) = 0;
    *(ppcVar7 + 0x450) = 0;
    *(ppcVar7 + 0x448) = 0;
    *(ppcVar7 + 0x460) = 0;
    *(ppcVar7 + 0x458) = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x8e] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x90] = NULL;
    ppcVar7[0x92] = NULL;
    ppcVar7[0x91] = NULL;
    ppcVar7[0x8f] = ppcVar7 + 0x480;
    ppcVar7[0x94] = NULL;
    ppcVar7[0x93] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x95] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x96] = NULL;
    ppcVar7[0x98] = NULL;
    ppcVar7[0x97] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x99] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x9b] = NULL;
    ppcVar7[0x9a] = NULL;
    ppcVar7[0x9d] = NULL;
    ppcVar7[0x9c] = NULL;
    ppcVar7[0x9f] = NULL;
    ppcVar7[0x9e] = NULL;
    ppcVar7[0xa1] = NULL;
    ppcVar7[0xa0] = NULL;
    ppcVar7[0xa3] = NULL;
    ppcVar7[0xa2] = NULL;
    ppcVar7[0xa5] = NULL;
    ppcVar7[0xa4] = NULL;
    ppcVar7[0xa6] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xa7] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0xa8] = NULL;
    ppcVar7[0xaa] = NULL;
    ppcVar7[0xa9] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xab] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0xac] = NULL;
    ppcVar7[0xae] = NULL;
    ppcVar7[0xad] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xaf] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0xb1] = NULL;
    ppcVar7[0xb0] = NULL;
    ppcVar7[0xb3] = NULL;
    ppcVar7[0xb2] = NULL;
    ppcVar7[0xb5] = NULL;
    ppcVar7[0xb4] = NULL;
    ppcVar7[0xb6] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xb7] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0xb9] = NULL;
    ppcVar7[0xb8] = NULL;
    ppcVar7[0xbb] = NULL;
    ppcVar7[0xba] = NULL;
    ppcVar7[0xbd] = NULL;
    ppcVar7[0xbc] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xbe] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0xc9] = NULL;
    *(ppcVar7 + 0x600) = 0;
    *(ppcVar7 + 0x5f8) = 0;
    *(ppcVar7 + 0x610) = 0;
    *(ppcVar7 + 0x608) = 0;
    *(ppcVar7 + 0x620) = 0;
    *(ppcVar7 + 0x618) = 0;
    *(ppcVar7 + 0x630) = 0;
    *(ppcVar7 + 0x628) = 0;
    *(ppcVar7 + 0x640) = 0;
    *(ppcVar7 + 0x638) = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xca] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0xdb] = NULL;
    ppcVar7[0xdd] = NULL;
    ppcVar7[0xdc] = NULL;
    *(ppcVar7 + 0x660) = 0;
    *(ppcVar7 + 0x658) = 0;
    *(ppcVar7 + 0x670) = 0;
    *(ppcVar7 + 0x668) = 0;
    *(ppcVar7 + 0x680) = 0;
    *(ppcVar7 + 0x678) = 0;
    *(ppcVar7 + 0x690) = 0;
    *(ppcVar7 + 0x688) = 0;
    *(ppcVar7 + 0x6a0) = 0;
    *(ppcVar7 + 0x698) = 0;
    *(ppcVar7 + 0x6b0) = 0;
    *(ppcVar7 + 0x6a8) = 0;
    *(ppcVar7 + 0x6c0) = 0;
    *(ppcVar7 + 0x6b8) = 0;
    *(ppcVar7 + 0x18 + 0x6b1) = 0;
    *(ppcVar7 + 0x18 + 0x6a9) = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xde] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0xe8] = NULL;
    *(ppcVar7 + 0xe9) = 0;
    ppcVar7[0xea] = NULL;
    *(ppcVar7 + 0xeb) = 0;
    ppcVar7[0xec] = NULL;
    *(ppcVar7 + 0xed) = 0;
    ppcVar7[0xee] = NULL;
    *(ppcVar7 + 0xef) = 0;
    *(ppcVar7 + 0xe7) = 0;
    *(ppcVar7 + 0x700) = 0;
    *(ppcVar7 + 0x6f8) = 0;
    *(ppcVar7 + 0x710) = 0;
    *(ppcVar7 + 0x708) = 0;
    *(ppcVar7 + 0x720) = 0;
    *(ppcVar7 + 0x718) = 0;
    *(ppcVar7 + 0x730) = 0;
    *(ppcVar7 + 0x728) = 0;
    ppcVar7[0xf1] = NULL;
    ppcVar7[0xf0] = NULL;
    ppcVar7[0xf3] = NULL;
    ppcVar7[0xf2] = NULL;
    ppcVar7[0xf5] = NULL;
    ppcVar7[0xf4] = NULL;
    ppcVar7[0xf6] = NULL;
    *(ppcVar7 + 0xf7) = 0x3f800000;
    *(ppcVar7 + 0xf8) = 0;
    *(ppcVar7 + 0x7c4) = 0;
    *(ppcVar7 + 0xf9) = 0;
    ppcVar7[0xfc] = NULL;
    ppcVar7[0xfb] = NULL;
    ppcVar7[0xfa] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0xfd] = UNRECOVERED_JUMPTABLE;
    *(ppcVar7 + 0xfe) = 0;
    ppcVar7[0xff] = NULL;
    *(ppcVar7 + 0x100) = 0;
    ppcVar7[0x101] = NULL;
    *(ppcVar7 + 0x102) = 0;
    ppcVar7[0x103] = NULL;
    *(ppcVar7 + 0x104) = 0;
    ppcVar7[0x107] = NULL;
    ppcVar7[0x106] = NULL;
    ppcVar7[0x109] = NULL;
    ppcVar7[0x108] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x10a] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x10b] = NULL;
    ppcVar7[0x10d] = NULL;
    ppcVar7[0x10c] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x10e] = UNRECOVERED_JUMPTABLE;
    *(ppcVar7 + 0x10f) = 0;
    ppcVar7[0x110] = NULL;
    *(ppcVar7 + 0x111) = 0;
    ppcVar7[0x112] = NULL;
    *(ppcVar7 + 0x113) = 0;
    ppcVar7[0x114] = NULL;
    *(ppcVar7 + 0x115) = 0;
    ppcVar7[0x117] = NULL;
    ppcVar7[0x116] = NULL;
    ppcVar7[0x119] = NULL;
    ppcVar7[0x118] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x11a] = UNRECOVERED_JUMPTABLE;
    *(ppcVar7 + 0x8e0) = 0;
    *(ppcVar7 + 0x8d8) = 0;
    *(ppcVar7 + 0x8f0) = 0;
    *(ppcVar7 + 0x8e8) = 0;
    *(ppcVar7 + 0x900) = 0;
    *(ppcVar7 + 0x8f8) = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x121] = UNRECOVERED_JUMPTABLE;
    *(ppcVar7 + 0x122) = 0;
    ppcVar7[0x123] = NULL;
    *(ppcVar7 + 0x124) = 0;
    *(ppcVar7 + 0x930) = 0;
    *(ppcVar7 + 0x928) = 0;
    *(ppcVar7 + 0x940) = 0;
    *(ppcVar7 + 0x938) = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x129] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x12a] = NULL;
    ppcVar7[300] = NULL;
    ppcVar7[299] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x12d] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x12f] = NULL;
    ppcVar7[0x12e] = NULL;
    ppcVar7[0x131] = NULL;
    ppcVar7[0x130] = NULL;
    *(ppcVar7 + 0x132) = 0x3f800000;
    ppcVar7[0x133] = NULL;
    ppcVar7[0x135] = NULL;
    ppcVar7[0x134] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x136] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x137] = NULL;
    ppcVar7[0x139] = NULL;
    ppcVar7[0x138] = NULL;
    UNRECOVERED_JUMPTABLE = *0x193ae20b0;
    ppcVar7[0x13b] = *0x193ae20b8;
    ppcVar7[0x13a] = UNRECOVERED_JUMPTABLE;
    *(ppcVar7 + 0x13c) = 0;
    ppcVar7[0x13d] = NULL;
    ppcVar7[0x13f] = NULL;
    ppcVar7[0x13e] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x140] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x141] = NULL;
    ppcVar7[0x143] = NULL;
    ppcVar7[0x142] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x144] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x145] = NULL;
    ppcVar7[0x147] = NULL;
    ppcVar7[0x146] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x148] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x149] = NULL;
    ppcVar7[0x14b] = NULL;
    ppcVar7[0x14a] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x14c] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x14d] = NULL;
    ppcVar7[0x14f] = NULL;
    ppcVar7[0x14e] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x150] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x151] = NULL;
    ppcVar7[0x153] = NULL;
    ppcVar7[0x152] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x154] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x155] = NULL;
    ppcVar7[0x157] = NULL;
    ppcVar7[0x156] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x158] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x159] = 0xaba7 | 0x32aa0000;
    ppcVar7[0x168] = NULL;
    *(ppcVar7 + 0x169) = 0;
    puVar1 = ppcVar7 + 0xb5c;
    ppcVar7[0x15b] = NULL;
    ppcVar7[0x15a] = NULL;
    ppcVar7[0x15d] = NULL;
    ppcVar7[0x15c] = NULL;
    ppcVar7[0x15f] = NULL;
    ppcVar7[0x15e] = NULL;
    ppcVar7[0x161] = NULL;
    ppcVar7[0x160] = NULL;
    *(ppcVar7 + 0x162) = 0;
    *(ppcVar7 + 0x167) = 0;
    *(ppcVar7 + 0xb20) = 0;
    *(ppcVar7 + 0xb18) = 0;
    *(ppcVar7 + 0xb30) = 0;
    *(ppcVar7 + 0xb28) = 0;
    *(ppcVar7 + 0xb4c) = 0;
    *(ppcVar7 + 0xb4c + 6) = 0;
    *(ppcVar7 + 0xb7c) = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x170] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x171] = NULL;
    ppcVar7[0x173] = NULL;
    ppcVar7[0x172] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x174] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x175] = NULL;
    *(ppcVar7 + 0x176) = 0;
    *(ppcVar7 + 0x177) = 0;
    *(ppcVar7 + 0xbbc) = 0;
    *(ppcVar7 + 0x179) = 6;
    ppcVar7[0x17a] = NULL;
    ppcVar7[0x17c] = NULL;
    ppcVar7[0x17b] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x17d] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x17e] = NULL;
    *(ppcVar7 + 0x17f) = 0;
    ppcVar7[0x180] = NULL;
    ppcVar7[0x182] = NULL;
    ppcVar7[0x181] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x183] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x184] = NULL;
    *(ppcVar7 + 0x185) = 0;
    ppcVar7[0x186] = NULL;
    *(ppcVar7 + 0x187) = 0;
    ppcVar7[0x188] = NULL;
    ppcVar7[0x18a] = NULL;
    ppcVar7[0x189] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x18b] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x18d] = NULL;
    ppcVar7[0x18c] = NULL;
    ppcVar7[399] = NULL;
    ppcVar7[0x18e] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[400] = UNRECOVERED_JUMPTABLE;
    ppcVar7[0x192] = NULL;
    ppcVar7[0x194] = NULL;
    ppcVar7[0x193] = NULL;
    UNRECOVERED_JUMPTABLE = geo::codec::Allocator::instance()();
    ppcVar7[0x195] = UNRECOVERED_JUMPTABLE;
    appcStack_160[0] = ppcVar7 + 4;
    appcStack_160[1] = ppcVar7;
    iVar8 = std::__1::chrono::steady_clock::now()();
    uVar2 = *(param_5 + 7);
    *(ppcVar7 + 0x24) = *param_5;
    *(ppcVar7 + 0x2b) = uVar2;
    if (param_4 == 0) {
        std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::operator=(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)
                  (ppcVar7 + 0x18 + 0x3d0, param_7);
        std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::operator=(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)
                  (appcStack_160[0] + 0x7c, param_7);
code_r0x0001938efec0:
        uVar9 = geo::codec::initTile(VMP4Tile*, unsigned char*, unsigned long)(aiStack_150, param_1, param_2);
        if ((uVar9 & 1) != 0) {
            appcStack_160[0][0xed] = param_2;
            if (aiStack_150[1] != 0) {
                uVar9 = 0;
                do {
                    if (*(aiStack_150[0] + uVar9 * 0x10) == 1) {
                        pcVar24 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)
                                            (aiStack_150, uVar9, 1, appcStack_160[0] + 0xef);
                        goto code_r0x0001938eff54;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 <= aiStack_150[1] && aiStack_150[1] != uVar9);
            }
            pcVar24 = NULL;
code_r0x0001938eff54:
            iStack_98 = 0xd8 + 0x193b8a000;
            ppcStack_90 = appcStack_160[0];
            ppcStack_88 = appcStack_160[1];
            if (appcStack_160[1] != NULL) {
                tmp_ldXn = appcStack_160[1][1];
                iVar11 = tmp_ldXn;
                tmp_stXn = iVar11 + 1;
                UNRECOVERED_JUMPTABLE = tmp_stXn;
                appcStack_160[1][1] = UNRECOVERED_JUMPTABLE;
                uVar5 = tmp_ldXn;
            }
            iStack_80 = std::__1::chrono::steady_clock::now()();
            if (pcVar24 == NULL) {
                fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                bVar3 = false;
            }
            else {
                uVar9 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)(pcVar24, pcVar24 + 0x40);
                if ((uVar9 & 1) == 0) {
                    uVar5 = **reloc.__stderrp;
                    goto code_r0x0001938f002c;
                }
                uStack_140 = CONCAT44(*(pcVar24 + 0x40), uStack_140);
                uVar9 = *(pcVar24 + 0x30);
                iVar11 = *(pcVar24 + 0x38) - uVar9;
                if (*(pcVar24 + 0x38) < uVar9) {
code_r0x0001938f0020:
                    uVar5 = **reloc.__stderrp;
code_r0x0001938f002c:
                    fprintf(uVar5, 0x8ff + 0x193b8a000);
                    bVar3 = false;
                    if (*pcVar24 != '\0') {
code_r0x0001938f0050:
                        piVar6 = geo::codec::Allocator::instance()();
                        (**(*piVar6 + 0x28))(piVar6, *(pcVar24 + 0x28), 0);
                    }
                }
                else {
                    piVar6 = pcVar24 + 8;
                    *piVar6 = *(pcVar24 + 0x28) + uVar9;
                    pcVar24[0x20] = '\x01';
                    *(pcVar24 + 0x10) = iVar11;
                    *(pcVar24 + 0x18) = 0;
                    uVar9 = iVar11 * 8;
                    if (uVar9 < 0x1a) goto code_r0x0001938f0020;
                    uVar21 = 0;
                    uVar19 = 0x1a;
                    do {
                        uVar18 = 8 - (uVar21 & 7);
                        uVar17 = uVar19;
                        if (uVar18 <= uVar19) {
                            uVar17 = uVar18;
                        }
                        uVar21 = uVar17 + uVar21;
                        uVar19 = uVar19 - uVar17;
                    } while (uVar19 != 0);
                    *(pcVar24 + 0x18) = uVar21;
                    if (uVar9 <= uVar21 + 0x1a && uVar21 + 0x1a != uVar9) {
                        uVar5 = **reloc.__stderrp;
                        goto code_r0x0001938f002c;
                    }
                    uVar19 = 0x1a;
                    do {
                        uVar18 = 8 - (uVar21 & 7);
                        uVar17 = uVar19;
                        if (uVar18 <= uVar19) {
                            uVar17 = uVar18;
                        }
                        uVar21 = uVar17 + uVar21;
                        uVar19 = uVar19 - uVar17;
                    } while (uVar19 != 0);
                    *(pcVar24 + 0x18) = uVar21;
                    if (uVar9 <= uVar21 + 8 && uVar21 + 8 != uVar9) {
                        uVar5 = **reloc.__stderrp;
                        goto code_r0x0001938f002c;
                    }
                    uVar9 = 8;
                    do {
                        uVar17 = 8 - (uVar21 & 7);
                        uVar19 = uVar9;
                        if (uVar17 <= uVar9) {
                            uVar19 = uVar17;
                        }
                        uVar17 = uVar21;
                        uVar21 = uVar19 + uVar17;
                        uVar9 = uVar9 - uVar19;
                    } while (uVar9 != 0);
                    *(pcVar24 + 0x18) = uVar19 + uVar17;
                    acStack_9a[1] = '\0';
                    uVar9 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar6, *0x8 + -0x99);
                    if ((uVar9 & 1) == 0) {
                        uVar5 = **reloc.__stderrp;
                        goto code_r0x0001938f002c;
                    }
                    if (acStack_9a[1] != '\0') {
                        apiStack_120[0] = (apiStack_120[0] >> 0x20) << 0x20;
                        uVar9 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)(piVar6, apiStack_120, 5);
                        if ((uVar9 & 1) == 0) {
                            uVar5 = **reloc.__stderrp;
                        }
                        else {
                            uVar9 = BitstreamUnpack(Bitstream*, unsigned int*, unsigned long)
                                              (piVar6, *0x8 + -0x78, apiStack_120[0] + 1);
                            if ((uVar9 & 1) != 0) {
                                iVar4 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar6, *0x8 + -0x70);
                                if (iVar4 != 0) goto code_r0x0001938f0614;
                                fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
code_r0x0001938f076c:
                                bVar3 = false;
                                goto code_r0x0001938f0770;
                            }
                            uVar5 = **reloc.__stderrp;
                        }
                        goto code_r0x0001938f002c;
                    }
code_r0x0001938f0614:
                    acStack_9a[0] = '\0';
                    uVar9 = BitstreamUnpackFlag(Bitstream*, bool*)(piVar6, *0x8 + -0x9a);
                    if ((uVar9 & 1) == 0) {
                        uVar5 = **reloc.__stderrp;
                        goto code_r0x0001938f002c;
                    }
                    if (acStack_9a[0] != '\0') {
                        apiStack_120[0] = NULL;
                        apiStack_120[1] = NULL;
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        uVar9 = bool geo::codec::decodeAttributeSet<GeoCodecsFeature>(signed char, Bitstream*, unsigned int, FeatureStyleAttributesSet*, GeoCodecsFeature*, unsigned long)
                                          (0xffffffff, piVar6, 1, appcStack_160[0] + 0x8b, apiStack_120, 0);
                        if ((uVar9 & 1) == 0) {
                            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                            GeoCodecsFeature::~GeoCodecsFeature()(apiStack_120);
                            goto code_r0x0001938f076c;
                        }
                        std::__1::shared_ptr<FeatureStyleAttributes>::operator=[abi:v160006](std::__1::shared_ptr<FeatureStyleAttributes> const&)
                                  (appcStack_160[0] + 2, uStack_b8, uStack_b0);
                        GeoCodecsFeature::~GeoCodecsFeature()(apiStack_120);
                    }
                    iVar11 = *(pcVar24 + 0x30) + (*(pcVar24 + 0x18) >> 3);
                    if ((*(pcVar24 + 0x18) & 7) != 0) {
                        iVar11 = iVar11 + 1;
                    }
                    *(pcVar24 + 0x30) = iVar11;
                    pcVar24[0x20] = '\0';
                    bVar3 = true;
code_r0x0001938f0770:
                    param_7 = iStack_168;
                    if (*pcVar24 != '\0') goto code_r0x0001938f0050;
                }
                piVar6 = geo::codec::Allocator::instance()();
                (**(*piVar6 + 0x28))(piVar6, pcVar24, 0);
            }
            ppcVar7 = ppcStack_90;
            iVar11 = iStack_98;
            iVar13 = std::__1::chrono::steady_clock::now()();
            iVar22 = iStack_80;
            iStack_78 = iVar11;
            if (iVar11 != 0) {
                apiStack_120[0] = *0x8 + -0x78;
                iVar11 = std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<char const*, DebugChapterInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::__unordered_map_hasher<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::hash<char const*>, std::__1::equal_to<char const*>, true>, std::__1::__unordered_map_equal<char const*, std::__1::__hash_value_type<char const*, DebugChapterInfo>, std::__1::equal_to<char const*>, std::__1::hash<char const*>, true>, std::__1::allocator<std::__1::__hash_value_type<char const*, DebugChapterInfo> > >::__emplace_unique_key_args<char const*, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>, std::__1::tuple<> >(char const* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<char const* const&>&&, std::__1::tuple<>&&)
                                   (ppcVar7 + 0xef, *0x8 + -0x78, 0x74c + 0x193af9000, apiStack_120, *0x8 + -0x70);
                iVar13 = SUB168(SEXT816(iVar13 - iVar22) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
                *(iVar11 + 0x20) = ((iVar13 >> 7) - (iVar13 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
            }
            ppcVar7 = ppcStack_88;
            if (ppcVar7 != NULL) {
                LOAcquire();
                tmp_ldXn = ppcStack_88[1];
                iVar11 = tmp_ldXn;
                tmp_stXn = iVar11 + -1;
                UNRECOVERED_JUMPTABLE = tmp_stXn;
                ppcStack_88[1] = UNRECOVERED_JUMPTABLE;
                iVar11 = tmp_ldXn;
                LORelease();
                if (iVar11 == 0) {
                    (**(*ppcVar7 + 0x10))(ppcVar7);
                    std::__1::__shared_weak_count::__release_weak()(ppcVar7);
                }
            }
            if (((((((!bVar3) ||
                    (iVar4 = geo::codec::_readLabels(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                       (aiStack_150, appcStack_160),  iVar4 == 0)) ||
                   (iVar4 = geo::codec::_readPois(VMP4Tile*, GeoCodecsVMP4DecodingOptions const&, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, param_7, appcStack_160),  iVar4 == 0)) ||
                  ((iVar4 = geo::codec::_readPoisAddendum(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, appcStack_160),  iVar4 == 0 ||
                   (iVar4 = geo::codec::_readLines(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, appcStack_160),  iVar4 == 0)))) ||
                 ((((iVar4 = geo::codec::_readPolygons(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                       (aiStack_150, appcStack_160),  iVar4 == 0 ||
                    ((iVar4 = geo::codec::_readVenues(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, param_5, appcStack_160),  iVar4 == 0 ||
                     (iVar4 = geo::codec::_readCoastlines(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, appcStack_160),  iVar4 == 0)))) ||
                   (iVar4 = geo::codec::_readChapter3DBuildings(VMP4Tile*, unsigned short, std::__1::vector<GeoCodecs3DBuildingFeature, geo::StdAllocator<GeoCodecs3DBuildingFeature, geo::codec::Allocator> >&, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, 0x27, appcStack_160[0] + 0x37, appcStack_160),  iVar4 == 0)) ||
                  (((iVar4 = geo::codec::_readChapter3DBuildings(VMP4Tile*, unsigned short, std::__1::vector<GeoCodecs3DBuildingFeature, geo::StdAllocator<GeoCodecs3DBuildingFeature, geo::codec::Allocator> >&, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                       (aiStack_150, 0x8c, appcStack_160[0] + 0x3b, appcStack_160),  iVar4 == 0 ||
                    (iVar4 = geo::codec::_readModernBuildings(VMP4Tile*, unsigned short, GeoCodecsVertexPool**, std::__1::vector<GeoCodecsBuildingFootprintFeature, geo::StdAllocator<GeoCodecsBuildingFootprintFeature, geo::codec::Allocator> >&, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                       (aiStack_150, 0x8b, appcStack_160[0] + 0x67, appcStack_160[0] + 0x2f, 
                                        appcStack_160),  iVar4 == 0)) ||
                   (iVar4 = geo::codec::_readModernBuildings(VMP4Tile*, unsigned short, GeoCodecsVertexPool**, std::__1::vector<GeoCodecsBuildingFootprintFeature, geo::StdAllocator<GeoCodecsBuildingFootprintFeature, geo::codec::Allocator> >&, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, 0x60, appcStack_160[0] + 0x68, appcStack_160[0] + 0x33, 
                                       appcStack_160),  iVar4 == 0)))))) ||
                (((iVar4 = geo::codec::_readTileReferences(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                     (aiStack_150, param_5, appcStack_160),  iVar4 == 0 ||
                  (iVar4 = geo::codec::_readLinesExtendedChapter(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                     (aiStack_150, appcStack_160),  iVar4 == 0)) ||
                 ((iVar4 = geo::codec::_readTransitNetwork(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                     (aiStack_150, param_5, appcStack_160),  iVar4 == 0 ||
                  ((iVar4 = geo::codec::_readTransitSystems(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, appcStack_160),  iVar4 == 0 ||
                   (iVar4 = geo::codec::_populateTransitNodeStyleAttributes(std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (appcStack_160),  iVar4 == 0)))))))) ||
               (((((iVar4 = geo::codec::_readTransitMZROverride(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, appcStack_160),  iVar4 == 0 ||
                   ((((iVar4 = geo::codec::_readVenueMZROverride(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                         (aiStack_150, appcStack_160),  iVar4 == 0 ||
                      (iVar4 = geo::codec::_readPOIMzrOverrides(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                         (aiStack_150, appcStack_160),  iVar4 == 0)) ||
                     (iVar4 = geo::codec::_readCoverage(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, appcStack_160),  iVar4 == 0)) ||
                    ((iVar4 = geo::codec::_readLabelPlacementMetadata(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, appcStack_160),  iVar4 == 0 ||
                     (iVar4 = geo::codec::_readRoadNetwork(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, param_5, appcStack_160),  iVar4 == 0)))))) ||
                  (((iVar4 = geo::codec::_readStorefronts(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                       (aiStack_150, appcStack_160),  iVar4 == 0 ||
                    ((iVar4 = geo::codec::_readElevationRaster(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, appcStack_160),  iVar4 == 0 ||
                     (iVar4 = geo::codec::_readMaterialRasters(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, appcStack_160),  iVar4 == 0)))) ||
                   (iVar4 = geo::codec::_readStyleAttributeRasters(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&, bool)
                                      (aiStack_150, appcStack_160, *(appcStack_160[0] + 0x165) != 0),  iVar4 == 0)))) ||
                 ((((((iVar4 = geo::codec::_readDebugBlob(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                         (aiStack_150, appcStack_160),  iVar4 == 0 ||
                      (iVar4 = geo::codec::_readDaVinciBuildings(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                         (aiStack_150, appcStack_160),  iVar4 == 0)) ||
                     (iVar4 = geo::codec::_readDaVinciLandmarks(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, appcStack_160),  iVar4 == 0)) ||
                    ((iVar4 = geo::codec::_readDaVinciMetadata(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, appcStack_160),  iVar4 == 0 ||
                     (iVar4 = geo::codec::_readDaVinciTrafficSkeleton(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, param_5, appcStack_160),  iVar4 == 0)))) ||
                   (iVar4 = geo::codec::_readDaVinciTrafficSkeletonOld(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, param_5, appcStack_160),  iVar4 == 0)) ||
                  ((((iVar4 = geo::codec::_readLineAttributes(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, appcStack_160),  iVar4 == 0 ||
                     (iVar4 = geo::codec::_readLineAttributesOld(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, param_5, appcStack_160),  iVar4 == 0)) ||
                    ((iVar4 = geo::codec::_readAnnotationLabels(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                        (aiStack_150, appcStack_160),  iVar4 == 0 ||
                     (((iVar4 = geo::codec::_readDaVinciAssetMetadata(VMP4Tile*, GeoCodecsTileKey const*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                          (aiStack_150, appcStack_160),  iVar4 == 0 ||
                       (iVar4 = geo::codec::_readRunningTracks(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                          (aiStack_150, appcStack_160),  iVar4 == 0)) ||
                      (iVar4 = geo::codec::_readHillShadeRaster(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                         (aiStack_150, appcStack_160),  iVar4 == 0)))))) ||
                   ((iVar4 = geo::codec::_readContourLines(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&, GeoCodecsContourLineUnits)
                                       (aiStack_150, appcStack_160, 0),  iVar4 == 0 ||
                    (iVar4 = geo::codec::_readContourLines(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&, GeoCodecsContourLineUnits)
                                       (aiStack_150, appcStack_160, 1),  iVar4 == 0)))))))) ||
                ((iVar4 = geo::codec::_readLiveFeatures(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                    (aiStack_150, appcStack_160),  iVar4 == 0 ||
                 (((iVar4 = geo::codec::_readLiveFeaturesMetadatas(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, appcStack_160),  iVar4 == 0 ||
                   (iVar4 = geo::codec::_readRegionMetadata(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, appcStack_160),  iVar4 == 0)) ||
                  ((iVar4 = geo::codec::_readCompressedPolygons(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, appcStack_160),  iVar4 == 0 ||
                   (iVar4 = geo::codec::_readSupplementalFeatureIDs(VMP4Tile*, std::__1::shared_ptr<geo::codec::VectorTile> const&)
                                      (aiStack_150, appcStack_160),  iVar4 == 0)))))))))) {
                fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
                goto code_r0x0001938f08cc;
            }
            if (*(iStack_168 + 0x20) == '\0') {
                iVar4 = 1;
            }
            else {
                iVar4 = geo::codec::_postDecoding(std::__1::shared_ptr<geo::codec::VectorTile> const&)(appcStack_160);
            }
            geo::codec::VectorTile::buildingTileIntersectionInfo()(appcStack_160[0]);
            goto code_r0x0001938f08d0;
        }
        fprintf(**reloc.__stderrp, 0x924 + 0x193b8a000);
    }
    else {
        apiStack_120[0] = NULL;
        apiStack_120[1] = NULL;
        apiStack_120[2] = NULL;
        apiStack_120[3] = geo::codec::Allocator::instance()();
        piVar25 = apiStack_120[1];
        piVar6 = apiStack_120[0];
        if (param_4 + -1 < 0 == SBORROW8(param_4, 1)) {
            iVar11 = apiStack_120[2] - piVar25;
            if (iVar11 - param_4 < 0 == SBORROW8(iVar11, param_4)) {
                if (-1 < -param_4) {
                    puVar16 = param_3 + param_4;
                    apiStack_120[1] = piVar25;
                }
                else {
                    puVar16 = param_3;
                    apiStack_120[1] = piVar25;
                    iVar11 = param_4;
                    puVar14 = puVar16;
                    do {
                        if (apiStack_120[1] != NULL) {
                            *apiStack_120[1] = *puVar14;
                        }
                        puVar14 = puVar14 + 1;
                        apiStack_120[1] = apiStack_120[1] + 1;
                        iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                    if (-1 < 0) goto code_r0x0001938efe10;
                }
                piVar6 = apiStack_120[1] - param_4;
                if (piVar6 < piVar25) {
                    do {
                        if (apiStack_120[1] != NULL) {
                            *apiStack_120[1] = *piVar6;
                        }
                        piVar6 = piVar6 + 1;
                        apiStack_120[1] = apiStack_120[1] + 1;
                    } while (piVar6 < piVar25);
                }
                memmove(piVar25 + param_4, piVar25);
                memmove(piVar25, param_3, puVar16 - param_3);
            }
            else {
                puVar16 = apiStack_120[1] + (param_4 - apiStack_120[0]);
                if (puVar16 < 0) {
                    std::__1::vector<char, geo::StdAllocator<char, geo::codec::Allocator> >::__throw_length_error[abi:v160006]() const
                              (apiStack_120);
    // WARNING: Treating indirect jump as call
                    UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(1, 0x1938f07dc);
                    (*UNRECOVERED_JUMPTABLE)();
                    return;
                }
                uVar9 = apiStack_120[2] - apiStack_120[0];
                puVar14 = uVar9 * 2;
                if (puVar14 < puVar16 || puVar14 - puVar16 == 0) {
                    puVar14 = puVar16;
                }
                if (0x3ffffffffffffffe < uVar9) {
                    puVar14 = 0x7fffffffffffffff;
                }
                if (puVar14 == NULL) {
                    iVar11 = 0;
                }
                else {
                    iVar11 = (**(*apiStack_120[3] + 0x10))(apiStack_120[3], puVar14, 1);
                }
                piVar10 = piVar25 + (iVar11 - piVar6);
                piVar12 = piVar10 + param_4;
                iVar13 = param_4;
                piVar15 = piVar10;
                do {
                    if (piVar15 != NULL) {
                        *piVar15 = *param_3;
                    }
                    piVar15 = piVar15 + 1;
                    param_3 = param_3 + 1;
                    iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
                if (apiStack_120[0] != piVar25) {
                    uVar9 = piVar25 - apiStack_120[0];
                    piVar15 = piVar25;
                    if ((0x3f < uVar9) && (piVar15 = piVar25,  0x3f < piVar6 - iVar11)) {
                        uVar19 = uVar9 & 0xffffffffffffffc0;
                        piVar10 = piVar10 - uVar19;
                        piVar20 = piVar25 + -4;
                        piVar15 = piVar20 + (iVar11 - piVar6);
                        uVar21 = uVar19;
                        do {
                            iVar26 = *piVar20;
                            iVar22 = piVar20[3];
                            iVar13 = piVar20[2];
                            iVar30 = piVar20[-3];
                            iVar29 = piVar20[-4];
                            iVar28 = piVar20[-1];
                            iVar27 = piVar20[-2];
                            piVar15[1] = piVar20[1];
                            *piVar15 = iVar26;
                            piVar15[3] = iVar22;
                            piVar15[2] = iVar13;
                            piVar15[-3] = iVar30;
                            piVar15[-4] = iVar29;
                            piVar15[-1] = iVar28;
                            piVar15[-2] = iVar27;
                            piVar20 = piVar20 + -0x40;
                            piVar15 = piVar15 + -0x40;
                            uVar21 = uVar21 + -0x40;
                        } while (uVar21 != 0);
                        piVar15 = piVar25 - uVar19;
                        if (uVar9 == uVar19) goto code_r0x0001938efd48;
                    }
                    do {
                        piVar15 = piVar15 + -1;
                        piVar10 = piVar10 + -1;
                        *piVar10 = *piVar15;
                    } while (piVar15 != apiStack_120[0]);
                }
code_r0x0001938efd48:
                uVar9 = apiStack_120[1] - piVar25;
                if (uVar9 != 0) {
                    piVar15 = piVar12;
                    if ((0x3f < uVar9) && (piVar15 = piVar12,  0x3f < -piVar6 + iVar11 + param_4)) {
                        uVar19 = uVar9 & 0xffffffffffffffc0;
                        piVar12 = piVar12 + uVar19;
                        piVar15 = piVar25 + 4;
                        piVar6 = piVar25 + iVar11 + (param_4 - piVar6) + 0x20;
                        uVar21 = uVar19;
                        do {
                            iVar13 = piVar15[-4];
                            iVar26 = piVar15[-1];
                            iVar22 = piVar15[-2];
                            iVar28 = piVar15[1];
                            iVar27 = *piVar15;
                            iVar30 = piVar15[3];
                            iVar29 = piVar15[2];
                            piVar6[-3] = piVar15[-3];
                            piVar6[-4] = iVar13;
                            piVar6[-1] = iVar26;
                            piVar6[-2] = iVar22;
                            piVar6[1] = iVar28;
                            *piVar6 = iVar27;
                            piVar6[3] = iVar30;
                            piVar6[2] = iVar29;
                            uVar21 = uVar21 + -0x40;
                            piVar15 = piVar15 + 8;
                            piVar6 = piVar6 + 8;
                        } while (uVar21 != 0);
                        piVar15 = piVar12;
                        piVar25 = piVar25 + uVar19;
                        if (uVar9 == uVar19) goto code_r0x0001938efdd0;
                    }
                    do {
                        piVar6 = piVar25 + 1;
                        piVar12 = piVar15 + 1;
                        *piVar15 = *piVar25;
                        piVar15 = piVar12;
                        piVar25 = piVar6;
                    } while (piVar6 != apiStack_120[1]);
                }
code_r0x0001938efdd0:
                piVar6 = apiStack_120[0];
                puVar16 = apiStack_120[2];
                apiStack_120[0] = piVar10;
                apiStack_120[1] = piVar12;
                apiStack_120[2] = puVar14 + iVar11;
                if (piVar6 != NULL) {
                    (**(*apiStack_120[3] + 0x28))(apiStack_120[3], piVar6, puVar16 - piVar6);
                }
            }
        }
code_r0x0001938efe10:
        uVar9 = fcn.1938df548(apiStack_120, appcStack_160[0] + 0x7c, appcStack_160[0] + 0x71, appcStack_160[0] + 0x87, 
                              param_6);
        if ((uVar9 & 1) == 0) {
            fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
            iVar4 = 0xc;
            iVar23 = 0xc;
            if (apiStack_120[0] != NULL) goto code_r0x0001938efe80;
        }
        else {
            iVar4 = 0;
            iVar23 = 0;
            if (apiStack_120[0] != NULL) {
code_r0x0001938efe80:
                iVar23 = iVar4;
                apiStack_120[1] = apiStack_120[0];
                (**(*apiStack_120[3] + 0x28))(apiStack_120[3], apiStack_120[0], apiStack_120[2] - apiStack_120[0]);
            }
        }
        if (iVar23 == 0) goto code_r0x0001938efec0;
        if (iVar23 != 0xc) goto code_r0x0001938f096c;
code_r0x0001938f08cc:
        iVar4 = 0;
code_r0x0001938f08d0:
        if (aiStack_150[0] != 0) {
            piVar6 = geo::codec::Allocator::instance()();
            (**(*piVar6 + 0x28))(piVar6, aiStack_150[0], 0);
        }
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        aiStack_150[1] = 0;
        aiStack_150[0] = 0;
        if (iVar4 != 0) {
            iVar11 = std::__1::chrono::steady_clock::now()();
            iVar8 = SUB168(SEXT816(iVar11 - iVar8) * SEXT816(0xe353f7cf | 0x20c49ba500000000), 8);
            appcStack_160[0][0xee] = ((iVar8 >> 7) - (iVar8 >> 0x3f)) * (0xd2f1a9fc | 0x3f50624d00000000);
            *in_x8 = appcStack_160[0];
            in_x8[1] = appcStack_160[1];
            in_x8 = appcStack_160;
        }
    }
    *in_x8 = NULL;
    in_x8[1] = NULL;
code_r0x0001938f096c:
    ppcVar7 = appcStack_160[1];
    if (appcStack_160[1] == NULL) {
        return;
    }
    LOAcquire();
    tmp_ldXn = appcStack_160[1][1];
    iVar8 = tmp_ldXn;
    tmp_stXn = iVar8 + -1;
    UNRECOVERED_JUMPTABLE = tmp_stXn;
    appcStack_160[1][1] = UNRECOVERED_JUMPTABLE;
    iVar8 = tmp_ldXn;
    LORelease();
    if (iVar8 != 0) {
        return;
    }
    (**(*ppcVar7 + 0x10))(ppcVar7);
    std::__1::__shared_weak_count::__release_weak()(ppcVar7);
    return;
}
