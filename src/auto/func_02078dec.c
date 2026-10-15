#include "m2c.h"

M2C_UNK func_02078e0c(s32);                         /* extern */

void func_02078dec(void) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_02078e0c(var_r4);
        var_r4 += 1;
    } while (var_r4 < 8);
}
