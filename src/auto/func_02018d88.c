#include "m2c.h"

extern void *data_020fdb4c;

void func_02018d88(s32 arg0, s32 arg1) {
    M2C_FIELD(data_020fdb4c, s32 *, 0x24) = arg0;
    M2C_FIELD(data_020fdb4c, s32 *, 0x28) = 0;
    M2C_FIELD(data_020fdb4c, s32 *, 0x2C) = arg1;
}
