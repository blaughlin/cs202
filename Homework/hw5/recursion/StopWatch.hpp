//
// Created by Bernard Laughlin on 4/24/22.
//

#ifndef RECURSION_STOPWATCH_HPP
#define RECURSION_STOPWATCH_HPP


#include<chrono>
using namespace std::chrono;
class StopWatch {
public:
    StopWatch();
    duration<double> getTimeInSeconds();
    duration<double> getTimeInMilliseconds();
    void start();
    void stop();

private:
    high_resolution_clock::time_point _startTime;
    high_resolution_clock::time_point _stopTime;
};


#endif //RECURSION_STOPWATCH_HPP
