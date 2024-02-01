ulong geo::codec::readTransformation(VMP4Chapter* param_1, GeoCodecsMatrix4x3* param_2)
{
    uint64_t startOffset = param_1->field_30;
    uint64_t endOffset = param_1->field_38;

    if (endOffset <= startOffset + 4)
        return 0;

    uint* dataPtr = param_1->field_28 + startOffset;
    param_1->field_30 += 4;

    for (int i = 0; i < 10; i++)
    {
        uint64_t currentOffset = startOffset + (i + 1) * 4;

        if (endOffset <= currentOffset)
            return 0;

        param_2->data[i] = dataPtr[i];
        param_1->field_30 = currentOffset;
    }

    geo::Transform<float>::toMatrix(param_2->data, *0x8 + -0x48);

    return 1;
}
