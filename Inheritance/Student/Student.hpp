#ifndef STUDENT_H
#define STUDENT_H


#include "Person.hpp"
#include <string>
#include <iostream>
using namespace std;

class Student : public Person {
private:
    string fn;
public:
    Student(string name = "default", string egn = "default", string telNumber = "default", string fn = "default");
    // void setFN(const string& fn) {

    // }
    // string getFN() const;
    //...
    void printInfo() const;
};

#endif//STUDENT_H