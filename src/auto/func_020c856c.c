/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bef48();                                /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */
s32 func_020c7d64();                                /* extern */
void *func_020c7d80();                              /* extern */

s32 func_020c856c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020bef48();
    temp_r0 = func_020c7d64();
    if (temp_r0 != 0) {
        func_020bef5c(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_020c7d80(), s32 *, 0xBC) = arg0;
    func_020bef5c(temp_r5);
    return 0;
}
