#include "italianchef.h"

ItalianChef::ItalianChef(const string & chefName) : Chef(chefName) { // Konstruktori
    cout << "ItalianChef " << name << " konstruktori." << endl;
}

ItalianChef::~ItalianChef() { // Destruktori
    cout << "ItalianChef " << name << " destruktori." << endl;
}

// Metodit:
string ItalianChef::getName() const {
    return name; // Palauttaa nimen
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta." << endl; // Tekee pastaa
}
