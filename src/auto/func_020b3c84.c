/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020a1044();            /* extern */
M2C_UNK func_020a10c8();   /* extern */
extern M2C_UNK data_0212c2e4;

void func_020b3c84(void *arg0) {
    void *var_r1;

    var_r1 = func_020a1044(&data_0212c2e4, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020a1044(&data_0212c2e4);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_020a10c8(&data_0212c2e4, var_r1, arg0);
}
