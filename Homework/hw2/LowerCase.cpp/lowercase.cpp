// lowercase.cpp
// Bernard Laughlin 2/20/22
// Converts upper case to lower case

#include <iostream>
using std::cout;
using std::endl;

// Converts upper case char to lower case char
void to_lower(char* s) {
    while (s != NULL && *s != '\0'){
        if (int(*s) >= 65 && int(*s) <= 90){
            *s += 32;
        }
        ++s;
    }
}
int main() {
    char word[] = "Hello, World!";
    to_lower(word);
    cout << word << endl;
    return 0;
}
