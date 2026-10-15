#include "m2c.h"

extern M2C_UNK data_020fb6e0;
extern M2C_UNK data_020fdb30;

s32 func_02015638(s32 arg0) {
    s32 var_r0;

    if (arg0 < 0) {
        return 0;
    }
    var_r0 = *((M2C_UNK *) ((s8 *) &data_020fdb30 + (M2C_FIELD(&data_020fb6e0, s32 *, 0xA8) * 4))) + 0x48 + (arg0 * 0xC0);
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
