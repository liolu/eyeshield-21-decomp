/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020be45c(u16 *, M2C_UNK);              /* extern */
s32 func_020c7d64();                                /* extern */
extern void *data_0213014c;

s32 func_020c7d08(void) {
    s32 temp_r0;

    temp_r0 = func_020c7d64();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020be45c(M2C_FIELD(data_0213014c, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_0213014c, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
