// excerpt.cpp
// Bernard Laughlin 1/17/21
// Prints a random excerpt from Great Expectations

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::getline;
#include <fstream>
using std::ifstream;
#include <random>
using std::random_device;
using std::mt19937;
#include <algorithm>
using std::shuffle;

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
void printExcerpt(vector<vector<string>> excerpts){
    bool done = false;
    random_device rd;
    mt19937 gen(rd());

    while (!done) {
        shuffle(excerpts.begin(), excerpts.end(), gen);
        for (auto i : excerpts.at(0)){
            if ( i != "\r"){
                cout << i << endl;
                done = true;
            }
        }
    }
}

int main() {
    vector<string> book = readInBook("great_expectations.txt");
    vector<vector<string>> excerpts = parseBook(book);
    cout << "\nExcerpt: " << endl;
    printExcerpt(excerpts);
    return 0;
}
