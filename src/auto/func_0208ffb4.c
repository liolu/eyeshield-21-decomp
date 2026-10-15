#include "m2c.h"

M2C_UNK func_02017e7c(u16);                         /* extern */

void *func_0208ffb4(s32 arg0, void *arg1) {
    func_02017e7c(M2C_FIELD(arg1, u16 *, 2));
    return arg1 + 4;
}
