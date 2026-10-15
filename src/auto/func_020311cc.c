#include "m2c.h"

s32 func_020311cc(u32 arg0) {
    s32 var_r0;

    if (arg0 < 0x81U) {
        return -1;
    }
    if (arg0 < 0xA0U) {
        return 0;
    }
    if (arg0 < 0xE0U) {
        return -1;
    }
    if (arg0 >= 0xFFU) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return 0 - var_r0;
}
