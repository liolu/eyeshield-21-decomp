#include "m2c.h"

extern s32 data_020fefe8;

void func_02076d60(s32 arg0) {
    s32 temp_r1;
    void *temp_r0;
    void *var_r1;

    temp_r1 = (arg0 * 0x24) + (data_020fefe8 + 0x16C);
    if (M2C_FIELD(temp_r1, s32 *, 0x20) == 0) {
        return;
    }
    var_r1  = temp_r1 + 4;
    temp_r0 = var_r1;
    do {
        var_r1 = M2C_FIELD(var_r1, void **, 4);
    } while (temp_r0 != var_r1);
}
