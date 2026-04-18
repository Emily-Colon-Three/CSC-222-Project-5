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

    virtual void calcArea() = 0; // Pure virtual function
};
#endif // BASICSHAPE_H
