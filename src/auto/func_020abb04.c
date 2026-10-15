#include "m2c.h"

extern M2C_UNK data_021293dc;

void func_020abb04(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021293dc + (arg0 * 4))) = arg1 | (arg0 << 0x1E);
}
