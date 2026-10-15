#include "m2c.h"

M2C_UNK func_020ba228(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d80dc;

void func_02038328(void) {
    *(u16 *) 0x04000060 = (*(u16 *) 0x04000060 & ~0x3000) | 0x20;
    func_020ba228(&data_020d80dc);
}
