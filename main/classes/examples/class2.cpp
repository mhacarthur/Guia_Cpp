
// Font: https://www.w3schools.com/cpp/cpp_class_methods.asp

#include <iostream>
using namespace std;

class Car {
    public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
    Car Carro1; // Create an object of Car
    cout << Carro1.speed(200) << "\n"; // Call the method with an argument
    return 0;
}
