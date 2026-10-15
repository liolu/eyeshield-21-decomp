#include "m2c.h"

M2C_UNK func_020c2bf0(M2C_UNK *);                   /* extern */
M2C_UNK func_020c2cc0(M2C_UNK *);                   /* extern */
M2C_UNK func_020c3058(M2C_UNK *);                   /* extern */
M2C_UNK func_020c3548(M2C_UNK *);                   /* extern */
M2C_UNK func_020c36ec(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_020c3784(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */

s32 func_020a0a60(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp2C[72];
    u8 sp0[44];

    if (func_020c3784(sp0, arg0, arg1) == 0) {
        return 0;
    }
    func_020c3058(sp2C);
    func_020c36ec(sp0, sp2C);
    func_020c2bf0(sp2C);
    func_020c2cc0(sp2C);
    func_020c3548(sp0);
    return 1;
}
