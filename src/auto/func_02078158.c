#include "m2c.h"

void *func_0207dbec(M2C_UNK, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK func_02078180;

void func_02078158(s32 arg0) {
    void *temp_r0;

    temp_r0 = func_0207dbec(0, &func_02078180, 8);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 4) = arg0;
    }
}
