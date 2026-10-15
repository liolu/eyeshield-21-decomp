#include "m2c.h"

void func_0201b654(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg1, s32 *, 0) + arg2);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg1, s32 *, 8) + arg2);
}
