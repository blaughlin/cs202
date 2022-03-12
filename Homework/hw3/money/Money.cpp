//
// Created by Bernard Laughlin on 3/12/22.
//

#include "Money.hpp"
#include <iomanip>
using std::setprecision;
Money::Money(): _value(0.00) {}
Money::Money(int dollars, int cent): _value((double(dollars) * 100.0 + double(cent)) / 100.0) {}
Money::Money(double amount): _value(amount){}
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

ostream & operator<<(ostream & out, Money m){
    out << "$" << setprecision(2) << std::fixed<<  m._value; return out;
}

