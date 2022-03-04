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

struct tokenAndPosition {
    string _token;
    int _line;
    unsigned int _column;
};

// returns a vector of words that are tokens split by white space
vector<string> lineToTokens(const string &line){
    vector<string> tokens;
    stringstream ss(line);
    string word;
    while (ss >> word){
        tokens.push_back(word);
    }
    return tokens;
}

// finds the column and row of the tokens
void readLines(istream &is){
    int lineNumber = 0;
    while(true){
            lineNumber++;
            string line;
            getline(is, line);
            vector<string> tokens = lineToTokens(line);
            cout << "Line number: " << lineNumber << endl;
            for (auto word : tokens){
                // determine number of copies of word in vector
                std::size_t found = line.find(word);
                if (found != string::npos) cout << "column: " << found + 1 << " ";
                cout << word << endl;

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

}

int main() {
    string filename = "sample.txt";
    ifstream fin(filename);
    istream & input = fin;
    if(!fin) {
        cout << "Error reading " << filename << endl;
    } else {
        readLines(input);
    }

    vector<tokenAndPosition> tokens;
    return 0;
}
