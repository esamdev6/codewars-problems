// created by Muhammad Esam 
//Date 24 November 2026

#include <string>
using namespace std;

std::string greet(const std::string& name, const std::string& owner) {
  if(name==owner)
    return "Hello boss";
  else
  return "Hello guest";
}
