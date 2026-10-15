#include "m2c.h"

M2C_UNK func_0207d06c();                            /* extern */
void *func_0207d1d4();                              /* extern */
M2C_UNK func_0207d52c();                            /* extern */

void func_0207d154(void) {
    void *temp_r4;

    temp_r4 = func_0207d1d4();
    func_0207d06c();
    M2C_FIELD(temp_r4, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, s16 *, 4) = 0;
    M2C_FIELD(temp_r4, s16 *, 6) = 0;
    if (M2C_FIELD(temp_r4, s32 *, 8) != 0) {
        func_0207d52c();
    }
    M2C_FIELD(temp_r4, s32 *, 8) = 0;
}
