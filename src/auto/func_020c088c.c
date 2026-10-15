/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c0350();                                /* extern */
s32 func_020c0398();                                /* extern */
M2C_UNK func_020c03f0();                            /* extern */
s32 func_020c04c0(s32);                             /* extern */
M2C_UNK func_020c0684(M2C_UNK);                     /* extern */
s32 func_020c0928(M2C_UNK);                         /* extern */

s32 func_020c088c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_020c0350() == 0) {
        return 0;
    }
    temp_r0_3 = func_020c0398();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_020c04c0(temp_r0_4) > 0) {
        do {

        } while (func_020c0928(0) != 0);
        temp_r0_2 = func_020c0398();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020c0684(1);
block_12:
    func_020c03f0();
    do {
        func_020c0928(1);
        temp_r0 = func_020c0398();
    } while (temp_r0 == 0);
    return temp_r0;
}
