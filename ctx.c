struct tms_irix {
    int tms_utime;
    int tms_stime;
    int tms_cutime;
    int tms_cstime;
};


typedef struct __file_s {
    s32 _cnt;
    u8 *_ptr;
    u8 *_base;
    u8 _flag;
    u8 _o_file;
    u16 _file;
} FILE_irix;

extern struct tms_irix D__0x7A28;
extern s32 D__0x7A2C;

/* libc */

int times(struct tms_irix*);

int __semputc(int, FILE_irix *);
int __flsbuf(int,  FILE_irix *);

int ungetc(int ch, FILE_irix* fp_addr);
int __filbuf(FILE_irix* fp_addr);

/* libc */


void func_4690a8(FILE_irix*, s8, s32);

s32 f_eof(FILE_irix* arg0);
