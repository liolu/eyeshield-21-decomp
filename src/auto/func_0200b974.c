#include "m2c.h"

M2C_UNK func_0207da30();                            /* extern */
s32 func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020fb6e0;
extern M2C_UNK func_0200b9b8;

s32 func_0200b974(void) {
    s32 temp_r0;

    if (M2C_FIELD(&data_020fb6e0, s32 *, 0xE0) != 0x40000011) {
        return 0;
    }
    temp_r0 = func_0207dca4(4, &func_0200b9b8, 0x24);
    if (temp_r0 != 0) {
        func_0207da30();
    }
    return temp_r0;
}
