bool geo::codec::chapterReadNullTerminatedString(VMP4Chapter* chapter, char* buffer, unsigned long bufferSize)
{
    uint64_t currentIndex = chapter->currentIndex;
    uint64_t endIndex = chapter->endIndex;
    
    if (endIndex <= currentIndex || currentIndex + 1 == endIndex) {
        return false;
    }
    
    uchar* data = chapter->data;
    uint64_t bufferIndex = 0;
    
    while (currentIndex != endIndex) {
        char currentChar = data[currentIndex];
        
        if (currentChar == '\0') {
            break;
        }
        
        if (bufferIndex < bufferSize - 1) {
            buffer[bufferIndex] = currentChar;
            bufferIndex++;
        }
        
        currentIndex++;
    }
    
    buffer[bufferIndex] = '\0';
    
    chapter->currentIndex = currentIndex + 1;
    return data[currentIndex - 1] == '\0';
}
