#include "m2c.h"

extern void *data_020fb914;

void func_0200fe08(void *arg0) {
    M2C_FIELD(data_020fb914, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x94);
    M2C_FIELD(data_020fb914, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x9C);
}
