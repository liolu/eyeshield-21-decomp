/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c00c4(s32, M2C_UNK);                /* extern */
extern s32 data_0212c2d4;

void func_020b3a44(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020c00c4(arg0, 0);
    data_0212c2d4 &= ~arg0;
}
