// TimeIt2.cpp
// Bernard Laughlin
// Times how long it takes to read a book and perform various functions

#include <iostream>
using std::cout;
using std::endl;
#include "StopWatch.hpp"
#include <vector>
using std::vector;
using std::string;
#include <string>
using std::string;
using std::getline;
#include <fstream>
using std::ifstream;
#include <random>
using std::random_device;
using std::mt19937;
#include <algorithm>
#include <list>
using std::list;
#include <map>
using std::map;

// Reads in lines from book and returns them as a vector
vector<string> readInBook(string filename){
    vector<string> book;
    ifstream fin(filename);
    if(!fin){
        cout << "Error reading file." << endl;
    } else {
        while (true){
            string line;
            getline(fin, line);
            if (!fin) {
                if (fin.eof()) {
                    cout << "Finished reading file." << endl;
                } else {
                    cout << "Error during transmit." << endl;
                }
                break;
            }
            book.push_back(line);
        }
    }
    return book;
}

// Reads in lines from book and returns them as a list
list<string> readInBookList(string filename) {
    list<string> book;
    ifstream fin(filename);
    if (!fin) {
        cout << "Error reading file." << endl;
    } else {
        while (true) {
            string line;
            getline(fin, line);
            if (!fin) {
                if (fin.eof()) {
                    cout << "Finished reading file." << endl;
                } else {
                    cout << "Error during transmit." << endl;
                }
                break;
            }
            book.push_back(line);
        }
    }
    return book;
}

// Reads in lines from book and returns them as a map
map<string,int> readInBookMap(string filename) {
    map<string,int> book;
    ifstream fin(filename);
    int counter = 0;
    if (!fin) {
        cout << "Error reading file." << endl;
    } else {
        while (true) {
            string line;
            getline(fin, line);
            if (!fin) {
                if (fin.eof()) {
                    cout << "Finished reading file." << endl;
                } else {
                    cout << "Error during transmit." << endl;
                }
                break;
            }
            book.insert(std::pair<string, int>(line, counter));
            counter++;
        }
    }
    return book;
}


string getRandomVectorExcerpt(vector<string> book) {
    std::mt19937 gen(7);
    int bookSize = book.size()-1;
    std::uniform_int_distribution<int> dist(0, bookSize);

    while (true) {
        string except = book.at(dist(gen));
        if (except != "\r") {
            return except;
        }
    }
}


int main() {
    StopWatch timer;
    // Read in time with vector
    cout << "Vector Read in Times" << endl;
    vector<string> bookVec0 = readInBook("Dracula.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    vector<string> bookVec1 = readInBook("Frakenstein.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    vector<string> bookVec2 = readInBook("Moby Dick.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    vector<string> bookVec3 = readInBook("Tale of Two Cities.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    vector<string> bookVec4 = readInBook("Oliver Twist.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;

    vector<vector<string>> vectorBooks  = {bookVec0, bookVec1, bookVec2, bookVec3, bookVec4};

    // Read in time for list
    cout << "list Read in Times" << endl;
    timer.start();
    list<string> listBook0 = readInBookList("Dracula.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    list<string> listBook1 = readInBookList("Frakenstein.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    list<string> listBook2 = readInBookList("Moby Dick.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    list<string> listBook3 = readInBookList("Tale of Two Cities.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    list<string> listBook4 = readInBookList("Oliver Twist.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;

    vector<list<string>> listBooks = {listBook0, listBook1, listBook2, listBook3, listBook4};

    // Read in time for map
    cout << "Map Read in Times" << endl;
    map<string,int> mapBook0 = readInBookMap("Dracula.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    map<string,int> mapBook1 = readInBookMap("Frakenstein.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    map<string,int> mapBook2 = readInBookMap("Moby Dick.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    map<string,int> mapBook3 = readInBookMap("Tale of Two Cities.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;
    timer.start();
    map<string,int> mapBook4 = readInBookMap("Oliver Twist.txt");
    timer.stop();
    cout << timer.getTimeInSeconds().count() << endl;

    vector<map<string,int>> mapBooks = {mapBook0, mapBook1, mapBook2 ,mapBook3, mapBook4};

    // Get random excerpts
    cout << "Random Excerpts" << endl;
    string excerpt0 = getRandomVectorExcerpt(bookVec0);
    string excerpt1 = getRandomVectorExcerpt(bookVec1);
    string excerpt2 = getRandomVectorExcerpt(bookVec2);
    string excerpt3 = getRandomVectorExcerpt(bookVec3);
    string excerpt4 = getRandomVectorExcerpt(bookVec4);

    cout << excerpt0 << endl;
    cout << excerpt1 << endl;
    cout << excerpt2 << endl;
    cout << excerpt3 << endl;
    cout << excerpt4 << endl;

    vector<string> excerpts = {excerpt0, excerpt1, excerpt2, excerpt3, excerpt4};

    // Time how long it takes to find random string in a vector
    cout << "Timing vector excerpt search time" << endl;
    for (auto i =0; i < excerpts.size(); i++) {
        timer.start();
        if (std::find(vectorBooks.at(i).begin(), vectorBooks.at(i).end(), excerpts.at(i)) != vectorBooks.at(i).end()){
            cout <<  "Found except" << endl;
        } else cout << "Didn't find excerpt" << endl;
        timer.stop();
        cout << timer.getTimeInSeconds().count() << endl;
    }
    // Time how long it takes to find random string in a list
    cout << "Timing list excerpt search time" << endl;
    for (auto i =0; i < excerpts.size(); i++) {
        timer.start();
        if (std::find(listBooks.at(i).begin(), listBooks.at(i).end(), excerpts.at(i)) != listBooks.at(i).end()){
            cout <<  "Found except" << endl;
        } else cout << "Didn't find excerpt" << endl;
        timer.stop();
        cout << timer.getTimeInSeconds().count() << endl;
    }

    // Time how long it takes to find random string in a map
    cout << "Timing map excerpt search time" << endl;
    for (auto i =0; i < excerpts.size(); i++) {
        timer.start();
        if (mapBooks.at(i).find(excerpts.at(i)) != mapBooks.at(i).end()) {
            cout << "Found excerpt" << endl;
        } else cout << "Didn't find excerpt" << endl;
        timer.stop();
        cout << timer.getTimeInSeconds().count() << endl;
    }

    // Time how long it takes to sort a vector
    cout << "Vector Sort Time" << endl;
    for (auto book : vectorBooks) {
        timer.start();
        std::sort(book.begin(), book.end());
        timer.stop();
        cout << timer.getTimeInSeconds().count() << endl;
    }


    // Time how long it takes to sort a list
    cout << "List Sort Time" << endl;
    for (auto book : listBooks) {
        timer.start();
        book.sort();
        timer.stop();
        cout << timer.getTimeInSeconds().count() << endl;
    }

    // Can not sort a map, it is an associative container
    cout << "Map Sort Time" << endl;
    cout << "Can not sort a map, it is an associative container" << endl;
    return 0;
}
