/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020befc4();                            /* extern */
M2C_UNK func_020ca2ac();                            /* extern */
extern s32 (*data_02130bec)();

void func_020ca2cc(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_02130bec != NULL) {
            var_r0 = data_02130bec();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020ca2ac();
        return;
    }
    func_020befc4();
}
