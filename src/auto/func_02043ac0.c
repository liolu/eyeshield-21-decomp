#include "m2c.h"

M2C_UNK func_02043448(void *);                      /* extern */
M2C_UNK func_02043934(void *);                      /* extern */
s32 func_020439f0();                                /* extern */
M2C_UNK func_0207a794(M2C_UNK);                     /* extern */

void func_02043ac0(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        temp_r0 = func_020439f0(arg0);
        if (temp_r0 != -1) {
            if (M2C_FIELD(arg0, s32 *, 0x14) != temp_r0) {
                M2C_FIELD(arg0, s32 *, 0x14) = temp_r0;
                func_0207a794(6);
                func_02043448(arg0);
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
            } else {
                func_0207a794(0);
                M2C_FIELD(arg0, s32 *, 0x10) = 1;
            }
        }
    }
    func_02043934(arg0);
}
