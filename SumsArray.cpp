// Created by Muhammad Esam 
// Dated 25 November 2026

#include <vector>

int sum(const std::vector<int> &nums) {
  // your code here
  int sum=0;
  for(int i=0;i<nums.size();i++){
    sum=sum+nums[i];
  }
    return sum;
}
