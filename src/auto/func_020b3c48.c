/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b3b3c(void *);                      /* extern */
M2C_UNK func_020c020c(u8, s32);                     /* extern */
M2C_UNK func_020c02b0(u8);                          /* extern */

void func_020b3c48(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020c020c(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_020c02b0(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020b3b3c(arg0);
}
