#include "m2c.h"

M2C_UNK func_020a0c64();                            /* extern */
extern M2C_UNK data_020f9994;

M2C_UNK **func_020d5110(M2C_UNK **arg0) {
    *arg0 = &data_020f9994;
    func_020a0c64();
    return arg0;
}
