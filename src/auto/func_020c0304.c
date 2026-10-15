/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020be414(M2C_UNK *);                   /* extern */
M2C_UNK func_020c0a5c();                            /* extern */
M2C_UNK func_020c0bf4();                            /* extern */
extern s32 data_0212db98;
extern M2C_UNK data_0212db9c;

void func_020c0304(void) {
    if (data_0212db98 != 0) {
        return;
    }
    data_0212db98 = 1;
    func_020be414(&data_0212db9c);
    func_020c0a5c();
    func_020c0bf4();
}
