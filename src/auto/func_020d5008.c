#include "m2c.h"

M2C_UNK func_020a0c64(M2C_UNK **);                  /* extern */
M2C_UNK func_020d5098();                            /* extern */
extern M2C_UNK data_020f99a4;

M2C_UNK **func_020d5008(M2C_UNK **arg0) {
    *arg0 = &data_020f99a4;
    func_020d5098();
    func_020a0c64(arg0);
    return arg0;
}
