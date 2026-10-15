#include "m2c.h"

M2C_UNK func_020b8b60(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212d776;

void func_020b8b14(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020b8b60(&data_0212d776);
}
