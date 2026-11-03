/* compiler: 1.2/sp2p3 */
typedef struct Thr {
    unsigned char pad[0x6C];
    int id;
} Thr;
typedef struct TInfo {
    int w0;
    Thr *cur;
} TInfo;
typedef struct Cs {
    int w[3];
    int v;
} Cs;
extern int func_020cd730(void *, int);
extern int func_020be254(void *);
extern void func_020be388(void *);
extern void func_020be318(void *);
extern int func_020cb3ac(void *, void *, char *, void *);
extern unsigned char data_020f9594[];
extern unsigned char data_02130e60[];
extern TInfo data_0212d834;
extern Cs data_02130dd0;
extern Cs data_02130df4;
extern unsigned char func_020cb378;

int func_020cb218(char *fmt, ...) {
    int r;
    if (func_020cd730(data_020f9594, -1) >= 0) {
        return -1;
    }
    if (func_020be254(data_02130e60) == 0) {
        data_02130dd0.v = data_0212d834.cur->id;
        data_02130df4.v = 1;
    } else if (data_02130dd0.v == data_0212d834.cur->id) {
        data_02130df4.v = data_02130df4.v + 1;
    } else {
        func_020be388(data_02130e60);
        data_02130dd0.v = data_0212d834.cur->id;
        data_02130df4.v = 1;
    }
    r               = func_020cb3ac(&func_020cb378, data_020f9594, fmt, (void *) ((((unsigned int) &fmt) & ~3) + 4));
    data_02130df4.v = data_02130df4.v - 1;
    if (data_02130df4.v == 0) {
        func_020be318(data_02130e60);
    }
    return r;
}
