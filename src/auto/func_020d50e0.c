#include "m2c.h"

M2C_UNK func_020d5100();                            /* extern */
extern M2C_UNK data_020f99c4;

M2C_UNK **func_020d50e0(M2C_UNK **arg0) {
    *arg0 = &data_020f99c4;
    func_020d5100();
    return arg0;
}
