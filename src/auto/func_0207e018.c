#include "m2c.h"

void func_0207e018(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s8 *, 0) >= 0) {
        do {
            if (var_r4 == M2C_FIELD(arg0, s8 *, 1)) {
                M2C_FIELD(arg0, M2C_UNK(**)(void *, s32), 8)(arg0, 0x200);
            }
            M2C_FIELD(arg0, M2C_UNK(**)(void *, s32), 8)(arg0, var_r4 + 0x100);
            var_r4 += 1;
        } while (var_r4 <= (s32) M2C_FIELD(arg0, s8 *, 0));
    }
    M2C_FIELD(arg0, M2C_UNK(**)(void *, s32), 8)(arg0, 0x1FF);
}
