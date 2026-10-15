/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a11ac(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020bef48();                                /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */
extern M2C_UNK data_0212ccec;

void func_020b65c4(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020bef48();
    func_020a11ac(&data_0212ccec, arg0);
    func_020bef5c(temp_r4);
}
