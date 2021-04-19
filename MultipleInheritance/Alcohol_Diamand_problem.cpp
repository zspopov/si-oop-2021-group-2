#include <iostream>
using namespace std;

class Djibri { 
private:
    int degrees;
public:
    Djibri() {
        degrees = 50;
    }
    void print() const{
        cout << degrees;
    }
};

class Whisky : virtual public Djibri {
public:
    Whisky() : Djibri() {}
};

class Rakia : virtual public Djibri{
public:
    Rakia() : Djibri() {}
};

class FireInTheHole : public Whisky, public Rakia {
public:
    FireInTheHole() : Whisky(), Rakia() {} 
};

int main(){
    FireInTheHole a;
    a.print();
    cout << "\n";
    return 0;
}