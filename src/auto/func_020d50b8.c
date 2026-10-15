#include "m2c.h"

M2C_UNK func_020a0c64(M2C_UNK **);                  /* extern */
M2C_UNK func_020d5100();                            /* extern */
extern M2C_UNK data_020f99c4;

M2C_UNK **func_020d50b8(M2C_UNK **arg0) {
    *arg0 = &data_020f99c4;
    func_020d5100();
    func_020a0c64(arg0);
    return arg0;
}
