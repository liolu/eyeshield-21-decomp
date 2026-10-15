#include "m2c.h"

extern M2C_UNK data_020ff690;

void func_02078d18(s32 arg0, s16 arg1) {
    *((u16 *) ((s8 *) &data_020ff690 + (arg0 << 6))) = arg1;
}
