// temperature.cpp
// Bernard Laughlin 1/16/2022
// cs202 HW 0
// Converts from Fahrenheit to Celsius and vice versa

#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;

int main(int argc, const char** argv) {
    vector<string> args;
    for (int index = 0; index < argc; index++){
        args.push_back(argv[index]);
    }
    for (const auto & arg : args) {
        std::cout << arg << std::endl;
    }
    return 0;
}
