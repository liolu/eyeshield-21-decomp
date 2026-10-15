/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_020d8574;

void func_0207f1e4(s32 arg0) {
    s32 var_r3;
    s8 *var_r2;
    s8 temp_r1;

    var_r2 = &data_020d8574;
    var_r3 = 0;
    do {
        temp_r1 = *var_r2;
        var_r2 += 1;
        *(s8 *) (arg0 + var_r3) = temp_r1;
        var_r3 += 1;
    } while (var_r3 < 0x10);
}