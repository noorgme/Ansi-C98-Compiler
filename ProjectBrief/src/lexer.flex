%option noyywrap


%{
/* Now in a section of C that will be embedded
   into the auto-generated code. Flex will not
   try to interpret code surrounded by %{ ... %} */

/* Bring in our declarations for token types and
   the yylval variable. */
#include "../include/lexer.hpp"


// This is to work around an irritating bug in Flex
// https://stackoverflow.com/questions/46213840/get-rid-of-warning-implicit-declaration-of-function-fileno-in-flex
extern "C" int fileno(FILE *stream);

/* End the embedded code section. */
%}


%%


[int]+|[if]+|[while]+|[for]+|[return]+|[float]+|[double]+|[char]+|[bool]+|[void]+|[do]+|[else]+|[struct]+|[switch]+|[continue]+|[sizeof]+|[enum]+|[register]+ { 
   yylval.keywordVal = new std::string(yytext);
   return Keyword; 
}
[1-9]+ { //TODO
    yylval.intVal = std::stod(yytext);
    return intLiteral;
}
[}]|[{]|[)]|[(]|[\[]|[\]] {
   yylval.punctuatorVal = strdup(yytext);
   if (*(yylval.punctuatorVal) == '('){
      return leftBracket;
   }
   else if (*(yylval.punctuatorVal) == ')'){
      return rightBracket;
   }
   else if (*(yylval.punctuatorVal) == '{'){
      return leftBrace;
   }
   else if (*(yylval.punctuatorVal) == '}'){
      return rightBrace;
   }
   else if (*(yylval.punctuatorVal) == '['){
      return leftsqBracket;
   }
   else if (*(yylval.punctuatorVal) == ']'){
      return rightsqBracket;
   }
   else{
      return -1;
   }
}

[a-zA-Z_]+ {
   yylval.identifierVal = new std::string(yytext);
   return Identifier; 
}

[ \t\r\n]+		{;}




%%

/* Error handler. This will get called if none of the rules match. */
void yyerror (char const *s)
{
  fprintf (stderr, "Flex Error: %s\n", s); /* s is the text that wasn't matched */
  exit(1);
}
