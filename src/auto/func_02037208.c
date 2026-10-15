#include "m2c.h"

extern s32 data_020ec9d8;
extern M2C_UNK data_020f01b8;
extern M2C_UNK data_020fe588;

s32 func_02037208(s32 arg0) {
    if (arg0 >= 0x31) {
        return data_020ec9d8;
    }
    if (((s8 *) &data_020fe588)[arg0] != 0) {
        return *((M2C_UNK *) ((s8 *) &data_020f01b8 + (arg0 * 4)));
    }
    return data_020ec9d8;
}
