#include "m2c.h"

void *func_0207e7fc(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK data_020fecf0;

s32 func_02073d70(M2C_UNK arg0, s32 arg1) {
    s32 temp_r1;
    void *temp_r0;

    temp_r0 = func_0207e7fc(&data_020fecf0, arg0);
    if (temp_r0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0) == 0) {
        return 0;
    }
    temp_r1 = M2C_FIELD(temp_r0, s32 *, 0xC);
    if (temp_r1 == 0) {
        return 0;
    }
    if (arg1 >= (s32) M2C_FIELD(temp_r0, s32 *, 8)) {
        return 0;
    }
    return (arg1 * 0xD0) + temp_r1;
}
