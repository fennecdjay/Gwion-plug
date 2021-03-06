ANN static bool gwgcc_symbol(GwGccJit *a, Symbol b);
ANN static bool gwgcc_array_sub(GwGccJit *a, Array_Sub b);
ANN static bool gwgcc_id_list(GwGccJit *a, ID_List b);
ANN static bool gwgcc_specialized_list(GwGccJit *a, Specialized_List b);
ANN static bool gwgcc_type_list(GwGccJit *a, Type_List b);
ANN static bool gwgcc_tmpl(GwGccJit *a, Tmpl *b);
ANN static bool gwgcc_range(GwGccJit *a, Range *b);
ANN static bool gwgcc_type_decl(GwGccJit *a, Type_Decl *b);
ANN static gcc_jit_rvalue* gwgcc_prim_id(GwGccJit *a, Symbol *b);
ANN static gcc_jit_rvalue* gwgcc_prim_num(GwGccJit *a, m_uint *b);
ANN static gcc_jit_rvalue* gwgcc_prim_float(GwGccJit *a, m_float *b);
ANN static gcc_jit_rvalue* gwgcc_prim_str(GwGccJit *a, m_str *b);
ANN static gcc_jit_rvalue* gwgcc_prim_array(GwGccJit *a, Array_Sub *b);
ANN static gcc_jit_rvalue* gwgcc_prim_range(GwGccJit *a, Range* *b);
ANN static gcc_jit_rvalue* gwgcc_prim_hack(GwGccJit *a, Exp *b);
ANN static gcc_jit_rvalue* gwgcc_prim_typeof(GwGccJit *a, Exp *b);
ANN static gcc_jit_rvalue* gwgcc_prim_interp(GwGccJit *a, Exp *b);
ANN static gcc_jit_rvalue* gwgcc_prim_char(GwGccJit *a, m_str *b);
ANN static gcc_jit_rvalue* gwgcc_prim_nil(GwGccJit *a, bool *b);
ANN static gcc_jit_rvalue* gwgcc_prim_perform(GwGccJit *a, Symbol b);
ANN static gcc_jit_rvalue* gwgcc_prim(GwGccJit *a, Exp_Primary *b);
ANN static bool gwgcc_var_decl(GwGccJit *a, Var_Decl b);
ANN static bool gwgcc_var_decl_list(GwGccJit *a, Var_Decl_List b);
ANN static gcc_jit_rvalue* gwgcc_exp_decl(GwGccJit *a, Exp_Decl *b);
ANN static gcc_jit_rvalue* gwgcc_exp_binary(GwGccJit *a, Exp_Binary *b);
ANN static gcc_jit_rvalue* gwgcc_exp_unary(GwGccJit *a, Exp_Unary *b);
ANN static gcc_jit_rvalue* gwgcc_exp_cast(GwGccJit *a, Exp_Cast *b);
ANN static gcc_jit_rvalue* gwgcc_exp_post(GwGccJit *a, Exp_Postfix *b);
ANN static gcc_jit_rvalue* gwgcc_exp_call(GwGccJit *a, Exp_Call *b);
ANN static gcc_jit_rvalue* gwgcc_exp_array(GwGccJit *a, Exp_Array *b);
ANN static gcc_jit_rvalue* gwgcc_exp_slice(GwGccJit *a, Exp_Slice *b);
ANN static gcc_jit_rvalue* gwgcc_exp_if(GwGccJit *a, Exp_If *b);
ANN static gcc_jit_rvalue* gwgcc_exp_dot(GwGccJit *a, Exp_Dot *b);
ANN static gcc_jit_rvalue* gwgcc_exp_lambda(GwGccJit *a, Exp_Lambda *b);
ANN static gcc_jit_rvalue* gwgcc_exp_td(GwGccJit *a, Type_Decl *b);
ANN static gcc_jit_rvalue* gwgcc_exp1(GwGccJit *a, Exp b);
ANN static bool gwgcc_stmt_exp(GwGccJit *a, Stmt_Exp b);
ANN static bool gwgcc_stmt_while(GwGccJit *a, Stmt_Flow b);
ANN static bool gwgcc_stmt_until(GwGccJit *a, Stmt_Flow b);
ANN static bool gwgcc_stmt_for(GwGccJit *a, Stmt_For b);
ANN static bool gwgcc_stmt_each(GwGccJit *a, Stmt_Each b);
ANN static bool gwgcc_stmt_loop(GwGccJit *a, Stmt_Loop b);
ANN static bool gwgcc_stmt_if(GwGccJit *a, Stmt_If b);
ANN static bool gwgcc_stmt_code(GwGccJit *a, Stmt_Code b);
ANN static bool gwgcc_stmt_varloop(GwGccJit *a, Stmt_VarLoop b);
ANN static bool gwgcc_stmt_break(GwGccJit *a, Stmt_Exp b);
ANN static bool gwgcc_stmt_continue(GwGccJit *a, Stmt_Exp b);
ANN static bool gwgcc_stmt_return(GwGccJit *a, Stmt_Exp b);
ANN static bool gwgcc_case_list(GwGccJit *a, Stmt_List b);
ANN static bool gwgcc_stmt_match(GwGccJit *a, Stmt_Match b);
ANN static bool gwgcc_stmt_case(GwGccJit *a, Stmt_Match b);
ANN static bool gwgcc_stmt_index(GwGccJit *a, Stmt_Index b);
ANN static bool gwgcc_stmt_pp(GwGccJit *a, Stmt_PP b);
ANN static bool gwgcc_stmt_retry(GwGccJit *a, Stmt_Exp b);
ANN static bool gwgcc_stmt_try(GwGccJit *a, Stmt_Try b);
ANN static bool gwgcc_stmt_defer(GwGccJit *a, Stmt_Defer b);
ANN static bool gwgcc_stmt(GwGccJit *a, Stmt b);
ANN static bool gwgcc_arg_list(GwGccJit *a, Arg_List b);
ANN static bool gwgcc_union_list(GwGccJit *a, Union_List b);
ANN static bool gwgcc_stmt_list(GwGccJit *a, Stmt_List b);
ANN static bool gwgcc_func_base(GwGccJit *a, Func_Base *b);
ANN static bool gwgcc_func_def(GwGccJit *a, Func_Def b);
ANN static bool gwgcc_class_def(GwGccJit *a, Class_Def b);
ANN static bool gwgcc_trait_def(GwGccJit *a, Trait_Def b);
ANN static bool gwgcc_enum_def(GwGccJit *a, Enum_Def b);
ANN static bool gwgcc_union_def(GwGccJit *a, Union_Def b);
ANN static bool gwgcc_fptr_def(GwGccJit *a, Fptr_Def b);
ANN static bool gwgcc_type_def(GwGccJit *a, Type_Def b);
ANN static bool gwgcc_extend_def(GwGccJit *a, Extend_Def b);
ANN static bool gwgcc_section(GwGccJit *a, Section *b);
