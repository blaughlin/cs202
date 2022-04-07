// boxes.cpp
// Bernard Laughlin 4/4/22
// Homework 4 boxes assignment for cs202

#include <iostream>
using std::endl;
using std::cout;
using std::ostream;
#include <string>
using std::string;
#include <fstream>

class Box {
public:
    Box(int w, int h) : _width(w), _height(h) {}
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

class FilledBox : public Box {
public:
    FilledBox() : Box(1, 1) {}
    FilledBox(int w, int h) : Box(w,h) {}
    virtual string type() {return "FilledBox";}
    virtual void print (ostream &os) {
        int w = getWidth();
        for (int i = 0; i <= getHeight() -1; i++){
            for (auto j = 0; j <= getWidth() -1; j++){
                os << "x";
            }
            os << endl;
        }
    }

};

int main() {
    std::ofstream stream("test.txt");
    FilledBox a;
    FilledBox  b(3,4) ;
    std::cout << "Hello, World! " <<  a.type() << ", width: " << a.getWidth() << std::endl;
    b.print(stream);

    cout << b << endl;
    return 0;
}
