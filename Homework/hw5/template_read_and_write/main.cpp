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

void myWriteInt(fstream & outputStream, int value){
    outputStream.open("output.dat", ios::out | ios::binary);
    outputStream.write(reinterpret_cast<const char *>(& value), sizeof(value));
    outputStream.close();
}

int main() {
    fstream f;
    int n = 22;
    myWriteInt(f, n);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
