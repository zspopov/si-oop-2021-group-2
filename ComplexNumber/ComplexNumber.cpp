#include "ComplexNumber.hpp"

ComplexNumber::ComplexNumber(){
    this->real = 0;
    this->imaginary = 0;
}

ComplexNumber::ComplexNumber(double real, double imaginary){
    this->real = real;
    this->imaginary = imaginary;
}

void ComplexNumber::setReal(double real){
    this->real = real;
}
void ComplexNumber::setImaginary(double imaginary){
    this->imaginary = imaginary;
}
double ComplexNumber::getReal() const{
    return real;
}
double ComplexNumber::getImaginary() const{
    return imaginary;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& rhs) const{ //Right hand side
    ComplexNumber result;
    result.real = this->real + rhs.real;
    result.imaginary = this->imaginary + rhs.imaginary;
    return result;
}

ComplexNumber ComplexNumber::add_to(const ComplexNumber& rhs) {
    this->real = this->real + rhs.real;
    this->imaginary = this->imaginary + rhs.imaginary;
    return *this;
}

ComplexNumber ComplexNumber::multiply(ComplexNumber rhs) const{
    ComplexNumber result;
    result.real = this->real*rhs.real - this->imaginary*rhs.imaginary;
    result.imaginary = this->real*rhs.imaginary + this->imaginary*rhs.real;
    return result;
}
void ComplexNumber::print() const {
    if (imaginary >= 0) {
        cout << real << "+" << imaginary << "i" << "\n";
    } else {
        cout << real << imaginary << "i" <<  "\n";
    }
}

ComplexNumber operator+(const ComplexNumber& first, const ComplexNumber& second) {
    ComplexNumber result;
    result.real = first.real + second.real;
    result.imaginary = first.imaginary + second.imaginary;
    return result;
}

bool operator==(const ComplexNumber& lhs, const ComplexNumber& rhs) {
    return (lhs.real == rhs.real && lhs.imaginary == rhs.imaginary);
}

bool operator!=(const ComplexNumber& lhs, const ComplexNumber& rhs) {
    return !(lhs == rhs);
}

ostream& operator<<(ostream& out, const ComplexNumber& rhs) {
    if (rhs.imaginary >= 0) {
        out << rhs.real << "+" << rhs.imaginary << "i";
    } else {
        out << rhs.real << rhs.imaginary << "i";
    }
    return out;
}

