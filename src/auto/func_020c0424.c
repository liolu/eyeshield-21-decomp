/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020befb8(M2C_UNK);                     /* extern */
s32 func_020c0350();                                /* extern */
s32 func_020c13b0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c13d8(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_020c0490;

void func_020c0424(void) {
    func_020c13d8(7, &func_020c0490);
    if (func_020c0350() == 0) {
        return;
    }
    if (func_020c13b0(7, 1) != 0) {
        return;
    }
    do {
        func_020befb8(0x64);
    } while (func_020c13b0(7, 1) == 0);
}
