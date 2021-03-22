#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;
public:
    ComplexNumber();
    ComplexNumber(double real, double imaginary);
    void setReal(double real);
    void setImaginary(double imaginary);
    double getReal() const;
    double getImaginary() const;
    ComplexNumber add(const ComplexNumber& rhs) const;
    ComplexNumber add_to(const ComplexNumber& rhs);
    ComplexNumber multiply(ComplexNumber rhs) const;

    void print() const;

friend ComplexNumber operator+(const ComplexNumber& lhs, const ComplexNumber& rhs);
friend bool operator==(const ComplexNumber& lhs, const ComplexNumber& rhs);
friend bool operator!=(const ComplexNumber& lhs, const ComplexNumber& rhs);

friend ostream& operator<<(ostream& out, const ComplexNumber& rhs);
};




