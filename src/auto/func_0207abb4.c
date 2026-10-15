#include "m2c.h"

extern M2C_UNK data_020ffad4;

void func_0207abb4(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020ffad4 + (arg0 * 4))) = arg1;
}
