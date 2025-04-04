#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }

    int getX() const { return x; }
    int getY() const { return y; }

    string print() const {
        return "(" + to_string(x) + ", " + to_string(y) + ")";
    }

    double distanceTo(const Point& other) const {
        int xDiff = x - other.x;
        int yDiff = y - other.y;
        return sqrt(pow(xDiff, 2) + pow(yDiff, 2));
    }
};

int main() {
    Point p1, p2;
    p1.setX(5);
    p1.setY(7);
    p2.setX(3);
    p2.setY(9);

    cout << "Point 1: " << p1.print() << endl;
    cout << "Point 2: " << p2.print() << endl;

    cout << "Distance between points: " << p1.distanceTo(p2) << endl;

    return 0;
}