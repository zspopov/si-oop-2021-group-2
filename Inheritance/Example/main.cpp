#include "Der.hpp"


int main(){
    Der d(1,2, "oop", 3, "practice");
    Der b = d;
    Der c(9,9, "adsf", 10, "fdsfds");
    c.print();
    c = d;
    d.print();
    b.print();
    c.print();
    return 0;
}