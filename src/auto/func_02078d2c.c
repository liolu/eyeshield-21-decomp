#include "m2c.h"

extern M2C_UNK data_020ff688;
extern M2C_UNK data_020ff68c;

void func_02078d2c(s32 arg0, s32 arg1, s32 arg2) {
    *((M2C_UNK *) ((s8 *) &data_020ff688 + (arg0 << 6))) = arg1;
    *((M2C_UNK *) ((s8 *) &data_020ff68c + (arg0 << 6))) = arg2;
}
