# include <iostream>
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

    auto changeSpeedByReference = [&myCar]() {
        myCar.setSpeed(100); // This changes the speed of the original car
        std::cout << "Speed inside lambda (by reference): " << myCar.getSpeed() << std::endl;
    };

    changeSpeedByReference(); // Execute the lambda

    std::cout << "Speed outside lambda (original car): " << myCar.getSpeed() << std::endl;
    int x = 10;
    auto lambda = [x]() { return x * x; }; // 'x' is captured by value
    std::cout << lambda() << std::endl;  // Returns 100
    int y = 20;
    auto lambda2 = [&y]() { y = 30; }; // 'y' is captured by reference
    lambda2();
    std::cout << y << std::endl; // Returns 30
    return 0;

}
