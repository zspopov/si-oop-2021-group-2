#include "Student.hpp"


Student::Student(const char * name, int fn, double grade) {
    this->name = new char[8];
    strcpy(this->name, name); 
    this->fn = fn;
    this->grade = grade;
}

Student::Student(const Student& other) {
    this->name = new char[strlen(other.name) + 1];
    strcpy(this->name, other.name);
    this->fn = other.fn;
    this->grade = other.grade;
}

Student& Student::operator=(const Student& other) {
    if(this != &other) {
        delete[] this->name;

        this->name = new char[strlen(other.name) + 1];
        strcpy(this->name, other.name);
        this->fn = other.fn;
        this->grade = other.grade;
    }
    return *this;
}

Student::~Student() {
    cout << "We are deleting: " << this << "\n";
    cout << "name pointer points to: " << name << " on address " << &name  << "\n";
    delete[] name;
}

void Student::setFN(int fn) {
    this->fn = fn;
}

void Student::print() const {
    cout << "name: " << name << " fn: " << fn << " grade: " << grade << " " <<  this << "\n";
}

void Student::setName(const char * name) {
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}
