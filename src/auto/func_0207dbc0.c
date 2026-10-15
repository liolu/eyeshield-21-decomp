/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207d52c(void *);                      /* extern */

void func_0207dbc0(void *arg0) {
    void **temp_r2;
    void *temp_r0;
    void *temp_r1;

    temp_r1 = arg0 - 0x1C;
    temp_r2 = M2C_FIELD(temp_r1, void ***, 4);
    temp_r0 = M2C_FIELD(arg0, void **, -0x1C);
    if (temp_r2 != NULL) {
        *temp_r2 = temp_r0;
    }
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, void ***, 4) = temp_r2;
    }
    func_0207d52c(temp_r1);
}
