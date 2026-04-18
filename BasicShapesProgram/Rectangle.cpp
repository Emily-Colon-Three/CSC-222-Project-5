#include "Rectangle.h"
#include <string>

/*
    Summary: Creates new Rectangle object with parameter values. Area is set based on length and width.
    Parameters: length of the rectangle, (l) width of the rectangle (w), and the name of the rectangle (n).
    Return: None
    Preconditions: valid length and width should be input.
    Postconditions: name of Rectangle object defaults to "Rectangle". A new object is created by this constructor, containing the values of parameter variables.
*/
Rectangle::Rectangle(double l, double w, std::string n)
{
    this->length = l;
    this->width = w;

    this->setName(n);
    this->calcArea(); // Gets and sets the area of new object
}

// This mutator functions alters the length of Rectangle to be newLength, the parameter. It calls calcArea() to update object area, and has no return.
void Rectangle::setLength(double newLength)
{
    this->length = newLength;

    this->calcArea();
}

// This mutator function changes the width of Rectangle to parameter newWidth, then calls calcArea to update object's area. No return is given.
void Rectangle::setWidth(double newWidth)
{
    this->width = newWidth;

    this->calcArea();
}

/*
    Summary: Calculates the area of Rectangle object, sets the area variable to that product.
    Parameters: None
    Return: None
    Preconditions: length and area are set, as well as valid.
    Postconditions: area of Rectangle object, held at the base of BasicShape, is changed to be the area of the rectangle represented by length and width variables.
*/
void Rectangle::calcArea()
{
    double newArea = this->getLength() * this->getWidth();

    this->setArea(newArea);
}
