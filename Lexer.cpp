#include <iostream>
#include "setup.h"

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
class lexer{
  int mainLexer(){
    for(int line = 0; line > 0 ; line++){
      //place holder.
    }
    return 0;
  }  
};
