#include "m2c.h"

void func_02050aec(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xC) + arg0), s32 *, 0xFC) = arg2;
}
