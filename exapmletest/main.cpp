#include "Service.hpp"

int main() {
    Service service;
    Car * first = new Car("Ford", "Mustang", 2015, "Dn", Severity::HIGH, true);
    Car * second = new Car("Ford", "Fiesta", 2001, "sad", Severity::MEDIUM, false);
    Bus * third = new Bus("Ford", "Modle", 400, "sda", Severity::LOW, true);
    Bus * fourth = new Bus("Mercedes", "Dn", 1967, "poiasd", Severity::HIGH, false);

    service.add(first);
    service.add(second);
    service.add(third);
    service.add(fourth);

    service.print();

    return 0;
}