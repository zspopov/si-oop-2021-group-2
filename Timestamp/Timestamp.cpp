#include "Timestamp.hpp"

void Timestamp::to_timestamp(unsigned int seconds) {
    if(seconds > MAX_SECONDS) {
        seconds = seconds % MAX_SECONDS;
    }
    HH = seconds / (60*60);
    MM = (seconds / 60) % 60;
    SS = seconds % 60;
}

Timestamp Timestamp::add(const Timestamp & rhs) {
    Timestamp result;
    result.to_timestamp(this->to_seconds() + rhs.to_seconds());
    return result;
}

Timestamp& Timestamp::add_to(const Timestamp& rhs) {
    this->to_timestamp(this->to_seconds() + rhs.to_seconds());
    return *this;
}

unsigned int Timestamp::to_seconds() const {
    return HH * 3600 + MM * 60 + SS;
}

void Timestamp::print() const {
    cout << HH << ":" << MM << ":" << SS << "\n";
}