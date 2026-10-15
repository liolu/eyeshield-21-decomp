/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b6fa4(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020b71c4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020b7558(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK data_02129334;
extern M2C_UNK data_02129380;
extern M2C_UNK data_021293f0;
extern M2C_UNK data_02129464;
extern M2C_UNK data_02129494;

void func_020ab7d0(void) {
    func_020b6fa4(&data_021293f0, &data_02129380, &data_02129464);
    func_020b7558(&data_02129464, &data_02129464, M2C_FIELD(&data_02129334, s32 *, 0xEC),
                  M2C_FIELD(&data_02129334, s32 *, 0xF0), M2C_FIELD(&data_02129334, s32 *, 0xF4));
    func_020b71c4(&data_02129464, &data_02129494);
}
