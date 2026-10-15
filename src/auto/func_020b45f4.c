#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0212c748;

void func_020b45f4(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0212c748 + (arg0 * 0x24))) = (s32) (u16) arg1;
}
