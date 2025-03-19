#include <iostream>
using namespace std;

class MathOperations {
public:
    int add(int a, int b) { // Two parameters
        return a + b;
    }
    
    int add(int a, int b, int c) { // Three parameters
        return a + b + c;
    }
};

int main() {
    MathOperations math;
    cout << math.add(2, 3) << endl;       // Output: 5
    cout << math.add(2, 3, 4) << endl;    // Output: 9
    return 0;
}
