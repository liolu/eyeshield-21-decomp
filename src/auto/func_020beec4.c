/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void func_020beec4(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_020bc5f4(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_0212db50;
extern u16 data_0212db44;
extern s32 data_0212db4c;
extern s32 data_0212db48;

/* Os_InitializeVAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fc1c_Os_InitializeVAlarm.c (license: none), reused
 * by tools/donor_match.py */
void func_020beec4(void) {
    if (!data_0212db44) {
        data_0212db44 = 1;

        data_0212db50.head = ((void *) 0);
        data_0212db50.tail = ((void *) 0);

        (void) func_020bc5f4((1UL << 2));

        data_0212db4c = 0;
        data_0212db48 = 0;
    }
}
