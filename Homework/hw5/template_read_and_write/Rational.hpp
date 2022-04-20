//
// Created by Bernard Laughlin on 4/19/22.
//

#ifndef TEMPLATE_READ_AND_WRITE_RATIONAL_HPP
#define TEMPLATE_READ_AND_WRITE_RATIONAL_HPP
#include <iostream>
#include <numeric>
class Rational {

private:
    int _numerator;
    int _denominator;

    void reduce();  // only Rational member fcns can call this

public:
    // Rational() { _numerator=0; _denominator=1; }
    Rational(int, int= 1);

    friend std::ostream &operator<<(std::ostream &, const Rational &);

    Rational &operator+=(const Rational &);

    friend Rational operator+(const Rational &, const Rational &);
};

Rational::Rational(int num, int den) : _numerator(num), _denominator(den) {
    reduce();
}

void Rational::reduce() {
    auto gcd = std::gcd(_numerator,_denominator);
    _numerator /= gcd;
    _denominator /= gcd;
    if (_denominator < 0) {
        _numerator *= -1;
        _denominator *= -1;
    }
}

std::ostream & operator<<(std::ostream & os, const Rational & rhs) {
    os << rhs._numerator;
    if (rhs._denominator != 1)
        os << "/" << rhs._denominator;
    return os;
}

Rational & Rational::operator+=(const Rational &rhs) {
    // a/b + c/d = (ad+bc)/ad
    _numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
    _denominator *= rhs._denominator;
    reduce();
    return *this;
}

Rational operator+(const Rational & lhs, const Rational & rhs) {
    auto temp{lhs};
    temp += rhs;
    return temp;
}
#endif //TEMPLATE_READ_AND_WRITE_RATIONAL_HPP
