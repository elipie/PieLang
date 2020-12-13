// Lexer.cpp
#include <iostream>
#include "error.h"
#include "setup.h"
#include "Lexer.h"
#include <string>
#include <fstream>
#include <vector>
std::vector<std::string> tokenstream;

int nums[10] = {0,1,2,3,4,5,6,7,8,9};
int Lexer::mainLexer(){


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
                tokenstream.push_back("PLUS"); // find out how to append the plus
              case '-':
                tokenstream.push_back("MINUCE");
              //case isdigit(c):
              //  tokenstream.push_back("NUMBER");
              //case isalpha(c):
              //  tokenstream.push_back("INITI");
              case '*':
                tokenstream.push_back("MUL");
              case '/':
                tokenstream.push_back("DIV");
              case ' ':
                continue;
              case '\n':
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
              case 'o':
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
                tokenstream.push_back("INITI");
              case 1:
              case 0:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
                tokenstream.push_back("ONE_NUMBER");

              default:
                Errors::UnknownToken(c, 0);
              

            }
        }
        // if()
        // std::cout.flush();
    }
    
    return 0;
}

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