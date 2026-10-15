#include "m2c.h"

extern M2C_UNK data_020fb6e0;

s32 func_0200409c(s32 *arg0, s32 arg1) {
    *arg0                                         = arg1;
    M2C_FIELD(&data_020fb6e0, s32 *, 0x10)        = 1;
    return M2C_FIELD(&data_020fb6e0, s32 *, 0x14) = 0;
}
