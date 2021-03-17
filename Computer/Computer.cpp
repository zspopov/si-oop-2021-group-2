#include "Computer.hpp"

Computer::Computer() {
    this->model = new char[1];
    this->model[1] = '\0';
    this->price = 0;
}

Computer::Computer(const char * model, double price) {
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
    this->price = price;
}

Computer::Computer(const Computer& other) {
    this->model = new char[strlen(other.model) + 1];
    strcpy(this->model, other.model);
    this->price = other.price;
    this->driveList = other.driveList;
}

Computer::~Computer() {
    delete[] model;
}

Computer& Computer::operator=(const Computer& other) {
    if(this != &other) {
        delete[] model;

        this->model = new char[strlen(other.model) + 1];
        strcpy(this->model, other.model);
        this->price = other.price;
        this->driveList = other.driveList;
    }
    return *this;
}

void Computer::setModel(const char * model) {
    delete[] model;
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

void Computer::setPrice(double price) {
    this->price = price;
}

const char * Computer::getModel() const {
    return this->model;
}

double Computer::getPrice() const {
    return this->price;
}

DriveList Computer::getDriveList() const {
    return this->driveList;
}

void Computer::addDrive(const Drive& drive) {
    this->driveList.add(drive);
}

void Computer::changeDrive(unsigned int index, const Drive& drive) {
    this->driveList.change(index, drive);
}

void Computer::print() const {
    cout << this->model << ", " << this->price << ", driveList: ";
    this->driveList.print();
    cout << "\n";
}