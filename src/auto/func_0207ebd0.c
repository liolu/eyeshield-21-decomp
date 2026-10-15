#include "m2c.h"

M2C_UNK func_0207d52c(s32);                         /* extern */
extern void *data_02123490;
extern s32 data_02123498;
extern s32 data_021234a0;

void func_0207ebd0(void) {
    void *temp_r4;
    void *var_r0;

    var_r0 = data_02123490;
    if (var_r0 != NULL) {
        do {
            temp_r4 = M2C_FIELD(var_r0, void **, 0);
            func_0207d52c(M2C_FIELD(var_r0, s32 *, 4));
            var_r0 = temp_r4;
        } while (temp_r4 != NULL);
    }
    data_02123490 = NULL;
    data_02123498 = 0;
    data_021234a0 = 0;
}
