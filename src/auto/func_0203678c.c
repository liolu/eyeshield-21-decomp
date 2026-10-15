#include "m2c.h"

M2C_UNK func_0207da30();                            /* extern */
s32 func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK func_02036814;

s32 func_0203678c(void) {
    s32 temp_r0;

    temp_r0 = func_0207dca4(0x18, &func_02036814, 0xE4);
    if (temp_r0 != 0) {
        func_0207da30();
    }
    return temp_r0;
}
