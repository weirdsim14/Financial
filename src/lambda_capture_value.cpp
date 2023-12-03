#include <iostream>
class Car {
public:
    void setSpeed(int s) {
        speed = s;
    }

    int getSpeed() const {
        return speed;
    }

private:
    int speed = 0;
};

int main() {
    Car myCar;
    myCar.setSpeed(50); // Set the original car's speed to 50

    auto changeSpeedByValue = [myCar]() mutable {
        myCar.setSpeed(100); // This changes the speed of the copy inside the lambda
        std::cout << "Speed inside lambda (by value): " << myCar.getSpeed() << std::endl;
    };

    changeSpeedByValue(); // Execute the lambda

    std::cout << "Speed outside lambda (original car): " << myCar.getSpeed() << std::endl;
    return 0;
}
