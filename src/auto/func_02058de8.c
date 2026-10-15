#include "m2c.h"

s32 func_02037634(s32);                             /* extern */

void func_02058de8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD2C) = func_02037634(((M2C_FIELD(arg0, s32 *, 0x30) - 1) * 6) + M2C_FIELD(arg0, s32 *, 0x38));
}
