// tokenizer.cpp
// Bernard Laughlin 3/3/22
// Takes an input file and tokenizes it. Prints the tokens along with the
// line and column each token occurs at.

#include <iostream>
using std::ostream;
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
using std::fstream;
using std::ofstream;
#include <map>
using std::map;
#include <algorithm>
using std::find;
#include <iomanip>
using std::setw;
using std::left;
using std::right;

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
    cout << "Done creating tokens" << endl;
    return tokenVector;
}

// Prints tokens
void printTokens(ostream &os, const vector<TokenAndPosition> &tokens){
    for (auto token : tokens){
        cout  << "Line " << right << setw(3) <<token._line <<
              ", " <<"Column " <<  right << setw(3) << token._column <<
              ": \"" << token._token << "\""  << endl;
    }

}

int main(int argc, const char** argv) {
    vector<string> args;
    for (int index = 0; index < argc; index++){
        args.push_back(argv[index]);
    }
    cout << args.at(1) << " Is what you typed" << endl;
    vector<TokenAndPosition> tokens;
    string filename = args.at(1);
    ifstream fin(filename);
    istream & input = fin;
    if(!fin) {
        cout << "Error reading " << filename << endl;
    } else {
        tokens = readLines(input);
    }
    ofstream fout("token.txt");
    if (!fout) {
        cout << "Error opening file" << endl;
    }
    if (args.size() == 3) {
        if (args.at(2) == "--lineonly") return 0;
    }
    printTokens(fout, tokens);
    return 0;
}
