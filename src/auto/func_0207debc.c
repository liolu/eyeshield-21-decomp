#include "m2c.h"

void func_0207debc(void *arg0) {
    void *temp_r0;
    void *temp_r1;

    temp_r1                        = M2C_FIELD(arg0, void **, 4);
    temp_r0                        = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r1, void **, 8) = temp_r0;
    M2C_FIELD(temp_r0, void **, 4) = temp_r1;
}
