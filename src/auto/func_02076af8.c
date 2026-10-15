#include "m2c.h"

M2C_UNK func_02076bd8();                            /* extern */
M2C_UNK func_0207ded0(s32, void *, void *);         /* extern */
extern s32 data_020fefe8;
extern void *data_020feff4;

void *func_02076af8(s16 arg0, s16 arg1, s16 arg2, s32 arg3) {
    s16 temp_lr;
    void *temp_r4;
    void *temp_r6;

    temp_r4 = data_020fefe8 + 0x1B4;
    temp_lr = M2C_FIELD(temp_r4, s16 *, 0xC4);
    if ((s32) temp_lr >= (s32) M2C_FIELD(temp_r4, s16 *, 0xC6)) {
        return NULL;
    }
    temp_r6                         = M2C_FIELD(temp_r4, s32 *, 0xC0) + (temp_lr * 0x34);
    data_020feff4                   = temp_r6;
    M2C_FIELD(temp_r6, s16 *, 0x14) = arg0;
    M2C_FIELD(temp_r6, s16 *, 0x16) = arg1;
    M2C_FIELD(temp_r6, s16 *, 0x18) = arg2;
    func_02076bd8();
    M2C_FIELD(temp_r4, s16 *, 0xC4) = (s16) (M2C_FIELD(temp_r4, s16 *, 0xC4) + 1);
    func_0207ded0((arg3 * 0xC) + (s32) temp_r4, temp_r6 + 4, temp_r6);
    return temp_r6;
}
