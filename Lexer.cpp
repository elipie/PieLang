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
#include <regex>
//std::vector<std::string> tokenstream;
typedef std::map<std::variant<int, std::string>, std::variant<int, std::string>> Dict;

int nums[10] = {0,1,2,3,4,5,6,7,8,9};
int Lexer::mainLexer(){
    Dict tokenstream;
    int line = 0;
    std::vector < std::string > lines{};
    std::string reserved[14] = {"out","get","if", "elsif", "els", "do", "while", "true", "false", "func", "i32", "str", "char","null"}; // and will be && and or will be ||
    int placeholder = 0;
    std::ifstream pie_file("tests.pie");
    std::string tp;
    std::string code;
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
          if (c == ';'){
            
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
    

}
char Lexer::peek() {
    return code[i+1];
}

char Lexer::curr() {
    return code[i];
}

