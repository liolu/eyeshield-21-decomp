#include "m2c.h"

M2C_UNK func_02073b54(s32, s32, M2C_UNK);           /* extern */

void *func_02090e50(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r1;
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg1, u16 *, 2);
    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x54);
    switch (temp_r2) {                              /* irregular */
        case 0:
            func_02073b54(temp_r0, temp_r1, 0x20);
            break;
        case 1:
            func_02073b54(temp_r0, temp_r1, 0);
            break;
    }
    return arg1 + 8;
}
