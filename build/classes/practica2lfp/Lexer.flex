package practica2lfp;
import static practica2lfp.Token.*;
%%
%class Lexer
%type Token
L=[a-zA-Z_]
D=[0-9]
S=[* + / - ( ) { } # < > << >> ; . = " & % ]

WHITE=[ \t\r\n]
%{
public String lexeme;
%}
%%
{WHITE} {/* ignore */}
"//".* {/* ignore */}
{L}?{S}*{lexeme=yytext();return ID;}
{L}({D}|{L})* {lexeme=yytext(); return ID;}
{L}({L}|{D})* {lexeme=yytext(); return ID;}
{S}?{D}+ {lexeme=yytext();return INT;}
{D}?{S}+ {lexeme=yytext();return INT;}
{S} {lexeme=yytext(); return SIGNO}
. {return ERROR;}