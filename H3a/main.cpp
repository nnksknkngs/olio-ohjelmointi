#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main() {
    // Luodaan Chef-luokan olio
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    cout << endl;

    // Luodaan ItalianChef-luokan olio
    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad(); // Kutsutaan metodeja
    italianChef.makeSoup();
    italianChef.makePasta();
    cout << "Name of the ItalianChef is " << italianChef.getName() << endl;

    return 0;
}
