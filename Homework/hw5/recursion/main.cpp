// recursion.cpp
// Bernard Laughlin 4/24/22
// HW5 Assignment

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

// iterative solution to fibonacci
int fib_loop(int number){
    vector<int> sequence = {0,1};
    for (auto i = 2; i <= number; i++){
        sequence.push_back(sequence.at(i-2) + sequence.at(i-1));
    }
return sequence.at(number);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << fib_loop(4);
    return 0;
}
