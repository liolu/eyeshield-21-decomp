#include "engine.h"
#include "m2c.h"

void func_0200a8f0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020769b4(M2C_UNK);
void func_020769c8(M2C_UNK, M2C_UNK);
void func_02076a50(M2C_UNK);
void func_02076af8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020872f0(M2C_UNK);

extern M2C_UNK data_020fb694;

void func_0200aa10(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) > 0) {
        var_r4 = arg0 + 0xC;
        do {
            func_020872f0(var_r4);
            var_r5 += 1;
            var_r4 += 0xE0;
        } while (var_r5 < (s32) M2C_FIELD(arg0, s32 *, 8));
    }
    func_0200a8f0(0x3D, 0xA8, M2C_FIELD(&data_020fb694, s32 *, 0x2C), 1);
    func_0200a8f0(0xC3, 0xA8, M2C_FIELD(&data_020fb694, s32 *, 0x48), 1);
    func_02076af8(0x11, 0xA, 1, 1);
    func_020769c8(0x80000, 0xA8000);
    func_02076af8(0x11, 0xB, 1, 6);
    func_02076a50(0x1400);
    func_020769c8(0x80000, 0x60000);
    func_020769b4((s32) M2C_FIELD(arg0, u16 *, 0x38C));
}
