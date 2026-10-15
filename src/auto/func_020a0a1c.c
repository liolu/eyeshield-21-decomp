#include "m2c.h"

M2C_UNK func_020a0a60(M2C_UNK, s32);                /* extern */
M2C_UNK func_020c30dc(M2C_UNK);                     /* extern */
extern M2C_UNK data_020f9134;

void func_020a0a1c(s32 arg0) {
    func_020c30dc(3);
    func_020a0a60(0, *((M2C_UNK *) ((s8 *) &data_020f9134 + (arg0 * 4))));
}
