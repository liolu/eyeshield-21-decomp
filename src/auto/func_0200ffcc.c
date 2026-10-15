#include "m2c.h"

extern void *data_020fb914;

void func_0200ffcc(s32 arg0, s32 arg1) {
    M2C_FIELD(data_020fb914, s32 *, 0x18) = arg0;
    M2C_FIELD(data_020fb914, s32 *, 0x20) = arg1;
    M2C_FIELD(data_020fb914, s32 *, 0x1C) = 0x333;
}
