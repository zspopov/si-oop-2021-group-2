#include <iostream>
#include "Computer.hpp"
#include "Drive.hpp"

int main() {
    Computer myComputer;
    myComputer.print();
    Computer b("Lenovo", 400.32);
    b.print();
    Computer c = b;
    c.print();
    myComputer = c;
    myComputer.print();

    Drive hdd1(DriveType::HDD, 250);
    Drive ssd1(DriveType::SSD, 500);
    myComputer.addDrive(hdd1);
    myComputer.addDrive(ssd1);

    myComputer.print();

    Drive ssd2(DriveType::SSD, 700);
    myComputer.changeDrive(0, ssd2);

    myComputer.print();

    return 0;
}