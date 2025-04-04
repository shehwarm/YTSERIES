#include <iostream>
using namespace std;

class EvenNumber {
private:
    int value;

public:
    EvenNumber() {
        value = 0;
    }

    void setValue(int val) {
        if (val % 2 != 0) {
            cout <<  << val << " is not even. Adjusting to " << (val + 1) << endl;
            value = val + 1;
        } else {
            value = val;
        }
    }

    int getValue() const {
        return value;
    }

    EvenNumber getNext() const {
        EvenNumber next;
        next.setValue(value + 2);
        return next;
    }

    EvenNumber getPrevious() const {
        EvenNumber prev;
        prev.setValue(value - 2);
        return prev;
    }
};

int main() {
    EvenNumber num1;  
    cout << "Initial even number: " << num1.getValue() << endl;

    num1.setValue(4);
    cout << "Current even number: " << num1.getValue() << endl;

    EvenNumber next = num1.getNext();
    cout << "Next even number: " << next.getValue() << endl;

    EvenNumber prev = num1.getPrevious();
    cout << "Previous even number: " << prev.getValue() << endl;

    num1.setValue(7); 
    cout << "Adjusted even number: " << num1.getValue() << endl;

    return 0;
}

