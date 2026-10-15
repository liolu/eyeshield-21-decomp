#include "m2c.h"

M2C_UNK func_020769c8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020769ec(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02076a50(M2C_UNK);                     /* extern */
M2C_UNK func_02076af8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0201af10(s32 arg0) {
    func_02076af8(0, 0, 0, 1);
    func_020769c8(0x80000, 0x60000);
    func_02076af8(1, 4, 1, 0);
    func_020769ec(0x80000, 0x60000);
    if ((arg0 >= 0x1E) && (arg0 < 0x96)) {
        func_02076af8(1, 1, 1, 3);
        func_02076a50(0x80);
        func_020769ec(0x80000, 0x58000);
        func_02076af8(1, 2, 1, 2);
        func_02076a50(0x80);
        func_020769ec(0x80000, 0x58000);
        func_02076af8(1, 3, 1, 3);
        func_02076a50(0x80);
        func_020769ec(0x80000, 0x60000);
        func_02076af8(1, 7, 1, 1);
        func_02076a50(0x80);
        func_020769ec(0x30000, 0x54000);
    }
    if (arg0 < 0x96) {
        return;
    }
    func_02076af8(1, 1, 1, 3);
    func_02076a50(0x80);
    func_020769ec(0x80000, 0x58000);
    func_02076af8(1, 2, 1, 2);
    func_02076a50(0x80);
    func_020769ec(0x80000, 0x58000);
    func_02076af8(1, 3, 1, 3);
    func_02076a50(0x80);
    func_020769ec(0x80000, 0x60000);
    func_02076af8(1, 6, 1, 3);
    func_02076a50(0x80);
    func_020769ec(0x30000, 0x54000);
}
