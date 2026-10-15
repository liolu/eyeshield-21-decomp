#include "m2c.h"

M2C_UNK func_0207e97c(void *, s32, M2C_UNK);                 /* extern */

void func_0207e958(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    func_0207e97c(arg0, arg1 + 8, arg2);
}
