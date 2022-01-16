// temperature.cpp
// Bernard Laughlin 1/16/2022
// cs202 HW 0
// Converts from Fahrenheit to Celsius and vice versa

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using std::string;
using std::vector;
using std::cout;
using std::endl;

// converts Fahrenheit to Celsius
double cpp_ftoc(const char* str) {
    double temp = std::strtod(str, NULL);
    return (temp -32) * (5.0/9.0);
}

// converts to Celsius to Fahrenheit
double  c_ctof(const char*str){
    double temp = std::strtod(str, NULL);
    return temp * (9.0/5.0)  + 32;
}

int main(int argc, const char** argv) {
    vector<string> args;
    for (int index = 0; index < argc; index++){
        args.push_back(argv[index]);
    }
    char* char_arr;
    string str_obj = args.at(2);
    char_arr = &str_obj[0];

    if (args.at(1) == "--ftoc") {
        cout <<  args.at(2) << " degrees fahrenheit is " << cpp_ftoc(char_arr) << " celsius." << endl;
    } else if (args.at(1) == "--ctof") {
        cout <<  args.at(2) << " degrees celsius is " << c_ctof(char_arr) << " fahrenheit." << endl;
    }
    return 0;
}
