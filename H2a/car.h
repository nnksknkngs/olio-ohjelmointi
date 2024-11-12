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
    void setBrand(const string newBrand); // Setterit void-tyyppiä, koska ei palauta mitään (get)
    void setModel(const string newModel);
    void setYearModel(int newYearModel);
    void printData() const;
};


#endif // CAR_H
