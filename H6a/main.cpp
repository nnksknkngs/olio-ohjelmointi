#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    MyClass myObject; // MyClass luokan tulee periä luokka QObject

    myObject.raiseMySignal(); // Luo olio luokasta MyClass ja kutsu sen metodia raiseMySignal

    return app.exec();
}
