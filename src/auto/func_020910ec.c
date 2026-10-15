#include "m2c.h"

extern M2C_UNK data_020f9de4;

s32 func_020910ec(void) {
    return M2C_FIELD(&data_020f9de4, s32 *, 0x2C) = 0;
}
