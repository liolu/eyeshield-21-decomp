#include "m2c.h"

extern M2C_UNK data_020fdb38;

M2C_UNK *func_020153bc(u32 arg0) {
    switch (arg0) {
        default:
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            M2C_FIELD(&data_020fdb38, s32 *, 0) = 0x4F8;
            M2C_FIELD(&data_020fdb38, s32 *, 8) = 0x2D0;
            break;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 10:
        case 11:
            M2C_FIELD(&data_020fdb38, s32 *, 0) = 0x4F8;
            M2C_FIELD(&data_020fdb38, s32 *, 8) = 0x960;
            break;
    }
    return &data_020fdb38;
}
