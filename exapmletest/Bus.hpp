#ifndef BUS_H
#define BUS_H

#include "Vehicle.hpp"

class Bus : public Vehicle {
private:
    bool isFull;
public:
    Bus(const string& brand = "", const string & model = "", unsigned int year = 0, const string & problem = "", Severity severity = Severity::NA, bool isFull = true);

    Vehicle * clone() const;

    bool IsFull() const;
};

#endif//BUS_H