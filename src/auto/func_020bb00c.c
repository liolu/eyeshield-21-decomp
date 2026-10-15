/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b8db4(M2C_UNK);
void func_020bf398(M2C_UNK);

extern s32 data_020f94ec;
extern s32 data_0212d79c;

void func_020bb00c(void) {
    if (data_020f94ec != -1) {
        func_020bf398(data_020f94ec);
    }
    func_020b8db4(data_0212d79c);
    data_0212d79c = 0;
}
