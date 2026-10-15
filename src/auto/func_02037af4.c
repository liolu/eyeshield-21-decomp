#include "m2c.h"

extern M2C_UNK data_020d78f0;

s32 func_02037af4(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020d78f0 + (arg0 * 8)));
}
