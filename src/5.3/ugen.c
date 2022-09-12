#define _POSIX_C_SOURCE 199309L

#include "header.h"

typedef int32_t s32;
typedef uint32_t u32;
typedef int8_t s8;
typedef uint8_t u8;

void f_open_bin_file(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_close_bin_file(uint8_t *mem, uint32_t sp);
void f_output_inst_bin(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_cat_files(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_warning(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t func_40a9f0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t func_40aaa8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_fold_constant(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_fold_identities(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_fold_idempotents(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_put_integer_ws(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_put_sym(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_hex8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_put_hex10(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_hex_2(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_put_alpha(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_put_string(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_write_instruction(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_print_source(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_write_directive(uint8_t *mem, uint32_t sp, uint32_t a0);
// void f_output_inst_ascii(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_set_domtag(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_get_domtag(uint8_t *mem, uint32_t sp);
uint32_t f_search_label(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_find_label(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_init_build(uint8_t *mem, uint32_t sp);
void func_40dff0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_40e008(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_40e048(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_40e07c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_40e238(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
uint32_t func_40e688(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_40eac0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_40eda4(uint8_t *mem, uint32_t sp, uint32_t v0);
void func_40ee60(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_40ee98(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_40ef9c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_40f0bc(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
uint32_t func_40f138(uint8_t *mem, uint32_t sp, uint32_t a0);
void func_40f23c(uint8_t *mem, uint32_t sp, uint32_t v0);
uint32_t f_build_tree(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_save_i_ptrs(uint8_t *mem, uint32_t sp);
void f_restore_i_ptrs(uint8_t *mem, uint32_t sp);
void f_init_ibuffer(uint8_t *mem, uint32_t sp);
void f_grow_ibuffer(uint8_t *mem, uint32_t sp);
uint32_t f_create_local_label(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_emit_vers(uint8_t *mem, uint32_t sp);
void f_emit_rob(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_rab(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_rrab(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_rllb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_ra(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_ri_(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_rii(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_rfi(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_rrfi(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_rrr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_rri_(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_rrri(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_rr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_a(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_r(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_emit_i(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_emit_rrll(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_rll(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_ll(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_emit_rill(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_define_label(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_emit_itext(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_demit_itext(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_emit_dir0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_emit_dir1(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_dir2(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_alias(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_regmask(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_loopno(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_emit_dir_ll(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_demit_rob_(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_demit_ri(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_demit_rr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_demit_a(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_demit_regmask(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_demit_rrr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_demit_rri(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_demit_rrll(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_demit_i(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_demit_ra(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_demit_dir0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_demit_dir1(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_demit_dir2(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_demit_edata(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_demit_weakext(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_emit_cpload(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_ddefine_label(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_define_exception_label(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_append_i(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_append_d(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_clear_ibuffer(uint8_t *mem, uint32_t sp);
void f_emit_vreg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_pic(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_demit_cpalias(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_emit_cpalias(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_emit_cpadd(uint8_t *mem, uint32_t sp, uint32_t a0);
void func_41b774(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41b7e4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41b87c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41b9b0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41bae4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41bc18(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41bd4c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41be80(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41bfb4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41c0e8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_branch_rrll(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41c48c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41c4f8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41c590(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41c644(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41c6f8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41c7ac(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41c860(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41c914(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41c9c8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41ca7c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_branch_rill(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41ce78(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41cef0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41cf8c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41d048(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41d104(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41d1c0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_trap_rri(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41d450(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41d4bc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41d550(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41d600(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41d6b0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_41d760(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_trap_ri(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41d9e4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41db80(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41dd04(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41e128(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41e5c8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41e6fc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41e878(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41e9f4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41eb70(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41ecec(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41ee68(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_dw_emit_rrr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41f360(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41f54c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41f740(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41f9b4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41fcd4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_41fea8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_420024(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_4201a0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_42031c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_420498(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_420614(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_dw_emit_rri(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_420ec8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_421088(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_4210f0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2);
void func_4211b8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_dw_emit_rr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_gen_entry_exit(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_gen_entry(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_clear_saved_regs(uint8_t *mem, uint32_t sp);
uint32_t f_is_empty_saved_regs(uint8_t *mem, uint32_t sp);
void f_home_parameters(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_gen_reg_save_restore(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_gen_reg_save(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_demit_mask(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_demit_frame(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_emit_file(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_optimize_level(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_is_end_return(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_move_dreg_to_regs(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_move_two_regs(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_fasm(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_fop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_uop_to_asm(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_jump(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_trap(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_is_saved_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_is_parm_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_is_fp_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_restore_from_temp(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_binary_regs(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_flt_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t func_426744(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_binary_flt_regs(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_get_dest(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_move_to_dest(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_lsopc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_loadstore(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_427d64(uint8_t *mem, uint32_t sp, uint32_t v0);
void func_427e78(uint8_t *mem, uint32_t sp, uint32_t v0);
void f_iloadistore(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_4287e4(uint8_t *mem, uint32_t sp, uint32_t v0);
void f_rloadrstore(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_loadstore_for_two_words(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_unaligned_loadstore_for_fp_word(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_unaligned_loadstore_for_two_fp_w(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_loadstore_for_two_fp_words(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void func_42928c(uint8_t *mem, uint32_t sp, uint32_t v0);
void func_42939c(uint8_t *mem, uint32_t sp, uint32_t v0);
void func_429470(uint8_t *mem, uint32_t sp, uint32_t v0);
void f_unaligned_loadstore(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_eval_2ops(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_eval_fp_cond(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_eval_fp_min_max(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_eval2(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_ureg(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_copy(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_eval_mov(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_get_ops(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_eval_irel(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_save_vreg(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_pass_in_register(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_load_parm_vreg(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_in_parm_regs(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_gen_regs(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_get_saved_regs_size(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_unhome_parms(uint8_t *mem, uint32_t sp);
void f_home_parms(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_clean_tree(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_clear_pmov_regs(uint8_t *mem, uint32_t sp);
void f_save_pmov_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_load_pmov_regs(uint8_t *mem, uint32_t sp);
uint32_t f_cvt_tab(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_rnd_tab(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_eval(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_init_eval(uint8_t *mem, uint32_t sp);
void f_load_fp_literal(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_eval_int_flt_cvt(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_eval_flt_int_cvt(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_436008(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_4362e0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);
void func_4363a8(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);
void func_436484(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_4365b0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_eval_int_int_cvt(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_eval_flt_flt_cvt(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_add_overflow(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_sub_overflow(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_is_constant(uint8_t *mem, uint32_t sp, uint32_t a0);
uint64_t f_llconst(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_fold(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_fold1(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_frame_offset(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_frame_offset1(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_st_feinit(uint8_t *mem, uint32_t sp);
void f_swap_tree(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_swap_int(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_437238(uint8_t *mem, uint32_t sp, uint32_t a0);
void func_43732c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_4378c4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_437a80(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_437d94(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void func_437f4c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
uint32_t func_437fc8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t func_43800c(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t func_438064(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t func_4380bc(uint8_t *mem, uint32_t sp, uint32_t a0);
void func_438128(uint8_t *mem, uint32_t sp, uint32_t a0);
void func_4382d4(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void f_labelopt(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_reset_pool(uint8_t *mem, uint32_t sp);
void f_select_data_section(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_emit_list(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_output_pool(uint8_t *mem, uint32_t sp);
uint32_t f_new_lit(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_add_to_list_no_check(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_valu_equ(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_add_to_list(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_add_to_pool(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_insert(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_append(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_make_new_label(uint8_t *mem, uint32_t sp);
uint32_t f_make_new_jump(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_cmp_tree(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_cmp_tree_again(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_move_label(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_get_prior_stm(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_get_prior_stm1(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_find_br(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_match_uconds(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_cmp_br(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_match_conds(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_cross_jump(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_set_opts(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_pass_in_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_parm_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_map_pdefs_to_regs(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_map_pars_to_regs(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_check_amt(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_check_amt_ref(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_fix_amt_ref(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_find_non_special_reg(uint8_t *mem, uint32_t sp);
uint32_t f_kind_of_register(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_init_regs(uint8_t *mem, uint32_t sp);
void f_fill_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_copy_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_list_is_empty(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_print_regs(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_remove_direg(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_get_head(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_remove_head(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_append_to_list(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_remove_from_list(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_spill(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_spill_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_get_one_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_get_two_regs(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_get_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_get_reg1(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_get_fp_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_get_fp_reg1(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_can_get_two_regs(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_spill_two_regs(uint8_t *mem, uint32_t sp);
uint32_t f_get_two_free_regs(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_get_one_free_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_get_free_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_get_free_fp_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_content_of(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_inc_usage(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_dec_usage(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_free_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_free_fp_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_force_free_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_add_to_free_list(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_add_to_fp_free_list(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_remove_from_free_list(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_remove_from_fp_free_list(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_is_available(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_check_no_used(uint8_t *mem, uint32_t sp);
uint32_t f_usage_count(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_move_to_end_fp_list(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_move_to_end_gp_list(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_report_error(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_has_errors(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_sym_hash(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_get_data_area(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_get_sym_type(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_make_new_sym(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_change_sym_type(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_lookup_sym(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_clear_sym_tab(uint8_t *mem, uint32_t sp);
void f_gen_sym(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_set_size(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_some_init_overlap(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_complex_init_duplicate_p(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_complex_insert_init(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_append_init(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_add_init(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_choose_area(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_force_alignment(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_emit_init(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_emit_symbol(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_output_decls(uint8_t *mem, uint32_t sp);
void f_output_entry_point(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_set_mtag(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_get_mtag(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_get_sym_kind(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_init_temps(uint8_t *mem, uint32_t sp);
uint32_t f_lookup_temp(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_make_new_temp(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_find_free_temp(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_gen_store(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_spill_to_temp(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_free_temp(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_temp_offset(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_temp_usage_count(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_get_temp_area_size(uint8_t *mem, uint32_t sp);
void f_set_temps_offset(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_force_casting(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_is_power_of_two(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_get_set_const(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_gen_set_str(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_gen_set_istr(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_gen_set_equ(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_set_rewrite(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_set_rewrite_indexed(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_translate_tree(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_translate(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_cse_equ(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_cse(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_overlap(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_free_tree_and_cse(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_check_vreg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_find_vreg_mtag(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_check_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_assign_vreg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_load_cse(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_uses(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_add_store(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_is_reg(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_translate_cvtl(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_need_check_hl(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_build_ucond0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_check_loads_exprs(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_indent_tree(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_print_ucode(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_print_node_1(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_print_node(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_44d214(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);
void f_print_tree(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_initialize_tree(uint8_t *mem, uint32_t sp);
uint32_t f_gen_label_id(uint8_t *mem, uint32_t sp);
uint32_t f_new_tree(uint8_t *mem, uint32_t sp);
uint32_t f_build_u(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_build_u1(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_build_u2(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_build_op(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_build_1op(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_build_2op(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_free_node(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_free_tree(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_delete_statement(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_dup_tree(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_next_mark(uint8_t *mem, uint32_t sp);
uint32_t f_ivalue(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_dwvalue(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_rvalue(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_is_zero(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_result_type(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t func_44e4d4(uint8_t *mem, uint32_t sp, uint32_t v0);
uint32_t f_const_equal(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_u_tree(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t func_44e8d0(uint8_t *mem, uint32_t sp, uint32_t a0);
void func_44e934(uint8_t *mem, uint32_t sp, uint32_t a0);
void func_44e9dc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_44ecc0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_44f0ec(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_44f2a4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_44f344(uint8_t *mem, uint32_t sp, uint32_t v0);
void func_44f558(uint8_t *mem, uint32_t sp, uint32_t v0);
uint32_t func_44f58c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_main(uint8_t *mem, uint32_t sp);
void f_emit_composite_val(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_emit_val(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_emit_label_val(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_find_val_type(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void func_452e50(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_readuinstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_initur(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_inituwrite(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_fnamelen(uint8_t *mem, uint32_t sp);
void f_uwrite(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_454190(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);
void func_4541e0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);
void f_uini(uint8_t *mem, uint32_t sp);
void f_uputinit(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_uputint(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_ugetinit(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_ugetint(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_ugeteof(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_st_str_idn(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_st_fglobal_idn(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_st_readbinary(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_st_readst(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t func_45d47c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_st_writest(uint8_t *mem, uint32_t sp);
uint32_t f_st_currentifd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_st_ifdmax(uint8_t *mem, uint32_t sp);
void f_st_setfd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_st_fdadd(uint8_t *mem, uint32_t sp);
uint32_t f_st_auxadd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_st_pdadd(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_st_stradd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_st_paux_ifd_iaux(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_st_str_iss(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_st_malloc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_st_symadd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_st_ifd_pcfd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_st_pcfd_ifd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_st_psym_ifd_isym(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_st_paux_iaux(uint8_t *mem, uint32_t sp);
uint32_t f_st_str_ifd_iss(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_st_internal(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_st_pext_iext(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_st_idn_index_fext(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_st_pdn_idn(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_st_str_extiss(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_st_idn_dn(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_st_setidn(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_st_iaux_copyty(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_st_auxisymadd(uint8_t *mem, uint32_t sp);
void f_st_auxrndxadd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_swap_hdr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_swap_fd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_swap_fi(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_swap_sym(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_swap_ext(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_swap_pd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_swap_dn(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_swap_opt(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_gethostsex(uint8_t *mem, uint32_t sp);
void f_st_error(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f_ldfsymorder(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_st_warning(uint8_t *mem, uint32_t sp, uint32_t a0);
void f__md_st_internal(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f__md_st_error(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f__md_st_str_extiss(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f__md_st_currentifd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t f__md_st_malloc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_exit(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_get(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_eof(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_eoln(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_peek_char(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_next_char(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_calc_size(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_reset(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void func_468f18(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
//void func_4690a8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_writeln(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
//void f_write_char(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f_write_string(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_write_enum(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_write_integer(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_write_cardinal(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_write_int64(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_caseerror(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
uint32_t f_new(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_dispose(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_rewrite(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
void f_get_arg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);
void f__getbuf(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
void f_xfree(uint8_t *mem, uint32_t sp);
void f_alloc_dispose(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_xmalloc(uint8_t *mem, uint32_t sp, uint32_t a0);
uint32_t f_alloc_new(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_alloc_page(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_alloc_free(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_alloc_scb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_alloc_mark(uint8_t *mem, uint32_t sp, uint32_t a0);
void f_alloc_release(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
uint32_t f_alloc_next_scb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);


#ifdef USE_REIMPLEMENTATIONS
int __semputc(int, FILE_irix *);
int __flsbuf(int, FILE *);


#if 1
// ? f_get(FILE_irix*, ?);                             /* extern */
// ? f_reset(FILE_irix**, s32, ?, ?);                  /* extern */
// ? f_write_directive(?);                             /* extern */
// ? f_write_instruction(?);                           /* extern */

typedef struct struct_0x75CC_unk_4 {
    uint8_t unk_0[0x400];
} struct_0x75CC_unk_4;

typedef struct struct_0x75CC {
    FILE_irix* f;
    struct_0x75CC_unk_4* unk_4;
} struct_0x75CC;
// extern struct_0x75CC D__0x75CC;
#define D__0x75CC_addr 0x10018ef0
#define D__0x75CC MEM_U32(D__0x75CC_addr)

void f_output_inst_ascii(uint8_t *mem, uint32_t sp, s32 arg0, uint32_t arg1) {
    uint32_t fp_addr;
    FILE_irix *f;

    f_reset(mem, sp, D__0x75CC_addr, arg0, 0x400, 0x10);

    fp_addr = D__0x75CC;
    f = (FILE_irix *)&MEM_U32(fp_addr);

    while (f_eof(mem, sp, D__0x75CC) == 0) {
        #if 0
        fprintf(stderr, "\n\n");
        fprintf(stderr, "%s: f->_cnt       = %u\n", __func__, f->_cnt);
        fprintf(stderr, "%s: f->_ptr_addr  = %X\n", __func__, f->_ptr_addr);
        fprintf(stderr, "%s: f->_base_addr = %X\n", __func__, f->_base_addr);
        fprintf(stderr, "%s: f->pad[0]     = %u\n", __func__, f->pad[0]);
        fprintf(stderr, "%s: f->pad[1]     = %u\n", __func__, f->pad[1]);
        fprintf(stderr, "%s: f->_file      = %u\n", __func__, f->_file);
        fprintf(stderr, "%s: f->_flag      = %u\n", __func__, f->_flag);
        fprintf(stderr, "\n\n");
        #endif

        if ((MEM_U8(f->_ptr_addr + 5) & 0x3F) == 0x17) {
            f_write_instruction(mem, sp, arg1);
        } else {
            f_write_directive(mem, sp, arg1);
        }

        f_get(mem, sp, D__0x75CC, 0x10);
    }
}
#endif


#if 1
//extern ? D__0x7F84;

// s32 f_eof(FILE_irix* arg0) {
uint32_t f_eof(uint8_t *mem, uint32_t sp, uint32_t fp_addr) {
    FILE_irix *f = (FILE_irix *)&MEM_U32(fp_addr);

    s32 temp_t8;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;

    var_v1 = f == NULL;
    if (var_v1 == 0) {
        var_v1 = (f->_flag & 2) != 0;
        if (var_v1 == 0) {
            temp_t8 = f->_cnt < 1;
            var_v1 = temp_t8;
            if (temp_t8 != 0) {
                //temp_v0 = __filbuf(arg0);
                temp_v0 = wrapper___filbuf(mem, fp_addr);
                /**(&D__0x7F84 - 0x7230)*/ MEM_U32(0x10018dd0) = temp_v0;
                if (temp_v0 == -1) {
                    var_a0 = 1;
                } else {
                    //ungetc(temp_v0, arg0);
                    wrapper_ungetc(mem, temp_v0, fp_addr);
                    var_a0 = 0;
                }
                var_v1 = var_a0 != 0;
            }
        }
    }
    return var_v1;
}
#endif

#if 1
// s32 f_calc_size(FILE_irix*, s32);                   /* extern */
// extern s32 D__0x73F0;
#define D__0x73F0 MEM_U32(0x1001b290)
// extern u8 D__0x7F54;
#define D__0x7F54_addr 0xfb546b0
// extern ? D__0x7F74;
#define D__0x7F74_addr 0xfb528e4
#define D__0x7F74 MEM_U32(D__0x7F74_addr)
// extern ? D__0x7F98;

//void f_reset(struct_0x75CC* arg0, u8* arg1, u32 arg2, s32 arg3) {
void f_reset(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3) {
    FILE_irix *f = (FILE_irix *)&MEM_U32(a0);

    //s8* sp30;
    uint32_t sp30;
    s32 sp2C;
    u32 sp28;

    //s8* sp20;
    uint32_t sp20;

    //FILE_irix* temp_s0;
    uint32_t temp_s0;

    //FILE_irix* var_v0_2;
    uint32_t var_v0_2;

    s32 temp_v0_3;
    s32 var_a2_2;

    //s8* temp_t5;
    uint32_t temp_t5;
    //s8* temp_v0;
    uint32_t temp_v0;
    //s8* temp_v0_2;
    uint32_t temp_v0_2;

    u32 temp_a3;
    u32 var_v0;

    sp2C = 0;
    //temp_s0 = arg0->unk_0;
    temp_s0 = MEM_U32(a0 + 0);
    if (a2 != 0) {
        var_v0 = a2 - 1;
        if (/* *(var_v0 + arg1) */ MEM_U8(var_v0 + a1) == 0x20) {
    loop_2:
            a2 = var_v0;
            if (var_v0 != 0) {
                var_v0 -= 1;
                if (/* *(var_v0 + arg1) */ MEM_U8(var_v0 + a1) == 0x20) {
                    goto loop_2;
                }
            }
        }
    }

    if (a2 != 0) {
        //temp_v0 = malloc(a2 + 1);
        temp_v0 = wrapper_malloc(mem, a2 + 1);

        sp30 = temp_v0;
        //memcpy(temp_v0, arg1, arg2);
        wrapper_memcpy(mem, temp_v0, a1, a2);
        //sp30[arg2] = 0;
        MEM_U8(sp30 + a2) = 0;
        //arg0->unk_4 = sp30;
        MEM_U32(a0 + 4) = sp30;
        sp2C = 1;
        goto block_10;
    }
    //temp_t5 = arg0->unk_4;
    temp_t5 = MEM_U32(a0 + 4);
    sp30 = temp_t5;
    if (temp_t5 == 0) { // NULL
        if (temp_s0 != 0) { // NULL
            //fseek(temp_s0, 0, 0);
            wrapper_fseek(mem, temp_s0, 0, 0);
        } else {
            //sp30 = malloc(0x18U);
            sp30 = wrapper_malloc(mem, 0x18U);
            sp2C = 1;
            D__0x73F0 += 1;

            // TODO
            //sprintf(sp30, &D__0x7F98 - 0xC70, D__0x73F0, wrapper_getpid());
            assert(!"sprintf call on f_reset not implemented yet, shorry");

            //arg0->unk_4 = sp30;
            MEM_U32(a0 + 4) = sp30;
            goto block_10;
        }
    } else {
block_10:
        if (temp_s0 != 0) { // NULL
            //var_v0_2 = freopen(sp30, &D__0x7F98 - 0xC60, temp_s0);
            var_v0_2 = wrapper_freopen(mem, sp30, 0x1000f3a0, temp_s0);
        } else {
            //var_v0_2 = fopen(sp30, &D__0x7F98 - 0xC5C);
            var_v0_2 = wrapper_fopen(mem, sp30, 0x1000f3a4);
        }
        if (var_v0_2 != 0) { // NULL
            FILE_irix *v0_file = (FILE_irix *)&MEM_U32(var_v0_2);

            if (a3 != 0) {
                temp_a3 = f_calc_size(mem, sp, var_v0_2, a3) + 8;
                if (var_v0_2 == D__0x7F74_addr) {
                    //var_v0_2->_base = &D__0x7F54;
                    MEM_U32(v0_file->_base_addr) = D__0x7F54_addr;
                } else {
                    sp28 = temp_a3;
                    temp_v0_2 = wrapper_malloc(mem, temp_a3);
                    if (temp_v0_2 != 0) { // NULL
                        var_a2_2 = 0;
                    } else {
                        var_a2_2 = 4;
                    }
                    sp20 = temp_v0_2;
                    wrapper_setvbuf(mem, var_v0_2, temp_v0_2, var_a2_2, temp_a3);
                    if (temp_v0_2 != 0) { // NULL
                        v0_file->_flag |= 8;
                    }
                }
                temp_v0_3 = wrapper___filbuf(mem, var_v0_2);
                if (temp_v0_3 != -1) {
                    wrapper_ungetc(mem, temp_v0_3, var_v0_2);
                }
            }
        }
        //arg0->unk_0 = var_v0_2;
        MEM_U32(a0 + 0) = var_v0_2;
        if (sp2C != 0) {
            wrapper_free(mem, sp30);
        }
    }
}
#endif

#if 1
//! not sure if it is equivalent
//void func_4690a8(uint8_t *mem, uint32_t sp, FILE_irix* arg0, s8 arg1, s32 arg2) {
void func_4690a8(uint8_t *mem, uint32_t sp, uint32_t fp_addr, uint32_t a1, uint32_t a2) {
    FILE_irix *f = (FILE_irix *)&MEM_U32(fp_addr);
    s8 arg1 = a1;
    s32 arg2 = a2;

    //s32 temp_a0;
    s32 temp_t0;
    //s32 temp_t1;
    //s32 temp_t4;
    s32 temp_t9;
    //s32 temp_v1;
    s32 var_s1;
    s32 var_v1;
    uint32_t temp_a0_2;
    //uint32_t temp_v1_2;
    uint32_t var_v0;

    size_t i;

    var_s1 = arg2;
    if (f->_flag & 2) {
        if (arg2 > 0) {
            temp_t9 = f->_cnt - arg2;
            f->_cnt = temp_t9;
            var_v1 = temp_t9;
            if (temp_t9 < 0) {
loop_3:
                temp_t0 = var_v1 + var_s1;
                f->_cnt = temp_t0;
                if (temp_t0 > 0) {

                    var_v0 = f->_ptr_addr;
                    var_s1 -= temp_t0;
                    #if 0
                    temp_a0 = temp_t0 + var_v0;
                    temp_t1 = (temp_a0 - var_v0) & 3;
                    temp_v1 = temp_t1 + var_v0;
                    if (temp_t1 != 0) {
                        do {
                            //var_v0 += 1;
                            //var_v0->unk_-1 = arg1;
                            var_v0 += 1;
                            //var_v0[-1] = arg1;
                            MEM_U8(var_v0 - 1) = arg1;
                        } while (temp_v1 != var_v0);
                        if (var_v0 != temp_a0) {
                            goto loop_7;
                        }
                    } else {
                        do {
loop_7:
                            var_v0 += 4;
                            //var_v0->unk_-4 = arg1;
                            //var_v0->unk_-3 = arg1;
                            //var_v0->unk_-2 = arg1;
                            //var_v0->unk_-1 = arg1;
                            //var_v0[-4] = arg1;
                            //var_v0[-3] = arg1;
                            //var_v0[-2] = arg1;
                            //var_v0[-1] = arg1;
                            MEM_U8(var_v0 - 4) = arg1;
                            MEM_U8(var_v0 - 3) = arg1;
                            MEM_U8(var_v0 - 2) = arg1;
                            MEM_U8(var_v0 - 1) = arg1;
                        } while (var_v0 != temp_a0);
                    }
                    #endif
                    for (i = 0; i < temp_t0; i++) {
                        MEM_U8(var_v0) = arg1;
                        var_v0++;
                    }


                    f->_ptr_addr = var_v0;
                }
                f->_cnt = -1;
                //__flsbuf((s32) arg1, f);
                wrapper___flsbuf(mem, arg1, fp_addr);

                var_s1 -= 1;
                if (var_s1 != 0) {
                    var_v1 = f->_cnt - var_s1;
                    f->_cnt = var_v1;
                    if (var_v1 >= 0) {
                        goto block_11;
                    }
                    goto loop_3;
                }
            } else {
block_11:
                var_v0 = f->_ptr_addr;
                temp_a0_2 = var_v0 + var_s1;

                #if 0
                temp_t4 = (temp_a0_2 - var_v0) & 3;
                temp_v1_2 = var_v0 + temp_t4;
                if (temp_t4 != 0) {
                    do {
                        var_v0 += 1;
                        //var_v0->unk_-1 = arg1;
                        //var_v0[-1] = arg1;
                        MEM_U8(var_v0 - 1) = arg1;
                    } while (temp_v1_2 != var_v0);
                    if (var_v0 != temp_a0_2) {
                        goto loop_14;
                    }
                } else {
                    do {
loop_14:
                        var_v0 += 4;
                        //var_v0->unk_-4 = arg1;
                        //var_v0->unk_-3 = arg1;
                        //var_v0->unk_-2 = arg1;
                        //var_v0->unk_-1 = arg1;
                        //var_v0[-4] = arg1;
                        //var_v0[-3] = arg1;
                        //var_v0[-2] = arg1;
                        //var_v0[-1] = arg1;
                        MEM_U8(var_v0 - 4) = arg1;
                        MEM_U8(var_v0 - 3) = arg1;
                        MEM_U8(var_v0 - 2) = arg1;
                        MEM_U8(var_v0 - 1) = arg1;
                    } while (var_v0 != temp_a0_2);
                }
                #endif

                for (i = 0; i < temp_a0_2; i++) {
                    MEM_U8(var_v0) = arg1;
                    var_v0++;
                }

                f->_ptr_addr = var_v0;
            }
        }
    }
}
#endif


#if 1
//extern s32 D__0x7F60;

///void f_write_char(uint8_t *mem, uint32_t sp, FILE_irix* arg0, s32 arg1, s32 arg2) {
void f_write_char(uint8_t *mem, uint32_t sp, uint32_t fp_addr, s32 arg1, s32 arg2) {
    FILE_irix *f = (FILE_irix *)&MEM_U32(fp_addr);
    u8 temp_s0 = arg1;

    if (arg2 >= 2) {
        func_4690a8(mem, sp, fp_addr, ' ', arg2 - 1);
        if (/*D__0x7F60*/ MEM_U32(0xfb51f00 + 0) != 0) {
            wrapper___semputc(mem,  temp_s0, fp_addr);
            return;
        }

        f->_cnt--;
        if (f->_cnt < 0) {
            wrapper___flsbuf(mem, temp_s0, fp_addr);
            return;
        }
        //*f->_ptr_addr = temp_s0;
        MEM_U8(f->_ptr_addr) = temp_s0;
        f->_ptr_addr += 1;
        return;
    }
    if (arg2 < -1) {
        if (/*D__0x7F60*/ MEM_U32(0xfb51f00 + 0) != 0) {
            wrapper___semputc(mem, temp_s0, fp_addr);
        } else {
            f->_cnt--;
            if (f->_cnt < 0) {
                wrapper___flsbuf(mem, temp_s0, fp_addr);
            } else {
                //*f->_ptr_addr = temp_s0;
                MEM_U8(f->_ptr_addr) = temp_s0;
                f->_ptr_addr += 1;
            }
        }
        func_4690a8(mem, sp, fp_addr, ' ', -1 - arg2);
        return;
    }
    if (/*D__0x7F60*/ MEM_U32(0xfb51f00 + 0) != 0) {
        wrapper___semputc(mem, temp_s0, fp_addr);
        return;
    }

    f->_cnt--;
    if (f->_cnt < 0) {
        wrapper___flsbuf(mem, temp_s0, fp_addr);
        return;
    }
    //*f->_ptr_addr = temp_s0;
    #if 0
    fprintf(stderr, "\n");
    fprintf(stderr, "%s: f->_ptr_addr = %X\n", __func__, f->_ptr_addr);
    fprintf(stderr, "\n");
    #endif
    MEM_U8(f->_ptr_addr) = temp_s0;
    f->_ptr_addr += 1;
}
#endif

#if 1
// ? f__getbuf(FILE_irix*, s32);                       /* extern */
// extern s32 D__0x73F0;
// extern ? D__0x7F74;
// extern ? D__0x7F98;

//void f_rewrite(FILE_irix** arg0, void* arg1, u32 arg2, s32 arg3) {
void f_rewrite(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3) {
    // FILE_irix* temp_s1;
    uint32_t temp_s1;
    // FILE_irix* temp_v0_2;
    uint32_t temp_v0_2;
    // FILE_irix* var_s1;
    uint32_t var_s1;

    s32 var_a1;

    // s8* temp_v0;
    uint32_t temp_v0;

    // s8* var_s0;
    uint32_t var_s0;

    u32 var_a2;
    u32 var_v0;

    //var_a2 = arg2;
    var_a2 = a2;

    // temp_s1 = arg0->unk_0;
    temp_s1 = MEM_U32(a0 + 0);

    var_v0 = var_a2 - 1;
    if ((var_a2 != 0) && (/* *(var_v0 + arg1) */ MEM_U8(var_v0 + a1) == 0x20)) {
loop_2:
        var_a2 = var_v0;
        if (var_v0 != 0) {
            var_v0 -= 1;
            if (/* *(var_v0 + arg1) */ MEM_U8(var_v0 + a1) == 0x20) {
                goto loop_2;
            }
        }
    }
    if (var_a2 != 0) {
        //arg2 = var_a2;
        a2 = var_a2;

        //temp_v0 = malloc(var_a2 + 1);
        temp_v0 = wrapper_malloc(mem, var_a2 + 1);

        var_s0 = temp_v0;

        // memcpy(temp_v0, arg1, arg2);
        wrapper_memcpy(mem, temp_v0, a1, a2);

        // *(var_s0 + arg2) = 0;
        MEM_U8(var_s0 + a2) = 0;

        //arg0->unk_4 = var_s0;
        MEM_U32(a0 + 4) = var_s0;
        goto block_10;
    }

    // var_s0 = arg0->unk_4;
    var_s0 = MEM_U32(a0 + 4);
    if (var_s0 == 0) { // NULL
        if (temp_s1 != 0) { // NULL
            //fseek(temp_s1, 0, 0);
            wrapper_fseek(mem, temp_s1, 0, 0);
            return;
        }
        //var_s0 = malloc(0x18U);
        var_s0 = wrapper_malloc(mem, 0x18U);

        D__0x73F0 += 1;

        // TODO
        // sprintf(var_s0, &D__0x7F98 - 0xAA0, D__0x73F0, getpid());
        assert(!"sprintf call on f_rewrite not implemented yet, shorry");

        //arg0->unk_4 = var_s0;
        MEM_U32(a0 + 4) = var_s0;

        goto block_10;
    }

block_10:
    if (temp_s1 != 0) { // NULL
        // temp_v0_2 = freopen(var_s0, &D__0x7F98 - 0xA90, temp_s1);
        temp_v0_2 = wrapper_freopen(mem, var_s0, 0x1000f570, temp_s1);

        var_s1 = temp_v0_2;
        if (temp_v0_2 == 0) { // NULL
            // TODO
            // fprintf(&D__0x7F74 + 0x20, &D__0x7F98 - 0xA8C);
            assert(!"fprintf call on f_rewrite not implemented yet, shorry");
            exit(0xD);
        }
    } else {
        //var_s1 = fopen(var_s0, &D__0x7F98 - 0xA5C);
        var_s1 = wrapper_fopen(mem, var_s0, 0x1000f5a4);
    }

    if (var_s1 != 0) { // NULL
        FILE_irix *s1_file = (FILE_irix *)&MEM_U32(var_s1);

        // if (var_s1->_base == 0) { // NULL
        if (s1_file->_base_addr == 0) { // NULL
            var_a1 = 1;
            // if (arg3 != 0) {
            //     var_a1 = arg3;
            // }
            if (a3 != 0) {
                var_a1 = a3;
            }
            f__getbuf(mem, sp, var_s1, var_a1);
        }
    }

    // arg0->unk_0 = var_s1;
    MEM_U32(a0 + 0) = var_s1;
}
#endif

#if 1
// extern ? D__0x7F74;

// void f__getbuf(FILE_irix* arg0, s32 arg1) {
void f__getbuf(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1) {
    u32 sp24;
    s32 var_a2;
    FILE_irix *a0_file;

    //sp24 = f_calc_size(arg0, arg1);
    sp24 = f_calc_size(mem, sp, a0, a1);

    var_a2 = 0;
    //if (arg0 == (&D__0x7F74 + 0x10)) {
    if (a0 == (D__0x7F74_addr + 0x10)) {
        var_a2 = 0;
        //if (isatty((s32) D__0x7F74.unk_1D) != 0) {
        if (wrapper_isatty(mem, MEM_U8(D__0x7F74_addr + 0x1D)) != 0) {
            var_a2 = 0x40;
        }
    }

    //setvbuf(arg0, NULL, var_a2, (u32) sp24);
    wrapper_setvbuf(mem, a0, 0, var_a2, sp24);

    // arg0->_cnt = sp24;
    a0_file = (FILE_irix *)&MEM_U32(a0);
    a0_file->_cnt = sp24;
}
#endif

#endif /* USE_REIMPLEMENTATIONS */
