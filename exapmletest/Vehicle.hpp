#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

enum Severity {
    LOW,
    HIGH,
    MEDIUM,
    NA
};

class Vehicle {
private:
    string brand;
    string model;
    unsigned int year;
    string problem;
    Severity severity;
public:
    Vehicle(const string& brand = "", const string & model = "", unsigned int year = 0, const string & problem = "", Severity severity = Severity::NA);
    virtual Vehicle * clone() const = 0;
    
    string getBrand() const;
    string getModel() const;
    unsigned int getYear() const;
    string getProblem() const;
    Severity getSeverity() const;

    unsigned int severityToPoints() const;
};

#endif//VEHICLE_H