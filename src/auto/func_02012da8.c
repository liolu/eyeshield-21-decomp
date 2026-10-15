#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201ca88(M2C_UNK);
M2C_UNK func_02072e58(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02073d44(M2C_UNK);
void func_0207b0ec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0207b280(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020af668(M2C_UNK);

void func_02012da8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02073d44(arg4);
    var_r4  = 0;
    if (temp_r0 != 0) {
        var_r4 = func_020af668(temp_r0);
    }
    if (var_r4 == 0) {
        var_r4                       = func_0201ca88(arg4);
        M2C_FIELD(arg0, s32 *, 0xCC) = func_02072e58(M2C_FIELD(arg0, s32 *, 0xCC), arg4, var_r4);
    }
    if (var_r4 == 0) {
        return;
    }
    func_0207b280(arg1, var_r4, arg2, 0);
    func_0207b0ec(arg1, var_r4, arg3, 0);
}
