/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c3130();                            /* extern */
extern s32 data_0212f778;

void func_020c3080(s32 arg0) {
    if (data_0212f778 != 0) {
        return;
    }
    data_0212f778 = 1;
    func_020c3130(arg0);
}
