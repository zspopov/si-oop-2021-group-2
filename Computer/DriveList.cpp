#include "DriveList.hpp"

DriveList::DriveList() {
    this->size = 0;
}

bool DriveList::isFull() const {
    if(this->size == capacity - 1) {
        return true;
    } else {
        return false;
    }
}
    
void DriveList::add(const Drive& drive) { //pass the object through reference so that we avoid additionl copy
    if(isFull()) {
        cout << "No more space for hard drives!\n";
    } else {
        this->list[this->size] = drive;
        this->size++;
    }
}
    
void DriveList::change(unsigned int index, const Drive& drive) {
    if(index >= this->size) {
        cout << "Please, enter valid index!\n";
    } else {
        this->list[index] = drive;
    }
}   

void DriveList::print() const {
    for(int i = 0; i < size; i++) {
        this->list[i].print();
    }
}