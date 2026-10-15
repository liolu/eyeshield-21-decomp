#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207d690(M2C_UNK);
M2C_UNK func_0207eb20(M2C_UNK, M2C_UNK);

extern s32 data_02123490;
extern s32 data_02123498;

s32 func_0207ec74(s32 arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r3;

    var_r0 = func_0207d690(arg0 * 0xC);
    if (var_r0 == 0) {
        return 0;
    }
    temp_r1 = var_r0;
    var_r3  = 1;
    if (arg0 > 1) {
        do {
            temp_r2 = var_r0 + 0xC;
            var_r3 += 1;
            *(M2C_UNK *) var_r0 = temp_r2;
            var_r0              = temp_r2;
        } while (var_r3 < arg0);
    }
    *(M2C_UNK *) var_r0 = (s32) data_02123498;
    data_02123498       = temp_r1;
    data_02123490       = func_0207eb20(data_02123490, temp_r1);
    return arg0;
}
