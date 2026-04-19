#include <iostream>
#include <string>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main()
{
    cout << "Construction and Polymorphism Testing:" << endl;

    Rectangle rA(3, 5, "Rectangle A");
    Rectangle rB(17, 2, "Rectangle B");
    Circle cA(1, 12, 2.5, "Circle A");
    Circle cB(-2, -7, 15, "Circle B");
    Square sq(5);

    BasicShape* collection[5] = {&rA, &rB, &cA, &cB, &sq}; // Creates dynamic array of basic shapes

    // Loop to print out shape data to verify the success of object construction and polymorphic functions
    for (int i = 0; i < 5; i++)
    {
        cout << "Name: " << collection[i]->getName() << endl;
        cout << "Area: " << collection[i]->getArea() << endl;
    }

    return 0;
}
