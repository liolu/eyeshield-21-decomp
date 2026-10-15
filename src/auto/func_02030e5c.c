#include "m2c.h"

s32 func_02030e5c(void *arg0, s16 arg1) {
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s16 *, 0x12) * 2)), s16 *, 0xC) = arg1;
    if ((s32) M2C_FIELD(arg0, s16 *, 0x12) > 0) {
        M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) | 1);
    }
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + 1);
    return 1;
}
