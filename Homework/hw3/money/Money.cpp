//
// Created by Bernard Laughlin on 3/12/22.
//

#include "Money.hpp"
#include <iomanip>
using std::setprecision;
Money::Money(): _value(0.00) {};


ostream & operator<<(ostream & out, Money m) {
    out << "$" << setprecision(2) << std::fixed<<  m._value; return out;
};
