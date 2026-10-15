/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a105c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020b3a08(s32);                         /* extern */
extern M2C_UNK data_0212cbb0;

void func_020b4614(void *arg0) {
    func_020b3a08(M2C_FIELD(arg0, s32 *, 0x40));
    func_020a105c(&data_0212cbb0, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
