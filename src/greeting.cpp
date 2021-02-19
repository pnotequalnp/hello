#include "greeting.hpp"

std::string getGreeting(const std::string &name) {
  const auto salutation = "Hello ";
  const auto punctuation = "!";
  return salutation + name + punctuation;
}
