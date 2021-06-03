#include "Bus.hpp"

Bus::Bus(const string & brand, const string & model, unsigned int year, const string & problem, Severity severity, bool isFull) 
: Vehicle(brand, model, year, problem, severity) , isFull(isFull) {}

Vehicle * Bus::clone() const {
    return new Bus(*this);
}

bool Bus::IsFull() const {
    return isFull;
}