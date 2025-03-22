#include <iostream>
using namespace std;

class Bank {
public:
    virtual void loanInterestRate() = 0; // Pure virtual function
};

class SBI : public Bank {
public:
    void loanInterestRate() override {
        cout << "SBI Loan Interest Rate: 7%" << endl;
    }
};

class HDFC : public Bank {
public:
    void loanInterestRate() override {
        cout << "HDFC Loan Interest Rate: 8.5%" << endl;
    }
};

int main() {
    Bank* bank1 = new SBI();
    Bank* bank2 = new HDFC();

    bank1->loanInterestRate();  // Output: SBI Loan Interest Rate: 7%
    bank2->loanInterestRate();  // Output: HDFC Loan Interest Rate: 8.5%

    delete bank1;
    delete bank2;

    return 0;
}
