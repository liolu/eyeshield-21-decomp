#include "m2c.h"

extern M2C_UNK data_020d5c44;

s32 func_02037a88(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020d5c44 + (arg0 << 5)));
}
