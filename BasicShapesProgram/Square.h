/* The Square class represents a square, a type of rectangle. Thus, it is derived from the Rectangle class, adding a "side" variable which acts as both its length and
width. Upon the side being initialized or set, both length and width will match it, in addition to a new area being calculated. */
#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"
#include "BasicShape.h"
#include <string>

class Square : public Rectangle
{
private:
    double side;

public:
    Square(double s, std::string n = "Square"); // Constructor defaults name to "Square"

    inline double getSide()
    {
        return this->side;
    }

    void setSide(double s);
};
#endif // SQUARE_H
