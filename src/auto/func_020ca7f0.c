#include "m2c.h"

M2C_UNK func_020ca6c0(M2C_UNK);                     /* extern */
M2C_UNK func_020d4bd4();                            /* extern */
extern M2C_UNK (*data_02130cc4)();
extern s32 data_02130ccc;

void func_020ca7f0(M2C_UNK arg0) {
    if (data_02130ccc == 0) {
        func_020d4bd4();
        if (data_02130cc4 != NULL) {
            data_02130cc4();
            data_02130cc4 = NULL;
        }
    }
    func_020ca6c0(arg0);
}
