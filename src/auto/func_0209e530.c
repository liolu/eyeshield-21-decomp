#include "m2c.h"

void *func_0209e1ec();                              /* extern */

void func_0209e530(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_0209e1ec();
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x1C) = (s32) (arg1 << 0xC);
    }
}
