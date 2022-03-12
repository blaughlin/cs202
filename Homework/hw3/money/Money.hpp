//
// Created by Bernard Laughlin on 3/12/22.
//

#ifndef MONEY_MONEY_HPP
#define MONEY_MONEY_HPP

#include <ostream>
using std::ostream;

class Money {
public:
    Money();
    Money(int dollars, int cent);
    Money(double amount);
    Money(const Money & m);
    friend ostream & operator<<(ostream & out,  Money m);
    bool operator==(const Money & m) const;
    bool operator!=(const Money & m) const;
    bool operator<(const Money & m) const;
    bool operator<=(const Money & m) const;
    bool operator>(const Money & m) const;
    bool operator>=(const Money & m) const;
//    Money & operator+=(const Money & m);
    Money operator+(const Money & m) const;



private:
    double _value;
};


#endif //MONEY_MONEY_HPP
