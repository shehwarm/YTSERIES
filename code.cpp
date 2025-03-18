#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {
       cout<<"Person Constructor"<<endl;
    }
};

 class Student : public Person {
    public:
       int rollno;

       Student() {
              cout<<"Student Constructor"<<endl;
        }
    

       void getInfo() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Roll No = " << rollno << endl;
    }
       
 };
    
int main() {
    Student s1("Amna", 22, 21345);
    
    s1.getInfo();
    return 0; 
}