/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c5938();                            /* extern */
s32 func_020c6078(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_0212f880;
extern M2C_UNK func_020c5950;

s32 func_020c6034(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_020c6078(arg0, &func_020c5950, 0);
    M2C_FIELD(&data_0212f880, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_020c5938();
    }
    return M2C_FIELD(&data_0212f880, s32 *, 0x20);
}
