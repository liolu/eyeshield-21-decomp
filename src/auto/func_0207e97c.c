#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207d690(M2C_UNK);
M2C_UNK func_0207ed38(M2C_UNK, M2C_UNK);

s32 func_0207e97c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r3;
    s32 var_ip;
    s32 var_r0;

    var_r0 = func_0207d690(arg1 * arg2);
    if (var_r0 == 0) {
        return 0;
    }
    temp_r1 = var_r0;
    var_ip  = 1;
    if (arg2 > 1) {
        do {
            temp_r3                     = var_r0 + arg1;
            M2C_FIELD(var_r0, s32 *, 0) = temp_r3;
            var_ip += 1;
            M2C_FIELD(var_r0, s32 *, 4) = -1;
            var_r0                      = temp_r3;
        } while (var_ip < arg2);
    }
    *(M2C_UNK *) var_r0       = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = temp_r1;
    M2C_FIELD(arg0, s32 *, 8) = func_0207ed38(M2C_FIELD(arg0, s32 *, 8), temp_r1);
    return arg2;
}
