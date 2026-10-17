#include "m2c.h"

M2C_UNK func_020b6ae4();                            /* extern */
M2C_UNK func_020b6b24(M2C_UNK *, s16, s16);         /* extern */
M2C_UNK func_020b6bdc(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020db418;

void func_020a0510(M2C_UNK arg0) {
    u8 sp0[40];

    func_020b6ae4();
    func_020b6b24(sp0, M2C_FIELD(&data_020db418, s16 *, 0x38), M2C_FIELD(&data_020db418, s16 *, 0x3A));
    func_020b6bdc(arg0, sp0, arg0);
}
