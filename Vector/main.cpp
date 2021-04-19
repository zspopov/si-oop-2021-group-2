#include "Vector.hpp"
#include "String.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    Vector<int> a;
    a.pushBack(3);
    a.pushBack(5);
    a.pushBack(12);
    a.print();

    String s;
    cout << s.get() << "\n";

    String b("proba");
    cout << b.get() << "\n";

    return 0;
}