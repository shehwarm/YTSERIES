#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
      Employee(string n, string c){
            name = n;
            company = c;
      }

      string name;
      string company;
      
      

    void getInfo(){
        cout<<" Name = "<<name<<endl;
        cout<<" Company = "<<company<<endl;
        
       
    }  
};

int main(){
    Employee employee1("Maryam", "Amazon");
    employee1.getInfo();

   return 0;
}