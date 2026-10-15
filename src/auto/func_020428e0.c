#include "m2c.h"

M2C_UNK func_0207da30();                            /* extern */
s32 func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK func_0204290c;

s32 func_020428e0(void) {
    s32 temp_r0;

    temp_r0 = func_0207dca4(4, &func_0204290c, 0xB0);
    if (temp_r0 != 0) {
        func_0207da30();
    }
    return temp_r0;
}
