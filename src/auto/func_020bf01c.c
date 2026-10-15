/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c11cc();                            /* extern */
s32 func_020c13b0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c13d8(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_0212db58;
extern M2C_UNK func_020befd8;

void func_020bf01c(void) {
    if (data_0212db58 != 0) {
        return;
    }
    data_0212db58 = 1;
    func_020c11cc();
    do {

    } while (func_020c13b0(0xC, 1) == 0);
    func_020c13d8(0xC, &func_020befd8);
}
