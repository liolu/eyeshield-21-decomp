#include "m2c.h"

s32 func_0201c0dc(void *arg0, void *arg1) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x10) <= (s32) M2C_FIELD(arg1, s32 *, 0x1C)) &&
        ((s32) M2C_FIELD(arg0, s32 *, 0x1C) >= (s32) M2C_FIELD(arg1, s32 *, 0x10)) &&
        ((s32) M2C_FIELD(arg0, s32 *, 0x18) <= (s32) M2C_FIELD(arg1, s32 *, 0x24)) &&
        ((s32) M2C_FIELD(arg0, s32 *, 0x24) >= (s32) M2C_FIELD(arg1, s32 *, 0x18))) {
        return 1;
    }
    return 0;
}
