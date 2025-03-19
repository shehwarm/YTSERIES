#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override { // Overrides base class method
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a; // Pointer to base class
    Dog d;
    Cat c;

    a = &d;
    a->makeSound();  // Output: Dog barks

    a = &c;
    a->makeSound();  // Output: Cat meows

    return 0;
}
