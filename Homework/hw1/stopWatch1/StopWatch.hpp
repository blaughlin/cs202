//
// Created by Bernard Laughlin on 1/20/22.
//

#ifndef STOPWATCH1_STOPWATCH_HPP
#define STOPWATCH1_STOPWATCH_HPP

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


#endif //STOPWATCH1_STOPWATCH_HPP
