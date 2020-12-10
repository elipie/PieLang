#include <iostream>

std::string file;
int setup() {
  std::cout << "Filename: ";
  std::cin >> file; //must find different way.
  return 0;
}
