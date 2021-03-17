#ifndef HARD_DRIVE_LIST_H
#define HARD_DRIVE_LIST_H

#include <iostream>
#include "Drive.hpp"

const int capacity = 6;

class DriveList {
private:
    Drive list[capacity];
    int size;
    bool isFull() const;
public:
    DriveList();
    void add(const Drive& Drive);
    void change(unsigned int index, const Drive& Drive);
    void print() const;
};

#endif//HARD_DRIVE_LIST_H