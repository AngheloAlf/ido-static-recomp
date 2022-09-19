#define _POSIX_C_SOURCE 199309L

#include "header.h"


uint32_t f_bvectin(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_bvectin0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_40b7d0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_read_feedback_file(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_40bae0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_path_blockno(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_local_in_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_initbv(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_setbit(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_resetbit(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_checkbvlist(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_bvectcard(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_bvectcopy(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_bvcopynot(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_bvecteq(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_bvectempty(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_bvectunion(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_bvectintsect(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_bvectminus(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_unionminus(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_minusminus(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_unionintsect(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_uintsectminus(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_intsectunion(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_unionnot(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_uminusminus(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_bvectglop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_bvecthoistglop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_bvectpp1(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_bvectpp2(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_bvectinsert(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_formbvlivran(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_setbitbb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_checkinitbvlivran(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_resetsubdelete(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_setsubinsert(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_has_assert(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_trap_implying(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_trap_implying_v(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_delete_unmoved_recur(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_codemotion(uint8_t *mem, uint32_t sp);

uint32_t f_entryav(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_entryant(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_vardelete(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_varinsert(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_checkexpoccur(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_41297c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

uint32_t func_412b18(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void f_checkexp_ant_av(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_exprdelete(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_checkstatoccur(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_413510(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_4135cc(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_413684(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_4137dc(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void func_414108(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t func_4150e4(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_4154ac(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_41550c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_4173ec(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_417480(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_copypropagate(uint8_t *mem, uint32_t sp);

void f_printmtyp(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_printitab(uint8_t *mem, uint32_t sp);

void f_printtab(uint8_t *mem, uint32_t sp);

void f_printbv(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_printlinfo(uint8_t *mem, uint32_t sp);

void f_printhoist(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_printprecm(uint8_t *mem, uint32_t sp);

void f_printcm(uint8_t *mem, uint32_t sp);

void f_printscm(uint8_t *mem, uint32_t sp);

void f_printregs(uint8_t *mem, uint32_t sp);

void f_printinterproc(uint8_t *mem, uint32_t sp);

void f_printsav(uint8_t *mem, uint32_t sp);

void f_printstat(uint8_t *mem, uint32_t sp);

void f_print_loop_relations(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_igen3(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_outparlod(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_gen_cvtl(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_gen_cvt(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_genrop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_inreg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_base_noalias(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_base_gp_noalias(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_base_sp_noalias(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_base_in_reg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_varlodstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_spilltemplodstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_genloadaddr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_genloadnum(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_genloadrnum(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_gen_static_link(uint8_t *mem, uint32_t sp);

void f_genrlodrstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_prolog(uint8_t *mem, uint32_t sp);

void f_epilog(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_gen_outparcode(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_422af0(uint8_t *mem, uint32_t sp, uint32_t v0);

void func_422d04(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_42305c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_4230f0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void func_424ffc(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void func_425594(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_425618(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_426de8(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_426fa4(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t func_428dd8(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

uint32_t func_42933c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_42a1c8(uint8_t *mem, uint32_t sp, uint32_t v0);

void func_42a4cc(uint8_t *mem, uint32_t sp, uint32_t v0);

void func_42a7d0(uint8_t *mem, uint32_t sp);

void func_42aadc(uint8_t *mem, uint32_t sp, uint32_t v0);

void func_42b09c(uint8_t *mem, uint32_t sp, uint32_t v0);

void func_42b144(uint8_t *mem, uint32_t sp, uint32_t v0);

void func_42b1a8(uint8_t *mem, uint32_t sp, uint32_t v0);

void func_42b2c0(uint8_t *mem, uint32_t sp, uint32_t v0);

void func_42b890(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_42bb4c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_42bd94(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_42be58(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_reemit(uint8_t *mem, uint32_t sp);

void f_incorp_feedback(uint8_t *mem, uint32_t sp);

uint32_t f_empty_bb(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_42ef10(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_42f044(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_bb_frequencies(uint8_t *mem, uint32_t sp);

uint32_t f_ingraph(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_init_graphnode(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_init_node_vectors(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_appendgraph(uint8_t *mem, uint32_t sp);

void func_42f4dc(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_42f558(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_42f5d4(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_controlflow(uint8_t *mem, uint32_t sp);

uint32_t func_42fea0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_43005c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_43019c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

uint32_t func_430354(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

uint32_t func_43044c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_430528(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_430548(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_430680(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_430bf4(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_430d74(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_430ff4(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_4310ec(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_431268(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

uint32_t func_4313e4(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_431508(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void f_findinduct(uint8_t *mem, uint32_t sp);

uint32_t f_ivfactor(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_addnullfilename(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_434120(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void func_434434(uint8_t *mem, uint32_t sp, uint32_t v0);

uint32_t func_4345a8(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_434610(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t func_4346b0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_processargs(uint8_t *mem, uint32_t sp);

void func_4376e0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_optinit(uint8_t *mem, uint32_t sp);

void f_procinit(uint8_t *mem, uint32_t sp);

void f_procinit_regs(uint8_t *mem, uint32_t sp);

void f_write_updated_st(uint8_t *mem, uint32_t sp);

void f_st_feinit(uint8_t *mem, uint32_t sp);

void f_getop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_formal_parm_vreg(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_43a0a8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_copyline(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_createcvtl(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_in_outparlist(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_insert_outparlist(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_constexp(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_appendstorelist(uint8_t *mem, uint32_t sp);

void f_appendbbvarlst(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_incroccurrence(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_bigtree(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_treekilled(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_43b084(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_43b15c(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_43b1dc(uint8_t *mem, uint32_t sp);

void func_43b23c(uint8_t *mem, uint32_t sp);

void func_43b2b8(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_43b334(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_43b504(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_43c248(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_43c56c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void func_43ca8c(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_43cbfc(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_43ce64(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_readnxtinst(uint8_t *mem, uint32_t sp);

uint32_t f_isconstihash(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_realihash(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_isvarihash(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_isldaihash(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_isopihash(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_opvalihash(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_appendichain(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_isearchloop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_trep_image(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_exprimage(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_searchstore(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_codeimage(uint8_t *mem, uint32_t sp);

void f_check_loop_coincidence(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_expr_has_direct_usage(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_has_direct_induct_usage(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_check_loop_induct_usages(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_same_scale(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_find_ix_loadstores(uint8_t *mem, uint32_t sp);

uint32_t f_findbaseaddr(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_findbaseaddr_ada(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_overlapping(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_aliaswithptr(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_pointtoheap(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_slkilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_smkilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_sskilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_movkillprev(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_strkillprev(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_lodkillprev(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_clkilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_cmkilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_cskilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_cupkillprev(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_ciakillprev(uint8_t *mem, uint32_t sp);

uint32_t func_44c6d4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_listplkilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_44ce80(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_44d0c4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_listpskilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_parkillprev(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_varkilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_strlkilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_strskilled(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_strlant(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_indirectaccessed(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_binaryovfw(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_ixaovfw(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_unaryovfw(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_binaryfold(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_ixafold(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_ilodfold(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_istrfold(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_cvtfold(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_unaryfold(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_linearize(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_44fd9c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void f_mergeconst(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_distrlaw(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_reduceixa(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_451764(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void f_constarith(uint8_t *mem, uint32_t sp);

uint32_t func_453430(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_4538e8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_453914(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_453a30(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_453b04(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_453c20(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_453dc0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_453e58(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_453e7c(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_453ecc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_454038(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_454060(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_454378(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t func_454514(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void func_454920(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t func_454ab8(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_454d08(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

uint32_t func_454f00(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_455060(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_455354(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_455418(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void func_455518(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_455c48(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void f_analoop(uint8_t *mem, uint32_t sp);

void func_456310(uint8_t *mem, uint32_t sp, uint32_t v0);

void f_oneproc(uint8_t *mem, uint32_t sp);

uint32_t f_main(uint8_t *mem, uint32_t sp);

void f_init_mtagtab(uint8_t *mem, uint32_t sp);

void f_mtagwarning(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_searchmtag_parm(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_45889c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_458998(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

uint32_t f_assign_mtag(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_compareloc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_compareaddr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_searchproc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_change_to_o2(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_getproc(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_insertijplab(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_updatelab(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_searchlab(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_update_veqv_in_table(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_make_subloc_veqv(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_insertvar(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_enterfsymtab(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_del_fsymtab(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_enter_gp_rel_tab(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_insertlda(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_insertcallee(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_check_gp_relative(uint8_t *mem, uint32_t sp);

void f_oneinstruction(uint8_t *mem, uint32_t sp);

void f_oneprocprepass(uint8_t *mem, uint32_t sp);

uint32_t f_mergecallees(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_45bb1c(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_45bbec(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_45bca8(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void f_processcallgraph(uint8_t *mem, uint32_t sp);

void f_checkforvreg(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_findallvregs(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_prepass(uint8_t *mem, uint32_t sp);

uint32_t f_varintree(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_furthervarintree(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_in_fsym(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_is_gp_relative(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_proc_suppressed(uint8_t *mem, uint32_t sp);

uint32_t f_lvalaltered(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_lvalantloc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_expinalter(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_cupaltered(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_expaltered(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_patchvectors(uint8_t *mem, uint32_t sp);

uint32_t f_is_cup(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_formlivbb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_passedinreg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_varappear(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_caninsertearly(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_sizeofsetexpr(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_45e45c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_45e5c4(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

uint32_t func_45fbb4(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2);

void func_461084(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_46123c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_461640(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_461778(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_461880(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_4618d4(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_461920(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_46195c(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_461a00(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_makelivranges(uint8_t *mem, uint32_t sp);

void f_regdataflow(uint8_t *mem, uint32_t sp);

uint32_t f_gettolivbb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_prehascup(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_464848(uint8_t *mem, uint32_t sp, uint32_t v0);

uint32_t f_allsucmember(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_preallmember(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_alloc_livbb(uint8_t *mem, uint32_t sp);

uint32_t f_r2_overlap_r3(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_localcolor(uint8_t *mem, uint32_t sp);

void f_insintf(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_intfering(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_465da4(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_465e18(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_spilltemps(uint8_t *mem, uint32_t sp);

void f_dellivbb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_updatecolorsleft(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_updateforbidden(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_findsharedintf(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_marksharedintf(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_addadjacents(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_somepremember(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_somepostmember(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_allpreppout(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_allsucppin(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_updatelivran(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_isconstrained(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_4673b0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t f_contiguous(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_canmoverlod(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_compute_save(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_whyuncolored(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_inc_allococ(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_is_cup_affecting_regs(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_needsplit(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_split(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_cupcosts(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_put_in_fallthru_bb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_put_in_jump_bb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_globalcolor(uint8_t *mem, uint32_t sp);

uint32_t f_change_to_const_eq(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_change_to_var_eq(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_del_orig_cond(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_unroll_searchloop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_unroll_resetincr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_unroll_resetincr_mod(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_unroll_check_istr_propcopy(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_oneloopblockexpr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_oneloopblockstmt(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_create_edge(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_new_header_node(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_record_labels(uint8_t *mem, uint32_t sp);

void f_new_set_of_labels(uint8_t *mem, uint32_t sp);

uint32_t f_get_labelmap(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_link_jump_in_loop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_pre_loopblock(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_post_loopblock(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_termination_test(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_expr_instr(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_estimate_instr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_change_adj_node(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_del_adj_node(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_form_bop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_form_rem(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_form_neq0(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_form_neg(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_str_to_temporary(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_reset_images(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_loopunroll(uint8_t *mem, uint32_t sp);

uint32_t func_473504(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_4736e0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2);

void f_par_to_str(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_473d84(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void f_pmov_to_mov(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_opt_saved_regs(uint8_t *mem, uint32_t sp);

uint32_t f_inpathbefore(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_inpathafter(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_474dc0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_474fc8(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_47558c(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_getexpsources(uint8_t *mem, uint32_t sp);

uint32_t f_next_stmt_is_ret1(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_next_stmt_is_ret(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_no_ref_param(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_475e38(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void f_fix_par_vreg(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_476034(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_47606c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void f_tail_recursion(uint8_t *mem, uint32_t sp);

void f_findbbtemps(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_gettemp(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t func_476e40(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t func_476ecc(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_477118(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t func_477854(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t func_477b0c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_477e20(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void func_47847c(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void func_4787b0(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_478820(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_478b8c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_478c14(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_478ed4(uint8_t *mem, uint32_t sp, uint32_t a0);

void func_478fa0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_4793c4(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_47966c(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void func_479778(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

uint32_t func_479b80(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_eliminduct(uint8_t *mem, uint32_t sp);

uint32_t f_addreq(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_stackerror(uint8_t *mem, uint32_t sp);

void f_boundswarning(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_ovfwwarning(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_dbgerror(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_appendchain(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_findsimilar(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_copycoderep(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_fix_sbase(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_fix_base(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_fixcorr(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_delentry(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_decreasecount(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_increasecount(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_isconsthash(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_realhash(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_isvarhash(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_isophash(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_opvalhash(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_extendstat(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_sizeoftyp(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_blktolev(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_newbit(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_exproccurred(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_iexproccurred(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_addovfw_signed(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_subovfw_signed(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_mpyovfw_signed(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_addovfw_unsigned(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_subovfw_unsigned(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_mpyovfw_unsigned(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_addovfw(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_subovfw(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_mpyovfw(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_searchvar(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_vartreeinfo(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_entervregveqv(uint8_t *mem, uint32_t sp);

void f_deccount(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_getoption(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_cutbits(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint64_t f_cutbits64(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_enter_const(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_enter_lda(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_binopwithconst(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_regclassof(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_constinreg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_ldainreg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_in_indmults(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_checkincre(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_findincre(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_countvars(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_hasvolatile(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_has_volt_ovfw(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_has_ilod(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_is_incr(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_alloc_realloc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_fitparmreg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_trap_imply(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_trapstat_imply(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_is_power2(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_getfloatval(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_val_when_exponent0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_coloroffset(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_in_reg_masks(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t func_47fe1c(uint8_t *mem, uint32_t sp);

void f_skipproc(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_inside_loop(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_check_ix_candidate(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_check_loop_nest_ix_cand(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_check_ix_source(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_get_ix_source(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_abort(uint8_t *mem, uint32_t sp);

void f_openstdout(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_getclock(uint8_t *mem, uint32_t sp);

void func_4808d0(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0, uint32_t a1);

void func_480920(uint8_t *mem, uint32_t sp, uint32_t v0, uint32_t a0);

void f_uini(uint8_t *mem, uint32_t sp);

void f_inituwrite(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_fnamelen(uint8_t *mem, uint32_t sp);

void f_uwrite(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_uputinit(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_uputint(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_uputflush(uint8_t *mem, uint32_t sp);

void f_uputclose(uint8_t *mem, uint32_t sp);

void f_ugetinit(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_ugetint(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_ugeteof(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void func_487994(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_readuinstr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_initur(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_st_currentpchdr(uint8_t *mem, uint32_t sp);

void f_st_free(uint8_t *mem, uint32_t sp);

uint32_t f_st_str_extiss(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_st_idn_dn(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_st_setidn(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_st_iextmax(uint8_t *mem, uint32_t sp);

void f_st_error(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

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

uint32_t f_gethostsex(uint8_t *mem, uint32_t sp);

void f__md_st_internal(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f__md_st_error(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f__md_st_str_extiss(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f__md_st_currentifd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f__md_st_malloc(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_st_pext_iext(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_st_idn_index_fext(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_st_pdn_idn(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_st_internal(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t f_st_psym_idn_offset(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_st_iaux_copyty(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_st_auxisymadd(uint8_t *mem, uint32_t sp);

void f_st_auxrndxadd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_st_readbinary(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_st_readst(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t func_48e078(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_st_writebinary(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_st_writest(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_swap_hdr(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_swap_fd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_swap_fi(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_swap_sym(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_swap_ext(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_swap_pd(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_swap_dn(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_swap_opt(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_st_warning(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_ldfsymorder(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_eof(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_eoln(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_peek_char(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_next_char(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_read_char(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_readln(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_read_string(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void func_4954d0(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void func_495650(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_writeln(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_write_char(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

void f_write_string(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_write_enum(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_write_integer(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_write_cardinal(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_write_real(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_write_boolean(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_new(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_dispose(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_rewrite(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_get_arg(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t f_clock(uint8_t *mem, uint32_t sp);

uint32_t f_calc_size(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_reset(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f__getbuf(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

void f_caseerror(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

void f_exit(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_xfree(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_alloc_dispose(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_xmalloc(uint8_t *mem, uint32_t sp, uint32_t a0);

uint32_t f_alloc_new(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_alloc_page(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_alloc_free(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_alloc_scb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_alloc_mark(uint8_t *mem, uint32_t sp, uint32_t a0);

void f_alloc_release(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);

uint32_t f_alloc_next_scb(uint8_t *mem, uint32_t sp, uint32_t a0, uint32_t a1);
