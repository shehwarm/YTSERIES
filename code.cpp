#include <iostream>
using namespace std;

int main() {
    
    int count;
    cout << "Enter integer ";
    cin >> count;
    cout << "pre increment value = " << ++count << endl;
    cout << "pre decrement value = " << --count << endl;
    cout << "post increment value = " << count ++ << endl;
    cout << "post decrement value = " << count -- << endl;

    return 0;
}