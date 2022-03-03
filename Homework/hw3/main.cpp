// tokenizer.cpp
// Bernard Laughlin 3/3/22
// Takes an input file and tokenizes it. Prints the tokens along with the
// line and column each token occurs at.

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

struct tokenAndPosition {
    string _token;
    int _line;
    unsigned int _column;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
