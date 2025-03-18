#include <iostream>
#include <string>
using namespace std;

class Student {

public:
    string name;
    int rollno;

    Student(string n, int r) {
        name = n;
        rollno = r;}

       };      

 class Teacher {
    public:
         string subject;
         double salary;

         Teacher(string s, double sal) {
            subject = s;
            salary = sal;
        }
 };
    
    class TA:public Student, public Teacher {
        public:

    TA(string n, int r, string s, double sal)  : Student(n, r), Teacher(s, sal) {

    }

             void getInfo() {
              cout << "Name = " << name << endl;
              cout << "Age = " << rollno << endl;
              cout << "Roll No = " << subject << endl;
              cout << "Salary = " << salary<<endl;
         }
       
 };
    
int main() {
   TA t1("Amna", 22, "Machine Learning",22000);
    
  t1.getInfo();
    return 0; 
}


