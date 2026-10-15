#include "m2c.h"

extern s32 data_020fed00;
extern M2C_UNK data_020fed04;

void func_0207512c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;
    s32 var_r0;
    void *temp_r0;

    var_r0 = arg0;
    if ((var_r0 < 0) || (var_r0 >= 5)) {
        var_r0 = data_020fed00;
    }
    temp_ip                                          = var_r0 * 0x88;
    *((M2C_UNK *) ((s8 *) &data_020fed04 + temp_ip)) = arg1;
    temp_r0                                          = (M2C_UNK *) ((s8 *) &data_020fed04 + temp_ip);
    M2C_FIELD(temp_r0, volatile s32 *, 4)            = arg2;
    M2C_FIELD(temp_r0, volatile s32 *, 8)            = arg3;
}
