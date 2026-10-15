#include "engine.h"
#include "m2c.h"

void func_0207d52c(M2C_UNK);

extern void **data_02122c74;

void func_0207db6c(void) {
    void **temp_r1;
    void *temp_r4;
    void *var_r0;

    var_r0 = *data_02122c74;
    if (var_r0 == NULL) {
        return;
    }
    do {
        temp_r4 = M2C_FIELD(var_r0, void **, 0);
        if (M2C_FIELD(var_r0, s32 *, 8) != 0) {
            temp_r1 = M2C_FIELD(var_r0, void ***, 4);
            if (temp_r1 != NULL) {
                *temp_r1 = temp_r4;
            }
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, void ***, 4) = temp_r1;
            }
            func_0207d52c((s32) var_r0);
        }
        var_r0 = temp_r4;
    } while (temp_r4 != NULL);
}
