#include <iostream>

using namespace std;

int a, b;

void calcSum(int a, int b) {
    cout << "Summa: " << (a + b) << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Jakaja ei voi olla nolla!" << endl;
    } else {
        cout << "Osamaara: " << (a / b) << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Jakaja ei voi olla nolla!" << endl;
        return 0.0f;
    }
    return a / b;
}

int main()
{
    // Vaihe 1: kysytään käyttäjältä luvut
    cout << "Anna ensimmainen kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    // Vaihe 2: kutsutaan calcSum ja calcDiv -funktioita
    calcSum(a, b);
    calcDiv(a, b);

    // Vaihe 3: kutsutaan retSum ja retDiv -funktioita ja tulostetaan niiden palauttamat arvot
    int sum = retSum(a, b);
    float div = retDiv(a, b);
    cout << "Summa: " << sum << endl;
    cout << "Osamaara: " << div << endl;

    return 0;
}
