/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020be5b4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020be5c8(M2C_UNK, s32);                /* extern */
s32 func_020be5dc(M2C_UNK);                         /* extern */
s32 func_020be6c4(M2C_UNK);                         /* extern */
extern s32 data_0212da78;

void func_020be898(void) {
    if (data_0212da78 != 0) {
        return;
    }
    data_0212da78 = 1;
    func_020be5c8(0, func_020be6c4(0));
    func_020be5b4(0, func_020be5dc(0));
    func_020be5b4(2, 0);
    func_020be5c8(2, 0);
    func_020be5c8(3, func_020be6c4(3));
    func_020be5b4(3, func_020be5dc(3));
    func_020be5c8(4, func_020be6c4(4));
    func_020be5b4(4, func_020be5dc(4));
    func_020be5c8(5, func_020be6c4(5));
    func_020be5b4(5, func_020be5dc(5));
    func_020be5c8(6, func_020be6c4(6));
    func_020be5b4(6, func_020be5dc(6));
}
