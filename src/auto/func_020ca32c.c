/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020befc4();                            /* extern */
extern s16 data_02130be0;

void func_020ca32c(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_02130be0 = 1;
        return;
    }
    func_020befc4();
}
