#include "Person.hpp"

Person::Person(string name, string egn, string telNumber) 
                : name(name), egn(egn), telNumber(telNumber) {}

void Person::setName(const string& name) {
    this->name = name;
}

string Person::getName() const {
    return this->name;
}

void Person::printInfo() const {
    cout << this->name << " " << this->egn << " " << this->telNumber  << " "; 
}