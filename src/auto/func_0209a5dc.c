#include "m2c.h"

M2C_UNK func_0207da30();                            /* extern */
s32 func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK func_0209a140;
extern M2C_UNK func_0209a52c;

s32 func_0209a5dc(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    switch (arg0) {                                 /* irregular */
        case 0:
            temp_r0 = func_0207dca4(2, &func_0209a52c, 0x68);
            if (temp_r0 != 0) {
                func_0207da30();
            }
            return temp_r0;
        case 1:
            temp_r0_2 = func_0207dca4(2, &func_0209a140, 0x68);
            if (temp_r0_2 != 0) {
                func_0207da30();
            }
            return temp_r0_2;
        default:
            return 0;
    }
}
