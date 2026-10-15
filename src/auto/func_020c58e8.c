/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bef48(void);
void func_020bef5c(M2C_UNK);

extern s32 data_0212f838;

s32 func_020c58e8(void) {
    s32 temp_r0;

    temp_r0 = func_020bef48();
    if (data_0212f838 != 0) {
        func_020bef5c(temp_r0);
        return 0;
    }
    data_0212f838 = 1;
    func_020bef5c(temp_r0);
    return 1;
}
