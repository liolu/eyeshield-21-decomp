#include "m2c.h"

M2C_UNK func_0207d52c(s32);                         /* extern */
M2C_UNK func_02081820();                            /* extern */

void func_020817ec(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_02081820();
    func_0207d52c(M2C_FIELD(arg0, s32 *, 0x30));
    func_0207d52c(M2C_FIELD(arg0, s32 *, 0xC));
    func_0207d52c(M2C_FIELD(arg0, s32 *, 0x3C));
    func_0207d52c(M2C_FIELD(arg0, s32 *, 0x18));
}
