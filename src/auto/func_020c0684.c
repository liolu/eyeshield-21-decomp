/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_FlushCommand from https://github.com/RonyxDumb/mkds src/arm9/020211e4_Sound_FlushCommand.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *func_020c0928(u32 flags);
extern BOOL func_020c0684(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_020bef48(void);
extern OSIntrMode func_020bef5c(OSIntrMode state);
extern void func_020befb8(u32 cycles);
extern void func_020be494(register const void *startAddr, register u32 nBytes);
extern s32 func_020c12fc(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_0212de80[256];
extern struct SNDCommand *data_0212dbd4[8 + 1];
extern struct SNDCommand *data_0212dbb8;
extern struct SNDCommand *data_0212dbbc;
extern s32 data_0212dbc8;
extern s32 data_0212dbcc;
extern u32 data_0212dbd0;
extern void func_020c03f0(void);
const struct SNDCommand *func_020c0928(u32 flags);
BOOL func_020c0684(u32 flags) {
    OSIntrMode oldirq = func_020bef48();

    if (data_0212dbb8 == ((void *) 0)) {
        (void) func_020bef5c(oldirq);
        return 1;
    }

    if (data_0212dbcc >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_020bef5c(oldirq);
            return 0;
        }

        do {
            (void) func_020c0928(0x1);
        } while (data_0212dbcc >= 8);
    }

    func_020be494(data_0212de80, sizeof(data_0212de80));

    s32 result = func_020c12fc(7, (u32) data_0212dbb8, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_020bef5c(oldirq);
            return 0;
        }

        result = func_020c12fc(7, (u32) data_0212dbb8, 0);
        while (result < 0) {
            (void) func_020bef5c(oldirq);
            func_020befb8(100);
            oldirq = func_020bef48();
            result = func_020c12fc(7, (u32) data_0212dbb8, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_020c03f0();
    }

    data_0212dbd4[data_0212dbc8] = data_0212dbb8;

    if (++data_0212dbc8 > 8) {
        data_0212dbc8 = 0;
    }

    data_0212dbb8 = ((void *) 0);
    data_0212dbbc = ((void *) 0);
    data_0212dbcc++;
    data_0212dbd0++;

    (void) func_020bef5c(oldirq);
    return 1;
}
void func_020c03f0(void);
