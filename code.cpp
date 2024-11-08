#include <iostream>
using namespace std;

int main() {
    
    int num;
    int numSquare;
     
     cout << "Enter number ";
     cin >> num ;

    if(num>=10 && num<=100) {
        numSquare = num * num;
        cout << "Square of the " << num << " is =" << numSquare << endl;
    }
    else{
        cout << "input error/n";
    }
    return 0;
}