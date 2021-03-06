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
    int UnexpectedEOF(std::string msg, int line){
      
        std::cout << "Unexpected EOF(end of file) near line "<<line<<"\n"<<msg;
        return 1;

    }
    int UnknownToken(char token, int line){
        std::cout << "Unknown token: "<< token << " on line " << line;  
      
        return 1;

    }
    int ParserError(std::string msg, int line)
    {
        std::cout << "ParserError: On line " << line << ".\n"<<msg;
        return 1;
    }
    int InterpreterError(std::string msg, int line){
      std::cout << "InterpreterError: On line " << line << ".\n"<<msg;
      return 1;
      
    }
    

};
