#include "Square.h"
#include <string>

/*
    Summary: Constructs a square object with specified side length and name.
    Parameters: Square side length (s), and the name of the shape (n), the latter of which defaulted to "Square"
    Return: None
    Preconditions: Valid side length for s. No specification for shape name means defaulting to "Square".
    Postconditions: A new Square object is created with data based on input. Rectangle constructor is called to manage data of the base class.
*/
Square::Square(double s, std::string n) : Rectangle(s, s, n)
{
    this->setName(n);
}

/*
    Summary: Changes or initialized the side length of Square object, updating the length, width, and area to be congruent with it.
    Parameters: the side length, s.
    Return: None
    Preconditions: Input should be valid.
    Postconditions: The side, length, width, and area of the Square object will all be changed. calcArea() is called as result of setLength and setWidth.
*/
void Square::setSide(double s)
{
    this->side = s;

    this->setLength(s);
    this->setWidth(s);
}
