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

void* malloc(u32);
void free(void*);

FILE_irix* fopen(const char*, const char*);
FILE_irix* freopen(const char*, const char*, FILE_irix*);
s32 fseek(FILE_irix* fp_addr, s32 offset, s32 origin);

void* memcpy(void* dst, void* src, u32 len);
int sprintf(char *buffer, const char *format, ...);

s32 getpid();
s32 setvbuf(FILE_irix* stream, char * buffer, s32 mode, u32 size);

/* libc */


void func_4690a8(FILE_irix*, s8, s32);

s32 f_eof(FILE_irix* arg0);
