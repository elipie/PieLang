#ifndef LEXER_h
#define LEXER_h

struct Token{
  std::string type;
  std::string value; // This means i will turn it into a string example: 2 would turn into "2"
  // other 
  int line;
};

enum class Types{
  Number,
  DoubleQuote,
  Quote,
  Initializer,
  LessThan,
  LargerThan,
  Equal,
  SlashOrComment,
  AtOrReturn,
  Pipe,
  LParen,
  RParen,
  LCurly,
  RCurly,
  RBracket,
  LBracket,
  Colon,
  SemiColon,
  Star,
  Plus,
  Caret,
  //more later.
};

struct Lexer{
    int i = 0;
    std::string code;
    int mainLexer();
    char peek();
    char curr();
};

int stringify(int intorsomething);

#endif