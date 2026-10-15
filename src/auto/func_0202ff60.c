#include "m2c.h"

M2C_UNK func_0207da30();                            /* extern */
s32 func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK func_0202ff8c;

s32 func_0202ff60(void) {
    s32 temp_r0;

    temp_r0 = func_0207dca4(0x19, &func_0202ff8c, 0x1F4);
    if (temp_r0 != 0) {
        func_0207da30();
    }
    return temp_r0;
}
