#ifndef Q10_H_
#define Q10_H_

#define CHANGEENDIAN(u32Value){\
int u32Result = 0;\
int u32Result |= (u32Value & 0x000000FF) << 24;\
 int u32Result |= (u32Value & 0x0000FF00) << 8;\
 int u32Result |= (u32Value & 0x00FF0000) >> 8;\
 int  u32Result |= (u32Value & 0xFF000000) >> 24;\
    }

#endif /* Q10_H_ */
