#include "m2c.h"

void func_0208763c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, volatile s32 *, 0x34) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0x3C) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x34);
    M2C_FIELD(arg0, volatile s32 *, 0x38) = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0x40) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x38);
    M2C_FIELD(arg0, volatile s32 *, 4)    = (s32) (M2C_FIELD(arg0, volatile s32 *, 4) | arg1);
}
