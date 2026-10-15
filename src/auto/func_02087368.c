#include "m2c.h"

void func_02087368(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, volatile s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x80) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x9C) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0xA0) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0xA4) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0xA8) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x90) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x94) = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0x98) = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) & 0xFFFF87E3);
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) | 0x800);
}
