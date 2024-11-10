#include <iostream>
using namespace std;     

int main() {
    int num1, num2;
    float num;
   
    cout << "Enter first integers: ";
    cin >> num1;
    cout<< "Enter second integers: ";
    cin>> num2;
    cout << "Enter a floating-point number: ";
    cin >> num;
    

    float sum = num1 + num2;
    float sumAsfloat= (float)sum;
    
    float product = num1 * num2; 
       float productAsfloat= (float)product;
    
    
    int division = (int)(num / sum); 

     cout << "Sum as float: " << sumAsfloat << endl;
         cout << "Product as float: " << productAsfloat << endl;
             cout << "Division result as int: " << division << endl;
    return 0;
}
