// boxes.cpp
// Bernard Laughlin 4/4/22
// Homework 4 boxes assignment for cs202

#include <iostream>
using std::ostream;
#include <string>
using std::string;

class Box {
public:
    int getWidth() {return _width;}
    int getHeight() {return _height;}
    void setWidth(int w) {_width = w;}
    void setHeight(int h) {_height = h;}
    virtual void print( ostream &os) {}
    virtual string  type() {}
    friend ostream & operator<<(ostream &os, const Box &b) ;
private:
    int _width;
    int _height;
};

ostream & operator<<( ostream &os, Box &b){
    b.print(os);
    return os;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
