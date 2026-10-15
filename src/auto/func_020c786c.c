/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c11cc();                            /* extern */
M2C_UNK func_020c13d8(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_02130144;
extern M2C_UNK func_020c7800;

void func_020c786c(void) {
    func_020c11cc();
    func_020c13d8(0xE, &func_020c7800);
    data_02130144 = 0;
}
