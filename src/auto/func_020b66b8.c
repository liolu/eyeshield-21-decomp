/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b65fc();           /* extern */
M2C_UNK func_020b6670();                            /* extern */
M2C_UNK func_020b6834();                      /* extern */
extern s32 data_0212cce8;
extern M2C_UNK data_0212d1a4;

void func_020b66b8(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020b6670(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x160)(arg0);
    func_020b65fc(&data_0212d1a4, arg0);
    if (data_0212cce8 != 0) {
        func_020b65fc(data_0212cce8 + 0x4AC, arg0);
    }
    func_020b6834(arg0);
}
