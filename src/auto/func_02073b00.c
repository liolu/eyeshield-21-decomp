#include "m2c.h"

s32 func_02073b00(void *arg0) {
    s32 *temp_r0;
    void *temp_r0_2;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, void **, 0x68);
    if (temp_r0_2 == NULL) {
        return 0;
    }
    temp_r0 = M2C_FIELD(temp_r0_2, s32 **, 8);
    if (temp_r0 != NULL) {
        return *temp_r0;
    }
    return 0;
}
