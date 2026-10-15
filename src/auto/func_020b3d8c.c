/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020a1044(s32, M2C_UNK);                  /* extern */
M2C_UNK func_020a105c(s32, void *);                 /* extern */
M2C_UNK func_020b53c4(s32);                         /* extern */
extern M2C_UNK data_0212c730;

s32 func_020b3d8c(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_0212c730;
    temp_r0 = func_020a1044(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020a105c(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    func_020b53c4(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
