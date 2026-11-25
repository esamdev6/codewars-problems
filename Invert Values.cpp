// Created by Muhammad Esam 
// Dte 25 november 2026

#include <vector>

std::vector<int> invert(std::vector<int> values)
{
  for(int i=0;i<values.size();i++){
    values[i]=values[i]*(-1);
  }
    return values;
}
