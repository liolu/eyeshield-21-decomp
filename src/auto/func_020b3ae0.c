/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a105c(s32, void *);                 /* extern */
M2C_UNK func_020b5484();                            /* extern */
extern M2C_UNK data_0212c730;

void func_020b3ae0(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_020b5484();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020a105c((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_0212c730 + 0xC, arg0);
}
