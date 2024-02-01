ulong geo::codec::_readLiveFeatures(VMP4Tile* tile, std::__1::shared_ptr<geo::codec::VectorTile> const& vectorTile)
{
    ulong uVar3 = 1;
    
    uint64_t tileCount = tile[1];
    if (tileCount == 0) {
        return uVar3;
    }
    
    for (uint64_t i = 0; i < tileCount; i++) {
        if (tile[i] != 0x9f) {
            continue;
        }
        
        char* chapter = geo::codec::chapterAt(tile, i, 0x9f, *vectorTile + 0x778);
        if (chapter == NULL) {
            return uVar3;
        }
        
        uint32_t var1 = geo::codec::chapterReadVarUint32(chapter, *0x8 + -0x48);
        if ((var1 & 1) == 0) {
            return uVar3;
        }
        
        var1 = geo::codec::chapterReadVarUint32(chapter, auStack_78 + 2);
        if ((var1 & 1) == 0) {
            return uVar3;
        }
        
        uint64_t var4 = *(chapter + 0x30) + 4;
        if (*(chapter + 0x38) <= var4 && var4 != *(chapter + 0x38)) {
            return uVar3;
        }
        
        *(chapter + 0x30) = var4;
        uint32_t var2 = geo::codec::chapterReadVarUint32(chapter, auStack_78 + 1);
        if (var2 == 0) {
            return uVar3;
        }
        
        if (auStack_78[1] != 0) {
            uint32_t var5 = 0;
            uint64_t var6 = 0;
            while (var5 < auStack_78[1]) {
                var6 = geo::codec::chapterReadVarUint32(chapter, apuStack_a0);
                if (((var6 & 1) == 0) || (var2 = geo::codec::chapterReadVarUint32(chapter, auStack_78), var2 == 0)) {
                    return uVar3;
                }
                var5++;
            }
        }
    }
    
    return uVar3;
}
