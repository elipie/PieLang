#include <iostream>
namespace Errors{
  
    int SyntaxError(std::string msg, int line){
      std::cout << "Syntax Error near line " << line << "\n "<< msg;
      return 1;

    }

    int UnexpectedEOL(std::string msg, int line){
      std::cout << " Unexpected EOL(end of line) near line "<<line<<"\n"<<msg;
      return 1;

    }
};
