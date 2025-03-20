#include <iostream>
using namespace std;

class Parent {
    public:
        void show() {
            cout<< "Parent class"<<endl;
        }

        virtual void display() {
            cout<< "hello from parent"<<endl;
        }
};
class Child : public Parent {
    public:
        void show() {
            cout<< "Child class"<<endl;
        }
        void display() {
            cout<< "hello from child"<<endl;
        }
};
int main() {
    Child c1;
    c1.display();
    return 0;
}
