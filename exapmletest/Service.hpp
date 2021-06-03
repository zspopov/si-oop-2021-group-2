#ifndef SERVICE_H
#define SERVICE_H

#include "Vehicle.hpp"
#include "Bus.hpp"
#include "Car.hpp"

#include <vector>

class Service {
private:
    vector<Vehicle *> service;
    unsigned int capacity;
    static const unsigned int MAXIMUM_CAPACITY;
public:
    Service() = default;
    Service(const Service& other);
    Service& operator=(const Service& other);
    ~Service();

    void add(Vehicle * vehicle);

    int hasSpace() const;

    void print() const;
};

#endif//SERVICE_H