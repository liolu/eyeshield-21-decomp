/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b4b04(s32);                             /* extern */
s32 *func_020b4d68();                               /* extern */
s32 func_020b69d0(s32, M2C_UNK);                    /* extern */

s32 func_020b4e30(s32 arg0, M2C_UNK arg1) {
    s32 *temp_r0_2;
    s32 temp_r0;
    s32 temp_r0_3;

    temp_r0_2 = func_020b4d68();
    if (temp_r0_2 == NULL) {
        return 0;
    }
    temp_r0_3 = func_020b4b04(*temp_r0_2);
    if (temp_r0_3 == 0) {
        return 0;
    }
    temp_r0 = func_020b69d0(temp_r0_3, arg1);
    if (temp_r0 == 0) {
        return 0;
    }
    return temp_r0 + 4;
}
