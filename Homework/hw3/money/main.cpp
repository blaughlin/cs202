// money.cpp
// Bernard Laughlin 3/12/22
// Program 2 for cs202 HW3

#include <iostream>
using std::cout;
using std::endl;

#include "Money.hpp";
int main() {
    Money n = Money();
    cout << n << endl;
    Money x  = Money(25,103);
    cout << x << endl;
    return 0;
}
