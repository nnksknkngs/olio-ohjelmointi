#include "car.h"
#include <iostream>
using namespace std;

// Konstruktorit
Car::Car() : model("undefined"), brand("undefined") {}
Car::Car(string mdl, string brd) : model(mdl), brand(brd) {}

// Engine-olio
void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

// Wheel-oliot
void Car::setWheels() {
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

// Getterit ja setterit
string Car::getModel() const {
    return model;
}

void Car::setModel(string mdl) {
    model = mdl;
}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(string brd) {
    brand = brd;
}

// Tulostaa auton tiedot, mukaan lukien moottorin ja renkaiden tiedot
void Car::printDetails() const {
    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}
