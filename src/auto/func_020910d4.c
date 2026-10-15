#include "m2c.h"

M2C_UNK func_02089448(void *, u16);                 /* extern */

s32 func_020910d4(void *arg0, void *arg1) {
    func_02089448(arg0, M2C_FIELD(arg1, u16 *, 2));
    return M2C_FIELD(arg0, s32 *, 8);
}
