#include "m2c.h"

M2C_UNK func_020b8d7c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212d780;

void func_020b8c44(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020b8d7c(&data_0212d780);
}
