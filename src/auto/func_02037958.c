#include "m2c.h"

extern M2C_UNK data_020fb6c0;

s32 func_02037958(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020fb6c0 + (arg0 * 0x1C)));
}
