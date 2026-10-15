/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc870();                            /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */

void func_020c9f38(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020bc870(arg0);
    }
    func_020bef5c(M2C_FIELD(arg1, s32 *, 4));
}
