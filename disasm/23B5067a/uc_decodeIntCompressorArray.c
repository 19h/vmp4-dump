uint64_t decodeIntCompressorArray(VMP4Chapter* chapter, mgcl::ints::IntDecompressor<unsigned char>* decompressor, unsigned int param1, unsigned int param2, unsigned long param3, unsigned char* param4)
{
    uint64_t result = 0;
    
    if (decompressor == nullptr) {
        return result;
    }
    
    uint32_t var1 = geo::codec::chapterReadVarUint32(chapter, &result);
    
    if (var1 != 0) {
        uint64_t var2 = chapter->field_30 + var1;
        
        if (var2 <= chapter->field_38) {
            chapter->field_30 = var2;
            int32_t var3 = decompressor->decompress(param1, chapter->field_28 + chapter->field_30, var1, param2, param3, param4);
            return (var3 == 0);
        }
        
        var2 = 0;
    }
    
    return var2;
}
