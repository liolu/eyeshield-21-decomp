#include "m2c.h"

extern s32 *data_0212c29c;

void func_020aecac(s32 *arg0) {
    if (data_0212c29c == NULL) {
        *arg0         = 0;
        data_0212c29c = arg0;
    }
}
