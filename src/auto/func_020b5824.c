/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020b4e90(s32);                             /* extern */
s32 func_020b4b04(M2C_UNK);                         /* extern */
M2C_UNK func_020b4ae8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020bef48();                                /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */

void func_020b5824(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_020bef48();
    temp_r4 = func_020b4e90(arg1);
    if (arg0 == func_020b4b04(arg2)) {
        func_020b4ae8(arg2, 0);
    }
    func_020b4e90(temp_r4);
    func_020bef5c(temp_r5);
}
