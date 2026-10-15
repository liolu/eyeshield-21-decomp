/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b8d0c();                                /* extern */
extern s32 data_0212d788;
extern s32 data_0212d78c;

void func_020bb2a0(void) {
    s32 temp_r0;

    temp_r0       = func_020b8d0c();
    data_0212d78c = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_0212d788 = 0x06894000;
            return;
        case 0x20:
            data_0212d788 = 0x06890000;
            return;
    }
}
