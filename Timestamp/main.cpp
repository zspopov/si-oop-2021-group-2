#include "Timestamp.hpp"

int main() {
    Timestamp a;
    a.to_timestamp(86400/2 - 1);
    a.print();
    cout << a.to_seconds() << "\n";
    Timestamp b;
    b.to_timestamp(10000);
    b.print();
    Timestamp c;
    c.to_timestamp(12345);
    c.print();
    a.add(b).add(c);
    a.print();
    a.add_to(b).print();
    return 0;
}