#include "m2c.h"

M2C_UNK func_0207d52c(s32);                         /* extern */
extern s32 data_02123494;
extern s32 data_0212349c;
extern void *data_021234ac;

void func_0207edb8(void) {
    void *temp_r4;
    void *var_r0;

    var_r0 = data_021234ac;
    if (var_r0 != NULL) {
        do {
            temp_r4 = M2C_FIELD(var_r0, void **, 0);
            func_0207d52c(M2C_FIELD(var_r0, s32 *, 4));
            var_r0 = temp_r4;
        } while (temp_r4 != NULL);
    }
    data_021234ac = NULL;
    data_02123494 = 0;
    data_0212349c = 0;
}
