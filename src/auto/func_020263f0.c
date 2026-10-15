#include "m2c.h"

extern M2C_UNK data_020fe1f8;

s32 func_020263f0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020fe1f8 + (arg0 * 4)));
}
