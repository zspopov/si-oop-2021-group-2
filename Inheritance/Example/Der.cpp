#include "Der.hpp"

Der::Der() : Base() {
    this->z = 0;
    t = new char[1];
    t[0] = '\0';
}

Der::Der(int x, int y, const char * p, int z, const char * t) : Base(x,y,p) {
    this->z = z;
    this->t = new char[strlen(t) + 1];
    strcpy(this->t, t);
}

Der::Der(const Der& other) : Base(other) {
    this->z = other.z;
    this->t = new char[strlen(other.t) + 1];
    strcpy(this->t, other.t);
}

Der& Der::operator=(const Der& other) {
    if(this != &other){
        Base::operator=(other);
        this->z = other.z;

        delete[] this->t;
        this->t = new char[strlen(other.t) + 1];
        strcpy(this->t, other.t);
    }
    return *this;
}
Der::~Der() {
    delete[] t;
}

void Der::print() const {
    Base::print();
    cout << z << " " << t << "\n";
}