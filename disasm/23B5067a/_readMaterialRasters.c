void geo::codec::_readMaterialRasters(VMP4Tile* tile, GeoCodecsTileKey const* key, std::__1::shared_ptr<geo::codec::VectorTile> const& vectorTile)
{
    int64_t* param_1 = tile;
    int64_t* param_2 = key;
    
    int64_t uVar4 = param_1[1];
    
    if (uVar4 == 0)
        return;
    
    int64_t count = 0;
    
    if (uVar4 < 4)
    {
        for (int64_t i = 0; i < uVar4; i++)
        {
            if (param_1[i] == 0x9b)
                count++;
        }
    }
    else
    {
        int64_t uVar6 = uVar4 & 0xfffffffffffffffc;
        
        for (int64_t i = 0; i < uVar6; i += 4)
        {
            for (int64_t j = 0; j < 4; j++)
            {
                if (param_1[i + j] == 0x9b)
                    count++;
            }
        }
        
        for (int64_t i = uVar6; i < uVar4; i++)
        {
            if (param_1[i] == 0x9b)
                count++;
        }
    }
    
    if (count == 0)
        return;
    
    *(*param_2 + 0xb28) = 0;
    
    int64_t* allocator = geo::codec::Allocator::instance()();
    ulong uStack_80 = (**(*allocator + 0x18))(allocator, count, 0x50);
    int64_t* iVar12 = *param_2;
    *(iVar12 + 0xb20) = uStack_80;
    
    code** ppcVar3 = operator new(unsigned long)(0x30);
    code* pcVar10 = typeinfo for geo::Allocator + 0xa70 + 0x10;
    *ppcVar3 = pcVar10;
    ppcVar3[1] = param_2;
    ppcVar3[2] = &uStack_80;
    ppcVar3[3] = &count;
    
    int64_t uVar4 = param_1[1];
    code** ppcStack_40 = ppcVar3;
    
    if (uVar4 != 0)
    {
        for (int64_t i = 0; i <= uVar4; i++)
        {
            if (*(*param_1 + i * 0x10) == 0x9b)
            {
                ulong auStack_60 = geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)(param_1, i, 0x9b, iVar12 + 0x778);
                (**(*ppcVar3 + 0x30))(ppcVar3, auStack_60);
                uVar4 = param_1[1];
            }
        }
        pcVar10 = *ppcVar3;
    }
    
    (**(pcVar10 + 0x28))(ppcVar3);
    
    if (uStack_69 != 0x0)
        return;
    
    if (**reloc.__stack_chk_guard != iStack_38)
        __stack_chk_fail(bVar1);
}
