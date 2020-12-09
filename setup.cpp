#include <iostream>

std::string file;
int setup() {
  std::cout << "Filename: ";
  std::cin >> file;
  return 0;
}
