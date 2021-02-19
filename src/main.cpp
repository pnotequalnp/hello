#include "greeting.hpp"
#include <iostream>

int main() {
  std::cout << "What is your name?" << std::endl << "> ";
  std::flush(std::cout);
  std::string name;
  std::cin >> name;
  const auto greeting = getGreeting(name);
  std::cout << greeting << std::endl;
}
