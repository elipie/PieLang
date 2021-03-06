// Lexer.cpp
#include <iostream>
#include "error.h"
#include "setup.h"
#include "Lexer.h"
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <variant>
//std::vector<std::string> tokenstream;
typedef std::map<std::variant<int, std::string>, std::variant<int, std::string>> Dict;

int nums[10] = {0,1,2,3,4,5,6,7,8,9};
int Lexer::mainLexer(){
    Dict tokenstream;
    int line = 0;
    int pmakeSurePlease = 0;
    std::string reserved[14] = {"out","get","if", "elsif", "els", "do", "while", "true", "false", "func", "i32", "str", "char","null"}; // and will be && and or will be ||
    int placeholder = 0;
    std::ifstream pie_file("tests.pie");
    std::string tp;
    // std::string code;
    while(getline(pie_file, tp)){
       
        code += tp;
        code += '\n';
        /*      

        */
    }


    for (; i < code.size(); i++) {
        
        char c = code[i];
        std::cout << c << std::endl;
        if(c == '/' && peek() == '/') {
            while (curr() != '\n') i++;
        } else {
            switch (c) {
              case '+':
                tokenstream["PLUS: "] = c; // find out how to append the plus
              case '-':
              //case isdigit(c):
              //  tokenstream.push_back("NUMBER");
              //case isalpha(c):
              //  tokenstream.push_back("INITI");
              case '*':
                tokenstream["STAR"] = c;

              case '/':
                tokenstream["DIV"] =c;
              case ' ':
                continue;
              case '\n':
                continue;
              case '\r':
                continue;

              case 'a':
              case 'b':
              case 'c':
              case 'd':
              case 'e':
              case 'f':
              case 'g': 
              case 'h':
              case 'j':
              case 'i':
              case 'k':
              case 'l':
              case 'm':
              case 'n':
              
              case 'p':
              case 'q':
              case 'r':
              case 's':
              case 'u':
              case 't':
              case 'v':
              case 'w':
              case 'y':
              case 'x':
              case 'z':
              case 'A':
              case 'B':
              case 'C':
              case 'D':
              case 'E':
              case 'F':
              case 'G':
              case 'H':
              case 'I':
              case 'J':
              case 'K':
              case 'L':
              case 'M':
              case 'N':
              case 'O':
              case 'P':
              case 'Q':
              case 'R':
              case 'S':
              case 'W':
              case 'X':
              case 'Y':
              case 'Z':
                while( c != ' '){
                  pmakeSurePlease++;
                  // explaination: notice: it starts when it sees a character then adds it to the array. 


                  
                  std::string holder[100000] = {};
                  holder[pmakeSurePlease] = c;
                  // get whole string:
                  for(int i = 0; i++;){
                    // holder[i]
                  }
                }
                
                //std::string full_string = 
                tokenstream["INITI"] = c;
              
              //case 1:
              //case 0:
              //case 2:
              //case 3:
              //case 4:
              //case 5:
              //case 6:
              //case 7:
              //case 8:
              //case 9:
                //tokenstream.push_back("ONE_NUMBER");
              
              case '\t':
                continue;
              
              case '(':
                tokenstream["LPAREN"] = c;
              case ')':
                tokenstream["RPAREN"] =c;
              case  '[':
                tokenstream["LBRACKET"] =c;
              case ']':
                tokenstream["RBRACKET"] =c;
              case '{':
                tokenstream["LCURLY"] = c;
              case '}':
                tokenstream["RCURLY"] = c;
              case '<':
                tokenstream["LESS_THAN"] = c;
              case '>':
                tokenstream["LARGER_THAN"] = c;

              case '&':
                if(c == '&' && peek() == '&'){
                  while(curr() != '\n')i++;
                  tokenstream["AND"] = "||";
                }else{
                  tokenstream["ANDSYMBOL: "]=c;
                }
              case '|':
                if(c == '|' && peek() == '|'){
                  while(curr() != '\n')
                  tokenstream["OR"] = "||";
                }else{
                  tokenstream["PIPE"]=c;
                }
              case ';':
                tokenstream["EOL"] = c;
              case 'o':
                if(c == 'o'&& peek() == 'u'){
                  if (c == 'u' && peek() == 't'){
                    while(curr()!= '\n')
                    tokenstream["PRINT_STATEMENT"] = "out";
                  }
                }

              
              default:
                Errors::UnknownToken(c, line);
              

            } 
        }
      for(auto& k_v: tokenstream){
        std::visit(
            [](auto& value){std::cout << "\n" << value << '\n';},
            k_v.second // k_v.first to print all keys in d
        );
    }  
        // if()
        // std::cout.flush();
    }
    
    return 0;
}
//char Lexer::prev(){
  //  return code[i-1];
//}

char Lexer::peek() {
    return code[i+1];
}

char Lexer::curr() {
    return code[i];
}

int stringify(int intorsomething) {
  std::to_string(intorsomething);
  return 0;
}
