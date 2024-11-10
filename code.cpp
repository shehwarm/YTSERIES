#include <iostream>
using namespace std;
int main() {
    int number, rev = 0;
    cout << "Enter a number: ";
    cin >> number;
    do {
        rev = rev * 10 + (number % 10);  
        number = number / 10;  
    } while (number != 0);  
    cout << "Reversed number: " << rev << endl;
    return 0;
}
