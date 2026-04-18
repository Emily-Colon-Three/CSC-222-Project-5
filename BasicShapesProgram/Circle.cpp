#include "Circle.h"
#include "BasicShape.h"
#include <string>

const double PI = 3.14159;

/*
    Summary: Constructs a new circle object holding the data it is created with in the parameters.
    Parameters: The x value of the circle's center, the y value of its center, the radius, and the name of the circle, which is defaulted to "Circle"
    Return: None
    Preconditions: Input should be valid, as an incorrect value could make an incorrect area.
    Postconditions: A new Circle object is created with the specified data and calculated area.
*/
Circle::Circle(double x, double y, double r, std::string n)
{
    this->setX(x);
    this->setY(y);
    this->setR(r);

    this->setName(n);
    this->calcArea(); // Will calculate area then set it to the object's area variable
}

// Sets the xCenter of Circle object to x, the parameter. Has no return.
void Circle::setX(double x)
{
    this->xCenter = x;
}

// Sets yCenter of a Circle object from parameter "y"'s value. Has no return.
void Circle::setY(double y)
{
    this->yCenter = y;
}

// Sets radius of Circle object to r, the value passed in. It updates the area of Circle as well, using an overridden function of the base. Has no return.
void Circle::setR(double r)
{
    this->radius = r;

    this->calcArea();
}

/*
    Summary: An override of the calcArea() virtual function of BasicShape which uses the data of a Circle object to calculate the area before storing it.
    Parameters: None
    Return: None
    Preconditions: Circle has a radius given, not negative, or else area will end up invalid.
    Postconditions: area, a data member from the base class BasicShape, will be updated to be congruent with the radius of Circle.
*/
void Circle::calcArea()
{
    double circleArea = PI * this->getR() * this->getR(); // pi(r)^2, area of a circle formula

    this->setArea(circleArea); // Stores updated circle area in object
}
