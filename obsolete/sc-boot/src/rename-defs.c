#include <stratego.h>
#include <stratego-lib.h>
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  {
    sym__1 = ATmakeSymbol("", 1, ATfalse);
    ATprotectSymbol(sym__1);
  }
  {
    sym__2 = ATmakeSymbol("", 2, ATfalse);
    ATprotectSymbol(sym__2);
  }
  {
    sym__3 = ATmakeSymbol("", 3, ATfalse);
    ATprotectSymbol(sym__3);
  }
  {
    sym__4 = ATmakeSymbol("", 4, ATfalse);
    ATprotectSymbol(sym__4);
  }
  {
    sym__5 = ATmakeSymbol("", 5, ATfalse);
    ATprotectSymbol(sym__5);
  }
  {
    sym__6 = ATmakeSymbol("", 6, ATfalse);
    ATprotectSymbol(sym__6);
  }
  {
    sym__7 = ATmakeSymbol("", 7, ATfalse);
    ATprotectSymbol(sym__7);
  }
  {
    sym__8 = ATmakeSymbol("", 8, ATfalse);
    ATprotectSymbol(sym__8);
  }
  {
    sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
    ATprotectSymbol(sym_Scopes_0);
  }
  {
    sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
    ATprotectSymbol(sym_Keys_0);
  }
  {
    sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
    ATprotectSymbol(sym_Keys_1);
  }
  {
    sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
    ATprotectSymbol(sym_Keys_2);
  }
  {
    sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
    ATprotectSymbol(sym_Keys_3);
  }
  {
    sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
    ATprotectSymbol(sym_Keys_4);
  }
  {
    sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
    ATprotectSymbol(sym_Keys_5);
  }
  {
    sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
    ATprotectSymbol(sym_Keys_6);
  }
  {
    sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
    ATprotectSymbol(sym_Keys_7);
  }
  {
    sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
    ATprotectSymbol(sym_Keys_8);
  }
  {
    sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
    ATprotectSymbol(sym_Keys_9);
  }
  {
    sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
    ATprotectSymbol(sym_Keys_10);
  }
  {
    sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
    ATprotectSymbol(sym_Defined_0);
  }
  {
    sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
    ATprotectSymbol(sym_Defined_1);
  }
  {
    sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
    ATprotectSymbol(sym_Defined_2);
  }
  {
    sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
    ATprotectSymbol(sym_Defined_3);
  }
  {
    sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
    ATprotectSymbol(sym_Defined_4);
  }
  {
    sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
    ATprotectSymbol(sym_Defined_5);
  }
  {
    sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
    ATprotectSymbol(sym_Defined_6);
  }
  {
    sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
    ATprotectSymbol(sym_Defined_7);
  }
  {
    sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
    ATprotectSymbol(sym_Defined_8);
  }
  {
    sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
    ATprotectSymbol(sym_Defined_9);
  }
  {
    sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
    ATprotectSymbol(sym_Defined_10);
  }
  {
    sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
    ATprotectSymbol(sym_Undefined_0);
  }
  {
    sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
    ATprotectSymbol(sym_Program_1);
  }
  {
    sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
    ATprotectSymbol(sym_Undefined_1);
  }
  {
    sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
    ATprotectSymbol(sym_Silent_0);
  }
  {
    sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
    ATprotectSymbol(sym_Verbose_0);
  }
  {
    sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
    ATprotectSymbol(sym_Version_0);
  }
  {
    sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
    ATprotectSymbol(sym_Input_1);
  }
  {
    sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
    ATprotectSymbol(sym_Output_1);
  }
  {
    sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
    ATprotectSymbol(sym_Binary_0);
  }
  {
    sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
    ATprotectSymbol(sym_Statistics_0);
  }
  {
    sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
    ATprotectSymbol(sym_Help_0);
  }
  {
    sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
    ATprotectSymbol(sym_Runtime_1);
  }
  {
    sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
    ATprotectSymbol(sym_DeclVersion_1);
  }
  {
    sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
    ATprotectSymbol(sym_stdin_0);
  }
  {
    sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
    ATprotectSymbol(sym_stdout_0);
  }
  {
    sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
    ATprotectSymbol(sym_stderr_0);
  }
  {
    sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
    ATprotectSymbol(sym_None_0);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
    ATprotectSymbol(sym_CUT_0);
  }
  {
    sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
    ATprotectSymbol(sym_ConstType_1);
  }
  {
    sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
    ATprotectSymbol(sym_FunType_2);
  }
  {
    sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
    ATprotectSymbol(sym_Sort_2);
  }
  {
    sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
    ATprotectSymbol(sym_OpDecl_2);
  }
  {
    sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
    ATprotectSymbol(sym_Sorts_1);
  }
  {
    sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
    ATprotectSymbol(sym_Constructors_1);
  }
  {
    sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
    ATprotectSymbol(sym_NoKind_0);
  }
  {
    sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
    ATprotectSymbol(sym_Seqs_1);
  }
  {
    sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
    ATprotectSymbol(sym_Choices_1);
  }
  {
    sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
    ATprotectSymbol(sym_LChoices_1);
  }
  {
    sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
    ATprotectSymbol(sym_Lets_2);
  }
  {
    sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
    ATprotectSymbol(sym_ScopeDefault_1);
  }
  {
    sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
    ATprotectSymbol(sym_DynRuleScope_2);
  }
  {
    sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
    ATprotectSymbol(sym_MA_2);
  }
  {
    sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
    ATprotectSymbol(sym_AM_2);
  }
  {
    sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
    ATprotectSymbol(sym_BA_2);
  }
  {
    sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
    ATprotectSymbol(sym_BAM_3);
  }
  {
    sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
    ATprotectSymbol(sym_Con_3);
  }
  {
    sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
    ATprotectSymbol(sym_App_2);
  }
  {
    sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
    ATprotectSymbol(sym_RootApp_1);
  }
  {
    sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
    ATprotectSymbol(sym_InfixApp_3);
  }
  {
    sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
    ATprotectSymbol(sym_Explode_2);
  }
  {
    sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
    ATprotectSymbol(sym_ExplodeCong_2);
  }
  {
    sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
    ATprotectSymbol(sym_As_2);
  }
  {
    sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
    ATprotectSymbol(sym_BuildDefault_1);
  }
  {
    sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
    ATprotectSymbol(sym_Rule_3);
  }
  {
    sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
    ATprotectSymbol(sym_StratRule_3);
  }
  {
    sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
    ATprotectSymbol(sym_LRule_1);
  }
  {
    sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
    ATprotectSymbol(sym_SRule_1);
  }
  {
    sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
    ATprotectSymbol(sym_RDef_3);
  }
  {
    sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_DynamicRules_1);
  }
  {
    sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_OverrideDynamicRules_1);
  }
  {
    sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
    ATprotectSymbol(sym_Mod_2);
  }
  {
    sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
    ATprotectSymbol(sym_Overlay_3);
  }
  {
    sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
    ATprotectSymbol(sym_Signature_1);
  }
  {
    sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
    ATprotectSymbol(sym_Overlays_1);
  }
  {
    sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
    ATprotectSymbol(sym_Rules_1);
  }
  {
    sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
    ATprotectSymbol(sym_Strategies_1);
  }
  {
    sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
    ATprotectSymbol(sym_Imports_1);
  }
  {
    sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
    ATprotectSymbol(sym_Specification_1);
  }
  {
    sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
    ATprotectSymbol(sym_Wld_0);
  }
  {
    sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
    ATprotectSymbol(sym_Var_1);
  }
  {
    sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
    ATprotectSymbol(sym_Int_1);
  }
  {
    sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
    ATprotectSymbol(sym_Real_1);
  }
  {
    sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
    ATprotectSymbol(sym_Str_1);
  }
  {
    sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
    ATprotectSymbol(sym_Op_2);
  }
  {
    sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
    ATprotectSymbol(sym_Id_0);
  }
  {
    sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
    ATprotectSymbol(sym_Fail_0);
  }
  {
    sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
    ATprotectSymbol(sym_Test_1);
  }
  {
    sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
    ATprotectSymbol(sym_Not_1);
  }
  {
    sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
    ATprotectSymbol(sym_Seq_2);
  }
  {
    sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
    ATprotectSymbol(sym_Choice_2);
  }
  {
    sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
    ATprotectSymbol(sym_LChoice_2);
  }
  {
    sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
    ATprotectSymbol(sym_SVar_1);
  }
  {
    sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
    ATprotectSymbol(sym_Rec_2);
  }
  {
    sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
    ATprotectSymbol(sym_Let_2);
  }
  {
    sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
    ATprotectSymbol(sym_SDef_3);
  }
  {
    sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
    ATprotectSymbol(sym_VarDec_2);
  }
  {
    sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
    ATprotectSymbol(sym_DefaultVarDec_1);
  }
  {
    sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
    ATprotectSymbol(sym_SDef_4);
  }
  {
    sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
    ATprotectSymbol(sym_DontInline_0);
  }
  {
    sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
    ATprotectSymbol(sym_Call_2);
  }
  {
    sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
    ATprotectSymbol(sym_Path_2);
  }
  {
    sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
    ATprotectSymbol(sym_Cong_2);
  }
  {
    sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
    ATprotectSymbol(sym_One_1);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
    ATprotectSymbol(sym_All_1);
  }
  {
    sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
    ATprotectSymbol(sym_Thread_1);
  }
  {
    sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
    ATprotectSymbol(sym_Assign_2);
  }
  {
    sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
    ATprotectSymbol(sym_Match_1);
  }
  {
    sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
    ATprotectSymbol(sym_Build_1);
  }
  {
    sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
    ATprotectSymbol(sym_MatchVar_1);
  }
  {
    sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
    ATprotectSymbol(sym_MatchFun_1);
  }
  {
    sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
    ATprotectSymbol(sym_Scope_2);
  }
  {
    sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
    ATprotectSymbol(sym_Where_1);
  }
  {
    sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
    ATprotectSymbol(sym_Prim_2);
  }
  {
    sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
    ATprotectSymbol(sym_Nil_0);
  }
  {
    sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
    ATprotectSymbol(sym_Cons_2);
  }
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm x_62 (ATerm));
ATerm assert_1 (ATerm, ATerm k_45 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm m_45 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm k_0 (ATerm));
ATerm escape_1 (ATerm, ATerm x_50 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_55 (ATerm), ATerm d_55 (ATerm), ATerm e_55 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm z_42 (ATerm));
ATerm Cons_2 (ATerm, ATerm a_45 (ATerm), ATerm b_45 (ATerm));
ATerm Specification_1 (ATerm, ATerm b_43 (ATerm));
ATerm _2 (ATerm, ATerm s_34 (ATerm), ATerm t_34 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_61 (ATerm), ATerm r_61 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_48 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_46 (ATerm));
ATerm map_1 (ATerm, ATerm l_58 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_46 (ATerm));
ATerm Program_1 (ATerm, ATerm h_40 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_40 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_46 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_46 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_46 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_47 (ATerm), ATerm w_47 (ATerm), ATerm x_47 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_47 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  a_1 :
  if(((ATermList) b_1 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL;
  h_1 = t;
  g_1 :
  if(match_cons(h_1, sym__2))
    {
      i_1 = ATgetArgument(h_1, 0);
      j_1 = ATgetArgument(h_1, 1);
      {
        ATerm m_1 = NULL;
        ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(j_1), not_null(i_1));
        {
          ATerm a_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
            return(t);
          }
          t = rewrite_1(t, a_0);
          {
            n_1 = t;
            e_1 :
            if(match_cons(n_1, sym_Defined_2))
              {
                o_1 = ATgetArgument(n_1, 0);
                p_1 = ATgetArgument(n_1, 1);
                f_1 :
                if(match_string(o_1, "b_0"))
                  {
                    if(((m_1 != NULL) && (m_1 != p_1)))
                      _fail(p_1);
                    else
                      m_1 = p_1;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = not_null(m_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RenameCall_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
  y_1 = t;
  w_1 :
  if(match_cons(y_1, sym_Call_2))
    {
      z_1 = ATgetArgument(y_1, 0);
      b_2 = ATgetArgument(y_1, 1);
      x_1 :
      if(match_cons(z_1, sym_SVar_1))
        {
          a_2 = ATgetArgument(z_1, 0);
          {
            ATerm e_2 = NULL,f_2 = NULL;
            ATerm g_2 = NULL;
            t = not_null(b_2);
            {
              t = length_0(t);
              {
                g_2 = t;
                {
                  if(((e_2 != NULL) && (e_2 != g_2)))
                    _fail(g_2);
                  else
                    e_2 = g_2;
                  {
                    ATerm z_5 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm h_2 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_2), not_null(e_2));
                        {
                          t = RenameVar_0(t);
                          {
                            h_2 = t;
                            if(((f_2 != NULL) && (f_2 != h_2)))
                              _fail(h_2);
                            else
                              f_2 = h_2;
                          }
                        }
                        PopChoice();
                      }
                    else
                      {
                        t = z_5;
                        {
                          ATerm i_2 = NULL;
                          t = not_null(a_2);
                          {
                            t = HoArg_0(t);
                            {
                              i_2 = t;
                              if(((f_2 != NULL) && (f_2 != i_2)))
                                _fail(i_2);
                              else
                                f_2 = i_2;
                            }
                          }
                        }
                      }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_2)), not_null(b_2));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    t = x_62(t);
    t = _all(t, n_2);
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_45 (ATerm))
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
  t_2 = t;
  s_2 :
  if(match_cons(t_2, sym__2))
    {
      u_2 = ATgetArgument(t_2, 0);
      v_2 = ATgetArgument(t_2, 1);
      {
        ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
        ATerm a_6;
        a_6 = t;
        {
          ATerm b_3 = NULL;
          ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL;
          t = k_45(t);
          {
            b_3 = t;
            {
              if(((y_2 != NULL) && (y_2 != b_3)))
                _fail(b_3);
              else
                y_2 = b_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_2), not_null(u_2), not_null(v_2));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_6 = t;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_2), (ATerm) ATmakeAppl(sym_Scopes_0));
                        t = table_get_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = b_6;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_3 = t;
                      r_2 :
                      if(((ATgetType(c_3) == AT_LIST) && ((ATermList) c_3 != ATempty)))
                        {
                          d_3 = ATgetFirst((ATermList) c_3);
                          e_3 = (ATerm) ATgetNext((ATermList) c_3);
                          {
                            if(((z_2 != NULL) && (z_2 != d_3)))
                              _fail(d_3);
                            else
                              z_2 = d_3;
                            {
                              if(((a_3 != NULL) && (a_3 != e_3)))
                                _fail(e_3);
                              else
                                a_3 = e_3;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(y_2), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(a_3)), (ATerm) ATinsert(CheckATermList(not_null(z_2)), not_null(u_2))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
            }
          }
        }
        t = a_6;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  k_3 = t;
  j_3 :
  if(((ATgetType(k_3) == AT_LIST) && ((ATermList) k_3 != ATempty)))
    {
      l_3 = ATgetFirst((ATermList) k_3);
      m_3 = (ATerm) ATgetNext((ATermList) k_3);
      t = not_null(l_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym__2))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_3), not_null(u_3));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm m_45 (ATerm))
{
  ATerm a_4 = NULL;
  ATerm c_4 = NULL;
  a_4 = t;
  {
    ATerm d_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__0);
    {
      t = m_45(t);
      {
        d_4 = t;
        if(((c_4 != NULL) && (c_4 != d_4)))
          _fail(d_4);
        else
          c_4 = d_4;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_4), not_null(a_4));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  {
    ATerm c_6 = t;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(n_4));
        {
          ATerm l_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
            return(t);
          }
          t = rewrite_1(t, l_0);
          {
            p_4 = t;
            j_4 :
            if(match_cons(p_4, sym_Undefined_0))
              _fail(t);
            else
              _fail(t);
          }
        }
        t = (ATerm) ATmakeAppl(sym__0);
        PopChoice();
      }
    else
      {
        t = c_6;
        {
          ATerm r_4 = NULL;
          ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(n_4));
          {
            ATerm m_0 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
              return(t);
            }
            t = rewrite_1(t, m_0);
            {
              s_4 = t;
              l_4 :
              if(match_cons(s_4, sym_Defined_2))
                {
                  t_4 = ATgetArgument(s_4, 0);
                  u_4 = ATgetArgument(s_4, 1);
                  m_4 :
                  if(match_string(t_4, "c_0"))
                    {
                      if(((r_4 != NULL) && (r_4 != u_4)))
                        _fail(u_4);
                      else
                        r_4 = u_4;
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
          t = not_null(r_4);
        }
      }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm a_5 = NULL;
  a_5 = t;
  t = SSL_int_to_string(not_null(a_5));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  l_5 = t;
  j_5 :
  if(((ATgetType(l_5) == AT_LIST) && ((ATermList) l_5 != ATempty)))
    {
      m_5 = ATgetFirst((ATermList) l_5);
      n_5 = (ATerm) ATgetNext((ATermList) l_5);
      k_5 :
      if(match_int(m_5, 95))
        {
          ATerm p_5 = NULL;
          ATerm q_5 = NULL;
          t = not_null(n_5);
          {
            t = k_0(t);
            {
              q_5 = t;
              if(((p_5 != NULL) && (p_5 != q_5)))
                _fail(q_5);
              else
                p_5 = q_5;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_5)), (ATerm) ATmakeInt(95)), (ATerm) ATmakeInt(95));
        }
      else
        {
          if(match_int(m_5, 45))
            {
              ATerm s_5 = NULL;
              ATerm t_5 = NULL;
              t = not_null(n_5);
              {
                t = k_0(t);
                {
                  t_5 = t;
                  if(((s_5 != NULL) && (s_5 != t_5)))
                    _fail(t_5);
                  else
                    s_5 = t_5;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_5)), (ATerm) ATmakeInt(95));
            }
          else
            {
              if(match_int(m_5, 39))
                {
                  ATerm v_5 = NULL;
                  ATerm w_5 = NULL;
                  t = not_null(n_5);
                  {
                    t = k_0(t);
                    {
                      w_5 = t;
                      if(((v_5 != NULL) && (v_5 != w_5)))
                        _fail(w_5);
                      else
                        v_5 = w_5;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_5)), (ATerm) ATmakeInt(95)), (ATerm) ATmakeInt(112)), (ATerm) ATmakeInt(95));
                }
              else
                _fail(t);
            }
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm escape_1 (ATerm t, ATerm x_50 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_6 = t;
      if((PushChoice() == 0))
        {
          t = x_50(t, d_6);
          PopChoice();
        }
      else
        {
          t = e_6;
          {
            ATerm j_6 = t;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, d_6);
                PopChoice();
              }
            else
              {
                t = j_6;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = d_6(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm NameMod_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_Mod_2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_6)), (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue))), not_null(h_6));
        t = concat_strings_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym__2))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      {
        ATerm k_6 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_6), not_null(q_6));
            PopChoice();
          }
        else
          {
            t = k_6;
            t = SSL_addr(not_null(p_6), not_null(q_6));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm c_55 (ATerm), ATerm d_55 (ATerm), ATerm e_55 (ATerm))
{
  ATerm l_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_55(t);
      PopChoice();
    }
  else
    {
      t = l_6;
      {
        ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
        y_6 = t;
        x_6 :
        if(((ATgetType(y_6) == AT_LIST) && ((ATermList) y_6 != ATempty)))
          {
            z_6 = ATgetFirst((ATermList) y_6);
            a_7 = (ATerm) ATgetNext((ATermList) y_6);
            {
              ATerm d_7 = NULL,f_7 = NULL;
              ATerm m_6;
              m_6 = t;
              {
                ATerm e_7 = NULL;
                t = not_null(z_6);
                {
                  t = e_55(t);
                  {
                    e_7 = t;
                    if(((d_7 != NULL) && (d_7 != e_7)))
                      _fail(e_7);
                    else
                      d_7 = e_7;
                  }
                }
              }
              t = m_6;
              {
                ATerm g_7 = NULL;
                t = not_null(a_7);
                {
                  t = foldr_3(t, c_55, d_55, e_55);
                  {
                    g_7 = t;
                    if(((f_7 != NULL) && (f_7 != g_7)))
                      _fail(g_7);
                    else
                      f_7 = g_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(f_7));
                  t = d_55(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, n_0, add_0, o_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym_SDef_3))
    {
      r_7 = ATgetArgument(q_7, 0);
      s_7 = ATgetArgument(q_7, 1);
      t_7 = ATgetArgument(q_7, 2);
      {
        ATerm x_7 = NULL,y_7 = NULL;
        ATerm z_7 = NULL;
        t = not_null(s_7);
        {
          ATerm a_8 = NULL,c_8 = NULL,e_8 = NULL;
          t = length_0(t);
          {
            z_7 = t;
            {
              if(((x_7 != NULL) && (x_7 != z_7)))
                _fail(z_7);
              else
                x_7 = z_7;
              {
                ATerm r_6;
                r_6 = t;
                {
                  ATerm b_8 = NULL;
                  t = not_null(r_7);
                  {
                    t = try_1(t, NameMod_0);
                    {
                      t = cify_0(t);
                      {
                        b_8 = t;
                        if(((a_8 != NULL) && (a_8 != b_8)))
                          _fail(b_8);
                        else
                          a_8 = b_8;
                      }
                    }
                  }
                }
                t = r_6;
                {
                  ATerm d_8 = NULL;
                  t = not_null(x_7);
                  {
                    t = int_to_string_0(t);
                    {
                      d_8 = t;
                      if(((c_8 != NULL) && (c_8 != d_8)))
                        _fail(d_8);
                      else
                        c_8 = d_8;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_8)), (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue))), not_null(a_8));
                    {
                      t = concat_strings_0(t);
                      {
                        e_8 = t;
                        {
                          if(((y_7 != NULL) && (y_7 != e_8)))
                            _fail(e_8);
                          else
                            y_7 = e_8;
                          {
                            ATerm s_6;
                            s_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(x_7), not_null(r_7)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue)), not_null(y_7)));
                              {
                                ATerm p_0 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, p_0);
                              }
                            }
                            t = s_6;
                            {
                              ATerm t_6 = t;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(r_7);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm u_6;
                                      u_6 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_7)), (ATerm) ATmakeAppl(sym_Undefined_0));
                                        {
                                          ATerm q_0 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                                            return(t);
                                          }
                                          t = assert_1(t, q_0);
                                        }
                                      }
                                      t = u_6;
                                    }
                                  }
                                  PopChoice();
                                }
                              else
                                {
                                  t = t_6;
                                  {
                                    ATerm v_6;
                                    v_6 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_7)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(y_7)));
                                      {
                                        ATerm r_0 (ATerm t)
                                        {
                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
                                          return(t);
                                        }
                                        t = assert_1(t, r_0);
                                      }
                                    }
                                    t = v_6;
                                  }
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_7), not_null(s_7), not_null(t_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rename_sdefs_0 (ATerm t)
{
  t = map_1(t, RenameSDef_0);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, t_0);
      return(t);
    }
    t = map_1(t, s_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm z_42 (ATerm))
{
  ATerm n_8 = NULL,o_8 = NULL;
  n_8 = t;
  m_8 :
  if(match_cons(n_8, sym_Strategies_1))
    {
      o_8 = ATgetArgument(n_8, 0);
      {
        ATerm q_8 = NULL;
        t = not_null(o_8);
        {
          t = z_42(t);
          {
            q_8 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(q_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_45 (ATerm), ATerm b_45 (ATerm))
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(((ATgetType(y_8) == AT_LIST) && ((ATermList) y_8 != ATempty)))
    {
      z_8 = ATgetFirst((ATermList) y_8);
      a_9 = (ATerm) ATgetNext((ATermList) y_8);
      {
        ATerm d_9 = NULL;
        t = not_null(z_8);
        {
          ATerm f_9 = NULL;
          t = a_45(t);
          {
            d_9 = t;
            {
              t = not_null(a_9);
              {
                t = b_45(t);
                {
                  f_9 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_9)), not_null(d_9));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm b_43 (ATerm))
{
  ATerm n_9 = NULL,o_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym_Specification_1))
    {
      o_9 = ATgetArgument(n_9, 0);
      {
        ATerm q_9 = NULL;
        t = not_null(o_9);
        {
          t = b_43(t);
          {
            q_9 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_9));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm s_34 (ATerm), ATerm t_34 (ATerm))
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym__2))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      {
        ATerm d_10 = NULL;
        t = not_null(z_9);
        {
          ATerm f_10 = NULL;
          t = s_34(t);
          {
            d_10 = t;
            {
              t = not_null(a_10);
              {
                t = t_34(t);
                {
                  f_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), not_null(f_10));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_10 = NULL;
  ATerm w_6;
  w_6 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm n_10 = NULL,o_10 = NULL;
      n_10 = t;
      l_10 :
      if(match_cons(n_10, sym_Program_1))
        {
          o_10 = ATgetArgument(n_10, 0);
          if(((m_10 != NULL) && (m_10 != o_10)))
            _fail(o_10);
          else
            m_10 = o_10;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, u_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(m_10)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = w_6;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue))));
  {
    t = printnl_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      ATerm b_7 = t;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            ATerm d_11 = NULL;
            d_11 = t;
            q_10 :
            if(!(match_cons(d_11, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_0);
          PopChoice();
          _fail(t);
        }
      else
        t = b_7;
      return(t);
    }
    t = _2(t, w_0, _id);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          ATerm e_11 = NULL,f_11 = NULL;
          e_11 = t;
          s_10 :
          if(match_cons(e_11, sym_Runtime_1))
            {
              f_11 = ATgetArgument(e_11, 0);
              if(((b_11 != NULL) && (b_11 != f_11)))
                _fail(f_11);
              else
                b_11 = f_11;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, z_0);
        return(t);
      }
      t = _2(t, y_0, _id);
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            ATerm g_11 = NULL,h_11 = NULL;
            g_11 = t;
            z_10 :
            if(match_cons(g_11, sym_Program_1))
              {
                h_11 = ATgetArgument(g_11, 0);
                if(((a_11 != NULL) && (a_11 != h_11)))
                  _fail(h_11);
                else
                  a_11 = h_11;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, d_1);
          return(t);
        }
        t = _2(t, c_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(b_11)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(a_11)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, v_0);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      t = SSL_WriteToTextFile(not_null(n_11), not_null(o_11));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym__2))
    {
      v_11 = ATgetArgument(u_11, 0);
      w_11 = ATgetArgument(u_11, 1);
      t = SSL_WriteToBinaryFile(not_null(v_11), not_null(w_11));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm e_12 = NULL;
  ATerm c_7;
  c_7 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm h_7 = t;
      if((PushChoice() == 0))
        {
          ATerm l_1 (ATerm t)
          {
            ATerm f_12 = NULL,g_12 = NULL;
            f_12 = t;
            b_12 :
            if(match_cons(f_12, sym_Output_1))
              {
                g_12 = ATgetArgument(f_12, 0);
                if(((e_12 != NULL) && (e_12 != g_12)))
                  _fail(g_12);
                else
                  e_12 = g_12;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, l_1);
          PopChoice();
        }
      else
        {
          t = h_7;
          {
            ATerm h_12 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              h_12 = t;
              if(((e_12 != NULL) && (e_12 != h_12)))
                _fail(h_12);
              else
                e_12 = h_12;
            }
          }
        }
      return(t);
    }
    t = _2(t, k_1, _id);
  }
  t = c_7;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        t = not_null(e_12);
        return(t);
      }
      t = split_2(t, r_1, _id);
      return(t);
    }
    t = _2(t, _id, q_1);
    {
      ATerm i_7 = t;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              ATerm p_12 = NULL;
              p_12 = t;
              d_12 :
              if(!(match_cons(p_12, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, t_1);
            return(t);
          }
          t = _2(t, s_1, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = i_7;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm v_12 = NULL,x_12 = NULL,b_13 = NULL,c_13 = NULL;
  ATerm j_7;
  j_7 = t;
  t = dtime_0(t);
  t = j_7;
  {
    t = h_48(t);
    {
      ATerm k_7;
      k_7 = t;
      {
        ATerm w_12 = NULL;
        t = dtime_0(t);
        {
          w_12 = t;
          if(((v_12 != NULL) && (v_12 != w_12)))
            _fail(w_12);
          else
            v_12 = w_12;
        }
      }
      t = k_7;
      {
        x_12 = t;
        u_12 :
        if(match_cons(x_12, sym__2))
          {
            b_13 = ATgetArgument(x_12, 0);
            c_13 = ATgetArgument(x_12, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_13)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_12))), not_null(c_13));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  t = SSL_ReadFromFile(not_null(k_13));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_61 (ATerm), ATerm r_61 (ATerm))
{
  ATerm p_13 = NULL,r_13 = NULL;
  ATerm l_7;
  l_7 = t;
  {
    ATerm q_13 = NULL;
    t = q_61(t);
    {
      q_13 = t;
      if(((p_13 != NULL) && (p_13 != q_13)))
        _fail(q_13);
      else
        p_13 = q_13;
    }
  }
  t = l_7;
  {
    ATerm s_13 = NULL;
    t = r_61(t);
    {
      s_13 = t;
      if(((r_13 != NULL) && (r_13 != s_13)))
        _fail(s_13);
      else
        r_13 = s_13;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(r_13));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_13 = NULL;
  ATerm m_7;
  m_7 = t;
  {
    ATerm n_7 = t;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          ATerm a_14 = NULL,b_14 = NULL;
          a_14 = t;
          x_13 :
          if(match_cons(a_14, sym_Input_1))
            {
              b_14 = ATgetArgument(a_14, 0);
              if(((z_13 != NULL) && (z_13 != b_14)))
                _fail(b_14);
              else
                z_13 = b_14;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, u_1);
        PopChoice();
      }
    else
      {
        t = n_7;
        {
          ATerm c_14 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            c_14 = t;
            if(((z_13 != NULL) && (z_13 != c_14)))
              _fail(c_14);
            else
              z_13 = c_14;
          }
        }
      }
  }
  t = m_7;
  {
    ATerm v_1 (ATerm t)
    {
      t = not_null(z_13);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  f_14 :
  if(!(match_cons(g_14, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_48 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm o_7 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = o_7;
        {
          ATerm u_7 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = u_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_2);
  t = g_48(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  t = SSL_table_create(not_null(i_14));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  {
    ATerm v_7;
    v_7 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(v_14));
          t = table_put_0(t);
        }
      }
    }
    t = v_7;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  o_15 = t;
  m_15 :
  if(match_string(o_15, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(o_15) == AT_LIST) && ((ATermList) o_15 != ATempty)))
        {
          p_15 = ATgetFirst((ATermList) o_15);
          q_15 = (ATerm) ATgetNext((ATermList) o_15);
          n_15 :
          if(((ATgetType(q_15) == AT_LIST) && ((ATermList) q_15 != ATempty)))
            {
              r_15 = ATgetFirst((ATermList) q_15);
              s_15 = (ATerm) ATgetNext((ATermList) q_15);
              {
                ATerm w_15 = NULL;
                ATerm w_7;
                w_7 = t;
                {
                  t = not_null(p_15);
                  t = h_0(t);
                }
                t = w_7;
                {
                  ATerm x_15 = NULL;
                  t = not_null(r_15);
                  {
                    t = i_0(t);
                    {
                      x_15 = t;
                      if(((w_15 != NULL) && (w_15 != x_15)))
                        _fail(x_15);
                      else
                        w_15 = x_15;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_15)), not_null(w_15));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_8 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm t_16 = NULL;
        t_16 = t;
        d_16 :
        if(!(match_string(t_16, "-S")))
          {
            if(!(match_string(t_16, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, d_2, j_2, k_2);
      PopChoice();
    }
  else
    {
      t = f_8;
      {
        ATerm g_8 = t;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              ATerm u_16 = NULL;
              u_16 = t;
              e_16 :
              if(!(match_string(u_16, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, l_2, m_2, o_2);
            PopChoice();
          }
        else
          {
            t = g_8;
            {
              ATerm h_8 = t;
              if((PushChoice() == 0))
                {
                  ATerm p_2 (ATerm t)
                  {
                    ATerm v_16 = NULL;
                    v_16 = t;
                    f_16 :
                    if(!(match_string(v_16, "-v")))
                      {
                        if(!(match_string(v_16, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm q_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm w_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, p_2, q_2, w_2);
                  PopChoice();
                }
              else
                {
                  t = h_8;
                  {
                    ATerm i_8 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm x_2 (ATerm t)
                        {
                          ATerm w_16 = NULL;
                          w_16 = t;
                          g_16 :
                          if(!(match_string(w_16, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm f_3 (ATerm t)
                        {
                          ATerm z_16 = NULL;
                          ATerm a_17 = NULL;
                          a_17 = t;
                          if(((z_16 != NULL) && (z_16 != a_17)))
                            _fail(a_17);
                          else
                            z_16 = a_17;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(z_16));
                          return(t);
                        }
                        ATerm g_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, x_2, f_3, g_3);
                        PopChoice();
                      }
                    else
                      {
                        t = i_8;
                        {
                          ATerm j_8 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm h_3 (ATerm t)
                              {
                                ATerm b_17 = NULL;
                                b_17 = t;
                                n_16 :
                                if(!(match_string(b_17, "-i")))
                                  {
                                    if(!(match_string(b_17, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm i_3 (ATerm t)
                              {
                                ATerm c_17 = NULL;
                                ATerm d_17 = NULL;
                                d_17 = t;
                                if(((c_17 != NULL) && (c_17 != d_17)))
                                  _fail(d_17);
                                else
                                  c_17 = d_17;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_17));
                                return(t);
                              }
                              ATerm n_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, h_3, i_3, n_3);
                              PopChoice();
                            }
                          else
                            {
                              t = j_8;
                              {
                                ATerm k_8 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_3 (ATerm t)
                                    {
                                      ATerm e_17 = NULL;
                                      e_17 = t;
                                      p_16 :
                                      if(!(match_string(e_17, "-o")))
                                        {
                                          if(!(match_string(e_17, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm p_3 (ATerm t)
                                    {
                                      ATerm f_17 = NULL;
                                      ATerm g_17 = NULL;
                                      g_17 = t;
                                      if(((f_17 != NULL) && (f_17 != g_17)))
                                        _fail(g_17);
                                      else
                                        f_17 = g_17;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_17));
                                      return(t);
                                    }
                                    ATerm q_3 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, o_3, p_3, q_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_8;
                                    {
                                      ATerm l_8 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_3 (ATerm t)
                                          {
                                            ATerm h_17 = NULL;
                                            h_17 = t;
                                            r_16 :
                                            if(!(match_string(h_17, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm w_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm x_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, v_3, w_3, x_3);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_8;
                                          {
                                            ATerm y_3 (ATerm t)
                                            {
                                              ATerm i_17 = NULL;
                                              i_17 = t;
                                              s_16 :
                                              if(!(match_string(i_17, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm z_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm b_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, y_3, z_3, b_4);
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_17 = NULL;
  n_17 = t;
  t = SSL_table_destroy(not_null(n_17));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_17 = NULL;
  r_17 = t;
  t = SSL_exit(not_null(r_17));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  t = SSL_implode_string(not_null(v_17));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm y_17 (ATerm t)
  {
    ATerm p_8 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_17);
        PopChoice();
      }
    else
      {
        t = p_8;
        {
          t = Nil_0(t);
          t = z_58(t);
        }
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_8 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = r_8;
      {
        ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
        b_18 = t;
        a_18 :
        if(((ATgetType(b_18) == AT_LIST) && ((ATermList) b_18 != ATempty)))
          {
            c_18 = ATgetFirst((ATermList) b_18);
            d_18 = (ATerm) ATgetNext((ATermList) b_18);
            {
              t = not_null(c_18);
              {
                ATerm e_4 (ATerm t)
                {
                  t = not_null(d_18);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_4);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_18 = NULL;
  k_18 = t;
  t = SSL_explode_string(not_null(k_18));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_58 (ATerm))
{
  ATerm n_18 (ATerm t)
  {
    ATerm s_8 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = s_8;
        t = Cons_2(t, l_58, n_18);
      }
    return(t);
  }
  t = n_18(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  u_18 = t;
  r_18 :
  if(((ATgetType(u_18) == AT_LIST) && ((ATermList) u_18 != ATempty)))
    {
      s_18 = ATgetFirst((ATermList) u_18);
      t_18 = (ATerm) ATgetNext((ATermList) u_18);
      {
        t = not_null(t_18);
        {
          ATerm f_4 (ATerm t)
          {
            ATerm x_18 = NULL;
            ATerm y_18 = NULL;
            t = g_0(t);
            {
              y_18 = t;
              if(((x_18 != NULL) && (x_18 != y_18)))
                _fail(y_18);
              else
                x_18 = y_18;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(x_18)), not_null(s_18));
            return(t);
          }
          t = reverse_1(t, f_4);
        }
      }
    }
  else
    {
      if(((ATermList) u_18 == ATempty))
        {
          {
            t = (ATerm) ATmakeAppl(sym__0);
            t = g_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, g_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_40 (ATerm))
{
  ATerm k_19 = NULL,l_19 = NULL;
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym_Program_1))
    {
      l_19 = ATgetArgument(k_19, 0);
      {
        ATerm n_19 = NULL;
        t = not_null(l_19);
        {
          t = h_40(t);
          {
            n_19 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm v_19 = NULL;
  ATerm h_4 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      ATerm w_19 = NULL;
      w_19 = t;
      if(((v_19 != NULL) && (v_19 != w_19)))
        _fail(w_19);
      else
        v_19 = w_19;
      return(t);
    }
    t = Program_1(t, i_4);
    return(t);
  }
  t = option_defined_1(t, h_4);
  {
    ATerm k_4 (ATerm t)
    {
      ATerm x_19 = NULL;
      ATerm y_19 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm o_4 (ATerm t)
        {
          t = not_null(v_19);
          return(t);
        }
        t = short_description_1(t, o_4);
        {
          t = concat_strings_0(t);
          {
            y_19 = t;
            if(((x_19 != NULL) && (x_19 != y_19)))
              _fail(y_19);
            else
              x_19 = y_19;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(x_19)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_4 (ATerm t)
                {
                  ATerm z_19 = NULL;
                  z_19 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_19)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_4);
                {
                  ATerm v_4 (ATerm t)
                  {
                    ATerm b_20 = NULL;
                    ATerm c_20 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm w_4 (ATerm t)
                      {
                        t = not_null(v_19);
                        return(t);
                      }
                      t = long_description_1(t, w_4);
                      {
                        t = concat_strings_0(t);
                        {
                          c_20 = t;
                          if(((b_20 != NULL) && (b_20 != c_20)))
                            _fail(c_20);
                          else
                            b_20 = c_20;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_20)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_4);
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      {
        ATerm t_8;
        t_8 = t;
        t = SSL_printnl(not_null(k_20), not_null(l_20));
        t = t_8;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_40 (ATerm))
{
  ATerm s_20 = NULL,t_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym_Undefined_1))
    {
      t_20 = ATgetArgument(s_20, 0);
      {
        ATerm v_20 = NULL;
        t = not_null(t_20);
        {
          t = i_40(t);
          {
            v_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_20));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm z_20 (ATerm t)
  {
    ATerm u_8 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_58, _id);
        PopChoice();
      }
    else
      {
        t = u_8;
        t = Cons_2(t, _id, z_20);
      }
    return(t);
  }
  t = z_20(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_47 (ATerm))
{
  t = fetch_1(t, l_47);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  a_21 :
  if(!(match_cons(b_21, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm v_8 = t;
  if((PushChoice() == 0))
    {
      t = i_62(t);
      PopChoice();
    }
  else
    {
      t = v_8;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_cons(e_21, sym__2))
    {
      f_21 = ATgetArgument(e_21, 0);
      g_21 = ATgetArgument(e_21, 1);
      t = SSL_table_get(not_null(f_21), not_null(g_21));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym__3))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      q_21 = ATgetArgument(n_21, 2);
      {
        ATerm w_8;
        w_8 = t;
        {
          ATerm u_21 = NULL;
          ATerm v_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_21), not_null(p_21));
          {
            ATerm b_9 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = b_9;
                t = (ATerm) ATempty;
              }
            {
              v_21 = t;
              if(((u_21 != NULL) && (u_21 != v_21)))
                _fail(v_21);
              else
                u_21 = v_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_21), not_null(p_21), (ATerm) ATinsert(CheckATermList(not_null(u_21)), not_null(q_21)));
            t = table_put_0(t);
          }
        }
        t = w_8;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_46 (ATerm))
{
  ATerm z_21 = NULL;
  ATerm a_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = r_46(t);
    {
      a_22 = t;
      if(((z_21 != NULL) && (z_21 != a_22)))
        _fail(a_22);
      else
        z_21 = a_22;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(z_21));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_string(g_22, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(g_22) == AT_LIST) && ((ATermList) g_22 != ATempty)))
        {
          h_22 = ATgetFirst((ATermList) g_22);
          i_22 = (ATerm) ATgetNext((ATermList) g_22);
          {
            ATerm l_22 = NULL;
            ATerm c_9;
            c_9 = t;
            {
              t = not_null(h_22);
              t = d_0(t);
            }
            t = c_9;
            {
              ATerm m_22 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  m_22 = t;
                  if(((l_22 != NULL) && (l_22 != m_22)))
                    _fail(m_22);
                  else
                    l_22 = m_22;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_22)), not_null(l_22));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm r_22 = NULL;
    r_22 = t;
    q_22 :
    if(!(match_string(r_22, "--help")))
      {
        if(!(match_string(r_22, "-h")))
          {
            if(!(match_string(r_22, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, x_4, y_4, z_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  t_22 :
  if(((ATgetType(u_22) == AT_LIST) && ((ATermList) u_22 != ATempty)))
    {
      v_22 = ATgetFirst((ATermList) u_22);
      w_22 = (ATerm) ATgetNext((ATermList) u_22);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_22)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_22)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_46 (ATerm))
{
  ATerm e_9;
  e_9 = t;
  {
    ATerm b_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = p_46(t);
      return(t);
    }
    t = try_1(t, b_5);
  }
  t = e_9;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm b_23 = NULL;
      b_23 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_23));
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      ATerm g_9 = t;
      if((PushChoice() == 0))
        {
          ATerm h_9 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = h_9;
              {
                t = p_46(t);
                t = Cons_2(t, _id, d_5);
              }
            }
          PopChoice();
        }
      else
        {
          t = g_9;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_5, d_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
    k_23 = t;
    g_23 :
    if(match_cons(k_23, sym__3))
      {
        l_23 = ATgetArgument(k_23, 0);
        m_23 = ATgetArgument(k_23, 1);
        n_23 = ATgetArgument(k_23, 2);
        {
          if(((h_23 != NULL) && (h_23 != l_23)))
            _fail(l_23);
          else
            h_23 = l_23;
          {
            if(((i_23 != NULL) && (i_23 != m_23)))
              _fail(m_23);
            else
              i_23 = m_23;
            {
              if(((j_23 != NULL) && (j_23 != n_23)))
                _fail(n_23);
              else
                j_23 = n_23;
              t = SSL_table_put(not_null(h_23), not_null(i_23), not_null(j_23));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = i_9;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_46 (ATerm))
{
  ATerm q_23 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = j_9;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm k_9 = t;
      if((PushChoice() == 0))
        {
          t = o_46(t);
          PopChoice();
        }
      else
        {
          t = k_9;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_5);
    {
      ATerm f_5 (ATerm t)
      {
        ATerm l_9 = t;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
            }
            PopChoice();
          }
        else
          {
            t = l_9;
            {
              ATerm g_5 (ATerm t)
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm r_23 = NULL;
                  r_23 = t;
                  if(((q_23 != NULL) && (q_23 != r_23)))
                    _fail(r_23);
                  else
                    q_23 = r_23;
                  return(t);
                }
                t = Undefined_1(t, h_5);
                return(t);
              }
              t = option_defined_1(t, g_5);
              {
                ATerm p_9;
                p_9 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_23)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = p_9;
                {
                  t = system_usage_0(t);
                  {
                    t = (ATerm) ATmakeInt(1);
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_5);
      {
        ATerm r_9;
        r_9 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = r_9;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_47 (ATerm), ATerm w_47 (ATerm), ATerm x_47 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm s_9 = t;
    if((PushChoice() == 0))
      {
        t = w_47(t);
        PopChoice();
      }
    else
      {
        t = s_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, i_5);
  {
    t = store_options_0(t);
    {
      ATerm t_9 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, x_47);
          PopChoice();
        }
      else
        {
          t = t_9;
          {
            ATerm u_9 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, v_47);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = u_9;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm))
{
  t = iowrap_3(t, q_47, r_47, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_47 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    t = _2(t, _id, n_47);
    return(t);
  }
  t = iowrap_2(t, o_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm x_5 (ATerm t)
      {
        ATerm y_5 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, y_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, x_5);
      return(t);
    }
    t = Specification_1(t, u_5);
    return(t);
  }
  t = iowrap_1(t, r_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
