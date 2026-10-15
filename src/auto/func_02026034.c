/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fdb30;
extern M2C_UNK data_020fe1f8;

s32 func_02026034(s32 arg0) {
    s32 var_r0;

    if (*((M2C_UNK *) ((s8 *) &data_020fe1f8 + (arg0 * 4))) == 0) {
        return 0;
    }
    var_r0 = M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020fdb30 + (arg0 * 4))), s32 *, 0x1288);
    if (var_r0 == -1) {
        var_r0 = 0;
    }
    return var_r0;
}
