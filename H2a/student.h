#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
private: // Jäsenmuuttujat private
    string name;
    int studentNumber;
    double average;

public: // Metodit public
    // Setterit
    void setName(const string newName);
    void setStudentNumber(int newStudentNumber);
    void setAverage(double newAverage);
    // Getterit
    string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};

#endif // STUDENT_H
