/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd8fc(void *);                      /* extern */
s32 func_020bef48();                                /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */

s32 func_020c2228(void *arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r5;

    temp_r4 = func_020bef48();
    if (M2C_FIELD(arg0, volatile s32 *, 0x10) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        if (M2C_FIELD(arg0, volatile s32 *, 0x10) & 0x10) {
            M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) | 0x40);
            do {
                func_020bd8fc(arg0 + 0xE);
            } while (M2C_FIELD(arg0, volatile s32 *, 0x10) & 0x40);
        } else {
            M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) | 8);
        }
    }
    func_020bef5c(temp_r4);
    return var_r5;
}
