// Money.cpp
// Created by Bernard Laughlin on 3/12/22.
//

#include "Money.hpp"
#include <iomanip>
#include <cmath>
using std::ceil;
using std::floor;
using std::setprecision;

Money::Money(): _value(0.00) {}
Money::Money(int dollars, int cent): _value((double(dollars) * 100.0 + double(cent)) / 100.0) {}
Money::Money(double amount): _value(amount) {}
Money::Money(const Money & m) {
    _value = m._value;
}

bool Money::operator==(const Money &m) const {
    return _value == m._value;
}

bool Money::operator!=(const Money &m) const {
    return _value != m._value;
}

bool Money::operator<(const Money &m) const {
    return _value < m._value;
}

bool Money::operator>(const Money &m) const {
    return _value > m._value;
}

bool Money::operator>=(const Money &m) const {
    return _value >= m._value;
}

bool Money::operator<=(const Money &m) const {
    return _value <= m._value;
}

Money Money::operator+(const Money &m) const {
    Money temp; temp._value = _value + m._value; return temp;
}

Money & Money::operator+=(const Money &m) {
    _value += m._value;
    return *this;
}

Money & Money::operator-=(const Money &m) {
    _value -= m._value;
    return *this;
}

Money Money::operator-(const Money &m) const {
    Money temp; temp._value = _value - m._value; return temp;
}

Money & Money::operator*=(const Money &m) {
    _value *= m._value;
    return *this;
}

Money operator*(Money const & a, Money const & b) {
    return Money(a._value * b._value);
}

Money & Money::operator/=(const Money &m) {
    _value /= m._value;
    return *this;
}

Money operator/(Money const & a, Money const & b) {
    return Money(a._value / b._value);
}


ostream & operator<<(ostream & out, Money m){
    float value;
    // check if there is a decimal place
    if (abs(m._value-int(m._value))>0) {
        value = m._value;
    }  else value = m._value/100; // convert from cents to dollars
    if (value >= 0) {
        out << "$" << setprecision(2) << std::fixed<<  value; return out;
    } else out << "-$" << setprecision(2) << std::fixed<< -1* value; return out;
}

