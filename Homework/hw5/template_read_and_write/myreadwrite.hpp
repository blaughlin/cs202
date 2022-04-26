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
    outputStream.setf(ios::binary | ios::out);
    outputStream.write(reinterpret_cast<const char *>(& value), sizeof(value));
    outputStream.seekp(sizeof(T));

}




template<typename T>
void myRead(ifstream & inputStream, T & value) {
    inputStream.setf(ios::binary | ios::in);
    if (!inputStream) { cout << "Could not open file" << endl;
        exit(1);
    }
    inputStream.read(reinterpret_cast<char *>(&value),sizeof(value));
    inputStream.seekg(sizeof(T));
}
#endif //TEMPLATE_READ_AND_WRITE_MYREADWRITE_HPP
