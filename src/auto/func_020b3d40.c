/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b6a7c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020b6aac(void *);                      /* extern */

void func_020b3d40(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2F)  = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x40)  = 0x7F;
    M2C_FIELD(arg0, s8 *, 0x41)  = 0x7F;
    func_020b6aac(arg0 + 0x1C);
    func_020b6a7c(arg0 + 0x1C, 0x7F00, 1);
}
