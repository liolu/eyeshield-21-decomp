/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bdf3c();                                /* extern */
M2C_UNK func_020be5b4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020be5c8(M2C_UNK, s32);                /* extern */
s32 func_020be5dc(M2C_UNK);                         /* extern */
s32 func_020be6c4(M2C_UNK);                         /* extern */
M2C_UNK func_020beaa0(s32);                         /* extern */
M2C_UNK func_020beaa8(s32);                         /* extern */
extern s32 data_0212da7c;

void func_020be818(void) {
    func_020be5c8(2, func_020be6c4(2));
    func_020be5b4(2, func_020be5dc(2));
    if ((data_0212da7c != 0) && ((func_020bdf3c() & 3) != 1)) {
        return;
    }
    func_020beaa0(0x0200002B);
    func_020beaa8(0x023E0021);
}
