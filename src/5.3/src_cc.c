#include "header.h"

#include <sys/times.h>

typedef int32_t s32;
typedef double f64;

// 0x10009c18
struct tms D__0x7A28 = { 0 };
// 0x10009c10
clock_t D__0x7A2C = 0;

void f_settimes(uint8_t *mem, uint32_t sp) {
    D__0x7A2C = times(&D__0x7A28);
}

void f_dotime(uint8_t *mem, uint32_t sp) {
    s32 sp68;
    f64 sp58;
    f64 sp50;
    struct tms sp40;

    sp68 = times(&sp40) - D__0x7A2C;
    sp58 = (((sp40.tms_utime + sp40.tms_cutime) - D__0x7A28.tms_utime) - D__0x7A28.tms_cutime) / 100.0;
    sp50 = (((sp40.tms_stime + sp40.tms_cstime) - D__0x7A28.tms_stime) - D__0x7A28.tms_cstime) / 100.0;

    fprintf(stderr, "%.2fu %.2fs %u:%04.1f %.0f%%\n", sp58, sp50, sp68 / 6000, (sp68 % 6000) / 100.0, (((sp58 + sp50) / (sp68 / 100.0)) * 100.0));
}
