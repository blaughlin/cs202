// linkedList.cpp
// Bernard Laughlin
// Creates a linked list of book metadata

#include <iostream>
using std::cout;
using std::endl;
using std::string;
#include <list>

class Book {
public:
    string title;
    string author;
    string releaseDate;
    string language;
    string producedBy;
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
