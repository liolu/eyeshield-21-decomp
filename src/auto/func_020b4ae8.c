#include "m2c.h"

extern void *data_0212cca8;

void func_020b4ae8(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_0212cca8, s32 *, 0x80) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
