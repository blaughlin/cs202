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
#include <list>
using std::list;
#include <map>
using std::map;

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

// Reads in lines from book and returns them as a list
list<string> readInBookList(string filename) {
    list<string> book;
    ifstream fin(filename);
    if (!fin) {
        cout << "Error reading file." << endl;
    } else {
        while (true) {
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

// Reads in lines from book and returns them as a map
map<int,string> readInBookMap(string filename) {
    map<int,string> book;
    ifstream fin(filename);
    int counter = 0;
    if (!fin) {
        cout << "Error reading file." << endl;
    } else {
        while (true) {
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
            book.insert(std::pair<int, string>(counter, line));
            counter++;
        }
    }
    return book;
}




// Parses out section of book between blank lines into a vector
vector<vector<string>>  parseBook(vector<string> book) {
    vector<vector<string>> excerpts;
    vector<string> excerpt;
    for (auto i : book){
        excerpt.push_back(i);
        if (i == "\r") {
            excerpts.push_back(excerpt);
            excerpt.clear();
        }
    }
    return excerpts;
}

// Prints out a random excerpt from Great Expectations
string  getExcerpt(vector<vector<string>> excerpts){
    bool done = false;
    random_device rd;
    mt19937 gen(rd());

    while (!done) {
        shuffle(excerpts.begin(), excerpts.end(), gen);
        for (auto i : excerpts.at(0))
            if ( i != "\r"){
                return i;
                cout << i << endl;
                done = true;
            }
    }
}

int main() {
    map<int,string> dracula = readInBookMap("Dracula.txt");
    for (auto i : dracula){
        cout << i.second << endl;
    }
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
