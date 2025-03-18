#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

 class Student : public Person {
    public:
       int rollno;

       Student(string n, int a, int r) : Person(n, a) {
        rollno = r; }
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
              cout << "Research Area = " << researchArea << endl;
         }
       
 };
    
int main() {
    GradStudent s1("Amna", 22, 21345, "Machine Learning");
    
    s1.getInfo();
    return 0; 
}


