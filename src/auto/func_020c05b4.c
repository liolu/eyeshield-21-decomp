/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bef48(void);
void func_020bef5c(M2C_UNK);

extern s32 data_0212dbb4;
extern s32 data_0212dbb8;
extern s32 data_0212dbd0;

s32 func_020c05b4(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020bef48();
    if (data_0212dbb8 == 0) {
        var_r4 = data_0212dbb4;
    } else {
        var_r4 = data_0212dbd0;
    }
    func_020bef5c(temp_r0);
    return var_r4;
}
