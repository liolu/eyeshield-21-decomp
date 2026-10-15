/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb6e0;
extern M2C_UNK data_020fb770;
extern M2C_UNK data_020fb778;

s32 func_02034404(s32 arg0) {
    s32 var_r0;

    if ((M2C_FIELD(&data_020fb6e0, s32 *, 0) == 2) &&
        (*((M2C_UNK *) ((s8 *) &data_020fb770 + (M2C_FIELD(&data_020fb6e0, s32 *, 0x1C) * 4))) == 0) &&
        (*((M2C_UNK *) ((s8 *) &data_020fb770 + (M2C_FIELD(&data_020fb6e0, s32 *, 0x20) * 4))) == 0)) {
        if (arg0 == 0) {
            var_r0 = 8;
        } else {
            var_r0 = 9;
        }
        return var_r0;
    }
    return *((M2C_UNK *) ((s8 *) &data_020fb778 + (arg0 * 4)));
}
