#include <iostream>
#include <string>
using namespace std;

// Class definition
class Car {
public:    // Access specifier
    // Data members (attributes)
    string brand;
    int year;
    float speed;

    // Member function (method)
    void accelerate() {
        speed += 10;
        cout << "Speed increased to " << speed << " km/h\n";
    }
};

int main() {
    // Creating objects of Car class
    Car car1;  // Object 1
    Car car2;  // Object 2

    // Accessing and setting object properties
    car1.brand = "Toyota";
    car1.year = 2020;
    car1.speed = 0;

    car2.brand = "Ford";
    car2.year = 2022;
    car2.speed = 50;

    // Using object methods and properties
    cout << car1.brand << " " << car1.year << endl;
    car1.accelerate();

    cout << car2.brand << " " << car2.year << endl;
    car2.accelerate();

    return 0;
}