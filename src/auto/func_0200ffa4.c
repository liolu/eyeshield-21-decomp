#include "m2c.h"

extern void *data_020fb914;

void func_0200ffa4(s32 arg0, s32 arg1) {
    M2C_FIELD(data_020fb914, s32 *, 8)     = arg0;
    M2C_FIELD(data_020fb914, s32 *, 4)     = 1;
    M2C_FIELD(data_020fb914, s32 *, 0x108) = arg1;
}
