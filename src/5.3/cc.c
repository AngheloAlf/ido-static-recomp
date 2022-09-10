#define _POSIX_C_SOURCE 199309L

#include "header.h"

#include <unistd.h>
#include <sys/times.h>
#include <sys/resource.h>
#include <time.h>

typedef int32_t s32;
typedef uint32_t u32;
typedef double f64;

#ifdef ORIGINAL_BEHAVIOUR
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
#else
struct timespec sWallTimePrev = { 0 };
struct rusage sRUsageSelfPrev = { 0 };
struct rusage sRUsageChildrenPrev = { 0 };

void f_settimes(uint8_t *mem, uint32_t sp) {
    int retWall;
    int retSelf;
    int retChildren;

    retWall = clock_gettime(CLOCK_MONOTONIC, &sWallTimePrev);
    if (retWall == -1) {
        perror("clock_gettime(CLOCK_MONOTONIC, &sWallTimePrev)");
    }

    retSelf = getrusage(RUSAGE_SELF, &sRUsageSelfPrev);
    if (retSelf == -1) {
        perror("getrusage(RUSAGE_SELF, &sRUsageSelfPrev)");
    }

    retChildren = getrusage(RUSAGE_CHILDREN, &sRUsageChildrenPrev);
    if (retChildren == -1) {
        perror("getrusage(RUSAGE_CHILDREN, &sRUsageChildrenPrev)");
    }

    assert(retSelf != -1);
    assert(retChildren != -1);
}

void f_dotime(uint8_t *mem, uint32_t sp) {
    int retWall;
    int retSelf;
    int retChildren;
    struct timespec wallTimeSpec;
    struct rusage usageSelf = { 0 };
    struct rusage usageChildren = { 0 };

    retWall = clock_gettime(CLOCK_MONOTONIC, &wallTimeSpec);
    if (retWall == -1) {
        perror("clock_gettime(CLOCK_MONOTONIC, &wallTimeSpec)");
    }

    retSelf = getrusage(RUSAGE_SELF, &usageSelf);
    if (retSelf == -1) {
        perror("getrusage(RUSAGE_SELF, &usageSelf)");
    }

    retChildren = getrusage(RUSAGE_CHILDREN, &usageChildren);
    if (retChildren == -1) {
        perror("getrusage(RUSAGE_CHILDREN, &usageChildren)");
    }

    assert(retSelf != -1);
    assert(retChildren != -1);

    double wallTimeDiff;
    double userMilliseconds;
    double systemMilliseconds;

#define GET_WALL_AS_MILLIS(spec) (((spec)->tv_sec * 1000.0L) + ((spec)->tv_nsec / (1000.0L * 1000.0L)))
    wallTimeDiff = GET_WALL_AS_MILLIS(&wallTimeSpec) - GET_WALL_AS_MILLIS(&sWallTimePrev);

#define GET_UTIME(timevalptr) (((timevalptr)->tv_sec * 1000.0L * 1000.0L) + (timevalptr)->tv_usec)

    userMilliseconds = ((GET_UTIME(&usageSelf.ru_utime) + GET_UTIME(&usageChildren.ru_utime)) - (GET_UTIME(&sRUsageSelfPrev.ru_utime) + GET_UTIME(&sRUsageChildrenPrev.ru_utime))) / 1000.0L;
    systemMilliseconds = ((GET_UTIME(&usageSelf.ru_stime) + GET_UTIME(&usageChildren.ru_stime)) - (GET_UTIME(&sRUsageSelfPrev.ru_stime) + GET_UTIME(&sRUsageChildrenPrev.ru_stime))) / 1000.0L;

    fprintf(stderr, "%.2fu %.2fs %.2f %.0f%%\n", userMilliseconds, systemMilliseconds, wallTimeDiff, (((userMilliseconds + systemMilliseconds) / wallTimeDiff) * 100));
}
#endif
