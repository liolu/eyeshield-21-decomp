#include "m2c.h"

M2C_UNK func_02073ec0(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_020e10bc;

void func_0201cb10(s32 arg0) {
    func_02073ec0(arg0, *((M2C_UNK *) ((s8 *) &data_020e10bc + (arg0 * 4))), 0);
}
