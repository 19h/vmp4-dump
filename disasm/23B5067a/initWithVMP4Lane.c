int64_t -[GEOMapFeatureRunningTrackLane initWithVMP4Lane:coordinates:](
    ulong param_1, ulong param_2, uint8_t *param_3, ulong param_4)
{
    ulong uVar1;
    int64_t iVar2;
    
    uVar1 = objc_retain(param_4);
    
    // Call the superclass's initWithVMP4Lane method
    iVar2 = objc_msgSendSuper2(&param_1, 0xdc8 + 0x1cf0d5000);
    
    if (iVar2 != 0) {
        // Set the values of iVar2 based on param_3
        *(iVar2 + 8) = *param_3;
        *(iVar2 + 0x10) = *(param_3 + 0x28);
        *(iVar2 + 0x14) = *(param_3 + 0x2c);
        
        // Store param_4 in iVar2 + 0x18
        objc_storeStrong(iVar2 + 0x18, param_4);
    }
    
    objc_release(uVar1);
    return iVar2;
}
