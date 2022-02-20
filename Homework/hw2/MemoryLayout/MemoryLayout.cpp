// MemoryLayout.cpp
// Bernard Laughlin 2/17/22
//  Tells the order in which static storage, the stack, and the free store are laid out in memory

#include <iostream>
using std::cout;
using std::endl;

int staticVariable = 1;

void printPointer(int i ) {
    int* iptr = &i;
    // the unary * operator dereferences the pointer
    cout << "i = " << *iptr << "\n";
    cout << "&i = " << iptr << "\n";
}

int main() {
    int stackVariable = 2;
    int* heapVariable = new int;
    *heapVariable = 3;

    if ( &stackVariable < &staticVariable )
    {
        std::cout << "Stack data is in lower memory than static." << endl;
    } else {
        std::cout << "Stack data is in higher in memory than the static." << endl;
    }
    if ( heapVariable < &staticVariable )
    {
        std::cout << "Heap data is in lower memory than static." << endl;
    } else {
        std::cout << "Heap data is in higher in memory than static." << endl;
    }
    if ( &stackVariable < heapVariable )
    {
        std::cout << "Stack data is in lower memory than the heap." << endl;
    } else {
        std::cout << "Stack data is in higher in memory than the heap." << endl;
    }

    int stack2 = 2;
    if ( &stackVariable < &stack2 )
    {
        std::cout << "Stack is growing down in memory." << endl;
    } else {
        std::cout << "Stack is growing up in memory." << endl;
    }

    int* heap2 = new int;
    *heap2 = 3;
    if ( heapVariable < heap2 )
    {
        std::cout << "Heap is growing down in memory." << endl;
    } else {
        std::cout << "Heap is growing up in memory." << endl;
    }

    int* heapArray = new int[4];
    heapArray[0] = 0;
    heapArray[1] = 1;
    heapArray[2] = 2;
    heapArray[3] = 3;

    if (heapArray[0] < heapArray[1]) {
        cout << "Heap array elements with higher indices are at higher addresses" << endl;
    } else {
        cout << "Heap array elements with higher indices are at lower addresses" << endl;
    }
    return 0;
}
