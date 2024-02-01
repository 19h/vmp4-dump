int64_t -[GEOMapFeatureRunningTrack initWithVMP4Track:boundingBox:](
    ulong param_1, ulong param_2, ulong *param_3, ulong param_4)
{
    uint32_t uVar1;
    uint8_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong extraout_x1;
    ulong uVar8;
    int64_t iVar9;
    float8 fVar10;
    float8 fVar11;
    float8 fVar12;
    float8 fVar13;
    float8 fVar14;
    uchar auVar15[16];
    ulong uStack_90;
    ulong uStack_88;

    // Retain the bounding box
    uVar3 = objc_retain(param_4);
    uStack_88 = *0x1d6caef88;
    uStack_90 = param_1;

    // Call the superclass's initWithVMP4Track method
    iVar4 = objc_msgSendSuper2(&uStack_90, 0xdc8 + 0x1cf0d5000);

    // If the superclass initialization is successful
    if (iVar4 != 0) {
        // Set the track properties
        *(iVar4 + 8) = *param_3;
        objc_storeStrong(iVar4 + 0x20, param_4);
        uVar1 = *(param_3 + 0xc);
        *(iVar4 + 0x10) = *(param_3 + 1);
        *(iVar4 + 0x18) = uVar1;

        // Calculate the number of points
        uint32_t numPoints = (param_3[0xd] - param_3[0xc]) >> 4;

        // Create an array with the calculated capacity
        _objc_msgSend$arrayWithCapacity: (*0x1d6ca66a0, extraout_x1, numPoints * (0xaaaaaaaaaaaa0000 | 0xaaab));
        uVar5 = objc_retainAutoreleasedReturnValue();

        // Calculate the longitude and latitude ranges
        uVar2 = *(param_3 + 10);
        fVar10 = _objc_msgSend$eastLng(uVar3);
        fVar11 = _objc_msgSend$westLng(uVar3);
        fVar12 = _objc_msgSend$northLat(uVar3);
        fVar13 = _objc_msgSend$southLat(uVar3);
        fVar14 = ~(-1 << (uVar2 & 0x1f));
        fVar10 = (fVar10 - fVar11) / fVar14;
        fVar14 = (fVar12 - fVar13) / fVar14;

        // If the track has vertexes
        if ((*(iVar4 + 0x18) >> 2 & 1) != 0) {
            // Allocate and initialize a new object
            uVar6 = objc_alloc_init(*0x1d6ca6848);
            uVar8 = *(iVar4 + 0x28);
            *(iVar4 + 0x28) = uVar6;
            objc_release(uVar8);

            // Convert points to coordinates
            pointsToCoordinates(double, double, GEOMapRegion*, std::__1::vector<gm::Matrix<unsigned int, 3, 1>, geo::StdAllocator<gm::Matrix<unsigned int, 3, 1>, geo::codec::Allocator> > const&)
                (fVar14, fVar10, *(iVar4 + 0x20), param_3 + 0x30);
            auVar15 = objc_retainAutoreleasedReturnValue();

            // Set the vertexes
            _objc_msgSend$setVertexs:(*(iVar4 + 0x28), auVar15._8_8_, auVar15._0_8_);
            objc_release(auVar15._0_8_);

            // Get the count of vertexes
            _objc_msgSend$vertexs(*(iVar4 + 0x28));
            uVar6 = objc_retainAutoreleasedReturnValue();
            iVar7 = _objc_msgSend$count();
            objc_release(uVar6);

            // If the count is 4, add the first object to the vertexes array
            if (iVar7 == 4) {
                _objc_msgSend$vertexs(*(iVar4 + 0x28));
                uVar6 = objc_retainAutoreleasedReturnValue();
                _objc_msgSend$vertexs(*(iVar4 + 0x28));
                uVar8 = objc_retainAutoreleasedReturnValue();
                _objc_msgSend$firstObject();
                auVar15 = objc_retainAutoreleasedReturnValue();
                _objc_msgSend$addObject:(uVar6, auVar15._8_8_, auVar15._0_8_);
                objc_release(auVar15._0_8_);
                objc_release(uVar8);
                objc_release(uVar6);
            }
        }

        // Iterate through the points and convert them to coordinates
        iVar7 = param_3[0xc];
        iVar9 = param_3[0xd];
        if (iVar7 != iVar9) {
            do {
                pointsToCoordinates(double, double, GEOMapRegion*, std::__1::vector<gm::Matrix<unsigned int, 3, 1>, geo::StdAllocator<gm::Matrix<unsigned int, 3, 1>, geo::codec::Allocator> > const&)
                    (fVar14, fVar10, *(iVar4 + 0x20), iVar7 + 8);
                uVar6 = objc_retainAutoreleasedReturnValue();
                auVar15 = objc_alloc(*0x1d6caa538);
                auVar15 = _objc_msgSend$initWithVMP4Lane:coordinates:(auVar15._0_8_, auVar15._8_8_, iVar7, uVar6);
                _objc_msgSend$addObject:(uVar5, auVar15._8_8_, auVar15._0_8_);
                objc_release(auVar15._0_8_);
                objc_release(uVar6);
                iVar7 = iVar7 + 0x30;
            } while (iVar7 != iVar9);
        }

        // Copy the array and release the original
        uVar6 = _objc_msgSend$copy(uVar5);
        uVar8 = *(iVar4 + 0x30);
        *(iVar4 + 0x30) = uVar6;
        objc_release(uVar8);
        objc_release(uVar5);
    }

    // Release the retained bounding box
    objc_release(uVar3);
    return iVar4;
}
