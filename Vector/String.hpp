#ifndef STRING_H
#define STRING_H

#include "Vector.hpp"
#include <cstring>

class String : public Vector<T> {
public:
    String() : Vector<char>() {
        this->pushBack('\0');
    }    
    String(const char * string) {
        for(int i = 0; i <= strlen(string); i++) {
            this->pushBack(string[i]);
        }
    }
    const char * get() const {
        return &this->vector[0];
    }
};



#endif//STRING_H