#include "m2c.h"

M2C_UNK func_0209a42c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK *func_020cd3f8(M2C_UNK *, M2C_UNK);         /* extern */
s32 func_020cd43c(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_020cd5b8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020cd64c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f9074;

void func_0209a468(M2C_UNK arg0) {
    u8 sp0[256];
    M2C_UNK *var_r0;

    func_020cd64c(sp0);
    var_r0 = func_020cd3f8(sp0, 0x5C);
    if (var_r0 == NULL) {
        var_r0 = sp0;
    }
    if (func_020cd43c(var_r0, 0x2E) == 0) {
        func_020cd5b8(sp0, &data_020f9074);
    }
    func_0209a42c(arg0, sp0);
}
