// recursion.cpp
// Bernard Laughlin 4/24/22
// HW5 Assignment

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include "StopWatch.hpp"

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
    if (number == 0){
        return 0;
    } else if (number < 2){
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


void testFib(){
    vector<int> fibCode = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    for (auto i = 0; i < 11; i++){
        if (fib(i) != fibCode.at(i)) {
            cout << "Did not pass test" << endl;
            break;
        }
    }
    cout << "Fib did pass test" << endl;
}

void testFib_loop(){
    vector<int> fibCode = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    for (auto i = 0; i < 11; i++){
        if (fib_loop(i) != fibCode.at(i)) {
            cout << "Did not pass test" << endl;
            break;
        }
    }
    cout << "fib_loop did pass test" << endl;
}

int main() {
    testFib();
    testFib_loop();
    StopWatch timer;
    for (auto i = 1; i <= 100; i++){
        timer.start();
        int a= ack(i, i);
        cout << "Time for " << i << " items is " << timer.getTimeInSeconds().count() << endl;
        timer.stop();
    }

    return 0;
}
