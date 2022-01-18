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

// Prints out an excerpt from Great Expectations
void printExcerpt(vector<string> book){

}

int main() {
    vector<string> book = readInBook("great_expectations.txt");
    vector<vector<string>> excerpts = parseBook(book);

    for (auto i : excerpts) {
        for(auto j : i){
            cout << j << endl;
        }
    }
//    for (auto i : book) {
//        if (i == "\r") cout << "RETURN!" << endl;
//        cout << i << endl;
//    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
