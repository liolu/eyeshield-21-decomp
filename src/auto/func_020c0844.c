/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bef48(void);
void func_020bef5c(M2C_UNK);

extern s32 data_0212dbb8;
extern s32 data_0212dbbc;

void func_020c0844(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020bef48();
    if (data_0212dbbc == 0) {
        data_0212dbbc = arg0;
        data_0212dbb8 = arg0;
    } else {
        *(M2C_UNK *) data_0212dbbc = arg0;
        data_0212dbbc              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_020bef5c(temp_r0);
}
