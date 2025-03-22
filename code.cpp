#include <iostream>
using namespace std;

class Car {
private:
    int speed; // Hidden data member

public:
    void setSpeed(int s) { 
        if (s > 200) 
            cout << "Speed too high!" << endl;
        else 
            speed = s; 
    }
    
    void getSpeed() {
        cout << "Car speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    myCar.setSpeed(180);
    myCar.getSpeed();  // Output: Car speed: 180 km/h

    myCar.setSpeed(250); // Output: Speed too high!

    return 0;
}

