#include "m2c.h"

s32 func_02088ecc(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r2 > 0) {
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r2 - 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x40);
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    return arg1 + 4;
}
