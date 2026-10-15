/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aec00();                            /* extern */
extern s32 data_0212c29c;

s32 func_020aec80(void) {
    s32 temp_r0;

    func_020aec00();
    temp_r0       = data_0212c29c;
    data_0212c29c = 0;
    return temp_r0;
}
