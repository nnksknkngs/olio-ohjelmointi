#include "animal.h"
using namespace std;

void Animal::callOut() {
    cout << "Elain aantelee." << endl;
}

Animal::~Animal() {
    cout << "Animal-olio tuhottu." << endl;
}
