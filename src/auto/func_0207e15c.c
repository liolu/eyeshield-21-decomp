/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_02122c7c;
extern s32 data_02122c84;

void func_0207e15c(s32 arg0, s32 arg1) {
    if (arg0 & 1) {
        data_02122c84 = arg1;
    }
    if (arg0 & 2) {
        data_02122c7c = arg1;
    }
}
