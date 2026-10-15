#include "m2c.h"

M2C_UNK func_020abb78(void *);                      /* extern */
M2C_UNK func_020abba0();                            /* extern */
void *func_020ae4a8(void *);                        /* extern */

void *func_020a08c8(void *arg0) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return arg0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC4) & 1;
    if (temp_r0 != 0) {
        return (void *) temp_r0;
    }
    func_020abb78(arg0 + 0xB4);
    func_020abba0();
    return func_020ae4a8(arg0 + 4);
}
