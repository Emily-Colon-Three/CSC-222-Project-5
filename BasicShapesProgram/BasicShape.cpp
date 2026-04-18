#include "BasicShape.h"
#include <string>

// Sets BasicShape area to parameter newArea. No return.
void BasicShape::setArea(double newArea)
{
    this->area = newArea;
}

// Sets BasicShape name to parameter newName. No return.
void BasicShape::setName(std::string newName)
{
    this->name = newName;
}
