#include "Student.hpp"

Student::Student(string name, string egn, string telNumber, string fn) 
                : Person(name, egn, telNumber), fn(fn) {}
    
void Student::printInfo() const {
    cout << this->name << " " << this->egn << " " << this->telNumber  << " " << this->fn << "\n";
}

