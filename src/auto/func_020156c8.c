#include "m2c.h"

extern M2C_UNK data_020fdb30;

s32 func_020156c8(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg1 < 0) {
        return 0;
    }
    var_r0 = *((M2C_UNK *) ((s8 *) &data_020fdb30 + (arg0 * 4))) + 0x48 + (arg1 * 0xC0);
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
