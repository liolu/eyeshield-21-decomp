#include "m2c.h"

extern M2C_UNK data_0212c74c;

void func_020b45dc(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0212c74c + (arg0 * 0x24))) = arg1;
}
