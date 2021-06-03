#ifndef CAR_H
#define CAR_H

#include "Vehicle.hpp"

class Car : public Vehicle {
private:
    bool isPersonal;
public:
    Car(const string& brand = "", const string & model = "", unsigned int year = 0, const string & problem = "", Severity severity = Severity::NA, bool isPersonal = true);
    Vehicle * clone() const;

    bool IsPersonal() const;
};

#endif//CAR_H