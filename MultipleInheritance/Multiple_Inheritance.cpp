#include <iostream>
using namespace std;


class Base1{
private: 
    int b1;
public:
    Base1() {
        b1 = 0;
        cout << "Base1()" << "\n";
    }
    Base1(int b1) {
        this->b1 = b1;
    }
    ~Base1() {
        cout << "~Base1()" << "\n";
    }
    void print() const{
        cout << b1 << " ";
    }
};

class Base2{
private:
    int b2;
public:
    Base2() {
        b2 = 0;
        cout << "Base2()" << "\n";
    }
    Base2(int b2){
        this->b2 = b2;
    }
    ~Base2() {
        cout << "~Base2()" << "\n";
    }
    void print() const{
        cout << b2 << " ";
    }
};

class Der : public Base2, public Base1 {
private:
    int d1;
public:
    Der() : Base1(), Base2(){
        d1 = 0;
        cout << "Der()" << "\n";
    }
    Der(int b1, int b2, int d1) : Base1(b1), Base2(b2), d1(d1) {}
    Der(const Der& other) : Base1(other), Base2(other), d1(other.d1) {}
    ~Der() {
        cout << "~Der()" << "\n";
    }
    void print() const{
        Base1::print();
        Base2::print();
        cout << d1 << "\n";
    }
};

int main(){
    Der a(1,2,3);
    Der b = a;
    a.print();
    b.print();
    return 0;
}
