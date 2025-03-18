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
    
};
class GradStudent : public Student {
    public:
         string researchArea;
    
       GradStudent(string n, int a, int r, string ra) : Student(n, a, r) {
          researchArea = ra;
       }
    
         void getInfo() {
          cout << "Name = " << name << endl;
          cout << "Age = " << age << endl;
          cout << "Roll No = " << rollno << endl;
          cout << "= " << researchArea << endl;
     }
   
};

class Teacher{
    public:
    string subject;
    double salary;
    Teacher(string s, double sal){
        subject = s;
        salary = sal;
    }

};
 
class TA : public Student, public Teacher {
    public:
    string researchArea;
    TA(string n, int a, int r, string ra, string s, double sal) : Student(n, a, r), Teacher(s, sal) {
        researchArea = ra;
    }
    void getInfo() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Roll No = " << rollno << endl;
        cout << "Research Area = " << researchArea << endl;
        cout << "Subject = " << subject << endl;
        cout << "Salary = " << salary << endl;
    }
};
int main() {
GradStudent s1("Amna", 22, 21345, "Machine Learning");
s1.getInfo();

TA t1("Ali", 25, 21346, "Data Science", "AI", 50000);
t1.getInfo();

return 0; 
}

