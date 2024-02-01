
uint32_t geo::codec::decodePointCharacteristics(VMP4Tile*, unsigned short, GeoCodecsCharacteristicPoint**, unsigned long*, GeoCodecsStrokeSpecification**, unsigned long*, std::__1::unordered_map<char const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>, std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo> > >&)::$_2::__invoke(void const*, void const*)
                   (int64_t param_1, int64_t param_2)

{
    bool bVar1;
    uint32_t uVar2;
    
    uVar2 = *(param_1 + 4);
    bVar1 = uVar2 < *(param_2 + 4);
    if (bVar1) {
        return 0xffffffff;
    }
    if (!bVar1 && uVar2 != *(param_2 + 4)) {
        return 1;
    }
    uVar2 = *(param_1 + 8);
    bVar1 = uVar2 < *(param_2 + 8);
    if (bVar1) {
        return 0xffffffff;
    }
    if (!bVar1 && uVar2 != *(param_2 + 8)) {
        return 1;
    }
    bVar1 = *(param_2 + 0xc) <= *(param_1 + 0xc);
    uVar2 = 0xffffffff;
    if (bVar1) {
        uVar2 = bVar1 && *(param_1 + 0xc) != *(param_2 + 0xc);
    }
    return uVar2;
}
