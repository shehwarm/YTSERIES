#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    string libraryName;
public:
    Library(string name) : libraryName(name) {}
    string getLibraryName() {
        return libraryName;
    }
};

class Book {
private:
    string title;
    Library* library; 
public:
    Book(string t, Library* lib) : title(t), library(lib) {}
    void display() {
        cout << "Book Title: " << title << ", Library: " << library->getLibraryName() << endl;
    }
};

int main() {
    Library lib("City Central Library");

    Book b1("C++ Programming", &lib);
    Book b2("Data Structures", &lib);

    b1.display();
    b2.display();

    return 0;
}
