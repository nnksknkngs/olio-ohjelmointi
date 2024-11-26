#include "wheel.h"

// Konstruktorit
Wheel::Wheel() : size(0), type("undefined") {}
Wheel::Wheel(int sz, string tp) : size(sz), type(tp) {}

// Getterit ja setterit
int Wheel::getSize() const {
    return size;
}

void Wheel::setSize(int sz) {
    size = sz;
}

string Wheel::getType() const {
    return type;
}

void Wheel::setType(string tp) {
    type = tp;
}
