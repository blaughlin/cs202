// stopWatch1.cpp
// Bernard Laughlin 11/20/21
// Times how fast search and binary search run with StopWatch class keeping track of time.

#include <iostream>
#include <chrono>
int main() {
    std::cout << std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()) << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
