/* This class represents a circle, derived from base class BasicShape. It has circle-specific information added upon the existing data of the base, overriding its calcArea() function
to work for a circle. */
#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"
#include <string>

class Circle : public BasicShape
{
private:
    double xCenter;
    double yCenter;
    double radius;

public:
    Circle(double x, double y, double r, std::string n = "Circle");

    // Getter functions
    inline double getX()
    {
        return xCenter;
    }
    inline double getY()
    {
        return yCenter;
    }
    inline double getR()
    {
        return radius;
    }

    // Setter functions
    void setX(double x);
    void setY(double y);
    void setR(double r);

    void calcArea();
};
#endif // CIRCLE_H
