// c_style_stings.cpp
// Bernard Laughlin 2/3/22
// copies a C-style string into memory it allocates dynamically, also finds the first occurrence of the c-style
// string x in s

#include <iostream>
using std::cout;
using std::endl;
#include <memory>

// finds length of string
int getLength(const char * s){
    int n = 0;
    for (auto i = 0; s[i] != NULL; i++) {
        n += 1;
    }
    return n;
}

//  copies a C-style string into memory it allocates dynamically
char* strdup(const char* s) {
    char *p = new char(*s);
    for (auto i = 0; i < getLength(s); i++) {
        p[i] = s[i];
    }
    return p;
}



//finds the first occurrence of the c-style string x in s
char* findx(const char* s, const char* x) {
    bool found = false;
    char *p = new char(*s);
    for (auto i = 0; i < sizeof(s); i++) {
        if (s[i] == NULL) break;
        if (s[i] == x[0]) {
            found = true;
            for (auto j = 0; j < sizeof(x); j++) {
                if (x[j] == NULL) break;
                if (s[i + j] == x[j]) {
                    p[j] = s[i + j];
             } else;
            }
        }
    }
    if (found && getLength(x) == getLength(p)) return p;
    return nullptr;
}



int main() {
    const char *s1 = "Hello World";
    char *copy = strdup(s1);
    cout << s1 << endl;
    cout << copy << endl;

    char *p1 = findx("Hello World", "Wo");
    if ( p1 == nullptr) {
        cout << "null pointer found" << endl;
    } else  cout << p1 << endl;

    char *p2 = findx("hello", "helg");
    if ( p2 == nullptr) {
        cout << "null pointer found" << endl;
    } else  cout << p2 << endl;

    return 0;
}
