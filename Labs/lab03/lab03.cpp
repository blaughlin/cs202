// lab3.cpp
// Bernard Laughlin 2/1/2022
// Pointer Lab for CS202
#include <iostream>
using std::endl;
using std::cout;
#include <memory>
#include "Square.hpp"

int main() {
    cout << "Creating a  raw pointer" << endl;
    Square *s = new Square;
    cout << "Creating a  unique pointer" << endl;
    std::unique_ptr<Square> us = std::make_unique<Square>(5);
    cout << "Transferring ownership to a  unique pointer" << endl;
    auto us2 = std::move(us);
    cout << "Calling a member function" << endl;
    cout  << "Area is " << us2->getArea() << endl;
    cout << "Creating a shared pointer" << endl;
    std::shared_ptr<Square> sharedS{s};
    cout << "Creating another shared pointer to the same object" << endl;
    std::shared_ptr<Square> shared2S{sharedS};
    return 0;
}
