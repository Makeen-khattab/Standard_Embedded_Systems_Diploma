#ifndef Q9_H_
#define Q9_H_

/* Function to change from one endian to another */
uint32 ChangeEndianness(uint32 u32Value)
{
	uint32 u32Result = 0;
    u32Result |= (u32Value & 0x000000FF) << 24;
    u32Result |= (u32Value & 0x0000FF00) << 8;
    u32Result |= (u32Value & 0x00FF0000) >> 8;
    u32Result |= (u32Value & 0xFF000000) >> 24;
    return u32Result;
}


#endif /* Q9_H_ */
