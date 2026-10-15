#include "m2c.h"

M2C_UNK func_020b8b60(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212d780;

void func_020b8a3c(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020b8b60(&data_0212d780);
}
