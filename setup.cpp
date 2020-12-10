#include <fstream>
int setup(){
  std::ofstream main;
  main.open("tests.pie"); // once release, we change this to main.pie
  return 0; // if tests.pie does not exist, throw an error
}
