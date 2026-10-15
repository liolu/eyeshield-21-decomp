#include "m2c.h"

M2C_UNK func_0207da30(void *);                      /* extern */
void *func_0207dca4(M2C_UNK, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK func_0209fda0;

void *func_0209fd14(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r0;

    temp_r0 = func_0207dca4(0x11, &func_0209fda0, 0x190);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, volatile s32 *, 0x1C) = arg1;
        if ((s32) M2C_FIELD(temp_r0, volatile s32 *, 0x1C) > 0x1E) {
            M2C_FIELD(temp_r0, volatile s32 *, 0x1C) = 0x1E;
        }
        M2C_FIELD(temp_r0, volatile s32 *, 4)     = arg2;
        M2C_FIELD(temp_r0, volatile s32 *, 0x14)  = arg3;
        M2C_FIELD(temp_r0, volatile s32 *, 0x188) = arg0;
        M2C_FIELD(temp_r0, volatile s32 *, 0x18C) = arg4;
        M2C_FIELD(temp_r0, volatile u16 *, 0xA)   = 0x7FFFU;
        M2C_FIELD(temp_r0, volatile u16 *, 8)     = (u16) M2C_FIELD(temp_r0, volatile u16 *, 0xA);
        M2C_FIELD(temp_r0, volatile s32 *, 0xC)   = 0x1F;
        M2C_FIELD(temp_r0, volatile s32 *, 0x10)  = 0;
        func_0207da30(temp_r0);
    }
    return temp_r0;
}
