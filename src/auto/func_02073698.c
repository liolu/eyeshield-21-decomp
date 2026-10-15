#include "m2c.h"

M2C_UNK func_0207d0a0(s32);                         /* extern */
M2C_UNK func_0207d52c(s32);                         /* extern */
M2C_UNK func_020ab268(s32);                         /* extern */

void func_02073698(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) != 0) {
        func_020ab268(arg0 + 4);
    }
    func_0207d52c(M2C_FIELD(arg1, s32 *, 4));
    func_0207d0a0(M2C_FIELD(arg1, s32 *, 8));
}
