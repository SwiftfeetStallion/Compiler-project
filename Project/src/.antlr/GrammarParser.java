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
		public TerminalNode EOF() { return getToken(GrammarParser.EOF, 0); }
		public List<SentenceContext> sentence() {
			return getRuleContexts(SentenceContext.class);
		}
		public SentenceContext sentence(int i) {
			return getRuleContext(SentenceContext.class,i);
		}
		public StartContext(ProgramContext ctx) { copyFrom(ctx); }
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
			setState(19);
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
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Ariphm_stmtContext extends SentenceContext {
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GrammarParser.SEMICOLON, 0); }
		public Ariphm_stmtContext(SentenceContext ctx) { copyFrom(ctx); }
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
	}

	public final SentenceContext sentence() throws RecognitionException {
		SentenceContext _localctx = new SentenceContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_sentence);
		int _la;
		try {
			setState(103);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				_localctx = new If_stmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(21);
				match(IF);
				setState(22);
				match(T__3);
				setState(23);
				bool_expr(0);
				setState(24);
				match(T__4);
				setState(25);
				match(T__1);
				setState(29);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
					{
					{
					setState(26);
					sentence();
					}
					}
					setState(31);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(32);
				match(T__2);
				setState(48);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==ELIF) {
					{
					{
					setState(33);
					match(ELIF);
					setState(34);
					match(T__3);
					setState(35);
					bool_expr(0);
					setState(36);
					match(T__4);
					setState(37);
					match(T__1);
					setState(41);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
						{
						{
						setState(38);
						sentence();
						}
						}
						setState(43);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(44);
					match(T__2);
					}
					}
					setState(50);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(60);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(51);
					match(ELSE);
					setState(52);
					match(T__1);
					setState(56);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
						{
						{
						setState(53);
						sentence();
						}
						}
						setState(58);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(59);
					match(T__2);
					}
				}

				}
				break;
			case 2:
				_localctx = new While_stmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(62);
				match(WHILE);
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
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
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
				break;
			case 3:
				_localctx = new Scope_stmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(75);
				match(T__1);
				setState(79);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1610616468L) != 0)) {
					{
					{
					setState(76);
					sentence();
					}
					}
					setState(81);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(82);
				match(T__2);
				}
				break;
			case 4:
				_localctx = new Assign_stmtContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(83);
				match(ID);
				setState(84);
				match(ASSIGN);
				setState(85);
				ariphm_expr(0);
				setState(86);
				match(SEMICOLON);
				}
				break;
			case 5:
				_localctx = new Var_stmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(88);
				var_declaration_stmt();
				setState(89);
				match(SEMICOLON);
				}
				break;
			case 6:
				_localctx = new Ariphm_stmtContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(91);
				ariphm_expr(0);
				setState(92);
				match(SEMICOLON);
				}
				break;
			case 7:
				_localctx = new Print_stmtContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(94);
				match(PRINT);
				setState(95);
				match(T__3);
				setState(98);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(96);
					ariphm_expr(0);
					}
					break;
				case 2:
					{
					setState(97);
					bool_expr(0);
					}
					break;
				}
				setState(100);
				match(T__4);
				setState(101);
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
	}

	public final Var_declaration_stmtContext var_declaration_stmt() throws RecognitionException {
		Var_declaration_stmtContext _localctx = new Var_declaration_stmtContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_var_declaration_stmt);
		try {
			setState(111);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				_localctx = new Var_decl_stmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(105);
				match(TYPE);
				setState(106);
				match(ID);
				}
				break;
			case 2:
				_localctx = new Var_def_stmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(107);
				match(TYPE);
				setState(108);
				match(ID);
				setState(109);
				match(ASSIGN);
				setState(110);
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
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Not_stmtContext extends Bool_exprContext {
		public TerminalNode NOT() { return getToken(GrammarParser.NOT, 0); }
		public Bool_exprContext bool_expr() {
			return getRuleContext(Bool_exprContext.class,0);
		}
		public Not_stmtContext(Bool_exprContext ctx) { copyFrom(ctx); }
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
			setState(127);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				_localctx = new One_bool_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(114);
				ariphm_expr(0);
				setState(115);
				match(EVALOP);
				setState(116);
				ariphm_expr(0);
				}
				break;
			case 2:
				{
				_localctx = new Not_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(118);
				match(NOT);
				setState(119);
				match(T__3);
				setState(120);
				bool_expr(0);
				setState(121);
				match(T__4);
				}
				break;
			case 3:
				{
				_localctx = new Par_bool_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(123);
				match(T__3);
				setState(124);
				bool_expr(0);
				setState(125);
				match(T__4);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(137);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(135);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new And_stmtContext(new Bool_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_bool_expr);
						setState(129);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(130);
						match(AND);
						setState(131);
						bool_expr(4);
						}
						break;
					case 2:
						{
						_localctx = new Or_stmtContext(new Bool_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_bool_expr);
						setState(132);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(133);
						match(OR);
						setState(134);
						bool_expr(3);
						}
						break;
					}
					} 
				}
				setState(139);
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
	}
	@SuppressWarnings("CheckReturnValue")
	public static class VariableContext extends Ariphm_exprContext {
		public TerminalNode ID() { return getToken(GrammarParser.ID, 0); }
		public VariableContext(Ariphm_exprContext ctx) { copyFrom(ctx); }
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
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Par_stmtContext extends Ariphm_exprContext {
		public Ariphm_exprContext ariphm_expr() {
			return getRuleContext(Ariphm_exprContext.class,0);
		}
		public Par_stmtContext(Ariphm_exprContext ctx) { copyFrom(ctx); }
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
			setState(147);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUM:
				{
				_localctx = new NumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(141);
				match(NUM);
				}
				break;
			case ID:
				{
				_localctx = new VariableContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(142);
				match(ID);
				}
				break;
			case T__3:
				{
				_localctx = new Par_stmtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(143);
				match(T__3);
				setState(144);
				ariphm_expr(0);
				setState(145);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(157);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(155);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
					case 1:
						{
						_localctx = new Mul_div_stmtContext(new Ariphm_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_ariphm_expr);
						setState(149);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(150);
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
						setState(151);
						ariphm_expr(6);
						}
						break;
					case 2:
						{
						_localctx = new Add_sub_stmtContext(new Ariphm_exprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_ariphm_expr);
						setState(152);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(153);
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
						setState(154);
						ariphm_expr(5);
						}
						break;
					}
					} 
				}
				setState(159);
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
		"\u0004\u0001 \u00a1\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0005\u0000\u000e\b\u0000\n\u0000\f\u0000"+
		"\u0011\t\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001\u001c\b\u0001"+
		"\n\u0001\f\u0001\u001f\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001(\b\u0001\n\u0001"+
		"\f\u0001+\t\u0001\u0001\u0001\u0001\u0001\u0005\u0001/\b\u0001\n\u0001"+
		"\f\u00012\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u00017\b\u0001"+
		"\n\u0001\f\u0001:\t\u0001\u0001\u0001\u0003\u0001=\b\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001"+
		"E\b\u0001\n\u0001\f\u0001H\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0005\u0001N\b\u0001\n\u0001\f\u0001Q\t\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0003\u0001c\b\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0003\u0001h\b\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002p\b\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0003\u0003\u0080\b\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0005\u0003\u0088\b\u0003"+
		"\n\u0003\f\u0003\u008b\t\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u0094\b\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0005"+
		"\u0004\u009c\b\u0004\n\u0004\f\u0004\u009f\t\u0004\u0001\u0004\u0000\u0002"+
		"\u0006\b\u0005\u0000\u0002\u0004\u0006\b\u0000\u0002\u0001\u0000\u0010"+
		"\u0011\u0001\u0000\u000e\u000f\u00b3\u0000\n\u0001\u0000\u0000\u0000\u0002"+
		"g\u0001\u0000\u0000\u0000\u0004o\u0001\u0000\u0000\u0000\u0006\u007f\u0001"+
		"\u0000\u0000\u0000\b\u0093\u0001\u0000\u0000\u0000\n\u000b\u0005\u0001"+
		"\u0000\u0000\u000b\u000f\u0005\u0002\u0000\u0000\f\u000e\u0003\u0002\u0001"+
		"\u0000\r\f\u0001\u0000\u0000\u0000\u000e\u0011\u0001\u0000\u0000\u0000"+
		"\u000f\r\u0001\u0000\u0000\u0000\u000f\u0010\u0001\u0000\u0000\u0000\u0010"+
		"\u0012\u0001\u0000\u0000\u0000\u0011\u000f\u0001\u0000\u0000\u0000\u0012"+
		"\u0013\u0005\u0003\u0000\u0000\u0013\u0014\u0005\u0000\u0000\u0001\u0014"+
		"\u0001\u0001\u0000\u0000\u0000\u0015\u0016\u0005\n\u0000\u0000\u0016\u0017"+
		"\u0005\u0004\u0000\u0000\u0017\u0018\u0003\u0006\u0003\u0000\u0018\u0019"+
		"\u0005\u0005\u0000\u0000\u0019\u001d\u0005\u0002\u0000\u0000\u001a\u001c"+
		"\u0003\u0002\u0001\u0000\u001b\u001a\u0001\u0000\u0000\u0000\u001c\u001f"+
		"\u0001\u0000\u0000\u0000\u001d\u001b\u0001\u0000\u0000\u0000\u001d\u001e"+
		"\u0001\u0000\u0000\u0000\u001e \u0001\u0000\u0000\u0000\u001f\u001d\u0001"+
		"\u0000\u0000\u0000 0\u0005\u0003\u0000\u0000!\"\u0005\r\u0000\u0000\""+
		"#\u0005\u0004\u0000\u0000#$\u0003\u0006\u0003\u0000$%\u0005\u0005\u0000"+
		"\u0000%)\u0005\u0002\u0000\u0000&(\u0003\u0002\u0001\u0000\'&\u0001\u0000"+
		"\u0000\u0000(+\u0001\u0000\u0000\u0000)\'\u0001\u0000\u0000\u0000)*\u0001"+
		"\u0000\u0000\u0000*,\u0001\u0000\u0000\u0000+)\u0001\u0000\u0000\u0000"+
		",-\u0005\u0003\u0000\u0000-/\u0001\u0000\u0000\u0000.!\u0001\u0000\u0000"+
		"\u0000/2\u0001\u0000\u0000\u00000.\u0001\u0000\u0000\u000001\u0001\u0000"+
		"\u0000\u00001<\u0001\u0000\u0000\u000020\u0001\u0000\u0000\u000034\u0005"+
		"\f\u0000\u000048\u0005\u0002\u0000\u000057\u0003\u0002\u0001\u000065\u0001"+
		"\u0000\u0000\u00007:\u0001\u0000\u0000\u000086\u0001\u0000\u0000\u0000"+
		"89\u0001\u0000\u0000\u00009;\u0001\u0000\u0000\u0000:8\u0001\u0000\u0000"+
		"\u0000;=\u0005\u0003\u0000\u0000<3\u0001\u0000\u0000\u0000<=\u0001\u0000"+
		"\u0000\u0000=h\u0001\u0000\u0000\u0000>?\u0005\u000b\u0000\u0000?@\u0005"+
		"\u0004\u0000\u0000@A\u0003\u0006\u0003\u0000AB\u0005\u0005\u0000\u0000"+
		"BF\u0005\u0002\u0000\u0000CE\u0003\u0002\u0001\u0000DC\u0001\u0000\u0000"+
		"\u0000EH\u0001\u0000\u0000\u0000FD\u0001\u0000\u0000\u0000FG\u0001\u0000"+
		"\u0000\u0000GI\u0001\u0000\u0000\u0000HF\u0001\u0000\u0000\u0000IJ\u0005"+
		"\u0003\u0000\u0000Jh\u0001\u0000\u0000\u0000KO\u0005\u0002\u0000\u0000"+
		"LN\u0003\u0002\u0001\u0000ML\u0001\u0000\u0000\u0000NQ\u0001\u0000\u0000"+
		"\u0000OM\u0001\u0000\u0000\u0000OP\u0001\u0000\u0000\u0000PR\u0001\u0000"+
		"\u0000\u0000QO\u0001\u0000\u0000\u0000Rh\u0005\u0003\u0000\u0000ST\u0005"+
		"\u001d\u0000\u0000TU\u0005\u0015\u0000\u0000UV\u0003\b\u0004\u0000VW\u0005"+
		"\u001c\u0000\u0000Wh\u0001\u0000\u0000\u0000XY\u0003\u0004\u0002\u0000"+
		"YZ\u0005\u001c\u0000\u0000Zh\u0001\u0000\u0000\u0000[\\\u0003\b\u0004"+
		"\u0000\\]\u0005\u001c\u0000\u0000]h\u0001\u0000\u0000\u0000^_\u0005\t"+
		"\u0000\u0000_b\u0005\u0004\u0000\u0000`c\u0003\b\u0004\u0000ac\u0003\u0006"+
		"\u0003\u0000b`\u0001\u0000\u0000\u0000ba\u0001\u0000\u0000\u0000cd\u0001"+
		"\u0000\u0000\u0000de\u0005\u0005\u0000\u0000ef\u0005\u001c\u0000\u0000"+
		"fh\u0001\u0000\u0000\u0000g\u0015\u0001\u0000\u0000\u0000g>\u0001\u0000"+
		"\u0000\u0000gK\u0001\u0000\u0000\u0000gS\u0001\u0000\u0000\u0000gX\u0001"+
		"\u0000\u0000\u0000g[\u0001\u0000\u0000\u0000g^\u0001\u0000\u0000\u0000"+
		"h\u0003\u0001\u0000\u0000\u0000ij\u0005\u0007\u0000\u0000jp\u0005\u001d"+
		"\u0000\u0000kl\u0005\u0007\u0000\u0000lm\u0005\u001d\u0000\u0000mn\u0005"+
		"\u0015\u0000\u0000np\u0003\b\u0004\u0000oi\u0001\u0000\u0000\u0000ok\u0001"+
		"\u0000\u0000\u0000p\u0005\u0001\u0000\u0000\u0000qr\u0006\u0003\uffff"+
		"\uffff\u0000rs\u0003\b\u0004\u0000st\u0005\u0006\u0000\u0000tu\u0003\b"+
		"\u0004\u0000u\u0080\u0001\u0000\u0000\u0000vw\u0005\u0014\u0000\u0000"+
		"wx\u0005\u0004\u0000\u0000xy\u0003\u0006\u0003\u0000yz\u0005\u0005\u0000"+
		"\u0000z\u0080\u0001\u0000\u0000\u0000{|\u0005\u0004\u0000\u0000|}\u0003"+
		"\u0006\u0003\u0000}~\u0005\u0005\u0000\u0000~\u0080\u0001\u0000\u0000"+
		"\u0000\u007fq\u0001\u0000\u0000\u0000\u007fv\u0001\u0000\u0000\u0000\u007f"+
		"{\u0001\u0000\u0000\u0000\u0080\u0089\u0001\u0000\u0000\u0000\u0081\u0082"+
		"\n\u0003\u0000\u0000\u0082\u0083\u0005\u0012\u0000\u0000\u0083\u0088\u0003"+
		"\u0006\u0003\u0004\u0084\u0085\n\u0002\u0000\u0000\u0085\u0086\u0005\u0013"+
		"\u0000\u0000\u0086\u0088\u0003\u0006\u0003\u0003\u0087\u0081\u0001\u0000"+
		"\u0000\u0000\u0087\u0084\u0001\u0000\u0000\u0000\u0088\u008b\u0001\u0000"+
		"\u0000\u0000\u0089\u0087\u0001\u0000\u0000\u0000\u0089\u008a\u0001\u0000"+
		"\u0000\u0000\u008a\u0007\u0001\u0000\u0000\u0000\u008b\u0089\u0001\u0000"+
		"\u0000\u0000\u008c\u008d\u0006\u0004\uffff\uffff\u0000\u008d\u0094\u0005"+
		"\u001e\u0000\u0000\u008e\u0094\u0005\u001d\u0000\u0000\u008f\u0090\u0005"+
		"\u0004\u0000\u0000\u0090\u0091\u0003\b\u0004\u0000\u0091\u0092\u0005\u0005"+
		"\u0000\u0000\u0092\u0094\u0001\u0000\u0000\u0000\u0093\u008c\u0001\u0000"+
		"\u0000\u0000\u0093\u008e\u0001\u0000\u0000\u0000\u0093\u008f\u0001\u0000"+
		"\u0000\u0000\u0094\u009d\u0001\u0000\u0000\u0000\u0095\u0096\n\u0005\u0000"+
		"\u0000\u0096\u0097\u0007\u0000\u0000\u0000\u0097\u009c\u0003\b\u0004\u0006"+
		"\u0098\u0099\n\u0004\u0000\u0000\u0099\u009a\u0007\u0001\u0000\u0000\u009a"+
		"\u009c\u0003\b\u0004\u0005\u009b\u0095\u0001\u0000\u0000\u0000\u009b\u0098"+
		"\u0001\u0000\u0000\u0000\u009c\u009f\u0001\u0000\u0000\u0000\u009d\u009b"+
		"\u0001\u0000\u0000\u0000\u009d\u009e\u0001\u0000\u0000\u0000\u009e\t\u0001"+
		"\u0000\u0000\u0000\u009f\u009d\u0001\u0000\u0000\u0000\u0011\u000f\u001d"+
		")08<FObgo\u007f\u0087\u0089\u0093\u009b\u009d";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}