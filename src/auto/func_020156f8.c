#include "m2c.h"

M2C_UNK func_02077580(u16);                         /* extern */
M2C_UNK func_0207d52c(s32);                         /* extern */
M2C_UNK func_0207e9f0();                            /* extern */

void func_020156f8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s16 *, 0xC) < 0) {
        return;
    }
    if (M2C_FIELD(arg0, void **, 0x28) != NULL) {
        func_0207e9f0();
        func_0207d52c(M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 4));
    }
    func_02077580((u16) M2C_FIELD(arg0, s16 *, 0xC));
    M2C_FIELD(arg0, s16 *, 0xC) = -1;
}
