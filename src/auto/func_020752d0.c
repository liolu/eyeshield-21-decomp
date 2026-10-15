#include "m2c.h"

extern s32 data_020fed00;
extern M2C_UNK data_020fed04;

s32 func_020752d0(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 < 0) || (var_r0 >= 5)) {
        var_r0 = data_020fed00;
    }
    return (0x88 * var_r0) + (s32) &data_020fed04;
}
