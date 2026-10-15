#include "m2c.h"

M2C_UNK func_020b8d7c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212d778;

void func_020b8d0c(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020b8d7c(&data_0212d778);
}
