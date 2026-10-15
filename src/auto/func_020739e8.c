#include "engine.h"
#include "m2c.h"

M2C_UNK func_02073a4c(M2C_UNK, M2C_UNK);

void func_020739e8(s32 arg0) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 0x68);
    if (var_r1 != 0) {
        do {
            var_r1 = func_02073a4c(arg0, var_r1);
        } while (var_r1 != 0);
    }
    M2C_FIELD(arg0, s32 *, 0x68) = var_r1;
    M2C_FIELD(arg0, s16 *, 0x60) = -1;
    M2C_FIELD(arg0, u16 *, 0x62) = (u16) (M2C_FIELD(arg0, u16 *, 0x62) | 4);
}
