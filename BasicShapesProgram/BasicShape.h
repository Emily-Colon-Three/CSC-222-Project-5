/* This class serves as an abstract base of more specific shape classes, not able to exist as an independent object. It contains the name and area common to all shapes, and member functions
which address those values. These members will be utilized by all derived shape classes. */
#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <string>

class BasicShape
{
private:
    double area;
    std::string name;

public:
    inline double getArea()
    {
        return area;
    }
    inline std::string getName()
    {
        return name;
    }

    void setArea(double newArea);
    void setName(std::string newName);

    virtual void calcArea() = 0; // Pure virtual function; look at derived overrides to see actual properties and operations (though none have parameters nor a return)
};
#endif // BASICSHAPE_H
