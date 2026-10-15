#include "m2c.h"

M2C_UNK func_020b8b60(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212d778;

void func_020b8af0(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020b8b60(&data_0212d778);
}
