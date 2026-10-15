/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a105c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020b3c84(void *);                      /* extern */
M2C_UNK func_020b3ce4(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_0212c2e4;

void func_020b3a7c(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_020a105c(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_020a105c(&data_0212c2e4, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_020b3ce4(temp_r4, arg0);
    }
    func_020b3c84(arg0);
}
