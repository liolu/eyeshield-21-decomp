#include "m2c.h"

extern M2C_UNK data_020defd8;

s32 func_02037a78(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020defd8 + (arg0 * 4)));
}
