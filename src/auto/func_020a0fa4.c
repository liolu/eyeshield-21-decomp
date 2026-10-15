#include "m2c.h"

extern M2C_UNK data_02127280;

void func_020a0fa4(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_02127280 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_02127280 + (arg0 * 4))) + 1;
}
