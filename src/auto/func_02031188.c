/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020fb6e0;
extern u8 *data_020fe440;

void func_02031188(void) {
    if (data_020fe440 == NULL) {
        return;
    }
    if ((M2C_FIELD(&data_020fb6e0, s32 *, 0) == 2) && (M2C_FIELD(&data_020fb6e0, s32 *, 0x44) & 0x100)) {
        return;
    }
    *data_020fe440 |= 8;
}
