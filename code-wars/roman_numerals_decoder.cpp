#include <iostream>
#include <string>

using namespace std;

int solution(string roman) {
  int arabic = 0;
  
  for(int i = 0; i < roman.length(); i++){
    if(roman[i] == 'M'){
      arabic += 1000;
      if(roman[i-1] == 'C'){
        arabic += -100*2;
      }
    }
    else if(roman[i] == 'D'){
      arabic += 500;
      if(roman[i-1] == 'C'){
        arabic += -100*2;
      }
    }
    else if(roman[i] == 'C'){
      arabic += 100;
      if(roman[i-1] == 'X'){
        arabic += -10*2;
      }
    }
    else if(roman[i] == 'L'){
      arabic += 50;
      if(roman[i-1] == 'X'){
        arabic += -10*2;
      }
    }
    else if(roman[i] == 'X'){
      arabic += 10;
      if(roman[i-1] == 'I'){
        arabic += -1*2;
      }
    }
    else if(roman[i] == 'V'){
      arabic += 5;
      if(roman[i-1] == 'I'){
        arabic += -1*2;
      }
    }
    else if(roman[i] == 'I'){
      arabic += 1;
    }    
  }
  
  // Your code here
  return arabic;
}