#include "m2c.h"

M2C_UNK func_02081450(u16);                         /* extern */
M2C_UNK func_02081474(M2C_UNK);                     /* extern */

void func_020800ec(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_02081474(9);
        func_02081450(M2C_FIELD(arg0, u16 *, 2));
        return;
    }
    func_02081474(1);
}
