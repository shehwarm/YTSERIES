#include <iostream>
#include<string>
using namespace std;

class Employee{
    public:
      Employee(){
            color="yellow";
      }
      string name;
      string company;
      int age;
      string color;

    void IntroduceYourself(){
        cout<<" Name = "<<name<<endl;
        cout<<" Company = "<<company<<endl;
        cout<<" Age = "<<age<<endl;
       
    }  
};

int main(){
    Employee employee1;
    employee1.name = "Maryam";
    employee1.company = "Google";
    employee1.age = 22;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.name = "Shehwar";
    employee2.company = "Netflix";
    employee2.age = 23;
    employee2.IntroduceYourself();
    cout<<employee1.color<<endl;
    cout<<employee2.color<<endl;
    return 0;

}