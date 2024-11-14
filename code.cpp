#include <iostream>
using namespace std;

int main() {
    int n = 25;
    int count = 1;
    
    for (int i = 1; i <= 5; i++) { 
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  "; 
        }
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl; 
    }

    count = 16;
    for (int i = 4; i >= 1; i--) { 
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl; 
    }

    return 0;
}