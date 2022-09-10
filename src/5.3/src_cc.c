#include "header.h"

#include <sys/times.h>

typedef int32_t s32;
typedef double f64;

// 0x10009c18
//struct tms_irix D__0x7A28 = { 0 };
struct tms D__0x7A28 = { 0 };
// 0x10009c10
clock_t D__0x7A2C = 0;

//extern ? D__0x7F70;
//extern ? D__0x7FA8;

// extern s32 D__0x7A2C;

void f_settimes(uint8_t *mem, uint32_t sp) {
    D__0x7A2C = times(&D__0x7A28);
}

void f_dotime(uint8_t *mem, uint32_t sp) {
    s32 sp6C;
    s32 sp68;
    f64 sp58;
    f64 sp50;
    struct tms_irix sp40;
    f64 temp_f10;
    f64 temp_f6;

    sp6C = times(&sp40);
    sp68 = sp6C - D__0x7A2C;
    temp_f10 = (f64) (((sp40.tms_utime + sp40.tms_cutime) - D__0x7A28.tms_utime) - D__0x7A28.tms_cutime) / 100.0;
    temp_f6 = (f64) (((sp40.tms_stime + sp40.tms_cstime) - D__0x7A28.tms_stime) - D__0x7A28.tms_cstime) / 100.0;
    sp58 = temp_f10;
    sp50 = temp_f6;
    //fprintf(&D__0x7F70 + 0x20, &D__0x7FA8 + 0x66E4, second half of f64, temp_f10, temp_f6, sp68 / 6000, (f64) (sp68 % 6000) / 100.0, second half of f64, (bitwise f32) (((temp_f10 + temp_f6) / ((f64) sp68 / 100.0)) * 100.0));

    fprintf(stderr, "%.2fu %.2fs %u:%04.1f %.0f%%\n", temp_f10, temp_f6, sp68 / 6000, (f64) (sp68 % 6000) / 100.0,(((temp_f10 + temp_f6) / ((f64) sp68 / 100.0)) * 100.0));
}
