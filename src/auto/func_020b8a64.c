#include "m2c.h"

M2C_UNK func_020b8b60(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212d77e;

void func_020b8a64(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020b8b60(&data_0212d77e);
}
