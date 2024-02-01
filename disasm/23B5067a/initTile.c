#include <stdint.h>

typedef struct {
    uint64_t* param_1;
    uint32_t* param_2;
    uint64_t param_3;
} VMP4Tile;

ulong geo::codec::initTile(VMP4Tile* tile, unsigned char* data, unsigned long size) {
    tile->param_1[3] = 0;
    tile->param_1[2] = 0;
    tile->param_1[5] = 0;
    tile->param_1[4] = 0;
    tile->param_1[1] = 0;
    *(tile->param_1) = 0;
    
    if (size < 8 || *(tile->param_2) != (0x4d56 | 0x34500000)) {
        return 0;
    }
    
    uint64_t uVar12 = *(tile->param_2 + 6);
    uint16_t uVar11 = *(tile->param_2 + 6);
    
    if (uVar11 != 0) {
        tile->param_1[1] = uVar12;
        uint64_t* allocator = geo::codec::Allocator::instance()();
        uint64_t uVar2 = (**(*allocator + 0x10))(allocator, uVar12 * 0x10, 8);
        *(tile->param_1) = uVar2;
        
        if (uVar2 == 0) {
            return 0;
        }
        
        int64_t iVar3 = 0;
        uint32_t* puVar5 = uVar2 + 4;
        uint32_t uVar8 = 0xffffffff;
        
        while (uVar12 * 10 - iVar3 != 0) {
            if ((size <= iVar3 + 10U && iVar3 + 10U != size) ||
                (*(puVar5 + -1) = *(tile->param_2 + iVar3 + 8), size <= iVar3 + 0xeU && iVar3 + 0xeU != size)) {
                return 0;
            }
            
            uint32_t uVar10 = *(tile->param_2 + iVar3 + 10);
            *puVar5 = uVar10;
            uint64_t uVar9 = iVar3 + 0x12;
            
            if (size <= uVar9 && uVar9 != size) {
                return 0;
            }
            
            puVar5[1] = *(tile->param_2 + iVar3 + 0xe);
            
            if (uVar8 <= uVar10) {
                uVar10 = uVar8;
            }
            
            puVar5 = puVar5 + 4;
            iVar3 = iVar3 + 10;
            uVar8 = uVar10;
        }
        
        if (uVar9 < uVar10) {
            iVar3 = 0;
            
            while (uVar12 * 0x10 - iVar3 != 0) {
                uint64_t uVar2 = geo::codec::chapterReadVarUint32(VMP4Chapter*, unsigned int*)
                                  (auStack_88, *(tile->param_1) + iVar3 + 0xc);
                
                if ((uVar2 & 1) == 0) {
                    if (*(tile->param_1) == 0) {
                        return 0;
                    }
                    
                    return 0;
                }
                
                iVar3 = iVar3 + 0x10;
            }
        }
        else {
            uint64_t uVar4 = uVar12 & 0xfffc;
            uint32_t* puVar7 = uVar2 + 0x2c;
            uint64_t uVar9 = uVar4;
            
            while (uVar9 != 0) {
                puVar7[-8] = 0xffffffff;
                puVar7[-4] = 0xffffffff;
                *puVar7 = 0xffffffff;
                puVar7[4] = 0xffffffff;
                puVar7 = puVar7 + 0x10;
                uVar9 = uVar9 + -4;
            }
            
            if (uVar4 != uVar12) {
                iVar3 = uVar12 - uVar4;
                puVar7 = uVar2 + uVar4 * 0x10 + 0xc;
                
                while (iVar3 != 0) {
                    *puVar7 = 0xffffffff;
                    iVar3 = iVar3 + -1;
                    puVar7 = puVar7 + 4;
                }
            }
        }
    }
    
    tile->param_1[3] = tile->param_2;
    tile->param_1[4] = size;
    *(tile->param_1 + 0x14) = 0x46;
    uint64_t uVar12 = tile->param_1[1];
    
    if (uVar12 == 0) {
        return 1;
    }
    
    int32_t* piVar6 = *(tile->param_1) + 8;
    uint64_t uVar2 = 1;
    
    while ((*(piVar6) + piVar6[-1] < size || *(piVar6) + piVar6[-1] == size) && *(piVar6) != 0) {
        piVar6 = piVar6 + 4;
        uVar12 = uVar12 + -1;
        
        if (uVar12 == 0) {
            return 1;
        }
    }
    
    uint64_t* allocator = geo::codec::Allocator::instance()(uVar2);
    (**(*allocator + 0x28))(allocator, *(tile->param_1), 0);
    
    return 0;
}
