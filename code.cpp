#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string n, int a){
        name = n;
        age = a;
    }
};
class Student : public Person {
    public:
    int rollno;
    Student(string n, int a , int r) : Person (n,r) {
        rollno = r;
    }
    void getInfo() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Roll No = " <<rollno<<endl;
    }
};

class Teacher : public Person {
    public:
    string subject;
    double salary;
    Teacher(string n, int a, string s, double sal) : Person(n,a) {
        subject = s;
        salary = sal;
    }
    void getInfo() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age<<endl;
        cout<< "Subject = " << subject<<endl;
        cout << "Salary = " << salary<<endl;
}


       
 };
    
int main() {
    Student s1("Ali",20,2345);
    s1.getInfo();

    Teacher t1("Amna", 22, "Machine Learning",22000);
    t1.getInfo();
    return 0; 
}


