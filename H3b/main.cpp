#include <iostream>
#include "animal.h"
#include "dog.h"

int main()
{
    Animal* animalPtr = new Animal(); // Pointteri joka osoittaa Animal-olioon
    animalPtr->callOut(); // Tulostaa "Elain aantelee."

    Animal* dogPtr = new Dog(); // Pointteri joka osoittaa Dog-olioon
    dogPtr->callOut(); // Tulostaa "Koira haukkuu!"

    delete animalPtr; // Tuhotaan oliot erikseen koska käytetty heap-muistia new-operaattorilla luodessa
    delete dogPtr;

    return 0;
}
