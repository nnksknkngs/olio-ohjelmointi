#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car {
private: // Jäsenmuuttujat private
    string brand;
    string model;
    int yearModel;

public: // Metodit public
    // Konstruktori:
    Car(const string& brand, const string& model, int yearModel)
        : brand(brand), model(model), yearModel(yearModel) {}

    void printData() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
    }
};

#endif // CAR_H
