#include <iostream>
using namespace std;

class Student {
public:
       string name;

       Student () {
        cout<< "this is non parameterized constructor"<<endl;
       }

       Student(string n) {
        name = n;
        cout<< "this is parameterized constructor"<<endl;
       }

    };

int main() {
    Student s1("Maryam");
 
    return 0;
}