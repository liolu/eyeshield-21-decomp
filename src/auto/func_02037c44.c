#include "m2c.h"

extern s32 data_021234c0;

s8 func_02037c44(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x460) + data_021234c0), s8 *, 0x10);
}
