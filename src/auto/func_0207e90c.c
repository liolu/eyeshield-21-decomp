#include "m2c.h"

M2C_UNK func_0207d52c(s32);                         /* extern */
M2C_UNK func_0207ecf0(void *);                      /* extern */

void func_0207e90c(void *arg0) {
    void *temp_r4;
    void *var_r5;

    var_r5 = M2C_FIELD(arg0, void **, 8);
    if (var_r5 != NULL) {
        do {
            temp_r4 = M2C_FIELD(var_r5, void **, 0);
            func_0207d52c(M2C_FIELD(var_r5, s32 *, 4));
            func_0207ecf0(var_r5);
            var_r5 = temp_r4;
        } while (temp_r4 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, void **, 8) = NULL;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
