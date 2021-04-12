#ifndef DER_H
#define DER_H

#include "Base.hpp"
#include <iostream>
#include <cstring>
using namespace std;

class Der : public Base {  
private:
    int z;
    char * t;
public:
    Der();
    Der(int x, int y, const char * p, int z, const char * t);
    Der(const Der& other);
    Der& operator=(const Der& other);
    ~Der();
    void print() const;
};

#endif//DER_H