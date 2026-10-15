#include "m2c.h"

M2C_UNK func_020739e8();                            /* extern */
M2C_UNK func_0207d52c(s32);                         /* extern */

void func_02073a98(void *arg0) {
    func_020739e8();
    func_0207d52c(M2C_FIELD(arg0, s32 *, 0x70));
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
}
