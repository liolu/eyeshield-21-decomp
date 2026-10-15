#include "m2c.h"

M2C_UNK func_0207d52c();                            /* extern */
extern s32 data_020fefe8;

void func_02076c10(void) {
    void *temp_r4;

    temp_r4 = data_020fefe8 + 0x1B4;
    if (M2C_FIELD(temp_r4, s32 *, 0xC0) != 0) {
        func_0207d52c();
    }
    M2C_FIELD(temp_r4, s16 *, 0xC6) = 0;
    M2C_FIELD(temp_r4, s16 *, 0xC4) = 0;
}
