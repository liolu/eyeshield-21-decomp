#include "m2c.h"

M2C_UNK func_02017e48(s32);                         /* extern */

void *func_0208ff98(s32 arg0, void *arg1) {
    func_02017e48(M2C_FIELD(arg1, s32 *, 4) << 0xC);
    return arg1 + 8;
}
