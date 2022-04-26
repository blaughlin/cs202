// Rational.hpp
// Created by Bernard Laughlin on 4/19/22.
// CS202 HW5

#ifndef TEMPLATE_READ_AND_WRITE_RATIONAL_HPP
#define TEMPLATE_READ_AND_WRITE_RATIONAL_HPP
#include <iostream>
#include <numeric>
template <typename T>
class Rational {
private:
    T _numerator;
    T _denominator;
    void reduce() {
        auto gcd = std::gcd(_numerator,_denominator);
        _numerator /= gcd;
        _denominator /= gcd;
        if (_denominator < 0) {
            _numerator *= -1;
            _denominator *= -1;
        }
    };
public:
    Rational() { _numerator=0; _denominator=1; }
    Rational(T num) : _numerator(num), _denominator(1) {
        reduce();
    }
    Rational (T _numerator, T demoniator);

    Rational operator-() {
        _numerator *= -1;
        return Rational(_numerator);
    }

    template <typename U>
    friend std::ostream &operator<<(std::ostream &, const Rational<U> &);

    template <typename U>
    Rational &operator+=(const Rational<U> & rhs) {
        _numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
        _denominator *= rhs._denominator;
        reduce();
        return *this;
    };

    template <typename U>
    Rational &operator-=(const Rational<U> & rhs) {
        _numerator = _numerator * rhs._denominator - rhs._numerator * _denominator;
        _denominator *= rhs._denominator;
        reduce();
        return *this;
    };

    template <typename U>
    Rational &operator/=(const Rational<U> & rhs) {
        _numerator = _numerator * rhs._denominator;
        _denominator = _denominator * rhs._numerator;
        reduce();
        return *this;
    };

    template <typename U>
    Rational &operator*=(const Rational<U> & rhs) {
        _numerator = _numerator * rhs._numerator;
        _denominator = _denominator * rhs._denominator;
        reduce();
        return *this;
    };

    template <class Type>
    bool operator==(Rational<Type> const& a) {
        return (_numerator == a._numerator) && (_denominator == a._denominator);
    }

    template <class Type>
    bool operator!=(Rational<Type> const& a) {
        return (_numerator != a._numerator) && (_denominator != a._denominator);
    }

    template <class Type>
    bool operator<(const Rational<Type> &r) const {
        return (double(_numerator)/ double(_denominator)) < double((r._numerator) / double(r._denominator));
    }

    template <class Type>
    bool operator>(const Rational<Type> &r) const {
        return (double(_numerator)/ double(_denominator)) > (double(r._numerator) / double(r._denominator));
    }

    template <class Type>
    bool operator<=(const Rational<Type> &r) const {
        return (double(_numerator)/ double(_denominator)) <= (double(r._numerator) / double(r._denominator));
    }

    template <class Type>
    bool operator>=(const Rational<Type> &r) const {
        return (double(_numerator) / double(_denominator)) <= (double(r._numerator) / double(r._denominator));
    }

    template <typename U>
    friend Rational operator+(const Rational &, const Rational<T> &);
};

template <typename U>
std::ostream & operator<<(std::ostream & os, const Rational<U> & rhs) {
    os << rhs._numerator;
    if (rhs._denominator != 1)
        os << "/" << rhs._denominator;
    return os;
}

template <typename U>
Rational<U> operator+(const Rational<U> & lhs, const Rational<U> & rhs) {
    auto temp{lhs};
    temp += rhs;
    return temp;
}

template <typename U>
Rational<U> operator-(const Rational<U> & lhs, const Rational<U> & rhs) {
    auto temp{lhs};
    temp -= rhs;
    return temp;
}

template <typename U>
Rational<U> operator*(const Rational<U> & lhs, const Rational<U> & rhs) {
    auto temp{lhs};
    temp *= rhs;
    return temp;
}

template <typename U>
Rational<U> operator/(const Rational<U> & lhs, const Rational<U> & rhs) {
    auto temp{lhs};
    temp /= rhs;
    return temp;
}

template <typename Type>
Rational<Type>::Rational(Type num, Type den) {
        _numerator = num;
        _denominator = den;

}

#endif //TEMPLATE_READ_AND_WRITE_RATIONAL_HPP
