#ifndef _REDY_LEXICAL_TOKEN_H_
#define _REDY_LEXICAL_TOKEN_H_

#define KEYWORD_NUM (TOKEN_FALSE-TOKEN_AND+1)

enum REDY_TOKEN
{

	TOKEN_UNKOWN=0,
	TOKEN_ERR,

	/*base type*/
	TOKEN_INTEGER, 
#define	TOKEN_BIN TOKEN_INTEGER 
#define	TOKEN_OCT TOKEN_INTEGER
#define	TOKEN_DEC TOKEN_INTEGER
#define	TOKEN_HEX TOKEN_INTEGER 
	TOKEN_LONG,
	TOKEN_FLOAT,
#define	TOKEN_EXP_FLOAT TOKEN_FLOAT
	TOKEN_STRING,
	TOKEN_ID,

	/* delimiter */
	TOKEN_DOLLAR,
	TOKEN_COMMA,
	TOKEN_PERIOD,
	TOKEN_L_RB,
	TOKEN_R_RB,
	TOKEN_L_SB,
	TOKEN_R_SB,

	/* expr operator and assign */
	TOKEN_ASSIGN,
	TOKEN_A_MUL,
	TOKEN_A_DIVIDE,
	TOKEN_A_MOD,
	TOKEN_A_PLUS,
	TOKEN_A_MINUS,
	TOKEN_A_LS,
	TOKEN_A_RS,
	TOKEN_A_BITS_AND,
	TOKEN_A_BITS_OR,
	TOKEN_A_BITS_XOR,

	/*expr operator*/
	TOKEN_MUL,
	TOKEN_DIVIDE,
	TOKEN_MOD,
	TOKEN_PLUS,
	TOKEN_MINUS,
	TOKEN_LS,
	TOKEN_RS,
	TOKEN_BITS_AND,
	TOKEN_BITS_OR,
	TOKEN_BITS_XOR,
	TOKEN_REVERSE,
	TOKEN_LT,
	TOKEN_LE,
	TOKEN_NOT_EQUAL,
	TOKEN_EQUAL,
	TOKEN_GE,
	TOKEN_GT,
	
	/*sentence break (sb)*/
	TOKEN_SEMI,
	TOKEN_NEWLINE,

	/*keyword*/

	TOKEN_AND,
	TOKEN_AS,
	TOKEN_ATTR,
	TOKEN_BREAK,
	TOKEN_CATCH,
	TOKEN_CLASS,
	TOKEN_CONTIUNE,
	TOKEN_DO,
	TOKEN_ELIF,
	TOKEN_ELSE,
	TOKEN_END,
	TOKEN_EXPORT,
	TOKEN_FINALLY,
	TOKEN_FOR,
	TOKEN_FROM,
	TOKEN_FUNC,
	TOKEN_IF,
	TOKEN_IMPORT,
	TOKEN_IN,
	TOKEN_INHRIT,
	TOKEN_NEW,
	TOKEN_NOT,
	TOKEN_OR,
	TOKEN_PRINT,
	TOKEN_PRIVATE,
	TOKEN_PROTECTED,
	TOKEN_PUBLIC,
	TOKEN_RETURN,
	TOKEN_STATIC,
	TOKEN_THEN,
	TOKEN_TO,
	TOKEN_TRY,
	TOKEN_VFUNC,
	TOKEN_WHILE,
	TOKEN_TRUE,
	TOKEN_FALSE,

	/*annotate*/
	TOKEN_ANNO,
		
	/*white space (ws)*/
	TOKEN_WS,
};


extern char* token_info[];
static inline char* token_name(int token)
{
	return  token_info[token];
}

#endif /*_REDY_LEXICAL_TOKEN_H_*/


