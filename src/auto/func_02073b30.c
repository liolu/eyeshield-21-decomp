/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02073b30(void *arg0, s32 arg1) {
    s32 *temp_r0_2;
    void *temp_r0;

    if (arg0 == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0x68);
    if (temp_r0 == NULL) {
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, s32 **, 8);
    if (temp_r0_2 != NULL) {
        *temp_r0_2 = arg1;
    }
}
