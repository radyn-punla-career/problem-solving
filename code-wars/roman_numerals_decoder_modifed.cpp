#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> nums = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

int solution(string roman) {
  int arabic = 0;
  
  for(int i = 0; i < roman.length(); i++){
    arabic += nums[roman[i]];
    if(i > 0 && nums[roman[i]] > nums[roman[i - 1]]){
      arabic += nums[roman[i -1]] * -2;
    }
  }
  return arabic;
}