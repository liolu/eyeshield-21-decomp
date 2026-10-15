/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aec00();                            /* extern */
M2C_UNK func_020b75c4();              /* extern */
s32 func_020ba240();                             /* extern */
s32 func_020ba288();                       /* extern */

void func_020af2d8(s32 arg0, s32 arg1) {
    u8 sp0[64];

    func_020aec00();
    *(s32 *) 0x04000440 = 0;
    *(s32 *) 0x04000444 = 0;
    *(s32 *) 0x04000454 = 0;
    if (arg0 != 0) {
        do {

        } while (func_020ba288(sp0) != 0);
        func_020b75c4(sp0, arg0);
    }
    if (arg1 != 0) {
        do {

        } while (func_020ba240(arg1) != 0);
    }
    *(s32 *) 0x04000448     = 1;
    *(M2C_UNK *) 0x04000440 = 2;
}
