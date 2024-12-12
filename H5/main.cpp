#include <iostream>
#include "ClassB.h"
#include "AssosiationA.h"
#include "AggregationA.h"

#include <string>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    // Tulosta muuttujien a ja b arvot ja osoitteet
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;

    // Lisää osoitinmuuttuja myPointer ja sijoita siihen muuttujan a osoite
    int *myPointer = &a;
    cout << "\nPointterin osoittama osoite on: " << myPointer << endl; // Tulosta osoittimen osoittaman muistipaikan osoite
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl; // Tulosta osoittimen osoittaman muistipaikan sisältö

    // Sijoita osoittimeen myPointer muuttujan b osoite
    myPointer = &b;
    cout << "\nPointterin osoittama osoite on: " << myPointer << endl; // -||-
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl; // -||-

    // Luo referenssi nimeltään refA ja laita se viittaamaan muuttujaan a
    int &refA = a;
    cout << "\nrefA osoittaa osoitteeseen on: " << &refA << endl; // -||-
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl; // -||-
    // refA ei voi osoittaa muualle, sillä referenssi on sidottu tiettyyn muuttujaan eikä sidosta voi muuttaa myöhemmin ohjelman suorituksen aikana
    // refA = b tässä välissä koodia muuttaisi a:n arvoksi b:n arvon eli 10

    // Vaihe 2: Assosiaatio
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"\nAssosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    // Vaihe 3: Aggregaatio
    cout<<"\nAggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr: "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
