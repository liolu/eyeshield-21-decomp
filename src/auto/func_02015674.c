#include "m2c.h"

extern M2C_UNK data_020fb6e0;
extern M2C_UNK data_020fdb30;

void *func_02015674(s32 arg0) {
    void *temp_r2;

    if (arg0 < 0) {
        return NULL;
    }
    temp_r2 = *((M2C_UNK *) ((s8 *) &data_020fdb30 + (M2C_FIELD(&data_020fb6e0, s32 *, 0xA4) * 4))) + 0x48 + (arg0 * 0xC0);
    if ((temp_r2 == NULL) || (M2C_FIELD(temp_r2, s16 *, 0xE) != arg0)) {
        return NULL;
    }
    return temp_r2;
}
