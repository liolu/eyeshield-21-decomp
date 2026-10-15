/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b4614(void *);                      /* extern */
M2C_UNK func_020c011c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_020c05b4();                                /* extern */
M2C_UNK func_020c05f4(s32);                         /* extern */
M2C_UNK func_020c0684(M2C_UNK);                     /* extern */
M2C_UNK func_020c4dd4(void *);                      /* extern */
M2C_UNK func_020c4dec(void *);                      /* extern */

void func_020b4648(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_020c011c(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_020c4dec(arg0 + 8);
        func_020c4dd4(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_020c05b4();
        func_020c0684(1);
        func_020c05f4(temp_r5);
    }
    func_020b4614(arg0);
}
