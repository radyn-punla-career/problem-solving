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
  int limit = numbers.size() - 1;
  for (int i = 0; i <= limit; i++){
    if (vector_sum(numbers, 0 , i) == vector_sum(numbers, i , limit)){
      return i;
    }
  }
  return -1;
}