// TimeIt2.cpp
// Bernard Laughlin
// Times how long it takes to read a book and perform various functions

#include <iostream>
using std::cout;
using std::endl;
#include "StopWatch.hpp"
#include <vector>
using std::vector;
using std::string;
#include <string>
using std::string;
using std::getline;
#include <fstream>
using std::ifstream;
#include <random>
using std::random_device;
using std::mt19937;
#include <algorithm>

// Reads in lines from book and returns them as a vector
vector<string> readInBook(string filename){
    vector<string> book;
    ifstream fin(filename);
    if(!fin){
        cout << "Error reading file." << endl;
    } else {
        while (true){
            string line;
            getline(fin, line);
            if (!fin) {
                if (fin.eof()) {
                    cout << "Finished reading file." << endl;
                } else {
                    cout << "Error during transmit." << endl;
                }
                break;
            }
            book.push_back(line);
        }
    }
    return book;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
