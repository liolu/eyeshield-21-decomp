#include "m2c.h"

s32 func_020d22c8(M2C_UNK);                         /* extern */

void func_0209ee6c(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = func_020d22c8(arg2);
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg3;
    M2C_FIELD(arg0, s32 *, 4)    = arg3;
    M2C_FIELD(arg0, s32 *, 8)    = arg4;
}
