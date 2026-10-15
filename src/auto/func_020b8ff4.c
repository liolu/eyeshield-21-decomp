#include "m2c.h"

M2C_UNK func_020b9a3c();                            /* extern */
extern u16 data_0212d768;

void func_020b8ff4(s32 arg0) {
    data_0212d768 |= arg0;
    func_020b9a3c(arg0);
}
