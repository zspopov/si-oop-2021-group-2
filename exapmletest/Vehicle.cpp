#include "Vehicle.hpp"

Vehicle::Vehicle(const string & brand, const string & model, unsigned int year, const string & problem, Severity severity) 
: brand(brand), model(model), year(year) , problem(problem) , severity(severity) {}


string Vehicle::getBrand() const {
    return brand;
}

string Vehicle::getModel() const {
    return model;
}

unsigned int Vehicle::getYear() const {
    return year;
}

string Vehicle::getProblem() const {
    return problem;
}

Severity Vehicle::getSeverity() const {
    return severity;
}

unsigned int Vehicle::severityToPoints() const {
    switch (this->severity)
    {
    case Severity::LOW : return 1;
    case Severity::MEDIUM : return 3;
    case Severity::HIGH : return 5;
    default : return 0;
    }
}