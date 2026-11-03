#include "m2c.h"
extern u8 func_ov000_0213e700[];
extern u8 data_ov009_02190a44[];
extern u8 func_ov009_02168ecc[];
extern u8 func_ov009_02168ed0[];
u32 data_ov009_02190dfc[5] = {(u32) &func_ov009_02168ed0, (u32) &func_ov009_02168ecc, (u32) &func_ov000_0213e700, 0x00000000,
                              (u32) &data_ov009_02190a44};
