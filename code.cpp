#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* gpaPtr;

    // Constructor takes a double value, not a pointer
    Student(string n, double g) {
        name = n;
        gpaPtr = new double; // Dynamically allocate memory
        *gpaPtr = g;         // Assign the value to the allocated memory
        cout << "Constructor called for " << name << endl;
    }

    // Destructor to free dynamically allocated memory
    ~Student() {
        delete gpaPtr; // Safe because gpaPtr was allocated with new
        cout << "Destructor called for " << name << endl;
    }

    void getInfo() {
        cout << "Name = " << name << endl;
        cout << "GPA = " << *gpaPtr << endl;
    }
};

int main() {
    Student s1("Maryam", 4.0); // Pass a double value
    s1.getInfo();
    return 0; // Destructor called automatically when s1 goes out of scope
}