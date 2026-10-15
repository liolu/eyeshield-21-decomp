/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c11cc();                            /* extern */
s32 func_020c13b0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c13d8(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020ca26c();                            /* extern */
M2C_UNK func_020ca368();                            /* extern */
extern s32 data_02130be8;
extern s32 data_02130bec;
extern M2C_UNK func_020ca2cc;
extern M2C_UNK func_020ca32c;

void func_020ca534(void) {
    if (data_02130be8 != 0) {
        return;
    }
    data_02130be8 = 1;
    func_020ca26c();
    func_020c11cc();
    do {

    } while (func_020c13b0(0xD, 1) == 0);
    func_020c13d8(0xD, &func_020ca32c);
    func_020ca368();
    func_020c13d8(0xD, NULL);
    func_020c13d8(0xD, &func_020ca2cc);
    data_02130bec = 0;
}
