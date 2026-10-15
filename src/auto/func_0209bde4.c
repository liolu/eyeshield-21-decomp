#include "m2c.h"

M2C_UNK func_0207da08();                            /* extern */
M2C_UNK func_0207dbc0(M2C_UNK **);                  /* extern */
M2C_UNK func_0209a8b8();                            /* extern */
M2C_UNK func_0209bd48(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_02126a08;

s32 func_0209bde4(M2C_UNK **arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 6:
            func_0209bd48(&data_02126a08, *arg0);
            func_0207da08();
            return 0;
        default:
            return 0;
        case 1:
            func_0209a8b8();
            **arg0 = NULL;
            *arg0  = **arg0;
            func_0207dbc0(arg0);
            func_0207da08();
            return 0;
        case 0:
            return 0;
    }
}
