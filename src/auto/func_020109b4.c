#include "m2c.h"

M2C_UNK func_0207da30();                            /* extern */
void *func_0207dd5c(M2C_UNK, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK func_02010a00;

void *func_020109b4(s32 arg0, s32 arg1) {
    void *temp_r0;

    if (arg0 < 0x29) {
        temp_r0 = func_0207dd5c(0x14, &func_02010a00, 0xC);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s32 *, 4) = arg0;
            M2C_FIELD(temp_r0, s32 *, 8) = arg1;
            func_0207da30();
            return temp_r0;
        }
    }
    return NULL;
}
