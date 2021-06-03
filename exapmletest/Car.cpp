#include "Car.hpp"

Car::Car(const string& brand, const string & model, unsigned int year, const string & problem, Severity severity, bool isPersonal) 
: Vehicle(brand, model, year, problem, severity) , isPersonal(isPersonal) {}

Vehicle * Car::clone() const {
    return new Car(*this);
}

bool Car::IsPersonal() const {
    return isPersonal;
}