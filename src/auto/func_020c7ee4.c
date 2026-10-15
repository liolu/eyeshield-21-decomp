#include "m2c.h"

extern s32 data_0213014c;

void func_020c7ee4(s32 arg0, s32 arg1) {
    M2C_FIELD((data_0213014c + (arg0 * 4)), s32 *, 0x18) = arg1;
}
