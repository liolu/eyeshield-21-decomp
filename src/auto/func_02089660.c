#include "m2c.h"

extern M2C_UNK data_020fb6e0;

void *func_02089660(s32 arg0, void *arg1) {
    s32 temp_r3;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg1, u16 *, 2);
    temp_r3 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r0) {
        default:
            break;
        case 0:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x3C) = temp_r3;
            break;
        case 1:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x3C) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x3C) | temp_r3);
            break;
        case 2:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x3C) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x3C) & temp_r3);
            break;
        case 3:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x3C) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x3C) & ~temp_r3);
            break;
    }
    return arg1 + 8;
}
