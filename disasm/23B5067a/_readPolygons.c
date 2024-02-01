ulong geo::codec::_readPolygons(VMP4Tile* tile, std::__1::shared_ptr<geo::codec::VectorTile> const& vectorTile)
{
    int32_t count = geo::codec::_readPolygonsofType(tile, 0x20, vectorTile);
    
    if (count == 0) {
        goto code_r0x0001938f63ac;
    }
    
    uint64_t size = tile[1];
    
    if (size != 0) {
        if (size < 4) {
            uint64_t i = 0;
            int32_t hCount = 0;
            
            while (i < size) {
                if (tile[i] == 0x68) {
                    hCount++;
                }
                i++;
            }
        }
        else {
            int32_t hCount = 0;
            int32_t vCount = 0;
            int32_t dCount = 0;
            int32_t aCount = 0;
            
            uint64_t i = 0;
            uint64_t sizeAligned = size & 0xfffffffffffffffc;
            
            while (i < sizeAligned) {
                if (tile[i - 2] == 0x68) {
                    hCount++;
                }
                if (tile[i - 1] == 0x68) {
                    vCount++;
                }
                if (tile[i] == 0x68) {
                    dCount++;
                }
                if (tile[i + 1] == 0x68) {
                    aCount++;
                }
                i += 2;
            }
            
            int32_t totalCount = hCount + vCount + dCount + aCount;
            
            if (size != sizeAligned) {
                uint64_t j = size - sizeAligned;
                int32_t hCount2 = 0;
                
                while (j > 0) {
                    if (tile[i] == 0x68) {
                        hCount2++;
                    }
                    j--;
                    i++;
                }
                
                hCount += hCount2;
            }
            
            totalCount += hCount;
        }
        
        if (totalCount != 0) {
            uint64_t result = geo::codec::_readModernBuildings(tile, 0x68, *vectorTile + 0x330, *vectorTile + 0x118, vectorTile);
            
            if ((result & 1) != 0) {
                return 1;
            }
            
            goto code_r0x0001938f63ac;
        }
    }
    
    uint64_t result = geo::codec::_readPolygonsofType(tile, 0x21, vectorTile);
    
    if ((result & 1) != 0) {
        return 1;
    }
    
code_r0x0001938f63ac:
    fprintf(**reloc.__stderrp, 0x8ff + 0x193b8a000);
    return 0;
}
