#include "m2c.h"

extern M2C_UNK data_020f60ac;
extern M2C_UNK data_020f63fc;

M2C_UNK *func_020814e4(u32 arg0) {
    if (arg0 < 0x17U) {
        return *((M2C_UNK *) ((s8 *) &data_020f63fc + (arg0 * 4)));
    }
    return &data_020f60ac;
}
