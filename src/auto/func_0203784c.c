#include "m2c.h"

extern s32 data_020ec9d8;
extern M2C_UNK data_020f00f0;
extern M2C_UNK data_020fe5bc;

s32 func_0203784c(s32 arg0) {
    if (arg0 >= 0x32) {
        return data_020ec9d8;
    }
    if (((s8 *) &data_020fe5bc)[arg0] != 0) {
        return *((M2C_UNK *) ((s8 *) &data_020f00f0 + (arg0 * 4)));
    }
    return data_020ec9d8;
}
