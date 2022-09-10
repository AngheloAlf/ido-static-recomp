// typedef int32_t s32;
// typedef double f64;


struct tms_irix {
    int tms_utime;
    int tms_stime;
    int tms_cutime;
    int tms_cstime;
};

extern struct tms_irix D__0x7A28;
extern s32 D__0x7A2C;

int times(struct tms_irix*);

void func_00433848(void);
