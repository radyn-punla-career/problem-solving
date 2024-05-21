/*
Write a function that takes an array of numbers (integers for the tests) and a target number.
It should find two different items in the array that, when added together, give the target value. 
The indices of these items should then be returned in a tuple / list like so: (index1, index2).
*/

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  // go through all possible combinations using nested loop
  for (int i = 0; i < numbers.size(); i++){
    for (int j = i+1; j < numbers.size(); j ++){
      if (numbers[i] + numbers[j] == target){
        return {i, j};
      }
    } 
  }
  return {0, 0};
}