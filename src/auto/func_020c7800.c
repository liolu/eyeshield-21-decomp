/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020befc4();                            /* extern */
M2C_UNK func_020c77b0();                            /* extern */
extern s32 data_02130140;
extern s32 (*data_02130144)();

void func_020c7800(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_02130140 = 1;
        if (data_02130144 != NULL) {
            var_r0 = data_02130144();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020c77b0();
        return;
    }
    func_020befc4();
}
