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
    Box() : _width(1), _height(1) {}
    Box(int w, int h) : _width(w), _height(h) {}
    int getWidth() const {return _width;}
    int getHeight() const {return _height;}
    void setWidth(int w) {_width = w;}
    void setHeight(int h) {_height = h;}
    virtual void print( ostream &os) = 0;
    virtual string  type() = 0;
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
    FilledBox() : Box() {}
    FilledBox(int w, int h) : Box(w,h) {}
    virtual string type() {return "FilledBox";}
    virtual void print (ostream &os) {
        for (int i = 0; i <= getHeight() -1; i++){
            for (auto j = 0; j <= getWidth() -1; j++){
                os << "x";
            }
            os << endl;
        }
    }
};

class HallowBox: public Box {
public:
    HallowBox() : Box() {}
    HallowBox(int w, int h): Box(w,h) {}
    virtual string type() {return "Hallowbox";}
    virtual void print (ostream & os){
        for (int i = 0; i <= getHeight() -1; i++){
            for (auto j = 0; j <= getWidth() -1; j++){
                if (i == 0 || i == getHeight() -1) {
                    cout << "x";
                } else if (j == 0 || j == getWidth() -1){
                    cout << "x";
                } else cout << " ";
            }
            os << endl;
        }
    }
};

int main() {
    std::ofstream stream("test.txt");
    FilledBox a;
    FilledBox  b(3,4) ;
    b.print(stream);
    HallowBox h(10,5);
    cout << h << endl;
    return 0;
}
