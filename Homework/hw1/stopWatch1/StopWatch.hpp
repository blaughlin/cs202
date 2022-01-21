//
// Created by Bernard Laughlin on 1/20/22.
//

#ifndef STOPWATCH1_STOPWATCH_HPP
#define STOPWATCH1_STOPWATCH_HPP


class StopWatch {
public:
    StopWatch();
    double getTimeInSeconds();
    double getTimeInMilliseconds();
    void start();
    void stop();

private:
    double _startTime;
    double _stopTime;
};


#endif //STOPWATCH1_STOPWATCH_HPP
