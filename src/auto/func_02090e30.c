#include "m2c.h"

M2C_UNK func_02073b30(s32, s32);                    /* extern */

void *func_02090e30(void *arg0, void *arg1) {
    func_02073b30(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg1, s32 *, 4) << 0xC);
    return arg1 + 8;
}
