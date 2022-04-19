//
// Created by Bernard Laughlin on 4/19/22.
//

#ifndef TEMPLATE_READ_AND_WRITE_MYREADWRITE_HPP
#define TEMPLATE_READ_AND_WRITE_MYREADWRITE_HPP
#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::ofstream;
using std::ifstream;
using std::ios;

template<typename T>
void myWrite(ofstream & outputStream, T & value){
//    outputStream.open("output.dat", ios::out | ios::binary);
    outputStream.setf(ios::out | ios::binary);
    outputStream.write(reinterpret_cast<const char *>(& value), sizeof(value));
    outputStream.close();
}

template<typename T>
void myRead(ifstream & inputStream, T & value) {
//    inputStream.open("output.dat", ios::in | ios::binary);
    inputStream.setf(ios::in | ios::binary);
    if (!inputStream) { cout << "Could not open file" << endl;
        exit(1);
    }
    inputStream.read(reinterpret_cast<char *>(&value),sizeof(value));
    if (!inputStream) {
        if (inputStream.eof()) {
            cout << "EOF" << endl;
            exit(1);
        } else {
            cout << "READ ERROR" << endl;
            exit(1);
        }
    }
}
#endif //TEMPLATE_READ_AND_WRITE_MYREADWRITE_HPP
