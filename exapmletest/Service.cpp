#include "Service.hpp"

const unsigned int Service::MAXIMUM_CAPACITY = 10;

Service::Service(const Service& other) {
    this->capacity = other.capacity;
    for (auto vehicle : other.service) {
        add(vehicle);
    }   
}

Service& Service::operator=(const Service& other) {
    if (this != &other) {
        for (auto vehicle : this->service) {
            delete vehicle;
        }

        this->capacity = other.capacity;
        for (auto vehicle : other.service) {
            add(vehicle);
        }   
    }
    return *this;
}

Service::~Service() {
    for (auto vehicle : this->service) {
        delete vehicle;
    }
}

int Service::hasSpace() const{
    unsigned int sum = 0;
    for (auto vehicle : this->service) {
        sum += vehicle->severityToPoints();
    }
    return sum;
}

void Service::add(Vehicle * vehicle) {
    if (hasSpace() + vehicle->severityToPoints() < MAXIMUM_CAPACITY) {
        this->service.push_back(vehicle->clone());
    }
}


void Service::print() const {
    for (auto vehicle : this->service) {
        cout << vehicle->getBrand() << " " << vehicle->getYear() << "\n";
    }
}
