#include "m2c.h"

u16 *func_02015638(u8);                             /* extern */
extern M2C_UNK data_020fb6e0;

void func_0202fb1c(void) {
    s32 *var_r4;
    u16 *temp_r0;

    var_r4 = M2C_FIELD(&data_020fb6e0, s32 **, 0x184);
    if ((s32) *var_r4 < 0) {
        return;
    }
    do {
        temp_r0 = func_02015638(M2C_FIELD(var_r4, u8 *, 4));
        *temp_r0 |= 3;
        var_r4 = (s32 *) ((s8 *) var_r4 + 0xC);
    } while (*var_r4 == 0);
}
