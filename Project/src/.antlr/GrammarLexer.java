// Generated from /home/swiftfeetstallion/compilers/Project/src/Grammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class GrammarLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, EVALOP=6, TYPE=7, VOID=8, PRINT=9, 
		IF=10, WHILE=11, ELSE=12, ELIF=13, ADD=14, SUB=15, MUL=16, DIV=17, AND=18, 
		OR=19, NOT=20, ASSIGN=21, EQUAL=22, NO_EQUAL=23, LESS=24, LESSEQ=25, GREATER=26, 
		GREATEREQ=27, SEMICOLON=28, ID=29, NUM=30, LINECOMMENT=31, WS=32;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "EVALOP", "TYPE", "VOID", "PRINT", 
			"IF", "WHILE", "ELSE", "ELIF", "ADD", "SUB", "MUL", "DIV", "AND", "OR", 
			"NOT", "ASSIGN", "EQUAL", "NO_EQUAL", "LESS", "LESSEQ", "GREATER", "GREATEREQ", 
			"SEMICOLON", "ID", "NUM", "LINECOMMENT", "WS"
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


	public GrammarLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Grammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000 \u00c5\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007"+
		"\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b"+
		"\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002"+
		"\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002"+
		"\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002"+
		"\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002"+
		"\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002"+
		"\u001b\u0007\u001b\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002"+
		"\u001e\u0007\u001e\u0002\u001f\u0007\u001f\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002\u0001"+
		"\u0002\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0003\u0005[\b"+
		"\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f"+
		"\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001"+
		"\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0017\u0001\u0017\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0019\u0001"+
		"\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001b\u0001\u001b\u0001"+
		"\u001c\u0004\u001c\u00a7\b\u001c\u000b\u001c\f\u001c\u00a8\u0001\u001d"+
		"\u0001\u001d\u0001\u001d\u0005\u001d\u00ae\b\u001d\n\u001d\f\u001d\u00b1"+
		"\t\u001d\u0003\u001d\u00b3\b\u001d\u0001\u001e\u0001\u001e\u0001\u001e"+
		"\u0001\u001e\u0004\u001e\u00b9\b\u001e\u000b\u001e\f\u001e\u00ba\u0001"+
		"\u001e\u0001\u001e\u0001\u001f\u0004\u001f\u00c0\b\u001f\u000b\u001f\f"+
		"\u001f\u00c1\u0001\u001f\u0001\u001f\u0000\u0000 \u0001\u0001\u0003\u0002"+
		"\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013"+
		"\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f\u001f\u0010!\u0011"+
		"#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017/\u00181\u00193\u001a5\u001b"+
		"7\u001c9\u001d;\u001e=\u001f? \u0001\u0000\u0005\u0003\u0000AZ__az\u0001"+
		"\u000009\u0001\u000019\u0002\u0000\n\n\r\r\u0003\u0000\t\n\r\r  \u00ce"+
		"\u0000\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000"+
		"\u0000\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000"+
		"\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000"+
		"\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011"+
		"\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015"+
		"\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019"+
		"\u0001\u0000\u0000\u0000\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d"+
		"\u0001\u0000\u0000\u0000\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001"+
		"\u0000\u0000\u0000\u0000#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000"+
		"\u0000\u0000\'\u0001\u0000\u0000\u0000\u0000)\u0001\u0000\u0000\u0000"+
		"\u0000+\u0001\u0000\u0000\u0000\u0000-\u0001\u0000\u0000\u0000\u0000/"+
		"\u0001\u0000\u0000\u0000\u00001\u0001\u0000\u0000\u0000\u00003\u0001\u0000"+
		"\u0000\u0000\u00005\u0001\u0000\u0000\u0000\u00007\u0001\u0000\u0000\u0000"+
		"\u00009\u0001\u0000\u0000\u0000\u0000;\u0001\u0000\u0000\u0000\u0000="+
		"\u0001\u0000\u0000\u0000\u0000?\u0001\u0000\u0000\u0000\u0001A\u0001\u0000"+
		"\u0000\u0000\u0003L\u0001\u0000\u0000\u0000\u0005N\u0001\u0000\u0000\u0000"+
		"\u0007P\u0001\u0000\u0000\u0000\tR\u0001\u0000\u0000\u0000\u000bZ\u0001"+
		"\u0000\u0000\u0000\r\\\u0001\u0000\u0000\u0000\u000f`\u0001\u0000\u0000"+
		"\u0000\u0011e\u0001\u0000\u0000\u0000\u0013k\u0001\u0000\u0000\u0000\u0015"+
		"n\u0001\u0000\u0000\u0000\u0017t\u0001\u0000\u0000\u0000\u0019y\u0001"+
		"\u0000\u0000\u0000\u001b\u0081\u0001\u0000\u0000\u0000\u001d\u0083\u0001"+
		"\u0000\u0000\u0000\u001f\u0085\u0001\u0000\u0000\u0000!\u0087\u0001\u0000"+
		"\u0000\u0000#\u0089\u0001\u0000\u0000\u0000%\u008c\u0001\u0000\u0000\u0000"+
		"\'\u008f\u0001\u0000\u0000\u0000)\u0091\u0001\u0000\u0000\u0000+\u0093"+
		"\u0001\u0000\u0000\u0000-\u0096\u0001\u0000\u0000\u0000/\u0099\u0001\u0000"+
		"\u0000\u00001\u009b\u0001\u0000\u0000\u00003\u009e\u0001\u0000\u0000\u0000"+
		"5\u00a0\u0001\u0000\u0000\u00007\u00a3\u0001\u0000\u0000\u00009\u00a6"+
		"\u0001\u0000\u0000\u0000;\u00b2\u0001\u0000\u0000\u0000=\u00b4\u0001\u0000"+
		"\u0000\u0000?\u00bf\u0001\u0000\u0000\u0000AB\u0005i\u0000\u0000BC\u0005"+
		"n\u0000\u0000CD\u0005t\u0000\u0000DE\u0005 \u0000\u0000EF\u0005m\u0000"+
		"\u0000FG\u0005a\u0000\u0000GH\u0005i\u0000\u0000HI\u0005n\u0000\u0000"+
		"IJ\u0005(\u0000\u0000JK\u0005)\u0000\u0000K\u0002\u0001\u0000\u0000\u0000"+
		"LM\u0005{\u0000\u0000M\u0004\u0001\u0000\u0000\u0000NO\u0005}\u0000\u0000"+
		"O\u0006\u0001\u0000\u0000\u0000PQ\u0005(\u0000\u0000Q\b\u0001\u0000\u0000"+
		"\u0000RS\u0005)\u0000\u0000S\n\u0001\u0000\u0000\u0000T[\u0003+\u0015"+
		"\u0000U[\u0003-\u0016\u0000V[\u0003/\u0017\u0000W[\u00031\u0018\u0000"+
		"X[\u00033\u0019\u0000Y[\u00035\u001a\u0000ZT\u0001\u0000\u0000\u0000Z"+
		"U\u0001\u0000\u0000\u0000ZV\u0001\u0000\u0000\u0000ZW\u0001\u0000\u0000"+
		"\u0000ZX\u0001\u0000\u0000\u0000ZY\u0001\u0000\u0000\u0000[\f\u0001\u0000"+
		"\u0000\u0000\\]\u0005i\u0000\u0000]^\u0005n\u0000\u0000^_\u0005t\u0000"+
		"\u0000_\u000e\u0001\u0000\u0000\u0000`a\u0005v\u0000\u0000ab\u0005o\u0000"+
		"\u0000bc\u0005i\u0000\u0000cd\u0005d\u0000\u0000d\u0010\u0001\u0000\u0000"+
		"\u0000ef\u0005p\u0000\u0000fg\u0005r\u0000\u0000gh\u0005i\u0000\u0000"+
		"hi\u0005n\u0000\u0000ij\u0005t\u0000\u0000j\u0012\u0001\u0000\u0000\u0000"+
		"kl\u0005i\u0000\u0000lm\u0005f\u0000\u0000m\u0014\u0001\u0000\u0000\u0000"+
		"no\u0005w\u0000\u0000op\u0005h\u0000\u0000pq\u0005i\u0000\u0000qr\u0005"+
		"l\u0000\u0000rs\u0005e\u0000\u0000s\u0016\u0001\u0000\u0000\u0000tu\u0005"+
		"e\u0000\u0000uv\u0005l\u0000\u0000vw\u0005s\u0000\u0000wx\u0005e\u0000"+
		"\u0000x\u0018\u0001\u0000\u0000\u0000yz\u0005e\u0000\u0000z{\u0005l\u0000"+
		"\u0000{|\u0005s\u0000\u0000|}\u0005e\u0000\u0000}~\u0005 \u0000\u0000"+
		"~\u007f\u0005i\u0000\u0000\u007f\u0080\u0005f\u0000\u0000\u0080\u001a"+
		"\u0001\u0000\u0000\u0000\u0081\u0082\u0005+\u0000\u0000\u0082\u001c\u0001"+
		"\u0000\u0000\u0000\u0083\u0084\u0005-\u0000\u0000\u0084\u001e\u0001\u0000"+
		"\u0000\u0000\u0085\u0086\u0005*\u0000\u0000\u0086 \u0001\u0000\u0000\u0000"+
		"\u0087\u0088\u0005/\u0000\u0000\u0088\"\u0001\u0000\u0000\u0000\u0089"+
		"\u008a\u0005&\u0000\u0000\u008a\u008b\u0005&\u0000\u0000\u008b$\u0001"+
		"\u0000\u0000\u0000\u008c\u008d\u0005|\u0000\u0000\u008d\u008e\u0005|\u0000"+
		"\u0000\u008e&\u0001\u0000\u0000\u0000\u008f\u0090\u0005!\u0000\u0000\u0090"+
		"(\u0001\u0000\u0000\u0000\u0091\u0092\u0005=\u0000\u0000\u0092*\u0001"+
		"\u0000\u0000\u0000\u0093\u0094\u0005=\u0000\u0000\u0094\u0095\u0005=\u0000"+
		"\u0000\u0095,\u0001\u0000\u0000\u0000\u0096\u0097\u0005!\u0000\u0000\u0097"+
		"\u0098\u0005=\u0000\u0000\u0098.\u0001\u0000\u0000\u0000\u0099\u009a\u0005"+
		"<\u0000\u0000\u009a0\u0001\u0000\u0000\u0000\u009b\u009c\u0005<\u0000"+
		"\u0000\u009c\u009d\u0005=\u0000\u0000\u009d2\u0001\u0000\u0000\u0000\u009e"+
		"\u009f\u0005>\u0000\u0000\u009f4\u0001\u0000\u0000\u0000\u00a0\u00a1\u0005"+
		">\u0000\u0000\u00a1\u00a2\u0005=\u0000\u0000\u00a26\u0001\u0000\u0000"+
		"\u0000\u00a3\u00a4\u0005;\u0000\u0000\u00a48\u0001\u0000\u0000\u0000\u00a5"+
		"\u00a7\u0007\u0000\u0000\u0000\u00a6\u00a5\u0001\u0000\u0000\u0000\u00a7"+
		"\u00a8\u0001\u0000\u0000\u0000\u00a8\u00a6\u0001\u0000\u0000\u0000\u00a8"+
		"\u00a9\u0001\u0000\u0000\u0000\u00a9:\u0001\u0000\u0000\u0000\u00aa\u00b3"+
		"\u0007\u0001\u0000\u0000\u00ab\u00af\u0007\u0002\u0000\u0000\u00ac\u00ae"+
		"\u0007\u0001\u0000\u0000\u00ad\u00ac\u0001\u0000\u0000\u0000\u00ae\u00b1"+
		"\u0001\u0000\u0000\u0000\u00af\u00ad\u0001\u0000\u0000\u0000\u00af\u00b0"+
		"\u0001\u0000\u0000\u0000\u00b0\u00b3\u0001\u0000\u0000\u0000\u00b1\u00af"+
		"\u0001\u0000\u0000\u0000\u00b2\u00aa\u0001\u0000\u0000\u0000\u00b2\u00ab"+
		"\u0001\u0000\u0000\u0000\u00b3<\u0001\u0000\u0000\u0000\u00b4\u00b5\u0005"+
		"/\u0000\u0000\u00b5\u00b6\u0005/\u0000\u0000\u00b6\u00b8\u0001\u0000\u0000"+
		"\u0000\u00b7\u00b9\b\u0003\u0000\u0000\u00b8\u00b7\u0001\u0000\u0000\u0000"+
		"\u00b9\u00ba\u0001\u0000\u0000\u0000\u00ba\u00b8\u0001\u0000\u0000\u0000"+
		"\u00ba\u00bb\u0001\u0000\u0000\u0000\u00bb\u00bc\u0001\u0000\u0000\u0000"+
		"\u00bc\u00bd\u0006\u001e\u0000\u0000\u00bd>\u0001\u0000\u0000\u0000\u00be"+
		"\u00c0\u0007\u0004\u0000\u0000\u00bf\u00be\u0001\u0000\u0000\u0000\u00c0"+
		"\u00c1\u0001\u0000\u0000\u0000\u00c1\u00bf\u0001\u0000\u0000\u0000\u00c1"+
		"\u00c2\u0001\u0000\u0000\u0000\u00c2\u00c3\u0001\u0000\u0000\u0000\u00c3"+
		"\u00c4\u0006\u001f\u0000\u0000\u00c4@\u0001\u0000\u0000\u0000\u0007\u0000"+
		"Z\u00a8\u00af\u00b2\u00ba\u00c1\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}