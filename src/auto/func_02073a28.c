#include "engine.h"
#include "m2c.h"

M2C_UNK func_02073a4c(M2C_UNK, M2C_UNK);

void func_02073a28(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        return;
    }
    do {
        var_r1 = func_02073a4c(arg0, var_r1);
    } while (var_r1 != 0);
}
