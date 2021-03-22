#include <iostream>
#include <string>
#include <vector>
#include "ComplexNumber.hpp"

int main() {

    ComplexNumber a;
    a.setReal(4);
    a.setImaginary(2);

    ComplexNumber b;
    b.setReal(3);
    b.setImaginary(5);
    
    a.print();
    b.print();

    (a + b).print();

    (a + b).print();

    cout << a << "\n";

    cout << (a = b) << "\n";
    
    return 0;
}


