#include <iostream>
#include "string.h"
using namespace std;

class PersonalData {

};

class Student {
private:
    char * name;
    int fn;
    double grade;
public:
    Student(const char * name = "default", int fn = 0, double grade = 2.0);
    Student(const Student& other);
    Student& operator=(const Student& other);
    ~Student();
    
    void setName(const char * name);
    void setFN(int fn);
    void print() const;
};





