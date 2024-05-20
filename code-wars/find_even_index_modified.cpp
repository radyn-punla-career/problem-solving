#include <vector>
using namespace std;

int vector_sum(const vector <int> numbers, int start, int end){
  int sum = 0;
  for(int i = start; i <= end; i++){
    sum += numbers[i];
  }
  return sum;
}

int find_even_index (const vector <int> numbers) {
  for (int i = 0; i < numbers.size(); i++){
    if (vector_sum(numbers, 0 , i) == vector_sum(numbers, i+1 , numbers.size())){
      return i;
    }
  }
  return -1;
}