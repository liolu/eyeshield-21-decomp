#include "m2c.h"

M2C_UNK func_0207da30();                            /* extern */
s32 func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK func_0202b328;

s32 func_0202b2fc(void) {
    s32 temp_r0;

    temp_r0 = func_0207dca4(4, &func_0202b328, 0x5C);
    if (temp_r0 != 0) {
        func_0207da30();
    }
    return temp_r0;
}
