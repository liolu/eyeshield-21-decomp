#include "m2c.h"

s32 func_020730b8(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0xC0);
    if (temp_r2 != 0) {
        return (arg1 * 0x30) + temp_r2;
    }
    return 0;
}
