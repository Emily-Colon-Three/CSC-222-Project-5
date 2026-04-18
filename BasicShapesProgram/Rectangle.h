/* This class represents a rectangle, derived from the class BasicShape. It has a length and width, its function to calculate the area of a Rectangle object overriding the
pure virtual function of the base. */
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"
#include <string>

class Rectangle : public BasicShape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w, std::string  = "Rectangle");

    // Getter functions
    inline double getLength()
    {
        return this->length;
    }
    inline double getWidth()
    {
        return this->width;
    }

    // Setter functions
    void setLength(double newLength);
    void setWidth(double newWidth);

    void calcArea();
};
#endif // RECTANGLE_H
