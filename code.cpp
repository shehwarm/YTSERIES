#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void displayArea() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void displayArea() override {
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void displayArea() override {
        cout << "Area of Rectangle: " << width * height << endl;
    }
};

int main() {
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Rectangle(4.0, 6.0);

    s1->displayArea();
    s2->displayArea();

    delete s1;
    delete s2;

    return 0;
}
