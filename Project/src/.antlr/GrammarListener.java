// Generated from /home/swiftfeetstallion/compilers/Project/src/Grammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link GrammarParser}.
 */
public interface GrammarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by the {@code start}
	 * labeled alternative in {@link GrammarParser#program}.
	 * @param ctx the parse tree
	 */
	void enterStart(GrammarParser.StartContext ctx);
	/**
	 * Exit a parse tree produced by the {@code start}
	 * labeled alternative in {@link GrammarParser#program}.
	 * @param ctx the parse tree
	 */
	void exitStart(GrammarParser.StartContext ctx);
	/**
	 * Enter a parse tree produced by the {@code if_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void enterIf_stmt(GrammarParser.If_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code if_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void exitIf_stmt(GrammarParser.If_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code while_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void enterWhile_stmt(GrammarParser.While_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code while_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void exitWhile_stmt(GrammarParser.While_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code scope_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void enterScope_stmt(GrammarParser.Scope_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code scope_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void exitScope_stmt(GrammarParser.Scope_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code assign_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void enterAssign_stmt(GrammarParser.Assign_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code assign_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void exitAssign_stmt(GrammarParser.Assign_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code var_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void enterVar_stmt(GrammarParser.Var_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code var_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void exitVar_stmt(GrammarParser.Var_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ariphm_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void enterAriphm_stmt(GrammarParser.Ariphm_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ariphm_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void exitAriphm_stmt(GrammarParser.Ariphm_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code print_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void enterPrint_stmt(GrammarParser.Print_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code print_stmt}
	 * labeled alternative in {@link GrammarParser#sentence}.
	 * @param ctx the parse tree
	 */
	void exitPrint_stmt(GrammarParser.Print_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code var_decl_stmt}
	 * labeled alternative in {@link GrammarParser#var_declaration_stmt}.
	 * @param ctx the parse tree
	 */
	void enterVar_decl_stmt(GrammarParser.Var_decl_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code var_decl_stmt}
	 * labeled alternative in {@link GrammarParser#var_declaration_stmt}.
	 * @param ctx the parse tree
	 */
	void exitVar_decl_stmt(GrammarParser.Var_decl_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code var_def_stmt}
	 * labeled alternative in {@link GrammarParser#var_declaration_stmt}.
	 * @param ctx the parse tree
	 */
	void enterVar_def_stmt(GrammarParser.Var_def_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code var_def_stmt}
	 * labeled alternative in {@link GrammarParser#var_declaration_stmt}.
	 * @param ctx the parse tree
	 */
	void exitVar_def_stmt(GrammarParser.Var_def_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code par_bool_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void enterPar_bool_stmt(GrammarParser.Par_bool_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code par_bool_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void exitPar_bool_stmt(GrammarParser.Par_bool_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code one_bool_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void enterOne_bool_stmt(GrammarParser.One_bool_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code one_bool_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void exitOne_bool_stmt(GrammarParser.One_bool_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code not_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void enterNot_stmt(GrammarParser.Not_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code not_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void exitNot_stmt(GrammarParser.Not_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code and_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void enterAnd_stmt(GrammarParser.And_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code and_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void exitAnd_stmt(GrammarParser.And_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code or_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void enterOr_stmt(GrammarParser.Or_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code or_stmt}
	 * labeled alternative in {@link GrammarParser#bool_expr}.
	 * @param ctx the parse tree
	 */
	void exitOr_stmt(GrammarParser.Or_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code number}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void enterNumber(GrammarParser.NumberContext ctx);
	/**
	 * Exit a parse tree produced by the {@code number}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void exitNumber(GrammarParser.NumberContext ctx);
	/**
	 * Enter a parse tree produced by the {@code add_sub_stmt}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void enterAdd_sub_stmt(GrammarParser.Add_sub_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code add_sub_stmt}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void exitAdd_sub_stmt(GrammarParser.Add_sub_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code variable}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void enterVariable(GrammarParser.VariableContext ctx);
	/**
	 * Exit a parse tree produced by the {@code variable}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void exitVariable(GrammarParser.VariableContext ctx);
	/**
	 * Enter a parse tree produced by the {@code mul_div_stmt}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void enterMul_div_stmt(GrammarParser.Mul_div_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code mul_div_stmt}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void exitMul_div_stmt(GrammarParser.Mul_div_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code par_stmt}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void enterPar_stmt(GrammarParser.Par_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code par_stmt}
	 * labeled alternative in {@link GrammarParser#ariphm_expr}.
	 * @param ctx the parse tree
	 */
	void exitPar_stmt(GrammarParser.Par_stmtContext ctx);
}