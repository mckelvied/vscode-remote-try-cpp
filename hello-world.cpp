#include <iostream>
using namespace std;

int main() {
  #if defined(__linux__) // Or #if __linux__
  std::cout << "Hello, GNU/Linux!" << '\n';
  #elif _WIN32
  std::cout << "Hello, Windows!" << '\n';
  #else
  std::cout << "Hello, Other!" << '\n';
  #endif
  
  return 0;
}