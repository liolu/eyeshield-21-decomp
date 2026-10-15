#include "m2c.h"

M2C_UNK func_0207d52c();                            /* extern */

void func_02076f70(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        func_0207d52c();
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
