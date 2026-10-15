/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd73c();                            /* extern */
s32 func_020bef48();                                /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */

void func_020bd854(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020bef48();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020bd73c();
    func_020bef5c(temp_r4);
}
