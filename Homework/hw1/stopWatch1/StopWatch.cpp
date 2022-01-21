//
// Created by Bernard Laughlin on 1/20/22.
//

#include "StopWatch.hpp"
#include <chrono>

StopWatch::StopWatch() {
    _startTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
}

void StopWatch::start() {
    _startTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
}
void StopWatch::stop() {
    _stopTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
}

double StopWatch::getTimeInSeconds(){
    return std::chrono::duration<double, std::milli>(_stopTime - _startTime).count()/1000;
}

double StopWatch::getTimeInMilliseconds() {
    return std::chrono::duration<double, std::milli>(_stopTime - _startTime).count();
}

