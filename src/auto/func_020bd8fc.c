/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd73c();                            /* extern */
s32 func_020bef48();                                /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */
extern void **data_0212d82c;

void func_020bd8fc(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_020bef48();
    temp_r2 = *data_0212d82c;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_020bd73c();
    func_020bef5c(temp_r4);
}
