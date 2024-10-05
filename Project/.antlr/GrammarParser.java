// Generated from /home/swiftfeetstallion/compilers/Project/Grammar.g4 by ANTLR 4.13.1
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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, EVALOP=6, TYPE=7, VOID=8, PRINT=9, 
		IF=10, WHILE=11, ELSE=12, ELIF=13, ADD=14, SUB=15, MUL=16, DIV=17, AND=18, 
		OR=19, NOT=20, ASSIGN=21, EQUAL=22, NO_EQUAL=23, LESS=24, LESSEQ=25, GREATER=26, 
		GREATEREQ=27, SEMICOLON=28, ID=29, NUM=30, LINECOMMENT=31, WS=32;
	public static final int
		RULE_program = 0, RULE_sentence = 1, RULE_var_declaration_stmt = 2, RULE_bool_expr = 3, 
		RULE_ariphm_expr = 4;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "sentence", "var_declaration_stmt", "bool_expr", "ariphm_expr"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'int main()'", "'{'", "'}'", "'('", "')'", null, "'int'", "'void'", 
			"'print'", "'if'", "'while'", "'else'", "'else if'", "'+'", "'-'", "'*'", 
			"'/'", "'&&'", "'||'", "'!'", "'='", "'=='", "'!='", "'<'", "'<='", "'>'", 
			"'>='", "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, "EVALOP", "TYPE", "VOID", "PRINT", 
			"IF", "WHILE", "ELSE", "ELIF", "ADD", "SUB", "MUL", "DIV", "AND", "OR", 
			"NOT", "ASSIGN", "EQUAL", "NO_EQUAL", "LESS", "LESSEQ", "GREATER", "GREATEREQ", 
			"SEMICOLON", "ID", "NUM", "LINECOMMENT", "WS"
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
		public List<SentenceContext> sentence() {
			return getRuleContexts(SentenceContext.class);
		}
		public SentenceContext sentence(int i) {
			return getRuleContext(SentenceContext.class,i);
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
			setState(10);
			match(T__0);
			setState(11);
			match(T__1);
			setState(15);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
				{
				{
				setState(12);
				sentence();
				}
				}
				setState(17);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(18);
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
	public static class Print_stmtContext extends SentenceContext {
		public TerminalNode PRINT() { return getToken(GrammarParser.PRINT, 0); }
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
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
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
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

	public final SentenceContext sentence() throws RecognitionException {
		SentenceContext _localctx = new SentenceContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_sentence);
		int _la;
		try {
			setState(102);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				_localctx = new If_stmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(20);
				match(IF);
				setState(21);
				match(T__3);
				setState(22);
				bool_expr(0);
				setState(23);
				match(T__4);
				setState(24);
				match(T__1);
				setState(28);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
					{
					{
					setState(25);
					sentence();
					}
					}
					setState(30);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(31);
				match(T__2);
				setState(47);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==ELIF) {
					{
					{
					setState(32);
					match(ELIF);
					setState(33);
					match(T__3);
					setState(34);
					bool_expr(0);
					setState(35);
					match(T__4);
					setState(36);
					match(T__1);
					setState(40);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
						{
						{
						setState(37);
						sentence();
						}
						}
						setState(42);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(43);
					match(T__2);
					}
					}
					setState(49);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(59);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(50);
					match(ELSE);
					setState(51);
					match(T__1);
					setState(55);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
						{
						{
						setState(52);
						sentence();
						}
						}
						setState(57);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(58);
					match(T__2);
					}
				}

				}
				break;
			case 2:
				_localctx = new While_stmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(61);
				match(WHILE);
				setState(62);
				match(T__3);
				setState(63);
				bool_expr(0);
				setState(64);
				match(T__4);
				setState(65);
				match(T__1);
				setState(69);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
					{
					{
					setState(66);
					sentence();
					}
					}
					setState(71);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(72);
				match(T__2);
				}
				break;
			case 3:
				_localctx = new Scope_stmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(74);
				match(T__1);
				setState(78);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
					{
					{
					setState(75);
					sentence();
					}
					}
					setState(80);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(81);
				match(T__2);
				}
				break;
			case 4:
				_localctx = new Assign_stmtContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(82);
				match(ID);
				setState(83);
				match(ASSIGN);
				setState(84);
				ariphm_expr(0);
				setState(85);
				match(SEMICOLON);
				}
				break;
			case 5:
				_localctx = new Var_stmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(87);
				var_declaration_stmt();
				setState(88);
				match(SEMICOLON);
				}
				break;
			case 6:
				_localctx = new Ariphm_stmtContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(90);
				ariphm_expr(0);
				setState(91);
				match(SEMICOLON);
				}
				break;
			case 7:
				_localctx = new Print_stmtContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(93);
				match(PRINT);
				setState(94);
				match(T__3);
				setState(97);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(95);
					ariphm_expr(0);
					}
					break;
				case 2:
					{
					setState(96);
					bool_expr(0);
					}
					break;
				}
				setState(99);
				match(T__4);
				setState(100);
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
		enterRule(_localctx, 4, RULE_var_declaration_stmt);
		try {
			setState(110);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				_localctx = new Var_decl_stmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(104);
				match(TYPE);
				setState(105);
				match(ID);
				}
				break;
			case 2:
				_localctx = new Var_def_stmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(106);
				match(TYPE);
				setState(107);
				match(ID);
				setState(108);
				match(ASSIGN);
				setState(109);
				ariphm_expr(0);
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
		int _startState = 6;
		enterRecursionRule(_localctx, 6, RULE_bool_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				_localctx = new One_bool_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(113);
				ariphm_expr(0);
				setState(114);
				match(EVALOP);
				setState(115);
				ariphm_expr(0);
				}
				break;
			case 2:
				{
				_localctx = new Not_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(117);
				match(NOT);
				setState(118);
				match(T__3);
				setState(119);
				bool_expr(0);
				setState(120);
				match(T__4);
				}
				break;
			case 3:
				{
				_localctx = new Par_bool_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(122);
				match(T__3);
				setState(123);
				bool_expr(0);
				setState(124);
				match(T__4);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(136);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(134);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new And_stmtContext(new Bool_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_bool_expr);
						setState(128);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(129);
						match(AND);
						setState(130);
						bool_expr(4);
						}
						break;
					case 2:
						{
						_localctx = new Or_stmtContext(new Bool_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_bool_expr);
						setState(131);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(132);
						match(OR);
						setState(133);
						bool_expr(3);
						}
						break;
					}
					} 
				}
				setState(138);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
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
		int _startState = 8;
		enterRecursionRule(_localctx, 8, RULE_ariphm_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUM:
				{
				_localctx = new NumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(140);
				match(NUM);
				}
				break;
			case ID:
				{
				_localctx = new VariableContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(141);
				match(ID);
				}
				break;
			case T__3:
				{
				_localctx = new Par_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(142);
				match(T__3);
				setState(143);
				ariphm_expr(0);
				setState(144);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(156);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(154);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
					case 1:
						{
						_localctx = new Mul_div_stmtContext(new Ariphm_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_ariphm_expr);
						setState(148);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(149);
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
						setState(150);
						ariphm_expr(6);
						}
						break;
					case 2:
						{
						_localctx = new Add_sub_stmtContext(new Ariphm_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_ariphm_expr);
						setState(151);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(152);
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
						setState(153);
						ariphm_expr(5);
						}
						break;
					}
					} 
				}
				setState(158);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
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
		case 3:
			return bool_expr_sempred((Bool_exprContext)_localctx, predIndex);
		case 4:
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
		"\u0004\u0001 \u00a0\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0005\u0000\u000e\b\u0000\n\u0000\f\u0000"+
		"\u0011\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001\u001b\b\u0001\n\u0001"+
		"\f\u0001\u001e\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001\'\b\u0001\n\u0001\f\u0001"+
		"*\t\u0001\u0001\u0001\u0001\u0001\u0005\u0001.\b\u0001\n\u0001\f\u0001"+
		"1\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u00016\b\u0001\n\u0001"+
		"\f\u00019\t\u0001\u0001\u0001\u0003\u0001<\b\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001D\b\u0001"+
		"\n\u0001\f\u0001G\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0005\u0001M\b\u0001\n\u0001\f\u0001P\t\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0003\u0001b\b\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0003\u0001g\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002o\b\u0002\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0003\u0003\u007f\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0005\u0003\u0087\b\u0003\n\u0003"+
		"\f\u0003\u008a\t\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u0093\b\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0005\u0004"+
		"\u009b\b\u0004\n\u0004\f\u0004\u009e\t\u0004\u0001\u0004\u0000\u0002\u0006"+
		"\b\u0005\u0000\u0002\u0004\u0006\b\u0000\u0002\u0001\u0000\u0010\u0011"+
		"\u0001\u0000\u000e\u000f\u00b2\u0000\n\u0001\u0000\u0000\u0000\u0002f"+
		"\u0001\u0000\u0000\u0000\u0004n\u0001\u0000\u0000\u0000\u0006~\u0001\u0000"+
		"\u0000\u0000\b\u0092\u0001\u0000\u0000\u0000\n\u000b\u0005\u0001\u0000"+
		"\u0000\u000b\u000f\u0005\u0002\u0000\u0000\f\u000e\u0003\u0002\u0001\u0000"+
		"\r\f\u0001\u0000\u0000\u0000\u000e\u0011\u0001\u0000\u0000\u0000\u000f"+
		"\r\u0001\u0000\u0000\u0000\u000f\u0010\u0001\u0000\u0000\u0000\u0010\u0012"+
		"\u0001\u0000\u0000\u0000\u0011\u000f\u0001\u0000\u0000\u0000\u0012\u0013"+
		"\u0005\u0003\u0000\u0000\u0013\u0001\u0001\u0000\u0000\u0000\u0014\u0015"+
		"\u0005\n\u0000\u0000\u0015\u0016\u0005\u0004\u0000\u0000\u0016\u0017\u0003"+
		"\u0006\u0003\u0000\u0017\u0018\u0005\u0005\u0000\u0000\u0018\u001c\u0005"+
		"\u0002\u0000\u0000\u0019\u001b\u0003\u0002\u0001\u0000\u001a\u0019\u0001"+
		"\u0000\u0000\u0000\u001b\u001e\u0001\u0000\u0000\u0000\u001c\u001a\u0001"+
		"\u0000\u0000\u0000\u001c\u001d\u0001\u0000\u0000\u0000\u001d\u001f\u0001"+
		"\u0000\u0000\u0000\u001e\u001c\u0001\u0000\u0000\u0000\u001f/\u0005\u0003"+
		"\u0000\u0000 !\u0005\r\u0000\u0000!\"\u0005\u0004\u0000\u0000\"#\u0003"+
		"\u0006\u0003\u0000#$\u0005\u0005\u0000\u0000$(\u0005\u0002\u0000\u0000"+
		"%\'\u0003\u0002\u0001\u0000&%\u0001\u0000\u0000\u0000\'*\u0001\u0000\u0000"+
		"\u0000(&\u0001\u0000\u0000\u0000()\u0001\u0000\u0000\u0000)+\u0001\u0000"+
		"\u0000\u0000*(\u0001\u0000\u0000\u0000+,\u0005\u0003\u0000\u0000,.\u0001"+
		"\u0000\u0000\u0000- \u0001\u0000\u0000\u0000.1\u0001\u0000\u0000\u0000"+
		"/-\u0001\u0000\u0000\u0000/0\u0001\u0000\u0000\u00000;\u0001\u0000\u0000"+
		"\u00001/\u0001\u0000\u0000\u000023\u0005\f\u0000\u000037\u0005\u0002\u0000"+
		"\u000046\u0003\u0002\u0001\u000054\u0001\u0000\u0000\u000069\u0001\u0000"+
		"\u0000\u000075\u0001\u0000\u0000\u000078\u0001\u0000\u0000\u00008:\u0001"+
		"\u0000\u0000\u000097\u0001\u0000\u0000\u0000:<\u0005\u0003\u0000\u0000"+
		";2\u0001\u0000\u0000\u0000;<\u0001\u0000\u0000\u0000<g\u0001\u0000\u0000"+
		"\u0000=>\u0005\u000b\u0000\u0000>?\u0005\u0004\u0000\u0000?@\u0003\u0006"+
		"\u0003\u0000@A\u0005\u0005\u0000\u0000AE\u0005\u0002\u0000\u0000BD\u0003"+
		"\u0002\u0001\u0000CB\u0001\u0000\u0000\u0000DG\u0001\u0000\u0000\u0000"+
		"EC\u0001\u0000\u0000\u0000EF\u0001\u0000\u0000\u0000FH\u0001\u0000\u0000"+
		"\u0000GE\u0001\u0000\u0000\u0000HI\u0005\u0003\u0000\u0000Ig\u0001\u0000"+
		"\u0000\u0000JN\u0005\u0002\u0000\u0000KM\u0003\u0002\u0001\u0000LK\u0001"+
		"\u0000\u0000\u0000MP\u0001\u0000\u0000\u0000NL\u0001\u0000\u0000\u0000"+
		"NO\u0001\u0000\u0000\u0000OQ\u0001\u0000\u0000\u0000PN\u0001\u0000\u0000"+
		"\u0000Qg\u0005\u0003\u0000\u0000RS\u0005\u001d\u0000\u0000ST\u0005\u0015"+
		"\u0000\u0000TU\u0003\b\u0004\u0000UV\u0005\u001c\u0000\u0000Vg\u0001\u0000"+
		"\u0000\u0000WX\u0003\u0004\u0002\u0000XY\u0005\u001c\u0000\u0000Yg\u0001"+
		"\u0000\u0000\u0000Z[\u0003\b\u0004\u0000[\\\u0005\u001c\u0000\u0000\\"+
		"g\u0001\u0000\u0000\u0000]^\u0005\t\u0000\u0000^a\u0005\u0004\u0000\u0000"+
		"_b\u0003\b\u0004\u0000`b\u0003\u0006\u0003\u0000a_\u0001\u0000\u0000\u0000"+
		"a`\u0001\u0000\u0000\u0000bc\u0001\u0000\u0000\u0000cd\u0005\u0005\u0000"+
		"\u0000de\u0005\u001c\u0000\u0000eg\u0001\u0000\u0000\u0000f\u0014\u0001"+
		"\u0000\u0000\u0000f=\u0001\u0000\u0000\u0000fJ\u0001\u0000\u0000\u0000"+
		"fR\u0001\u0000\u0000\u0000fW\u0001\u0000\u0000\u0000fZ\u0001\u0000\u0000"+
		"\u0000f]\u0001\u0000\u0000\u0000g\u0003\u0001\u0000\u0000\u0000hi\u0005"+
		"\u0007\u0000\u0000io\u0005\u001d\u0000\u0000jk\u0005\u0007\u0000\u0000"+
		"kl\u0005\u001d\u0000\u0000lm\u0005\u0015\u0000\u0000mo\u0003\b\u0004\u0000"+
		"nh\u0001\u0000\u0000\u0000nj\u0001\u0000\u0000\u0000o\u0005\u0001\u0000"+
		"\u0000\u0000pq\u0006\u0003\uffff\uffff\u0000qr\u0003\b\u0004\u0000rs\u0005"+
		"\u0006\u0000\u0000st\u0003\b\u0004\u0000t\u007f\u0001\u0000\u0000\u0000"+
		"uv\u0005\u0014\u0000\u0000vw\u0005\u0004\u0000\u0000wx\u0003\u0006\u0003"+
		"\u0000xy\u0005\u0005\u0000\u0000y\u007f\u0001\u0000\u0000\u0000z{\u0005"+
		"\u0004\u0000\u0000{|\u0003\u0006\u0003\u0000|}\u0005\u0005\u0000\u0000"+
		"}\u007f\u0001\u0000\u0000\u0000~p\u0001\u0000\u0000\u0000~u\u0001\u0000"+
		"\u0000\u0000~z\u0001\u0000\u0000\u0000\u007f\u0088\u0001\u0000\u0000\u0000"+
		"\u0080\u0081\n\u0003\u0000\u0000\u0081\u0082\u0005\u0012\u0000\u0000\u0082"+
		"\u0087\u0003\u0006\u0003\u0004\u0083\u0084\n\u0002\u0000\u0000\u0084\u0085"+
		"\u0005\u0013\u0000\u0000\u0085\u0087\u0003\u0006\u0003\u0003\u0086\u0080"+
		"\u0001\u0000\u0000\u0000\u0086\u0083\u0001\u0000\u0000\u0000\u0087\u008a"+
		"\u0001\u0000\u0000\u0000\u0088\u0086\u0001\u0000\u0000\u0000\u0088\u0089"+
		"\u0001\u0000\u0000\u0000\u0089\u0007\u0001\u0000\u0000\u0000\u008a\u0088"+
		"\u0001\u0000\u0000\u0000\u008b\u008c\u0006\u0004\uffff\uffff\u0000\u008c"+
		"\u0093\u0005\u001e\u0000\u0000\u008d\u0093\u0005\u001d\u0000\u0000\u008e"+
		"\u008f\u0005\u0004\u0000\u0000\u008f\u0090\u0003\b\u0004\u0000\u0090\u0091"+
		"\u0005\u0005\u0000\u0000\u0091\u0093\u0001\u0000\u0000\u0000\u0092\u008b"+
		"\u0001\u0000\u0000\u0000\u0092\u008d\u0001\u0000\u0000\u0000\u0092\u008e"+
		"\u0001\u0000\u0000\u0000\u0093\u009c\u0001\u0000\u0000\u0000\u0094\u0095"+
		"\n\u0005\u0000\u0000\u0095\u0096\u0007\u0000\u0000\u0000\u0096\u009b\u0003"+
		"\b\u0004\u0006\u0097\u0098\n\u0004\u0000\u0000\u0098\u0099\u0007\u0001"+
		"\u0000\u0000\u0099\u009b\u0003\b\u0004\u0005\u009a\u0094\u0001\u0000\u0000"+
		"\u0000\u009a\u0097\u0001\u0000\u0000\u0000\u009b\u009e\u0001\u0000\u0000"+
		"\u0000\u009c\u009a\u0001\u0000\u0000\u0000\u009c\u009d\u0001\u0000\u0000"+
		"\u0000\u009d\t\u0001\u0000\u0000\u0000\u009e\u009c\u0001\u0000\u0000\u0000"+
		"\u0011\u000f\u001c(/7;ENafn~\u0086\u0088\u0092\u009a\u009c";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}