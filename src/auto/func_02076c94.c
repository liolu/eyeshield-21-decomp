#include "m2c.h"

M2C_UNK func_02076f70(void *);                      /* extern */
extern void *data_020fefe8;

void func_02076c94(void) {
    void *temp_r4;

    temp_r4 = data_020fefe8;
    if (M2C_FIELD(temp_r4, s32 *, 0x16C) != 0) {
        func_02076f70(temp_r4 + 0x16C);
        M2C_FIELD(temp_r4, s32 *, 0x16C) = 0;
    }
    if (M2C_FIELD(temp_r4, s32 *, 0x190) == 0) {
        return;
    }
    func_02076f70(temp_r4 + 0x190);
    M2C_FIELD(temp_r4, s32 *, 0x190) = 0;
}
