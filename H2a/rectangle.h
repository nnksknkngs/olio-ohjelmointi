#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle {
    private: // Jäsenmuuttujat private
    double width;
    double height;

    public: // Metodit public
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    double getArea() const;
    double getCircum() const;
};

#endif // RECTANGLE_H
