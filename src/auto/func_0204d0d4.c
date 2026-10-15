#include "m2c.h"

M2C_UNK func_0204ce70(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209b248(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_0204d0d4(void *arg0) {
    func_0209b248(0x1F, 0x34, 0, arg0 + 0x1C);
    func_0209b248(0x1F, 0x42, 0, arg0 + 0x5C);
    func_0209b248(0x1F, 0x50, 0, arg0 + 0x9C);
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    func_0204ce70(0xD0, 0x62, 0x12, 1);
}
