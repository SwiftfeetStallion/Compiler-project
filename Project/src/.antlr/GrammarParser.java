// Generated from /home/swiftfeetstallion/compilers/Project/src/Grammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class GrammarParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, TYPE=8, EVALOP=9, 
		VOID=10, PRINT=11, IF=12, WHILE=13, ELSE=14, ELIF=15, ADD=16, SUB=17, 
		MUL=18, DIV=19, AND=20, OR=21, NOT=22, ASSIGN=23, EQUAL=24, NO_EQUAL=25, 
		LESS=26, LESSEQ=27, GREATER=28, GREATEREQ=29, SEMICOLON=30, ID=31, NUM=32, 
		LINECOMMENT=33, WS=34;
	public static final int
		RULE_program = 0, RULE_main = 1, RULE_sentence = 2, RULE_func_declaration_stmt = 3, 
		RULE_func_definition_stmt = 4, RULE_function_call_stmt = 5, RULE_var_declaration_stmt = 6, 
		RULE_global_var_stmt = 7, RULE_bool_expr = 8, RULE_ariphm_expr = 9;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "main", "sentence", "func_declaration_stmt", "func_definition_stmt", 
			"function_call_stmt", "var_declaration_stmt", "global_var_stmt", "bool_expr", 
			"ariphm_expr"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'int main()'", "'{'", "'}'", "'('", "')'", "','", "'return'", 
			"'int'", null, "'void'", "'print'", "'if'", "'while'", "'else'", "'else if'", 
			"'+'", "'-'", "'*'", "'/'", "'&&'", "'||'", "'!'", "'='", "'=='", "'!='", 
			"'<'", "'<='", "'>'", "'>='", "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, "TYPE", "EVALOP", "VOID", 
			"PRINT", "IF", "WHILE", "ELSE", "ELIF", "ADD", "SUB", "MUL", "DIV", "AND", 
			"OR", "NOT", "ASSIGN", "EQUAL", "NO_EQUAL", "LESS", "LESSEQ", "GREATER", 
			"GREATEREQ", "SEMICOLON", "ID", "NUM", "LINECOMMENT", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Grammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public GrammarParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	 
		public ProgramContext() { }
		public void copyFrom(ProgramContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StartContext extends ProgramContext {
		public MainContext main() {
			return getRuleContext(MainContext.class,0);
		}
		public TerminalNode EOF() { return getToken(GrammarParser.EOF, 0); }
		public List<Global_var_stmtContext> global_var_stmt() {
			return getRuleContexts(Global_var_stmtContext.class);
		}
		public Global_var_stmtContext global_var_stmt(int i) {
			return getRuleContext(Global_var_stmtContext.class,i);
		}
		public List<Func_definition_stmtContext> func_definition_stmt() {
			return getRuleContexts(Func_definition_stmtContext.class);
		}
		public Func_definition_stmtContext func_definition_stmt(int i) {
			return getRuleContext(Func_definition_stmtContext.class,i);
		}
		public List<Func_declaration_stmtContext> func_declaration_stmt() {
			return getRuleContexts(Func_declaration_stmtContext.class);
		}
		public Func_declaration_stmtContext func_declaration_stmt(int i) {
			return getRuleContext(Func_declaration_stmtContext.class,i);
		}
		public StartContext(ProgramContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterStart(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitStart(this);
		}
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			_localctx = new StartContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(25);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TYPE || _la==VOID) {
				{
				setState(23);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
				case 1:
					{
					setState(20);
					global_var_stmt();
					}
					break;
				case 2:
					{
					setState(21);
					func_definition_stmt();
					}
					break;
				case 3:
					{
					setState(22);
					func_declaration_stmt();
					}
					break;
				}
				}
				setState(27);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(28);
			main();
			setState(35);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TYPE || _la==VOID) {
				{
				setState(33);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
				case 1:
					{
					setState(29);
					global_var_stmt();
					}
					break;
				case 2:
					{
					setState(30);
					func_definition_stmt();
					}
					break;
				case 3:
					{
					setState(31);
					func_declaration_stmt();
					}
					break;
				case 4:
					{
					setState(32);
					global_var_stmt();
					}
					break;
				}
				}
				setState(37);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(38);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MainContext extends ParserRuleContext {
		public MainContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_main; }
	 
		public MainContext() { }
		public void copyFrom(MainContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Main_bodyContext extends MainContext {
		public List<SentenceContext> sentence() {
			return getRuleContexts(SentenceContext.class);
		}
		public SentenceContext sentence(int i) {
			return getRuleContext(SentenceContext.class,i);
		}
		public Main_bodyContext(MainContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterMain_body(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitMain_body(this);
		}
	}

	public final MainContext main() throws RecognitionException {
		MainContext _localctx = new MainContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_main);
		int _la;
		try {
			_localctx = new Main_bodyContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(40);
			match(T__0);
			setState(41);
			match(T__1);
			setState(45);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 6446659860L) != 0)) {
				{
				{
				setState(42);
				sentence();
				}
				}
				setState(47);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(48);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SentenceContext extends ParserRuleContext {
		public SentenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sentence; }
	 
		public SentenceContext() { }
		public void copyFrom(SentenceContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Var_stmtContext extends SentenceContext {
		public Var_declaration_stmtContext var_declaration_stmt() {
			return getRuleContext(Var_declaration_stmtContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Var_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterVar_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitVar_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Ariphm_stmtContext extends SentenceContext {
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Ariphm_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterAriphm_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitAriphm_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class While_stmtContext extends SentenceContext {
		public TerminalNode WHILE() { return getToken(GrammarParser.WHILE, 0); }
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
		}
		public List<SentenceContext> sentence() {
			return getRuleContexts(SentenceContext.class);
		}
		public SentenceContext sentence(int i) {
			return getRuleContext(SentenceContext.class,i);
		}
		public While_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterWhile_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitWhile_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class If_stmtContext extends SentenceContext {
		public TerminalNode IF() { return getToken(GrammarParser.IF, 0); }
		public List<Bool_exprContext> bool_expr() {
			return getRuleContexts(Bool_exprContext.class);
		}
		public Bool_exprContext bool_expr(int i) {
			return getRuleContext(Bool_exprContext.class,i);
		}
		public List<SentenceContext> sentence() {
			return getRuleContexts(SentenceContext.class);
		}
		public SentenceContext sentence(int i) {
			return getRuleContext(SentenceContext.class,i);
		}
		public List<TerminalNode> ELIF() { return getTokens(GrammarParser.ELIF); }
		public TerminalNode ELIF(int i) {
			return getToken(GrammarParser.ELIF, i);
		}
		public TerminalNode ELSE() { return getToken(GrammarParser.ELSE, 0); }
		public If_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterIf_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitIf_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Scope_stmtContext extends SentenceContext {
		public List<SentenceContext> sentence() {
			return getRuleContexts(SentenceContext.class);
		}
		public SentenceContext sentence(int i) {
			return getRuleContext(SentenceContext.class,i);
		}
		public Scope_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterScope_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitScope_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Bool_stmtContext extends SentenceContext {
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Bool_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterBool_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitBool_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Print_stmtContext extends SentenceContext {
		public TerminalNode PRINT() { return getToken(GrammarParser.PRINT, 0); }
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
		}
		public Function_call_stmtContext function_call_stmt() {
			return getRuleContext(Function_call_stmtContext.class,0);
		}
		public Print_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterPrint_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitPrint_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Assign_stmtContext extends SentenceContext {
		public TerminalNode ID() { return getToken(GrammarParser.ID, 0); }
		public TerminalNode ASSIGN() { return getToken(GrammarParser.ASSIGN, 0); }
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
		}
		public Function_call_stmtContext function_call_stmt() {
			return getRuleContext(Function_call_stmtContext.class,0);
		}
		public Assign_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterAssign_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitAssign_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Call_stmtContext extends SentenceContext {
		public Function_call_stmtContext function_call_stmt() {
			return getRuleContext(Function_call_stmtContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Call_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterCall_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitCall_stmt(this);
		}
	}

	public final SentenceContext sentence() throws RecognitionException {
		SentenceContext _localctx = new SentenceContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_sentence);
		int _la;
		try {
			setState(143);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				_localctx = new If_stmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(50);
				match(IF);
				setState(51);
				match(T__3);
				setState(52);
				bool_expr(0);
				setState(53);
				match(T__4);
				setState(54);
				match(T__1);
				setState(58);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 6446659860L) != 0)) {
					{
					{
					setState(55);
					sentence();
					}
					}
					setState(60);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(61);
				match(T__2);
				setState(77);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==ELIF) {
					{
					{
					setState(62);
					match(ELIF);
					setState(63);
					match(T__3);
					setState(64);
					bool_expr(0);
					setState(65);
					match(T__4);
					setState(66);
					match(T__1);
					setState(70);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 6446659860L) != 0)) {
						{
						{
						setState(67);
						sentence();
						}
						}
						setState(72);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(73);
					match(T__2);
					}
					}
					setState(79);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(89);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(80);
					match(ELSE);
					setState(81);
					match(T__1);
					setState(85);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 6446659860L) != 0)) {
						{
						{
						setState(82);
						sentence();
						}
						}
						setState(87);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(88);
					match(T__2);
					}
				}

				}
				break;
			case 2:
				_localctx = new While_stmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(91);
				match(WHILE);
				setState(92);
				match(T__3);
				setState(93);
				bool_expr(0);
				setState(94);
				match(T__4);
				setState(95);
				match(T__1);
				setState(99);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 6446659860L) != 0)) {
					{
					{
					setState(96);
					sentence();
					}
					}
					setState(101);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(102);
				match(T__2);
				}
				break;
			case 3:
				_localctx = new Scope_stmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(104);
				match(T__1);
				setState(108);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 6446659860L) != 0)) {
					{
					{
					setState(105);
					sentence();
					}
					}
					setState(110);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(111);
				match(T__2);
				}
				break;
			case 4:
				_localctx = new Assign_stmtContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(112);
				match(ID);
				setState(113);
				match(ASSIGN);
				setState(117);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
				case 1:
					{
					setState(114);
					ariphm_expr(0);
					}
					break;
				case 2:
					{
					setState(115);
					bool_expr(0);
					}
					break;
				case 3:
					{
					setState(116);
					function_call_stmt();
					}
					break;
				}
				setState(119);
				match(SEMICOLON);
				}
				break;
			case 5:
				_localctx = new Var_stmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(121);
				var_declaration_stmt();
				setState(122);
				match(SEMICOLON);
				}
				break;
			case 6:
				_localctx = new Ariphm_stmtContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(124);
				ariphm_expr(0);
				setState(125);
				match(SEMICOLON);
				}
				break;
			case 7:
				_localctx = new Bool_stmtContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(127);
				bool_expr(0);
				setState(128);
				match(SEMICOLON);
				}
				break;
			case 8:
				_localctx = new Print_stmtContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(130);
				match(PRINT);
				setState(131);
				match(T__3);
				setState(135);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
				case 1:
					{
					setState(132);
					ariphm_expr(0);
					}
					break;
				case 2:
					{
					setState(133);
					bool_expr(0);
					}
					break;
				case 3:
					{
					setState(134);
					function_call_stmt();
					}
					break;
				}
				setState(137);
				match(T__4);
				setState(138);
				match(SEMICOLON);
				}
				break;
			case 9:
				_localctx = new Call_stmtContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(140);
				function_call_stmt();
				setState(141);
				match(SEMICOLON);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Func_declaration_stmtContext extends ParserRuleContext {
		public Func_declaration_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_declaration_stmt; }
	 
		public Func_declaration_stmtContext() { }
		public void copyFrom(Func_declaration_stmtContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Proc_decl_stmtContext extends Func_declaration_stmtContext {
		public TerminalNode VOID() { return getToken(GrammarParser.VOID, 0); }
		public List<TerminalNode> ID() { return getTokens(GrammarParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(GrammarParser.ID, i);
		}
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public List<TerminalNode> TYPE() { return getTokens(GrammarParser.TYPE); }
		public TerminalNode TYPE(int i) {
			return getToken(GrammarParser.TYPE, i);
		}
		public Proc_decl_stmtContext(Func_declaration_stmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterProc_decl_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitProc_decl_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Func_decl_stmtContext extends Func_declaration_stmtContext {
		public List<TerminalNode> TYPE() { return getTokens(GrammarParser.TYPE); }
		public TerminalNode TYPE(int i) {
			return getToken(GrammarParser.TYPE, i);
		}
		public List<TerminalNode> ID() { return getTokens(GrammarParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(GrammarParser.ID, i);
		}
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Func_decl_stmtContext(Func_declaration_stmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterFunc_decl_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitFunc_decl_stmt(this);
		}
	}

	public final Func_declaration_stmtContext func_declaration_stmt() throws RecognitionException {
		Func_declaration_stmtContext _localctx = new Func_declaration_stmtContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_func_declaration_stmt);
		int _la;
		try {
			int _alt;
			setState(179);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VOID:
				_localctx = new Proc_decl_stmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(145);
				match(VOID);
				setState(146);
				match(ID);
				setState(147);
				match(T__3);
				setState(158);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TYPE) {
					{
					setState(153);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
					while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
						if ( _alt==1 ) {
							{
							{
							setState(148);
							match(TYPE);
							setState(149);
							match(ID);
							setState(150);
							match(T__5);
							}
							} 
						}
						setState(155);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
					}
					setState(156);
					match(TYPE);
					setState(157);
					match(ID);
					}
				}

				setState(160);
				match(T__4);
				setState(161);
				match(SEMICOLON);
				}
				break;
			case TYPE:
				_localctx = new Func_decl_stmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(162);
				match(TYPE);
				setState(163);
				match(ID);
				setState(164);
				match(T__3);
				setState(175);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TYPE) {
					{
					setState(170);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
					while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
						if ( _alt==1 ) {
							{
							{
							setState(165);
							match(TYPE);
							setState(166);
							match(ID);
							setState(167);
							match(T__5);
							}
							} 
						}
						setState(172);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
					}
					setState(173);
					match(TYPE);
					setState(174);
					match(ID);
					}
				}

				setState(177);
				match(T__4);
				setState(178);
				match(SEMICOLON);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Func_definition_stmtContext extends ParserRuleContext {
		public Func_definition_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_definition_stmt; }
	 
		public Func_definition_stmtContext() { }
		public void copyFrom(Func_definition_stmtContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Func_def_stmtContext extends Func_definition_stmtContext {
		public List<TerminalNode> TYPE() { return getTokens(GrammarParser.TYPE); }
		public TerminalNode TYPE(int i) {
			return getToken(GrammarParser.TYPE, i);
		}
		public List<TerminalNode> ID() { return getTokens(GrammarParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(GrammarParser.ID, i);
		}
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
		}
		public Function_call_stmtContext function_call_stmt() {
			return getRuleContext(Function_call_stmtContext.class,0);
		}
		public List<SentenceContext> sentence() {
			return getRuleContexts(SentenceContext.class);
		}
		public SentenceContext sentence(int i) {
			return getRuleContext(SentenceContext.class,i);
		}
		public Func_def_stmtContext(Func_definition_stmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterFunc_def_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitFunc_def_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Proc_def_stmtContext extends Func_definition_stmtContext {
		public TerminalNode VOID() { return getToken(GrammarParser.VOID, 0); }
		public List<TerminalNode> ID() { return getTokens(GrammarParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(GrammarParser.ID, i);
		}
		public List<TerminalNode> TYPE() { return getTokens(GrammarParser.TYPE); }
		public TerminalNode TYPE(int i) {
			return getToken(GrammarParser.TYPE, i);
		}
		public List<SentenceContext> sentence() {
			return getRuleContexts(SentenceContext.class);
		}
		public SentenceContext sentence(int i) {
			return getRuleContext(SentenceContext.class,i);
		}
		public Proc_def_stmtContext(Func_definition_stmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterProc_def_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitProc_def_stmt(this);
		}
	}

	public final Func_definition_stmtContext func_definition_stmt() throws RecognitionException {
		Func_definition_stmtContext _localctx = new Func_definition_stmtContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_func_definition_stmt);
		int _la;
		try {
			int _alt;
			setState(237);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VOID:
				_localctx = new Proc_def_stmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(181);
				match(VOID);
				setState(182);
				match(ID);
				setState(183);
				match(T__3);
				setState(194);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TYPE) {
					{
					setState(189);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
					while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
						if ( _alt==1 ) {
							{
							{
							setState(184);
							match(TYPE);
							setState(185);
							match(ID);
							setState(186);
							match(T__5);
							}
							} 
						}
						setState(191);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
					}
					setState(192);
					match(TYPE);
					setState(193);
					match(ID);
					}
				}

				setState(196);
				match(T__4);
				setState(197);
				match(T__1);
				setState(201);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 6446659860L) != 0)) {
					{
					{
					setState(198);
					sentence();
					}
					}
					setState(203);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(204);
				match(T__2);
				}
				break;
			case TYPE:
				_localctx = new Func_def_stmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(205);
				match(TYPE);
				setState(206);
				match(ID);
				setState(207);
				match(T__3);
				setState(218);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TYPE) {
					{
					setState(213);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
					while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
						if ( _alt==1 ) {
							{
							{
							setState(208);
							match(TYPE);
							setState(209);
							match(ID);
							setState(210);
							match(T__5);
							}
							} 
						}
						setState(215);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
					}
					setState(216);
					match(TYPE);
					setState(217);
					match(ID);
					}
				}

				setState(220);
				match(T__4);
				setState(221);
				match(T__1);
				setState(225);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 6446659860L) != 0)) {
					{
					{
					setState(222);
					sentence();
					}
					}
					setState(227);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(228);
				match(T__6);
				setState(232);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
				case 1:
					{
					setState(229);
					ariphm_expr(0);
					}
					break;
				case 2:
					{
					setState(230);
					bool_expr(0);
					}
					break;
				case 3:
					{
					setState(231);
					function_call_stmt();
					}
					break;
				}
				setState(234);
				match(SEMICOLON);
				setState(235);
				match(T__2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Function_call_stmtContext extends ParserRuleContext {
		public Function_call_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call_stmt; }
	 
		public Function_call_stmtContext() { }
		public void copyFrom(Function_call_stmtContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Func_call_stmtContext extends Function_call_stmtContext {
		public TerminalNode ID() { return getToken(GrammarParser.ID, 0); }
		public List<Ariphm_exprContext> ariphm_expr() {
			return getRuleContexts(Ariphm_exprContext.class);
		}
		public Ariphm_exprContext ariphm_expr(int i) {
			return getRuleContext(Ariphm_exprContext.class,i);
		}
		public Func_call_stmtContext(Function_call_stmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterFunc_call_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitFunc_call_stmt(this);
		}
	}

	public final Function_call_stmtContext function_call_stmt() throws RecognitionException {
		Function_call_stmtContext _localctx = new Function_call_stmtContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_function_call_stmt);
		int _la;
		try {
			int _alt;
			_localctx = new Func_call_stmtContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(239);
			match(ID);
			setState(240);
			match(T__3);
			setState(250);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 6442450960L) != 0)) {
				{
				setState(246);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(241);
						ariphm_expr(0);
						setState(242);
						match(T__5);
						}
						} 
					}
					setState(248);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
				}
				setState(249);
				ariphm_expr(0);
				}
			}

			setState(252);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Var_declaration_stmtContext extends ParserRuleContext {
		public Var_declaration_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_declaration_stmt; }
	 
		public Var_declaration_stmtContext() { }
		public void copyFrom(Var_declaration_stmtContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Var_decl_stmtContext extends Var_declaration_stmtContext {
		public TerminalNode TYPE() { return getToken(GrammarParser.TYPE, 0); }
		public TerminalNode ID() { return getToken(GrammarParser.ID, 0); }
		public Var_decl_stmtContext(Var_declaration_stmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterVar_decl_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitVar_decl_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Var_def_stmtContext extends Var_declaration_stmtContext {
		public TerminalNode TYPE() { return getToken(GrammarParser.TYPE, 0); }
		public TerminalNode ID() { return getToken(GrammarParser.ID, 0); }
		public TerminalNode ASSIGN() { return getToken(GrammarParser.ASSIGN, 0); }
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
		}
		public Function_call_stmtContext function_call_stmt() {
			return getRuleContext(Function_call_stmtContext.class,0);
		}
		public Var_def_stmtContext(Var_declaration_stmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterVar_def_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitVar_def_stmt(this);
		}
	}

	public final Var_declaration_stmtContext var_declaration_stmt() throws RecognitionException {
		Var_declaration_stmtContext _localctx = new Var_declaration_stmtContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_var_declaration_stmt);
		try {
			setState(264);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				_localctx = new Var_decl_stmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(254);
				match(TYPE);
				setState(255);
				match(ID);
				}
				break;
			case 2:
				_localctx = new Var_def_stmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(256);
				match(TYPE);
				setState(257);
				match(ID);
				setState(258);
				match(ASSIGN);
				setState(262);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
				case 1:
					{
					setState(259);
					ariphm_expr(0);
					}
					break;
				case 2:
					{
					setState(260);
					bool_expr(0);
					}
					break;
				case 3:
					{
					setState(261);
					function_call_stmt();
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Global_var_stmtContext extends ParserRuleContext {
		public Global_var_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_global_var_stmt; }
	 
		public Global_var_stmtContext() { }
		public void copyFrom(Global_var_stmtContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Global_def_stmtContext extends Global_var_stmtContext {
		public TerminalNode TYPE() { return getToken(GrammarParser.TYPE, 0); }
		public TerminalNode ID() { return getToken(GrammarParser.ID, 0); }
		public TerminalNode ASSIGN() { return getToken(GrammarParser.ASSIGN, 0); }
		public TerminalNode NUM() { return getToken(GrammarParser.NUM, 0); }
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Global_def_stmtContext(Global_var_stmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterGlobal_def_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitGlobal_def_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Global_decl_stmtContext extends Global_var_stmtContext {
		public TerminalNode TYPE() { return getToken(GrammarParser.TYPE, 0); }
		public TerminalNode ID() { return getToken(GrammarParser.ID, 0); }
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Global_decl_stmtContext(Global_var_stmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterGlobal_decl_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitGlobal_decl_stmt(this);
		}
	}

	public final Global_var_stmtContext global_var_stmt() throws RecognitionException {
		Global_var_stmtContext _localctx = new Global_var_stmtContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_global_var_stmt);
		try {
			setState(274);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				_localctx = new Global_decl_stmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(266);
				match(TYPE);
				setState(267);
				match(ID);
				setState(268);
				match(SEMICOLON);
				}
				break;
			case 2:
				_localctx = new Global_def_stmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(269);
				match(TYPE);
				setState(270);
				match(ID);
				setState(271);
				match(ASSIGN);
				setState(272);
				match(NUM);
				setState(273);
				match(SEMICOLON);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Bool_exprContext extends ParserRuleContext {
		public Bool_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bool_expr; }
	 
		public Bool_exprContext() { }
		public void copyFrom(Bool_exprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Par_bool_stmtContext extends Bool_exprContext {
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
		}
		public Par_bool_stmtContext(Bool_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterPar_bool_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitPar_bool_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class One_bool_stmtContext extends Bool_exprContext {
		public List<Ariphm_exprContext> ariphm_expr() {
			return getRuleContexts(Ariphm_exprContext.class);
		}
		public Ariphm_exprContext ariphm_expr(int i) {
			return getRuleContext(Ariphm_exprContext.class,i);
		}
		public TerminalNode EVALOP() { return getToken(GrammarParser.EVALOP, 0); }
		public One_bool_stmtContext(Bool_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterOne_bool_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitOne_bool_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Not_stmtContext extends Bool_exprContext {
		public TerminalNode NOT() { return getToken(GrammarParser.NOT, 0); }
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
		}
		public Not_stmtContext(Bool_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterNot_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitNot_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class And_stmtContext extends Bool_exprContext {
		public List<Bool_exprContext> bool_expr() {
			return getRuleContexts(Bool_exprContext.class);
		}
		public Bool_exprContext bool_expr(int i) {
			return getRuleContext(Bool_exprContext.class,i);
		}
		public TerminalNode AND() { return getToken(GrammarParser.AND, 0); }
		public And_stmtContext(Bool_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterAnd_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitAnd_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Or_stmtContext extends Bool_exprContext {
		public List<Bool_exprContext> bool_expr() {
			return getRuleContexts(Bool_exprContext.class);
		}
		public Bool_exprContext bool_expr(int i) {
			return getRuleContext(Bool_exprContext.class,i);
		}
		public TerminalNode OR() { return getToken(GrammarParser.OR, 0); }
		public Or_stmtContext(Bool_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterOr_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitOr_stmt(this);
		}
	}

	public final Bool_exprContext bool_expr() throws RecognitionException {
		return bool_expr(0);
	}

	private Bool_exprContext bool_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Bool_exprContext _localctx = new Bool_exprContext(_ctx, _parentState);
		Bool_exprContext _prevctx = _localctx;
		int _startState = 16;
		enterRecursionRule(_localctx, 16, RULE_bool_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(290);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
			case 1:
				{
				_localctx = new One_bool_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(277);
				ariphm_expr(0);
				setState(278);
				match(EVALOP);
				setState(279);
				ariphm_expr(0);
				}
				break;
			case 2:
				{
				_localctx = new Not_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(281);
				match(NOT);
				setState(282);
				match(T__3);
				setState(283);
				bool_expr(0);
				setState(284);
				match(T__4);
				}
				break;
			case 3:
				{
				_localctx = new Par_bool_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(286);
				match(T__3);
				setState(287);
				bool_expr(0);
				setState(288);
				match(T__4);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(300);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(298);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
					case 1:
						{
						_localctx = new And_stmtContext(new Bool_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_bool_expr);
						setState(292);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(293);
						match(AND);
						setState(294);
						bool_expr(4);
						}
						break;
					case 2:
						{
						_localctx = new Or_stmtContext(new Bool_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_bool_expr);
						setState(295);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(296);
						match(OR);
						setState(297);
						bool_expr(3);
						}
						break;
					}
					} 
				}
				setState(302);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Ariphm_exprContext extends ParserRuleContext {
		public Ariphm_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ariphm_expr; }
	 
		public Ariphm_exprContext() { }
		public void copyFrom(Ariphm_exprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class NumberContext extends Ariphm_exprContext {
		public TerminalNode NUM() { return getToken(GrammarParser.NUM, 0); }
		public NumberContext(Ariphm_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterNumber(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitNumber(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Add_sub_stmtContext extends Ariphm_exprContext {
		public Token op;
		public List<Ariphm_exprContext> ariphm_expr() {
			return getRuleContexts(Ariphm_exprContext.class);
		}
		public Ariphm_exprContext ariphm_expr(int i) {
			return getRuleContext(Ariphm_exprContext.class,i);
		}
		public TerminalNode ADD() { return getToken(GrammarParser.ADD, 0); }
		public TerminalNode SUB() { return getToken(GrammarParser.SUB, 0); }
		public Add_sub_stmtContext(Ariphm_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterAdd_sub_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitAdd_sub_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class VariableContext extends Ariphm_exprContext {
		public TerminalNode ID() { return getToken(GrammarParser.ID, 0); }
		public VariableContext(Ariphm_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterVariable(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitVariable(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Mul_div_stmtContext extends Ariphm_exprContext {
		public Token op;
		public List<Ariphm_exprContext> ariphm_expr() {
			return getRuleContexts(Ariphm_exprContext.class);
		}
		public Ariphm_exprContext ariphm_expr(int i) {
			return getRuleContext(Ariphm_exprContext.class,i);
		}
		public TerminalNode MUL() { return getToken(GrammarParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(GrammarParser.DIV, 0); }
		public Mul_div_stmtContext(Ariphm_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterMul_div_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitMul_div_stmt(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Par_stmtContext extends Ariphm_exprContext {
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public Par_stmtContext(Ariphm_exprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).enterPar_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof GrammarListener ) ((GrammarListener)listener).exitPar_stmt(this);
		}
	}

	public final Ariphm_exprContext ariphm_expr() throws RecognitionException {
		return ariphm_expr(0);
	}

	private Ariphm_exprContext ariphm_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Ariphm_exprContext _localctx = new Ariphm_exprContext(_ctx, _parentState);
		Ariphm_exprContext _prevctx = _localctx;
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_ariphm_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(310);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUM:
				{
				_localctx = new NumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(304);
				match(NUM);
				}
				break;
			case ID:
				{
				_localctx = new VariableContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(305);
				match(ID);
				}
				break;
			case T__3:
				{
				_localctx = new Par_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(306);
				match(T__3);
				setState(307);
				ariphm_expr(0);
				setState(308);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(320);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,38,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(318);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
					case 1:
						{
						_localctx = new Mul_div_stmtContext(new Ariphm_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_ariphm_expr);
						setState(312);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(313);
						((Mul_div_stmtContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==MUL || _la==DIV) ) {
							((Mul_div_stmtContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(314);
						ariphm_expr(6);
						}
						break;
					case 2:
						{
						_localctx = new Add_sub_stmtContext(new Ariphm_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_ariphm_expr);
						setState(315);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(316);
						((Add_sub_stmtContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==ADD || _la==SUB) ) {
							((Add_sub_stmtContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(317);
						ariphm_expr(5);
						}
						break;
					}
					} 
				}
				setState(322);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,38,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 8:
			return bool_expr_sempred((Bool_exprContext)_localctx, predIndex);
		case 9:
			return ariphm_expr_sempred((Ariphm_exprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean bool_expr_sempred(Bool_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 3);
		case 1:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean ariphm_expr_sempred(Ariphm_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 5);
		case 3:
			return precpred(_ctx, 4);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001\"\u0144\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0001\u0000\u0001\u0000\u0001\u0000\u0005\u0000"+
		"\u0018\b\u0000\n\u0000\f\u0000\u001b\t\u0000\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0005\u0000\"\b\u0000\n\u0000\f\u0000%"+
		"\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0005"+
		"\u0001,\b\u0001\n\u0001\f\u0001/\t\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0005"+
		"\u00029\b\u0002\n\u0002\f\u0002<\t\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0005\u0002E\b"+
		"\u0002\n\u0002\f\u0002H\t\u0002\u0001\u0002\u0001\u0002\u0005\u0002L\b"+
		"\u0002\n\u0002\f\u0002O\t\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0005"+
		"\u0002T\b\u0002\n\u0002\f\u0002W\t\u0002\u0001\u0002\u0003\u0002Z\b\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0005\u0002b\b\u0002\n\u0002\f\u0002e\t\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0005\u0002k\b\u0002\n\u0002\f\u0002n\t\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0003\u0002v\b\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0003\u0002\u0088\b\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0003\u0002\u0090\b\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0005\u0003\u0098\b\u0003"+
		"\n\u0003\f\u0003\u009b\t\u0003\u0001\u0003\u0001\u0003\u0003\u0003\u009f"+
		"\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0005\u0003\u00a9\b\u0003\n\u0003\f\u0003"+
		"\u00ac\t\u0003\u0001\u0003\u0001\u0003\u0003\u0003\u00b0\b\u0003\u0001"+
		"\u0003\u0001\u0003\u0003\u0003\u00b4\b\u0003\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0005\u0004\u00bc\b\u0004\n"+
		"\u0004\f\u0004\u00bf\t\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u00c3"+
		"\b\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0005\u0004\u00c8\b\u0004"+
		"\n\u0004\f\u0004\u00cb\t\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0005\u0004\u00d4\b\u0004\n"+
		"\u0004\f\u0004\u00d7\t\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u00db"+
		"\b\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0005\u0004\u00e0\b\u0004"+
		"\n\u0004\f\u0004\u00e3\t\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0003\u0004\u00e9\b\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003"+
		"\u0004\u00ee\b\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0005\u0005\u00f5\b\u0005\n\u0005\f\u0005\u00f8\t\u0005\u0001\u0005"+
		"\u0003\u0005\u00fb\b\u0005\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0003\u0006\u0107\b\u0006\u0003\u0006\u0109\b\u0006\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0003\u0007\u0113\b\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0003\b\u0123\b\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0005"+
		"\b\u012b\b\b\n\b\f\b\u012e\t\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t"+
		"\u0001\t\u0001\t\u0003\t\u0137\b\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0005\t\u013f\b\t\n\t\f\t\u0142\t\t\u0001\t\u0000\u0002\u0010"+
		"\u0012\n\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0000\u0002\u0001"+
		"\u0000\u0012\u0013\u0001\u0000\u0010\u0011\u0170\u0000\u0019\u0001\u0000"+
		"\u0000\u0000\u0002(\u0001\u0000\u0000\u0000\u0004\u008f\u0001\u0000\u0000"+
		"\u0000\u0006\u00b3\u0001\u0000\u0000\u0000\b\u00ed\u0001\u0000\u0000\u0000"+
		"\n\u00ef\u0001\u0000\u0000\u0000\f\u0108\u0001\u0000\u0000\u0000\u000e"+
		"\u0112\u0001\u0000\u0000\u0000\u0010\u0122\u0001\u0000\u0000\u0000\u0012"+
		"\u0136\u0001\u0000\u0000\u0000\u0014\u0018\u0003\u000e\u0007\u0000\u0015"+
		"\u0018\u0003\b\u0004\u0000\u0016\u0018\u0003\u0006\u0003\u0000\u0017\u0014"+
		"\u0001\u0000\u0000\u0000\u0017\u0015\u0001\u0000\u0000\u0000\u0017\u0016"+
		"\u0001\u0000\u0000\u0000\u0018\u001b\u0001\u0000\u0000\u0000\u0019\u0017"+
		"\u0001\u0000\u0000\u0000\u0019\u001a\u0001\u0000\u0000\u0000\u001a\u001c"+
		"\u0001\u0000\u0000\u0000\u001b\u0019\u0001\u0000\u0000\u0000\u001c#\u0003"+
		"\u0002\u0001\u0000\u001d\"\u0003\u000e\u0007\u0000\u001e\"\u0003\b\u0004"+
		"\u0000\u001f\"\u0003\u0006\u0003\u0000 \"\u0003\u000e\u0007\u0000!\u001d"+
		"\u0001\u0000\u0000\u0000!\u001e\u0001\u0000\u0000\u0000!\u001f\u0001\u0000"+
		"\u0000\u0000! \u0001\u0000\u0000\u0000\"%\u0001\u0000\u0000\u0000#!\u0001"+
		"\u0000\u0000\u0000#$\u0001\u0000\u0000\u0000$&\u0001\u0000\u0000\u0000"+
		"%#\u0001\u0000\u0000\u0000&\'\u0005\u0000\u0000\u0001\'\u0001\u0001\u0000"+
		"\u0000\u0000()\u0005\u0001\u0000\u0000)-\u0005\u0002\u0000\u0000*,\u0003"+
		"\u0004\u0002\u0000+*\u0001\u0000\u0000\u0000,/\u0001\u0000\u0000\u0000"+
		"-+\u0001\u0000\u0000\u0000-.\u0001\u0000\u0000\u0000.0\u0001\u0000\u0000"+
		"\u0000/-\u0001\u0000\u0000\u000001\u0005\u0003\u0000\u00001\u0003\u0001"+
		"\u0000\u0000\u000023\u0005\f\u0000\u000034\u0005\u0004\u0000\u000045\u0003"+
		"\u0010\b\u000056\u0005\u0005\u0000\u00006:\u0005\u0002\u0000\u000079\u0003"+
		"\u0004\u0002\u000087\u0001\u0000\u0000\u00009<\u0001\u0000\u0000\u0000"+
		":8\u0001\u0000\u0000\u0000:;\u0001\u0000\u0000\u0000;=\u0001\u0000\u0000"+
		"\u0000<:\u0001\u0000\u0000\u0000=M\u0005\u0003\u0000\u0000>?\u0005\u000f"+
		"\u0000\u0000?@\u0005\u0004\u0000\u0000@A\u0003\u0010\b\u0000AB\u0005\u0005"+
		"\u0000\u0000BF\u0005\u0002\u0000\u0000CE\u0003\u0004\u0002\u0000DC\u0001"+
		"\u0000\u0000\u0000EH\u0001\u0000\u0000\u0000FD\u0001\u0000\u0000\u0000"+
		"FG\u0001\u0000\u0000\u0000GI\u0001\u0000\u0000\u0000HF\u0001\u0000\u0000"+
		"\u0000IJ\u0005\u0003\u0000\u0000JL\u0001\u0000\u0000\u0000K>\u0001\u0000"+
		"\u0000\u0000LO\u0001\u0000\u0000\u0000MK\u0001\u0000\u0000\u0000MN\u0001"+
		"\u0000\u0000\u0000NY\u0001\u0000\u0000\u0000OM\u0001\u0000\u0000\u0000"+
		"PQ\u0005\u000e\u0000\u0000QU\u0005\u0002\u0000\u0000RT\u0003\u0004\u0002"+
		"\u0000SR\u0001\u0000\u0000\u0000TW\u0001\u0000\u0000\u0000US\u0001\u0000"+
		"\u0000\u0000UV\u0001\u0000\u0000\u0000VX\u0001\u0000\u0000\u0000WU\u0001"+
		"\u0000\u0000\u0000XZ\u0005\u0003\u0000\u0000YP\u0001\u0000\u0000\u0000"+
		"YZ\u0001\u0000\u0000\u0000Z\u0090\u0001\u0000\u0000\u0000[\\\u0005\r\u0000"+
		"\u0000\\]\u0005\u0004\u0000\u0000]^\u0003\u0010\b\u0000^_\u0005\u0005"+
		"\u0000\u0000_c\u0005\u0002\u0000\u0000`b\u0003\u0004\u0002\u0000a`\u0001"+
		"\u0000\u0000\u0000be\u0001\u0000\u0000\u0000ca\u0001\u0000\u0000\u0000"+
		"cd\u0001\u0000\u0000\u0000df\u0001\u0000\u0000\u0000ec\u0001\u0000\u0000"+
		"\u0000fg\u0005\u0003\u0000\u0000g\u0090\u0001\u0000\u0000\u0000hl\u0005"+
		"\u0002\u0000\u0000ik\u0003\u0004\u0002\u0000ji\u0001\u0000\u0000\u0000"+
		"kn\u0001\u0000\u0000\u0000lj\u0001\u0000\u0000\u0000lm\u0001\u0000\u0000"+
		"\u0000mo\u0001\u0000\u0000\u0000nl\u0001\u0000\u0000\u0000o\u0090\u0005"+
		"\u0003\u0000\u0000pq\u0005\u001f\u0000\u0000qu\u0005\u0017\u0000\u0000"+
		"rv\u0003\u0012\t\u0000sv\u0003\u0010\b\u0000tv\u0003\n\u0005\u0000ur\u0001"+
		"\u0000\u0000\u0000us\u0001\u0000\u0000\u0000ut\u0001\u0000\u0000\u0000"+
		"vw\u0001\u0000\u0000\u0000wx\u0005\u001e\u0000\u0000x\u0090\u0001\u0000"+
		"\u0000\u0000yz\u0003\f\u0006\u0000z{\u0005\u001e\u0000\u0000{\u0090\u0001"+
		"\u0000\u0000\u0000|}\u0003\u0012\t\u0000}~\u0005\u001e\u0000\u0000~\u0090"+
		"\u0001\u0000\u0000\u0000\u007f\u0080\u0003\u0010\b\u0000\u0080\u0081\u0005"+
		"\u001e\u0000\u0000\u0081\u0090\u0001\u0000\u0000\u0000\u0082\u0083\u0005"+
		"\u000b\u0000\u0000\u0083\u0087\u0005\u0004\u0000\u0000\u0084\u0088\u0003"+
		"\u0012\t\u0000\u0085\u0088\u0003\u0010\b\u0000\u0086\u0088\u0003\n\u0005"+
		"\u0000\u0087\u0084\u0001\u0000\u0000\u0000\u0087\u0085\u0001\u0000\u0000"+
		"\u0000\u0087\u0086\u0001\u0000\u0000\u0000\u0088\u0089\u0001\u0000\u0000"+
		"\u0000\u0089\u008a\u0005\u0005\u0000\u0000\u008a\u008b\u0005\u001e\u0000"+
		"\u0000\u008b\u0090\u0001\u0000\u0000\u0000\u008c\u008d\u0003\n\u0005\u0000"+
		"\u008d\u008e\u0005\u001e\u0000\u0000\u008e\u0090\u0001\u0000\u0000\u0000"+
		"\u008f2\u0001\u0000\u0000\u0000\u008f[\u0001\u0000\u0000\u0000\u008fh"+
		"\u0001\u0000\u0000\u0000\u008fp\u0001\u0000\u0000\u0000\u008fy\u0001\u0000"+
		"\u0000\u0000\u008f|\u0001\u0000\u0000\u0000\u008f\u007f\u0001\u0000\u0000"+
		"\u0000\u008f\u0082\u0001\u0000\u0000\u0000\u008f\u008c\u0001\u0000\u0000"+
		"\u0000\u0090\u0005\u0001\u0000\u0000\u0000\u0091\u0092\u0005\n\u0000\u0000"+
		"\u0092\u0093\u0005\u001f\u0000\u0000\u0093\u009e\u0005\u0004\u0000\u0000"+
		"\u0094\u0095\u0005\b\u0000\u0000\u0095\u0096\u0005\u001f\u0000\u0000\u0096"+
		"\u0098\u0005\u0006\u0000\u0000\u0097\u0094\u0001\u0000\u0000\u0000\u0098"+
		"\u009b\u0001\u0000\u0000\u0000\u0099\u0097\u0001\u0000\u0000\u0000\u0099"+
		"\u009a\u0001\u0000\u0000\u0000\u009a\u009c\u0001\u0000\u0000\u0000\u009b"+
		"\u0099\u0001\u0000\u0000\u0000\u009c\u009d\u0005\b\u0000\u0000\u009d\u009f"+
		"\u0005\u001f\u0000\u0000\u009e\u0099\u0001\u0000\u0000\u0000\u009e\u009f"+
		"\u0001\u0000\u0000\u0000\u009f\u00a0\u0001\u0000\u0000\u0000\u00a0\u00a1"+
		"\u0005\u0005\u0000\u0000\u00a1\u00b4\u0005\u001e\u0000\u0000\u00a2\u00a3"+
		"\u0005\b\u0000\u0000\u00a3\u00a4\u0005\u001f\u0000\u0000\u00a4\u00af\u0005"+
		"\u0004\u0000\u0000\u00a5\u00a6\u0005\b\u0000\u0000\u00a6\u00a7\u0005\u001f"+
		"\u0000\u0000\u00a7\u00a9\u0005\u0006\u0000\u0000\u00a8\u00a5\u0001\u0000"+
		"\u0000\u0000\u00a9\u00ac\u0001\u0000\u0000\u0000\u00aa\u00a8\u0001\u0000"+
		"\u0000\u0000\u00aa\u00ab\u0001\u0000\u0000\u0000\u00ab\u00ad\u0001\u0000"+
		"\u0000\u0000\u00ac\u00aa\u0001\u0000\u0000\u0000\u00ad\u00ae\u0005\b\u0000"+
		"\u0000\u00ae\u00b0\u0005\u001f\u0000\u0000\u00af\u00aa\u0001\u0000\u0000"+
		"\u0000\u00af\u00b0\u0001\u0000\u0000\u0000\u00b0\u00b1\u0001\u0000\u0000"+
		"\u0000\u00b1\u00b2\u0005\u0005\u0000\u0000\u00b2\u00b4\u0005\u001e\u0000"+
		"\u0000\u00b3\u0091\u0001\u0000\u0000\u0000\u00b3\u00a2\u0001\u0000\u0000"+
		"\u0000\u00b4\u0007\u0001\u0000\u0000\u0000\u00b5\u00b6\u0005\n\u0000\u0000"+
		"\u00b6\u00b7\u0005\u001f\u0000\u0000\u00b7\u00c2\u0005\u0004\u0000\u0000"+
		"\u00b8\u00b9\u0005\b\u0000\u0000\u00b9\u00ba\u0005\u001f\u0000\u0000\u00ba"+
		"\u00bc\u0005\u0006\u0000\u0000\u00bb\u00b8\u0001\u0000\u0000\u0000\u00bc"+
		"\u00bf\u0001\u0000\u0000\u0000\u00bd\u00bb\u0001\u0000\u0000\u0000\u00bd"+
		"\u00be\u0001\u0000\u0000\u0000\u00be\u00c0\u0001\u0000\u0000\u0000\u00bf"+
		"\u00bd\u0001\u0000\u0000\u0000\u00c0\u00c1\u0005\b\u0000\u0000\u00c1\u00c3"+
		"\u0005\u001f\u0000\u0000\u00c2\u00bd\u0001\u0000\u0000\u0000\u00c2\u00c3"+
		"\u0001\u0000\u0000\u0000\u00c3\u00c4\u0001\u0000\u0000\u0000\u00c4\u00c5"+
		"\u0005\u0005\u0000\u0000\u00c5\u00c9\u0005\u0002\u0000\u0000\u00c6\u00c8"+
		"\u0003\u0004\u0002\u0000\u00c7\u00c6\u0001\u0000\u0000\u0000\u00c8\u00cb"+
		"\u0001\u0000\u0000\u0000\u00c9\u00c7\u0001\u0000\u0000\u0000\u00c9\u00ca"+
		"\u0001\u0000\u0000\u0000\u00ca\u00cc\u0001\u0000\u0000\u0000\u00cb\u00c9"+
		"\u0001\u0000\u0000\u0000\u00cc\u00ee\u0005\u0003\u0000\u0000\u00cd\u00ce"+
		"\u0005\b\u0000\u0000\u00ce\u00cf\u0005\u001f\u0000\u0000\u00cf\u00da\u0005"+
		"\u0004\u0000\u0000\u00d0\u00d1\u0005\b\u0000\u0000\u00d1\u00d2\u0005\u001f"+
		"\u0000\u0000\u00d2\u00d4\u0005\u0006\u0000\u0000\u00d3\u00d0\u0001\u0000"+
		"\u0000\u0000\u00d4\u00d7\u0001\u0000\u0000\u0000\u00d5\u00d3\u0001\u0000"+
		"\u0000\u0000\u00d5\u00d6\u0001\u0000\u0000\u0000\u00d6\u00d8\u0001\u0000"+
		"\u0000\u0000\u00d7\u00d5\u0001\u0000\u0000\u0000\u00d8\u00d9\u0005\b\u0000"+
		"\u0000\u00d9\u00db\u0005\u001f\u0000\u0000\u00da\u00d5\u0001\u0000\u0000"+
		"\u0000\u00da\u00db\u0001\u0000\u0000\u0000\u00db\u00dc\u0001\u0000\u0000"+
		"\u0000\u00dc\u00dd\u0005\u0005\u0000\u0000\u00dd\u00e1\u0005\u0002\u0000"+
		"\u0000\u00de\u00e0\u0003\u0004\u0002\u0000\u00df\u00de\u0001\u0000\u0000"+
		"\u0000\u00e0\u00e3\u0001\u0000\u0000\u0000\u00e1\u00df\u0001\u0000\u0000"+
		"\u0000\u00e1\u00e2\u0001\u0000\u0000\u0000\u00e2\u00e4\u0001\u0000\u0000"+
		"\u0000\u00e3\u00e1\u0001\u0000\u0000\u0000\u00e4\u00e8\u0005\u0007\u0000"+
		"\u0000\u00e5\u00e9\u0003\u0012\t\u0000\u00e6\u00e9\u0003\u0010\b\u0000"+
		"\u00e7\u00e9\u0003\n\u0005\u0000\u00e8\u00e5\u0001\u0000\u0000\u0000\u00e8"+
		"\u00e6\u0001\u0000\u0000\u0000\u00e8\u00e7\u0001\u0000\u0000\u0000\u00e9"+
		"\u00ea\u0001\u0000\u0000\u0000\u00ea\u00eb\u0005\u001e\u0000\u0000\u00eb"+
		"\u00ec\u0005\u0003\u0000\u0000\u00ec\u00ee\u0001\u0000\u0000\u0000\u00ed"+
		"\u00b5\u0001\u0000\u0000\u0000\u00ed\u00cd\u0001\u0000\u0000\u0000\u00ee"+
		"\t\u0001\u0000\u0000\u0000\u00ef\u00f0\u0005\u001f\u0000\u0000\u00f0\u00fa"+
		"\u0005\u0004\u0000\u0000\u00f1\u00f2\u0003\u0012\t\u0000\u00f2\u00f3\u0005"+
		"\u0006\u0000\u0000\u00f3\u00f5\u0001\u0000\u0000\u0000\u00f4\u00f1\u0001"+
		"\u0000\u0000\u0000\u00f5\u00f8\u0001\u0000\u0000\u0000\u00f6\u00f4\u0001"+
		"\u0000\u0000\u0000\u00f6\u00f7\u0001\u0000\u0000\u0000\u00f7\u00f9\u0001"+
		"\u0000\u0000\u0000\u00f8\u00f6\u0001\u0000\u0000\u0000\u00f9\u00fb\u0003"+
		"\u0012\t\u0000\u00fa\u00f6\u0001\u0000\u0000\u0000\u00fa\u00fb\u0001\u0000"+
		"\u0000\u0000\u00fb\u00fc\u0001\u0000\u0000\u0000\u00fc\u00fd\u0005\u0005"+
		"\u0000\u0000\u00fd\u000b\u0001\u0000\u0000\u0000\u00fe\u00ff\u0005\b\u0000"+
		"\u0000\u00ff\u0109\u0005\u001f\u0000\u0000\u0100\u0101\u0005\b\u0000\u0000"+
		"\u0101\u0102\u0005\u001f\u0000\u0000\u0102\u0106\u0005\u0017\u0000\u0000"+
		"\u0103\u0107\u0003\u0012\t\u0000\u0104\u0107\u0003\u0010\b\u0000\u0105"+
		"\u0107\u0003\n\u0005\u0000\u0106\u0103\u0001\u0000\u0000\u0000\u0106\u0104"+
		"\u0001\u0000\u0000\u0000\u0106\u0105\u0001\u0000\u0000\u0000\u0107\u0109"+
		"\u0001\u0000\u0000\u0000\u0108\u00fe\u0001\u0000\u0000\u0000\u0108\u0100"+
		"\u0001\u0000\u0000\u0000\u0109\r\u0001\u0000\u0000\u0000\u010a\u010b\u0005"+
		"\b\u0000\u0000\u010b\u010c\u0005\u001f\u0000\u0000\u010c\u0113\u0005\u001e"+
		"\u0000\u0000\u010d\u010e\u0005\b\u0000\u0000\u010e\u010f\u0005\u001f\u0000"+
		"\u0000\u010f\u0110\u0005\u0017\u0000\u0000\u0110\u0111\u0005 \u0000\u0000"+
		"\u0111\u0113\u0005\u001e\u0000\u0000\u0112\u010a\u0001\u0000\u0000\u0000"+
		"\u0112\u010d\u0001\u0000\u0000\u0000\u0113\u000f\u0001\u0000\u0000\u0000"+
		"\u0114\u0115\u0006\b\uffff\uffff\u0000\u0115\u0116\u0003\u0012\t\u0000"+
		"\u0116\u0117\u0005\t\u0000\u0000\u0117\u0118\u0003\u0012\t\u0000\u0118"+
		"\u0123\u0001\u0000\u0000\u0000\u0119\u011a\u0005\u0016\u0000\u0000\u011a"+
		"\u011b\u0005\u0004\u0000\u0000\u011b\u011c\u0003\u0010\b\u0000\u011c\u011d"+
		"\u0005\u0005\u0000\u0000\u011d\u0123\u0001\u0000\u0000\u0000\u011e\u011f"+
		"\u0005\u0004\u0000\u0000\u011f\u0120\u0003\u0010\b\u0000\u0120\u0121\u0005"+
		"\u0005\u0000\u0000\u0121\u0123\u0001\u0000\u0000\u0000\u0122\u0114\u0001"+
		"\u0000\u0000\u0000\u0122\u0119\u0001\u0000\u0000\u0000\u0122\u011e\u0001"+
		"\u0000\u0000\u0000\u0123\u012c\u0001\u0000\u0000\u0000\u0124\u0125\n\u0003"+
		"\u0000\u0000\u0125\u0126\u0005\u0014\u0000\u0000\u0126\u012b\u0003\u0010"+
		"\b\u0004\u0127\u0128\n\u0002\u0000\u0000\u0128\u0129\u0005\u0015\u0000"+
		"\u0000\u0129\u012b\u0003\u0010\b\u0003\u012a\u0124\u0001\u0000\u0000\u0000"+
		"\u012a\u0127\u0001\u0000\u0000\u0000\u012b\u012e\u0001\u0000\u0000\u0000"+
		"\u012c\u012a\u0001\u0000\u0000\u0000\u012c\u012d\u0001\u0000\u0000\u0000"+
		"\u012d\u0011\u0001\u0000\u0000\u0000\u012e\u012c\u0001\u0000\u0000\u0000"+
		"\u012f\u0130\u0006\t\uffff\uffff\u0000\u0130\u0137\u0005 \u0000\u0000"+
		"\u0131\u0137\u0005\u001f\u0000\u0000\u0132\u0133\u0005\u0004\u0000\u0000"+
		"\u0133\u0134\u0003\u0012\t\u0000\u0134\u0135\u0005\u0005\u0000\u0000\u0135"+
		"\u0137\u0001\u0000\u0000\u0000\u0136\u012f\u0001\u0000\u0000\u0000\u0136"+
		"\u0131\u0001\u0000\u0000\u0000\u0136\u0132\u0001\u0000\u0000\u0000\u0137"+
		"\u0140\u0001\u0000\u0000\u0000\u0138\u0139\n\u0005\u0000\u0000\u0139\u013a"+
		"\u0007\u0000\u0000\u0000\u013a\u013f\u0003\u0012\t\u0006\u013b\u013c\n"+
		"\u0004\u0000\u0000\u013c\u013d\u0007\u0001\u0000\u0000\u013d\u013f\u0003"+
		"\u0012\t\u0005\u013e\u0138\u0001\u0000\u0000\u0000\u013e\u013b\u0001\u0000"+
		"\u0000\u0000\u013f\u0142\u0001\u0000\u0000\u0000\u0140\u013e\u0001\u0000"+
		"\u0000\u0000\u0140\u0141\u0001\u0000\u0000\u0000\u0141\u0013\u0001\u0000"+
		"\u0000\u0000\u0142\u0140\u0001\u0000\u0000\u0000\'\u0017\u0019!#-:FMU"+
		"Yclu\u0087\u008f\u0099\u009e\u00aa\u00af\u00b3\u00bd\u00c2\u00c9\u00d5"+
		"\u00da\u00e1\u00e8\u00ed\u00f6\u00fa\u0106\u0108\u0112\u0122\u012a\u012c"+
		"\u0136\u013e\u0140";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}