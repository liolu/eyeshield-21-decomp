#include "m2c.h"

M2C_UNK func_0207da30();                            /* extern */
void *func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK func_02036a0c;

void *func_02036944(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_0207dca4(0xB, &func_02036a0c, 0xF4);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 8)    = arg0;
        M2C_FIELD(temp_r0, s32 *, 0x10) = arg1;
        func_0207da30();
    }
    return temp_r0;
}
