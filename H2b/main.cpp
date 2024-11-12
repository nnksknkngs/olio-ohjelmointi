#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main() {
    vector<Car> carList; // Vektori

    // Luodaan kolme Car-luokan oliota
    Car car1("Volkswagen", "Golf", 1998);
    Car car2("Honda", "Accord", 2001);
    Car car3("Fiat", "Punto", 2010);

    // Lisätään oliot listaan
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    // Tulostetaan toisen alkion tiedot
    cout << "Toisen auton tiedot: " << endl;
    carList[1].printData();

    // Tulostetaan kaikkien autojen tiedot käyttämällä for-silmukkaa
    cout << "Kaikkien autojen tiedot: " << endl;
    for (const Car& car : carList) {
        car.printData();
    }

    return 0;
}
