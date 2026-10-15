#include "m2c.h"

M2C_UNK func_0207abb4(M2C_UNK, void *);             /* extern */
M2C_UNK func_0207da30(void *);                      /* extern */
void *func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK data_020fb694;
extern s32 data_020fb6e0;
extern M2C_UNK func_0204aad4;

void *func_0204aa40(void) {
    void *temp_r0;

    temp_r0 = func_0207dca4(4, &func_0204aad4, 0x80);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x34) = -1;
        M2C_FIELD(temp_r0, s32 *, 0x38) = -1;
        M2C_FIELD(temp_r0, s32 *, 0x3C) = -1;
        M2C_FIELD(temp_r0, s32 *, 0x40) = -1;
        M2C_FIELD(temp_r0, s32 *, 0x24) = 0;
        if (data_020fb6e0 == 1) {
            func_0207abb4(8, temp_r0 + 0x34 + (M2C_FIELD(&data_020fb694, s32 *, 4) * 4));
            func_0207abb4(9, temp_r0 + 0x3C + (M2C_FIELD(&data_020fb694, s32 *, 4) * 4));
        }
        func_0207da30(temp_r0);
    }
    return temp_r0;
}
