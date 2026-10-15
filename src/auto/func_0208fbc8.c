#include "m2c.h"

extern M2C_UNK data_020fb6e0;

void *func_0208fbc8(void *arg0, void *arg1) {
    s32 temp_r2;
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg1, u16 *, 2);
    temp_r2 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r3) {
        default:
            break;
        case 0:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x30) = temp_r2;
            break;
        case 1:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x30) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) | temp_r2);
            break;
        case 2:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x30) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & temp_r2);
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & temp_r2);
            break;
        case 4:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x34) = temp_r2;
            break;
        case 5:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x34) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x34) | temp_r2);
            break;
        case 6:
            M2C_FIELD(&data_020fb6e0, s32 *, 0x34) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x34) & temp_r2);
            break;
        case 7:
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x34) & temp_r2);
            break;
    }
    return arg1 + 8;
}
