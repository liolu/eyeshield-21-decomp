#include "m2c.h"

void func_02087338(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(arg0, s32 *, 0xCC);
    M2C_FIELD(arg0, s32 *, 0xD4) = arg1;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 2);
}
