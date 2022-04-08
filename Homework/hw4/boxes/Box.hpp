// Box.hpp
// Created by Bernard Laughlin on 4/8/22.
//

#ifndef BOXES_BOX_HPP
#define BOXES_BOX_HPP

#include<iostream>
using std::ostream;
using std::string;
using std::cout;
using std::endl;

class Box {
public:
    Box();
    Box(int w, int h);
    int getWidth() const;
    int getHeight() const;
    void setWidth(int w);
    void setHeight(int h);
    virtual void print( ostream &os) const = 0;
    virtual string  type() const = 0;
    virtual ~Box();
    friend ostream & operator<<(ostream & os, const Box & b);
private:
    int _width;
    int _height;
};

class FilledBox : public Box {
public:
    FilledBox();
    FilledBox(int w, int h);
    virtual string type() const;
    virtual void print (ostream &os) const;
    virtual ~FilledBox();
};

class HollowBox: public Box {
public:
    HollowBox();
    HollowBox(int w, int h);
    virtual string type() const;
    virtual void print(ostream & os) const;
    virtual ~HollowBox();
};


class CheckeredBox: public Box {
public:
    CheckeredBox();
    CheckeredBox(int w, int h);
    virtual string type() const;
    virtual void print(ostream & os) const;
    virtual ~CheckeredBox();
};

#endif //BOXES_BOX_HPP
