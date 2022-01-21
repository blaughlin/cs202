// stopWatch1.cpp
// Bernard Laughlin 11/20/21
// Times how fast search and binary search run with StopWatch class keeping track of time.

#include <iostream>
#include <vector>
using std::vector;
#include <random>
using std::random_device;
using std::mt19937;
#include <algorithm>
using std::shuffle;
//#include <chrono>
#include "StopWatch.hpp"

// Creates a random amount of numbers determined by user.
vector<int> createRandomValues(int size){
    mt19937 gen(7);
    vector<int> result;
    for (int i = 0; i < size; i++){
        result.push_back(i);
    }
    shuffle(begin(result), end(result), gen);
    return result;
}

int main() {
    StopWatch timer;
    vector<int> million = createRandomValues(1000000);
    std::cout << "Hello, World!" << std::endl;
    timer.stop();
    std::cout << timer.getTimeInMilliseconds() << std::endl;
    std::cout << timer.getTimeInSeconds() << std::endl;
    return 0;
}
