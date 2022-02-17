// MemoryLayout.cpp
// Bernard Laughlin 2/17/22
//  Tells the order in which static storage, the stack, and the free store are laid out in memory

#include <iostream>
using std::cout;
using std::endl;

void printPointer(int i ) {
    int* iptr = &i;
    // the unary * operator dereferences the pointer
    cout << "i = " << *iptr << "\n";
    cout << "&i = " << iptr << "\n";
}

int main() {
    int a = 20;
    printPointer(a);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
