// Box.cpp
// Created by Bernard Laughlin on 4/8/22.
//

#include "Box.hpp"

// Box class methods
Box::Box() : _width(1), _height(1) {}
Box::Box(int w, int h) : _width(w), _height(h) {}
int Box::getWidth() const {return _width;}
int Box::getHeight() const {return _height;}
void Box::setWidth(int w) {_width = w;}
void Box::setHeight(int h) {_height = h;}
Box::~Box(){}
ostream & operator<<( ostream & os, const Box & b){
    b.print(os);
    return os;
}

// FilledBox class methods
FilledBox::FilledBox() : Box() {}
FilledBox::FilledBox(int w, int h) : Box(w,h) {}
string  FilledBox::type() const {return "Filled";}
void  FilledBox::print (ostream &os) const {
    for (int i = 0; i < getHeight(); i++){
        for (auto j = 0; j <= getWidth() -1; j++){
            os << "x";
        }
        os << endl;
    }
}
FilledBox::~FilledBox() {}

// HollowBox class methods
HollowBox::HollowBox() : Box() {}
HollowBox::HollowBox(int w, int h): Box(w,h) {}
 string HollowBox::type() const {return "Hollow";}
 void HollowBox::print (ostream & os) const{
    for (int i = 0; i < getHeight(); i++){
        for (auto j = 0; j <= getWidth() -1; j++){
            if (i == 0 || i == getHeight() -1) {
                os << "x";
            } else if (j == 0 || j == getWidth() -1){
                os << "x";
            } else os << " ";
        }
        os << "\n";
    }
}
HollowBox::~HollowBox() {}

// CheckeredBox class methods
CheckeredBox::CheckeredBox() : Box() {}
CheckeredBox::CheckeredBox(int w, int h): Box(w,h) {}
string CheckeredBox::type() const {return "Checkered";}
void CheckeredBox::print (ostream & os) const{
    for (int i = 0; i < getHeight(); i++) {
        for (auto j = 0; j <= getWidth() - 1; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    os << "x";
                } else os << " ";
            } else {
                if (j % 2 == 0) {
                    os << " ";
                } else os << "x";
            }
        }
        os << endl;
    }
}
CheckeredBox::~CheckeredBox() {}


