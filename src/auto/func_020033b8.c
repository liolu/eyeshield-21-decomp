#include "m2c.h"

extern M2C_UNK data_020fb6bc;

void func_020033b8(s32 arg0) {
    s32 temp_r1;

    temp_r1                                          = arg0 * 0x1C;
    *((M2C_UNK *) ((s8 *) &data_020fb6bc + temp_r1)) = *((M2C_UNK *) ((s8 *) &data_020fb6bc + temp_r1)) + 1;
}
