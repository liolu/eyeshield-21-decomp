#include "m2c.h"

M2C_UNK func_0207d52c();                      /* extern */

void func_0209a8b8(void **arg0) {
    void *temp_r5;
    void *var_r6;

    var_r6 = *arg0;
    if (var_r6 == NULL) {
        return;
    }
    do {
        temp_r5 = M2C_FIELD(var_r6, void **, 0);
        if (M2C_FIELD(var_r6, s32 *, 0x134) != 0) {
            func_0207d52c();
        }
        func_0207d52c(var_r6);
        M2C_FIELD(var_r6, void **, 0) = NULL;
        var_r6                        = temp_r5;
    } while (temp_r5 != NULL);
}
