#include "m2c.h"

extern M2C_UNK data_020ff678;
extern M2C_UNK data_020ff67c;

void func_02078d64(s32 arg0, s32 arg1, s32 arg2) {
    *((M2C_UNK *) ((s8 *) &data_020ff678 + (arg0 << 6))) = arg1;
    *((M2C_UNK *) ((s8 *) &data_020ff67c + (arg0 << 6))) = arg2;
}
