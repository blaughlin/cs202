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
    friend ostream & operator<<(ostream & out, Money m);
private:
    double _value;
};


#endif //MONEY_MONEY_HPP
