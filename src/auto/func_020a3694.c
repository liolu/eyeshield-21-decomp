#include "m2c.h"

M2C_UNK func_020a36a4();                            /* extern */

void func_020a3694(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    func_020a36a4();
}
