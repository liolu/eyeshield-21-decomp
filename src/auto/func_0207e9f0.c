#include "m2c.h"

extern void *data_02123498;
extern s32 data_021234a0;

void *func_0207e9f0(void *arg0) {
    void **var_r1;
    void *var_ip;

    if (arg0 == NULL) {
        return NULL;
    }
    var_r1 = M2C_FIELD(arg0, void ***, 8);
    var_ip = M2C_FIELD(arg0, void **, 0);
    if (var_r1 == arg0) {
        var_r1 = NULL;
    }
    if (var_ip == arg0) {
        var_ip = NULL;
    }
    if (var_r1 != NULL) {
        *var_r1 = var_ip;
    }
    if (var_ip != NULL) {
        M2C_FIELD(var_ip, void ***, 8) = var_r1;
    }
    M2C_FIELD(arg0, void **, 0) = (void *) data_02123498;
    data_02123498               = arg0;
    data_021234a0 -= 1;
    return var_ip;
}
