#include "header.h"

#include <sys/times.h>

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <time.h> 
#include <sys/times.h> 


typedef int32_t s32;
typedef uint32_t u32;
typedef double f64;

// 0x10009c18
struct tms D__0x7A28 = { 0 };
// 0x10009c10
clock_t D__0x7A2C = 0;

void f_settimes(uint8_t *mem, uint32_t sp) {
    D__0x7A2C = times(&D__0x7A28);

#if 0
    fprintf(stderr, "\n");

    fprintf(stderr, "%s\n", __func__);
    fprintf(stderr, "%s - D__0x7A2C: %li\n", __func__, D__0x7A2C);
    fprintf(stderr, "%s - D__0x7A28.tms_utime: %li\n", __func__, D__0x7A28.tms_utime);
    fprintf(stderr, "%s - D__0x7A28.tms_stime: %li\n", __func__, D__0x7A28.tms_stime);
    fprintf(stderr, "%s - D__0x7A28.tms_cutime: %li\n", __func__, D__0x7A28.tms_cutime);
    fprintf(stderr, "%s - D__0x7A28.tms_cstime: %li\n", __func__, D__0x7A28.tms_cstime);

    fprintf(stderr, "\n");
#endif
}

void f_dotime(uint8_t *mem, uint32_t sp) {
    clock_t sp6C;
    clock_t sp68;
    f64 sp58;
    f64 sp50;
    struct tms sp40;
    double clock_ticks = sysconf(_SC_CLK_TCK);

    sp6C = times(&sp40);
    sp68 = sp6C - D__0x7A2C;
    sp58 = (((sp40.tms_utime + sp40.tms_cutime) - D__0x7A28.tms_utime) - D__0x7A28.tms_cutime) / clock_ticks;
    sp50 = (((sp40.tms_stime + sp40.tms_cstime) - D__0x7A28.tms_stime) - D__0x7A28.tms_cstime) / clock_ticks;

#if 0
    fprintf(stderr, "\n");

    fprintf(stderr, "%s\n", __func__);
    fprintf(stderr, "%s - sp6C: %li\n", __func__, sp6C);
    fprintf(stderr, "%s - sp40.tms_utime: %li\n", __func__, sp40.tms_utime);
    fprintf(stderr, "%s - sp40.tms_stime: %li\n", __func__, sp40.tms_stime);
    fprintf(stderr, "%s - sp40.tms_cutime: %li\n", __func__, sp40.tms_cutime);
    fprintf(stderr, "%s - sp40.tms_cstime: %li\n", __func__, sp40.tms_cstime);

    fprintf(stderr, "\n");
#endif

    fprintf(stderr, "%.2fu %.2fs %u:%04.1f %.0f%%\n", sp58, sp50, (u32) (sp68 / (60 * clock_ticks)), (sp68 % (u32)(60 * clock_ticks)) / clock_ticks, (((sp58 + sp50) / (sp68 / clock_ticks)) * 100.0));
}
