#ifndef STRING_H
#define STRING_H

#include <vector>
#include <cstring>
using namespace std;

class String : public vector<char> {
public:
    String() {
        this->push_back('\0');
    }
    String(const char * string) {
        for(int i = 0; i <= strlen(string); i++) {
            this->push_back(string[i]);
        }
    }
    const char * getString() const {
        return &this->at(0);
    }  
};


 
#endif//STRING_H