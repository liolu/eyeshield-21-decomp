/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0212725c;

void func_0209e63c(s32 arg0) {
    void *var_r2;

    if (data_0212725c == NULL) {
        return;
    }
    var_r2 = M2C_FIELD(data_0212725c, void **, 4);
    if (var_r2 == NULL) {
        return;
    }
    if (var_r2 == NULL) {
        return;
    }
    do {
        M2C_FIELD(var_r2, s32 *, 0x24) = (s32) (M2C_FIELD(var_r2, s32 *, 0x24) | arg0);
        var_r2                         = M2C_FIELD(var_r2, void **, 0);
    } while (var_r2 != NULL);
}
