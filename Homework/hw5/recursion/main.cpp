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

// recursive solution to fibonacci
int fib(int number){
    if (number < 2){
        return number;
    }
    return fib(number - 1) + fib(number - 2);
}

// ackerman function
int ack(int  m, int n){
    if (m == 0){
        return n + 1;
    }
    else if( (m>0) && (n==0) ){
        return ack(m-1, 1);
    }
    else if ( (m > 0) && (n > 0) ){
        return ack(m-1, ack(m, n-1));
    }
}



int main() {
    cout << fib_loop(4) << endl;
    cout  << fib(4) <<endl;
    int A;
    A = ack(100, 200);
    cout << A << endl;
    return 0;
}
