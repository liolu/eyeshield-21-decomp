#include "m2c.h"

M2C_UNK func_0207da30();                            /* extern */
void *func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK func_02035c70;

void *func_02035828(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_0207dca4(0x1A, &func_02035c70, 0xFC);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0xC)  = arg1;
        M2C_FIELD(temp_r0, s32 *, 0x14) = arg0;
        func_0207da30();
    }
    return temp_r0;
}
