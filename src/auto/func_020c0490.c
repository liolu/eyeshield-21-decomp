/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bef48();                                /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */
M2C_UNK func_020c0b74(M2C_UNK);                     /* extern */

void func_020c0490(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020bef48();
    func_020c0b74(arg1);
    func_020bef5c(temp_r4);
}
