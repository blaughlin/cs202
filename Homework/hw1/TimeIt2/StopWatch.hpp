//
// Created by Bernard Laughlin on 1/30/22.
//

#ifndef TIMEIT2_STOPWATCH_HPP
#define TIMEIT2_STOPWATCH_HPP


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

#endif //TIMEIT2_STOPWATCH_HPP
