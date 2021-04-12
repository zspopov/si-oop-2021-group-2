#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    string egn;
    string telNumber;
public:
    Person(string name = "default", string egn = "default", string telNumber = "default");
    void setName(const string& name);
    string getName() const;
    //...
    void printInfo() const;
};

#endif//PERSON_H