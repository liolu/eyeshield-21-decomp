#include "m2c.h"

M2C_UNK func_0207d0a0(s32);                         /* extern */
M2C_UNK func_0207da08();                            /* extern */
M2C_UNK func_0207dbc0(void *);                      /* extern */
M2C_UNK func_0207e82c(M2C_UNK *, s32 *);            /* extern */
void *func_0207ecf0(void *);                        /* extern */
extern M2C_UNK data_020fecf0;

s32 func_02072f50(void *arg0, s32 arg1) {
    s32 *temp_r7;
    u32 temp_r0;
    void *var_r8;

    if (arg1 != 0) {
        if (arg1 == 1) {
            M2C_FIELD(arg0, s32 *, 0) = 2;
            func_0207da08();
            goto block_4;
        }
        return 0;
    }
block_4:
    temp_r0 = M2C_FIELD(arg0, s32 *, 0) + 1;
    switch (temp_r0) {
        default:
            break;
        case 1:
            M2C_FIELD(arg0, void **, 4) = NULL;
            M2C_FIELD(arg0, s32 *, 0)   = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            break;
        case 0:
        case 2:
        case 3:
            var_r8 = M2C_FIELD(arg0, void **, 4);
            if (var_r8 != NULL) {
                do {
                    temp_r7 = M2C_FIELD(var_r8, s32 **, 4);
                    func_0207d0a0(*temp_r7);
                    *temp_r7 = 0;
                    func_0207e82c(&data_020fecf0, temp_r7);
                    var_r8 = func_0207ecf0(var_r8);
                } while (var_r8 != NULL);
            }
            func_0207dbc0(arg0);
            break;
    }
    return 0;
}
