#include "m2c.h"

void *func_0207acf8(M2C_UNK);                       /* extern */
s32 func_0208007c();                                /* extern */
s32 func_0208008c();                                /* extern */
extern s32 data_020ffac8;
extern s32 data_020ffacc;
extern s32 data_020ffad0;

s32 func_0207a92c(void) {
    s32 var_r0;
    void *temp_r4;

    if (data_020ffac8 == 0) {
        return 0;
    }
    if (func_0208007c() == 5) {
        if (data_020ffad0 != func_0208008c()) {
            return -1;
        }
        if (data_020ffacc != 0) {
            return 1;
        }
        temp_r4 = func_0207acf8(0);
        if (M2C_FIELD(temp_r4, s32 *, 0xC) != M2C_FIELD(func_0207acf8(1), s32 *, 0xC)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return 0 - var_r0;
    }
    return -1;
}
