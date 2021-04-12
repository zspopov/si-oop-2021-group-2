#include "Base.hpp"

Base::Base() {
    this->x = 0;
    this->y = 0;
    p = new char[1];
    p[0] = '\0';
}

Base::Base(int x, int y, const char * p) {
    this->x = x;
    this->y = y;
    this->p = new char[strlen(p) + 1];
    strcpy(this->p, p);
}

Base::Base(const Base& other) {
    this->x = other.x;
    this->y = other.y;
    this->p = new char[strlen(other.p) + 1];
    strcpy(this->p, other.p);
}

Base& Base::operator=(const Base& other) {
    if(this != &other){
        this->x = other.x;
        this->y = other.y;
        
        delete[] p;
        this->p = new char[strlen(other.p) + 1];
        strcpy(this->p, other.p);
    }
    return *this;
}
Base::~Base() {
    delete[] p;
}
void Base::print() const {
    cout << x << " " << y << " " << p << " ";
}