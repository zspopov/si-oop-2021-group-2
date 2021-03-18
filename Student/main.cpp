#include "Student.hpp"

int main() {
    Student a;
    a.print();
    Student b("gosho", 432, 32.1);
    b.print();
    Student c = b;
    c.print();
    a = b;
    a.print(); 
    a = a;
    a.print();
    Student d;
    d.getP()->

    return 0;
}