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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
    sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
    ATprotectSymbol(sym_Final_1);
  }
  {
    sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
    ATprotectSymbol(sym_Case_4);
  }
  {
    sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
    ATprotectSymbol(sym_Case_3);
  }
  {
    sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
    ATprotectSymbol(sym_Alt_3);
  }
  {
    sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
    ATprotectSymbol(sym_Continue_1);
  }
  {
    sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
    ATprotectSymbol(sym_Assign_2);
  }
  {
    sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
    ATprotectSymbol(sym_Assign_1);
  }
  {
    sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
    ATprotectSymbol(sym_Fun_2);
  }
  {
    sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
    ATprotectSymbol(sym_Str_1);
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
    sym_Row_2 = ATmakeSymbol("Row", 2, ATfalse);
    ATprotectSymbol(sym_Row_2);
  }
  {
    sym_Row_3 = ATmakeSymbol("Row", 3, ATfalse);
    ATprotectSymbol(sym_Row_3);
  }
  {
    sym_Matrix_2 = ATmakeSymbol("Matrix", 2, ATfalse);
    ATprotectSymbol(sym_Matrix_2);
  }
  {
    sym_Matrix_1 = ATmakeSymbol("Matrix", 1, ATfalse);
    ATprotectSymbol(sym_Matrix_1);
  }
  {
    sym_Off_1 = ATmakeSymbol("Off", 1, ATfalse);
    ATprotectSymbol(sym_Off_1);
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
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm h_62 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm tboundin_3 (ATerm, ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm));
ATerm crush_3 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm free_vars_3 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_83 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm u_79 (ATerm));
ATerm Inline_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm BuildMatchFusion_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm NoEffect_0 (ATerm);
ATerm FuseScope_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm s_86 (ATerm), ATerm t_86 (ATerm));
ATerm alltd_1 (ATerm, ATerm s_85 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm u_86 (ATerm), ATerm v_86 (ATerm));
ATerm substitute_1 (ATerm, ATerm w_86 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_71 (ATerm), ATerm q_71 (ATerm));
ATerm for_3 (ATerm, ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm));
ATerm HdMember_1 (ATerm, ATerm e_77 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm e_85 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm d_63 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm));
ATerm zip_1 (ATerm, ATerm z_80 (ATerm));
ATerm new_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm F15_0 (ATerm);
ATerm F14_0 (ATerm);
ATerm F13_0 (ATerm);
ATerm F12_0 (ATerm);
ATerm F11_0 (ATerm);
ATerm F10_0 (ATerm);
ATerm F9_0 (ATerm);
ATerm F8_0 (ATerm);
ATerm F7_0 (ATerm);
ATerm F6_0 (ATerm);
ATerm F5_0 (ATerm);
ATerm F3_0 (ATerm);
ATerm F2_0 (ATerm);
ATerm F1_0 (ATerm);
ATerm ElimFail_0 (ATerm);
ATerm I16_0 (ATerm);
ATerm I12_0 (ATerm);
ATerm I10_0 (ATerm);
ATerm I9_0 (ATerm);
ATerm I8_0 (ATerm);
ATerm I7_0 (ATerm);
ATerm I4_0 (ATerm);
ATerm I3_0 (ATerm);
ATerm I2_0 (ATerm);
ATerm I1_0 (ATerm);
ATerm ElimId_0 (ATerm);
ATerm Simplify_0 (ATerm);
ATerm Optimize_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_71 (ATerm));
ATerm downup_1 (ATerm, ATerm s_83 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm y_63 (ATerm));
ATerm Strategies_1 (ATerm, ATerm r_62 (ATerm));
ATerm Specification_1 (ATerm, ATerm t_62 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm n_88 (ATerm));
ATerm _2 (ATerm, ATerm q_53 (ATerm), ATerm r_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_68 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_82 (ATerm), ATerm i_82 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_68 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_66 (ATerm));
ATerm map_1 (ATerm, ATerm c_79 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_66 (ATerm));
ATerm Program_1 (ATerm, ATerm z_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_67 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_82 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_66 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_65 (ATerm), ATerm c_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_66 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_66 (ATerm));
ATerm iowrap_3 (ATerm, ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm c_68 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_67 (ATerm));
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Tl_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL;
  n_1 = t;
  m_1 :
  if(((ATgetType(n_1) == AT_LIST) && ((ATermList) n_1 != ATempty)))
    {
      o_1 = ATgetFirst((ATermList) n_1);
      p_1 = (ATerm) ATgetNext((ATermList) n_1);
      t = not_null(p_1);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  u_1 :
  if(match_cons(v_1, sym__2))
    {
      w_1 = ATgetArgument(v_1, 0);
      x_1 = ATgetArgument(v_1, 1);
      {
        t = not_null(w_1);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm s_6 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
              }
            else
              {
                t = s_6;
                {
                  ATerm t_6 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm f_7;
                      f_7 = t;
                      {
                        ATerm a_0 (ATerm t)
                        {
                          t = not_null(x_1);
                          return(t);
                        }
                        t = HdMember_1(t, a_0);
                      }
                      t = f_7;
                      t = Cons_2(t, _id, b_2);
                      PopChoice();
                    }
                  else
                    {
                      t = t_6;
                      {
                        t = Tl_0(t);
                        t = b_2(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = b_2(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm f_2 = NULL,g_2 = NULL;
  f_2 = t;
  e_2 :
  if(match_cons(f_2, sym_DynamicRules_1))
    {
      g_2 = ATgetArgument(f_2, 0);
      {
        ATerm i_2 = NULL;
        t = not_null(g_2);
        {
          t = h_62(t);
          {
            i_2 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(i_2));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
  q_2 = t;
  p_2 :
  if(match_cons(q_2, sym_Scope_2))
    {
      r_2 = ATgetArgument(q_2, 0);
      s_2 = ATgetArgument(q_2, 1);
      {
        ATerm v_2 = NULL;
        t = not_null(r_2);
        {
          ATerm x_2 = NULL;
          t = w_64(t);
          {
            v_2 = t;
            {
              t = not_null(s_2);
              {
                t = x_64(t);
                {
                  x_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_2), not_null(x_2));
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
ATerm tboundin_3 (ATerm t, ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm))
{
  ATerm g_7 = t;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, n_87, l_87);
      PopChoice();
    }
  else
    {
      t = g_7;
      t = DynamicRules_1(t, l_87);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL;
  e_3 = t;
  d_3 :
  if(match_cons(e_3, sym_DynamicRules_1))
    {
      f_3 = ATgetArgument(e_3, 0);
      {
        t = not_null(f_3);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL;
  p_3 = t;
  k_3 :
  if(match_cons(p_3, sym_LRule_1))
    {
      q_3 = ATgetArgument(p_3, 0);
      l_3 :
      if(match_cons(q_3, sym_Rule_3))
        {
          m_3 = ATgetArgument(q_3, 0);
          n_3 = ATgetArgument(q_3, 1);
          o_3 = ATgetArgument(q_3, 2);
          {
            t = not_null(m_3);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(p_3, sym_Scope_2))
        {
          q_3 = ATgetArgument(p_3, 0);
          r_3 = ATgetArgument(p_3, 1);
          t = not_null(q_3);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym_Var_1))
    {
      c_4 = ATgetArgument(b_4, 0);
      t = (ATerm) ATinsert(ATempty, not_null(c_4));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
  h_4 = t;
  g_4 :
  if(match_cons(h_4, sym__2))
    {
      i_4 = ATgetArgument(h_4, 0);
      j_4 = ATgetArgument(h_4, 1);
      {
        t = not_null(i_4);
        {
          ATerm n_4 (ATerm t)
          {
            ATerm h_7 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(j_4);
                PopChoice();
              }
            else
              {
                t = h_7;
                {
                  ATerm i_7 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm b_0 (ATerm t)
                      {
                        t = not_null(j_4);
                        return(t);
                      }
                      t = HdMember_1(t, b_0);
                      t = n_4(t);
                      PopChoice();
                    }
                  else
                    {
                      t = i_7;
                      t = Cons_2(t, _id, n_4);
                    }
                }
              }
            return(t);
          }
          t = n_4(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm))
{
  ATerm j_7 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_76(t);
      PopChoice();
    }
  else
    {
      t = j_7;
      {
        ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
        s_4 = t;
        r_4 :
        if(((ATgetType(s_4) == AT_LIST) && ((ATermList) s_4 != ATempty)))
          {
            t_4 = ATgetFirst((ATermList) s_4);
            u_4 = (ATerm) ATgetNext((ATermList) s_4);
            {
              ATerm x_4 = NULL,z_4 = NULL;
              ATerm k_7;
              k_7 = t;
              {
                ATerm y_4 = NULL;
                t = not_null(t_4);
                {
                  t = e_76(t);
                  {
                    y_4 = t;
                    if(((x_4 != NULL) && (x_4 != y_4)))
                      _fail(y_4);
                    else
                      x_4 = y_4;
                  }
                }
              }
              t = k_7;
              {
                ATerm a_5 = NULL;
                t = not_null(u_4);
                {
                  t = foldr_3(t, c_76, d_76, e_76);
                  {
                    a_5 = t;
                    if(((z_4 != NULL) && (z_4 != a_5)))
                      _fail(a_5);
                    else
                      z_4 = a_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), not_null(z_4));
                  t = d_76(t);
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
ATerm crush_3 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm i_5 = NULL;
  ATerm k_5 = NULL;
  i_5 = t;
  {
    ATerm l_5 = NULL;
    ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
    t = not_null(i_5);
    {
      l_5 = t;
      {
        t = SSL_explode_term(not_null(l_5));
        {
          n_5 = t;
          h_5 :
          if(match_cons(n_5, sym__2))
            {
              o_5 = ATgetArgument(n_5, 0);
              p_5 = ATgetArgument(n_5, 1);
              if(((k_5 != NULL) && (k_5 != p_5)))
                _fail(p_5);
              else
                k_5 = p_5;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(k_5);
      t = foldr_3(t, p_77, q_77, r_77);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm w_5 (ATerm t)
  {
    ATerm n_7 = t;
    if((PushChoice() == 0))
      {
        t = a_73(t);
        PopChoice();
      }
    else
      {
        t = n_7;
        {
          ATerm b_8 = t;
          if((PushChoice() == 0))
            {
              ATerm u_5 = NULL;
              ATerm c_8;
              c_8 = t;
              {
                ATerm v_5 = NULL;
                t = b_73(t);
                {
                  v_5 = t;
                  if(((u_5 != NULL) && (u_5 != v_5)))
                    _fail(v_5);
                  else
                    u_5 = v_5;
                }
              }
              t = c_8;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm l_0 (ATerm t)
                  {
                    t = not_null(u_5);
                    return(t);
                  }
                  t = split_2(t, w_5, l_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm k_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = c_73(t, c_0, w_5, k_0);
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, m_0, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = b_8;
              {
                ATerm n_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, n_0, union_0, w_5);
              }
            }
        }
      }
    return(t);
  }
  t = w_5(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm d_8 = t;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = d_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, o_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym_Scope_2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      {
        ATerm i_6 = NULL;
        ATerm j_6 = NULL,l_6 = NULL;
        ATerm k_6 = NULL;
        t = not_null(f_6);
        {
          t = tvars_0(t);
          {
            k_6 = t;
            if(((j_6 != NULL) && (j_6 != k_6)))
              _fail(k_6);
            else
              j_6 = k_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), not_null(j_6));
          {
            t = isect_0(t);
            {
              l_6 = t;
              {
                if(((i_6 != NULL) && (i_6 != l_6)))
                  _fail(l_6);
                else
                  i_6 = l_6;
                {
                  ATerm e_8 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm m_6 = NULL;
                      m_6 = t;
                      if(((e_6 != NULL) && (e_6 != m_6)))
                        _fail(m_6);
                      else
                        e_6 = m_6;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = e_8;
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_6), not_null(f_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm o_83 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    t = o_83(t);
    t = _all(t, r_6);
    return(t);
  }
  t = r_6(t);
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = CleanupScope_0(t);
      t = try_1(t, FuseScope_0);
      return(t);
    }
    t = try_1(t, q_0);
    return(t);
  }
  t = topdown_1(t, p_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, r_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
  ATerm l_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_7), not_null(z_6)));
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_7), not_null(e_7)));
    return(t);
  }
  a_7 = t;
  u_6 :
  if(match_cons(a_7, sym_Seq_2))
    {
      b_7 = ATgetArgument(a_7, 0);
      e_7 = ATgetArgument(a_7, 1);
      v_6 :
      if(match_cons(e_7, sym_Scope_2))
        {
          y_6 = ATgetArgument(e_7, 0);
          z_6 = ATgetArgument(e_7, 1);
          w_6 :
          if(match_cons(b_7, sym_Scope_2))
            {
              c_7 = ATgetArgument(b_7, 0);
              d_7 = ATgetArgument(b_7, 1);
              {
                ATerm g_8 = t;
                if((PushChoice() == 0))
                  {
                    t = l_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = g_8;
                    t = m_7(t);
                  }
              }
            }
          else
            t = l_7(t);
        }
      else
        {
          x_6 :
          if(match_cons(b_7, sym_Scope_2))
            {
              c_7 = ATgetArgument(b_7, 0);
              d_7 = ATgetArgument(b_7, 1);
              t = m_7(t);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm InlineDont_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  t_7 = t;
  o_7 :
  if(match_cons(t_7, sym_Let_2))
    {
      u_7 = ATgetArgument(t_7, 0);
      a_8 = ATgetArgument(t_7, 1);
      p_7 :
      if(((ATgetType(u_7) == AT_LIST) && ((ATermList) u_7 != ATempty)))
        {
          v_7 = ATgetFirst((ATermList) u_7);
          z_7 = (ATerm) ATgetNext((ATermList) u_7);
          q_7 :
          if(match_cons(v_7, sym_SDef_3))
            {
              w_7 = ATgetArgument(v_7, 0);
              x_7 = ATgetArgument(v_7, 1);
              y_7 = ATgetArgument(v_7, 2);
              r_7 :
              if(((ATermList) x_7 == ATempty))
                {
                  s_7 :
                  if(((ATermList) z_7 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DontInline_0)), not_null(w_7), (ATerm)ATempty, not_null(y_7))), not_null(a_8));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm h_8 = t;
    if((PushChoice() == 0))
      {
        t = u_79(t);
        PopChoice();
      }
    else
      {
        t = h_8;
        t = Cons_2(t, _id, f_8);
      }
    return(t);
  }
  t = f_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym_Let_2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      {
        ATerm x_8 = NULL,y_8 = NULL;
        ATerm n_9 = NULL;
        t = not_null(t_8);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
            z_8 = t;
            n_8 :
            if(((ATgetType(z_8) == AT_LIST) && ((ATermList) z_8 != ATempty)))
              {
                a_9 = ATgetFirst((ATermList) z_8);
                e_9 = (ATerm) ATgetNext((ATermList) z_8);
                o_8 :
                if(match_cons(a_9, sym_SDef_3))
                  {
                    b_9 = ATgetArgument(a_9, 0);
                    c_9 = ATgetArgument(a_9, 1);
                    d_9 = ATgetArgument(a_9, 2);
                    p_8 :
                    if(((ATermList) c_9 == ATempty))
                      {
                        {
                          ATerm m_9 = NULL;
                          t = not_null(u_8);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
                              i_9 = t;
                              j_8 :
                              if(match_cons(i_9, sym_Call_2))
                                {
                                  j_9 = ATgetArgument(i_9, 0);
                                  l_9 = ATgetArgument(i_9, 1);
                                  k_8 :
                                  if(match_cons(j_9, sym_SVar_1))
                                    {
                                      k_9 = ATgetArgument(j_9, 0);
                                      l_8 :
                                      if(((ATermList) l_9 == ATempty))
                                        {
                                          {
                                            if(((b_9 != NULL) && (b_9 != k_9)))
                                              _fail(k_9);
                                            else
                                              b_9 = k_9;
                                            t = not_null(d_9);
                                          }
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1(t, t_0);
                            {
                              m_9 = t;
                              {
                                if(((x_8 != NULL) && (x_8 != m_9)))
                                  _fail(m_9);
                                else
                                  x_8 = m_9;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_9)), (ATerm) ATempty), not_null(x_8));
                                  {
                                    ATerm i_8 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = in_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      t = i_8;
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(e_9);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = at_suffix_1(t, s_0);
          {
            n_9 = t;
            if(((y_8 != NULL) && (y_8 != n_9)))
              _fail(n_9);
            else
              y_8 = n_9;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(y_8), not_null(x_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  b_10 = t;
  v_9 :
  if(match_cons(b_10, sym__2))
    {
      c_10 = ATgetArgument(b_10, 0);
      e_10 = ATgetArgument(b_10, 1);
      w_9 :
      if(match_cons(c_10, sym_Build_1))
        {
          d_10 = ATgetArgument(c_10, 0);
          x_9 :
          if(match_cons(e_10, sym_Where_1))
            {
              f_10 = ATgetArgument(e_10, 0);
              y_9 :
              if(match_cons(f_10, sym_Prim_2))
                {
                  z_9 = ATgetArgument(f_10, 0);
                  a_10 = ATgetArgument(f_10, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(z_9), not_null(a_10));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(e_10, sym_Prim_2))
                {
                  f_10 = ATgetArgument(e_10, 0);
                  g_10 = ATgetArgument(e_10, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(f_10), not_null(g_10));
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildBuild_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  w_10 = t;
  r_10 :
  if(match_cons(w_10, sym__2))
    {
      x_10 = ATgetArgument(w_10, 0);
      z_10 = ATgetArgument(w_10, 1);
      s_10 :
      if(match_cons(x_10, sym_Build_1))
        {
          y_10 = ATgetArgument(x_10, 0);
          t_10 :
          if(match_cons(z_10, sym_Where_1))
            {
              a_11 = ATgetArgument(z_10, 0);
              u_10 :
              if(match_cons(a_11, sym_Build_1))
                {
                  v_10 = ATgetArgument(a_11, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_10));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(z_10, sym_Build_1))
                {
                  a_11 = ATgetArgument(z_10, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_11));
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  q_11 = t;
  l_11 :
  if(match_cons(q_11, sym__2))
    {
      r_11 = ATgetArgument(q_11, 0);
      v_11 = ATgetArgument(q_11, 1);
      m_11 :
      if(match_cons(r_11, sym_Build_1))
        {
          s_11 = ATgetArgument(r_11, 0);
          n_11 :
          if(match_cons(s_11, sym_Op_2))
            {
              t_11 = ATgetArgument(s_11, 0);
              u_11 = ATgetArgument(s_11, 1);
              o_11 :
              if(match_cons(v_11, sym_Match_1))
                {
                  w_11 = ATgetArgument(v_11, 0);
                  p_11 :
                  if(match_cons(w_11, sym_Op_2))
                    {
                      x_11 = ATgetArgument(w_11, 0);
                      y_11 = ATgetArgument(w_11, 1);
                      {
                        ATerm b_12 = NULL,c_12 = NULL;
                        if(((t_11 != NULL) && (t_11 != x_11)))
                          _fail(x_11);
                        else
                          t_11 = x_11;
                        {
                          if(((b_12 != NULL) && (b_12 != y_11)))
                            _fail(y_11);
                          else
                            b_12 = y_11;
                          {
                            ATerm i_12 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), not_null(b_12));
                            {
                              ATerm u_0 (ATerm t)
                              {
                                ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
                                d_12 = t;
                                j_11 :
                                if(match_cons(d_12, sym__2))
                                  {
                                    e_12 = ATgetArgument(d_12, 0);
                                    f_12 = ATgetArgument(d_12, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_12)), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_12)));
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = zip_1(t, u_0);
                              {
                                i_12 = t;
                                if(((c_12 != NULL) && (c_12 != i_12)))
                                  _fail(i_12);
                                else
                                  c_12 = i_12;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_12)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(t_11), not_null(u_11))));
                          }
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym__2))
    {
      p_12 = ATgetArgument(o_12, 0);
      q_12 = ATgetArgument(o_12, 1);
      if(((p_12 != NULL) && (p_12 != q_12)))
        _fail(q_12);
      else
        p_12 = q_12;
    }
  else
    _fail(t);
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  z_12 = t;
  u_12 :
  if(match_cons(z_12, sym__2))
    {
      a_13 = ATgetArgument(z_12, 0);
      e_13 = ATgetArgument(z_12, 1);
      v_12 :
      if(match_cons(a_13, sym_Build_1))
        {
          b_13 = ATgetArgument(a_13, 0);
          w_12 :
          if(match_cons(b_13, sym_Op_2))
            {
              c_13 = ATgetArgument(b_13, 0);
              d_13 = ATgetArgument(b_13, 1);
              x_12 :
              if(match_cons(e_13, sym_Match_1))
                {
                  f_13 = ATgetArgument(e_13, 0);
                  y_12 :
                  if(match_cons(f_13, sym_Op_2))
                    {
                      g_13 = ATgetArgument(f_13, 0);
                      h_13 = ATgetArgument(f_13, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), not_null(g_13));
                        {
                          ATerm m_8 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = m_8;
                        }
                        t = (ATerm) ATmakeAppl(sym_Fail_0);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm BMF_0 (ATerm t)
{
  ATerm q_8 = t;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = q_8;
      {
        ATerm v_8 = t;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = v_8;
            {
              ATerm w_8 = t;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = w_8;
                  t = BuildPrim_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm BuildMatch_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,p_15 = NULL,q_15 = NULL;
  ATerm o_16 (ATerm t)
  {
    ATerm l_16 = NULL;
    ATerm m_16 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(q_15));
    {
      t = BMF_0(t);
      {
        m_16 = t;
        if(((l_16 != NULL) && (l_16 != m_16)))
          _fail(m_16);
        else
          l_16 = m_16;
      }
    }
    t = not_null(l_16);
    return(t);
  }
  v_13 = t;
  r_13 :
  if(match_cons(v_13, sym_Seq_2))
    {
      p_15 = ATgetArgument(v_13, 0);
      q_15 = ATgetArgument(v_13, 1);
      s_13 :
      if(match_cons(q_15, sym_Seq_2))
        {
          t_13 = ATgetArgument(q_15, 0);
          u_13 = ATgetArgument(q_15, 1);
          {
            ATerm f_9 = t;
            if((PushChoice() == 0))
              {
                ATerm h_16 = NULL;
                ATerm i_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(t_13));
                {
                  t = BMF_0(t);
                  {
                    i_16 = t;
                    if(((h_16 != NULL) && (h_16 != i_16)))
                      _fail(i_16);
                    else
                      h_16 = i_16;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_16), not_null(u_13));
                PopChoice();
              }
            else
              {
                t = f_9;
                t = o_16(t);
              }
          }
        }
      else
        t = o_16(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,m_17 = NULL;
  w_16 = t;
  s_16 :
  if(match_cons(w_16, sym_Seq_2))
    {
      x_16 = ATgetArgument(w_16, 0);
      z_16 = ATgetArgument(w_16, 1);
      t_16 :
      if(match_cons(x_16, sym_Build_1))
        {
          y_16 = ATgetArgument(x_16, 0);
          u_16 :
          if(match_cons(z_16, sym_Seq_2))
            {
              a_17 = ATgetArgument(z_16, 0);
              m_17 = ATgetArgument(z_16, 1);
              v_16 :
              if(match_cons(a_17, sym_Build_1))
                {
                  b_17 = ATgetArgument(a_17, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_17)), not_null(m_17));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm FuseScope_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  w_17 :
  if(match_cons(y_17, sym_Scope_2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      x_17 :
      if(match_cons(a_18, sym_Scope_2))
        {
          b_18 = ATgetArgument(a_18, 0);
          c_18 = ATgetArgument(a_18, 1);
          {
            ATerm g_18 = NULL;
            ATerm i_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(b_18));
            {
              t = conc_0(t);
              {
                i_19 = t;
                if(((g_18 != NULL) && (g_18 != i_19)))
                  _fail(i_19);
                else
                  g_18 = i_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_18), not_null(c_18));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  a_20 = t;
  z_19 :
  if(match_cons(a_20, sym_Var_1))
    {
      b_20 = ATgetArgument(a_20, 0);
      t = not_null(b_20);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm q_20 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  q_20 = t;
  o_20 :
  if(match_cons(q_20, sym__2))
    {
      j_21 = ATgetArgument(q_20, 0);
      k_21 = ATgetArgument(q_20, 1);
      p_20 :
      if(((ATgetType(k_21) == AT_LIST) && ((ATermList) k_21 != ATempty)))
        {
          l_21 = ATgetFirst((ATermList) k_21);
          m_21 = (ATerm) ATgetNext((ATermList) k_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_21), not_null(m_21));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look1_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  u_21 = t;
  r_21 :
  if(match_cons(u_21, sym__2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      s_21 :
      if(((ATgetType(w_21) == AT_LIST) && ((ATermList) w_21 != ATempty)))
        {
          x_21 = ATgetFirst((ATermList) w_21);
          a_22 = (ATerm) ATgetNext((ATermList) w_21);
          t_21 :
          if(match_cons(x_21, sym__2))
            {
              y_21 = ATgetArgument(x_21, 0);
              z_21 = ATgetArgument(x_21, 1);
              {
                ATerm l_22 = NULL;
                if(((v_21 != NULL) && (v_21 != y_21)))
                  _fail(y_21);
                else
                  v_21 = y_21;
                {
                  if(((l_22 != NULL) && (l_22 != z_21)))
                    _fail(z_21);
                  else
                    l_22 = z_21;
                  t = not_null(l_22);
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm g_9 = t;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = g_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm s_86 (ATerm), ATerm t_86 (ATerm))
{
  ATerm r_22 = NULL;
  ATerm t_22 = NULL,x_22 = NULL;
  r_22 = t;
  {
    ATerm y_22 = NULL;
    t = not_null(r_22);
    {
      ATerm z_22 = NULL;
      t = s_86(t);
      {
        y_22 = t;
        {
          if(((t_22 != NULL) && (t_22 != y_22)))
            _fail(y_22);
          else
            t_22 = y_22;
          {
            t = t_86(t);
            {
              z_22 = t;
              if(((x_22 != NULL) && (x_22 != z_22)))
                _fail(z_22);
              else
                x_22 = z_22;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), not_null(x_22));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm s_85 (ATerm))
{
  ATerm d_23 (ATerm t)
  {
    ATerm h_9 = t;
    if((PushChoice() == 0))
      {
        t = s_85(t);
        PopChoice();
      }
    else
      {
        t = h_9;
        t = _all(t, d_23);
      }
    return(t);
  }
  t = d_23(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym__2))
    {
      j_23 = ATgetArgument(i_23, 0);
      k_23 = ATgetArgument(i_23, 1);
      {
        ATerm n_23 = NULL;
        if(((n_23 != NULL) && (n_23 != k_23)))
          _fail(k_23);
        else
          n_23 = k_23;
      }
    }
  else
    {
      if(match_cons(i_23, sym__3))
        {
          j_23 = ATgetArgument(i_23, 0);
          k_23 = ATgetArgument(i_23, 1);
          l_23 = ATgetArgument(i_23, 2);
          {
            ATerm u_23 = NULL;
            ATerm v_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), not_null(k_23));
            {
              t = zip_1(t, _id);
              {
                v_23 = t;
                if(((u_23 != NULL) && (u_23 != v_23)))
                  _fail(v_23);
                else
                  u_23 = v_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(l_23));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm u_86 (ATerm), ATerm v_86 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  t = subs_args_0(t);
  {
    b_24 = t;
    a_24 :
    if(match_cons(b_24, sym__2))
      {
        c_24 = ATgetArgument(b_24, 0);
        d_24 = ATgetArgument(b_24, 1);
        {
          t = not_null(d_24);
          {
            ATerm v_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(c_24);
                return(t);
              }
              t = SubsVar_2(t, u_86, w_0);
              t = v_86(t);
              return(t);
            }
            t = alltd_1(t, v_0);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm w_86 (ATerm))
{
  t = substitute_2(t, w_86, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,y_24 = NULL,z_24 = NULL,i_25 = NULL;
  t_24 = t;
  r_24 :
  if(match_cons(t_24, sym__2))
    {
      u_24 = ATgetArgument(t_24, 0);
      y_24 = ATgetArgument(t_24, 1);
      s_24 :
      if(((ATgetType(y_24) == AT_LIST) && ((ATermList) y_24 != ATempty)))
        {
          z_24 = ATgetFirst((ATermList) y_24);
          i_25 = (ATerm) ATgetNext((ATermList) y_24);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_24)), not_null(z_24)), not_null(i_25));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  x_25 = t;
  v_25 :
  if(((ATgetType(x_25) == AT_LIST) && ((ATermList) x_25 != ATempty)))
    {
      y_25 = ATgetFirst((ATermList) x_25);
      b_26 = (ATerm) ATgetNext((ATermList) x_25);
      w_25 :
      if(match_cons(y_25, sym__2))
        {
          z_25 = ATgetArgument(y_25, 0);
          a_26 = ATgetArgument(y_25, 1);
          {
            ATerm f_26 = NULL,g_26 = NULL,o_26 = NULL,z_26 = NULL;
            ATerm o_9;
            o_9 = t;
            {
              ATerm h_26 = NULL;
              ATerm j_26 = NULL,k_26 = NULL,n_26 = NULL;
              t = not_null(a_26);
              {
                h_26 = t;
                {
                  t = SSL_explode_term(not_null(h_26));
                  {
                    j_26 = t;
                    q_25 :
                    if(match_cons(j_26, sym__2))
                      {
                        k_26 = ATgetArgument(j_26, 0);
                        n_26 = ATgetArgument(j_26, 1);
                        {
                          if(((f_26 != NULL) && (f_26 != k_26)))
                            _fail(k_26);
                          else
                            f_26 = k_26;
                          if(((g_26 != NULL) && (g_26 != n_26)))
                            _fail(n_26);
                          else
                            g_26 = n_26;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = o_9;
            {
              ATerm p_9;
              p_9 = t;
              {
                ATerm p_26 = NULL;
                ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
                t = not_null(z_25);
                {
                  p_26 = t;
                  {
                    t = SSL_explode_term(not_null(p_26));
                    {
                      w_26 = t;
                      t_25 :
                      if(match_cons(w_26, sym__2))
                        {
                          x_26 = ATgetArgument(w_26, 0);
                          y_26 = ATgetArgument(w_26, 1);
                          {
                            if(((f_26 != NULL) && (f_26 != x_26)))
                              _fail(x_26);
                            else
                              f_26 = x_26;
                            if(((o_26 != NULL) && (o_26 != y_26)))
                              _fail(y_26);
                            else
                              o_26 = y_26;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = p_9;
              {
                ATerm a_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), not_null(g_26));
                {
                  t = zip_1(t, _id);
                  {
                    a_27 = t;
                    if(((z_26 != NULL) && (z_26 != a_27)))
                      _fail(a_27);
                    else
                      z_26 = a_27;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_26), not_null(b_26));
                  t = conc_0(t);
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  k_27 = t;
  i_27 :
  if(((ATgetType(k_27) == AT_LIST) && ((ATermList) k_27 != ATempty)))
    {
      l_27 = ATgetFirst((ATermList) k_27);
      o_27 = (ATerm) ATgetNext((ATermList) k_27);
      j_27 :
      if(match_cons(l_27, sym__2))
        {
          m_27 = ATgetArgument(l_27, 0);
          n_27 = ATgetArgument(l_27, 1);
          {
            ATerm q_27 = NULL;
            if(((m_27 != NULL) && (m_27 != n_27)))
              _fail(n_27);
            else
              m_27 = n_27;
            {
              if(((q_27 != NULL) && (q_27 != o_27)))
                _fail(o_27);
              else
                q_27 = o_27;
              t = not_null(q_27);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm p_71 (ATerm), ATerm q_71 (ATerm))
{
  ATerm s_27 (ATerm t)
  {
    ATerm q_9 = t;
    if((PushChoice() == 0))
      {
        t = p_71(t);
        PopChoice();
      }
    else
      {
        t = q_9;
        {
          t = q_71(t);
          t = s_27(t);
        }
      }
    return(t);
  }
  t = s_27(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm))
{
  t = s_71(t);
  t = while_not_2(t, t_71, u_71);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  v_27 :
  if(((ATgetType(w_27) == AT_LIST) && ((ATermList) w_27 != ATempty)))
    {
      x_27 = ATgetFirst((ATermList) w_27);
      y_27 = (ATerm) ATgetNext((ATermList) w_27);
      {
        t = e_77(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm b_28 = NULL;
            b_28 = t;
            if(((x_27 != NULL) && (x_27 != b_28)))
              _fail(b_28);
            else
              x_27 = b_28;
            return(t);
          }
          t = fetch_1(t, x_0);
        }
        t = not_null(y_27);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm r_9 = t;
  if((PushChoice() == 0))
    {
      ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
      h_28 = t;
      f_28 :
      if(match_cons(h_28, sym__2))
        {
          i_28 = ATgetArgument(h_28, 0);
          j_28 = ATgetArgument(h_28, 1);
          {
            t = not_null(i_28);
            {
              ATerm p_28 (ATerm t)
              {
                ATerm s_9 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = s_9;
                    {
                      ATerm t_9 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm y_0 (ATerm t)
                          {
                            t = not_null(j_28);
                            return(t);
                          }
                          t = HdMember_1(t, y_0);
                          t = p_28(t);
                          PopChoice();
                        }
                      else
                        {
                          t = t_9;
                          t = Cons_2(t, _id, p_28);
                        }
                    }
                  }
                return(t);
              }
              t = p_28(t);
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = r_9;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm m_28 = NULL;
          m_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_28));
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          ATerm u_9 = t;
          if((PushChoice() == 0))
            {
              ATerm c_1 (ATerm t)
              {
                ATerm h_10 = t;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = h_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, c_1);
              PopChoice();
            }
          else
            {
              t = u_9;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, z_0, a_1, b_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm e_85 (ATerm))
{
  ATerm r_28 (ATerm t)
  {
    ATerm i_10 = t;
    if((PushChoice() == 0))
      {
        t = e_85(t);
        PopChoice();
      }
    else
      {
        t = i_10;
        t = _one(t, r_28);
      }
    return(t);
  }
  t = r_28(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym__2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      {
        t = not_null(x_28);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm a_29 = NULL;
            a_29 = t;
            if(((w_28 != NULL) && (w_28 != a_29)))
              _fail(a_29);
            else
              w_28 = a_29;
            return(t);
          }
          t = oncetd_1(t, d_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm d_63 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Var_1))
    {
      h_29 = ATgetArgument(g_29, 0);
      {
        ATerm j_29 = NULL;
        t = not_null(h_29);
        {
          t = d_63(t);
          {
            j_29 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_29));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  e_31 = t;
  d_30 :
  if(match_cons(e_31, sym_Seq_2))
    {
      f_31 = ATgetArgument(e_31, 0);
      h_31 = ATgetArgument(e_31, 1);
      e_30 :
      if(match_cons(f_31, sym_Assign_1))
        {
          g_31 = ATgetArgument(f_31, 0);
          f_30 :
          if(match_cons(g_31, sym_Var_1))
            {
              x_30 = ATgetArgument(g_31, 0);
              g_30 :
              if(match_cons(h_31, sym_Seq_2))
                {
                  i_31 = ATgetArgument(h_31, 0);
                  j_31 = ATgetArgument(h_31, 1);
                  h_30 :
                  if(match_cons(i_31, sym_Build_1))
                    {
                      a_31 = ATgetArgument(i_31, 0);
                      i_30 :
                      if(match_cons(a_31, sym_Var_1))
                        {
                          b_31 = ATgetArgument(a_31, 0);
                          {
                            ATerm p_31 = NULL;
                            if(((x_30 != NULL) && (x_30 != b_31)))
                              _fail(b_31);
                            else
                              x_30 = b_31;
                            {
                              if(((p_31 != NULL) && (p_31 != j_31)))
                                _fail(j_31);
                              else
                                p_31 = j_31;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30))), not_null(p_31));
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(f_31, sym_Build_1))
            {
              g_31 = ATgetArgument(f_31, 0);
              j_30 :
              if(match_cons(h_31, sym_Scope_2))
                {
                  i_31 = ATgetArgument(h_31, 0);
                  j_31 = ATgetArgument(h_31, 1);
                  k_30 :
                  if(match_cons(j_31, sym_Seq_2))
                    {
                      k_31 = ATgetArgument(j_31, 0);
                      n_31 = ATgetArgument(j_31, 1);
                      l_30 :
                      if(match_cons(k_31, sym_Assign_1))
                        {
                          l_31 = ATgetArgument(k_31, 0);
                          m_30 :
                          if(match_cons(l_31, sym_Var_1))
                            {
                              m_31 = ATgetArgument(l_31, 0);
                              {
                                ATerm j_10 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_32 = NULL,w_32 = NULL;
                                    ATerm k_10;
                                    k_10 = t;
                                    {
                                      ATerm v_32 = NULL;
                                      t = not_null(g_31);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), not_null(i_31));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), (ATerm) ATinsert(ATempty, not_null(m_31)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  v_32 = t;
                                                  if(((u_32 != NULL) && (u_32 != v_32)))
                                                    _fail(v_32);
                                                  else
                                                    u_32 = v_32;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = k_10;
                                    {
                                      ATerm x_32 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(m_31)), (ATerm)ATinsert(ATempty, not_null(g_31)), not_null(n_31));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          x_32 = t;
                                          if(((w_32 != NULL) && (w_32 != x_32)))
                                            _fail(x_32);
                                          else
                                            w_32 = x_32;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_31)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_32), not_null(w_32)));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_10;
                                    {
                                      ATerm c_33 = NULL,e_33 = NULL;
                                      ATerm l_10;
                                      l_10 = t;
                                      {
                                        ATerm d_33 = NULL;
                                        t = not_null(g_31);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), not_null(i_31));
                                            {
                                              t = in_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), (ATerm) ATinsert(ATempty, not_null(m_31)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    d_33 = t;
                                                    if(((c_33 != NULL) && (c_33 != d_33)))
                                                      _fail(d_33);
                                                    else
                                                      c_33 = d_33;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = l_10;
                                      {
                                        ATerm f_33 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(m_31)), (ATerm)ATinsert(ATempty, not_null(g_31)), not_null(n_31));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            f_33 = t;
                                            if(((e_33 != NULL) && (e_33 != f_33)))
                                              _fail(f_33);
                                            else
                                              e_33 = f_33;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_31)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_33), not_null(e_33)));
                                      }
                                    }
                                  }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(e_31, sym_Scope_2))
        {
          f_31 = ATgetArgument(e_31, 0);
          h_31 = ATgetArgument(e_31, 1);
          n_30 :
          if(match_cons(h_31, sym_Seq_2))
            {
              i_31 = ATgetArgument(h_31, 0);
              j_31 = ATgetArgument(h_31, 1);
              o_30 :
              if(match_cons(i_31, sym_Assign_1))
                {
                  a_31 = ATgetArgument(i_31, 0);
                  p_30 :
                  if(match_cons(a_31, sym_Var_1))
                    {
                      b_31 = ATgetArgument(a_31, 0);
                      q_30 :
                      if(match_cons(j_31, sym_Seq_2))
                        {
                          k_31 = ATgetArgument(j_31, 0);
                          n_31 = ATgetArgument(j_31, 1);
                          r_30 :
                          if(match_cons(k_31, sym_Assign_2))
                            {
                              l_31 = ATgetArgument(k_31, 0);
                              y_30 = ATgetArgument(k_31, 1);
                              s_30 :
                              if(match_cons(l_31, sym_Var_1))
                                {
                                  m_31 = ATgetArgument(l_31, 0);
                                  t_30 :
                                  if(match_cons(y_30, sym_Var_1))
                                    {
                                      z_30 = ATgetArgument(y_30, 0);
                                      {
                                        ATerm t_31 = NULL,u_31 = NULL,w_31 = NULL;
                                        if(((b_31 != NULL) && (b_31 != z_30)))
                                          _fail(z_30);
                                        else
                                          b_31 = z_30;
                                        {
                                          if(((t_31 != NULL) && (t_31 != n_31)))
                                            _fail(n_31);
                                          else
                                            t_31 = n_31;
                                          {
                                            ATerm m_10;
                                            m_10 = t;
                                            {
                                              ATerm v_31 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), not_null(f_31));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), not_null(f_31));
                                                  {
                                                    t = in_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), (ATerm) ATinsert(ATempty, not_null(m_31)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          v_31 = t;
                                                          if(((u_31 != NULL) && (u_31 != v_31)))
                                                            _fail(v_31);
                                                          else
                                                            u_31 = v_31;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = m_10;
                                            {
                                              ATerm x_31 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(m_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_31))), not_null(t_31));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  x_31 = t;
                                                  if(((w_31 != NULL) && (w_31 != x_31)))
                                                    _fail(x_31);
                                                  else
                                                    w_31 = x_31;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_31))), not_null(w_31)));
                                            }
                                          }
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(k_31, sym_Assign_1))
                                {
                                  l_31 = ATgetArgument(k_31, 0);
                                  u_30 :
                                  if(match_cons(l_31, sym_Var_1))
                                    {
                                      m_31 = ATgetArgument(l_31, 0);
                                      {
                                        ATerm c_32 = NULL,e_32 = NULL;
                                        ATerm n_10;
                                        n_10 = t;
                                        {
                                          ATerm d_32 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), not_null(f_31));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), not_null(f_31));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), (ATerm) ATinsert(ATempty, not_null(m_31)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      d_32 = t;
                                                      if(((c_32 != NULL) && (c_32 != d_32)))
                                                        _fail(d_32);
                                                      else
                                                        c_32 = d_32;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = n_10;
                                        {
                                          ATerm f_32 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(m_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_31))), not_null(n_31));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              f_32 = t;
                                              if(((e_32 != NULL) && (e_32 != f_32)))
                                                _fail(f_32);
                                              else
                                                e_32 = f_32;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_31))), not_null(e_32)));
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(i_31, sym_Assign_2))
                    {
                      a_31 = ATgetArgument(i_31, 0);
                      c_31 = ATgetArgument(i_31, 1);
                      v_30 :
                      if(match_cons(a_31, sym_Var_1))
                        {
                          b_31 = ATgetArgument(a_31, 0);
                          w_30 :
                          if(match_cons(c_31, sym_Var_1))
                            {
                              d_31 = ATgetArgument(c_31, 0);
                              {
                                ATerm k_32 = NULL,m_32 = NULL;
                                ATerm o_10;
                                o_10 = t;
                                {
                                  ATerm l_32 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), not_null(f_31));
                                  {
                                    t = in_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), (ATerm) ATinsert(ATempty, not_null(b_31)));
                                      {
                                        t = diff_0(t);
                                        {
                                          l_32 = t;
                                          if(((k_32 != NULL) && (k_32 != l_32)))
                                            _fail(l_32);
                                          else
                                            k_32 = l_32;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = o_10;
                                {
                                  ATerm n_32 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(b_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_31))), not_null(j_31));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      n_32 = t;
                                      if(((m_32 != NULL) && (m_32 != n_32)))
                                        _fail(n_32);
                                      else
                                        m_32 = n_32;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_32), not_null(m_32));
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
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
ATerm HoistLet_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  z_33 = t;
  x_33 :
  if(match_cons(z_33, sym_Seq_2))
    {
      a_34 = ATgetArgument(z_33, 0);
      b_34 = ATgetArgument(z_33, 1);
      y_33 :
      if(match_cons(b_34, sym_Let_2))
        {
          c_34 = ATgetArgument(b_34, 0);
          d_34 = ATgetArgument(b_34, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_34), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_34), not_null(d_34)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
  k_34 = t;
  j_34 :
  if(match_cons(k_34, sym__2))
    {
      l_34 = ATgetArgument(k_34, 0);
      m_34 = ATgetArgument(k_34, 1);
      {
        t = not_null(l_34);
        {
          ATerm e_1 (ATerm t)
          {
            t = not_null(m_34);
            return(t);
          }
          t = at_end_1(t, e_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(match_cons(s_34, sym__2))
    {
      t_34 = ATgetArgument(s_34, 0);
      u_34 = ATgetArgument(s_34, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_34)), not_null(t_34));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  c_35 = t;
  z_34 :
  if(match_cons(c_35, sym__2))
    {
      d_35 = ATgetArgument(c_35, 0);
      g_35 = ATgetArgument(c_35, 1);
      a_35 :
      if(((ATgetType(d_35) == AT_LIST) && ((ATermList) d_35 != ATempty)))
        {
          e_35 = ATgetFirst((ATermList) d_35);
          f_35 = (ATerm) ATgetNext((ATermList) d_35);
          b_35 :
          if(((ATgetType(g_35) == AT_LIST) && ((ATermList) g_35 != ATempty)))
            {
              h_35 = ATgetFirst((ATermList) g_35);
              i_35 = (ATerm) ATgetNext((ATermList) g_35);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_35), not_null(h_35)), (ATerm) ATmakeAppl(sym__2, not_null(f_35), not_null(i_35)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
  s_35 = t;
  p_35 :
  if(match_cons(s_35, sym__2))
    {
      t_35 = ATgetArgument(s_35, 0);
      u_35 = ATgetArgument(s_35, 1);
      q_35 :
      if(((ATermList) t_35 == ATempty))
        {
          r_35 :
          if(((ATermList) u_35 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm))
{
  ATerm w_35 (ATerm t)
  {
    ATerm p_10 = t;
    if((PushChoice() == 0))
      {
        t = u_80(t);
        PopChoice();
      }
    else
      {
        t = p_10;
        {
          t = v_80(t);
          {
            t = _2(t, x_80, w_35);
            t = w_80(t);
          }
        }
      }
    return(t);
  }
  t = w_35(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_80 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_80);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym_Cong_2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      {
        ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,p_37 = NULL;
        ATerm q_10;
        q_10 = t;
        {
          ATerm w_36 = NULL;
          t = not_null(o_36);
          {
            ATerm z_36 = NULL;
            t = map_1(t, new_0);
            {
              w_36 = t;
              {
                if(((t_36 != NULL) && (t_36 != w_36)))
                  _fail(w_36);
                else
                  t_36 = w_36;
                {
                  t = not_null(t_36);
                  {
                    ATerm a_37 = NULL;
                    ATerm f_1 (ATerm t)
                    {
                      ATerm x_36 = NULL;
                      ATerm y_36 = NULL;
                      y_36 = t;
                      if(((x_36 != NULL) && (x_36 != y_36)))
                        _fail(y_36);
                      else
                        x_36 = y_36;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_36));
                      return(t);
                    }
                    t = map_1(t, f_1);
                    {
                      z_36 = t;
                      {
                        if(((r_36 != NULL) && (r_36 != z_36)))
                          _fail(z_36);
                        else
                          r_36 = z_36;
                        {
                          t = not_null(o_36);
                          {
                            ATerm d_37 = NULL;
                            t = map_1(t, new_0);
                            {
                              a_37 = t;
                              {
                                if(((u_36 != NULL) && (u_36 != a_37)))
                                  _fail(a_37);
                                else
                                  u_36 = a_37;
                                {
                                  t = not_null(u_36);
                                  {
                                    ATerm e_37 = NULL,o_37 = NULL;
                                    ATerm g_1 (ATerm t)
                                    {
                                      ATerm b_37 = NULL;
                                      ATerm c_37 = NULL;
                                      c_37 = t;
                                      if(((b_37 != NULL) && (b_37 != c_37)))
                                        _fail(c_37);
                                      else
                                        b_37 = c_37;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_37));
                                      return(t);
                                    }
                                    t = map_1(t, g_1);
                                    {
                                      d_37 = t;
                                      {
                                        if(((s_36 != NULL) && (s_36 != d_37)))
                                          _fail(d_37);
                                        else
                                          s_36 = d_37;
                                        {
                                          ATerm f_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(u_36));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              f_37 = t;
                                              if(((e_37 != NULL) && (e_37 != f_37)))
                                                _fail(f_37);
                                              else
                                                e_37 = f_37;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_37), not_null(o_36));
                                            {
                                              ATerm h_1 (ATerm t)
                                              {
                                                ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
                                                g_37 = t;
                                                h_36 :
                                                if(match_cons(g_37, sym__2))
                                                  {
                                                    h_37 = ATgetArgument(g_37, 0);
                                                    k_37 = ATgetArgument(g_37, 1);
                                                    i_36 :
                                                    if(match_cons(h_37, sym__2))
                                                      {
                                                        i_37 = ATgetArgument(h_37, 0);
                                                        j_37 = ATgetArgument(h_37, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_37))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_37)))));
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = zip_1(t, h_1);
                                              {
                                                o_37 = t;
                                                if(((v_36 != NULL) && (v_36 != o_37)))
                                                  _fail(o_37);
                                                else
                                                  v_36 = o_37;
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
                  }
                }
              }
            }
          }
        }
        t = q_10;
        {
          ATerm q_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(u_36));
          {
            t = conc_0(t);
            {
              q_37 = t;
              if(((p_37 != NULL) && (p_37 != q_37)))
                _fail(q_37);
              else
                p_37 = q_37;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(n_36), not_null(r_36))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(v_36)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(n_36), not_null(s_36))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Cong_2))
    {
      j_38 = ATgetArgument(i_38, 0);
      k_38 = ATgetArgument(i_38, 1);
      {
        ATerm p_38 = NULL;
        ATerm t_38 = NULL;
        t = not_null(k_38);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm q_38 = NULL,r_38 = NULL;
            r_38 = t;
            f_38 :
            if(match_cons(r_38, sym_Match_1))
              {
                q_38 = ATgetArgument(r_38, 0);
                t = not_null(q_38);
              }
            else
              {
                if(match_cons(r_38, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_1);
          {
            t_38 = t;
            if(((p_38 != NULL) && (p_38 != t_38)))
              _fail(t_38);
            else
              p_38 = t_38;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(j_38), not_null(p_38)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
  b_39 = t;
  z_38 :
  if(match_cons(b_39, sym_Scope_2))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      a_39 :
      if(((ATermList) c_39 == ATempty))
        {
          t = not_null(d_39);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm z_39 = NULL,e_40 = NULL,f_40 = NULL,i_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  q_39 :
  if(match_cons(m_40, sym_Where_1))
    {
      n_40 = ATgetArgument(m_40, 0);
      r_39 :
      if(match_cons(n_40, sym_Seq_2))
        {
          l_40 = ATgetArgument(n_40, 0);
          e_40 = ATgetArgument(n_40, 1);
          s_39 :
          if(match_cons(l_40, sym_Where_1))
            {
              z_39 = ATgetArgument(l_40, 0);
              t_39 :
              if(match_cons(e_40, sym_Seq_2))
                {
                  f_40 = ATgetArgument(e_40, 0);
                  k_40 = ATgetArgument(e_40, 1);
                  u_39 :
                  if(match_cons(f_40, sym_Build_1))
                    {
                      i_40 = ATgetArgument(f_40, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_40)), not_null(k_40))));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(n_40, sym_Where_1))
            {
              l_40 = ATgetArgument(n_40, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(l_40));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(m_40, sym_Test_1))
        {
          n_40 = ATgetArgument(m_40, 0);
          x_39 :
          if(match_cons(n_40, sym_Test_1))
            {
              l_40 = ATgetArgument(n_40, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_40));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(m_40, sym_Not_1))
            {
              n_40 = ATgetArgument(m_40, 0);
              y_39 :
              if(match_cons(n_40, sym_Not_1))
                {
                  l_40 = ATgetArgument(n_40, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_40));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(m_40, sym_LChoice_2))
                {
                  n_40 = ATgetArgument(m_40, 0);
                  o_40 = ATgetArgument(m_40, 1);
                  {
                    if(((n_40 != NULL) && (n_40 != o_40)))
                      _fail(o_40);
                    else
                      n_40 = o_40;
                    t = not_null(n_40);
                  }
                }
              else
                {
                  if(match_cons(m_40, sym_Choice_2))
                    {
                      n_40 = ATgetArgument(m_40, 0);
                      o_40 = ATgetArgument(m_40, 1);
                      {
                        if(((n_40 != NULL) && (n_40 != o_40)))
                          _fail(o_40);
                        else
                          n_40 = o_40;
                        t = not_null(n_40);
                      }
                    }
                  else
                    _fail(t);
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  s_41 = t;
  k_41 :
  if(match_cons(s_41, sym_LChoice_2))
    {
      t_41 = ATgetArgument(s_41, 0);
      a_42 = ATgetArgument(s_41, 1);
      l_41 :
      if(match_cons(t_41, sym_LChoice_2))
        {
          y_41 = ATgetArgument(t_41, 0);
          z_41 = ATgetArgument(t_41, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_41), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_41), not_null(a_42)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(s_41, sym_Seq_2))
        {
          t_41 = ATgetArgument(s_41, 0);
          a_42 = ATgetArgument(s_41, 1);
          q_41 :
          if(match_cons(t_41, sym_Seq_2))
            {
              y_41 = ATgetArgument(t_41, 0);
              z_41 = ATgetArgument(t_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_41), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_41), not_null(a_42)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(s_41, sym_Choice_2))
            {
              t_41 = ATgetArgument(s_41, 0);
              a_42 = ATgetArgument(s_41, 1);
              r_41 :
              if(match_cons(t_41, sym_Choice_2))
                {
                  y_41 = ATgetArgument(t_41, 0);
                  z_41 = ATgetArgument(t_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_41), (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_41), not_null(a_42)));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  j_43 = t;
  b_43 :
  if(match_cons(j_43, sym_InfixApp_3))
    {
      k_43 = ATgetArgument(j_43, 0);
      g_43 = ATgetArgument(j_43, 1);
      f_43 = ATgetArgument(j_43, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_43), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_43)), not_null(k_43))));
    }
  else
    {
      if(match_cons(j_43, sym_BAM_3))
        {
          k_43 = ATgetArgument(j_43, 0);
          g_43 = ATgetArgument(j_43, 1);
          f_43 = ATgetArgument(j_43, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(f_43))), not_null(k_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_43))));
        }
      else
        {
          if(match_cons(j_43, sym_AM_2))
            {
              k_43 = ATgetArgument(j_43, 0);
              g_43 = ATgetArgument(j_43, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_43), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_43)));
            }
          else
            {
              if(match_cons(j_43, sym_MA_2))
                {
                  k_43 = ATgetArgument(j_43, 0);
                  g_43 = ATgetArgument(j_43, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_43)), not_null(g_43));
                }
              else
                {
                  if(match_cons(j_43, sym_BA_2))
                    {
                      k_43 = ATgetArgument(j_43, 0);
                      g_43 = ATgetArgument(j_43, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_43)), not_null(k_43));
                    }
                  else
                    {
                      if(match_cons(j_43, sym_Lets_2))
                        {
                          k_43 = ATgetArgument(j_43, 0);
                          g_43 = ATgetArgument(j_43, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_43), not_null(g_43));
                        }
                      else
                        {
                          if(match_cons(j_43, sym_LChoices_1))
                            {
                              k_43 = ATgetArgument(j_43, 0);
                              c_43 :
                              if(((ATgetType(k_43) == AT_LIST) && ((ATermList) k_43 != ATempty)))
                                {
                                  h_43 = ATgetFirst((ATermList) k_43);
                                  i_43 = (ATerm) ATgetNext((ATermList) k_43);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_43), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(i_43)));
                                }
                              else
                                {
                                  if(((ATermList) k_43 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_Fail_0);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(j_43, sym_Choices_1))
                                {
                                  k_43 = ATgetArgument(j_43, 0);
                                  d_43 :
                                  if(((ATgetType(k_43) == AT_LIST) && ((ATermList) k_43 != ATempty)))
                                    {
                                      h_43 = ATgetFirst((ATermList) k_43);
                                      i_43 = (ATerm) ATgetNext((ATermList) k_43);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_43), (ATerm) ATmakeAppl(sym_Choices_1, not_null(i_43)));
                                    }
                                  else
                                    {
                                      if(((ATermList) k_43 == ATempty))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Fail_0);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(j_43, sym_Seqs_1))
                                    {
                                      k_43 = ATgetArgument(j_43, 0);
                                      e_43 :
                                      if(((ATgetType(k_43) == AT_LIST) && ((ATermList) k_43 != ATempty)))
                                        {
                                          h_43 = ATgetFirst((ATermList) k_43);
                                          i_43 = (ATerm) ATgetNext((ATermList) k_43);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_43), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_43)));
                                        }
                                      else
                                        {
                                          if(((ATermList) k_43 == ATempty))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Id_0);
                                            }
                                          else
                                            _fail(t);
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
    }
  return(t);
}
ATerm F15_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  u_44 = t;
  s_44 :
  if(match_cons(u_44, sym_Where_1))
    {
      v_44 = ATgetArgument(u_44, 0);
      t_44 :
      if(match_cons(v_44, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  y_44 :
  if(match_cons(a_45, sym_LChoice_2))
    {
      b_45 = ATgetArgument(a_45, 0);
      c_45 = ATgetArgument(a_45, 1);
      z_44 :
      if(match_cons(c_45, sym_Fail_0))
        t = not_null(b_45);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
  v_45 = t;
  r_45 :
  if(match_cons(v_45, sym_LChoice_2))
    {
      w_45 = ATgetArgument(v_45, 0);
      x_45 = ATgetArgument(v_45, 1);
      t_45 :
      if(match_cons(w_45, sym_Fail_0))
        t = not_null(x_45);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
  i_46 = t;
  g_46 :
  if(match_cons(i_46, sym_Choice_2))
    {
      j_46 = ATgetArgument(i_46, 0);
      k_46 = ATgetArgument(i_46, 1);
      h_46 :
      if(match_cons(k_46, sym_Fail_0))
        t = not_null(j_46);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  o_46 :
  if(match_cons(r_46, sym_Choice_2))
    {
      s_46 = ATgetArgument(r_46, 0);
      t_46 = ATgetArgument(r_46, 1);
      q_46 :
      if(match_cons(s_46, sym_Fail_0))
        t = not_null(t_46);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,v_47 = NULL;
  h_47 = t;
  y_46 :
  if(match_cons(h_47, sym_Cong_2))
    {
      i_47 = ATgetArgument(h_47, 0);
      v_47 = ATgetArgument(h_47, 1);
      {
        t = not_null(v_47);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm y_47 = NULL;
            y_47 = t;
            x_46 :
            if(!(match_cons(y_47, sym_Fail_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, j_1);
        }
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  b_48 :
  if(match_cons(d_48, sym_Path_2))
    {
      e_48 = ATgetArgument(d_48, 0);
      f_48 = ATgetArgument(d_48, 1);
      c_48 :
      if(match_cons(f_48, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  l_48 = t;
  j_48 :
  if(match_cons(l_48, sym_One_1))
    {
      m_48 = ATgetArgument(l_48, 0);
      k_48 :
      if(match_cons(m_48, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  r_48 = t;
  p_48 :
  if(match_cons(r_48, sym_Some_1))
    {
      s_48 = ATgetArgument(r_48, 0);
      q_48 :
      if(match_cons(s_48, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  x_48 = t;
  v_48 :
  if(match_cons(x_48, sym_Rec_2))
    {
      y_48 = ATgetArgument(x_48, 0);
      z_48 = ATgetArgument(x_48, 1);
      w_48 :
      if(match_cons(z_48, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  d_49 :
  if(match_cons(f_49, sym_Scope_2))
    {
      g_49 = ATgetArgument(f_49, 0);
      h_49 = ATgetArgument(f_49, 1);
      e_49 :
      if(match_cons(h_49, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  l_49 :
  if(match_cons(n_49, sym_Seq_2))
    {
      o_49 = ATgetArgument(n_49, 0);
      p_49 = ATgetArgument(n_49, 1);
      m_49 :
      if(match_cons(o_49, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL;
  v_49 = t;
  t_49 :
  if(match_cons(v_49, sym_Not_1))
    {
      w_49 = ATgetArgument(v_49, 0);
      u_49 :
      if(match_cons(w_49, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  b_50 = t;
  z_49 :
  if(match_cons(b_50, sym_Test_1))
    {
      c_50 = ATgetArgument(b_50, 0);
      a_50 :
      if(match_cons(c_50, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm b_11 = t;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = b_11;
      {
        ATerm c_11 = t;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = c_11;
            {
              ATerm d_11 = t;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = d_11;
                  {
                    ATerm e_11 = t;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm f_11 = t;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = f_11;
                              {
                                ATerm g_11 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_11;
                                    {
                                      ATerm h_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = h_11;
                                          {
                                            ATerm i_11 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = i_11;
                                                {
                                                  ATerm k_11 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = k_11;
                                                      {
                                                        ATerm z_11 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_11;
                                                            {
                                                              ATerm a_12 = t;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = a_12;
                                                                  {
                                                                    ATerm g_12 = t;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_12;
                                                                        {
                                                                          ATerm h_12 = t;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_12;
                                                                              t = F15_0(t);
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
ATerm I16_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  h_50 = t;
  f_50 :
  if(match_cons(h_50, sym_Match_1))
    {
      i_50 = ATgetArgument(h_50, 0);
      g_50 :
      if(match_cons(i_50, sym_Wld_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  n_50 = t;
  l_50 :
  if(match_cons(n_50, sym_Where_1))
    {
      o_50 = ATgetArgument(n_50, 0);
      m_50 :
      if(match_cons(o_50, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  t_50 = t;
  r_50 :
  if(match_cons(t_50, sym_All_1))
    {
      u_50 = ATgetArgument(t_50, 0);
      s_50 :
      if(match_cons(u_50, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  x_50 :
  if(match_cons(z_50, sym_Rec_2))
    {
      a_51 = ATgetArgument(z_50, 0);
      b_51 = ATgetArgument(z_50, 1);
      y_50 :
      if(match_cons(b_51, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  f_51 :
  if(match_cons(h_51, sym_Scope_2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      g_51 :
      if(match_cons(j_51, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  n_51 :
  if(match_cons(p_51, sym_LChoice_2))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      o_51 :
      if(match_cons(q_51, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  v_51 :
  if(match_cons(x_51, sym_Seq_2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      w_51 :
      if(match_cons(z_51, sym_Id_0))
        t = not_null(y_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  d_52 :
  if(match_cons(f_52, sym_Seq_2))
    {
      g_52 = ATgetArgument(f_52, 0);
      h_52 = ATgetArgument(f_52, 1);
      e_52 :
      if(match_cons(g_52, sym_Id_0))
        t = not_null(h_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL;
  n_52 = t;
  l_52 :
  if(match_cons(n_52, sym_Not_1))
    {
      o_52 = ATgetArgument(n_52, 0);
      m_52 :
      if(match_cons(o_52, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL;
  t_52 = t;
  r_52 :
  if(match_cons(t_52, sym_Test_1))
    {
      u_52 = ATgetArgument(t_52, 0);
      s_52 :
      if(match_cons(u_52, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm j_12 = t;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = j_12;
      {
        ATerm k_12 = t;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = k_12;
            {
              ATerm l_12 = t;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = l_12;
                  {
                    ATerm m_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = m_12;
                        {
                          ATerm r_12 = t;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = r_12;
                              {
                                ATerm s_12 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_12;
                                    {
                                      ATerm t_12 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_12;
                                          {
                                            ATerm i_13 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = i_13;
                                                {
                                                  ATerm j_13 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = j_13;
                                                      t = I16_0(t);
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
          }
      }
    }
  return(t);
}
ATerm Simplify_0 (ATerm t)
{
  ATerm k_13 = t;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = k_13;
      {
        ATerm l_13 = t;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = l_13;
            {
              ATerm m_13 = t;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = m_13;
                  {
                    ATerm n_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = n_13;
                        {
                          ATerm o_13 = t;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = o_13;
                              {
                                ATerm p_13 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_13;
                                    {
                                      ATerm q_13 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_13;
                                          t = TransformingCongruence_0(t);
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
ATerm Optimize_0 (ATerm t)
{
  ATerm w_13 = t;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = w_13;
      {
        ATerm x_13 = t;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = x_13;
            {
              ATerm y_13 = t;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = y_13;
                  {
                    ATerm z_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = z_13;
                        {
                          ATerm a_14 = t;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = a_14;
                              {
                                ATerm b_14 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = b_14;
                                    {
                                      ATerm c_14 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = c_14;
                                          t = InlineDont_0(t);
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
ATerm repeat_2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm w_52 (ATerm t)
  {
    ATerm d_14 = t;
    if((PushChoice() == 0))
      {
        t = y_70(t);
        t = w_52(t);
        PopChoice();
      }
    else
      {
        t = d_14;
        t = z_70(t);
      }
    return(t);
  }
  t = w_52(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_71 (ATerm))
{
  t = repeat_2(t, b_71, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm x_52 (ATerm t)
  {
    t = s_83(t);
    {
      t = _all(t, x_52);
      t = s_83(t);
    }
    return(t);
  }
  t = x_52(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      ATerm e_14 = t;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = e_14;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, l_1);
    return(t);
  }
  t = downup_1(t, k_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm y_63 (ATerm))
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
  d_53 = t;
  c_53 :
  if(match_cons(d_53, sym_SDef_3))
    {
      e_53 = ATgetArgument(d_53, 0);
      f_53 = ATgetArgument(d_53, 1);
      g_53 = ATgetArgument(d_53, 2);
      {
        ATerm k_53 = NULL;
        t = not_null(e_53);
        {
          ATerm m_53 = NULL;
          t = w_63(t);
          {
            k_53 = t;
            {
              t = not_null(f_53);
              {
                ATerm o_53 = NULL;
                t = x_63(t);
                {
                  m_53 = t;
                  {
                    t = not_null(g_53);
                    {
                      t = y_63(t);
                      {
                        o_53 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_53), not_null(m_53), not_null(o_53));
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
  else
    _fail(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_Strategies_1))
    {
      a_54 = ATgetArgument(z_53, 0);
      {
        ATerm c_54 = NULL;
        t = not_null(a_54);
        {
          t = r_62(t);
          {
            c_54 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_54));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm j_54 = NULL,k_54 = NULL;
  j_54 = t;
  i_54 :
  if(match_cons(j_54, sym_Specification_1))
    {
      k_54 = ATgetArgument(j_54, 0);
      {
        ATerm m_54 = NULL;
        t = not_null(k_54);
        {
          t = t_62(t);
          {
            m_54 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(m_54));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm n_88 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm y_1 (ATerm t)
          {
            t = SDef_3(t, _id, _id, n_88);
            return(t);
          }
          t = map_1(t, y_1);
          return(t);
        }
        t = Strategies_1(t, t_1);
        return(t);
      }
      t = Cons_2(t, s_1, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, r_1);
    return(t);
  }
  t = Specification_1(t, q_1);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_53 (ATerm), ATerm r_53 (ATerm))
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
  u_54 = t;
  t_54 :
  if(match_cons(u_54, sym__2))
    {
      v_54 = ATgetArgument(u_54, 0);
      w_54 = ATgetArgument(u_54, 1);
      {
        ATerm b_55 = NULL;
        t = not_null(v_54);
        {
          ATerm d_55 = NULL;
          t = q_53(t);
          {
            b_55 = t;
            {
              t = not_null(w_54);
              {
                t = r_53(t);
                {
                  d_55 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_55), not_null(d_55));
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
  ATerm k_55 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm l_55 = NULL,m_55 = NULL;
      l_55 = t;
      j_55 :
      if(match_cons(l_55, sym_Program_1))
        {
          m_55 = ATgetArgument(l_55, 0);
          if(((k_55 != NULL) && (k_55 != m_55)))
            _fail(m_55);
          else
            k_55 = m_55;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, z_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(k_55)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = f_14;
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
  ATerm t_55 = NULL,u_55 = NULL;
  ATerm a_2 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      ATerm g_14 = t;
      if((PushChoice() == 0))
        {
          ATerm d_2 (ATerm t)
          {
            ATerm v_55 = NULL;
            v_55 = t;
            o_55 :
            if(!(match_cons(v_55, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, d_2);
          PopChoice();
          _fail(t);
        }
      else
        t = g_14;
      return(t);
    }
    t = _2(t, c_2, _id);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          ATerm w_55 = NULL,x_55 = NULL;
          w_55 = t;
          q_55 :
          if(match_cons(w_55, sym_Runtime_1))
            {
              x_55 = ATgetArgument(w_55, 0);
              if(((u_55 != NULL) && (u_55 != x_55)))
                _fail(x_55);
              else
                u_55 = x_55;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, j_2);
        return(t);
      }
      t = _2(t, h_2, _id);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm l_2 (ATerm t)
          {
            ATerm y_55 = NULL,z_55 = NULL;
            y_55 = t;
            s_55 :
            if(match_cons(y_55, sym_Program_1))
              {
                z_55 = ATgetArgument(y_55, 0);
                if(((t_55 != NULL) && (t_55 != z_55)))
                  _fail(z_55);
                else
                  t_55 = z_55;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, l_2);
          return(t);
        }
        t = _2(t, k_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(u_55)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(t_55)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_2);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym__2))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      t = SSL_WriteToTextFile(not_null(f_56), not_null(g_56));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
  m_56 = t;
  l_56 :
  if(match_cons(m_56, sym__2))
    {
      n_56 = ATgetArgument(m_56, 0);
      o_56 = ATgetArgument(m_56, 1);
      t = SSL_WriteToBinaryFile(not_null(n_56), not_null(o_56));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm w_56 = NULL;
  ATerm h_14;
  h_14 = t;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm i_14 = t;
      if((PushChoice() == 0))
        {
          ATerm n_2 (ATerm t)
          {
            ATerm x_56 = NULL,y_56 = NULL;
            x_56 = t;
            t_56 :
            if(match_cons(x_56, sym_Output_1))
              {
                y_56 = ATgetArgument(x_56, 0);
                if(((w_56 != NULL) && (w_56 != y_56)))
                  _fail(y_56);
                else
                  w_56 = y_56;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_2);
          PopChoice();
        }
      else
        {
          t = i_14;
          {
            ATerm z_56 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              z_56 = t;
              if(((w_56 != NULL) && (w_56 != z_56)))
                _fail(z_56);
              else
                w_56 = z_56;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_2, _id);
  }
  t = h_14;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        t = not_null(w_56);
        return(t);
      }
      t = split_2(t, t_2, _id);
      return(t);
    }
    t = _2(t, _id, o_2);
    {
      ATerm j_14 = t;
      if((PushChoice() == 0))
        {
          ATerm u_2 (ATerm t)
          {
            ATerm w_2 (ATerm t)
            {
              ATerm a_57 = NULL;
              a_57 = t;
              v_56 :
              if(!(match_cons(a_57, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, w_2);
            return(t);
          }
          t = _2(t, u_2, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = j_14;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm g_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
  ATerm k_14;
  k_14 = t;
  t = dtime_0(t);
  t = k_14;
  {
    t = m_68(t);
    {
      ATerm l_14;
      l_14 = t;
      {
        ATerm h_57 = NULL;
        t = dtime_0(t);
        {
          h_57 = t;
          if(((g_57 != NULL) && (g_57 != h_57)))
            _fail(h_57);
          else
            g_57 = h_57;
        }
      }
      t = l_14;
      {
        i_57 = t;
        f_57 :
        if(match_cons(i_57, sym__2))
          {
            j_57 = ATgetArgument(i_57, 0);
            k_57 = ATgetArgument(i_57, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_57)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(g_57))), not_null(k_57));
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
  ATerm q_57 = NULL;
  q_57 = t;
  t = SSL_ReadFromFile(not_null(q_57));
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_82 (ATerm), ATerm i_82 (ATerm))
{
  ATerm v_57 = NULL,x_57 = NULL;
  ATerm m_14;
  m_14 = t;
  {
    ATerm w_57 = NULL;
    t = h_82(t);
    {
      w_57 = t;
      if(((v_57 != NULL) && (v_57 != w_57)))
        _fail(w_57);
      else
        v_57 = w_57;
    }
  }
  t = m_14;
  {
    ATerm y_57 = NULL;
    t = i_82(t);
    {
      y_57 = t;
      if(((x_57 != NULL) && (x_57 != y_57)))
        _fail(y_57);
      else
        x_57 = y_57;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_57), not_null(x_57));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_58 = NULL;
  ATerm n_14;
  n_14 = t;
  {
    ATerm o_14 = t;
    if((PushChoice() == 0))
      {
        ATerm y_2 (ATerm t)
        {
          ATerm f_58 = NULL,g_58 = NULL;
          f_58 = t;
          c_58 :
          if(match_cons(f_58, sym_Input_1))
            {
              g_58 = ATgetArgument(f_58, 0);
              if(((e_58 != NULL) && (e_58 != g_58)))
                _fail(g_58);
              else
                e_58 = g_58;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, y_2);
        PopChoice();
      }
    else
      {
        t = o_14;
        {
          ATerm h_58 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            h_58 = t;
            if(((e_58 != NULL) && (e_58 != h_58)))
              _fail(h_58);
            else
              e_58 = h_58;
          }
        }
      }
  }
  t = n_14;
  {
    ATerm z_2 (ATerm t)
    {
      t = not_null(e_58);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_58 = NULL;
  l_58 = t;
  k_58 :
  if(!(match_cons(l_58, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm p_14 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = p_14;
        {
          ATerm q_14 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = q_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_3);
  t = l_68(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_58 = NULL;
  n_58 = t;
  t = SSL_table_create(not_null(n_58));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_58 = NULL;
  r_58 = t;
  {
    ATerm r_14;
    r_14 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(r_58));
          t = table_put_0(t);
        }
      }
    }
    t = r_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
  z_58 = t;
  x_58 :
  if(match_string(z_58, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(z_58) == AT_LIST) && ((ATermList) z_58 != ATempty)))
        {
          a_59 = ATgetFirst((ATermList) z_58);
          b_59 = (ATerm) ATgetNext((ATermList) z_58);
          y_58 :
          if(((ATgetType(b_59) == AT_LIST) && ((ATermList) b_59 != ATempty)))
            {
              c_59 = ATgetFirst((ATermList) b_59);
              d_59 = (ATerm) ATgetNext((ATermList) b_59);
              {
                ATerm h_59 = NULL;
                ATerm s_14;
                s_14 = t;
                {
                  t = not_null(a_59);
                  t = h_0(t);
                }
                t = s_14;
                {
                  ATerm i_59 = NULL;
                  t = not_null(c_59);
                  {
                    t = i_0(t);
                    {
                      i_59 = t;
                      if(((h_59 != NULL) && (h_59 != i_59)))
                        _fail(i_59);
                      else
                        h_59 = i_59;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_59)), not_null(h_59));
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
  ATerm t_14 = t;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm x_59 = NULL;
        x_59 = t;
        m_59 :
        if(!(match_string(x_59, "-S")))
          {
            if(!(match_string(x_59, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, b_3, c_3, g_3);
      PopChoice();
    }
  else
    {
      t = t_14;
      {
        ATerm u_14 = t;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm y_59 = NULL;
              y_59 = t;
              n_59 :
              if(!(match_string(y_59, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, h_3, i_3, j_3);
            PopChoice();
          }
        else
          {
            t = u_14;
            {
              ATerm v_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm s_3 (ATerm t)
                  {
                    ATerm z_59 = NULL;
                    z_59 = t;
                    o_59 :
                    if(!(match_string(z_59, "-v")))
                      {
                        if(!(match_string(z_59, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm t_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm u_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, s_3, t_3, u_3);
                  PopChoice();
                }
              else
                {
                  t = v_14;
                  {
                    ATerm w_14 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm v_3 (ATerm t)
                        {
                          ATerm a_60 = NULL;
                          a_60 = t;
                          p_59 :
                          if(!(match_string(a_60, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_3 (ATerm t)
                        {
                          ATerm b_60 = NULL;
                          ATerm c_60 = NULL;
                          c_60 = t;
                          if(((b_60 != NULL) && (b_60 != c_60)))
                            _fail(c_60);
                          else
                            b_60 = c_60;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(b_60));
                          return(t);
                        }
                        ATerm x_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, v_3, w_3, x_3);
                        PopChoice();
                      }
                    else
                      {
                        t = w_14;
                        {
                          ATerm x_14 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm y_3 (ATerm t)
                              {
                                ATerm d_60 = NULL;
                                d_60 = t;
                                r_59 :
                                if(!(match_string(d_60, "-i")))
                                  {
                                    if(!(match_string(d_60, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm z_3 (ATerm t)
                              {
                                ATerm e_60 = NULL;
                                ATerm f_60 = NULL;
                                f_60 = t;
                                if(((e_60 != NULL) && (e_60 != f_60)))
                                  _fail(f_60);
                                else
                                  e_60 = f_60;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_60));
                                return(t);
                              }
                              ATerm d_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, y_3, z_3, d_4);
                              PopChoice();
                            }
                          else
                            {
                              t = x_14;
                              {
                                ATerm y_14 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_4 (ATerm t)
                                    {
                                      ATerm g_60 = NULL;
                                      g_60 = t;
                                      t_59 :
                                      if(!(match_string(g_60, "-o")))
                                        {
                                          if(!(match_string(g_60, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_4 (ATerm t)
                                    {
                                      ATerm h_60 = NULL;
                                      ATerm i_60 = NULL;
                                      i_60 = t;
                                      if(((h_60 != NULL) && (h_60 != i_60)))
                                        _fail(i_60);
                                      else
                                        h_60 = i_60;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_60));
                                      return(t);
                                    }
                                    ATerm k_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_4, f_4, k_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = y_14;
                                    {
                                      ATerm z_14 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_4 (ATerm t)
                                          {
                                            ATerm j_60 = NULL;
                                            j_60 = t;
                                            v_59 :
                                            if(!(match_string(j_60, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm m_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm o_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, l_4, m_4, o_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = z_14;
                                          {
                                            ATerm p_4 (ATerm t)
                                            {
                                              ATerm k_60 = NULL;
                                              k_60 = t;
                                              w_59 :
                                              if(!(match_string(k_60, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm q_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm v_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, p_4, q_4, v_4);
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
  ATerm p_60 = NULL;
  p_60 = t;
  t = SSL_table_destroy(not_null(p_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_60 = NULL;
  t_60 = t;
  t = SSL_exit(not_null(t_60));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_60 = NULL;
  x_60 = t;
  t = SSL_implode_string(not_null(x_60));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm a_61 (ATerm t)
  {
    ATerm a_15 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_61);
        PopChoice();
      }
    else
      {
        t = a_15;
        {
          t = Nil_0(t);
          t = q_79(t);
        }
      }
    return(t);
  }
  t = a_61(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_15 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = b_15;
      {
        ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
        d_61 = t;
        c_61 :
        if(((ATgetType(d_61) == AT_LIST) && ((ATermList) d_61 != ATempty)))
          {
            e_61 = ATgetFirst((ATermList) d_61);
            f_61 = (ATerm) ATgetNext((ATermList) d_61);
            {
              t = not_null(e_61);
              {
                ATerm w_4 (ATerm t)
                {
                  t = not_null(f_61);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_4);
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
  ATerm l_61 = NULL;
  l_61 = t;
  t = SSL_explode_string(not_null(l_61));
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
ATerm long_description_1 (ATerm t, ATerm s_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_79 (ATerm))
{
  ATerm o_61 (ATerm t)
  {
    ATerm c_15 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = c_15;
        t = Cons_2(t, c_79, o_61);
      }
    return(t);
  }
  t = o_61(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  v_61 = t;
  s_61 :
  if(((ATgetType(v_61) == AT_LIST) && ((ATermList) v_61 != ATempty)))
    {
      t_61 = ATgetFirst((ATermList) v_61);
      u_61 = (ATerm) ATgetNext((ATermList) v_61);
      {
        t = not_null(u_61);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm y_61 = NULL;
            ATerm z_61 = NULL;
            t = g_0(t);
            {
              z_61 = t;
              if(((y_61 != NULL) && (y_61 != z_61)))
                _fail(z_61);
              else
                y_61 = z_61;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(y_61)), not_null(t_61));
            return(t);
          }
          t = reverse_1(t, b_5);
        }
      }
    }
  else
    {
      if(((ATermList) v_61 == ATempty))
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
  ATerm c_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, c_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_54 (ATerm))
{
  ATerm g_62 = NULL,i_62 = NULL;
  g_62 = t;
  f_62 :
  if(match_cons(g_62, sym_Program_1))
    {
      i_62 = ATgetArgument(g_62, 0);
      {
        ATerm k_62 = NULL;
        t = not_null(i_62);
        {
          t = z_54(t);
          {
            k_62 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_62));
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
  ATerm u_62 = NULL;
  ATerm d_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      ATerm v_62 = NULL;
      v_62 = t;
      if(((u_62 != NULL) && (u_62 != v_62)))
        _fail(v_62);
      else
        u_62 = v_62;
      return(t);
    }
    t = Program_1(t, e_5);
    return(t);
  }
  t = option_defined_1(t, d_5);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm w_62 = NULL;
      ATerm x_62 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm g_5 (ATerm t)
        {
          t = not_null(u_62);
          return(t);
        }
        t = short_description_1(t, g_5);
        {
          t = concat_strings_0(t);
          {
            x_62 = t;
            if(((w_62 != NULL) && (w_62 != x_62)))
              _fail(x_62);
            else
              w_62 = x_62;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(w_62)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, f_5);
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
                ATerm j_5 (ATerm t)
                {
                  ATerm y_62 = NULL;
                  y_62 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_62)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_5);
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm a_63 = NULL;
                    ATerm b_63 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm q_5 (ATerm t)
                      {
                        t = not_null(u_62);
                        return(t);
                      }
                      t = long_description_1(t, q_5);
                      {
                        t = concat_strings_0(t);
                        {
                          b_63 = t;
                          if(((a_63 != NULL) && (a_63 != b_63)))
                            _fail(b_63);
                          else
                            a_63 = b_63;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_63)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_5);
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
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  i_63 :
  if(match_cons(j_63, sym__2))
    {
      k_63 = ATgetArgument(j_63, 0);
      l_63 = ATgetArgument(j_63, 1);
      {
        ATerm d_15;
        d_15 = t;
        t = SSL_printnl(not_null(k_63), not_null(l_63));
        t = d_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm s_63 = NULL,t_63 = NULL;
  s_63 = t;
  r_63 :
  if(match_cons(s_63, sym_Undefined_1))
    {
      t_63 = ATgetArgument(s_63, 0);
      {
        ATerm v_63 = NULL;
        t = not_null(t_63);
        {
          t = a_55(t);
          {
            v_63 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_63));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm c_64 (ATerm t)
  {
    ATerm e_15 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_79, _id);
        PopChoice();
      }
    else
      {
        t = e_15;
        t = Cons_2(t, _id, c_64);
      }
    return(t);
  }
  t = c_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_67 (ATerm))
{
  t = fetch_1(t, q_67);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_64 = NULL;
  e_64 = t;
  d_64 :
  if(!(match_cons(e_64, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm f_15 = t;
  if((PushChoice() == 0))
    {
      t = z_82(t);
      PopChoice();
    }
  else
    {
      t = f_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL;
  h_64 = t;
  g_64 :
  if(match_cons(h_64, sym__2))
    {
      i_64 = ATgetArgument(h_64, 0);
      j_64 = ATgetArgument(h_64, 1);
      t = SSL_table_get(not_null(i_64), not_null(j_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
  q_64 = t;
  p_64 :
  if(match_cons(q_64, sym__3))
    {
      r_64 = ATgetArgument(q_64, 0);
      s_64 = ATgetArgument(q_64, 1);
      t_64 = ATgetArgument(q_64, 2);
      {
        ATerm g_15;
        g_15 = t;
        {
          ATerm z_64 = NULL;
          ATerm a_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_64), not_null(s_64));
          {
            ATerm h_15 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = h_15;
                t = (ATerm) ATempty;
              }
            {
              a_65 = t;
              if(((z_64 != NULL) && (z_64 != a_65)))
                _fail(a_65);
              else
                z_64 = a_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_64), not_null(s_64), (ATerm) ATinsert(CheckATermList(not_null(z_64)), not_null(t_64)));
            t = table_put_0(t);
          }
        }
        t = g_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm g_65 = NULL;
  ATerm h_65 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = w_66(t);
    {
      h_65 = t;
      if(((g_65 != NULL) && (g_65 != h_65)))
        _fail(h_65);
      else
        g_65 = h_65;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(g_65));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
  n_65 = t;
  m_65 :
  if(match_string(n_65, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(n_65) == AT_LIST) && ((ATermList) n_65 != ATempty)))
        {
          o_65 = ATgetFirst((ATermList) n_65);
          p_65 = (ATerm) ATgetNext((ATermList) n_65);
          {
            ATerm s_65 = NULL;
            ATerm i_15;
            i_15 = t;
            {
              t = not_null(o_65);
              t = d_0(t);
            }
            t = i_15;
            {
              ATerm t_65 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  t_65 = t;
                  if(((s_65 != NULL) && (s_65 != t_65)))
                    _fail(t_65);
                  else
                    s_65 = t_65;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_65)), not_null(s_65));
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
  ATerm r_5 (ATerm t)
  {
    ATerm y_65 = NULL;
    y_65 = t;
    x_65 :
    if(!(match_string(y_65, "--help")))
      {
        if(!(match_string(y_65, "-h")))
          {
            if(!(match_string(y_65, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, r_5, s_5, t_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  a_66 :
  if(((ATgetType(b_66) == AT_LIST) && ((ATermList) b_66 != ATempty)))
    {
      c_66 = ATgetFirst((ATermList) b_66);
      d_66 = (ATerm) ATgetNext((ATermList) b_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_66)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm))
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  l_66 = t;
  k_66 :
  if(((ATgetType(l_66) == AT_LIST) && ((ATermList) l_66 != ATempty)))
    {
      m_66 = ATgetFirst((ATermList) l_66);
      n_66 = (ATerm) ATgetNext((ATermList) l_66);
      {
        ATerm q_66 = NULL;
        t = not_null(m_66);
        {
          ATerm y_66 = NULL;
          t = b_65(t);
          {
            q_66 = t;
            {
              t = not_null(n_66);
              {
                t = c_65(t);
                {
                  y_66 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_66)), not_null(q_66));
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
ATerm Nil_0 (ATerm t)
{
  ATerm e_67 = NULL;
  e_67 = t;
  d_67 :
  if(((ATermList) e_67 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm j_15;
  j_15 = t;
  {
    ATerm x_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = u_66(t);
      return(t);
    }
    t = try_1(t, x_5);
  }
  t = j_15;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm g_67 = NULL;
      g_67 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_67));
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      ATerm k_15 = t;
      if((PushChoice() == 0))
        {
          ATerm l_15 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = l_15;
              {
                t = u_66(t);
                t = Cons_2(t, _id, z_5);
              }
            }
          PopChoice();
        }
      else
        {
          t = k_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_5, z_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
  ATerm m_15;
  m_15 = t;
  {
    ATerm p_67 = NULL,r_67 = NULL,t_67 = NULL,u_67 = NULL;
    p_67 = t;
    l_67 :
    if(match_cons(p_67, sym__3))
      {
        r_67 = ATgetArgument(p_67, 0);
        t_67 = ATgetArgument(p_67, 1);
        u_67 = ATgetArgument(p_67, 2);
        {
          if(((m_67 != NULL) && (m_67 != r_67)))
            _fail(r_67);
          else
            m_67 = r_67;
          {
            if(((n_67 != NULL) && (n_67 != t_67)))
              _fail(t_67);
            else
              n_67 = t_67;
            {
              if(((o_67 != NULL) && (o_67 != u_67)))
                _fail(u_67);
              else
                o_67 = u_67;
              t = SSL_table_put(not_null(m_67), not_null(n_67), not_null(o_67));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = m_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_66 (ATerm))
{
  ATerm z_67 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = n_15;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm o_15 = t;
      if((PushChoice() == 0))
        {
          t = t_66(t);
          PopChoice();
        }
      else
        {
          t = o_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_6);
    {
      ATerm b_6 (ATerm t)
      {
        ATerm r_15 = t;
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
            t = r_15;
            {
              ATerm g_6 (ATerm t)
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm d_68 = NULL;
                  d_68 = t;
                  if(((z_67 != NULL) && (z_67 != d_68)))
                    _fail(d_68);
                  else
                    z_67 = d_68;
                  return(t);
                }
                t = Undefined_1(t, h_6);
                return(t);
              }
              t = option_defined_1(t, g_6);
              {
                ATerm s_15;
                s_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_67)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = s_15;
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
      t = try_1(t, b_6);
      {
        ATerm t_15;
        t_15 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = t_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm c_68 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm u_15 = t;
    if((PushChoice() == 0))
      {
        t = b_68(t);
        PopChoice();
      }
    else
      {
        t = u_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, n_6);
  {
    t = store_options_0(t);
    {
      ATerm v_15 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, c_68);
          PopChoice();
        }
      else
        {
          t = v_15;
          {
            ATerm w_15 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, a_68);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = w_15;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  t = iowrap_3(t, v_67, w_67, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    t = _2(t, _id, s_67);
    return(t);
  }
  t = iowrap_2(t, o_6, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      t = simplify_widen_0(t);
      {
        t = simplify_0(t);
        t = simplify_clean_0(t);
      }
      return(t);
    }
    t = apply_to_bodies_1(t, q_6);
    return(t);
  }
  t = iowrap_1(t, p_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
