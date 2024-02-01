void pointsToCoordinates(double param_1, double param_2, GEOMapRegion* param_3, std::__1::vector<gm::Matrix<unsigned int, 3, 1>, geo::StdAllocator<gm::Matrix<unsigned int, 3, 1>, geo::codec::Allocator> > const& param_4)
{
    for (auto ptr = param_4.begin(); ptr != param_4.end(); ++ptr)
    {
        double westLng = param_3->westLng();
        double southLat = param_3->southLat();
        
        double lng = westLng + NEON_ucvtf((*ptr)[0]) * param_2;
        double lat = southLat + NEON_ucvtf((*ptr)[1]) * param_1;
        
        gm::Matrix<unsigned int, 3, 1> matrix;
        matrix.setLng(lng);
        matrix.setLat(lat);
        
        param_4.addObject(matrix);
    }
    
    if (param_4.size() % 2 == 0)
    {
        param_4.someFunction(param_4);
        return;
    }
    
    UNRECOVERED_JUMPTABLE = SoftwareBreakpoint(0xc471, 0x19329dd20);
    (*UNRECOVERED_JUMPTABLE)();
    return;
}
