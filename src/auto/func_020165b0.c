#include "m2c.h"

M2C_UNK func_02016848(s32, s32);                    /* extern */
M2C_UNK func_020b7ac8(s32, M2C_UNK);                /* extern */
s32 func_020ca8d8();                                /* extern */

void func_020165b0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, volatile s32 *, 0x34) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x34) - (arg1 << 0xC));
    func_02016848(M2C_FIELD(arg0, volatile s32 *, 0xC), M2C_FIELD(arg0, volatile s32 *, 0x34));
    func_020b7ac8(M2C_FIELD(arg0, volatile s32 *, 0x34), 0x3C000);
    M2C_FIELD(arg0, volatile s32 *, 0x38) = func_020ca8d8();
}
