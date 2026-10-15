/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020af9b0(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020afa30(M2C_UNK, M2C_UNK);
M2C_UNK func_020afa40(M2C_UNK, M2C_UNK);
void func_020b1a34(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020b1a8c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020b19ac(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r5;
    u8 temp_r1;
    void *temp_r0;

    temp_r5 = M2C_FIELD(arg1, s32 *, 8);
    temp_r0 = (void *) func_020af9b0(temp_r5, (s32) (u16) arg2, (s32) ((u32) (M2C_FIELD(arg1, s32 *, 0) * 0x10) >> 0x10));
    func_020b1a8c(M2C_FIELD(arg1, s32 *, 0x14), func_020afa40(temp_r5, (s32) M2C_FIELD(temp_r0, u8 *, 2)), arg0);
    temp_r1 = M2C_FIELD(temp_r0, u8 *, 3);
    if (temp_r1 == 0xFF) {
        return;
    }
    func_020b1a34(M2C_FIELD(arg1, s32 *, 0x14), func_020afa30(temp_r5, (s32) temp_r1), arg0);
}
