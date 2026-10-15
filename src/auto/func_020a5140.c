/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020a55f8(M2C_UNK);
M2C_UNK func_020a6900(void);
void func_020a6910(M2C_UNK);
void func_020a6920(void);
void func_020a6934(M2C_UNK);

extern void *data_02128384;

void func_020a5140(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(data_02128384, s32 *, 0x80) != 0) {
        temp_r4 = func_020a6900();
        func_020a6934(1);
        func_020a6910(M2C_FIELD(data_02128384, s32 *, 0x80));
        func_020a55f8(arg0);
        func_020a6934(0);
        func_020a6910(temp_r4);
        func_020a6920();
        return;
    }
    func_020a55f8(arg0);
}
