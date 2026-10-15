#include "m2c.h"

extern M2C_UNK data_0212f7e8;

s32 func_020c42e8(s32 arg0) {
    return M2C_FIELD(&data_0212f7e8, u16 *, 0x34) & arg0;
}
