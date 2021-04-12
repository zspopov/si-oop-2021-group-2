#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <cstring>
using namespace std;

class Base{
private:
    int x,y;
    char * p;
public:
    Base();
    Base(int x, int y, const char * p);
    Base(const Base& other);
    Base& operator=(const Base& other);
    ~Base();
    void print() const;
};

#endif//BASE_H