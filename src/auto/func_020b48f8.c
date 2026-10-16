/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern BOOL func_020be070(void *queue, void *msg, s32 flags);
extern void func_020c011c(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_020bffd8(int a, int b, int c, int d);
extern void func_020c0684(int flag);
extern void func_020c05f4(u32 tag);
extern u32 func_020c05b4(void);
extern void func_020b3a28(u32 capBitMask);
extern BOOL func_020b3a44(u32 chBitMask);
extern void func_020b3a08(int alarm);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef void (*UnkCaptureCallback)(void *buf0, void *buf1, u32 size, int format, void *arg);
typedef struct UnkSndCapture {
    BOOL active;
    int type;
    int format;
    void *buf0;
    void *buf1;
    u32 bufSize;
    u32 unk_18;
    u32 unk_1c;
    u32 lockedChBitMask;
    u32 chBitMask;
    u32 capBitMask;
    int alarmNo;
    u32 unk_30;
    UnkCaptureCallback callback;
    void *arg;
    UnkSndFader fader;
    BOOL stopAfterFade;
    int volume;
} UnkSndCapture;
typedef struct UnkMessageQueue {
    u8 unk_00[0x20];
} UnkMessageQueue;
extern UnkMessageQueue data_0212cc40;
extern UnkSndCapture data_0212cc54;
extern void func_020b48f8(void);

/* func_020742fc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_capture.c (license: none),
 * reused by tools/donor_match.py */
void func_020b48f8(void) {
    UnkSndCapture *capture = &data_0212cc54;
    BOOL hasAlarm;

    if (!data_0212cc54.active) {
        return;
    }

    hasAlarm = capture->alarmNo >= 0;
    func_020c011c(capture->chBitMask, capture->capBitMask, hasAlarm ? 1 << capture->alarmNo : 0, 0);

    if (hasAlarm) {
        u32 tag = func_020c05b4();
        func_020c0684(1);
        func_020c05f4(tag);

        while (func_020be070(&data_0212cc40, 0, 0)) {
        }
    }

    if (capture->capBitMask != 0) {
        func_020b3a28(capture->capBitMask);
    }
    if (capture->lockedChBitMask != 0) {
        func_020b3a44(capture->lockedChBitMask);
    }
    if (hasAlarm) {
        func_020b3a08(capture->alarmNo);
    }
    if (capture->type == 1) {
        func_020bffd8(0, 0, 0, 0);
    }

    capture->active = 0;
}
