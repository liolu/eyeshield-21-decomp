#include "m2c.h"

s32 func_0206aa34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_ip;

    var_ip = arg2 + arg1;
    if (var_ip < arg3) {
        var_ip = arg4 - (arg3 - var_ip);
    }
    if (var_ip >= arg4) {
        var_ip = arg3 + (var_ip - arg4);
    }
    if (arg0 == var_ip) {
        return 1;
    }
    return 0;
}
