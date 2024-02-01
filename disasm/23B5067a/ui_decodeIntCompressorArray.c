uint64_t decodeIntCompressorArray(VMP4Chapter* chapter, mgcl::ints::IntDecompressor<unsigned int>* decompressor, unsigned int param1, unsigned int param2, unsigned long param3, unsigned int* param4)
{
    uint64_t result = 0;
    
    if (param2 == 0) {
        return 0;
    }
    
    uint32_t varUint32 = geo::codec::chapterReadVarUint32(chapter, &result);
    
    if (varUint32 != 0) {
        uint64_t field30 = chapter->field_30;
        uint64_t uVar2 = field30 + varUint32;
        
        if (uVar2 <= chapter->field_38) {
            chapter->field_30 = uVar2;
            int32_t decompressResult = decompressor->decompress(param2, chapter->field_28 + field30, varUint32, param1, param3, param4);
            return decompressResult == 0;
        }
        
        uVar2 = 0;
    }
    
    return uVar2;
}
