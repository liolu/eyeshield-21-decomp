#include "m2c.h"

M2C_UNK func_0204e18c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204e230(void *, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_0204e350(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020769ec(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02076af8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209b248(M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
extern M2C_UNK data_020f3de4;
extern M2C_UNK data_020f3e0c;
extern M2C_UNK data_020f3e24;
extern M2C_UNK data_020f3e48;
extern M2C_UNK data_020f3e6c;
extern M2C_UNK data_020f3e90;
extern M2C_UNK data_020f3ebc;
extern M2C_UNK data_020f3ed0;
extern M2C_UNK data_020f3ee8;
extern M2C_UNK data_020f3f04;
extern M2C_UNK data_020f3f14;
extern M2C_UNK data_020f3f2c;
extern M2C_UNK data_020f3f44;
extern M2C_UNK data_020f3f60;
extern M2C_UNK data_020f3f70;
extern M2C_UNK data_020f3f98;
extern M2C_UNK data_020f3fb0;
extern M2C_UNK data_020f3fc8;
extern M2C_UNK data_020f3fe8;

void func_0204e3a0(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r3;
    u32 temp_r0_3;
    u32 temp_r1;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r3 < (s32) (temp_r2 - 1)) {
        temp_r1 = M2C_FIELD(arg0, u32 *, 8);
        switch (temp_r1) {                          /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 0:                                     /* switch 1 */
                if (temp_r3 > 0x1E) {
                    func_0204e230(arg0, &data_020f3de4, 0x1E, 0);
                    func_0209b248(8, 0x4C, 0, arg0 + 0x20);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0x8C) {
                    func_0204e18c(arg0, 3);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0x8C) {
                    func_0204e230(arg0, &data_020f3e0c, 0x8C, 1);
                    func_0209b248(8, 0x5F, 0, arg0 + 0x60);
                }
                break;
            case 1:                                     /* switch 1 */
                if (temp_r3 > 0x1E) {
                    func_0204e230(arg0, &data_020f3e24, 0x1E, 0);
                    func_0209b248(8, 0x4C, 0, arg0 + 0x20);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0xA0) {
                    func_0204e18c(arg0, 3);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0xA0) {
                    func_0204e230(arg0, &data_020f3e48, 0xA0, 1);
                    func_0209b248(8, 0x5F, 0, arg0 + 0x60);
                }
                break;
            case 2:                                     /* switch 1 */
                if ((temp_r3 > 0x1E) && (temp_r3 < 0xAA)) {
                    func_0204e230(arg0, &data_020f3e6c, 0x1E, 0);
                    func_0209b248(8, 0x55, 0, arg0 + 0x20);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0xAA) {
                    func_0204e18c(arg0, 0);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0xAA) {
                    func_0204e230(arg0, &data_020f3e90, 0xAA, 0);
                    func_0209b248(8, 0x4C, 0, arg0 + 0x20);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0x10E) {
                    func_0204e18c(arg0, 3);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0x10E) {
                    func_0204e230(arg0, &data_020f3ebc, 0x10E, 1);
                    func_0209b248(8, 0x5F, 0, arg0 + 0x60);
                }
                break;
            case 3:                                     /* switch 1 */
                if ((temp_r3 > 0x1E) && (temp_r3 < 0x10E)) {
                    func_0204e230(arg0, &data_020f3ed0, 0x1E, 0);
                    func_0209b248(8, 0x4C, 0, arg0 + 0x20);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0x8C) {
                    func_0204e18c(arg0, 3);
                }
                temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x14);
                if ((temp_r1_2 > 0x8C) && (temp_r1_2 < 0x10E)) {
                    func_0204e230(arg0, &data_020f3ee8, 0x8C, 1);
                    func_0209b248(8, 0x5F, 0, arg0 + 0x60);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0x10E) {
                    func_0204e18c(arg0, 2);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0x10E) {
                    func_0204e230(arg0, &data_020f3f04, 0x10E, 0);
                    func_0209b248(8, 0x55, 0, arg0 + 0x20);
                }
                break;
            case 4:                                     /* switch 1 */
                if ((temp_r3 > 0x1E) && (temp_r3 < 0x10E)) {
                    func_0204e230(arg0, &data_020f3f14, 0x1E, 0);
                    func_0209b248(8, 0x4C, 0, arg0 + 0x20);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0x8C) {
                    func_0204e18c(arg0, 3);
                }
                temp_r1_3 = M2C_FIELD(arg0, s32 *, 0x14);
                if ((temp_r1_3 > 0x8C) && (temp_r1_3 < 0x10E)) {
                    func_0204e230(arg0, &data_020f3f2c, 0x8C, 1);
                    func_0209b248(8, 0x5F, 0, arg0 + 0x60);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0x10E) {
                    func_0204e18c(arg0, 2);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0x10E) {
                    func_0204e230(arg0, &data_020f3f44, 0x10E, 0);
                    func_0209b248(8, 0x55, 0, arg0 + 0x20);
                }
                break;
            case 5:                                     /* switch 1 */
                if ((temp_r3 > 0x1E) && (temp_r3 < 0xAA)) {
                    func_0204e230(arg0, &data_020f3f60, 0x1E, 0);
                    func_0209b248(8, 0x55, 0, arg0 + 0x20);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0xAA) {
                    func_0204e18c(arg0, 0);
                }
                temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
                if ((temp_r0 > 0xAA) && (temp_r0 < 0x190)) {
                    func_0204e230(arg0, &data_020f3f70, 0xAA, 0);
                    func_0209b248(8, 0x4C, 0, arg0 + 0x20);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0x122) {
                    func_0204e18c(arg0, 3);
                }
                temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x14);
                if ((temp_r0_2 > 0x122) && (temp_r0_2 < 0x190)) {
                    func_0204e230(arg0, &data_020f3f98, 0x122, 1);
                    func_0209b248(8, 0x5F, 0, arg0 + 0x60);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0x190) {
                    func_0204e18c(arg0, 2);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0x190) {
                    func_0204e230(arg0, &data_020f3fb0, 0x190, 0);
                    func_0209b248(8, 0x55, 0, arg0 + 0x20);
                }
                break;
            case 6:                                     /* switch 1 */
                if (temp_r3 > 0x1E) {
                    func_0204e230(arg0, &data_020f3fc8, 0x1E, 0);
                    func_0209b248(8, 0x4C, 0, arg0 + 0x20);
                }
                if (M2C_FIELD(arg0, s32 *, 0x14) == 0x8C) {
                    func_0204e18c(arg0, 3);
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0x8C) {
                    func_0204e230(arg0, &data_020f3fe8, 0x8C, 1);
                    func_0209b248(8, 0x5F, 0, arg0 + 0x60);
                }
                break;
        }
        func_02076af8(0, 6, 0, 3);
        func_020769ec(0x80000, 0x60000);
    } else if ((temp_r3 >= temp_r2) && (temp_r3 < (s32) (temp_r2 + 0x3C))) {
        temp_r0_3 = M2C_FIELD(arg0, u32 *, 8);
        switch (temp_r0_3) {                        /* switch 2 */
            default:                                    /* switch 2 */
                break;
            case 0:                                     /* switch 2 */
            case 1:                                     /* switch 2 */
            case 3:                                     /* switch 2 */
            case 4:                                     /* switch 2 */
                func_0204e350(1, 1);
                func_0204e350(2, 1);
                func_0204e350(3, 0);
                func_0204e350(4, 0);
                break;
            case 2:                                     /* switch 2 */
                func_0204e350(1, 1);
                func_0204e350(2, 1);
                func_0204e350(3, 1);
                func_0204e350(4, 0);
                break;
            case 5:                                     /* switch 2 */
                func_0204e350(1, 0);
                func_0204e350(2, 0);
                func_0204e350(3, 0);
                func_0204e350(4, 1);
                break;
            case 6:                                     /* switch 2 */
                func_0204e350(1, 0);
                func_0204e350(2, 0);
                func_0204e350(3, 1);
                func_0204e350(4, 0);
                break;
        }
    } else if (temp_r3 >= (s32) (temp_r2 + 0x78)) {
        func_02076af8(0, 5, 0, 0);
        func_020769ec(0x80000, 0x60000);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) < (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 0xC4)) {
        return;
    }
    func_0204e350(8, 1);
}
