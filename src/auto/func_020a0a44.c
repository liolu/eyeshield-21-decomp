#include "m2c.h"

M2C_UNK func_020c33d4(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_020f9134;

void func_020a0a44(s32 arg0) {
    func_020c33d4(0, *((M2C_UNK *) ((s8 *) &data_020f9134 + (arg0 * 4))));
}
