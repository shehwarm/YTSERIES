#include <iostream>
#include <string>
using namespace std;

class Employee{
    
      string name;
      string company;

    public:
      Employee(string n, string c){
            name = n;
            company = c;
      }
          
      Employee(Employee &orgObj) {
            name = orgObj.name;
            company = orgObj.company;
      }

    void getInfo(){
        cout<<" Name = "<<name<<endl;
        cout<<" Company = "<<company<<endl;
        
       
    }  
};

int main(){
    Employee employee1("Maryam", "Amazon");
    Employee employee2(employee1);
    employee2.getInfo();

   return 0;
}