#define _POSIX_C_SOURCE 199309L

#include "header.h"

#include <unistd.h>
#include <sys/times.h>
#include <sys/resource.h>
#include <time.h>

uint32_t f_main(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_process_config(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_add_info(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_parse_command(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_get_host_chiptype(uint8_t *mem, uint32_t sp);
void f_error(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_relocate_passes(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_newrunlib(uint8_t *mem, uint32_t sp);
void f_compose_G0_libs(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_mkstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_mklist(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_addstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_addspacedstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_newstr(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_save_place(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_set_place(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_addlist(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_adduldlist(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_nodup(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_getsuf(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_mksuf(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_savestr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_mktempstr(uint8_t *mem, uint32_t sp);
uint32_t f_run(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_edit_src(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_get_lino(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_show_err(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_handler(uint8_t *mem, uint32_t sp);
void f_cleanup(uint8_t *mem, uint32_t sp);
void f_whats(uint8_t *mem, uint32_t sp);
void f_settimes(uint8_t *mem, uint32_t sp);
void f_dotime(uint8_t *mem, uint32_t sp);
uint32_t func_4339c8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_isdir(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_regular_not_writeable(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_regular_file(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_basename(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_dirname(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t func_434094(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_add_cxx_symbol_options(uint8_t *mem, uint32_t sp);
void f_init_curr_dir(uint8_t *mem, uint32_t sp);
uint32_t f_full_path(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_add_static_opt(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_record_static_fileset(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_touch(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_add_prelinker_objects(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_quoted_length(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_quote_shell_arg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_save_off_command_line(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_skip_old_ii_controls(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_make_ii_file_name(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_update_instantiation_info_file(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t func_4362cc(uint8_t *mem, uint32_t sp, uint32_t a0);
void func_4365b8(uint8_t *mem, uint32_t sp);
void func_436680(uint8_t *mem, uint32_t sp);
void func_43673c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_gethostsex(uint8_t *mem, uint32_t sp);

typedef int32_t s32;
typedef uint32_t u32;
typedef double f64;

#ifdef USE_REIMPLEMENTATIONS

uint32_t f_main(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_process_config(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_add_info(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_parse_command(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_get_host_chiptype(uint8_t *mem, uint32_t sp);

#if 0
void f_error(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
// extern s8* D__0x78D4;
// extern s32 D__0x7BF0;
// extern ? D__0x7F70;
// extern ? D__0x7F74;
// extern s32 D__0x7F78;
// extern s32 D__0x7F7C;
// extern ? D__0x7F98;
// extern ? D__0x7FA8;

void f_error(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s8* arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 argA, s32 argB) {
    u32 sp34;
    s32 sp30;
    s32 temp_t3;
    s32 temp_t3_2;

    if ((D__0x7BF0 == 0) && (D__0x7F98.unk_440 == NULL)) {
        D__0x7F98.unk_440 = strrchr(D__0x78D4, 0x2F);
        if (D__0x7F98.unk_440 == NULL) {
            D__0x7F98.unk_440 = (s8* ) D__0x78D4;
        } else {
            D__0x7F98.unk_440 = (s8* ) (D__0x7F98.unk_440 + 1);
        }
        sp34 = strlen(D__0x7F98.unk_440);
        D__0x7F98.unk_444 = malloc(sp34 + 2);
        if (D__0x7F98.unk_444 == NULL) {
            fprintf(&D__0x7F70 + 0x20, &D__0x7FA8 + 0x5260, D__0x7F98.unk_440, 0x3281);
            temp_t3 = D__0x7F7C;
            if (temp_t3 < D__0x7F78) {
                fprintf(&D__0x7F70 + 0x20, &D__0x7FA8 + 0x5288, D__0x7F98.unk_440, *((temp_t3 * 4) + &D__0x7F74));
            }
            exit(1);
        }
        sp30 = 0;
        if ((s32) sp34 > 0) {
            do {
                *(D__0x7F98.unk_444 + sp30) = 0x20;
                temp_t3_2 = sp30 + 1;
                sp30 = temp_t3_2;
            } while (temp_t3_2 < (s32) sp34);
        }
        *(D__0x7F98.unk_444 + sp30) = 0;
    }
    if (arg0 == 5) {
        fprintf(&D__0x7F70 + 0x20, &D__0x7FA8 + 0x5290, D__0x7F98.unk_444);
    } else {
        fprintf(&D__0x7F70 + 0x20, &D__0x7FA8 + 0x5298, D__0x7F98.unk_440, *((arg0 * 4) + (&D__0x7F98 + 0x448)));
    }
    if (arg1 != 0) {
        if (arg2 != 0) {
            fprintf(&D__0x7F70 + 0x20, &D__0x7FA8 + 0x52A4, arg1, arg2);
        } else {
            fprintf(&D__0x7F70 + 0x20, &D__0x7FA8 + 0x52B4, arg1);
        }
    }
    if (arg3 != 0) {
        if (arg4 != 0) {
            fprintf(&D__0x7F70 + 0x20, &D__0x7FA8 + 0x52BC, arg3, arg4);
        } else {
            fprintf(&D__0x7F70 + 0x20, &D__0x7FA8 + 0x52CC, arg3);
        }
    }
    if (arg5 == NULL) {
        arg5 = &D__0x7FA8 + 0x52D4;
    }
    fprintf(&D__0x7F70 + 0x20, arg5, arg6, arg7, arg8, arg9, argA, argB);
}
#endif

void f_relocate_passes(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_newrunlib(uint8_t *mem, uint32_t sp);

void f_compose_G0_libs(uint8_t *mem, uint32_t sp, uint32_t a0);

#if 0
uint32_t f_mkstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

// ? f_error(?, ?, ?, void*, s32, void*, s32);         /* extern */
// extern ? D__0x7F74;
// extern s32 D__0x7F78;
// extern s32 D__0x7F7C;
// extern ? D__0x7FA8;

s8* f_mkstr(s32 arg0, f64 arg1, ? arg2, ? arg3) {
    f64 sp60;
    f64 sp58;
    void* sp48;
    s32 temp_t1;
    s32 temp_t3;
    s32 temp_t7_2;
    s32 temp_t8;
    s32 temp_t9;
    s8* temp_v0;
    s8* var_s1;
    s8* var_s1_2;
    u32 temp_v0_2;
    u32 var_s2;
    void* temp_t5;
    void* temp_t7;

    temp_t7 = &arg0 - 1;
    temp_t9 = (s32) (temp_t7 + 3) & ~3;
    sp48 = temp_t7;
    sp60 = arg0;
    sp58 = arg1;
    sp48 = temp_t9 + 4;
    var_s1 = *temp_t9;
    var_s2 = 1;
    if (var_s1 != NULL) {
        do {
            temp_v0_2 = strlen(var_s1);
            temp_t3 = (s32) (sp48 + 3) & ~3;
            sp48 = temp_t3 + 4;
            var_s1 = *temp_t3;
            var_s2 += temp_v0_2;
        } while (var_s1 != NULL);
    }
    temp_v0 = malloc(var_s2);
    if (temp_v0 == NULL) {
        f_error(1, 0, 0, &D__0x7FA8 + 0x5FE4, 0x3717, &D__0x7FA8 + 0x5FF0);
        temp_t7_2 = D__0x7F7C;
        if (temp_t7_2 < D__0x7F78) {
            f_error(5, 0, 0, NULL, 0, &D__0x7FA8 + 0x6000, *((temp_t7_2 * 4) + &D__0x7F74));
        }
        exit(1);
    }
    temp_t5 = &arg0 - 1;
    *temp_v0 = 0;
    temp_t8 = (s32) (temp_t5 + 3) & ~3;
    sp48 = temp_t5;
    sp48 = temp_t8 + 4;
    var_s1_2 = *temp_t8;
    if (var_s1_2 != NULL) {
        do {
            strcat(temp_v0, var_s1_2);
            temp_t1 = (s32) (sp48 + 3) & ~3;
            sp48 = temp_t1 + 4;
            var_s1_2 = *temp_t1;
        } while (var_s1_2 != NULL);
    }
    return temp_v0;
}
#endif

void f_mklist(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_addstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_addspacedstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_newstr(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_save_place(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_set_place(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_addlist(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_adduldlist(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_nodup(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_getsuf(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_mksuf(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_savestr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_mktempstr(uint8_t *mem, uint32_t sp);

uint32_t f_run(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_edit_src(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_get_lino(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_show_err(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_handler(uint8_t *mem, uint32_t sp);

void f_cleanup(uint8_t *mem, uint32_t sp);

void f_whats(uint8_t *mem, uint32_t sp);

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

uint32_t func_4339c8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_isdir(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_regular_not_writeable(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_regular_file(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_basename(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_dirname(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_434094(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_add_cxx_symbol_options(uint8_t *mem, uint32_t sp);

void f_init_curr_dir(uint8_t *mem, uint32_t sp);

uint32_t f_full_path(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_add_static_opt(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_record_static_fileset(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_touch(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_add_prelinker_objects(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_quoted_length(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_quote_shell_arg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_save_off_command_line(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_skip_old_ii_controls(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_make_ii_file_name(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_update_instantiation_info_file(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_4362cc(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_4365b8(uint8_t *mem, uint32_t sp);

void func_436680(uint8_t *mem, uint32_t sp);

void func_43673c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_gethostsex(uint8_t *mem, uint32_t sp);


#endif /* USE_REIMPLEMENTATIONS */
