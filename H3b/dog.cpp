#include "dog.h"
using namespace std;

void Dog::callOut() {
    cout << "Koira haukkuu!" << endl;
}

Dog::~Dog() {
    cout << "Dog-olio tuhottu." << endl;
}
