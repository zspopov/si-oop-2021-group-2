#include "Vector.hpp"
#include <iostream>
using namespace std;

int main() {
    Vector<int> a;
    a.pushBack(3);
    a.pushBack(5);
    a.pushBack(12);
    a.print();
    return 0;
}