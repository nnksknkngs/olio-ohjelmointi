#include <iostream>
#include <memory> // Smart pointteria varten
#include "car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;


int main() {
    Car objectCar1; // Tallennus stack-muistiin

    objectCar1.setBrand("Volkswagen");
    objectCar1.setModel("Golf");
    objectCar1.setYearModel(1998);

    cout << "Auton tiedot: ";
    objectCar1.printData();
    cout << "\n";


    Rectangle *objectRectangle1 = new Rectangle; // Tallennus heap-muistiin

    objectRectangle1->setHeight(8.0);
    objectRectangle1->setWidth(5.0);
    cout << "Area: " << objectRectangle1->getArea() << endl;
    cout << "Circumference: " << objectRectangle1->getCircum() << "\n" << endl;

    delete objectRectangle1; // Poista olio


    auto studentPtr = make_unique<Student>(); // Luodaan Student-olio smart pointterilla

    studentPtr->setName("Meikä Poika");
    studentPtr->setStudentNumber(123);
    studentPtr->setAverage(4.5);

    cout << "Student Name: " << studentPtr->getName() << endl;
    cout << "Student Number: " << studentPtr->getStudentNumber() << endl;
    cout << "Student Average: " << studentPtr->getAverage() << endl;

    return 0;
}
