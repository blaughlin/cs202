// template_read_and_write.cpp
// Bernard Laughlin 4/18/22
// Template function that reads and writes to binary files
#include "myreadwrite.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::fstream;
using std::ofstream;
using std::ifstream;



int main() {
    ofstream ofile("numbers.dat");
    double d=13.3;
    myWrite(ofile,d);
    int x=5;
    myWrite(ofile,x);

    ifstream ifile("numbers.dat");
    double readd;
    int readx;

//    myRead(ifile,readd);
    myRead(ifile,readx);
    cout << readx << endl;


//    myRead(ifile,readd);
//    myRead(ifile,readx);
//    std::ofstream ofile("numbers.dat");
//    float q = 33.77;
//    myWrite(ofile, q);
//
//    float z;
//    std::ifstream ifile("numbers.dat");
//
//    myRead(ifile, z);
//    cout << "z is equal to " << z << endl;
    return 0;
}
