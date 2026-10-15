/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b4898();                            /* extern */
M2C_UNK func_020c011c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020c05b4();                                /* extern */
M2C_UNK func_020c05f4(s32);                         /* extern */
M2C_UNK func_020c0684(M2C_UNK);                     /* extern */

void func_020b3854(void) {
    s32 temp_r4;

    func_020b4898();
    func_020c011c(0, 0, 0, 0);
    temp_r4 = func_020c05b4();
    func_020c0684(1);
    func_020c05f4(temp_r4);
}
