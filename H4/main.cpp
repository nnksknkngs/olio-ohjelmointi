#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    // Luo Car-olio
    Car myCar("Corolla", "Toyota");

    // Kutsu Car-olion setEngine metodia
    myCar.setEngine();
    // Kutsu Car-olion setWheels metodia
    myCar.setWheels();

    // Tulosta tiedot
    myCar.printDetails();

    return 0;
}
