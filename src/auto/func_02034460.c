#include "m2c.h"

extern M2C_UNK data_020fb6e0;
extern M2C_UNK data_020fb770;

s32 func_02034460(s32 arg0) {
    if (M2C_FIELD(&data_020fb6e0, s32 *, 0) != 2) {
        return arg0;
    }
    if (*((M2C_UNK *) ((s8 *) &data_020fb770 + (M2C_FIELD(&data_020fb6e0, s32 *, 0x1C) * 4))) != 0) {
        return arg0;
    }
    if (*((M2C_UNK *) ((s8 *) &data_020fb770 + (M2C_FIELD(&data_020fb6e0, s32 *, 0x20) * 4))) != 0) {
        return arg0;
    }
    if (arg0 == 0) {
        return 8;
    }
    return 9;
}
