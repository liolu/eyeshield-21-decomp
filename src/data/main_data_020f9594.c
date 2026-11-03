#include "m2c.h"
extern u8 data_02130ff0[];
extern u8 func_020d36b0[];
extern u8 func_020d36b8[];
extern u8 func_020d36ec[];
u32 data_020f9594[19] = {0x00000001,           0x00000128,           0x00000000,           0x00000000, 0x00000000,
                         0x00000000,           0x00000000,           (u32) &data_02130ff0, 0x00000100, (u32) &data_02130ff0,
                         0x00000000,           0x00000000,           0x00000000,           0x00000000, 0x00000000,
                         (u32) &func_020d36ec, (u32) &func_020d36b8, (u32) &func_020d36b0, 0x00000000};
