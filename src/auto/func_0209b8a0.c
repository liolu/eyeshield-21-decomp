#include "m2c.h"

extern M2C_UNK data_02126a18;

void func_0209b8a0(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02126a18, volatile s32 *, 0) = arg0;
    M2C_FIELD(&data_02126a18, volatile s32 *, 4) = arg1;
}
