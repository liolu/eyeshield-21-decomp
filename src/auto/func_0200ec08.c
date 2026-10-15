#include "m2c.h"

M2C_UNK func_0200ec3c(M2C_UNK, s32);                /* extern */

void func_0200ec08(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r5;

    var_r5 = arg1;
    if (var_r5 >= arg2) {
        return;
    }
    do {
        func_0200ec3c(arg0, var_r5);
        var_r5 += 1;
    } while (var_r5 < arg2);
}
