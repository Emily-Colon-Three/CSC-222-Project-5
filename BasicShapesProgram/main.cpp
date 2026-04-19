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

    cout << "Setter Testing:" << endl;

    cA.setR(5);
    cout << "Updated Circle Area: " << cA.getArea() << endl;

    cA.setX(100.2);
    cA.setY(57.36);
    cout << "Updated Circle Area (after center coordinate change): " << cA.getArea() << endl; // Area should be the same as before.

    rA.setLength(30);
    rA.setWidth(20);
    cout << "Updated Rectangle Area: " << rA.getArea() << endl; // Should output 600

    sq.setSide(100);
    cout << "Updated Square Area: " << sq.getArea() << endl; // Should output 10000

    return 0;
}
