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

// Reads in line from book and returns them as a vector
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
