#include "m2c.h"

extern void *data_020fdb4c;

s16 func_02018520(void) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(data_020fdb4c, void **, 0x50);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s16 *, 0xE);
    }
    return 0;
}
