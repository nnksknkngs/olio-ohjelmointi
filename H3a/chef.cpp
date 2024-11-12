#include "chef.h"

Chef::Chef(const string & chefName) : name(chefName) { // Konstruktori
    cout << "Chef " << name << " konstruktori."<< endl;
}

Chef::~Chef() { // Destruktori
    cout << "Chef " << name << " destruktori." << endl;
}

// Metodit:
void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad." << endl;
}
void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup." << endl;
}
