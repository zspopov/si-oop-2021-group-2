#ifndef Computer_H
#define Computer_H

#include <iostream>
#include <cstring>
#include "DriveList.hpp"

class Computer {
private:
    char * model;
    double price;
    DriveList driveList;
public:
    Computer();
    Computer(const char * model, double price);
    Computer(const Computer& other);
    ~Computer();
    Computer& operator=(const Computer& other);

    void setModel(const char * model);
    void setPrice(double price);
    const char * getModel() const;
    double getPrice() const;
    DriveList getDriveList() const;

    void addDrive(const Drive& drive);
    void changeDrive(unsigned int index, const Drive& drive);

    void print() const;
};


#endif//Computer_H