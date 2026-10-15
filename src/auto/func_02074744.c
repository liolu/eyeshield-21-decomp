#include "m2c.h"

M2C_UNK func_02073b54(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_020fed00;
extern M2C_UNK data_020fed04;

void func_02074744(s32 arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 < 0) || (var_r0 >= 5)) {
        var_r0 = data_020fed00;
    }
    func_02073b54(M2C_FIELD(((var_r0 * 0x88) + (s32) &data_020fed04), s32 *, 0x84), arg1, 0);
}
