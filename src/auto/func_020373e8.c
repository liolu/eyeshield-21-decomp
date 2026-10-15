#include "m2c.h"

extern M2C_UNK data_020fe5f0;

s32 func_020373e8(s32 arg0) {
    ((s8 *) &data_020fe5f0)[arg0] = 1;
    return 1;
}
