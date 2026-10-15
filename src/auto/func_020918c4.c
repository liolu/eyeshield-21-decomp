#include "m2c.h"

M2C_UNK func_0207a794(M2C_UNK);                     /* extern */
M2C_UNK func_0207da30(void *);                      /* extern */
void *func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK func_02091918;

void *func_020918c4(s32 arg0, u8 arg1) {
    void *temp_r0;

    temp_r0 = func_0207dca4(2, &func_02091918, 0x278);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, volatile s32 *, 0x268) = arg0;
        M2C_FIELD(temp_r0, volatile u8 *, 0x274)  = arg1;
        if (M2C_FIELD(temp_r0, volatile u8 *, 0x274) != 0) {
            func_0207a794(0x54);
        }
        func_0207da30(temp_r0);
    }
    return temp_r0;
}
