// template_read_and_write.cpp
// Bernard Laughlin 4/18/22
// Template function that reads and writes to binary files

#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::fstream;
using std::ios;
#include <string>
using std::string;

template<typename T>
void myWrite(fstream & outputStream, T value){
    outputStream.open("output.dat", ios::out | ios::binary);
    outputStream.write(reinterpret_cast<const char *>(& value), sizeof(value));
    outputStream.close();
}

template<typename T>
void myRead(fstream & inputStream, T & value) {
    inputStream.open("output.dat", ios::in | ios::binary);
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

// Writes out an int to binary file
void myWriteInt(fstream & outputStream, int value){
    outputStream.open("output.dat", ios::out | ios::binary);
    outputStream.write(reinterpret_cast<const char *>(& value), sizeof(value));
    outputStream.close();
}

// Reads in an int from a binary file
void myReadInt(fstream & inputStream, int & value) {
    inputStream.open("output.dat", ios::in | ios::binary);
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

int main() {
    fstream f;
    int n = 22;
    float k = 3.5;
    myWrite(f, n);
//    myWriteInt(f, n);
    int j;
//    myReadInt(f, j);
    int z;
    myRead(f, z);
    cout << "z is equal to " << z << endl;
    return 0;
}
