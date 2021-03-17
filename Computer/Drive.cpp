#include "Drive.hpp"

Drive::Drive(DriveType type, int space) {
    this->type = type;
    this->space = space;
}

const char * Drive::DriveTypeToString() const {
    switch (this->type)
    {
    case HDD :
        return "HDD";
    case SSD :
        return "SSD";
    default:
        return "Undefined";
    }
}

void Drive::print() const {
    cout << DriveTypeToString() << ", " << space << "; ";
}