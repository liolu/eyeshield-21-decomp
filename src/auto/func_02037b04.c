#include "m2c.h"

extern M2C_UNK data_020d78ec;

s32 func_02037b04(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020d78ec + (arg0 * 8)));
}
