/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0212725c;

void func_0209e194(s32 arg0) {
    void *var_r3;

    if (data_0212725c == NULL) {
        return;
    }
    var_r3 = M2C_FIELD(data_0212725c, void **, 4);
    if (var_r3 == NULL) {
        return;
    }
    if (arg0 < 0) {
        return;
    }
    if (var_r3 == NULL) {
        return;
    }
loop_9:
    if (var_r3 == NULL) {
        return;
    }
    if (M2C_FIELD(var_r3, s32 *, 8) == arg0) {
        M2C_FIELD(var_r3, s32 *, 8) = -1;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    if (var_r3 == NULL) {
        return;
    }
    goto loop_9;
}
