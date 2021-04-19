#include <iostream>

class Laptop {
protected:
    double clockSpeed;
public:
    Laptop(double clockSpeed = 0) {
        this->clockSpeed = clockSpeed;
        std::cout << "Laptop()\n";
    }
};

class Tablet {
protected:
    double pressureSensitivity;
public:
    Tablet(double pressureSensitivity = 0) {
        this->pressureSensitivity = pressureSensitivity;
        std::cout << "Tablet()\n";
    }
};

class TwoInOne : public Laptop, public Tablet {
public:
    TwoInOne(double clockSpeed = 0, double pressureSensitivity = 0) 
            : Laptop(clockSpeed), Tablet(pressureSensitivity) {}
    void print() const {
        std::cout << this->clockSpeed << " " << this->pressureSensitivity << "\n";
    }
};

