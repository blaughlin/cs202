// tokenizer.cpp
// Bernard Laughlin 3/3/22
// Takes an input file and tokenizes it. Prints the tokens along with the
// line and column each token occurs at.

#include <iostream>
using std::cout;
using std::endl;
#include <string>
#include <sstream>
using std::stringstream;
using std::string;
#include <vector>
using std::vector;
#include <fstream>
using std::istream;
using std::ifstream;
#include <map>
using std::map;
#include <algorithm>
using std::find;

struct TokenAndPosition {
    string _token;
    int _line;
    unsigned int _column;
};


// returns a vector of words that are tokens split by white space
vector<string> lineToTokens(const string &line) {
    vector<string> tokens;
    stringstream ss(line);
    string word;
    while (ss >> word) {
        tokens.push_back(word);
    }
    return tokens;
}

bool isInList(vector<string> s, string word){
    for (auto token : s) {
        if (token == word) return true;
    }
    return false;
}


// finds the column and row of the tokens
vector<TokenAndPosition> readLines(istream &is){
    vector<TokenAndPosition> tokenVector;
    vector<string> processed;
    int lineNumber = 0;
    std::size_t lastLocation = 0;
    std::size_t currentLocation = 0;
    while(true){
        lineNumber++;
        string line;
        getline(is, line);
        vector<string> tokens = lineToTokens(line);
        for (auto word : tokens) {
            // check if token has already been seen before and get last location
            if (find(processed.begin(), processed.end(), word) != processed.end()){
                for (auto i : tokenVector) {
                    if (i._token == word) {
                        lastLocation = i._column + 1;
                    }
                }
                    currentLocation = line.find(word, lastLocation);
            } else {
                currentLocation = line.find(word);
            }
            if (currentLocation != string::npos) {
                TokenAndPosition tp;
                tp._token = word;
                tp._line = lineNumber;
                tp._column = currentLocation + 1;
                tokenVector.push_back(tp);
                processed.push_back(word);
            }
        }
        if (!is) {
            if (is.eof()) {
                cout << "Finished reading file." << endl;
            } else {
                cout << "Error during transmit." << endl;
            }
            break;
        }
    }
    return tokenVector;
}

int main() {
    string filename = "sample.txt";
    ifstream fin(filename);
    istream & input = fin;
    if(!fin) {
        cout << "Error reading " << filename << endl;
    } else {
        vector<TokenAndPosition> tokens = readLines(input);
        for (auto token : tokens) cout << token._token << " " << token._line << " : " << token._column << endl;
    }
    return 0;
}
