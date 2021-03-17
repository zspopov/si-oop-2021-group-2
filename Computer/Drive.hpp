#ifndef DRIVE_H
#define DRIVE_H

#include <iostream>
using namespace std;

enum DriveType {
        Undefined,
        SSD,
        HDD
};

class Drive {
private:
    DriveType type;
    int space;
    const char * DriveTypeToString() const;
public:
    Drive(DriveType type = DriveType::Undefined, int space = 0);
    
    //no need for setters and getters because in real life 
    //we can't change the type or the space of a drive
    //and because of laziness

    void print() const;
};

#endif//HARD_DRIVE_H