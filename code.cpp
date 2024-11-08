#include <iostream>
using namespace std;

int main() {
    
    int marks = 79;
    if(marks > 80 ) {
        cout << " You got an A grade";
    }
    
    else if(marks > 70 && marks <= 80 ){
        cout << " You got a B grade";
    }

    else {
        cout << " You are fail";
    }

    
    
    return 0;
}