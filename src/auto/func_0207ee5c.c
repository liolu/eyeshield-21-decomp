#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207d690(M2C_UNK);
M2C_UNK func_0207ed38(M2C_UNK, M2C_UNK);

extern s32 data_02123494;
extern s32 data_021234ac;

s32 func_0207ee5c(s32 arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r3;

    var_r0 = func_0207d690((arg0 + 1) * 8);
    if (var_r0 == 0) {
        return 0;
    }
    temp_r1 = var_r0;
    var_r3  = 1;
    if (arg0 > 1) {
        do {
            temp_r2 = var_r0 + 8;
            var_r3 += 1;
            *(M2C_UNK *) var_r0 = temp_r2;
            var_r0              = temp_r2;
        } while (var_r3 < arg0);
    }
    *(M2C_UNK *) var_r0 = (s32) data_02123494;
    data_02123494       = temp_r1;
    data_021234ac       = func_0207ed38(data_021234ac, temp_r1);
    return arg0;
}
