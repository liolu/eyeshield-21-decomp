#include "m2c.h"

extern void *data_020fdb4c;

void func_0201860c(u16 *arg0) {
    *arg0 |= 0x20;
    M2C_FIELD(data_020fdb4c, s32 *, 4)      = 0;
    M2C_FIELD(data_020fdb4c, s32 *, 8)      = 4;
    M2C_FIELD(data_020fdb4c, void **, 0x3C) = (void *) (((s8 *) arg0 + 0x94));
    M2C_FIELD(data_020fdb4c, u16 **, 0x50)  = arg0;
    M2C_FIELD(data_020fdb4c, u16 *, 0xC)    = (u16) (M2C_FIELD(data_020fdb4c, u16 *, 0xC) & ~1);
}
