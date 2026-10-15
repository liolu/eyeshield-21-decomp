#include "m2c.h"

extern s32 data_020fed00;
extern M2C_UNK data_020fed04;

void func_02075034(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 < 0) || (var_r0 >= 5)) {
        var_r0 = data_020fed00;
    }
    M2C_FIELD(((var_r0 * 0x88) + (s32) &data_020fed04), s32 *, 0x60) = arg1;
}
