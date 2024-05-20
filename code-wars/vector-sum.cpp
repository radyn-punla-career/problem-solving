#include <iostream>
#include <vector>
using namespace std;

int vector_sum(const vector <int> numbers, int start, int end){
    int sum = 0;
    for(int i = start; i <= end; i++){
        sum += numbers[i];
    }
    return sum;
}

int main(){
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(3);
    num.push_back(2);
    num.push_back(1);

    int limit = num.size() - 1;

    for (int i = 0; i < limit; i++){
        if (vector_sum(num, 0 , i) == vector_sum(num, i , limit)){
            cout <<  i << " p";
        }
    }

    cout << -1;
    

    // for(int n:num){
    //     cout << n << endl;
    // }
    return 0;
}