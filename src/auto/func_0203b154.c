#include "m2c.h"

M2C_UNK func_0203db60(u8);                          /* extern */
M2C_UNK func_0207da08();                            /* extern */
M2C_UNK func_0207dbc0(void *);                      /* extern */
s32 func_0207e0e8(s32);                             /* extern */
extern M2C_UNK data_020fb6e0;

s32 func_0203b154(void *arg0, s32 arg1) {
    s32 var_r0;
    u32 temp_r0;

    if (arg1 != 0) {
        if (arg1 != 1) {
            return 0;
        }
        M2C_FIELD(arg0, s32 *, 0) = -1;
        func_0207da08();
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0) + 1;
    switch (temp_r0) {
        default:
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            M2C_FIELD(arg0, s32 *, 0)    = 1;
            break;
        case 3:
            var_r0 = M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x2000;
            if (((var_r0 != 0) || (var_r0 = M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x80, (var_r0 == 0)) ||
                 (var_r0 = M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x40, (var_r0 == 0))) &&
                (func_0207e0e8(var_r0) == 0)) {
                case 4:
                    func_0203db60(M2C_FIELD(arg0, u8 *, 0xD));
                case 0:
                    func_0207dbc0(arg0);
            }
            break;
    }
    return 0;
}
