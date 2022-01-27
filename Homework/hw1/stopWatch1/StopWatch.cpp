//
// Created by Bernard Laughlin on 1/20/22.
//

#include "StopWatch.hpp"
#include <chrono>

using namespace std::chrono;
StopWatch::StopWatch() {
    _startTime = high_resolution_clock::now();
}

void StopWatch::start() {
    _startTime = high_resolution_clock::now();
}
void StopWatch::stop() {
    _stopTime = high_resolution_clock::now();
}

duration<double> StopWatch::getTimeInSeconds(){
    return duration_cast<duration<double>>(_stopTime - _startTime);
}

duration<double> StopWatch::getTimeInMilliseconds() {
    return duration_cast<duration<double>>(_stopTime - _startTime) / 1000;
}

