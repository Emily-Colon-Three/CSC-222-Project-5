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
