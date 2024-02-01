ulong geo::codec::_readTileReferences(VMP4Tile* param_1, GeoCodecsTileKey const* param_2, std::__1::shared_ptr<geo::codec::VectorTile> const& param_3)
{
    for (uint64_t i = 0; i < param_1[1]; i++)
    {
        if (param_1[i * 0x10] == 0x5d)
        {
            char* pcVar2 = geo::codec::chapterAt(param_1, i, 0x5d, *param_3 + 0x778);
            if (pcVar2 == NULL)
            {
                return 1;
            }

            int64_t* piStack_68 = param_3[1];
            if (piStack_68 != NULL)
            {
                piStack_68[1]++;
            }

            uint64_t uVar11 = geo::codec::chapterReadVarUint32(pcVar2, *0x8 + -0x48);
            if ((uVar11 & 1) == 0)
            {
                continue;
            }

            pcVar2[0x20] = '\x01';
            pcVar2[0x10] = pcVar2[0x38] - pcVar2[0x30];
            pcVar2[0x18] = 0;
            pcVar2[8] = pcVar2[0x28] + pcVar2[0x30];

            *(*param_3 + 0x4f0) = 0;
            piVar4 = geo::codec::Allocator::instance()();
            *(*param_3 + 0x4f8) = (**(*piVar4 + 0x10))(piVar4, 0, 8);

            if (uStack_48 != 0)
            {
                uint64_t uVar13 = 0;
                uint64_t uVar5 = pcVar2[8];
                uint64_t uVar16 = 5;

                while (true)
                {
                    uint64_t uVar9 = 8 - (uVar8 & 7);
                    uint64_t uVar17 = uVar16;

                    if (uVar9 <= uVar16)
                    {
                        uVar17 = uVar9;
                    }

                    uVar13 = (uVar5[uVar8 >> 3] >> ((8 - (uVar8 & 7)) - uVar17 & 0x3f) & ~(-1 << (uVar17 & 0x1f))) | (uVar13 << (uVar17 & 0x1f));
                    uVar8 += uVar17;
                    pcVar2[0x18] = uVar8;
                    uVar16 -= uVar17;

                    if (uVar16 == 0)
                    {
                        if (uVar15 <= uVar8 + uVar13 && uVar8 + uVar13 != uVar15)
                        {
                            break;
                        }

                        if (uVar13 == 0)
                        {
                            uVar15 = 0;
                            uVar16 = 0;
                        }
                        else
                        {
                            uVar16 = 0;
                            uint64_t uVar17 = uVar13;

                            do
                            {
                                uint64_t uVar10 = 8 - (uVar8 & 7);
                                uint64_t uVar9 = uVar17;

                                if (uVar10 <= uVar17)
                                {
                                    uVar9 = uVar10;
                                }

                                uVar16 = (uVar5[uVar8 >> 3] >> ((8 - (uVar8 & 7)) - uVar9 & 0x1f) & (-1 << (uVar9 & 0x1f) ^ 0xffffffff)) | (uVar16 << (uVar9 & 0x1f));
                                uVar8 += uVar9;
                                pcVar2[0x18] = uVar8;
                                uVar17 -= uVar9;
                            } while (uVar17 != 0);

                            if (uVar15 <= uVar8 + uVar13 && uVar8 + uVar13 != uVar15)
                            {
                                break;
                            }

                            uVar15 = 0;

                            do
                            {
                                uint64_t uVar9 = 8 - (uVar8 & 7);
                                uint64_t uVar17 = uVar13;

                                if (uVar9 <= uVar13)
                                {
                                    uVar17 = uVar9;
                                }

                                uVar15 = (uVar5[uVar8 >> 3] >> ((8 - (uVar8 & 7)) - uVar17 & 0x1f) & (-1 << (uVar17 & 0x1f) ^ 0xffffffffU)) | (uVar15 << (uVar17 & 0x1f));
                                uVar8 += uVar17;
                                pcVar2[0x18] = uVar8;
                                uVar13 -= uVar17;
                            } while (uVar13 != 0);
                        }

                        uint64_t uVar1 = param_2[10];
                        uint64_t uVar4 = param_2[1];
                        uint64_t uVar7 = 0xffffffff >> -2 + 0x20;
                        uint64_t uVar8 = 0xffffffffffffffff >> -7 + 0x40;
                        uint64_t uVar14 = *(*param_3 + 0x4f8) + uVar11 * 0xb;
                        *uVar14 = ((uVar13 << -0x18 + 0x20) & 0x3f00 & ~uVar8) | (*param_2 & uVar8) & 0xffffff0000003fff & 0xffffffffff | (uVar16 << -0x32 + 0x40) & 0xffffffc000 | (uVar15 << -0x18 + 0x40) & 0xffffff0000000000;
                        *(uVar14 + 1) = uVar4 & ~uVar7 | (uVar15 >> 0x18 & uVar7);
                        *(uVar14 + 10) = uVar1;
                        uVar11++;

                        if (uStack_48 <= uVar11)
                        {
                            break;
                        }

                        uVar8 = pcVar2[0x18];
                        uVar15 = pcVar2[0x10] * 8;

                        if (uVar15 <= uVar8 + 5 && uVar8 + 5 != uVar15)
                        {
                            break;
                        }
                    }
                }
            }

            if (*pcVar2 != '\0')
            {
                piVar4 = geo::codec::Allocator::instance()();
                (**(*piVar4 + 0x28))(piVar4, pcVar2[0x28], 0);
            }

            piVar4 = geo::codec::Allocator::instance()();
            (**(*piVar4 + 0x28))(piVar4, pcVar2, 0);
        }
    }

    return 1;
}
