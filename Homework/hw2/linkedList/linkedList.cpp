// linkedList.cpp
// Bernard Laughlin
// Creates a linked list of book metadata

#include <iostream>
using std::cout;
using std::endl;
using std::string;
#include <list>
using std::list;
#include <algorithm>
using std::sort;

class Book {
public:
    string title;
    string author;
    string releaseDate;
    string language;
    string producedBy;
    bool operator < (const Book & b) {
        return (title < b.title);
    }
};

void printLibrary(list<Book> & books) {
    for (auto book : books) {
        cout << book.title << endl;
    }
}


bool myFunction (Book a, Book b) {return (a.title < b.title);}

int main() {
    // create books
    Book book1, book2, book3, book4, book5;
    book1.title = "Frankenstein";
    book1.author = "Mary Wollstonecraft (Godwin) Shelley";
    book1.releaseDate = "31, 1993";
    book1. language = "English";
    book1. producedBy = "Judith Boss, Christy Phillips, Lynn Hanninen, and David Meltzer";
    book2.title = "Pride and Prejudice";
    book2.author = "Jane Austen";
    book2.releaseDate = "June, 1998";
    book2.language = "English";
    book2.producedBy = "Anonymous Volunteers and David Widger";
    book3.title = "The Scarlet Letter";
    book3.author = "Nathaniel Hawthorne";
    book3.releaseDate = "May 22, May 5, 2008";
    book3.language = "English";
    book3.producedBy = "Markus Brenner, Irma Spehar and the Online Distributed Proofreading Team";
    book4.title = "The Great Gatsby";
    book4.author = "F. Scott Fitzgerald";
    book4.language = "English";
    book4.releaseDate = "January 17, 2021";
    book4.producedBy = "Alex Cabal for the Standard Ebooks project, based on a transcription produced for Project Gutenberg Australia";
    book5.title = "Alice’s Adventures in Wonderland";
    book5.author = "Lewis Carroll";
    book5.releaseDate = "January, 1991";
    book5.language = "English";
    book5.producedBy = "Arthur DiBianca and David Widger";


    list<Book> library = {book1, book2};
    cout << "Testing of Queue" << endl;
    cout << "Pushing a book to the back of the list" << endl;
    library.push_back(book3);
    printLibrary(library);
    cout << "Popping a book to the front of the list" << endl;
    library.pop_front();
    printLibrary(library);
    cout << "Pushing a book to the back of the list" << endl;
    library.push_back(book4);
    printLibrary(library);
    cout << "Popping a book to the back of the list" << endl;
    library.pop_back();
    library.push_back(book1);

    printLibrary(library);

    cout << (book1 < book2) << endl;
    cout << (book2 < book1) << endl;
    library.sort([](Book & a, Book & b){return a < b;});
    printLibrary(library);
    cout << "Searching for book in library" << endl;
    auto it = std::find_if(library.begin(), library.end(), [](Book const & b){
        return b.title == "Pride and Prejudice";
    });
    if (it != library.end() ) {
        cout << "Found book \"" << it->title << "\" by: " << it->author << endl;
    } else cout << "Could not find book title" << endl;

    cout << "Inserting The Great Gatsby before Pride and Prejudice" << endl;
    library.insert(it, book4);
    printLibrary(library);
    return 0;
}
