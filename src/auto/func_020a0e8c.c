#include "m2c.h"

extern M2C_UNK data_02127314;

s32 func_020a0e8c(s32 arg0) {
    return *((u8 *) ((s8 *) &data_02127314 + (arg0 >> 3))) & (1 << (arg0 & 7));
}
