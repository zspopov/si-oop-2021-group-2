#include <iostream>
using namespace std;

const unsigned int MAX_SECONDS = 86399;

class Timestamp {
private:
    unsigned short HH;
    unsigned short MM;
    unsigned short SS;
public:
    void to_timestamp(unsigned int seconds);
    Timestamp add(const Timestamp & rhs);
    Timestamp& add_to(const Timestamp& rhs);
    unsigned int to_seconds() const;
    void print() const;
};