#include "Student.hpp" 

int main() {
    Person d;
    d.printInfo();
    Student b("ffff", "1234", "0888", "60000");
    b.printInfo();
    b.setName("Georgi");
    b.printInfo();

    return 0;
}