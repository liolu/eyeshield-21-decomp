/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020be45c(void *, M2C_UNK);             /* extern */
s32 func_020c7d64();                                /* extern */
void *func_020c7d80();                              /* extern */

u16 func_020c82cc(void) {
    u16 temp_r0;
    void *temp_r2;
    void *temp_r4;

    temp_r4 = func_020c7d80();
    if (func_020c7d64() != 0) {
        return 0U;
    }
    func_020be45c(M2C_FIELD(temp_r4, void **, 4), 2);
    temp_r2 = M2C_FIELD(temp_r4, void **, 4);
    temp_r0 = M2C_FIELD(temp_r2, u16 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 9:
            func_020be45c(temp_r2 + 0x17E, 2);
            if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0x17E) == 0) {
                return 0U;
            }
        case 10:
        case 11:
            func_020be45c(M2C_FIELD(temp_r4, void **, 4) + 0xB8, 2);
            return M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0xB8);
        default:
            return 0U;
    }
}
