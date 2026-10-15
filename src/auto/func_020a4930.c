/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a371c(void *);                      /* extern */
M2C_UNK func_020a47d0(void *, M2C_UNK);             /* extern */
M2C_UNK func_020a488c(void *, M2C_UNK);             /* extern */

void func_020a4930(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    func_020a47d0(arg0 + 0x38, 1);
    func_020a371c(arg0);
    func_020a488c(arg0, arg1);
}
