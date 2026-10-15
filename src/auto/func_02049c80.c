/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_021234c0;

s32 func_02049c80(void) {
    s32 var_r3;
    void *var_r2;

    var_r3 = 0;
    var_r2 = data_021234c0;
loop_1:
    if (M2C_FIELD(var_r2, s32 *, 0xD30) != -1) {
        return var_r3 + 7;
    }
    var_r3 += 1;
    var_r2 += 0x60;
    if (var_r3 >= 3) {
        return -1;
    }
    goto loop_1;
}
