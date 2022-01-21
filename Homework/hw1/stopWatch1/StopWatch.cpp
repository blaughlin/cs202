//
// Created by Bernard Laughlin on 1/20/22.
//

#include "StopWatch.hpp"
#include <chrono>

StopWatch::StopWatch() {
    _startTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
}


//class StopWatch {
//public:
//    double getTimeInSeconds(){};
//    double getTimeInMilliseconds(){};
//    void start(){};
//    void stop(){};
//
//private:
//    double _startTime;
//    double _stopTime;
//};