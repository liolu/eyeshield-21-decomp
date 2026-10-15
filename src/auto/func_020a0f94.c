#include "m2c.h"

extern M2C_UNK data_02127280;

s32 func_020a0f94(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02127280 + (arg0 * 4)));
}
