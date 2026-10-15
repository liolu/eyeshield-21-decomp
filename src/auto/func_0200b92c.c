#include "m2c.h"

M2C_UNK func_020769c8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02076a50(M2C_UNK);                     /* extern */
M2C_UNK func_02076af8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0200b92c(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_02076af8(0xE, arg1, 0, 5);
    func_02076a50(0x1000);
    func_020769c8(0x80000, arg2 << 0xC);
}
