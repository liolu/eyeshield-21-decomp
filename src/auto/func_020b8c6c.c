#include "m2c.h"

M2C_UNK func_020b8d7c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212d77e;

void func_020b8c6c(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020b8d7c(&data_0212d77e);
}
