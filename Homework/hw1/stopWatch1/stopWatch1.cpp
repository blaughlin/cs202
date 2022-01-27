// stopWatch1.cpp
// Bernard Laughlin 11/20/21
// Times how fast search and binary search run with StopWatch class keeping track of time.

#include <iostream>
using std::cout;
using std::endl;
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
void randomNumberGenerator(int size, vector<int> & data){
    std::mt19937 gen(7);
    std::uniform_int_distribution<int> dist(0, size -1);
    for (auto i = 0; i < size; i++){
        data.push_back(dist(gen));
    }
}

void timeSequential(const vector<int> & data, float trials, int toFind) {
    vector<float> times;
    StopWatch timer;
    for (auto i = 0; i < trials; i++) {
        timer.start();
        auto found = std::find(data.begin(), data.end(), toFind);
        timer.stop();
        times.push_back(timer.getTimeInSeconds().count());
    }

    float totalTime = 0;
    // calculate mean time
    for (auto i : times) {
        totalTime += i;
    }
    cout << "Average time is " << totalTime/trials << endl;
}

//void timeBinary(const vector<int> & data, float trials, int toFind) {
//    vector<float> times;
//    StopWatch timer;
//    for (auto i = 0; i < trials; i++) {
//        timer.start();
//        auto found = std::binary_search(data.begin(), data.end(), toFind);
//        timer.stop();
//        times.push_back(timer.getTimeInSeconds().count());
//    }
//
//    float totalTime = 0;
//    // calculate mean time
//    for (auto i : times) {
//        totalTime += i;
//    }
//    cout << "Average time is " << totalTime/trials << endl;
//
//}
//
//void timeMaxElement(const vector<int> & data, float trials) {
//    vector<float> times;
//    StopWatch timer;
//    for (auto i = 0; i < trials; i++) {
//        timer.start();
//        auto found = std::max_element(data.begin(), data.end());
//        timer.stop();
//        times.push_back(timer.getTimeInSeconds().count());
//    }
//
//    float totalTime = 0;
//    // calculate mean time
//    for (auto i : times) {
//        totalTime += i;
//    }
//    cout << "Average time is " << totalTime/trials << endl;
//}
//
//void timeFind(const vector<int> & data, float trials, int toFind) {
//    vector<float> times;
//    StopWatch timer;
//    for (auto i = 0; i < trials; i++) {
//        timer.start();
//        auto found = std::find(data.begin(), data.end(), toFind);
//        timer.stop();
//        times.push_back(timer.getTimeInSeconds().count());
//    }
//
//    float totalTime = 0;
//    // calculate mean time
//    for (auto i : times) {
//        totalTime += i;
//    }
//    cout << "Average time is " << totalTime/trials << endl;
//}


int main() {
    vector<int> ten;
    vector<int> hundred;
    vector<int> thousand;
    vector<int> tenThousand;
    vector<int> hundredThousand;
    vector<int> million;
    vector<int> tenMillion;
    vector<int> hundredMillion;
    vector<int> billion;

    randomNumberGenerator(10, ten);
    randomNumberGenerator(100, hundred);
    randomNumberGenerator(1000, thousand);
    randomNumberGenerator(10000, tenThousand);
    randomNumberGenerator(100000, hundredThousand);
    randomNumberGenerator(1000000, million);
    randomNumberGenerator(1000000, tenMillion);
    randomNumberGenerator(10000000, hundredMillion);
    randomNumberGenerator(100000000, billion);

    vector<vector<int>> numberSet = {ten, hundred, thousand, tenThousand, hundredThousand, million,
                                    tenMillion, hundredMillion, billion};

    // Time Sequential Search
    cout << "Sequential Search Times" << endl;
    for (auto i : numberSet) {
        timeSequential(i, 5.0, 6);
    }

    // Time Binary Search
    cout << "Binary Search Times" << endl;
    for (auto i : numberSet) {
        timeBinary(i, 5.0, 6);
    }

    // Time find Search
    cout << "Find Search Times" << endl;
    for (auto i : numberSet) {
        timeFind(i, 5.0, 6);
    }

    // Time max_element
    cout << "Find max_element Times" << endl;
    for (auto i : numberSet) {
        timeMaxElement(i, 5.0);
    }


    return 0;
}
